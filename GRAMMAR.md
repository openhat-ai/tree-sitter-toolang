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

scatter_statement ::= "scatter" integer_literal
                      (_named_using_complement line_end
                      | _inline_using_complement)

storm_statement ::= "storm" integer_literal _using_complements

gather_statement ::= "gather"
                     (_named_using_complement line_end
                     | _inline_using_complement)

settle_statement ::= "settle"
                     (_named_using_complement line_end
                     | _inline_using_complement)

map_statement ::= "map" _using_complements

position ::= ("first" | "last") integer_literal
keep_statement ::= "keep" position line_end
                 | "keep" _if_complements
drop_statement ::= "drop" position line_end
                 | "drop" _if_complements

sort_statement ::= "sort" ("ascending" | "descending") _by_complements

repeat_statement ::= "repeat" _repeat_count_complement ":" line_end
                     _trivia* statements _until_complement?
                   | "repeat" ":" line_end
                     _trivia* statements _until_complement
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

implicit_run_statement ::= _implicit_initial_line
                           (_implicit_continuation_line
                           | blank_line _implicit_initial_line)*
                           blank_line?
_implicit_initial_line ::= a nonblank flow text line that does not begin with
                           an active or reserved statement keyword
_implicit_continuation_line ::= any nonblank, non-comment flow text line

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
- `repeat` always has a count, a final `until` condition, or both. Its `body`
  field points directly to `statements`; its optional `until` field points to
  `inline_agic_body`. Leading blank lines and comments are trivia children of
  `repeat_statement`, before `body`; they cannot become implicit-run content
  or replace the required executable body.
- Bare flow text is shorthand for inline `run`. An adjacent nonblank line stays
  in the same implicit run even when it begins with a flow verb. After one blank
  line, ordinary text continues the implicit run while a lowercase boundary
  keyword starts an explicit or reserved statement. Two blank lines, a comment,
  the end of the flow body, or end of file ends the implicit run.
- `until` is a reserved boundary keyword. Only `until:` in a repeat is valid;
  bare `until` and lowercase `until ...` do not form an implicit run at a
  statement boundary.
- Explicit statement keywords are lowercase and case-sensitive. Named and
  positional statement headers end at `line_end` and do not accept trailing
  prose punctuation.
- `rank`, `par`, `top`, and `bottom` are reserved legacy words. `think`, `use`,
  and `thunk` remain reserved without statement syntax. A malformed line that
  begins with an active or reserved flow word parses as
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
- `recall` is singular and agic-only. Its canonical values are `auto`, `none`,
  `far`, `near`, and `far, near`; omission means `auto`. `line` is a reserved
  runtime local, not a recall source.
- `far`, `near`, and `line` are reserved read-only runtime locals. Named
  parameters and flow bindings cannot use them.
- `hands` authorizes runnable targets for `_too__run`; `handoffs` authorizes
  runnable targets for `_too__execute`.
