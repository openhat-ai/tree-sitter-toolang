# Toolang Grammar

This reference describes the current source syntax and public CST, including
[Unreleased changes](CHANGELOG.md#unreleased) after 0.4.0-alpha.4. Published
packages follow the reference at their matching Git tag.

[grammar.js](grammar.js), [keywords.js](keywords.js), and the layout scanner
[src/scanner.c](src/scanner.c) define parsing. [src/node-types.json](src/node-types.json)
lists generated node/field metadata; [corpus cases](test/corpus) and
[complete-source fixtures](tests/fixtures) exercise the contract. Documents in
`docs/plans/` record design decisions and history.

The parser identifies syntax and preserves authored text. The
[Toolang runtime reference](https://github.com/openhat-ai/toolang/blob/main/docs/program.md)
owns signature defaults, name resolution, semantic validation, binding effects,
and execution. Parsing success does not establish runtime validity.

## EBNF

[GRAMMAR.ebnf](GRAMMAR.ebnf) is generated from `src/grammar.json` by
`npm run generate:ebnf`. It preserves authored rule names and order, including
hidden and recovery rules. Annotations retain fields, aliases, precedence,
token boundaries, and grammar-level metadata; external token productions name
opaque scanner contracts. Regex payloads retain their original JSON-encoded
patterns and flags. The file's header defines its notation.

This is an implementation reference, not a standalone valid-source grammar:
ordinary EBNF tools do not enforce its annotations or scanner contracts.
The lexical, layout, validity, and CST requirements below still apply.
Helper productions do not imply public CST nodes. Do not edit the generated
file; `npm run check:ebnf` verifies it without writing, and CI checks for stale
committed output after regenerating the grammar.

In the schematic forms below, uppercase names are placeholders, brackets mean
optional syntax, and `|` separates alternatives. `BODY` means authored text,
which can be same-line or indented only where the owning production permits.
Code blocks labeled `too` are complete parser examples, not runtime programs
with every external target resolved.

## Lexical Structure

[keywords.js](keywords.js) defines active vocabulary, recognition contexts,
and name exclusions explicitly; the scanner header is generated from it, not
from CST rule names. Active words are recognized only in their grammar context.
Variable names exclude the active Flow vocabulary plus `default` and `none`;
`far` and `near` are contextual recall values and remain valid variable names.
No inactive words are reserved. The [removed spellings](CHANGELOG.md#unreleased)
are neither keywords nor variable exclusions.

| Name positions | Accepted spelling |
| --- | --- |
| `identifier`, `runnable_name`, `agent_name` | `[a-z][a-z0-9_]*` |
| `local_name`, `handle_name`, named `param_name` | Same lowercase pattern, excluding the variable vocabulary above |
| `type_name` | `[A-Z][A-Za-z0-9]*` |
| `cap_name`, `job_name` | `[a-z][a-z0-9_-]*` |
| `runnable_ref` in route lists | `([A-Za-z_][A-Za-z0-9_-]*::)*(agic:\|flow:)?[A-Za-z_][A-Za-z0-9_-]*` |

`local_name`, `handle_name`, and `param_name` are leaves. Parameters additionally
accept `_`, the explicit primary-input marker. `_` cannot be a local destination,
await handle, implicit Flow text head, or same-line let value. Parameter docs
and `{{_}}` remain supported. Other identifier categories keep their existing
constraints; vocabulary membership does not globally prohibit every name.

Keyword matching uses Tree-sitter's
[word extraction](https://tree-sitter.github.io/tree-sitter/creating-parsers/3-writing-the-grammar.html#keyword-extraction)
with `/[A-Za-z_][A-Za-z0-9_]*/`. This boundary pattern is broader than valid
authored names: `runWorker` is one word even though it is not a runnable name.
The word rule precedes narrower name tokens so exact built-in type words are
recognized before equal-length authored type names. Fixed-word alternatives
use aliases of individual keyword tokens to retain leaf CST nodes; wrapping
the entire choice in `token(...)` would bypass keyword extraction.

The generated EBNF records horizontal `extras` and required-separator rules;
it does not insert optional spaces between every pair of tokens. Apply these
rules to every structural production:

- A token is indivisible. Adjacent keywords, names, or numbers require one or
  more spaces or tabs; a newline cannot substitute for that separator.
  A continuous ASCII word-character sequence (`[A-Za-z0-9_]+`) cannot be split
  to satisfy a production: `runworker`, `job2`, and `2times` remain whole.
  This does not broaden valid names or integers.
- Independent grammar symbols delimit tokens and allow optional spaces or tabs
  on either side. Examples: `flow work(input?:Text)->Text[]:`,
  `let h=async run worker`, `generate 2->Text:Text.`, and `run worker# Note.`.
  Delimiting tokens does not make an otherwise invalid production legal.
- Compound symbols stay contiguous: `->`, `+=`, `-=`, and `[]` cannot become
  `- >`, `+ =`, `- =`, or `[ ]`. `Text []` is valid. Parentheses are separate
  tokens, so `( )` is valid. Comment markers `#@`, `##`, `##!`, and `#!` also
  keep their spelling; separating them may introduce a different comment kind.
- Punctuation inside a name or reference is part of that token: `my-skill` and
  `ns::flow:work` do not allow internal whitespace. A raw `with` reference needs
  an explicit separator after its kind: `with skill ./foo` is valid;
  `with skill./foo` is invalid because `.` is reference text, not a delimiter.
- Once a production selects Content, its interior remains literal. For example,
  `let text = 2times runworker` is text. Active operation heads still select
  syntax at the boundaries described below.

Tree-sitter's horizontal `extras` handle optional spacing. Required separators
use hidden rules. The external scanner checks the complete right boundary of
integer tokens without consuming punctuation; all counts, windows, lanes, and
numeric directives share that check. Integer nodes remain leaves, including
leading zeros. Numeric value one requires `lane`/`time`, including `01`; all
other integers use `lanes`/`times`. Newlines, indentation, and raw text
remain owned by the external scanner. No whitespace helper appears in the CST.

At flow statement and named-let value boundaries, complete active operation
words select syntax before the free-form text alternative. Thus `runworker`
remains text, while incomplete `run` or malformed `run worker extra` is an
error. The scanner's binding classifier is shared across bindable operations;
`exec`, `until`, and `_` retain separate diagnostics because they cannot
be bound. Explicit text bodies do not apply operation-head classification.
Recovery text excludes leading horizontal whitespace so it cannot change the
start of a competing structural token. Once a colon introduces an inline body,
the content production handles missing content; malformed-tail recovery cannot
reinterpret that header.

### Comments and Documentation

All four categories are comments; the CST has no generic comment wrapper.
Each physical comment line produces one node. Full-line ranges start at `#`
after indentation and include the newline when present. Inline `plain_comment`
ranges exclude the newline. A final comment may end at EOF without a newline.

- `#` is a **plain comment**, including inline comments where `line_end` allows
  them. Inline `##`, `#@`, `##!`, and `#!` remain plain comments.
- `#!` is a **shebang comment** only at byte zero. Later or indented shebangs
  are plain comments. The interpreter text is not validated or executed.
  If the Tree-sitter runtime skips a leading BOM, `#!` after it is still a
  plain comment.
- `##` is an **item doc comment**. Consecutive lines document the immediately
  following supported item or statement at the same indentation. Blank lines,
  plain/module comments, other syntax, and scope endings interrupt attachment.
  Consumers own attachment; the parser exposes individual lines.
- `#@` is a **module doc comment** at column zero between top-level declarations
  or before/after them. It documents the complete module, interrupts item-doc
  attachment, and does not supply a runnable's calling description. Indented
  structural `#@` is invalid. Prefer `#@` in new source; the old `##!` spelling
  remains accepted, including its historical indented structural positions.
  Consumers collect column-zero module docs; accepting indented legacy comments
  does not add parent-documentation semantics.
- Inside explicit text blocks, every marker remains literal text at or beyond
  the text baseline, including the first text line.

`## @param NAME DESCRIPTION` documents one runnable parameter. Spaces/tabs after
`##` are optional; those after `@param` and the name are required. The name uses
`param_name`, including `_`. A description is required on the same physical
line; Unicode, punctuation, `#`, and further `@` characters remain text. There
is no continuation syntax. Types and optionality come from the signature.

Only leading `@param` followed by a space, tab, line ending, or EOF selects the
tag: `@parameter`, `@parametric`, `@param:`, `@return`, or `@param` later in prose
remain ordinary item-doc text. A malformed
reserved tag is a syntax error, never plain documentation, and recovery stays
on that physical line. Module docs never interpret tags. Unknown or duplicate
parameter names are syntactically valid; consumers validate binding and combine
runnable/parameter descriptions for help and calling hints.

| Public node | Fields |
| --- | --- |
| `plain_comment`, `shebang_comment` | Leaves with full source text. |
| `module_doc_comment` | Optional `text: comment_text`. |
| `item_doc_comment` | Optional `text: comment_text` or `parameter: param_doc_tag`, never both. |
| `param_doc_tag` | Required `param: param_name` and `description: comment_text`; queryable `"@param"` token. |

Empty doc comments omit `text`. Field ranges exclude markers and leading
separating whitespace, preserve trailing whitespace, and use exact UTF-8 byte
positions. `param_doc_tag` is a child of item documentation, not a fifth
comment category.

```too
#!/usr/bin/env too
#@ Tools for concise summaries.

## Summarize material when a short overview is needed.
## @param _ Source material to summarize.
## @param style Preferred summary style.
agic summarize(_: Text, style?: Text):
  Summarize {{_}}.
```

## Block Layout

- Top-level declarations start at column zero. The first substantive entry of
  a body must be deeper than its header and establishes that body's baseline.
  Structural siblings share that baseline; deeper structural entries require
  an enclosing body. Dedents must reach an existing ancestor baseline.
- Blank lines and structural comments do not establish indentation or satisfy
  a required body. They cannot make an empty block borrow an outer statement.
  Cap/job bodies remain optional; `pass` is allowed only in agic/flow bodies.
- Any positive indentation width is supported. Tabs advance to eight-column
  stops. A structural prefix cannot mix spaces and tabs, and siblings cannot
  interchange their spellings at the same baseline. Different nested levels
  may use different styles; there is no whole-file style restriction.
  Form feed is not indentation.
- Explicit multiline text establishes its own baseline. Deeper Markdown
  indentation, keywords, and `#`/`##` lines are literal content. Dedenting below
  the text baseline ends the text block. Relative indentation and source bytes
  are preserved. Same-line text ends on that physical line.
- Structural `##` documentation attaches to an immediately following entry
  at the same indentation; blank lines and ordinary comments detach it.

### Validity and Recovery

- Malformed entries remain invalid during recovery. Unexpected content is
  contained to its physical line so it cannot borrow tokens from a later header.
- Missing required structure emits `invalid_missing_body`; missing text emits
  `invalid_missing_content`; an existing flow/repeat body without its required
  statement emits `invalid_missing_statement`. Each is a zero-width leaf at the
  next substantive boundary or EOF, consuming no source and opening no frame.
  Empty cap/job bodies and directives-only agics remain valid. Directives alone
  cannot satisfy flow statements; `until` alone cannot satisfy repeat statements;
  `from` alone cannot supply inline reducer content. Indented Markdown in explicit
  text is real content, while structural comments cannot fill a required body.
  In malformed text bodies, outer comments before the diagnostic remain trivia
  on the owner, outside `content`. They cannot resume a text body after a dedent.
- EOF can finish a real line and close open bodies; it cannot supply body
  content. Scanner state is serialized completely. Input exceeding its capacity
  is rejected, never silently truncated. With Tree-sitter's 1024-byte buffer,
  168 frames fit, including the root and any structural or text-mode frames;
  this is not a uniform source-nesting limit.

The generated EBNF retains external layout signals such as `_indent` and
`_dedent`; their behavior is specified above, not inferred from their names.
They do not expose CST wrapper nodes. Recovery branches also remain in the
implementation reference and must not be mistaken for valid source alternatives.
For example, an empty repeat retains `repeat_statement.body: repeat_body` containing
`invalid_missing_body`; the following sibling remains outside that body. The
generated `repeat_body.statement` field is optional only to represent this
diagnostic state. Every valid repeat still requires an ordinary statement.


Consumers must reject native `ERROR`, missing tokens, and every `invalid_*`
descendant before lowering, formatting, or execution. `root.has_error` alone
is insufficient because explicit diagnostic nodes are ordinary CST nodes.
Generated field metadata describes recovery trees too; optional metadata does
not relax the valid-source requirements below.

## Declarations

`source_file` contains declarations and trivia directly, in source order. The
accepted declaration heads are `with`, `struct`, `psyche`, `skill`, `service`,
`prompt`, `task`, `chore`, `context`, `instruct`, `agic`, and `flow`. There is no
public `item` wrapper. Arbitrary top-level prose is invalid.

### Imports

Schematic form: `with KIND REFERENCE`, where `KIND` is `psyche`, `skill`,
`service`, or `prompt`. A reference requires nonblank text after its separator;
it is raw text rather than a parsed path or expression. The `with` node exposes
`kind: cap_kind` and `reference: text_line`; comments and the terminator belong
to `line_end`.

```too
with skill ./skills/review
with prompt library/summary
```

## Types

A `type` has `base: builtin_type | type_name` and zero or more `suffix: array_suffix`
fields. Built-ins are exactly `Text`, `Number`, `Boolean`, `Json`, and `Part`.
Each contiguous `[]` adds an array suffix; `Text[][]` is valid. There is no
source-level generic notation such as `Run<Text>`.

A struct has `name: type_name` and `body: struct_body`. It requires at least one
`field`; each field has `name: identifier`, optional `optional: optional_marker`
(`?`), and required `type: type`.

```too
struct Report:
  summary: Text
  count?: Number
  parts: Part[]
```

## Caps

Schematic form: `KIND NAME:` followed by an optional indented body, with `KIND`
from `psyche`, `skill`, `service`, or `prompt`. The public node has that kind's
name and fields `kind`, `name: cap_name`, and `body: cap_body`.

A cap body contains repeated `property` fields followed by optional
`content: content`. A property has `key: identifier`, `operator: assign_operator`
(`=`), and raw `value: text_line`. Empty and property-only bodies are valid.
A property value can contain only spaces/tabs at the parser level. Once text
starts, later property-looking lines remain text. Same-line cap bodies are not
accepted. Property schemas and required content are validated by the runtime.

```too
skill review:
  source = library/review

  Review the supplied changes.
```

### Prompts

Prompt declarations share the cap body grammar and have no typed parameter list.
A leading property-looking line is still a property syntactically; the runtime
rejects prompt properties. Placeholders such as `{{_}}` and `{{tone}}` remain
literal bytes in `content`; extraction and substitution belong to consumers.

```too
prompt rewrite:
  Rewrite {{_}} in the requested {{tone}} tone.
```

## Jobs

`task NAME:` and `chore NAME:` expose `name: job_name` and `body: job_body`.
Job bodies use the same optional property-prefix/content shape as caps, with
repeated `property` fields and optional `content`. Scheduling and property
validation are runtime responsibilities.

```too
chore review_changes:
  title = Review changes

  Review the latest changes.
```

## Context And Instruct

Schematic forms: `context [NAME]: BODY` and `instruct [NAME]: BODY`. Each exposes
optional `name: identifier` and required `content: content`. Both same-line and
indented text are accepted; omission of the name remains visible as an absent
field. Named selection and defaults are runtime semantics.

```too
instruct: Return a concise answer.
context project:
  Use the supplied project context.
```

## Runnable Signatures

Schematic header: `agic|flow [NAME][(PARAMS)] [-> TYPE]:`. Names are optional;
multiple unnamed declarations parse. A parameter has a required `param_name`,
optional `?`, and optional `: TYPE`. A parameter list can be empty and has no
trailing comma. Type annotations use the [type syntax](#types).

Both declarations expose optional `name: runnable_name`, `params: params`, and
`return: type`. A `params` node has repeated `param` fields; each `param` has
`name`, optional `optional`, and optional `type`. Omitted lists, empty lists,
and omitted types have distinct trees. The parser does not insert defaults or
validate parameter order, duplicates, or declaration-name uniqueness.

## Shared Directives

Agics and flows accept directives before messages/statements. Each `directive`
exposes `key`, `operator`, and `value`. There is no separate settings wrapper.

| Keys | Operators | Parsed value |
| --- | --- | --- |
| `models`, `tools`, `skills`, `services`, `psyches`, `prompts` | `=`, `+=`, `-=` | Nonblank raw `directive_value` up to a comment or line ending |
| `hands`, `handoffs` | `=` | `route_value`: comma-separated `runnable_ref` entries, or standalone `none` / `*` |
| `recall` | `=` | `recall_value`: comma-separated `far` / `near`, or standalone `none` / `default` / `*` |
| `lanes` | `=` | `integer_literal` or `default` |
| `context`, `instruct` | `=` | `text_ref`: `identifier`, `default`, or `none` |

Values are required. Special list values stand alone. Route references use the
broader spelling in [Lexical Structure](#lexical-structure); they are not ordinary
named call targets. `recall = auto` is invalid; query-expression validation,
duplicate directives, resource selection, and numeric ranges belong to the
runtime. Runnable-local `context:` / `instruct:` blocks and bare selectors are
invalid. Full examples appear [below](#shared-directives-and-flow-clauses-example).

## Text

Same-line text, indented text, and implicit paragraphs expose the same semantic
`content` node. Flow and message paragraphs have different keyword boundaries.
Cap/job text follows its property prefix. Source forms are selected by their
owner; they are not interchangeable everywhere.

Same-line content requires a non-space/tab character before any comment marker
and ends on that physical line. A raw `with` reference also requires nonblank
text after its separator; it is a direct `text_line`, not a `content` value.
Indented explicit text treats all markers as literal and ends on dedent; Markdown
fences are ordinary text. Leading blank lines may precede explicit text, but
outer structural comments cannot be followed by a resumed text body. Reducer
headers retain the exception described under Flow. In implicit paragraphs,
line-initial comment markers are structural while embedded `#` remains text.
The scanner preserves text and paragraph boundaries. The hidden recognition
rules produce `text_line` leaves, without additional public wrapper nodes.

## Agic

An agic has `body: agic_body`, containing repeated `directive` and `message`
fields directly in source order. Directives must precede messages. A body may
contain only directives; otherwise at least one message is required. Standalone
`pass` is the whole-body alternative and cannot follow directives or coexist
with messages.

A `message` has optional `role: role` (`user`, `assistant`, or `tool`) and
required `content: content` in valid source. Role headers require a colon and
actual content, either same-line or indented. Bare paragraphs produce the same
message node with an absent role; no default role is fabricated in the CST.

At every substantive line, complete agic keywords select structural syntax
before paragraph fallback. Malformed active heads expose
`invalid_agic_reserved_message` or native errors. Prefixes remain text; use an
explicit role when literal content begins with an active keyword. Adjacent bare
lines and one intervening blank line stay in the same paragraph; two blank
lines, a structural comment, dedent, or EOF ends it. Embedded `#` remains text.

```too
agic summarize(_: Text, style?: Text) -> Text:
  models = *
  user:
    Summarize {{_}} in the requested style.
  assistant: Ready.
```

## Flow

A flow has `body: flow_body` with repeated `directive` and `statement` fields in
source order. Directives precede statements; directives alone are insufficient.
Standalone `pass` is the whole-body alternative and cannot follow directives or
coexist with statements.

### Statement Forms

These are schematic forms. Named targets use bare `runnable_name`; inline
runnables use `[-> TYPE]: BODY`. No target accepts an argument list. An inline
body is final in its header; named headers end at `line_end` without trailing
prose punctuation. All statement keywords are lowercase and case-sensitive.

| Operation | Forms | Notable CST fields |
| --- | --- | --- |
| `run` | `[async] run NAME` or `[async] run [-> TYPE]: BODY` | Optional `async`; `runnable: runnable_name` or `agic: inline_agic` |
| `exec` | `exec NAME` or `exec [-> TYPE]: BODY` | `target: runnable_name \| inline_agic` |
| `spawn` | `spawn NAME` or `spawn [-> TYPE]: BODY` | `target: runnable_name \| inline_agic` |
| `await` | `await HANDLE` | `handle: handle_name` |
| `seek` | `seek AGENT NAME` or `seek AGENT [-> TYPE]: BODY` | `agent: agent_name`; `runnable` or `agic` |
| `ask` | `ask: BODY` | `content: content` |
| `generate` | `generate N [in N lane\|lanes] using NAME` or `generate N [in N lane\|lanes] [-> TYPE]: BODY` | `count`, optional `lanes`, `runnable: runnable_name \| inline_agic` |
| `map` | `map [in N lane\|lanes] using NAME` or `map [in N lane\|lanes] [-> TYPE]: BODY` | Optional `lanes`; `runnable: runnable_name \| inline_agic` |
| `reduce` | `reduce using NAME` or `reduce [-> TYPE]: BODY`, optionally with an initializer below | `runnable: runnable_name \| inline_agic`, optional `from: content` |
| `keep`, `drop` | `keep\|drop first\|last N` or `keep\|drop [in N lane\|lanes] if NAME\|INLINE` | `selection: position`, or `runnable` and optional `lanes` |
| `sort` | `sort ascending\|descending [in N lane\|lanes] by NAME\|INLINE` | `order`, `runnable`, optional `lanes` |
| `repeat` | `repeat [N time\|times] [windowing N]:` plus a structural body | Optional `count` / `window`, required `body: repeat_body` |
| Bare prose | Implicit paragraph | `implicit_run_statement.content: content` |

For `generate`, `map`, and `reduce`, named targets require `using` and inline
targets omit it. `if` and `by` introduce either form. Keep/drop and sort also
allow the lane clause after a named target; generate and map allow it only
before the target. Count/selection/order immediately follows its verb. Commas
and `with` are not complement syntax. Integer agreement is specified under
[Lexical Structure](#lexical-structure); positive ranges and predicate/score
output types are runtime validation.

### Bindings

- `let NAME = OPERATION` exposes `let_statement.local: local_name` and
  `statement: OPERATION_NODE`.
- `let OPERATION` exposes `statement` without a local name.
- `let NAME = BODY` exposes `local` and `value: content`, with same-line or
  indented text. Local type annotations and array literals have no dedicated
  binding syntax.

Every explicit operation in the table except `exec` can appear after `let`.
`until` is a repeat clause, not a bindable operation. After `=`, complete operation heads
select syntax before text even when malformed; `runworker` remains text.
`until` and `_` also cannot become same-line binding text. Use an indented text
body for these literal words. A missing `=` exposes
`invalid_flow_reserved_statement` without borrowing later source. Binding effects
and value types belong to the runtime.

### Launch and Await Bindings

`async` modifies only `run` and adds no wrapper node. `spawn` uses its own node;
both accept named and inline targets. Neither accepts `using`, arguments,
lanes, counts, or another async modifier. `await` accepts exactly one
`handle_name`, without expressions, field access, qualifiers, or a block.

All four await spellings parse: `await h`, `let x = await h`, `let await h`, and
`let h = await h`. `_` cannot be an explicit destination or handle. Nested launch
expressions such as `await spawn worker` are invalid. Handle lookup, launch
ownership, admission, waiting, and result bindings are runtime responsibilities.
`Run` and `Future` are ordinary authored type names, not built-ins.

```too
flow research:
  let job = spawn -> Text[]:
    List three sources about {{_}}.
  run: Prepare a summary outline.
  let sources = await job
  run: Summarize {{sources}} using this outline: {{_}}.
```

### Reduce Initializers

A named reducer uses `reduce using NAME:` followed by an indented `from: BODY`.
Without an initializer, omit the colon. A multiline inline reducer puts `from:`
after nonempty reducer text at that text's baseline; deeper `from:` stays
literal. A same-line inline reducer cannot have a following initializer.
The `runnable` field excludes the initializer; `from` contains a separate
`content` value. Inline reducers expose `inline_agic.content` in either form.
Unlike generic explicit text, reducer headers permit structural comments before
the first body row. An initializer alone cannot supply reducer content.

### Repeat Conditions

Count and window are independently optional; `windowing N` precedes the header
colon. Every repeat requires at least one ordinary statement and permits zero
or one `until` before, between, or after its statements at the same baseline.
Nested repeats own their conditions. Empty/condition-only bodies, duplicate
conditions, and conditions outside repeats are invalid.

`until NAME` accepts a bare `runnable_name`; `until: BODY` accepts same-line or
multiline text. Qualified targets, arguments, modifiers, named colon bodies,
output annotations, and result bindings are invalid. The body has repeated
`statement` fields and optional `until: until_clause`; the latter has required
`target: runnable_name | inline_agic_body`. Statements, condition, and trivia
remain direct children in source order. Count preceding statement fields to
obtain the condition index; nested repeats count as one, trivia as zero.
See [flexible repeat fixtures](tests/fixtures/flexible_repeat.too).

### Implicit Prose Boundaries

Every substantive physical line, including continuations, checks its first
complete token against the Flow vocabulary. Active structural keywords select
syntax and cannot fall back to prose when malformed. For example, `run`,
`run:`, and `run,` select keyword parsing; `runner` and `run_suffix` remain text.
`_` selects syntax; `_suffix` remains text. Connector-only words and declaration
or directive heads are invalid at a statement position. `from:` belongs only
to reduce and `windowing` only to repeat headers.

Adjacent non-keyword lines and one intervening blank line stay in the same
implicit run. Relative Markdown indentation can continue prose; a keyword-led
line at an invalid structural depth is an error. Two blank lines, a structural
comment, dedent, or EOF ends the paragraph. Capitalize an active first word or
use explicit `run:` content to keep it literal. Removed spellings such as
`scatter`, `storm`, `rank`, and `thunk` are ordinary names/text where allowed.
`invalid_flow_reserved_statement` is a historical diagnostic name, not evidence
of a separate reserved legacy vocabulary.

### Shared Directives and Flow Clauses Example

```too
instruct:
  Follow the requested output contract.

context project:
  Use the supplied project context.

agic expand(_) -> Text[]:
  prompts = *
  context = project
  user: Expand {{_}} into items.

agic merge(_):
  user: Incorporate {{_}} into {{_1._}}.

flow research(_):
  tools -= *
  hands = expand, agic:merge
  handoffs = none
  recall = far, near
  lanes = 4
  instruct = default
  context = project
  run expand
  reduce using merge:
    from: Initial report.
  repeat 5 times windowing 3:
    run: Improve {{_}}.
    until: Compare {{_}} with {{_1._}} and {{_2._}} for stability.

flow seeded(_):
  run -> Text[]:
    Expand {{_}} into items.
  reduce:
    Incorporate {{_}} into {{_1._}}.
    from:
      Initial report.
```

## CST Node Contract

Public nodes describe authored declarations, values, calls, and structural
bodies. Fields identify each child's role; the relevant sections above describe
them beside their constructs. [Generated metadata](src/node-types.json) lists
all nodes and fields, including recovery states.

Lexical names and tokens are leaves. Parser helpers, forwarding nodes, and list
wrappers are hidden. Structural bodies remain public because they own entries,
trivia, and scope. Repeated fields retain source order. There is no `statements`
or `messages` wrapper and no extra node distinguishing source text forms.

`content` contains direct `text_line`, `newline`, and `blank_line` children.
Same-line content has one `text_line`; its trailing `line_end` belongs to the
owner. Indented and implicit content retain physical endings and paragraph
boundaries. Text leaves preserve source bytes, including whitespace and relative
indentation; parsing does not trim or dedent. Header comments and terminators
remain outside `content`. Raw references and property values use `text_line`
directly because they are not prompt content.

Queries and consumers must adopt node names, field paths, and ranges together.
The [CST migration from alpha.4](CHANGELOG.md#cst-migration-from-alpha4) records
the complete breaking path/range changes; historical contracts remain in tags.

## Compatibility

`##!` remains accepted alongside `#@` as described under
[Comments and Documentation](#comments-and-documentation). No inactive spelling
is reserved. Active words retain contextual recognition and variable exclusions.
Source parsing does not imply runtime support for every syntactically valid form.

The following anchors preserve existing migration links; chronological records
are maintained in `CHANGELOG.md`.

### Unreleased

See [Unreleased changes and CST migration](CHANGELOG.md#unreleased).

### Changes in 0.4.0-alpha.4

See [0.4.0-alpha.4 changes](CHANGELOG.md#040-alpha4---2026-10-06).

### Changes in 0.4.0-alpha.3

See [0.4.0-alpha.3 changes](CHANGELOG.md#040-alpha3---2026-10-06).

### Changes in 0.4.0-alpha.2

See [0.4.0-alpha.2 changes](CHANGELOG.md#040-alpha2---2026-10-05).

### Changes in 0.4.0-alpha.1

See [0.4.0-alpha.1 changes](CHANGELOG.md#040-alpha1---2026-10-05).

### Changes in 0.3.3

See [0.3.3 changes](CHANGELOG.md#033---2026-09-24).
