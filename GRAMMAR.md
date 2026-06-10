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
line_end ::= inline_comment? newline

parent_doc_comment ::= "##!" /[^\r\n]*/ newline
doc_comment ::= "##" /[^\r\n]*/ newline
line_comment ::= "#" /[^\r\n]*/ newline
inline_comment ::= "#" /[^\r\n]*/
trivia ::= parent_doc_comment | doc_comment | line_comment | blank_line

pascal_name ::= /[A-Z][A-Za-z0-9]*/
snake_name ::= /[a-z][a-z0-9_]*(_[a-z0-9]+)*/
kebab_name ::= /[a-z][a-z0-9]*(-[a-z0-9]+)*/
snake_kebab_name ::= /[a-z][a-z0-9_-]*/
text_line ::= /[^#\r\n]+/
indented_raw_text ::= /[ \t][^\r\n]*/
integer_literal ::= /\d+/
```

Comments:

- `##` documents the next item or statement.
- `##!` documents the parent. At the top level, it documents the program.
- Normal comments and blank lines are trivia. They can separate statements and
  implicit thunk bodies.
- Inline comments are allowed where a rule uses `line_end`.

## Types

```ebnf
type ::= base_type type_suffix*
base_type ::= builtin_type | user_type
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" | "Pack"
user_type ::= type_name
type_name ::= pascal_name
type_suffix ::= "[]"
```

Rules:

- `Text`, `Number`, and `Boolean` are scalar types.
- `Json` is a dynamic JSON-compatible value.
- `Part` is a model-visible content part.
- `Pack` is a builtin Record equivalent to `{ parts: Part[] }`. It is one value,
  not an item array.
- A `struct` declaration defines a user Record type. `Record` is a semantic
  category, not a builtin type name.
- Runtime `Message` values are Records, but Toolang source does not use
  `Message` as a normal thunk or flow type.

## Program

```ebnf
program ::= (item | trivia)*
item ::= use | struct | psyche | skill | service | prompt | task | chore
       | context | instruct | thunk | flow
```

## Use

```ebnf
use ::= "use" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= text_line
```

## Struct

```ebnf
struct ::= "struct" struct_name ":" line_end struct_body
struct_name ::= type_name
struct_body ::= (field | doc_comment | line_comment | blank_line)+
field ::= field_name optional_marker? ":" type line_end
field_name ::= snake_name
optional_marker ::= "?"
```

## Caps

```ebnf
psyche ::= "psyche" cap_name ":" cap_body
skill ::= "skill" cap_name ":" cap_body
service ::= "service" cap_name ":" cap_body
prompt ::= "prompt" cap_name ":" cap_body
cap_name ::= snake_kebab_name

cap_body ::= line_end (property | trivia)* text_body? trivia*
property ::= property_key "=" property_value line_end
property_key ::= snake_name
property_value ::= text_line
```

Rules:

- The public CST exposes `psyche`, `skill`, `service`, and `prompt` directly.
- Runtime validates property keys and cap-specific constraints.

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
text_body ::= (text_body_line | blank_line)+
text_body_line ::= indented_raw_text newline
```

Rules:

- `context`, `instruct`, thunk messages, flow inline bodies, and flow conditions
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

## Thunk

```ebnf
thunk ::= "thunk" thunk_name? params? return_type? ":" line_end thunk_body
thunk_name ::= snake_name
return_type ::= "->" type

params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? (":" type)?
param_name ::= snake_name

thunk_body ::= trivia*
               (directives settings? messages?
               | settings messages?
               | messages
               | pass_statement)
               trivia*

directives ::= directive+
directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches"
                | "hands" | "handoffs" | "recall"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= directive_value ("," directive_value)*
directive_value ::= /[A-Za-z_@][A-Za-z0-9_./@:-]*/

settings ::= context_setting instruct_setting?
           | instruct_setting context_setting?
context_setting ::= "context" text_ref line_end
instruct_setting ::= "instruct" text_ref line_end
text_ref ::= "default" | "none" | snake_name

messages ::= message+
message ::= role ":" text_inline | text_inline
role ::= "user" | "assistant" | "tool"
pass_statement ::= "pass" line_end
```

Rules:

- `in` is reserved as the primary invocation input parameter. If present, it
  must be first.
- A thunk without `in` does not accept invocation input.
- `_` is available in thunk templates as an alias for `in`.
- Directives must appear before settings and messages.
- `context` and `instruct` settings do not use `:`. Colon syntax is reserved
  for inline bodies and messages.
- Bare text in a thunk body is an unroled message. Runtime treats it as a user
  message.
- `pass` declares an empty body and cannot be followed by other body entries.
- Runtime validates referenced names and directive semantics.

## Flow

```ebnf
flow ::= "flow" flow_name? params? return_type? ":" line_end flow_body
flow_name ::= snake_name

flow_body ::= trivia*
              (directives statements
              | statements
              | pass_statement)
              trivia*

statements ::= flow_statement+
flow_statement ::= explicit_flow_statement
                 | implicit_do_statement

explicit_flow_statement ::= do_statement
                          | ask_statement
                          | unfold_statement
                          | keep_statement
                          | drop_statement
                          | rank_statement
                          | each_statement
                          | fold_statement
                          | repeat_above_statement
                          | repeat_block_statement

do_statement ::= "do" callees line_end
               | "do" to_clause? ":" text_inline

implicit_do_statement ::= implicit_do_body
implicit_do_body ::= implicit_do_line
                     (implicit_do_line
                     | blank_line implicit_do_line)*
                     blank_line?
implicit_do_line ::= indented_raw_text newline

ask_statement ::= "ask" agent line_end

unfold_statement ::= "unfold" callee line_end
                   | "unfold" to_clause? ":" text_inline

keep_statement ::= "keep" (callee par_clause? | par_clause) line_end
                 | "keep" par_clause? ":" text_inline

drop_statement ::= "drop" (callee par_clause? | par_clause) line_end
                 | "drop" par_clause? ":" text_inline

rank_statement ::= "rank" callee limit_clause? par_clause? line_end
                 | "rank" limit_clause? par_clause? ":" text_inline

each_statement ::= "each" (callee par_clause? | par_clause) line_end
                 | "each" to_clause? par_clause? ":" text_inline

fold_statement ::= "fold" callee line_end
                 | "fold" to_clause? ":" text_inline

repeat_above_statement ::= "repeat" times_clause line_end
                         | "repeat" times_clause? until_clause

repeat_block_statement ::= "repeat" times_clause? ":" line_end repeat_body
repeat_body ::= flow_body until_clause?
until_clause ::= "until" ":" condition
condition ::= text_inline

to_clause ::= "to" type
par_clause ::= "par" integer_literal
limit_clause ::= "limit"? integer_literal
times_clause ::= integer_literal "times"?
callees ::= callee ("," callee)*
callee ::= snake_name
agent ::= snake_name
```

Rules:

- A `flow` describes a workflow as an ordered tree of executable statements.
- The runtime's primary flow execution unit is a statement.
- Flow signatures reuse thunk parameter and return type syntax.
- Flow directives reuse thunk directive syntax and must appear before
  statements.
- Flow parsing tries explicit statements first. If a flow body entry is not an
  explicit statement, it is parsed as an implicit `do` statement.
- Adjacent implicit-do text lines are merged into one statement. One blank line
  between implicit-do lines is preserved in the same statement; two or more
  blank lines, or a comment/doc-comment line, split implicit-do statements.
- `do callees` runs named thunks or flows on the current value.
- `do: ...` and `do to Type: ...` define inline thunk-like statements.
- `ask agent` delegates the current value to an agent and replaces it with the
  result.
- `unfold` expands one value into multiple items. Bare `unfold` without a named
  callee or inline body is invalid.
- `keep` keeps matching items.
- `drop` drops matching items.
- `rank` ranks items and can keep the top N when `limit_clause` is provided.
- `each` processes every item and collects results.
- `fold` combines multiple items into one value.
- `to Type` is only supported by inline `do`, `unfold`, `each`, and `fold`.
- `par N` is only meaningful for item-wise statements.
- Named forms do not also define inline bodies after `:`.
- `repeat N`, `repeat until:`, and `repeat N until:` repeat the previous
  executable statements in the current flow block. Semantic validation rejects a
  short repeat with an empty captured range.
- `repeat N:` and `repeat:` define explicit nested flow blocks. A final
  `until:` clause may stop the loop early. The `until:` clause is the repeat
  block terminator, not a normal flow statement.
- Runtime may normalize short repeat forms to repeat block statements before
  execution.

## Model Call Assembly

The runtime assembles a thunk call into tools, instructions, and messages for
the model adapter. Runtime messages are not Toolang source-level types; they are
Records with a role and `Part[]`.

- Values referenced by message bodies are promoted to parts according to their
  type: `Text` to a text part; `Number`, `Boolean`, `Json`, and user Records to
  JSON parts; `Part` values to parts directly; and `Pack` values to contained
  parts.
- Runtime part values use short `kind` names such as `text`, `json`, `image`,
  `audio`, `video`, `file`, `tool_call`, and `tool_result`.
- `recall = none` disables history retrieval. `recall = default` delegates to
  runtime policy. Explicit `history`, `memory`, or `history, memory` values
  select retrieval sources.
