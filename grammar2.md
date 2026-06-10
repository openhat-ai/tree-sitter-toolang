# Toolang Grammar Summary

```ebnf
program ::= (_trivia | _item)*

_item ::= use | struct | psyche | skill | service | prompt | task | chore | context | instruct | thunk | flow
_trivia ::= parent_doc_line | doc_line | comment_line | blank_line


# Imports

use ::= "use" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= text_line


# Structs

struct ::= "struct" type_name ":" _struct_block
_struct_block ::= line_end INDENT struct_body DEDENT

struct_body ::= (field | _trivia)+
field ::= field_name optional? ":" type line_end


# Caps

psyche ::= "psyche" cap_name ":" _cap_block
skill ::= "skill" cap_name ":" _cap_block
service ::= "service" cap_name ":" _cap_block
prompt ::= "prompt" cap_name ":" _cap_block

_cap_block ::= line_end INDENT cap_body DEDENT
cap_body ::= _trivia* (property _trivia*)* text_body? _trivia*


# Jobs

task ::= "task" job_name ":" _job_block
chore ::= "chore" job_name ":" _job_block

_job_block ::= line_end INDENT job_body DEDENT
job_body ::= _trivia* (property _trivia*)* text_body? _trivia*


# Properties

property ::= prop_name "=" text_line line_end


# Prompts

context ::= "context" prompt_name? ":" text_inline
instruct ::= "instruct" prompt_name? ":" text_inline


# Thunks

thunk ::= "thunk" thunk_name? params? return? ":" _thunk_block
_thunk_block ::= line_end INDENT thunk_body DEDENT

thunk_body ::= _trivia*
               ( _directives _settings? messages?
               | _settings messages?
               | messages
               | _pass_statement )
               _trivia*

_directives ::= (directive _trivia*)+

_settings ::= context_setting _trivia* instruct_setting _trivia*
            | instruct_setting _trivia* context_setting _trivia*
            | context_setting _trivia*
            | instruct_setting _trivia*

context_setting ::= "context" text_ref line_end
                  | "context" ":" text_inline

instruct_setting ::= "instruct" text_ref line_end
                   | "instruct" ":" text_inline

text_ref ::= "default" | "none" | prompt_name

messages ::= (message _trivia*)+
message ::= role ":" text_inline
          | invalid_thunk_reserved_message
          | unroled_message

unroled_message ::= unroled_message_line
                    (text_body_line
                    | blank_line text_body_line)*
                    blank_line?

unroled_message_line ::= text_body_line

role ::= "user" | "assistant" | "tool"

thunk_reserved_word ::= "context" | "instruct" | "user" | "assistant" | "tool"
                      | "pass" | directive_name
invalid_thunk_reserved_message ::= thunk_reserved_word text_line? line_end


# Flows

flow ::= "flow" flow_name? params? return? ":" _flow_block
_flow_block ::= line_end INDENT flow_body DEDENT

flow_body ::= _trivia*
              ( _directives statements
              | statements
              | _pass_statement )
              _trivia*

statements ::= (_flow_statement _trivia*)+

_flow_statement ::= do_statement
                  | ask_statement
                  | unfold_statement
                  | keep_statement
                  | drop_statement
                  | rank_statement
                  | each_statement
                  | fold_statement
                  | repeat_above_statement
                  | repeat_block_statement
                  | invalid_flow_reserved_statement
                  | implicit_do_statement


# Flow statements

do_statement ::= "do" callees line_end
               | "do" to_clause? ":" text_inline

implicit_do_statement ::= text_body_line
                          (text_body_line
                          | blank_line text_body_line)*
                          blank_line?

invalid_flow_reserved_statement ::= flow_reserved_word text_line? line_end
flow_reserved_word ::= "do" | "ask" | "unfold" | "keep" | "drop"
                     | "rank" | "each" | "fold" | "repeat"

ask_statement ::= "ask" agent line_end

unfold_statement ::= "unfold" callee line_end
                   | "unfold" to_clause? ":" text_inline

keep_statement ::= "keep" itemwise_named_head line_end
                 | "keep" par_clause? ":" text_inline

drop_statement ::= "drop" itemwise_named_head line_end
                 | "drop" par_clause? ":" text_inline

rank_statement ::= "rank" rank_named_head line_end
                 | "rank" limit_clause? par_clause? ":" text_inline

each_statement ::= "each" itemwise_named_head line_end
                 | "each" to_clause? par_clause? ":" text_inline

fold_statement ::= "fold" callee line_end
                 | "fold" to_clause? ":" text_inline


# Repeat

repeat_above_statement ::= "repeat" times_clause line_end
                         | "repeat" times_clause? until_clause

repeat_block_statement ::= "repeat" times_clause? ":" line_end INDENT repeat_body DEDENT

repeat_body ::= flow_body until_statement?

until_clause ::= "until" ":" condition
until_statement ::= "until" ":" condition
condition ::= text_line line_end | text_block


# Text

text_inline ::= text_line line_end | text_block
text_block ::= line_end INDENT text_body DEDENT

text_line ::= /[^#\r\n]+/
text_body ::= text_body_line+
text_body_line ::= indented_raw_text newline


# Directives

directive ::= directive_name ("=" | "+=" | "-=") directive_value line_end
directive_name ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs" | "recall"
directive_value ::= /[^#\r\n]+/


# Signatures

params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional? (":" type)?
return ::= "->" type


# Clauses

to_clause ::= "to" type
par_clause ::= "par" integer
limit_clause ::= "limit"? integer
times_clause ::= integer "times"?


# References

callees ::= callee ("," callee)*
callee ::= snake_name
agent ::= agent_name
itemwise_named_head ::= callee par_clause? | par_clause callee?
rank_named_head ::= callee limit_clause? par_clause?
                  | limit_clause? par_clause? callee


# Types

type ::= (builtin_type | type_name) ("[]")*
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" | "Pack"


# Hidden statements

_pass_statement ::= "pass" line_end


# Lexical

parent_doc_line ::= "##!" text_line? newline
doc_line ::= "##" text_line? newline
comment_line ::= "#" text_line? newline
blank_line ::= /[ \t]*\r?\n/
newline ::= /\r?\n/
inline_comment ::= "#" text_line?
line_end ::= inline_comment? newline

INDENT ::= /* emitted by indentation lexer */
DEDENT ::= /* emitted by indentation lexer */

optional ::= "?"
integer ::= /\d+/

snake_name ::= /[a-z][a-z0-9_]*(_[a-z0-9]+)*/
kebab_name ::= /[a-z][a-z0-9]*(-[a-z0-9]+)*/
snake_kebab_name ::= /[a-z][a-z0-9_-]*/
pascal_name ::= /[A-Z][A-Za-z0-9]*/

cap_name ::= snake_kebab_name
job_name ::= snake_kebab_name

type_name ::= pascal_name
field_name ::= snake_name
param_name ::= snake_name
prop_name ::= snake_name

prompt_name ::= snake_name
thunk_name ::= snake_name
flow_name ::= snake_name
agent_name ::= snake_name
```

## Notes

```txt
Hidden grammar rules begin with `_`.

`##` attaches documentation to the next semantic node.

`##!` attaches documentation to the parent semantic node. At top level, it becomes program documentation.

`pass` is valid source syntax but does not appear in the semantic AST.

`return` maps to AST `return`.

`to_clause` maps to `ProcInline.to`.

`par_clause` maps to `par`.

`cap_ref` is parsed as a single-line value. URI/shorthand/scoped-cap validation is handled outside this grammar.

`rank` supports the same modifier shape for ref and inline forms:
  rank scorer limit 5 par 4
  rank limit 5 par 4:
      ...

`callee` is parsed as a local snake_case name. The resolver decides whether it points to a thunk or a flow.

`agent` is a local agent name.

Named item-wise forms support the callee either before modifiers or after all
modifiers, but not interleaved between modifiers.

`message ::= unroled_message` becomes a message with omitted role, which means implicit user message.

In thunk bodies, `unroled_message` is a fallback message. A line starting with
`thunk_reserved_word` parses as `invalid_thunk_reserved_message` unless it
matches an explicit thunk body form. Explicit thunk body forms are tried before
fallback, including after an unroled message has started. Adjacent unroled
message text lines are merged into one message. One blank line between unroled
message text lines is preserved inside the same message. Two or more blank
lines, or any comment/doc-comment line, split unroled messages. Use an explicit
role when message content itself starts with a reserved word.

Flow parsing tries explicit flow statements before `implicit_do_statement`.
If a flow body entry is not an explicit statement, it is parsed as `implicit_do_statement`.

`implicit_do_statement` is shorthand for `do:` with an anonymous inline thunk.
Adjacent implicit-do text lines are merged into one statement. One blank line
between implicit-do text lines is preserved inside the same statement. Two or
more blank lines, or any comment/doc-comment line, split implicit-do statements.
A flow body line starting with a reserved flow word parses as
`invalid_flow_reserved_statement` unless it matches an explicit flow statement.
`until_statement` is only valid in repeat statements and never parses as an
implicit `do` statement.

`repeat_block_statement` contains an anonymous inline flow and maps to `RepeatBlock.body: Flow`.
The optional `until_statement` is a repeat-block terminator, not a normal flow statement.

Short repeat forms such as `repeat 3` and `repeat until: done` capture previous
executable statements in the same flow block. Semantic validation rejects a short
repeat when the captured range is empty.

All text forms normalize to String in the semantic AST.

The abstract grammar uses `INDENT` and `DEDENT`. A Tree-sitter implementation may
lower indentation into text/body tokens instead of exposing explicit indentation
nodes in the CST.
```
