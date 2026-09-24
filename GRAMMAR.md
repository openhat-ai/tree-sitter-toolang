# Toolang Grammar

This document describes the public Toolang grammar. Parser-only helpers are
intentionally omitted.

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

## Lexical Structure

```ebnf
newline ::= "\n" | "\r\n"
blank_line ::= newline
line_end ::= plain_comment? newline

plain_comment ::= "#" /[^\r\n]*/ newline?
shebang_comment ::= "#!" /[^\r\n]*/ newline
module_doc_comment ::= ("#@" | "##!") horizontal_space? comment_text? newline
item_doc_comment ::= "##" horizontal_space? (param_doc_tag | comment_text)? newline
param_doc_tag ::= "@param" horizontal_space param_name horizontal_space comment_text
comment_text ::= /[^ \t\r\n][^\r\n]*/
horizontal_space ::= /[ \t]+/
trivia ::= plain_comment | shebang_comment | module_doc_comment | item_doc_comment | blank_line

pascal_name ::= /[A-Z][A-Za-z0-9]*/
snake_name ::= /[a-z][a-z0-9_]*(_[a-z0-9]+)*/
kebab_name ::= /[a-z][a-z0-9]*(-[a-z0-9]+)*/
snake_kebab_name ::= /[a-z][a-z0-9_-]*/
text_line ::= /[^#\r\n]+/
indented_raw_text ::= a nonblank content line at or beyond its text baseline
integer_literal ::= /\d+/
```

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
type ::= base_type type_suffix*
base_type ::= builtin_type | user_type
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part"
user_type ::= type_name
type_name ::= pascal_name
type_suffix ::= "[]"
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
with ::= "with" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= text_line
```

## Struct

```ebnf
struct ::= "struct" struct_name ":" line_end struct_body
struct_name ::= type_name
struct_body ::= trivia* field (field | trivia)*
field ::= field_name optional_marker? ":" type line_end
field_name ::= snake_name
optional_marker ::= "?"
```

## Caps

```ebnf
cap ::= cap_kind cap_name ":" line_end (property | trivia)* cap_body? trivia*
cap_name ::= snake_kebab_name

cap_body ::= text_body
property ::= property_key "=" property_value line_end
property_key ::= snake_name
property_value ::= text_line
```

Rules:

- The public CST exposes `psyche`, `skill`, `service`, and `prompt` directly.
- All four cap declarations expose the same `kind`, `name`, repeated `property`,
  and optional `body` fields. The body is the declaration's indented text block
  and is always exposed as `cap_body`.
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
  remain part of the raw `cap_body` text in the CST.

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
- This grammar no longer supports Markdown fenced bodies for caps, context,
  instruct, or messages.

## Context And Instruct

```ebnf
context ::= "context" context_name? ":" context_body
context_name ::= snake_name
context_body ::= text_inline

instruct ::= "instruct" instruct_name? ":" instruct_body
instruct_name ::= snake_name
instruct_body ::= text_inline
```

Defaults:

- An omitted name defaults semantically to `default`.

## Agic

```ebnf
agic ::= "agic" agic_name? params? return_type? ":" line_end agic_body
agic_name ::= snake_name
return_type ::= "->" type

params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? (":" type)?
param_name ::= "_" | snake_name

agic_body ::= trivia*
               (directives messages?
               | messages
               | pass_statement)
               trivia*

directives ::= directive+
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

messages ::= message+
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
- Query directives support `=`, `+=`, and `-=`. List and value directives only
  support `=`. Every directive requires a nonempty value; list special values
  stand alone. Duplicate configuration directives are rejected by the consumer.
- `instruct = name` and `context = name` select explicit top-level declarations.
  `none` disables the selected layer. `default` selects the module's unnamed
  declaration, with a system fallback when absent. An unknown explicit name
  is an error. Omission inherits the parent's resolved selection, or defaults
  at a root; inherited selections retain their declaring module.
- Runnable-local inline bodies and bare prompt references are not supported.
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
flow ::= "flow" flow_name? params? return_type? ":" line_end flow_body
flow_name ::= snake_name

flow_body ::= trivia*
              (directives statements
              | statements
              | pass_statement)
              trivia*

statements ::= flow_statement (flow_statement | trivia)*
flow_statement ::= let_statement
                 | flow_operation
                 | invalid_flow_reserved_statement
                 | implicit_run_statement

flow_operation ::= run_statement
                 | seek_statement
                 | ask_statement
                 | scatter_statement
                 | storm_statement
                 | gather_statement
                 | settle_statement
                 | map_statement
                 | keep_statement
                 | drop_statement
                 | sort_statement
                 | repeat_statement

let_statement ::= "let" local_name "=" flow_operation
                | "let" flow_operation
                | "let" local_name "=" text_inline
local_name ::= snake_name

run_statement ::= "run" runnable line_end
                | "run" inline_agic

seek_statement ::= "seek" agent runnable line_end
                 | "seek" agent inline_agic

ask_statement ::= "ask" ":" text_inline

_one_integer_literal   ::= an integer literal whose numeric value is 1
_other_integer_literal ::= an integer literal whose numeric value is not 1

_lanes_complement ::= "in" _one_integer_literal "lane"
                    | "in" _other_integer_literal "lanes"

_repeat_count_complement ::= _one_integer_literal "time"
                           | _other_integer_literal "times"

_named_using_complement  ::= "using" runnable
_inline_using_complement ::= "using" inline_agic
_named_if_complement     ::= "if" runnable
_inline_if_complement    ::= "if" inline_agic
_named_by_complement     ::= "by" runnable
_inline_by_complement    ::= "by" inline_agic

_using_complements ::= _named_using_complement line_end
                     | _lanes_complement _named_using_complement line_end
                     | _named_using_complement _lanes_complement line_end
                     | _inline_using_complement
                     | _lanes_complement _inline_using_complement

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

scatter_statement ::= "scatter" (_named_using_complement line_end
                      | "using"? inline_agic)

storm_statement ::= "storm" integer_literal _using_complements

gather_statement ::= "gather"
                     (_named_using_complement line_end
                     | _inline_using_complement)

settle_statement ::= "settle" (_named_using_complement line_end
                     | _named_using_complement ":" line_end from_block
                     | "using"? inline_agic_with_optional_from)
from_block ::= "from" ":" text_inline

map_statement ::= "map" _using_complements

position ::= ("first" | "last") integer_literal
keep_statement ::= "keep" position line_end
                 | "keep" _if_complements
drop_statement ::= "drop" position line_end
                 | "drop" _if_complements

sort_statement ::= "sort" ("ascending" | "descending") _by_complements

repeat_statement ::= "repeat" _repeat_count_complement window_complement? ":" line_end
                     statements _until_complement?
                   | "repeat" window_complement? ":" line_end
                     statements _until_complement
window_complement ::= "windowing" integer_literal
_until_complement ::= "until" inline_agic_body

inline_agic ::= return_type? ":" text_inline
inline_agic_body ::= ":" text_inline

runnable ::= snake_name
agent ::= snake_name

_active_statement_keyword ::= "let" | "run" | "seek" | "ask" | "scatter"
                            | "storm" | "gather" | "settle" | "map" | "keep"
                            | "drop" | "sort" | "repeat"

_reserved_statement_keyword ::= "until" | "rank" | "par" | "top" | "bottom"
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
  authored Content and creates or replaces a `dim=0` named local whose single
  value is `Part[]`, without starting a child run. The `Part[]` type is implicit
  and omitted from source. Type annotations and collection bindings are outside
  this grammar version; a future extension must preserve `let name = BODY` as
  the compatible shorthand. A statement binding instead infers its value type
  from the operation result. The `text_inline` CST rule permits BODY on the
  same line or in an indented block. An explicit flow operation after `=` takes
  precedence over the BODY form.
- `run` resolves a named agic or flow, or defines an inline agic. `seek` targets
  another agent with a named runnable or inline agic. `ask` requests input from
  the human owner.
- `using`, `if`, and `by` must be followed immediately by a named or inline
  runnable. `if` selects with a Boolean result, while `by` sorts with a Number
  result; result validation is semantic.
- `scatter` and `storm` expand one item into a list. `gather` and `settle`
  reduce a list to one item. `map` transforms every list item. `keep` and `drop`
  select by `first N`, `last N`, or a Boolean runnable. `sort` orders items by
  an explicit ascending or descending numeric score.
- `in N lane|lanes` limits independent child-run concurrency without changing
  result order. Literal `1`, including a leading-zero spelling, requires
  `lane`; every other integer requires `lanes`. The same agreement applies to
  `repeat N time|times:`.
- A positional count, selection, or order immediately follows its verb. Lane
  and named-runnable complements may exchange order. An inline runnable is
  final. Commas and `with` are not complement syntax.
- Settle's optional trailing `from:` supplies initializer Content. A named reducer
  uses `settle using name:` with an indented `from:`. An adhoc multiline reducer
  uses `settle:` (or `settle using:`); `from:` is at the reducer text's baseline,
  after nonempty reducer text. Deeper `from:` text stays literal. The `runnable`
  field excludes the initializer; the sibling `from` field contains `text_inline`.
  Without `from`, runtime seeds from the first source element. Settle retains one
  previous frame and has no window clause.
- `windowing N` precedes the repeat header colon and exposes the `window` integer
  field. Runtime validates positive N and defaults it to 3. Count plus until
  means at most N iterations, checking the condition after each body. Insufficient
  history makes until false without calling its evaluator.
- The count and `until` condition of `repeat` are individually optional, but
  at least one is required. Count-only, until-only, and combined forms are
  valid; omitting both is invalid. Unconditional loops are not supported.
- When present, `until` is a single final condition after the nonempty repeat
  body, at the same indentation as its sibling statements. Trailing trivia is
  allowed; an early, middle, duplicate, or wrongly indented condition is invalid.
  The repeat's `body` field points directly to `statements`; its optional
  `until` field points to `inline_agic_body`.
- Bare flow text is shorthand for inline `run`. Every substantive physical
  line, including a continuation, checks its first complete token. A lowercase
  active or reserved keyword selects structural parsing; malformed syntax
  cannot fall back to prose. Capitalize the word, avoid it, or use explicit
  `run:` text when it is intended as prose.
- Adjacent non-keyword lines and one intervening blank line stay in the same
  implicit run. Relative Markdown indentation may continue that prose; a
  keyword-led line at an invalid structural depth is an error. Two blank lines,
  a structural comment, the end of the flow body, or EOF ends the implicit run.
- `until` is a reserved boundary keyword. Only `until:` in a repeat is valid;
  bare `until` and lowercase `until ...` do not form an implicit run at a
  statement boundary.
- Explicit statement keywords are lowercase and case-sensitive. Named and
  positional statement headers end at `line_end` and do not accept trailing
  prose punctuation.
- Matching uses a complete lexical token: `run`, `run:`, and `run,` select
  keyword parsing, while `runner` and `run_suffix` remain prose. Connector-only
  words and declaration/directive heads are invalid at a Flow statement position.
- `rank`, `par`, `top`, and `bottom` are reserved legacy words. `think`, `use`,
  and `thunk` remain reserved without statement syntax. A malformed line that
  begins with an active or reserved flow word exposes a syntax error or
  `invalid_flow_reserved_statement` instead of implicit `run` text.

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
  runnable targets for `_toolang/execute`.
