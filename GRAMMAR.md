# Toolang Grammar

This reference specifies the syntax of Toolang programs written in `.too`
files. Productions and their accompanying constraints define valid source
forms. Examples are complete, parseable programs; referenced names and resources
may require runtime definitions.

The [Toolang language reference](https://github.com/openhat-ai/toolang/blob/main/docs/program.md)
defines name resolution, type defaults, input binding, and execution.

## Conventions

### EBNF

| Notation | Meaning |
| --- | --- |
| `name ::= expression ;` | Defines a production |
| `"text"` | Literal characters, with JSON string escapes |
| `A B` | Concatenation |
| `A \| B` | Alternative |
| `(A)` | Grouping |
| `A?`, `A*`, `A+` | Optional, zero or more, one or more |
| `/pattern/` | A lexical regular expression |
| `? description ?` | A lexical or contextual condition explained in prose |

`block(P)` denotes a header line ending followed by an indented body matching
`P`; `optional_block(P)` also permits the body to be absent. Both follow the
[layout rules](#block-layout). Structural entries may be separated or surrounded
by blank lines and comments. Literal text follows the [text rules](#text).

Spacing follows the [token rules](#tokens). Line breaks occur only through
`newline`, `line_end`, or a block/text form. Productions use CST node names where
applicable; helper productions describe source forms and constraints.

Construct names are singular. Flow statements use the `_statement` suffix;
clauses use `_clause`. Parameter nodes use `param`, `params`, `param_name`, and
`param_doc` consistently with the parser.

Keyword token names use the `_keyword` suffix; declarations expose their
introducer through the `keyword` field. Source helpers such as `line_end` do not
add CST wrappers: structural line endings expose `newline` and any `plain_comment`
directly.

[GRAMMAR.ebnf](GRAMMAR.ebnf) is the generated implementation reference, including
Tree-sitter annotations, helper rules, and recovery alternatives.

## Lexical Structure

### White Space

```ebnf
hspace         ::= /[ \t]+/ ;
newline        ::= "\n" | "\r\n" ;
blank_line     ::= /[ \t]*/ newline ;
line_end       ::= inline_comment? (newline | eof) ;
inline_comment ::= "#" comment_text ;
comment_text   ::= /[^\r\n]*/ ;
eof            ::= ? end of source ? ;
```

Horizontal spacing between structural tokens is otherwise optional. Indentation
and line endings remain significant. EOF can terminate the last nonempty line
and close its enclosing bodies; it cannot supply a missing body or text value.

### Tokens

Adjacent words or numbers require at least one space or tab. A continuous
ASCII word-character sequence (`[A-Za-z0-9_]+`) is indivisible: `runworker`,
`runWorker`, and `2times` cannot split into smaller tokens. A newline cannot
replace a required horizontal separator.

Independent grammar symbols delimit tokens and permit surrounding spaces/tabs.
For example, `flow work(input?:Text)->Text[]:`, `let h=async run worker`, and
`generate 2->Text:Text.` use valid token boundaries. Compound symbols remain
contiguous: `->`, `+=`, `-=`, `[]`, and comment markers cannot contain whitespace.
Thus `Text []` is valid while `Text[ ]` is invalid.

Names and runnable references are indivisible: `my-skill` and `ns::flow:work`
cannot contain whitespace. A raw `with` reference requires a separator after
its kind: `with skill ./foo` is valid; `with skill./foo` is invalid. The
reference itself is text and may contain spaces. Text contents follow their
own lexical rules.

### Names and Integers

```ebnf
identifier      ::= /[a-z][a-z0-9_]*/ ;
type_name       ::= /[A-Z][A-Za-z0-9]*/ ;
cap_name        ::= /[a-z][a-z0-9_-]*/ ;
chore_name      ::= /[a-z][a-z0-9_-]*/ ;
runnable_name   ::= identifier ;
agent_name      ::= identifier ;
local_name      ::= identifier ;
handle_name     ::= identifier ;
param_name      ::= identifier | "_" ;
integer_literal ::= /[0-9]+/ ;

runnable_ref    ::= /([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/ ;
```

Named parameters, local destinations, and await handles accept any `identifier`,
including keywords, `default`, and `none`. Keywords are recognized by syntactic
context rather than globally excluded from names. `_` may name a parameter,
but not a local destination or await handle.

Integers contain decimal digits only. Signs, fractions, exponent notation, and
underscores are not accepted in structural numeric positions. Leading zeros
are allowed. `lane` and `lanes` are interchangeable, as are `time` and `times`,
regardless of the number: `1 lanes`, `2 lane`, and `01 times` are valid.
Consumers validate numeric ranges.

### Keywords

Keywords are lowercase and case-sensitive. These context-dependent sets govern
implicit-text boundaries and operation recognition:

```ebnf
declaration_keyword ::= "with" | "struct" | "psyche" | "skill" | "service"
                      | "prompt" | "chore" | "context" | "instruct"
                      | "agic" | "flow" ;
operation_keyword   ::= "run" | "seek" | "ask" | "generate" | "map" | "reduce"
                      | "keep" | "drop" | "sort" | "repeat" | "spawn" | "await" ;
clause_keyword      ::= "until" | "from" | "windowing" | "using" | "if" | "by"
                      | "in" | "lane" | "lanes" | "ascending" | "descending"
                      | "time" | "times" | "first" | "last" ;
query_key           ::= "models" | "tools" | "skills" | "services"
                      | "psyches" | "prompts" ;
route_key           ::= "hands" | "handoffs" ;
directive_keyword   ::= query_key | route_key | "recall" | "lanes"
                      | "context" | "instruct" ;
role                ::= "user" | "assistant" | "tool" ;
agic_keyword        ::= directive_keyword | role | "pass" ;
flow_keyword        ::= declaration_keyword | operation_keyword | clause_keyword
                      | agic_keyword | "let" | "exec" | "async" | "_" ;
```

Words outside these sets follow the ordinary name and text rules.

### Comments and Documentation

```ebnf
comment         ::= plain_comment | shebang_comment
                  | program_doc | item_doc | param_doc ;
plain_comment   ::= "#" comment_text comment_end ;
shebang_comment ::= "#!" comment_text comment_end ;
program_doc     ::= "#@" hspace? doc_text? comment_end ;
item_doc        ::= "##" hspace? doc_text? comment_end ;
param_doc       ::= "##" hspace? "@param" hspace param_name hspace doc_text comment_end ;
doc_text        ::= /[^ \t\r\n][^\r\n]*/ ;
comment_end     ::= newline | eof ;
trivia          ::= blank_line | comment ;
```

Documentation uses three peer CST nodes at structural comment positions:

| Node | Fields |
| --- | --- |
| `program_doc` | Optional `text: comment_text`. |
| `item_doc` | Optional `text: comment_text`. |
| `param_doc` | Required `param: param_name` and `description: comment_text`. |

Each node spans the complete physical comment line, starting at `#` after
indentation and including the line ending when present. `param_doc` directly
contains its fields and the `"@param"` token; there is no outer `item_doc` node.
Fields exclude markers and separating whitespace, retain trailing whitespace,
and use exact UTF-8 byte ranges. Consumers own documentation attachment.

These forms have contextual constraints:

- At structural comment positions, a recognized longer marker takes precedence
  over `#` or `##`, subject to the position restrictions below.
- `#!` is a shebang only at byte zero. A later or indented `#!`, including one
  after a leading BOM, is a plain comment. The interpreter text is unrestricted.
- `#@` introduces program documentation at column zero. Indented structural
  `#@` is invalid. Program documentation never interprets parameter tags.
- `##` introduces item documentation. Consecutive lines at the item's indentation
  can document the following item. Blank lines, other comment kinds, intervening
  syntax, and scope endings interrupt attachment; consumers perform attachment.
- A leading `@param` followed by space, tab, a line ending, or EOF selects a
  `param_doc`. Both name and same-line description are required. A malformed
  tag cannot fall back to `item_doc`. `@parameter`, `@param:`,
  `@return`, and `@param` later in prose remain ordinary documentation text.
- Inline `#`, `##`, `#@`, and `#!` introduce plain comments only in
  structural positions where `line_end` allows them. Inline and indented
  explicit text treat every marker as literal content.

Descriptions may contain Unicode, punctuation, `#`, and further `@` characters.
There is no parameter-documentation continuation syntax. Unknown or duplicate
parameter names remain syntactically valid.

```too
#!/usr/bin/env too
#@ Tools for concise summaries.

## Summarize the supplied material.
## @param _ Source material.
## @param style Preferred summary style.
agic summarize(_: Text, style?: Text):
  Summarize {{_}}.
```

## Block Layout

Top-level declarations start at column zero. The first substantive body entry
must be deeper than its header and establishes the body's baseline. Structural
siblings share that baseline. A deeper structural entry requires an enclosing
body; a dedent must reach an existing ancestor baseline.

Any positive indentation width is accepted. Tabs advance to eight-column stops.
A structural prefix cannot mix spaces and tabs, and sibling entries cannot
interchange their spellings at one baseline. Nested levels may use different
styles. Form feed is not indentation.

Blank lines and structural comments neither establish indentation nor satisfy
a required body. Each construct specifies its required body entries.

CST body nodes start at the first substantive entry and exclude the header's
line ending and leading structural trivia. Leading trivia before a nonempty
body is a direct child of the owning construct. An empty psyche, skill, service,
prompt, or chore has no `body` field. When no body follows, outer comments remain
in their enclosing scope.

Indented text establishes its own baseline. Deeper Markdown indentation and
comment markers are literal text; a dedent below that baseline ends the text.
Relative indentation and physical text bytes are retained.

```too
flow inspect:
  repeat 2 times:
    run:
      Inspect the material.
        This indentation belongs to the text.
    until: The inspection is complete.
  run: Summarize the result.
```

## Type

```ebnf
type         ::= (builtin_type | type_name) "[]"* ;
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" ;
```

An authored type uses `type_name`. Each `[]` adds an array suffix; `Text[][]`
is valid.

## Text

Quotation marks and backslashes are literal characters: there is no quoted
string, escape decoding, or quote-closure requirement. `""` contains two quote
characters rather than an empty value. The containing construct selects
same-line text, an indented block, or an implicit paragraph.

```ebnf
text          ::= inline_text text_end
                | text_end blank_line* indented_text ;
inline_text   ::= /[ \t]*[^ \t\r\n][^\r\n]*/ ;
text_end      ::= newline | eof ;
indented_text ::= ? nonempty literal text block at a deeper baseline ? ;
paragraph(C)  ::= ? implicit text paragraph using boundary set C ? ;
```

Same-line text requires a non-space/tab character and consumes the rest of its
physical line, including every `#`. It has no inline comments: `run: # Heading`
contains `# Heading`, and `let note = "a#b"` retains the quotes and hash.
A text introducer followed only by spaces/tabs and a newline selects indented
text. It cannot have an inline header comment. Indented text may follow blank
lines; keywords, comment markers, and Markdown fences at or beyond its baseline
are literal.
Structural comments outside the text prevent a following text block.

Declarations, typed fields, named operations, directives, properties, and `with`
references allow inline structural comments through `line_end`.

An implicit paragraph checks the first complete token of every substantive
line, including continuations. A word in its boundary set selects structural
syntax; a malformed structural form cannot fall back to text. Keyword prefixes
remain literal. Adjacent text lines and one intervening blank line form one
paragraph. Two blank lines, a structural comment, dedent, or EOF ends it.
Relative Markdown indentation can continue the paragraph; a keyword-led line
at an invalid structural depth is an error. Embedded `#` remains paragraph text.

Agic messages use `paragraph(agic_keyword)`; flow prose uses
`paragraph(flow_keyword)`. Explicit text does not apply those boundary sets.
Template spellings such as `{{_}}`, `{{style}}`, and `{{_1._}}` remain literal
source text; consumers interpret them.

```too
flow explain: # Structural annotation.
  let note = A same-line text value.
  let quoted = "a#b"
  run: Visit https://example.com/#details
  let literal =
    run is literal inside this text block.
    # This line is text too.
  Explain the material.
  Continue the same paragraph.

  Continue after one blank line.
```

## Property

```ebnf
property       ::= identifier "=" property_value line_end ;
property_value ::= /[^#\r\n]+/ ;
body_text      ::= ? nonempty literal text at the containing body's baseline ? ;
```

A psyche, skill, service, prompt, or chore body consists of an optional
property prefix followed by optional text. The body is indented; empty and
property-only bodies are valid. Blank lines and structural comments may precede
or separate properties without ending the prefix. Any `identifier` followed by
`=` selects a property, independently of the containing construct's schema.
`+=` and `-=` do not select properties. The first non-property body line starts
literal text; subsequent assignments and comment markers remain text.

A raw property value may contain only spaces/tabs. Consumers validate supported
names, duplicates, required properties, and value meanings. CST fields are
`key: identifier`, `operator: assign_operator`, and `value: text_line`.

## Directive

```ebnf
directive          ::= query_key directive_operator directive_value line_end
                     | route_key "=" route_value line_end
                     | "recall" "=" recall_value line_end
                     | "lanes" "=" (integer_literal | "default") line_end
                     | ("context" | "instruct") "=" text_ref line_end ;
directive_operator ::= "=" | "+=" | "-=" ;
directive_value    ::= /[^ \t#\r\n][^#\r\n]*/ ;
route_value        ::= "none" | "*" | runnable_ref ("," runnable_ref)* ;
recall_value       ::= "none" | "default" | "*"
                     | recall_source ("," recall_source)* ;
recall_source      ::= "far" | "near" ;
text_ref           ::= "default" | "none" | identifier ;
```

Directives form a prefix before messages or statements and require a value.
Blank lines and structural comments leave the prefix open. While it is open,
an `identifier` followed on the same line by `=`, `+=`, or `-=` must name a
directive. An unknown name such as `modles` in `modles = fast` is a syntax error,
including when its value is missing. The first message or statement ends the
prefix permanently. Subsequent lines follow the ordinary body rules; explicit
text treats assignment-looking lines literally.

Only query directives accept `+=` and `-=`; their values are raw text up to a
comment or line ending. Consumers validate query expressions. Special values
`none`, `*`, and recall's `default` must stand alone.

Runnable references use the qualified syntax defined in
[Names and Integers](#names-and-integers). Recall sources may appear in either
order. `context` and `instruct` are selectors using `=`; local text blocks and
bare selectors are invalid.

CST directives use `key: directive_key` and `operator: directive_operator`.
The `value` field contains the corresponding value node; `context` and `instruct`
selectors point directly to `identifier`, `default_keyword`, or `none_keyword`.

## Program

```ebnf
program ::= trivia* ((with | struct | psyche | skill | service | prompt
                   | chore | context | instruct | agic | flow) trivia*)* ;
```

A program contains constructs and trivia in source order. Top-level prose
is invalid; constructs start at column zero. The CST root is `program`, with
constructs and trivia as direct children.

## With

```ebnf
with          ::= "with" cap_kind hspace raw_reference line_end ;
cap_kind      ::= "psyche" | "skill" | "service" | "prompt" ;
raw_reference ::= /[^#\r\n]+/ ;
```

The reference is nonblank text ending at `#`, a line ending, or EOF. Internal
spaces are retained; path and reference interpretation belongs to the consumer.

```too
with skill ./skills/review
with prompt library/summary
```

## Struct

```ebnf
struct ::= "struct" type_name ":" block(field+) ;
field  ::= identifier "?"? ":" type line_end ;
```

A struct requires at least one field. Fields may carry the optional marker `?`.

```too
struct Report:
  summary: Text
  count?: Number
  parts: Part[]
```

## Psyche

```ebnf
psyche ::= "psyche" cap_name ":" optional_block(property* body_text?) ;
```

The name is required; the optional body follows the [property and text
rules](#property).

```too
psyche reviewer:
  Prefer concrete findings and direct language.
```

## Skill

```ebnf
skill ::= "skill" cap_name ":" optional_block(property* body_text?) ;
```

The name is required; the optional body follows the [property and text
rules](#property).

```too
skill review:
  description = Review supplied changes.

  Review the supplied changes.
```

## Service

```ebnf
service ::= "service" cap_name ":" optional_block(property* body_text?) ;
```

The name is required; the optional body follows the [property and text
rules](#property).

```too
service repository:
  description = Access repository operations.
  transport = http
  target = https://example.com/mcp

  Use this service for repository operations.
```

## Prompt

```ebnf
prompt ::= "prompt" cap_name ":" optional_block(property* body_text?) ;
```

The name is required; the optional body follows the [property and text
rules](#property). Prompts have no typed parameter list, and placeholders remain
text.

```too
prompt rewrite:
  Rewrite {{_}} in the requested {{tone}} tone.
```

## Chore

```ebnf
chore ::= "chore" chore_name ":" optional_block(property* body_text?) ;
```

The name is required; the optional body follows the [property and text
rules](#property).

```too
chore review_changes:
  title = Review changes

  Review the latest changes.
```

## Context

```ebnf
context ::= "context" identifier? ":" text ;
```

`context` accepts an optional name and requires same-line or indented text.

```too
context project:
  Use the supplied project context.
```

## Instruct

```ebnf
instruct ::= "instruct" identifier? ":" text ;
```

`instruct` accepts an optional name and requires same-line or indented text.

```too
instruct: Return a concise answer.
```

## Agic

```ebnf
agic ::= "agic" runnable_name? params? ("->" type)? ":" block(agic_body) ;
```

Name, parameter list, and return annotation are independently optional.

### Parameters

```ebnf
params ::= "(" (param ("," param)*)? ")" ;
param  ::= param_name "?"? (":" type)? ;
```

Parameters accept an optional `?` marker and type annotation; `_` is a valid
parameter name. An omitted list differs from `()`; trailing commas are invalid.
Consumers validate parameter order and uniqueness and apply type defaults.

### Return Type

The optional `-> type` uses the [type syntax](#type) and follows any parameter
list, before the header colon.

### Body

```ebnf
agic_body ::= directive+ message* | message+ | "pass" line_end ;
```

A body may contain directives alone, or messages optionally preceded by
directives. `pass` is a whole-body alternative and cannot follow directives or
coexist with messages.

The CST `body` field points to `agic_body`, whose repeated `directive` and
`message` fields contain its entries in source order.

### Message

```ebnf
message ::= role ":" text | paragraph(agic_keyword) ;
```

A role header requires a colon and nonempty text, either on the same line or
in an indented body. A bare paragraph has no explicit role. Use a role header
when the text begins with an agic keyword; indentation alone does not make it
literal.

```too
agic summarize(_: Text, style?: Text) -> Text:
  models = *
  user:
    Summarize {{_}} in the requested style.
  assistant: Ready.
```

## Flow

```ebnf
flow ::= "flow" runnable_name? params? ("->" type)? ":" block(flow_body) ;
```

Name, parameter list, and return annotation are independently optional.

### Parameters

Flows use the [parameter syntax and constraints](#parameters) defined for agics.
The parameter list is optional; an omitted list differs from `()`.

### Return Type

The optional `-> type` annotation follows any parameter list and precedes `:`.
It uses the [type syntax](#type).

### Body

```ebnf
flow_body          ::= directive* flow_statement+ | "pass" line_end ;
flow_statement     ::= let_statement | exec_statement
                     | bindable_statement | implicit_run_statement ;
bindable_statement ::= run_statement | spawn_statement | await_statement
                     | seek_statement | ask_statement | generate_statement
                     | map_statement | reduce_statement | keep_statement
                     | drop_statement | sort_statement | repeat_statement ;

runnable_target    ::= runnable_name line_end | inline_agic ;
inline_agic        ::= ("->" type)? ":" text ;
lane_clause        ::= "in" integer_literal ("lane" | "lanes") ;
```

A flow requires statements, optionally preceded by directives. Directives alone
are insufficient. `pass` is a whole-body alternative and cannot coexist with
directives or statements.

The CST `body` field points to `flow_body`, whose repeated `directive` and
`statement` fields contain its entries in source order.

Targets are bare names followed by a line ending, or inline agics with required
text and an optional return annotation. Calls use one CST `target` field with
either a `runnable_name` leaf or an `inline_agic` node. Argument lists and trailing
prose after named targets are invalid. In a same-line inline agic, clause-like
words after the colon are text.

`generate`, `map`, `keep`, `drop`, and `sort` permit one lane clause before their
target connector or inline target. Numeric spellings follow the
[integer rules](#names-and-integers).

### Let

```ebnf
let_statement ::= "let" local_name "=" bindable_statement
                | "let" bindable_statement
                | "let" local_name "=" text ;
```

Named bindings require `=`; nameless `let` requires a bindable operation.
Text bindings accept same-line or indented text, without local type annotations
or a dedicated array-literal form. `_` cannot be an explicit destination.

Immediately after `let`, a complete name followed by optional spaces/tabs and
`=` on the same physical line selects a named binding, including keyword names.
Without that assignment prefix, operation heads select operations:
`let run worker` is a nameless operation; `let run = Evidence.` binds text to
the local name `run`.

After `=`, a complete operation head selects operation syntax even when
malformed. `exec`, `until`, and `_` cannot begin a same-line text value.
`runworker` remains text. Use an indented text block for literal keyword-led text.

```too
flow keyword_names(sort: Text):
  let run = {{sort}}
  let spawn = spawn worker
  await spawn
```

### Run

```ebnf
run_statement ::= "async"? "run" runnable_target ;
```

`run` accepts a named target or an inline agic. Only `run` accepts the `async`
modifier, placed before its keyword.

```too
flow inspect:
  run worker
  run -> Text: Inspect {{_}}.
  let child = async run worker
```

### Exec

```ebnf
exec_statement ::= "exec" runnable_target ;
```

`exec` accepts a named target or an inline agic. It cannot appear in a `let`
binding.

```too
flow finish:
  exec -> Text: Return the final report.
```

### Spawn

```ebnf
spawn_statement ::= "spawn" runnable_target ;
```

`spawn` accepts a named target or an inline agic, directly or in a `let` binding.

```too
flow research:
  let handle = spawn -> Text[]:
    List three sources about {{_}}.
```

### Await

```ebnf
await_statement ::= "await" handle_name line_end ;
```

`await` takes one handle name, directly or in a named/nameless `let` binding.
Expressions, field access, qualifiers, block bodies, and `_` are invalid.

```too
flow research:
  let handle = spawn worker
  await handle
  let sources = await handle
  let await handle
  let handle = await handle
```

### Seek

```ebnf
seek_statement ::= "seek" agent_name runnable_target ;
```

The first name identifies the target agent; it is followed by a bare runnable
name or an inline agic.

```too
flow review:
  seek reviewer worker
  seek reviewer -> Text: Inspect the supplied changes.
```

### Ask

```ebnf
ask_statement ::= "ask" ":" text ;
```

The colon introduces required same-line or indented text.

```too
flow choose:
  ask: Which result should be kept?
```

### Generate

```ebnf
generate_statement ::= "generate" integer_literal lane_clause? collection_target ;
collection_target  ::= "using" runnable_name line_end | inline_agic ;
```

A count immediately follows `generate`. Named targets require `using`; inline
targets omit it. An optional lane clause precedes the target.

```too
flow expand:
  generate 3 in 2 lanes using worker
  generate 2 -> Text: Produce another example.
```

### Map

```ebnf
map_statement ::= "map" lane_clause? collection_target ;
```

`map` accepts a named target introduced by `using` or an inline agic without
`using`. An optional lane clause precedes the target; a count is not accepted.

```too
flow summarize:
  map in 2 lanes using worker
  map -> Text: Summarize {{_}}.
```

### Reduce

```ebnf
reduce_statement ::= "reduce" "using" runnable_name line_end
                   | "reduce" "using" runnable_name ":" block(from_clause)
                   | "reduce" ("->" type)? ":" inline_text text_end
                   | "reduce" ("->" type)? ":" block(reducer_body) ;
reducer_body     ::= reducer_text from_clause? ;
reducer_text     ::= ? nonempty literal text ending before a baseline initializer ? ;
from_clause      ::= "from" ":" text ;
```

A named reducer uses a header colon only when followed by an indented `from:`
initializer. A multiline inline reducer places `from:` after nonempty reducer
text at the same baseline; a deeper `from:` remains literal. A same-line inline
reducer cannot have a following initializer.

Reducer text follows the [text rules](#text), including literal comment markers.
The CST `target` contains the reducer name or `inline_agic`; `from` points
directly to the initializer's `content`.

```too
flow combine:
  reduce using merge:
    from: Initial report.
  reduce:
    Incorporate {{_}} into the report.
    from:
      Initial report.
```

### Keep

```ebnf
keep_statement   ::= "keep" (position line_end | predicate_target) ;
position         ::= ("first" | "last") integer_literal ;
predicate_target ::= lane_clause? "if" runnable_name line_end
                   | lane_clause? "if" inline_agic ;
```

`keep` accepts `first N`, `last N`, or a named/inline predicate introduced by
`if`. An optional lane clause precedes `if`; it cannot follow the target.
Positional selections have no lane clause.

```too
flow select:
  keep first 3
  keep in 2 lanes if -> Boolean: Is {{_}} useful?
```

### Drop

```ebnf
drop_statement ::= "drop" (position line_end | predicate_target) ;
```

`drop` uses the [position, predicate, and lane forms](#keep) defined for `keep`.

```too
flow select:
  drop last 2
  drop in 2 lanes if duplicate
```

### Sort

```ebnf
sort_statement ::= "sort" ("ascending" | "descending") score_target ;
score_target   ::= lane_clause? "by" runnable_name line_end
                 | lane_clause? "by" inline_agic ;
```

An explicit order immediately follows `sort`; `by` introduces a named or inline
score target. An optional lane clause follows the order and precedes `by`; it
cannot follow the target.

```too
flow order:
  sort descending by score
  sort ascending in 2 lanes by -> Number: Score {{_}}.
```

### Repeat

```ebnf
repeat_statement    ::= "repeat" repeat_count_clause? window_clause? ":" block(repeat_body) ;
repeat_count_clause ::= integer_literal ("time" | "times") ;
window_clause       ::= "windowing" integer_literal ;
repeat_body         ::= flow_statement+ (until_clause flow_statement*)?
                      | until_clause flow_statement+ ;
until_clause        ::= "until" (runnable_name line_end | ":" text) ;
```

Count and window are independently optional; `windowing` precedes the header
colon. A repeat requires at least one statement and permits at most one condition
at any position among its baseline entries. Nested repeats own their conditions;
`until` is invalid outside a repeat.

The condition takes a bare name or `:` followed by text. It has no return
annotation, argument list, or binding. Deeper explicit text remains literal;
a baseline sibling ends it.

The CST `repeat_body` exposes repeated `statement` fields and an optional
`until: until_clause`. The clause's `target` is a `runnable_name` or `inline_agic`,
with no return annotation.

```too
flow improve:
  repeat 5 times windowing 3:
    run inspect
    until ready
    run: Improve {{_}}.
```

### Implicit Run

```ebnf
implicit_run_statement ::= paragraph(flow_keyword) ;
```

Flow prose follows the [paragraph rules](#text) with `flow_keyword` boundaries.
`run`, `run:`, and `run,` select syntax; `runner` and `run_suffix` remain text.
Likewise, `_` selects syntax while `_suffix` remains text. A keyword without a
valid statement form is an error. Use explicit `run:` text to begin literal
prose with a keyword or `_`.

## Validity and Recovery

Consumers must reject native `ERROR`, missing tokens, and every `invalid_*`
descendant. `root.has_error` alone is insufficient. `invalid_missing_body`,
`invalid_missing_content`, and `invalid_missing_statement` are zero-width markers
for absent required syntax. `invalid_flow_statement`, `invalid_agic_message`, and
`invalid_run_target` retain malformed statements, messages, and run-target
fragments. Recovery preserves following source without making invalid constructs
valid.

[src/node-types.json](src/node-types.json) defines the current node/field schema;
[queries](queries) show its use. Text preserves authored bytes and relative
indentation. Parsing does not trim or dedent it.
