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

parent_doc_line ::= "##!" /[^\r\n]*/ newline
doc_line ::= "##" /[^\r\n]*/ newline
comment_line ::= "#" /[^\r\n]*/ newline
inline_comment ::= "#" /[^\r\n]*/
trivia ::= parent_doc_line | doc_line | comment_line | blank_line

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
  implicit agic bodies.
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
struct_body ::= (field | doc_line | comment_line | blank_line)+
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
text_body ::= (text_body_line | blank_line)+
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
               (directives settings? messages?
               | settings messages?
               | messages
               | pass_statement)
               trivia*

directives ::= directive+
directive ::= directive_key directive_op directive_value line_end
            | "recall" "=" recall_value line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches"
                | "hands" | "handoffs"
directive_op ::= "=" | "+=" | "-="
directive_value ::= /[^#\r\n]+/

recall_value ::= "auto" | "none" | "far" | "near" | "far" "," "near"

settings ::= context_setting instruct_setting?
           | instruct_setting context_setting?
context_setting ::= "context" text_ref line_end
                  | "context" ":" text_inline
instruct_setting ::= "instruct" text_ref line_end
                   | "instruct" ":" text_inline
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
                      | "pass" | directive_key
invalid_agic_reserved_message ::= agic_reserved_word text_line? line_end
pass_statement ::= "pass" line_end
```

Rules:

- `_` is the primary invocation input parameter. If present, it must be first.
- Omitting the complete parameter list implies `_ : Part[]`; writing `()`
  declares no primary input.
- An explicit `_` without a type also defaults to `Part[]`.
- An untyped named parameter defaults to `Text`.
- An omitted return type defaults to `Part[]`.
- Directives must appear before settings and messages.
- `context ref` and `instruct ref` select named/default/none settings.
  `context:` and `instruct:` provide inline setting bodies.
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

statements ::= flow_statement+
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
                 | rank_statement
                 | repeat_statement

let_statement ::= "let" local_name "=" flow_operation
                | "let" flow_operation
                | "let" local_name "=" text_inline
local_name ::= snake_name

run_statement ::= "run" runnable line_end
                | "run" inline_agic

implicit_run_statement ::= text_body_line
                           (text_body_line
                           | blank_line text_body_line)*
                           blank_line?

seek_statement ::= "seek" agent runnable line_end
                 | "seek" agent inline_agic

ask_statement ::= "ask" ":" text_inline

scatter_statement ::= "scatter" integer_literal runnable line_end
                    | "scatter" integer_literal inline_agic

storm_statement ::= "storm" integer_literal runnable par_clause? line_end
                  | "storm" integer_literal par_clause? inline_agic

gather_statement ::= "gather" runnable line_end
                   | "gather" inline_agic

settle_statement ::= "settle" runnable line_end
                   | "settle" inline_agic

map_statement ::= "map" runnable par_clause? line_end
                | "map" par_clause? inline_agic

keep_statement ::= "keep" position_clause line_end
                 | "keep" runnable par_clause? line_end
                 | "keep" par_clause? inline_agic_body

drop_statement ::= "drop" position_clause line_end
                 | "drop" runnable par_clause? line_end
                 | "drop" par_clause? inline_agic_body

rank_statement ::= "rank" runnable rank_selection_clause? par_clause? line_end
                 | "rank" rank_selection_clause? par_clause? inline_agic_body

repeat_statement ::= "repeat" integer_literal ":" line_end repeat_body
                   | "repeat" ":" line_end repeat_until_body
repeat_body ::= statements until_statement?
repeat_until_body ::= statements until_statement
until_statement ::= "until" inline_agic_body

inline_agic ::= return_type? ":" text_inline
inline_agic_body ::= ":" text_inline

par_clause ::= "par" integer_literal
position_clause ::= ("first" | "last") integer_literal
rank_selection_clause ::= ("top" | "bottom") integer_literal

runnable ::= snake_name
agent ::= snake_name

invalid_flow_reserved_statement ::= flow_reserved_word text_line? line_end
flow_reserved_word ::= "let" | "run" | "seek" | "ask" | "scatter" | "storm"
                     | "gather" | "settle" | "map" | "keep" | "drop" | "rank"
                     | "repeat" | "until" | "think" | "use" | "thunk"
```

Rules:

- A `flow` describes a workflow as an ordered tree of executable statements.
- A flow name may be omitted.
- The grammar permits multiple unnamed agics and flows in one source file.
  Default naming and runnable-name uniqueness are semantic validation after
  parsing.
- Flow signatures reuse agic parameter and return type syntax and defaults.
- Flow directives reuse agic directive syntax and must appear before
  statements.
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
- `run` resolves a named agic or flow, or defines an inline agic.
- Bare flow text is shorthand for inline `run`. One blank line stays inside the
  same body; two blank lines or a comment split statements.
- `seek` targets another agent with a named runnable or inline agic. `ask`
  requests input from the human owner.
- `scatter` and `storm` expand one item into a list. `gather` and `settle`
  reduce a list to one item.
- `map` transforms every list item. `keep` and `drop` select by position or
  Boolean filter. `rank` orders items by descending numeric score.
- `par N` limits independent child-run concurrency without changing result
  order.
- `repeat` always has a count, a final `until` condition, or both.
- `think`, `use`, and `thunk` are reserved and have no statement syntax.
- A malformed line beginning with a reserved flow word parses as
  `invalid_flow_reserved_statement` rather than implicit `run` text.

## Model Call Assembly

The runtime assembles an agic call into tools, instructions, and messages for
the model adapter. Runtime messages are not Toolang source-level types; they are
Records with a role and `Part[]`.

- Values referenced by message bodies are promoted to parts according to their
  type: `Text` to a text part; `Number`, `Boolean`, `Json`, and user Records to
  JSON parts; `Part` values to parts directly; and `Pack` values to contained
  parts.
- Runtime part values use short `kind` names such as `text`, `json`, `image`,
  `audio`, `video`, `file`, `tool_call`, and `tool_result`.
- `recall` is singular and agic-only. Its canonical values are `auto`, `none`,
  `far`, `near`, and `far, near`; omission means `auto`. `line` is a reserved
  runtime local, not a recall source.
- `far`, `near`, and `line` are reserved read-only runtime locals. Named
  parameters and flow bindings cannot use them.
- `hands` authorizes runnable targets for `_too__run`; `handoffs` authorizes
  runnable targets for `_too__execute`.
