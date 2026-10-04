# Toolang Grammar

Syntax and public CST reference for grammar **0.3.4**. The authored sources are
[grammar.js](grammar.js) and the layout scanner in [src/scanner.c](src/scanner.c).
Use [node-types.json](src/node-types.json) for the complete node/field inventory
and [CHANGELOG](CHANGELOG.md) for version changes.

This reference describes parsing. Type defaults, name resolution, validation and
execution belong to [Toolang](https://github.com/openhat-ai/toolang); successful
parsing does not establish runtime validity or availability of a feature.
[Plans](docs/plans/) are design records, not the current reference.

## Notation

```ebnf
x ::= y    production
x | y      alternative
(x)        grouping
x?         optional
x*         zero or more
x+         one or more
"text"     literal token
/.../      lexical token
```

Productions summarize forms and omit hidden layout tokens. Descriptive helpers
are not necessarily CST nodes; public fields are described beside their forms.
All `too` examples below are complete syntax examples. EBNF and the flow-form
table are notation, not runnable source.

Consumers checking syntax must reject `ERROR`, missing nodes and named
`invalid_agic_reserved_message` / `invalid_flow_reserved_statement` nodes.
The latter preserve malformed reserved-word lines in the tree and need not set
`root_node.has_error`. Keep them distinct from valid fallback prose.

## Lexical Structure

```ebnf
newline ::= "\n" | "\r\n"
blank_line ::= newline
line_end ::= plain_comment? newline
trivia ::= plain_comment | shebang_comment | module_doc_comment
         | item_doc_comment | blank_line

pascal_name ::= /[A-Z][A-Za-z0-9]*/
snake_name ::= /[a-z][a-z0-9_]*(_[a-z0-9]+)*/
snake_kebab_name ::= /[a-z][a-z0-9_-]*/
integer_literal ::= /\d+/
text_line ::= /[^#\r\n]+/
```

Spaces and tabs separate tokens. Keywords are lowercase and case-sensitive.
The scanner supplies a final line ending at EOF when needed; source does not
require a trailing newline. Inline comments start at `#` where `line_end` is
allowed; multiline literal text has its own boundaries below.

### Comments and Documentation

```ebnf
plain_comment ::= "#" /[^\r\n]*/ newline?
shebang_comment ::= "#!" /[^\r\n]*/ comment_end
module_doc_comment ::= ("#@" | "##!") horizontal_space? comment_text? comment_end
item_doc_comment ::= "##" horizontal_space? (param_doc_tag | comment_text)? comment_end
param_doc_tag ::= "@param" horizontal_space param_name horizontal_space comment_text
comment_end ::= newline | EOF
horizontal_space ::= /[ \t]+/
comment_text ::= /[^ \t\r\n][^\r\n]*/
```

- `#` produces `plain_comment`. Inline `##`, `#@`, `##!` and `#!` also remain
  plain comments.
- `#!` produces `shebang_comment` only at byte zero. A leading BOM, indentation
  or earlier content makes it a plain comment; the interpreter is not checked.
- Structural `#@` produces `module_doc_comment` only at column zero between
  top-level declarations, or before/after them. Indented structural `#@` is
  invalid. Legacy `##!` remains accepted in its historical indented positions.
- `##` produces one `item_doc_comment` per physical line. The parser exposes
  individual comments; attachment to declarations and parameters is a consumer
  concern.
- Inside explicit multiline text, every marker is literal at or beyond the
  text baseline, including the first content line.

Only the exact leading word `@param` is reserved inside an item doc comment.
Whitespace after `##` is optional; whitespace after `@param` and its name is
required. Names use `param_name`, including `_`; descriptions are required on
that same physical line and may contain Unicode, punctuation, `#` and `@`.
There is no continuation syntax. Malformed tags are syntax errors and recovery
stays on the physical line. `@parameter`, `@return` and a later `@param` in prose
remain text; module comments do not interpret tags. Unknown and duplicate
parameter names still parse.

| Public node | Fields and ranges |
| --- | --- |
| `plain_comment`, `shebang_comment` | Leaves containing source text. |
| `module_doc_comment` | Optional `text: comment_text`. |
| `item_doc_comment` | Optional `text: comment_text` or `parameter: param_doc_tag`, never both. |
| `param_doc_tag` | Required `name: param_name` and `description: comment_text`; queryable `"@param"` token. |

Full-line comment ranges start at `#` and include the newline when present;
inline plain-comment ranges exclude it. Empty doc comments omit `text`. Field
ranges exclude markers and leading separating whitespace, preserve trailing
whitespace, and use UTF-8 byte offsets. `param_doc_tag` is a child of item
metadata, not a fifth comment category.

```too
#!/usr/bin/env too
#@ Text helpers.

## Rewrite text for an audience.
## @param _ Source material.
## @param audience Intended readers.
agic rewrite(_, audience?: Text):
  Rewrite {{_}} for {{audience}}.
```

See [documentation-comment tests](tests/test_documentation_comments.py) for
ranges, malformed tags and literal-marker cases.

## Block Layout

- Top-level declarations begin at column zero. The first substantive body entry
  establishes a deeper baseline; structural siblings share it. Deeper structural
  entries need an enclosing body, and dedents must reach an ancestor baseline.
- Blank lines and structural comments neither establish a baseline nor satisfy
  a required body. Cap/job bodies may be empty. Agics/flows have a standalone
  `pass` alternative; `pass` cannot follow directives or other body entries.
- Any positive indentation width is accepted. Tabs advance to eight-column
  stops. Mixed spaces/tabs, interchangeable indentation spellings at the same
  structural level, and form-feed indentation are invalid.
- Explicit multiline text establishes a separate baseline. Deeper Markdown,
  keywords and comment markers are literal; dedenting below that baseline ends
  the text. Relative indentation and source bytes are preserved.
- Malformed entries remain invalid during recovery and cannot borrow tokens
  from a later physical line to complete a broken header.

These rules apply to declaration bodies, nested repeats and text consumers.
See [layout contract tests](tests/test_layout_contract.py) and
[incremental layout tests](tests/test_layout_properties.py).

## Program

```ebnf
source_file ::= (item | trivia)*
item ::= with | struct | psyche | skill | service | prompt | task | chore
       | context | instruct | agic | flow
```

The root node is `source_file`; declarations are wrapped in `item`. Names remain
unresolved source tokens. The grammar permits multiple unnamed agics or flows;
it does not assign default names or check uniqueness.

### Types

```ebnf
type ::= base_type "[]"*
base_type ::= builtin_type | user_type
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part"
user_type ::= pascal_name
```

`type.base` contains `base_type`; each repeated `suffix` is a `type_suffix`.
Other PascalCase names, including `Record` or `Message`, parse as user types;
parsing does not prove that a type is defined. Lowercase builtin spellings are
invalid.

### With

```ebnf
with ::= "with" cap_kind text_line line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
```

`with` exposes `kind: cap_kind` and `reference: cap_ref`. The reference is raw
text; the parser does not resolve a cap.

### Struct

```ebnf
struct ::= "struct" pascal_name ":" line_end struct_body
struct_body ::= trivia* field (field | trivia)*
field ::= snake_name "?"? ":" type line_end
```

A struct requires at least one field. Its `body: struct_body` contains `field`
nodes with `name`, optional `optional`, and required `type` fields.

```too
struct Report:
  title: Text
  sources?: Text[]
```

### Caps

```ebnf
cap ::= cap_kind snake_kebab_name ":" line_end (property | trivia)* cap_body? trivia*
property ::= snake_name "=" text_line line_end
cap_body ::= text_body
```

The CST exposes `psyche`, `skill`, `service` and `prompt` directly. Each has
`kind`, `name`, repeated `property` and optional `body: cap_body` fields.
Properties expose `key`, `operator` and `value`. They form a leading prefix;
after text begins, property-looking lines remain text. The body is optional.

#### Prompts

Prompts use the same property/body shape as other caps. A leading property-like
line parses as a property; cap-specific rejection belongs to semantic validation.
Placeholder strings such as `{{name}}` remain raw `cap_body` text. Prompt syntax
has no parameter list or return annotation.

```too
prompt summarize:
  Summarize {{material}}.
```

### Jobs

```ebnf
task ::= "task" snake_kebab_name ":" job_body
chore ::= "chore" snake_kebab_name ":" job_body
job_body ::= line_end (property | trivia)* text_body? trivia*
```

`task` and `chore` expose `kind`, `name` and `body: job_body`. The body may be
empty and contains properties followed by optional text, as with caps. Unlike
caps, job properties and text are children of `job_body`, not repeated fields
on the declaration. See [cap/job fixtures](tests/fixtures/jobs.too).

### Context And Instruct

```ebnf
context ::= "context" snake_name? ":" text_inline
instruct ::= "instruct" snake_name? ":" text_inline
```

Both declarations have optional `name` fields and required `body` fields
(`context_body` or `instruct_body`) containing `text_inline`. An omitted name
remains absent in the CST.

### Signatures

Agics and flows share this syntax:

```ebnf
params ::= "(" (param ("," param)*)? ")"
param ::= param_name "?"? (":" type)?
param_name ::= "_" | snake_name
return_type ::= "->" type
```

The entire `params` field, each parameter's type and the return annotation may
be omitted; `()` is an explicit empty list. No defaults are inserted. `params`
exposes repeated `param` fields; `param` exposes `name`, optional `optional` and
optional `type`. Parameter ordering, duplicate names and optionality constraints
are not validated by the parser.

### Agic

```ebnf
agic ::= "agic" snake_name? params? return_type? ":" line_end agic_body
agic_body ::= trivia* (directives messages? | messages | pass_statement) trivia*
pass_statement ::= "pass" line_end
```

The public `agic` node has optional `name`, `params` and `return: type`, plus
required `body: agic_body`. A directives-only body is valid. Directives precede
messages; `pass` is the whole substantive body.

### Shared Directives

```ebnf
directives ::= directive (directive | trivia)*
directive ::= query_key directive_op directive_value line_end
            | ("hands" | "handoffs") "=" route_value line_end
            | "recall" "=" recall_value line_end
            | "lanes" "=" (integer_literal | "default") line_end
            | ("instruct" | "context") "=" text_ref line_end
query_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "prompts"
directive_op ::= "=" | "+=" | "-="
directive_value ::= /[^ \t#\r\n][^#\r\n]*/
route_value ::= "none" | "*" | runnable_ref ("," runnable_ref)*
runnable_ref ::= (public_name "::")* ("agic:" | "flow:")? public_name
public_name ::= /[A-Za-z_][A-Za-z0-9_-]*/
recall_value ::= "none" | "default" | "*" | recall_source ("," recall_source)*
recall_source ::= "far" | "near"
text_ref ::= "default" | "none" | snake_name
```

Agics and flows use identical `directive` nodes with `key`, `operator` and
`value` fields. All values are nonempty; special list values stand alone. Route
names accept a broader spelling than declaration names. Duplicate directives,
repeated recall sources and zero integer values may parse; interpretation and
validation belong to consumers. Query values remain raw text.

Runnable-local `instruct:`/`context:` blocks and bare selector references are
invalid. A flow's directives must be followed by statements; agics may stop
after directives. See [directive tests](tests/test_flow_upgrade.py).

## Text

```ebnf
text_inline ::= text_line line_end | text_block
text_block ::= line_end text_body
text_body ::= blank_line* text_body_line (text_body_line | blank_line)*
text_body_line ::= indented_raw_text newline
indented_raw_text ::= a nonblank content line at or beyond its text baseline
```

Context/instruct declarations, explicit messages, inline agics and conditions
use `text_inline`. Explicit blocks require content; Markdown fences do not
open or close a block. `text_body_line.content` retains the raw text token.
Indentation, not marker spelling, determines whether `#` lines are literal.

### Messages and Implicit Flow Text

```ebnf
messages ::= message (message | trivia)*
message ::= role ":" text_inline | unroled_message | invalid_agic_reserved_message
role ::= "user" | "assistant" | "tool"
paragraph ::= text_body_line (text_body_line | blank_line text_body_line)* blank_line?
```

Bare agic text produces `unroled_message`; bare flow text produces
`implicit_run_statement`. Both use the paragraph shape above: adjacent content
lines and one intervening blank line remain together. Two blank lines or a
structural comment end the paragraph; body end and EOF also terminate it.
Relative Markdown indentation may continue implicit prose, while keywords at
an invalid structural depth remain errors.

Each substantive line checks its first complete token. Agic role, directive
and `pass` words must match an explicit form, otherwise they produce an error
or `invalid_agic_reserved_message`. Flow keywords, connectors and declaration
heads likewise cannot fall back to prose when malformed. Matching uses whole
tokens: `run`, `run:` and `run,` enter keyword parsing; `runner` and `run_suffix`
remain prose. Explicit text bodies can contain these words literally.

```too
agic compare:
  First paragraph.

  Same message after one blank line.


  user: tools is literal after an explicit role.

flow explain:
  Describe the request.
  run: repeat is literal after an explicit run header.
```

## Flow

```ebnf
flow ::= "flow" snake_name? params? return_type? ":" line_end flow_body
flow_body ::= trivia* (directives? statements | pass_statement) trivia*
statements ::= flow_statement (flow_statement | trivia)*
flow_statement ::= let_statement | exec_statement | flow_operation
                 | implicit_run_statement | invalid_flow_reserved_statement
flow_operation ::= run_statement | seek_statement | ask_statement
                 | scatter_statement | storm_statement | gather_statement
                 | settle_statement | map_statement | keep_statement
                 | drop_statement | sort_statement | repeat_statement
```

The public `flow` node mirrors the signature fields of `agic`, with a required
`body: flow_body`. Statements are inside its `statements` child. Nested repeat
bodies accept the same statement forms; `pass` is only the standalone agic/flow
body alternative.

### Statement Forms

The table is schematic: `NAME`, `AGENT` and `LOCAL` are snake names; `N` is an
integer literal; `TEXT` is `text_inline`; `TYPE` is a type. `INLINE` means
`[-> TYPE]: TEXT`, and `TARGET` means `NAME` or `INLINE`. Square brackets denote
optional syntax. Named targets end at the line boundary and take no argument
list. `using`, `if` and `by` must be immediately followed by their target.

| Statement | Accepted forms | Notable CST fields |
| --- | --- | --- |
| `run` | `run TARGET` | Named `runnable` or inline `agic`. |
| `exec` | `exec TARGET` | `target: runnable` or `inline_agic`. |
| `seek` | `seek AGENT TARGET` | `agent`, then named `runnable` or inline `agic`. |
| `ask` | `ask: TEXT` | `body: text_inline`. |
| `scatter` | `scatter using NAME`; `scatter [using] INLINE` | `runnable`; no count. |
| `storm` | `storm N USING` | `count`, `runnable`, optional `lanes`. |
| `gather` | `gather using TARGET` | `runnable`; no lanes. |
| `settle` | `settle using NAME`; `settle [using] INLINE`; optional initializer as below | `runnable`, optional `from`. |
| `map` | `map USING` | `runnable`, optional `lanes`. |
| `keep`, `drop` | `keep/drop first N`; `keep/drop last N`; `keep/drop IF` | `selection: position`, or `runnable` with optional `lanes`. |
| `sort` | `sort ascending BY`; `sort descending BY` | `order`, `runnable`, optional `lanes`. |
| `repeat` | Count and/or `until`, with optional `windowing`, as below | `body`, optional `count`, `window`, `until`. |

`USING`, `IF` and `BY` are the following complement patterns, with `WORD` replaced
by `using`, `if` or `by` respectively:

```ebnf
complement ::= WORD runnable line_end
             | lanes WORD runnable line_end
             | WORD runnable lanes line_end
             | WORD inline_agic
             | lanes WORD inline_agic
lanes ::= "in" one_integer "lane" | "in" other_integer "lanes"
inline_agic ::= return_type? ":" text_inline
runnable ::= snake_name
```

Counts, positional selections and sort order immediately follow the verb.
Inline targets are final; commas and `with` are not complement syntax.
`one_integer` means any decimal spelling of 1, including `01`; all other
integer literals require the plural `lanes`. The same agreement applies to
`time`/`times` in repeat headers. Integer range constraints are not checked here.

`inline_agic` has optional `return: type` and required `body: text_inline`, except
for multiline settle targets described below. `position` exposes `side` and
`count` fields. See [flow tests](tests/test_flow_syntax.py) and
[exec tests](tests/test_exec.py).

### Bindings and Exec

```ebnf
let_statement ::= "let" snake_name "=" flow_operation
                | "let" flow_operation
                | "let" snake_name "=" text_inline
```

`let_statement` has optional `name` and either `statement` or `value: text_inline`.
An explicit operation after `=` takes precedence over text. The grammar allows
operations including repeat in bindings; consumer result restrictions are
separate. Type annotations and collection-binding syntax are not accepted.

Exec is outside `flow_operation`: `let exec ...` and `let name = exec ...` are
invalid and may expose `invalid_flow_reserved_statement`. Exec accepts no
modifiers; a named target cannot introduce a body. Target resolution and
execution behavior are not parser responsibilities.

```too
flow dispatch:
  let note = Source material.
  run: Review {{note}}.
  exec -> Text:
    Complete the request.
```

### Settle Initializers

A named settle target may add a header colon followed by an indented `from:`
clause; that colon requires the clause. A multiline inline target may place
`from:` after nonempty target text at the same baseline. A same-line inline
target cannot be followed by an initializer. Deeper `from:` text stays literal.

`settle_statement.runnable` is `runnable` or `inline_agic`; its sibling `from`
field is `text_inline`. Inline settle `body` is `text_inline` for same-line text
and `text_body` for multiline text. Settle has no window clause.

```too
flow named:
  settle using merge:
    from: Initial report.

flow inline:
  settle:
    Incorporate {{_}} into the report.
    from:
      Initial report.
```

### Repeat Conditions

```ebnf
repeat_statement ::= "repeat" repeat_count window? ":" line_end statements until?
                   | "repeat" window? ":" line_end statements until
repeat_count ::= one_integer "time" | other_integer "times"
window ::= "windowing" integer_literal
until ::= "until" ":" text_inline
```

A repeat requires at least one statement and a count, an `until` condition, or
both. `windowing N` precedes the header colon. `until:` is the single final
substantive entry at the statement baseline; trailing trivia is allowed. An
early, duplicate, dedented or otherwise misplaced condition is invalid.

`repeat_statement.body` points directly to `statements`; optional `count` and
`window` fields are `integer_literal`. Optional `until` is `inline_agic_body`
with a `body: text_inline` field.

```too
flow revise:
  repeat 3 times windowing 2:
    run: Improve {{_}}.
    until: Is the result ready?
```

### Shared Directives and Flow Clauses Example

See the complete [flow fixture](tests/fixtures/flow_upgrade.too) for shared
selectors, named/inline settle initializers and repeat conditions together.
[Clause tests](tests/test_flow_upgrade.py) cover CST ownership and incremental
edits without duplicating the full example here.

## Compatibility

- Legacy `##!` module markers remain accepted, including their historical
  indented structural positions. Literal marker strings in text are unchanged.
- `rank`, `par`, `top`, `bottom`, `think`, `use`, `thunk`, `call`, `do`, `unfold`,
  `each`, `fold`, `head` and `tail` remain reserved without statement forms.
  `until`, `from` and `windowing` are valid only in their designated clauses.
  Reserved or active keywords used in malformed forms stay invalid instead of
  becoming implicit prose; explicit text can contain them literally.
- Custom queries and node consumers must use current public node names and
  fields. Syntax and CST migrations are recorded in [CHANGELOG](CHANGELOG.md).

<a id="changes-in-033"></a>
Version 0.3.3 changes and replacement forms are in the
[0.3.3 changelog entry](CHANGELOG.md#033---2026-09-24).
