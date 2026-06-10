# Toolang Grammar

This document describes the Toolang grammar in an EBNF-like format.

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
INDENT    layout token for entering an indented block
DEDENT    layout token for leaving an indented block
```

## Lexical Structure

```ebnf
newline ::= "\n" | "\r\n"
blank_line ::= newline
line_text ::= /[^\r\n]*/
inline_text ::= /[^#\r\n]+/
raw_text ::= /raw block or fence content/

line_comment ::= "#" line_text newline
parent_doc_comment ::= "##!" line_text newline
doc_comment ::= "##" line_text newline
inline_comment ::= "#" line_text
line_end ::= inline_comment? newline

optional_marker ::= "?"

type_name ::= /[A-Z][A-Za-z0-9]*/
value_name ::= /[a-z][a-z0-9_-]*/
snake_kebab_name ::= value_name
```

Rules:

- `optional_marker` is separate from a following `:`; `?:` is not a token.
- `raw_text` is delimited by its containing indented or fenced body.

Layout:

- Spaces, tabs, and form feeds between grammar tokens are ignored.
- `newline`, `line_end`, `INDENT`, `DEDENT`, and raw block/fence content are
  structural and are not ignored.
- `INDENT` is emitted when a non-blank logical line starts at a greater
  indentation than the current block.
- `DEDENT` is emitted when indentation returns to a previous block level.
- Lines inside the same indented block share the same indentation level.

Comments:

- A comment starts with `#` and extends to the end of the line.
- Comments are ignored unless they appear inside block content, where they are
  literal text.
- A comment that starts at the beginning of a line is a `line_comment`.
- A comment that starts after another token on the same line is an
  `inline_comment`.
- Grammar lines use `line_end` when they may carry an inline comment.
- `line_comment` and `blank_line` may appear between logical lines unless a
  production explicitly forbids them.

## Types

```ebnf
type ::= base_type type_suffix*
base_type ::= builtin_type | user_type
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" | "Pack"
user_type ::= type_name
type_suffix ::= array_suffix
array_suffix ::= "[]"
```

Rules:

- `Text`, `Number`, and `Boolean` are scalar types.
- `Json` is a dynamic JSON-compatible value.
- `Part` is a model-visible content part. Runtime part values use short
  `kind` names such as `text`, `json`, `image`, `audio`, `video`, `file`,
  `tool_call`, and `tool_result`.
- `Pack` is a builtin Record equivalent to `{ parts: Part[] }`.
- `Pack` is one whole value, not an array. Item-wise flow statements such as `keep`,
  `drop`, `rank`, `each`, and `fold` operate on expanded items, so a flow must
  `unfold` a `Pack` before processing its contained parts item-wise.
- A `struct` declaration defines a user-defined Record type. `Record` is a
  semantic category, not a builtin type name that can be used in signatures.
- `Message` is a runtime-only Record with a role and `Part[]`. Toolang source
  does not use `Message` as a normal thunk or flow type.

## Program

```ebnf
program ::= (item | parent_doc_comment | doc_comment | line_comment | blank_line)*
item ::= use | struct | psyche | skill | service | prompt | task | chore | context | instruct | thunk | flow
```

## Use

```ebnf
use ::= "use" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= cap_uri | cap_shorthand
```

Rules:

- Runtime resolves `cap_ref` from a URI or shorthand reference.

## Struct

```ebnf
struct ::= "struct" struct_name ":" line_end INDENT struct_body DEDENT
struct_name ::= type_name
struct_body ::= (field | doc_comment | line_comment | blank_line)+
field ::= field_name optional_marker? ":" type line_end
field_name ::= value_name
```

## Caps

```ebnf
psyche ::= "psyche" cap_name ":" cap_body
skill ::= "skill" cap_name ":" cap_body
service ::= "service" cap_name ":" cap_body
prompt ::= "prompt" cap_name ":" cap_body
cap_name ::= snake_kebab_name

cap_uri ::= /[A-Za-z][A-Za-z0-9+.-]*:\/\/[^\s#]+/
cap_shorthand ::= /[A-Za-z0-9_@-][A-Za-z0-9_./:@-]*/
bare_value ::= /[A-Za-z0-9_./:@-]+/

cap_body ::= line_end (property_eq | cap_indented_content_line | parent_doc_comment | doc_comment | line_comment | blank_line)*
cap_indented_content_line ::= indented_raw_text newline

property_eq ::= property_key "=" property_value line_end
property_key ::= value_name
property_value ::= inline_text
```

Rules:

- `cap_shorthand` must not start with `.` or `/`.
- Bodies may contain zero or more `key = value` properties and indented
  content lines.
- Runtime validates property keys and cap-specific property constraints.
- Cap properties use only `=`; `+=` and `-=` are thunk directive operators,
  not property operators.
- The AST should expose `psyche`, `skill`, `service`, and `prompt` directly.
- Do not wrap these declarations in an abstract `cap` node.

## Jobs

```ebnf
task ::= "task" job_name ":" job_body
chore ::= "chore" job_name ":" job_body
job_name ::= snake_kebab_name

job_body ::= line_end (property_eq | job_indented_content_line | parent_doc_comment | doc_comment | line_comment | blank_line)*
job_indented_content_line ::= indented_raw_text newline
```

Rules:

- `task` and `chore` use the same indented property/content shape as caps.
- The AST should expose `task` and `chore` directly.

## Instruct

```ebnf
instruct ::= "instruct" instruct_name? ":" instruct_body
instruct_name ::= value_name
instruct_body ::= block_indented | block_fenced
block_indented ::= line_end INDENT block_content? DEDENT
block_fenced ::= "```" block_language? line_end block_content? "```" newline
block_content ::= raw_text
block_language ::= "md"
```

Defaults:

- An omitted name defaults semantically to `default`.

Rules:

- Top-level `instruct` uses an unnamed or named indented or fenced body.
- `instruct` does not contain properties.
- Indented bodies remove common content indentation, trim outer blank lines, and
  preserve inner blank lines and relative indentation.
- Fenced bodies preserve content after fence-indent dedent.

## Context

```ebnf
context ::= "context" context_name? ":" context_body
context_name ::= value_name
context_body ::= block_indented | block_fenced
```

Defaults:

- An omitted name defaults semantically to `default`.

Rules:

- Top-level `context` uses an unnamed or named indented or fenced body.
- `context` does not contain properties.
- `context` bodies use the same indentation, trimming, and fenced-body rules as
  `instruct` bodies.
- Runtime uses context templates to construct the context prompt that is
  prepended to the final user message.

## Thunk

```ebnf
thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body? DEDENT
thunk_name ::= value_name
thunk_body ::= directive* instruction_section? (message_section | pass_statement)?
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? (":" type)?
param_name ::= value_name
output_type ::= "->" type
pass_statement ::= "pass" line_end

directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs" | "recall"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*

instruction_section ::= context_block instruct_block? | instruct_block context_block?
context_block ::= "context" block_name line_end
instruct_block ::= "instruct" block_name line_end
message_section ::= (roled_message | unroled_message)+
roled_message ::= roled_message_kind ":" block_value
roled_message_kind ::= "user" | "assistant" | "tool"
unroled_message ::= block_indented
block_value ::= block_inline | block_indented | block_fenced
block_inline ::= (block_name | block_content_inline) line_end
block_name ::= "default" | "none" | value_name
block_content_inline ::= inline_text
```

Defaults:

- Omitted name defaults semantically to `default`.
- Omitted params mean the thunk does not accept invocation input.
- Omitted output delegates to runtime policy.
- Parentheses mean exact parameters; no implicit `in` is added.
- If a thunk declares `in` and has no explicit or implicit message block, the
  runtime supplies `user: {{_}}`.
- `pass` is an explicit empty statement. It declares an empty body and disables
  the implicit `user: {{_}}` default for that body.

Rules:

- Parameter types are optional in the grammar. Runtime validation may require
  explicit types in contexts where inference is unavailable.
- `in` is reserved as the primary invocation input parameter.
- If `in` appears, it must be first.
- A thunk without `in` does not accept invocation input and cannot be used as a
  user-input entrypoint such as chat, task, or chore.
- `_` is available in thunk templates as an alias for `in`.
- `models` supports only `=`.
- Runtime validates referenced names.
- `hands` declares sub-thunks this thunk may call.
- `handoffs` declares thunks this thunk may transfer control to.
- `recall` controls which retrieved message sources are prepended before
  thunk-local messages. It supports only `=`. Valid semantic values are
  `none`, `default`, `history`, `memory`, or a CSV containing `history` and
  `memory`, for example `recall = history, memory`.
- Bare text in `thunk_body` is an implicit `user` message block.
- Explicit message blocks and an implicit `user` message block should not be
  mixed in the same thunk.
- Thunk-local blocks cannot have custom names.
- If an inline message block value matches `block_name`, parse it as a
  name-like value.
- Otherwise, parse it as literal inline text.
- Inline values trim surrounding whitespace.
- Thunk-local `context` and `instruct` blocks belong to the instruction section,
  which must appear after directives and before message blocks.
- One thunk may have at most one thunk-local `context` and at most one
  thunk-local `instruct`.
- A thunk may contain one or more roled or unroled messages, in declaration
  order.
- `user:`, `assistant:`, and `tool:` are roled messages.
- Bare indented text is an unroled message. Runtime treats unroled messages as
  `user` messages.
- A thunk body may contain `pass` to explicitly do nothing.
- Thunk-local `context` and `instruct` values may be `none`, `default`, or a
  named top-level template reference. They do not use `:`; colon forms are
  reserved for inline body/message syntax.
- Runtime decides defaults for omitted `context`, `instruct`, and messages.
- Runtime decides the semantics of `default` and `none`.

## Flow

```ebnf
flow ::= "flow" flow_name? params? output_type? ":" line_end flow_body
flow_name ::= value_name
flow_body ::= directive* flow_body_tail
flow_body_tail ::= (doc_comment | line_comment | blank_line)* pass_statement
                 | (doc_comment | line_comment | blank_line)* flow_statement
                   (flow_statement | doc_comment | line_comment | blank_line)* pass_statement?
flow_statement ::= flow_statement_entry

flow_statement_entry ::= implicit_thunk_statement
             | do_statement
             | ask_statement
             | unfold_statement
             | keep_statement
             | drop_statement
             | rank_statement
             | each_statement
             | fold_statement
             | repeat_statement

implicit_thunk_statement ::= implicit_thunk_body
implicit_thunk_body ::= flow_bare_content_line
                         (flow_bare_content_line
                         | blank_line flow_bare_content_line)*
                         blank_line?
flow_bare_content_line ::= /[ \t]+[^#\s][^\r\n]*/ newline
do_statement ::= "do" call_ref_list line_end
               | "do" flow_inline_output_type? flow_inline_statement_body
ask_statement ::= "ask" call_ref line_end
unfold_statement ::= "unfold" call_ref line_end
                   | "unfold" flow_inline_output_type? flow_inline_statement_body
keep_statement ::= "keep" flow_named_parallel_head line_end
                 | "keep" flow_inline_parallel_head? flow_inline_statement_body
drop_statement ::= "drop" flow_named_parallel_head line_end
                 | "drop" flow_inline_parallel_head? flow_inline_statement_body
rank_statement ::= "rank" call_ref line_end
                 | "rank" flow_inline_rank_head? flow_inline_statement_body
each_statement ::= "each" flow_named_parallel_head line_end
                 | "each" flow_inline_each_head? flow_inline_statement_body
fold_statement ::= "fold" call_ref line_end
                 | "fold" flow_inline_output_type? flow_inline_statement_body

flow_inline_statement_body ::= ":" flow_inline_body line_end
                        | ":" line_end block_indented_implicit
flow_inline_output_type ::= "to" type
flow_inline_parallel_head ::= flow_parallelism
flow_inline_rank_head ::= flow_rank_limit
flow_inline_each_head ::= flow_inline_output_type
                        | flow_parallelism
                        | flow_inline_output_type flow_parallelism
flow_named_parallel_head ::= call_ref
                           | call_ref flow_parallelism
                           | flow_parallelism call_ref
flow_parallelism ::= "par" integer_literal
flow_rank_limit ::= integer_literal
call_ref_list ::= call_ref ("," call_ref)*
call_ref ::= /[A-Za-z_@][A-Za-z0-9_./@-]*/
integer_literal ::= /\d+/

repeat_statement ::= "repeat" flow_repeat_count line_end
                   | "repeat" flow_repeat_count? "until" ":" flow_condition_body
                   | "repeat" flow_repeat_count? ":" line_end repeat_block_body
repeat_block_body ::= (doc_comment | line_comment | blank_line)*
                           flow_statement
                           (flow_statement | doc_comment | line_comment | blank_line)*
                           until_clause?
until_clause ::= "until" ":" flow_condition_body
flow_repeat_count ::= integer_literal
flow_condition_body ::= flow_inline_text line_end
                      | line_end block_indented_implicit
flow_inline_text ::= /[^#\r\n]+/
```

Defaults:

- Omitted name defaults semantically to `default`.
- Omitted params mean the flow does not accept invocation input.
- Omitted output delegates to runtime policy.
- Parentheses mean exact parameters; no implicit `in` is added.

Rules:

- A `flow` describes a workflow as an ordered tree of executable statements.
- The runtime's primary flow execution unit is a statement.
- `flow` signatures reuse thunk parameter and output type syntax.
- Parameter types follow thunk signature syntax.
- `in` is reserved as the primary invocation input parameter. If `in` appears,
  it must be first.
- Flow directives reuse thunk directive syntax and must appear before any
  non-directive body entry.
- Bare indented text in a flow body defines an implicit thunk statement. One
  blank line keeps adjacent bare text in the same statement; two or more blank
  lines, or a comment line, split implicit thunk statements. Doc comments are
  comments too, and they may additionally describe the next statement for UI
  progress.
- `do targets` runs named thunks or flows on the current value.
- `do: ...` and `do to Type: ...` define an inline thunk-like statement. The
  optional `to Type` annotates the inline statement output type.
- `ask` delegates the current value to an agent.
- `unfold target` runs a named thunk that expands one value into an array of
  values. `unfold:` and `unfold to Type:` define an inline unfold statement. Bare
  `unfold` is not supported.
- `keep` keeps matching items. It does not support `to Type`.
- `drop` drops matching items. It does not support `to Type`.
- `rank` ranks items and keeps the top N when N is provided. It does not
  support `to Type`.
- `each` processes every item and collects results.
- `fold` combines an array of values into one value.
- `to Type` specifies an inline statement output type and is only supported by inline
  `do`, `unfold`, `each`, and `fold` forms.
- `par N` limits concurrent workers and is only supported by item-wise array
  statements: `keep`, `drop`, and `each`.
- No colon means the statement body is a named reference, for example
  `do summarize` or `fold synthesize_answer`.
- Colon with text is a one-line inline thunk.
- Colon with an indented body is a multi-line inline thunk.
- Named thunk forms do not also define inline bodies after `:`.
- `repeat N`, `repeat until:`, and `repeat N until:` are short forms. Before
  execution, they normalize to block repeat forms by capturing executable
  statements in the same flow block after the previous repeat statement and
  before the current repeat statement.
- `repeat N:` and `repeat:` are block repeat forms. The nested flow block is the
  repeat range. A final `until:` clause may stop the loop early.
- Runtime only needs to execute block repeat semantics after normalization.
- Short repeat forms require a non-empty captured range; otherwise validation
  fails. A flow body cannot start with a short repeat.
- Doc comments attached to captured statements move with those statements during
  normalization. Blank lines and unattached comments do not become executable
  repeat body entries.
- `pass` is an explicit empty statement. It can only appear as the final body
  entry. If a flow body has no other entries, it must use `pass`.
- Inline text bodies, indented bodies, and repeat conditions lower to anonymous
  thunk-like tasks owned by the flow runtime.

## Model Call Assembly

The runtime assembles a thunk call into `tools`, `instructions`, and runtime
messages for the model adapter. Runtime messages are not Toolang source-level
types; they are records with a role and `Part[]`.

- `tools` is derived from available tool declarations and thunk capability
  directives.
- `instructions` is generated from the selected `instruct` template. The
  selection can be `default`, a named top-level `instruct`, or `none`.
  Template rendering receives the run context.
- Runtime messages start with retrieved history according to `recall`, then
  append thunk-local `user`, `assistant`, and `tool` blocks.
- The final user message is formed by prepending a rendered context prompt to
  the invocation input referenced by the user block. The context prompt is
  generated from `default`, a named top-level `context`, or `none`. Template
  rendering receives the run context.
- Only values referenced by message blocks are sent to the model call. Referenced
  values are promoted to parts according to their type: `Text` to a text part,
  `Number`, `Boolean`, `Json`, and user-defined Record values to JSON parts,
  `Part` or `Part[]` values to parts directly, and `Pack` values to their
  contained `parts`.
- `recall = none` disables history retrieval. `recall = default` delegates to
  runtime policy. `recall = history`, `recall = memory`, and
  `recall = history, memory` select explicit retrieval sources.
- This design lets a thunk run an isolated model-call experiment by combining
  `recall = none` or `recall = memory` with explicit thunk-local
  `user`/`assistant`/`tool` messages.

## Comments

Most comments have no semantic meaning. Shebang comments and doc comments are
the exceptions.

Shebang comments:

- A first-line comment beginning with `#!` is a shebang comment.
- Elsewhere, `#!` is a normal `line_comment`.
- A shebang supports scripting use. When a file is executed directly, for
  example `./script.too`, the operating system uses the shebang to locate the
  Toolang interpreter. When the file is run as `toolang script.too`, the
  shebang is parsed and ignored as a comment.

Doc comments:

- A line-start comment beginning with `##` is a doc comment.
- `##!` attaches documentation to the program.
- `##` attaches documentation to the next program item or struct field at the
  same indentation.
- Doc comments participate in documentation generation and runtime metadata.
  For example, a tool item can define a tool callable by a model, and its doc
  comments can be used to produce the tool description.
- Doc comments are not produced from inline comments.
- `##!` is recognized before `##`, and doc comments are recognized before
  normal comment lines.
- A blank line breaks doc attachment.
- An empty doc comment line creates a paragraph break.
- Non-doc `line_comment` does not attach.

## Grammar Summary

```ebnf
program ::= (item | parent_doc_comment | doc_comment | line_comment | blank_line)*
item ::= use | struct | psyche | skill | service | prompt | task | chore | context | instruct | thunk | flow

use ::= "use" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= cap_uri | cap_shorthand

struct ::= "struct" struct_name ":" line_end INDENT struct_body DEDENT
struct_name ::= type_name
struct_body ::= (field | doc_comment | line_comment | blank_line)+
field ::= field_name optional_marker? ":" type line_end
field_name ::= value_name

psyche ::= "psyche" cap_name ":" cap_body
skill ::= "skill" cap_name ":" cap_body
service ::= "service" cap_name ":" cap_body
prompt ::= "prompt" cap_name ":" cap_body
cap_name ::= snake_kebab_name
cap_body ::= line_end (property_eq | cap_indented_content_line | parent_doc_comment | doc_comment | line_comment | blank_line)*
cap_indented_content_line ::= indented_raw_text newline

task ::= "task" job_name ":" job_body
chore ::= "chore" job_name ":" job_body
job_name ::= snake_kebab_name
job_body ::= line_end (property_eq | job_indented_content_line | parent_doc_comment | doc_comment | line_comment | blank_line)*
job_indented_content_line ::= indented_raw_text newline

property_eq ::= property_key "=" property_value line_end
property_key ::= value_name
property_value ::= inline_text

instruct ::= "instruct" instruct_name? ":" instruct_body
instruct_name ::= value_name
instruct_body ::= block_indented | block_fenced
block_indented ::= line_end INDENT block_content? DEDENT
block_fenced ::= "```" block_language? line_end block_content? "```" newline
block_content ::= raw_text
block_language ::= "md"

context ::= "context" context_name? ":" context_body
context_name ::= value_name
context_body ::= block_indented | block_fenced

thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body? DEDENT
thunk_name ::= value_name
thunk_body ::= directive* instruction_section? (message_section | pass_statement)?
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? (":" type)?
param_name ::= value_name
output_type ::= "->" type
pass_statement ::= "pass" line_end
directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs" | "recall"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*
instruction_section ::= context_block instruct_block? | instruct_block context_block?
context_block ::= "context" block_name line_end
instruct_block ::= "instruct" block_name line_end
message_section ::= (roled_message | unroled_message)+
roled_message ::= roled_message_kind ":" block_value
roled_message_kind ::= "user" | "assistant" | "tool"
unroled_message ::= block_indented
block_value ::= block_inline | block_indented | block_fenced
block_inline ::= (block_name | block_content_inline) line_end
block_name ::= "default" | "none" | value_name
block_content_inline ::= inline_text

flow ::= "flow" flow_name? params? output_type? ":" line_end flow_body
flow_name ::= value_name
flow_body ::= directive* flow_body_tail
flow_body_tail ::= (doc_comment | line_comment | blank_line)* pass_statement
                 | (doc_comment | line_comment | blank_line)* flow_statement
                   (flow_statement | doc_comment | line_comment | blank_line)* pass_statement?
flow_statement ::= flow_statement_entry
flow_statement_entry ::= implicit_thunk_statement
             | do_statement
             | ask_statement
             | unfold_statement
             | keep_statement
             | drop_statement
             | rank_statement
             | each_statement
             | fold_statement
             | repeat_statement
implicit_thunk_statement ::= implicit_thunk_body
implicit_thunk_body ::= flow_bare_content_line
                         (flow_bare_content_line
                         | blank_line flow_bare_content_line)*
                         blank_line?
flow_bare_content_line ::= /[ \t]+[^#\s][^\r\n]*/ newline
do_statement ::= "do" call_ref_list line_end
               | "do" flow_inline_output_type? flow_inline_statement_body
ask_statement ::= "ask" call_ref line_end
unfold_statement ::= "unfold" call_ref line_end
                   | "unfold" flow_inline_output_type? flow_inline_statement_body
keep_statement ::= "keep" flow_named_parallel_head line_end
                 | "keep" flow_inline_parallel_head? flow_inline_statement_body
drop_statement ::= "drop" flow_named_parallel_head line_end
                 | "drop" flow_inline_parallel_head? flow_inline_statement_body
rank_statement ::= "rank" call_ref line_end
                 | "rank" flow_inline_rank_head? flow_inline_statement_body
each_statement ::= "each" flow_named_parallel_head line_end
                 | "each" flow_inline_each_head? flow_inline_statement_body
fold_statement ::= "fold" call_ref line_end
                 | "fold" flow_inline_output_type? flow_inline_statement_body
flow_inline_statement_body ::= ":" flow_inline_body line_end
                        | ":" line_end block_indented_implicit
flow_inline_output_type ::= "to" type
flow_inline_parallel_head ::= flow_parallelism
flow_inline_rank_head ::= flow_rank_limit
flow_inline_each_head ::= flow_inline_output_type
                        | flow_parallelism
                        | flow_inline_output_type flow_parallelism
flow_named_parallel_head ::= call_ref
                           | call_ref flow_parallelism
                           | flow_parallelism call_ref
flow_parallelism ::= "par" integer_literal
flow_rank_limit ::= integer_literal
call_ref_list ::= call_ref ("," call_ref)*
call_ref ::= /[A-Za-z_@][A-Za-z0-9_./@-]*/
integer_literal ::= /\d+/
repeat_statement ::= "repeat" flow_repeat_count line_end
                   | "repeat" flow_repeat_count? "until" ":" flow_condition_body
                   | "repeat" flow_repeat_count? ":" line_end repeat_block_body
repeat_block_body ::= (doc_comment | line_comment | blank_line)*
                           flow_statement
                           (flow_statement | doc_comment | line_comment | blank_line)*
                           until_clause?
until_clause ::= "until" ":" flow_condition_body
flow_repeat_count ::= integer_literal
flow_condition_body ::= flow_inline_text line_end
                      | line_end block_indented_implicit
flow_inline_text ::= /[^#\r\n]+/
```
