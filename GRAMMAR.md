# Toolang Grammar

This document describes the current public Toolang grammar, including unreleased
changes since version 0.4.0-alpha.4.
The source of truth is [grammar.js](grammar.js), together with the layout scanner in
[src/scanner.c](src/scanner.c). Runtime defaults and validation are identified
separately from parsing rules. Documents under `docs/plans/` record historical
feature definitions rather than the current syntax reference.

## Unreleased

- Simplify the public CST without changing accepted source syntax: expose
  declarations directly, use leaf names and tokens, and remove forwarding body
  and type nodes. This is a breaking change for CST consumers; see
  [CST node contract](#cst-node-contract) for the migration.

## Changes in 0.4.0-alpha.4

- Add `async run` with the existing named and inline run targets, and `await h`
  for a single local handle from either `async run` or `spawn`. Both support
  named and nameless `let`.
  This implements the grammar scope of the
  [async run and handle await definition](https://github.com/openhat-ai/toolang/pull/685).
  Await blocks are excluded.
- `run_statement` gains an optional `async: flow_async_keyword` field; existing
  `runnable` and `agic` fields are unchanged. `await_statement.handle` reuses
  `local_name` for a non-keyword variable name. Await requires an explicitly
  retained named handle; `await _` is invalid in every binding form.
- `local_name` is a leaf containing the identifier text. Queries that previously
  captured its nested `snake_name` must capture `local_name` directly; existing
  `name` and `handle` fields and their source ranges are unchanged.
- Complete lowercase `async` and `await` now select syntax at flow statement
  and same-line let-value boundaries. Malformed uses cannot become prose.
  Move affected literal text into an explicit text body or capitalize its first
  word. Keyword prefixes, agic messages, and explicit text remain literal.
  These new keywords are also excluded from variable names.
- Reserve `_` at flow statement and same-line let-value boundaries. Bare `_`
  and `let x = _` are invalid; move literal `_` into an explicit text body.
  Primary-input parameters, parameter documentation, and `{{_}}` templates
  remain supported. `_` is not an explicit let binding destination.
- Execution, handle validation, binding effects, and formatting require matching
  Toolang support. No built-in handle type or generic type syntax is added.

## Changes in 0.4.0-alpha.3

- Implement [flexible repeat conditions](docs/plans/flexible-repeat-conditions.md):
  zero or one `until NAME` or `until: BODY` at any body position, with optional
  count and window. Every repeat still requires an ordinary Flow statement.
- **CST migration:** read `repeat_statement.body: repeat_body`, its repeated
  `statement` fields, and optional `until: until_clause` with a required `target`.
  The old root-level `until` field is removed; consumers must adopt these paths
  with the matching grammar package. Nodes retain source order.
- **Source migration:** rename keyword-named variables and parameters together
  with their references. Move same-line let text starting with `until` into an
  indented text body. Variable naming follows [Lexical Structure](#lexical-structure).

## Changes in 0.4.0-alpha.2

- Add `spawn R`, `spawn: BODY`, and `spawn -> T: BODY` in flow and repeat
  bodies, with optional `let job =` or nameless `let` wrappers. The public
  `spawn_statement.target` field is a required `runnable | inline_agic` union;
  `flow_spawn_keyword` identifies the keyword.
- Reserve complete lowercase `spawn` at statement boundaries and after let
  prefixes. Existing prose such as `let text = spawn a process` now reports a
  syntax error instead of becoming Content. Existing explicit text bodies and
  keyword prefixes such as `spawned` remain literal.
- This implements the [approved spawn syntax](docs/plans/flow-spawn.md).
  Execution, handle binding, and canonical formatting require downstream Toolang
  support. This release introduces no async/await syntax.

## Changes in 0.4.0-alpha.1

This breaking syntax change implements the grammar portion of the approved
[Flow array definition](https://github.com/openhat-ai/toolang/blob/main/docs/plans/flow-array-semantics.md).
A matching Toolang runtime is required; parser support alone does not change
execution or stored values.

- Use `run` for a single call, including array-producing and array-consuming
  calls. `scatter` and `gather` are removed. Inline `run` defaults to Text, so a
  former implicit array-producing `scatter:` needs `run -> Text[]:`.
- Rename `storm` to `generate` and `settle` to `reduce`. Their public statement
  nodes become `generate_statement` and `reduce_statement`; count, lanes,
  runnable, and initializer fields retain their existing meanings.
- For `generate`, `map`, and `reduce`, a named runnable requires `using` and an
  inline runnable must omit it. `generate` and `map` put an optional lane clause
  before the target. Let binding and discard wrappers use the same rules.
- Removed statement nodes are no longer emitted. Their keyword nodes remain
  reserved for migration diagnostics. Removed or malformed collection heads
  cannot become implicit runs or same-line `let name = BODY` text. Explicit
  `run:` bodies and indented Content bindings can still contain literal text.
- `run`, `exec`, `seek`, `keep`/`drop` predicates, `sort`, and `repeat` retain
  their target and clause syntax. The collection migration added no async,
  await, or spawn syntax and no `produce` or `gen` alias.

| Previous source | Replacement |
| --- | --- |
| `scatter using expand` | `run expand` |
| `scatter [using]: BODY` | `run -> Text[]: BODY` |
| `scatter [using] -> T[]: BODY` | `run -> T[]: BODY` |
| `gather using merge` | `run merge` |
| `gather using [-> T]: BODY` | `run [-> T]: BODY` |
| `storm N [in P lanes] using worker` | `generate N [in P lanes] using worker` |
| `storm N [in P lanes] using [-> T]: BODY` | `generate N [in P lanes] [-> T]: BODY` |
| `settle using merge` | `reduce using merge` |
| `settle [using] [-> T]: BODY` | `reduce [-> T]: BODY` |
| `map [in P lanes] using [-> T]: BODY` | `map [in P lanes] [-> T]: BODY` |

Move a trailing lane clause before the target in `generate` and `map`. Preserve
bindings, explicit return types, counts, and `from:` initializers. Array behavior
and the removal of runtime shape/dim are owned by the Toolang definition, not by
the grammar. The following 0.3.3 notes describe that historical release;
this section supersedes its collection statement syntax.

## Changes in 0.3.3

- Agics and flows share query directives (`models`, `tools`, `skills`,
  `services`, `psyches`, `prompts`), route lists (`hands`, `handoffs`), `recall`,
  `lanes`, and named `instruct`/`context` selectors. Selectors use `=`; local
  `instruct:`/`context:` blocks and bare selector references are invalid.
- Replace `recall = auto` with `recall = far, near`. Query directives accept
  `=`, `+=`, and `-=`; all other directives accept only `=`.
- `scatter` no longer takes a count. Use `scatter using name` or `scatter:`
  for list generation; use `storm N using name` for a counted expansion.
- `settle` accepts a trailing `from:` initializer. `repeat` accepts
  `windowing N` before its header colon. See [Flow](#flow) for clause ownership
  and examples.
- CST consumers should read shared `directive` nodes (`key`, `operator`,
  `value`), the separate `settle_statement.from` field, and
  `repeat_statement.window`. Prompt selectors have no `settings` subtree.

## Notation

```ebnf
x ::= y    grammar production
x | y      alternative
(x)        grouping
x?        optional
x*        zero or more
x+        one or more
"text"    literal token
/.../     lexical token
```

## CST Node Contract

Grammar reuse is separate from the public tree. Lexical matching and grouping
rules are hidden. In valid syntax, a public name or lexical token directly
owns its text and has no children. Fields identify the role within a parent. Shared nodes describe the
same syntax across contexts; specialized names retain distinct constraints.

| Public node | Meaning |
| --- | --- |
| `identifier` | Ordinary lowercase name used for fields, property keys, context/instruct declarations, and named text references. |
| `runnable_name` | Named agic/flow declaration or call target; distinct from an inline agic. |
| `type_name` | Authored type name in a declaration or type reference; distinct from `builtin_type`. |
| `local_name` | Non-keyword local binding or await handle name; excludes `_`. |
| `param_name` | Parameter name in a signature or documentation, including primary input `_`. |
| `cap_name`, `job_name`, `agent_name` | Capability, job, and agent names with their existing lexical rules. |
| `text_line`, `text_inline`, `text_body` | Reusable text forms; fields distinguish values, references, and bodies. |
| `directive_operator`, `assign_operator` | Query directive operator (`=`, `+=`, `-=`) and assignment-only operator (`=`). |
| `array_suffix` | One `[]` suffix; `type.suffix` may contain several. |

`source_file` contains declarations and trivia directly. `type.base` points to
`builtin_type` or `type_name`; `type.suffix` points to `array_suffix` leaves.
Structural bodies such as `flow_body`, `agic_body`, `job_body`, and `repeat_body`
remain because they contain distinct statement, directive, property, or condition
structures. `runnable_ref` remains distinct from `runnable_name`: route lists
allow qualified references with namespaces and optional runnable kinds.
`text_ref` retains its `default_keyword`, `none_keyword`, or
`identifier` child to distinguish its alternatives; route and recall values
retain their selections and list elements.

CST migration from earlier versions:

| Previous shape | Current shape |
| --- | --- |
| `item → declaration` | Direct declaration under `source_file`. |
| `agic_name / flow_name / runnable → snake_name` | `runnable_name` leaf. |
| `field_name / property_key / context_name / instruct_name → snake_name` | `identifier` leaf. |
| `struct_name / user_type → type_name → pascal_name` | `type_name` leaf. |
| `local_name / param_name → snake_name` | The same semantic node as a leaf; `_` parameters have the same leaf shape. |
| `agent → snake_name` | `agent_name` leaf. |
| `directive_op` | `directive_operator` leaf. |
| `builtin_type / role / directive_key / recall_source / assign_operator → anonymous token` | The named token directly owns its text. |
| `base_type → builtin_type / user_type` | Direct `type.base: builtin_type / type_name`. |
| `type_suffix → array_suffix` | Direct `type.suffix: array_suffix`. |
| `cap_ref / property_value → text_line` | Direct `reference` / `value` field pointing to `text_line`. |
| `cap_body → text_body` | Direct `body: text_body`. |
| `context_body / instruct_body → text_inline` | Direct `body: text_inline`. |

Field names and surviving nodes' source ranges are preserved. Update queries to
capture the new leaf or direct child. Consumers should enumerate declarations
without unwrapping `item`, and read cap text directly from its `body` node rather
than searching for a second `text_body`. No runtime behavior or binding rule is
changed. Consumers must reject missing tokens, `ERROR` nodes, and `invalid_*`
diagnostics before interpreting declarations.

## Lexical Structure

```ebnf
newline ::= "\n" | "\r\n"
blank_line ::= newline
line_end ::= plain_comment? newline

plain_comment ::= "#" /[^\r\n]*/ newline?
shebang_comment ::= "#!" /[^\r\n]*/ comment_end
module_doc_comment ::= ("#@" | "##!") horizontal_space? comment_text? comment_end
item_doc_comment ::= "##" horizontal_space? (param_doc_tag | comment_text)? comment_end
comment_end ::= newline | EOF
param_doc_tag ::= "@param" horizontal_space param_name horizontal_space comment_text
comment_text ::= /[^ \t\r\n][^\r\n]*/
horizontal_space ::= /[ \t]+/
trivia ::= plain_comment | shebang_comment | module_doc_comment | item_doc_comment | blank_line

identifier ::= /[a-z][a-z0-9_]*(_[a-z0-9]+)*/
kebab_name ::= /[a-z][a-z0-9]*(-[a-z0-9]+)*/
snake_kebab_name ::= /[a-z][a-z0-9_-]*/
text_line ::= /[^#\r\n]+/
indented_raw_text ::= a nonblank content line at or beyond its text baseline
integer_literal ::= /\d+/
variable_name ::= a full match of /[a-z][a-z0-9_]*/ that is not a keyword
```

Variable names use exact, case-sensitive keyword membership. The keyword rules
and reserved-word groups in `grammar.js`, including legacy words, are the source
of truth; `src/keywords.h` is generated from them. `local_name` and `param_name`
are leaves using this rule; `param_name` additionally accepts `_`. `_` is the
special primary-input parameter name and a reserved flow word; it is not a
`local_name`. Other identifier categories retain their rules.

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

Only the exact leading word `@param` is reserved: `@parameter`, `@parametric`,
`@return`, or `@param` later in prose remain ordinary item-doc text. A malformed
reserved tag is a syntax error, never plain documentation, and recovery stays
on that physical line. Module docs never interpret tags. Unknown or duplicate
parameter names are syntactically valid; consumers validate binding and combine
runnable/parameter descriptions for help and calling hints.

| Public node | Fields |
| --- | --- |
| `plain_comment`, `shebang_comment` | Leaves with full source text. |
| `module_doc_comment` | Optional `text: comment_text`. |
| `item_doc_comment` | Optional `text: comment_text` or `parameter: param_doc_tag`, never both. |
| `param_doc_tag` | Required `name: param_name` and `description: comment_text`; queryable `"@param"` token. |

Empty doc comments omit `text`. Field ranges exclude markers and leading
separating whitespace, preserve trailing whitespace, and use exact UTF-8 byte
positions. Consumers trim contributions and join nonempty module-doc text in
source order. `param_doc_tag` is a child of item documentation, not a fifth
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

Version 0.3.2 changes public CST names: `comment_line` and `inline_comment`
become `plain_comment`, first-line shebangs become `shebang_comment`, `doc_line`
becomes `item_doc_comment`, and `parent_doc_line` becomes `module_doc_comment`.
Update queries and node consumers together. Existing `##!` source remains
valid; do not replace marker-like strings inside literal prompts or history.

## Block Layout

- Top-level declarations start at column zero. The first substantive entry of
  a body must be deeper than its header and establishes that body's baseline.
  Structural siblings share that baseline; deeper structural entries require
  an enclosing body. Dedents must reach an existing ancestor baseline.
- Blank lines and structural comments do not establish indentation or satisfy
  a required body. They cannot make an empty block borrow an outer statement.
  Cap/job bodies remain optional; `pass` is allowed only in agic/flow bodies.
- Any positive indentation width is supported. Tabs advance to eight-column
  stops. Do not mix spaces and tabs in structural indentation or interchange
  their spellings at the same structural level. Form feed is not indentation.
- Explicit multiline text establishes its own baseline. Deeper Markdown
  indentation, keywords, and `#`/`##` lines are literal content. Dedenting below
  the text baseline ends the text block. Relative indentation and source bytes
  are preserved. Same-line text ends on that physical line.
- Structural `##` documentation attaches to an immediately following entry
  at the same indentation; blank lines and ordinary comments detach it.
- Malformed entries remain invalid during recovery. Unexpected content is
  contained to its physical line so it cannot borrow tokens from a later header.

The productions below omit the hidden layout tokens. These rules apply to
all declaration bodies, nested repeat bodies, and multiline text consumers.

## Types

```ebnf
type ::= (builtin_type | type_name) array_suffix*
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part"
type_name ::= /[A-Z][A-Za-z0-9]*/
array_suffix ::= "[]"
```

Rules:

- `Text`, `Number`, and `Boolean` are scalar types.
- `Json` is a dynamic JSON-compatible value.
- `Part` is a model-visible content part.
- A `struct` declaration defines a user Record type. `Record` is a semantic
  category, not a builtin type name.
- Runtime `Message` values are Records, but Toolang source does not use
  `Message` as a normal agic or flow type.

## Program

```ebnf
program ::= (item | trivia)*
item ::= with | struct | psyche | skill | service | prompt | task | chore
       | context | instruct | agic | flow
```

## With

```ebnf
with ::= "with" cap_kind text_line line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
```

## Struct

```ebnf
struct ::= "struct" type_name ":" line_end struct_body
struct_body ::= trivia* field (field | trivia)*
field ::= identifier optional_marker? ":" type line_end
optional_marker ::= "?"
```

## Caps

```ebnf
cap ::= cap_kind cap_name ":" line_end (property | trivia)* text_body? trivia*
cap_name ::= snake_kebab_name

property ::= identifier "=" text_line line_end
```

Rules:

- The public CST exposes `psyche`, `skill`, `service`, and `prompt` directly.
- All four cap declarations expose the same `kind`, `name`, repeated `property`,
  and optional `body` fields. The body is the declaration's indented text block
  and is exposed directly as `text_body`.
- Properties form a leading prefix before the text body. Once the text body
  starts, later property-looking lines remain text.
- Runtime validates property keys and cap-specific constraints after parsing.
  A prompt permits no properties; the other cap kinds each define their own
  property schema.

### Prompts

Rules:

- A leading property-looking line is parsed as a property and rejected by
  prompt semantic validation.
- `{{name}}` placeholders implicitly declare named inputs. `{{_}}` is the
  primary-input placeholder. Prompt declarations have no parameter directive or
  typed signature.
- Placeholder extraction and substitution are language semantics; placeholders
  remain part of the raw `text_body` text in the CST.

## Jobs

```ebnf
task ::= "task" job_name ":" job_body
chore ::= "chore" job_name ":" job_body
job_name ::= snake_kebab_name

job_body ::= line_end (property | trivia)* text_body? trivia*
```

Rules:

- `task` and `chore` use the same property and text body shape as caps.
- The public CST exposes `task` and `chore` directly.

## Text

```ebnf
text_inline ::= text_line line_end | text_block
text_block ::= line_end text_body
text_body ::= blank_line* text_body_line (text_body_line | blank_line)*
text_body_line ::= indented_raw_text newline
```

Rules:

- `context`, `instruct`, agic messages, flow inline bodies, and flow conditions
  all use `text_inline`.
- Markdown fences are ordinary text inside an indented body, not block
  delimiters. Indentation determines where the body ends.

## Context And Instruct

```ebnf
context ::= "context" identifier? ":" text_inline

instruct ::= "instruct" identifier? ":" text_inline
```

Defaults:

- An omitted name defaults semantically to `default`.

## Agic

```ebnf
agic ::= "agic" runnable_name? params? return_type? ":" line_end agic_body
return_type ::= "->" type

params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? (":" type)?
param_name ::= "_" | variable_name

agic_body ::= trivia*
               (directives messages?
               | messages
               | pass_statement)
               trivia*

directives ::= directive (directive | trivia)*
directive ::= query_key directive_operator directive_value line_end
            | ("hands" | "handoffs") "=" route_value line_end
            | "recall" "=" recall_value line_end
            | "lanes" "=" (integer_literal | "default") line_end
            | ("instruct" | "context") "=" text_ref line_end
query_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "prompts"
directive_key ::= query_key | "hands" | "handoffs" | "recall" | "lanes"
                | "instruct" | "context"
directive_operator ::= "=" | "+=" | "-="
directive_value ::= /[^ \t#\r\n][^#\r\n]*/
route_value ::= "none" | "*" | runnable_ref ("," runnable_ref)*
runnable_ref ::= (public_name "::")* ("agic:" | "flow:")? public_name
public_name ::= /[A-Za-z_][A-Za-z0-9_-]*/
recall_value ::= "none" | "default" | "*" | recall_source ("," recall_source)*
recall_source ::= "far" | "near"
text_ref ::= "default" | "none" | identifier

messages ::= message (message | trivia)*
message ::= role ":" text_inline
          | invalid_agic_reserved_message
          | unroled_message
unroled_message ::= unroled_message_line
                    (text_body_line
                    | blank_line text_body_line)*
                    blank_line?
unroled_message_line ::= text_body_line
role ::= "user" | "assistant" | "tool"
agic_reserved_word ::= "context" | "instruct" | "user" | "assistant" | "tool"
                      | "pass" | "recall" | directive_key
invalid_agic_reserved_message ::= agic_reserved_word text_line? line_end
pass_statement ::= "pass" line_end
```

Rules:

- `_` is the primary invocation input parameter. If present, it must be first.
- Omitting the complete parameter list implies `_ : Part[]`; writing `()`
  declares no primary input.
- An explicit `_` without a type also defaults to `Part[]`.
- An untyped named parameter defaults to `Text`.
- An omitted declaration return type defaults to `Text`. Adhoc operation defaults
  and signature validation belong to the consumer.
- Agic and flow share directives, which precede messages or statements.
  An agic may contain only directives; a flow with directives still requires
  at least one statement. `pass` is a standalone body alternative and cannot
  follow directives.
- Query directives support `=`, `+=`, and `-=`. List and value directives only
  support `=`. Every directive requires a nonempty value; list special values
  stand alone. The consumer rejects duplicate `hands`, `handoffs`, `recall`,
  `lanes`, `instruct`, and `context` directives; query directives may repeat.
  Positive counts and query-expression semantics are validated after parsing.
- `instruct = name` and `context = name` select explicit top-level declarations.
  `none` disables the selected layer. `default` selects the module's unnamed
  declaration, with a system fallback when absent. An unknown explicit name
  is an error. Omission inherits the parent's resolved selection, or defaults
  at a root; inherited selections retain their declaring module.
- Runnable-local `instruct:`/`context:` bodies and bare selector references are
  not supported.
- Hands/handoffs are CSV references, not match queries. Recall supports either
  source order; `auto` is not a special value. Root recall defaults to far/near.
- Route references accept portable exported flow names, including uppercase
  letters, leading underscores, and hyphens; authored declaration names still
  use snake_case.
- All directives expose `key`, `operator`, and `value` fields. Prompt selectors
  are directives rather than a separate `settings` subtree.
- Bare text in an agic body is an unroled message. Runtime treats it as a user
  message.
- Unroled messages are fallback messages. A line starting with an agic reserved
  word parses as `invalid_agic_reserved_message` unless it matches an explicit
  agic body form. Explicit agic body forms are tried before fallback, including
  after an unroled message has started.
- Adjacent unroled message text lines are merged into one message. One blank
  line between unroled text lines is preserved inside the same message. Two or
  more blank lines, or any comment/doc-comment line, split unroled messages.
- Use an explicit role when message content itself starts with a reserved word.
- `pass` declares an empty body and cannot be followed by other body entries.
- Runtime validates referenced names and resource-directive semantics. Recall
  operators and values are fixed by the grammar.

## Flow

```ebnf
flow ::= "flow" runnable_name? params? return_type? ":" line_end flow_body

flow_body ::= trivia*
              (directives statements
              | statements
              | pass_statement)
              trivia*

statements ::= flow_statement (flow_statement | trivia)*
flow_statement ::= exec_statement
                 | let_statement
                 | flow_operation
                 | invalid_flow_reserved_statement
                 | implicit_run_statement

flow_operation ::= run_statement
                 | spawn_statement
                 | await_statement
                 | seek_statement
                 | ask_statement
                 | generate_statement
                 | reduce_statement
                 | map_statement
                 | keep_statement
                 | drop_statement
                 | sort_statement
                 | repeat_statement

let_statement ::= "let" local_name "=" flow_operation
                | "let" flow_operation
                | "let" local_name "=" text_inline
local_name ::= variable_name

exec_statement ::= "exec" runnable_name line_end
                 | "exec" inline_agic

run_statement ::= "async"? "run" runnable_name line_end
                | "async"? "run" inline_agic

spawn_statement ::= "spawn" runnable_name line_end
                  | "spawn" inline_agic

await_statement ::= "await" local_name line_end

seek_statement ::= "seek" agent_name runnable_name line_end
                 | "seek" agent_name inline_agic

ask_statement ::= "ask" ":" text_inline

_one_integer_literal   ::= an integer literal whose numeric value is 1
_other_integer_literal ::= an integer literal whose numeric value is not 1

_lanes_complement ::= "in" _one_integer_literal "lane"
                    | "in" _other_integer_literal "lanes"

_repeat_count_complement ::= _one_integer_literal "time"
                           | _other_integer_literal "times"

_named_using_complement  ::= "using" horizontal_space runnable_name
_named_if_complement     ::= "if" runnable_name
_inline_if_complement    ::= "if" inline_agic
_named_by_complement     ::= "by" runnable_name
_inline_by_complement    ::= "by" inline_agic

_runnable_complements ::= _lanes_complement?
                          (_named_using_complement line_end | inline_agic)

_if_complements ::= _named_if_complement line_end
                  | _lanes_complement _named_if_complement line_end
                  | _named_if_complement _lanes_complement line_end
                  | _inline_if_complement
                  | _lanes_complement _inline_if_complement

_by_complements ::= _named_by_complement line_end
                  | _lanes_complement _named_by_complement line_end
                  | _named_by_complement _lanes_complement line_end
                  | _inline_by_complement
                  | _lanes_complement _inline_by_complement

generate_statement ::= "generate" integer_literal _runnable_complements

reduce_statement ::= "reduce" (_named_using_complement line_end
                     | _named_using_complement ":" line_end from_block
                     | inline_agic_with_optional_from)
inline_agic_with_optional_from ::= return_type? ":" text_line line_end
                                | return_type? ":" line_end text_body from_block?
from_block ::= "from" ":" text_inline

map_statement ::= "map" _runnable_complements

position ::= ("first" | "last") integer_literal
keep_statement ::= "keep" position line_end
                 | "keep" _if_complements
drop_statement ::= "drop" position line_end
                 | "drop" _if_complements

sort_statement ::= "sort" ("ascending" | "descending") _by_complements

repeat_statement ::= "repeat" _repeat_count_complement? window_complement? ":" line_end repeat_body
repeat_body ::= trivia* (statements (until_clause trivia* statements?)?
                       | until_clause trivia* statements)
window_complement ::= "windowing" integer_literal
until_clause ::= "until" (runnable_name line_end | inline_agic_body)

inline_agic ::= return_type? ":" text_inline
inline_agic_body ::= ":" text_inline

runnable_name ::= identifier
agent_name ::= identifier

_active_statement_keyword ::= "let" | "exec" | "run" | "spawn" | "seek" | "ask"
                            | "async" | "await"
                            | "generate" | "reduce" | "map" | "keep"
                            | "drop" | "sort" | "repeat"

_reserved_statement_keyword ::= "scatter" | "storm" | "gather" | "settle"
                              | "until" | "from" | "windowing" | "_"
                              | "rank" | "par" | "top" | "bottom"
                              | "think" | "use" | "thunk" | "call" | "do"
                              | "unfold" | "each" | "fold" | "head" | "tail"
                              | _connector_keyword | _declaration_keyword
                              | agic_reserved_word | "recall"
_connector_keyword ::= "using" | "if" | "by" | "in" | "lane" | "lanes"
                     | "ascending" | "descending" | "first" | "last"
                     | "time" | "times"
_declaration_keyword ::= "with" | "struct" | "psyche" | "skill" | "service"
                       | "prompt" | "task" | "chore" | "agic" | "flow"

implicit_run_statement ::= _implicit_text_line
                           (_implicit_text_line | blank_line _implicit_text_line)*
                           blank_line?
_implicit_text_line ::= a nonblank, non-comment flow text line whose first
                       complete token is not an active or reserved keyword

invalid_flow_reserved_statement ::= (_active_statement_keyword
                                   | _reserved_statement_keyword)
                                   text_line? line_end
```

Rules:

- A `flow` describes a workflow as an ordered tree of executable statements.
- A flow name may be omitted. The grammar permits multiple unnamed agics and
  flows in one source file. Default naming and runnable-name uniqueness are
  semantic validation after parsing.
- Flow signatures reuse agic parameter and return type syntax and defaults.
  Flow directives reuse agic directive syntax and must appear before statements.
- `let name = statement` writes the result to a named local. `let statement`
  discards the result and does not update `_`. `let name = BODY` evaluates
  authored Content and creates or replaces a named local with a complete
  `Part[]` value, without starting a child run. The `Part[]` type is implicit
  and omitted from source. Local type annotations and array literals are not
  binding syntax; a future extension must preserve `let name = BODY` as the
  compatible shorthand. A statement binding instead infers its value type
  from the operation result. The `text_inline` CST rule permits BODY on the
  same line or in an indented block. An explicit flow operation after `=` takes
  precedence over the BODY form. `_`, `until`, malformed spawn, async, await, or
  collection heads, including removed collection keywords, cannot fall back to
  same-line Content. For literal text beginning with these words, use an
  indented Content block.
  A named binding missing `=` produces `invalid_flow_reserved_statement`,
  keeping its diagnostic local during both fresh and incremental parsing.
- `exec` replaces the current runnable with a named agic/flow or an inline agic;
  the outgoing runnable does not resume. Its `target` field is a `runnable_name` or
  `inline_agic`, using the same target forms as `run` in Flow and repeat bodies.
  Exec is not bindable and accepts no argument lists or modifiers. Named targets
  end at the line boundary. Inline bodies retain normal text/template syntax
  and optional return types. Invalid bindings expose
  `invalid_flow_reserved_statement`. Keyword prefixes and explicit text remain
  literal. Target resolution and branch-local recursion checks belong to
  runtime, not the grammar.
- `run` resolves a named agic or flow, or defines an inline agic. `seek` targets
  another agent with a named runnable or inline agic. `ask` requests input from
  the human owner.
- `async` is a prefix modifier attached to a statement, currently supported only
  by `run`. It adds the optional `async: flow_async_keyword` field to
  `run_statement`, preserving its `runnable` or `agic` target field. There is no
  separate async statement or wrapper node. All three run targets work:
  `async run R`, `async run: BODY`, and `async run -> T: BODY`. The return type
  describes eventual output. A named target requires a space or tab after `run`;
  `async runworker` cannot split into two tokens. No argument lists, `using`,
  lanes, or other async operators are introduced. The downstream contract starts
  a child owned by the current run; only `let h = async run ...` retains its
  handle. Bare async run and nameless `let async run ...` preserve `_`.
  Malformed target tails can appear as `invalid_flow_reserved_statement` inside
  `run_statement`, keeping following statements and declarations intact.
  Consumers must reject these diagnostic descendants before executing the run.
- `await h` exposes `await_statement` with a required `handle: local_name`
  and `flow_await_keyword`. The handle name follows the same non-keyword variable
  naming rule as a let binding; `_` is invalid. Local lookup and
  handle validation belong to runtime. It accepts no expressions,
  field access, calls, timeouts, `all` qualifier, lane clauses, or block body.
  The existing `let_statement` fields distinguish the binding destination
  (`name`) from the awaited handle (`handle`) inside `statement`; no new wrapper
  or reference node is added. `local_name` directly contains the identifier
  text and has no children.
  The same node represents async and spawn handles
  because their launch origin is resolved by runtime, not by await syntax.
- `spawn` uses the same named and inline target forms as `run`, exposing a single
  required `target` field (`runnable_name` or `inline_agic`). Named targets are bare
  runnable names and end at the line boundary; no `using`, argument lists, lane/count
  clauses, or async modifiers are accepted. Inline targets reuse text bodies,
  templates, and optional return types; the return type describes the target's
  eventual output, not its launch handle.
  The downstream runtime contract starts an independent root run: bare spawn and
  `let spawn ...` preserve `_`, while `let job = spawn ...` retains the handle.
  Both unbound forms retain their distinct CST; canonical formatting and handle
  semantics belong to Toolang. The grammar does not resolve targets, choose
  threads, execute work, or add handle types. Handle awaiting uses the separate
  `await_statement` syntax.
- `generate`, `map`, and `reduce` require `using` before a named runnable,
  separated from its name by at least one space or tab. `usingworker` is a
  complete name, not a connector followed by `worker`. Inline runnables must
  omit `using`. Inline targets may declare a return type; their default is Text.
  `if` and `by` still introduce
  either named or inline runnables. Predicate and score type validation is semantic.
- `generate N` calls the same runnable N times; `map` transforms each outer array
  item; `reduce` combines outer items sequentially. Complete array-valued results
  remain nested. These are runtime contracts. `keep` and `drop` select by
  `first N`, `last N`, or a Boolean runnable. `sort` orders outer items by an
  explicit ascending or descending numeric score.
- `in N lane|lanes` limits independent child-run concurrency without changing
  result order. Literal `1`, including a leading-zero spelling, requires
  `lane`; every other integer requires `lanes`. The same agreement applies to
  `repeat N time|times:`.
- A positional count, selection, or order immediately follows its verb.
  Generate and map require the lane clause before the named or inline target.
  Keep/drop and sort still allow lanes before or after a named target. An inline
  runnable is final. Commas and `with` are not complement syntax.
- Reduce's optional trailing `from:` supplies initializer Content. A named reducer
  uses `reduce using name:` with an indented `from:`. An inline multiline reducer
  uses `reduce:`; `from:` is at the reducer text's baseline,
  after nonempty reducer text. Deeper `from:` text stays literal. The `runnable`
  field excludes the initializer; the sibling `from` field contains `text_inline`.
  Without `from`, runtime seeds from the first source element. Reduce retains one
  previous frame and has no window clause.
- `windowing N` precedes the repeat header colon and exposes the `window` integer
  field. Count and condition are independently optional, including `repeat:`.
  Runtime owns count/window values, Boolean output, name resolution, condition
  execution at its source position, and history behavior.
- A repeat body requires at least one ordinary Flow statement and permits zero
  or one `until` before, between, or after its statements at the same indentation.
  Nested repeats own their conditions. Empty/condition-only bodies, duplicate
  conditions, and conditions outside repeats are invalid.
- `until NAME` accepts an unresolved bare `runnable_name`; `until: BODY` accepts
  ordinary inline or multiline text and templates. Qualified targets, arguments,
  modifiers, named colon bodies, output annotations, and result bindings are
  invalid. Deeper explicit text remains literal; a baseline sibling ends it.
- Bare flow text is shorthand for inline `run`. Every substantive physical
  line, including a continuation, checks its first complete token. An active
  or reserved keyword selects structural parsing; malformed syntax
  cannot fall back to prose. Capitalize the word, avoid it, or use explicit
  `run:` text when it is intended as prose.
- Adjacent non-keyword lines and one intervening blank line stay in the same
  implicit run. Relative Markdown indentation may continue that prose; a
  keyword-led line at an invalid structural depth is an error. Two blank lines,
  a structural comment, the end of the flow body, or EOF ends the implicit run.
- `until` is a reserved boundary keyword. At a statement boundary it begins a
  repeat condition or a diagnostic, and cannot become implicit run text.
- `from` and `windowing` are also reserved. `from:` is valid only as a reduce
  initializer; `windowing N` is valid only in a repeat header. Use explicit
  `run:` text when these words begin prose.
- Explicit statement keywords are lowercase and case-sensitive. Named and
  positional statement headers end at `line_end` and do not accept trailing
  prose punctuation.
- Matching uses a complete lexical token: `run`, `run:`, and `run,` select
  keyword parsing, while `runner` and `run_suffix` remain prose. `_` is also
  reserved, while `_suffix` remains prose. Connector-only
  words and declaration/directive heads are invalid at a Flow statement position.
- `rank`, `par`, `top`, and `bottom` are reserved legacy words. `think`, `use`,
  and `thunk` remain reserved without statement syntax. A malformed line that
  begins with an active or reserved flow word exposes a syntax error or
  `invalid_flow_reserved_statement` instead of implicit `run` text.

### Launch and Await Bindings

These are downstream runtime effects; the parser only represents their distinct
syntax. Only successful statements write destinations; failures preserve existing
bindings. For async run and spawn, success means admission.

| Source | Successful binding effect |
| --- | --- |
| `async run R` or `let async run R` | Launch without retaining a handle; preserve `_`. |
| `let h = async run R` | Store the handle in `h`; preserve `_`. |
| `spawn R` or `let spawn R` | Launch an independent root without retaining a handle; preserve every local. |
| `let h = spawn R` | Store the root's handle in `h`; preserve `_`. |
| `await h` | Write the complete result to `_`; preserve `h`. |
| `let x = await h` | Write the result to `x`; preserve `_`, and also `h` if `x` differs from `h`. |
| `let await h` | Wait and discard the result; preserve every binding. |
| `let h = await h` | Replace `h` with its result explicitly; preserve `_`. |

Await requires a named handle explicitly retained with `let`. A launch without
a named binding cannot subsequently be awaited. `await _`, `let x = await _`,
`let await _`, and explicit `let _ = ...` are invalid. `_` remains the implicit
input/result slot; it is neither a handle name nor a discard placeholder.
The same await forms and binding effects apply to async-child and spawned-root
handles. Await reads the complete result, including arrays, and retained handles
can be awaited repeatedly. Awaiting a spawned root does not make it a child or
transfer lifetime ownership. Unknown or non-handle locals are syntactically valid
and require runtime validation. `Run` and `Future` are not
built-in or reserved type names; an authored `struct Run` remains valid, and
generic notation such as `Run<Text>` is not source syntax.

Bind a launch before awaiting its handle; `await spawn R` and
`let result = await spawn R` are invalid nested operations. Bare spawn does not
put a handle into `_`. For example, this flow starts independent work, prepares
an outline, and then reads the spawned run's array result into `sources`:

```too
flow research:
  let job = spawn -> Text[]:
    List three sources about {{_}}.
  run: Prepare a summary outline.
  let sources = await job
  run: Summarize {{sources}} using this outline: {{_}}.
```

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

For named reduce reducers, a header colon requires an indented `from:` clause.
For multiline inline reducers, `from:` follows the reducer text at the same
baseline. An inline reducer written entirely on the header line cannot have a
following initializer. Reduce's `runnable` field is a `runnable` or `inline_agic`;
its optional `from` field is `text_inline`. An inline reducer's `body` field is
`text_inline` for same-line text and `text_body` for multiline text.

Repeat exposes required `body: repeat_body` and optional `count: integer_literal`
and `window: integer_literal`. The body's ordinary nodes have repeated `statement`
fields; its optional `until: until_clause` has required `target: runnable | inline_agic_body`
and a named `flow_until_keyword` child. Statements, condition, and trivia are direct
children in source order, without a `statements` wrapper. Count preceding statement
fields to obtain the condition index; a nested repeat counts as one and trivia as
zero. [tests/fixtures/flexible_repeat.too](tests/fixtures/flexible_repeat.too)
contains complete-source examples.

## Model Call Assembly

The runtime assembles an agic call into tools, instructions, and messages for
the model adapter. Runtime messages are not Toolang source-level types; they are
Records with a role and `Part[]`.

- Values referenced by message bodies are promoted to parts according to their
  type: `Text` to a text part; `Number`, `Boolean`, `Json`, and user Records to
  JSON parts; and `Part` values to parts directly.
- Runtime part values use short `kind` names such as `text`, `json`, `image`,
  `audio`, `video`, `file`, `tool_call`, and `tool_result`.
- `recall` is shared by agic and flow. It selects `far`/`near` sources and the
  runtime variables `_far`, `_near`, and `_past`. `none` selects no sources;
  `default` uses the system default; `*` selects all available sources.
- `hands` authorizes runnable targets for `_toolang/run`; `handoffs` authorizes
  runnable targets for `_toolang/exec`.
