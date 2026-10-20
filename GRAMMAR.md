# Toolang Grammar

This reference describes valid Toolang `.too` source and its concrete syntax
tree (CST), including lexical rules, block layout, and error diagnostics.

Name resolution, property schemas, query interpretation, type defaults, input
binding, formatting, and execution belong to consumers. Examples below are
complete programs; referenced names and resources need not be defined to parse.

## Conventions

### EBNF

| Notation | Meaning |
| --- | --- |
| `name ::= expression ;` | Defines a production. |
| `"text"` | Literal characters, with JSON string escapes. |
| `A B` | Concatenation. |
| `A \| B` | Alternative. |
| `(A)` | Grouping. |
| `A?`, `A*`, `A+` | Optional, zero or more, one or more. |
| `/pattern/` | A lexical regular expression. |
| `? description ?` | A contextual condition explained in prose. |
| `field: P` | Assigns `P` to a CST field. |
| `alias(P, node)` | Emits the specified public node. |

The EBNF shows valid forms; prose supplies lexical and layout constraints.
Recovery forms are described under Validity and Recovery.
Hidden productions start with `_` and add no CST wrapper. Field annotations
highlight relevant CST structure.

Three parameterized abbreviations are used:

- `_body(P)` is an indented structural scope containing `P`, with structural
  trivia allowed before, between, and after entries. Its first substantive entry
  establishes the baseline. `_body_prefix` is a nonempty segment of preceding
  trivia that stays outside the body under the block layout rules.
- `_content(F)` selects same-line or indented text and assigns its `content`
  node to field `F`.
- `_paragraph(L)` groups implicit text lines using line production `L`.

## Program

```ebnf
program ::= (_trivia | _item)* ;
_item   ::= with | struct | psyche | skill | service | prompt | chore
          | context | instruct | agic | flow ;
```

The CST root is `program`. It contains declarations, `with` references, and
trivia in source order. An empty program is valid. Top-level constructs start
at column zero; top-level prose is invalid.

| Construct | Name | Contents |
| --- | --- | --- |
| `with` | A kind and a raw reference. | No body. |
| `struct` | Required `type_name`. | One or more typed fields. |
| `psyche`, `skill`, `service`, `prompt` | Required `cap_name`. | Optional properties and literal text. |
| `chore` | Required `chore_name`. | Optional properties and literal text. |
| `context`, `instruct` | Optional `identifier`. | Required text. |
| `agic` | Optional `runnable_name`. | Directives, messages, or `pass`. |
| `flow` | Optional `runnable_name`. | Statements, optionally preceded by directives, or `pass`. |

Agic and flow headers also accept an optional parameter list and return type.

## Lexical Structure

### White Space and Tokens

```ebnf
_required_space ::= /[ \t]+/ ;
newline         ::= "\n" | "\r\n" | ? end of a nonempty final line at EOF ? ;
blank_line      ::= /[ \t]*/ ("\n" | "\r\n") ;
_line_end       ::= alias(_inline_comment, plain_comment)? newline ;
_inline_comment ::= "#" /[^\r\n]*/ ;
_eof            ::= ? end of source ? ;
```

Spaces and tabs between structural tokens are optional except where needed to
separate adjacent words or numbers. Such separators cannot contain a newline.
Indentation and physical line endings are significant; a bare CR is invalid.
EOF can terminate the last nonempty line and close bodies, but cannot supply
missing body entries or text. The parser emits a zero-width `newline` when
terminating a nonempty final structural or text line at EOF.

A complete ASCII word-character sequence (`[A-Za-z0-9_]+`) is indivisible:
`runworker`, `runWorker`, and `2times` cannot split into smaller tokens.
Independent symbols delimit tokens: `flow work(input?:Text)->Text[]:` and
`generate 2->Text:Text.` have valid boundaries. Compound symbols `->`, `+=`,
`-=`, `[]`, and documentation markers remain contiguous. `Text []` is valid;
`Text[ ]` is invalid.

Names and qualified runnable references cannot contain whitespace. A raw `with`
reference requires space or tab after its kind: `with skill ./foo` is valid;
`with skill./foo` is invalid. The reference itself may contain spaces.

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

The role-specific names above are distinct public leaves, even where their
spellings match `identifier`. Keywords are recognized by context, not globally
excluded from names. Parameters, local destinations, and await handles may use
names such as `sort`, `until`, `default`, or `none`. `_` may name a parameter,
but not a local destination or handle. Qualified `runnable_ref` forms are used
in route directives; call targets use the narrower `runnable_name`.

Integers contain decimal digits only, including leading zeros. Signs, fractions,
exponents, and underscores are invalid in structural numeric positions. Numeric
ranges belong to consumers. Unit spellings are independent of value: `lane`
and `lanes` are interchangeable, as are `time` and `times`. Thus `1 lanes`,
`2 lane`, and `01 times` are valid phrases.

### Type

```ebnf
type         ::= base:(builtin_type | type_name) (suffix:"[]")* ;
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" ;
```

An authored type uses `type_name`. Each `[]` adds an array suffix; `Text[][]`
is valid. The CST `base` field points directly to the builtin or authored leaf.

### Keywords

Keywords are lowercase and case-sensitive. The following sets determine
implicit-text boundaries and operation recognition; they do not restrict names
in explicit name positions.

```ebnf
_declaration_keyword ::= "with" | "struct" | "psyche" | "skill" | "service"
                         | "prompt" | "chore" | "context" | "instruct" | "agic" | "flow" ;
_operation_keyword   ::= "run" | "seek" | "ask" | "generate" | "map" | "reduce"
                         | "keep" | "drop" | "sort" | "repeat" | "spawn" | "await" ;
_clause_keyword      ::= "until" | "initial" | "windowing" | "using" | "if" | "by"
                         | "in" | "lane" | "lanes" | "ascending" | "descending"
                         | "time" | "times" | "first" | "last" ;
_query_key           ::= "models" | "tools" | "skills" | "services" | "psyches" | "prompts" ;
_route_key           ::= "hands" | "handoffs" ;
_directive_keyword   ::= _query_key | _route_key | "recall"
                         | "lanes" | "context" | "instruct" ;
role                 ::= "user" | "assistant" | "tool" ;
_agic_keyword        ::= _directive_keyword | role | "pass" ;
_flow_keyword        ::= _declaration_keyword | _operation_keyword | _clause_keyword
                         | _agic_keyword | "let" | "exec" | "async" | "_" ;
```

### Comments and Documentation

```ebnf
_comment        ::= plain_comment | shebang_comment | program_doc | item_doc | param_doc ;
plain_comment   ::= "#" /[^\r\n]*/ _comment_end ;
shebang_comment ::= "#!" /[^\r\n]*/ _comment_end ;
program_doc     ::= "#@" _required_space? (text:alias(_doc_text, text))? _comment_end ;
item_doc        ::= "##" _required_space? (text:alias(_doc_text, text))? _comment_end ;
param_doc       ::= "##" _required_space? "@param" _required_space param:param_name
                    _required_space description:alias(_doc_text, text) _comment_end ;
_doc_text       ::= /[^ \t\r\n][^\r\n]*/ ;
_comment_end    ::= "\n" | "\r\n" | _eof ;
_trivia         ::= blank_line | _comment ;
```

At a structural comment position, recognized longer markers take precedence:

| Marker | Result and constraint |
| --- | --- |
| `#` | Plain comment. |
| `#!` | Shebang only at byte zero; later, indented, or after a BOM it is plain comment text. |
| `#@` | Program documentation, only at program scope and column zero. |
| `##` | Item documentation; `!` after the marker is ordinary text. |
| `## @param name description` | Parameter documentation with a required name and same-line description. |

Column zero alone does not establish program scope. A structural `#@` cannot
separate a declaration header from its indented body or interrupt a continuing
body. Place program documentation before a declaration or after a completed
declaration. Indented structural `#@` is invalid; markers inside explicit text
remain literal content.

Spaces after `#@` and `##` are optional. Only a leading exact `@param` followed
by space, tab, a line ending, or EOF selects parameter documentation. A malformed
tag is an error, not ordinary item documentation. `@parameter`, `@param:`,
`@return`, and `@param` later in prose remain text. Program documentation never
interprets tags.

The peer nodes `program_doc`, `item_doc`, and `param_doc` span their complete
physical lines, from `#` through the line ending when present. `program_doc.text`
and `item_doc.text` are optional `text` leaves; `param_doc` directly contains
`param: param_name` and `description: text`, without an `item_doc` wrapper.
Fields exclude markers and separating whitespace, retain trailing whitespace,
and use UTF-8 byte ranges. Descriptions may contain Unicode, punctuation, `#`,
and further `@` characters. There is no continuation syntax. Consumers decide
attachment and validate names and duplicates.

Inline markers always produce a plain comment where `_line_end` permits one;
that comment excludes the line ending. Inside explicit content, every marker is
literal text. At structural line starts, plain and shebang comments include
their line endings.

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

A body's first substantive entry must be deeper than its header and establishes
its baseline. Structural siblings share that baseline. A deeper structural entry
requires an enclosing body; a dedent must reach an existing ancestor baseline.
Blank lines and structural comments neither establish indentation nor satisfy
a required body.

Any positive width is accepted. Tabs advance to eight-column stops. A structural
prefix cannot mix spaces and tabs, and siblings cannot interchange indentation
spellings at one baseline. Nested levels may use different styles. Form feed
is not indentation.

A structural body starts at its leading member trivia, using the first member's
baseline to determine scope. If that trivia contains an outer comment, everything
through the last outer comment stays outside the body; the rest enters it.
The header's line ending stays outside. With no substantive body, comments stay
outside, required bodies receive a diagnostic, and optional bodies are absent.

Indented explicit text establishes its own baseline. Deeper Markdown indentation
and comment markers are literal; a dedent below that baseline ends the text.
Text retains physical bytes and relative indentation.

```too
flow inspect:
  repeat 2 times:
    run:
      Inspect the material.
        This indentation belongs to the text.
    until: The inspection is complete.
  run: Summarize the result.
```

## Content

Quotation marks and backslashes are ordinary characters. There is no quoted
string, escape decoding, or quote-closure requirement: `""` contains two quotes.
The containing construct selects same-line text, an indented block, or an
implicit paragraph.

```ebnf
_content(F)     ::= F:alias(_inline_content, content) _text_end
                    | _text_end F:alias(_block_content, content) ;
_inline_content ::= alias(_inline_text, text) ;
_inline_text    ::= /[ \t]*[^ \t\r\n][^\r\n]*/ ;
_text_end       ::= newline ;
_block_content  ::= blank_line* _text_indent (_content_line | blank_line)+ _dedent ;
_content_line   ::= alias(_raw_text, text) newline ;
_raw_text       ::= ? physical text at or beyond the text baseline ? ;
_paragraph(L)   ::= L (L | blank_line L)* blank_line? ;
```

`_text_indent` and `_dedent` are hidden layout boundaries. Same-line content
requires a non-space/tab character and consumes the rest of its physical line,
including every `#`. It has no inline comments: `run: # Heading` and
`let note = "a#b"` retain the hash and quotes.

An introducer followed only by spaces/tabs and a line ending selects an indented
value. Blank lines before that value belong to `content`, including for reducers.
An outer structural comment prevents the pending text block. Blank lines alone
cannot satisfy required content. Once explicit text starts, keywords, comment
markers, and Markdown fences at or beyond its baseline remain literal.

Implicit paragraphs check the first complete token on every substantive line.
A keyword in the context's boundary set selects syntax, even if malformed;
longer ASCII words such as `runworker` remain text. Adjacent lines and one
intervening blank line form one paragraph. Two blank lines, a structural comment,
dedent, or EOF ends it.
Deeper Markdown indentation can continue a paragraph, but a keyword-led line at
an invalid structural depth is an error. Embedded `#` stays text.

Agic paragraphs use `_agic_keyword`; flow paragraphs use `_flow_keyword`.
Explicit content does not apply those sets. Templates such as `{{_}}`,
`{{style}}`, and `{{_1._}}` remain literal source text for consumers to interpret.

```too
flow explain: # Structural annotation.
  let note = "a#b"
  run: Visit https://example.com/#details
  let literal =
    run is literal inside this text block.
    # This line is text too.
  Explain the material.
  Continue the same paragraph.

  Continue after one blank line.
```

## Declarations

### With

```ebnf
with     ::= keyword:"with" kind:cap_kind _required_space
             reference:alias(_structural_text, text) _line_end ;
cap_kind ::= "psyche" | "skill" | "service" | "prompt" ;
```

The reference requires nonblank text after the separator and ends at `#`, a line
ending, or EOF. Internal and trailing spaces are retained. Consumers interpret
paths and references.

```too
with skill ./skills/review
with prompt library/summary
```

### Struct

```ebnf
struct         ::= _struct_header _body_prefix* body:struct_body ;
_struct_header ::= keyword:"struct" name:type_name colon:":" _line_end ;
struct_body    ::= _body((field:field)+) ;
field          ::= name:identifier optional:"?"? colon:":" type:type _line_end ;
```

A struct requires at least one field. Each field requires a type and may carry
an optional `?` marker.

```too
struct Report:
  summary: Text
  count?: Number
  parts: Part[]
```

### Property Declarations

```ebnf
psyche              ::= _psyche_header (_body_prefix* body:cap_body)? ;
skill               ::= _skill_header (_body_prefix* body:cap_body)? ;
service             ::= _service_header (_body_prefix* body:cap_body)? ;
prompt              ::= _prompt_header (_body_prefix* body:cap_body)? ;
chore               ::= _chore_header (_body_prefix* body:chore_body)? ;
_psyche_header      ::= keyword:"psyche" name:cap_name colon:":" _line_end ;
_skill_header       ::= keyword:"skill" name:cap_name colon:":" _line_end ;
_service_header     ::= keyword:"service" name:cap_name colon:":" _line_end ;
_prompt_header      ::= keyword:"prompt" name:cap_name colon:":" _line_end ;
_chore_header       ::= keyword:"chore" name:chore_name colon:":" _line_end ;
cap_body            ::= _body((property:property)+ (content:alias(_definition_content, content))?
                        | content:alias(_definition_content, content)) ;
chore_body          ::= _body((property:property)+ (content:alias(_definition_content, content))?
                        | content:alias(_definition_content, content)) ;
_definition_content ::= ? nonempty literal text at the containing body's baseline ? ;
```

These declarations require a name. Their bodies are optional, with a property
prefix followed by optional literal text. Empty declarations have no `body`
field; property-only and text-only bodies are valid. They have no typed parameter
list. Text placeholders remain ordinary content.

#### Property

```ebnf
property         ::= key:identifier operator:"=" value:alias(_structural_text, text) _line_end ;
_structural_text ::= /[^#\r\n]+/ ;
```

Blank lines and structural comments may precede or separate properties. At the
body baseline, an `identifier` followed by `=` selects a property. The grammar
accepts any property name; consumers validate names, duplicates, requirements,
and value meanings. A raw value may consist only of spaces/tabs. It ends before
`#` or a line ending, so property values support inline comments.

`+=` and `-=` do not select properties. The first substantive non-property line
starts literal text; afterward assignments and comment markers remain text and
the property prefix cannot resume. This rule applies equally to `prompt` and
`psyche`: an initial `answer = yes` is a property.

```too
psyche reviewer:
  answer = yes
  Prefer concrete findings and direct language.
prompt rewrite:
  Rewrite {{_}} in the requested {{tone}} tone.
skill review:
  description = Review supplied changes.
  Review the supplied changes.
service repository:
  transport = http
  target = https://example.com/mcp
chore review_changes:
  title = Review changes
  Review the latest changes.
```

### Context and Instruct

```ebnf
context          ::= _context_header _content(content) ;
instruct         ::= _instruct_header _content(content) ;
_context_header  ::= keyword:"context" name:identifier? colon:":" ;
_instruct_header ::= keyword:"instruct" name:identifier? colon:":" ;
```

Both accept an optional name and require same-line or indented text. They have
no property prefix. A `#` after the colon starts content, not a header comment.

```too
context project:
  Use the supplied project context.
instruct: Return a concise answer.
```

## Runnables

```ebnf
agic         ::= _agic_header _body_prefix* body:agic_body ;
flow         ::= _flow_header _body_prefix* body:flow_body ;
_agic_header ::= keyword:"agic" name:runnable_name? params:params? _return_clause? colon:":" _line_end ;
_flow_header ::= keyword:"flow" name:runnable_name? params:params? _return_clause? colon:":" _line_end ;
```

Name, parameter list, and return annotation are independently optional. A body
is required. Declaration headers end with `_line_end`, so they permit inline
structural comments.

### Parameters

```ebnf
params       ::= "(" (param:_param_entry ("," param:_param_entry)*)? ")" ;
_param_entry ::= param ;
param        ::= name:param_name optional:"?"? (colon:":" type:type)? ;
```

A parameter may carry `?` and a type annotation. `_` is a valid name. An omitted
list differs syntactically from `()`; trailing commas are invalid. Consumers
validate parameter order and uniqueness and apply type defaults.

### Return Type

```ebnf
_return_clause ::= arrow:"->" return:type ;
```

A return annotation follows any parameter list and precedes the header colon.
Declarations and inline agics, including reducers, share this syntax. The
restricted inline target of `until` has no return annotation.

### Directive

```ebnf
_directives         ::= directive:_directive_entry (directive:_directive_entry | _trivia)* ;
_directive_entry    ::= directive ;
directive           ::= _query_key _directive_operator query_value _line_end
                        | _route_key "=" route_value _line_end
                        | "recall" "=" recall_value _line_end
                        | "lanes" "=" (integer_literal | "default") _line_end
                        | ("context" | "instruct") "=" _text_ref _line_end ;
_directive_operator ::= "=" | "+=" | "-=" ;
query_value         ::= /[^ \t#\r\n][^#\r\n]*/ ;
route_value         ::= "none" | "*" | runnable_ref ("," runnable_ref)* ;
recall_value        ::= "none" | "default" | "*" | recall_source ("," recall_source)* ;
recall_source       ::= "far" | "near" ;
_text_ref           ::= "default" | "none" | identifier ;
```

Directives form a prefix before messages or statements and require a value.
Blank lines and structural comments leave that prefix open. While it is open,
an `identifier` followed on the same line by `=`, `+=`, or `-=` must name a known
directive. Unknown assignments, even without a value, are syntax errors. The
first message or statement ends the prefix permanently; subsequent lines follow
the ordinary body rules.

Only query directives accept `+=` and `-=`. Their values are raw text up to `#`
or a line ending; consumers validate expressions. Route and recall selections
use comma-separated lists, with special values `none`, `*`, and recall's
`default` standing alone. Recall sources may appear in either order.
`context` and `instruct` select one identifier, `default`, or `none`; they do not
introduce local text blocks. Every directive permits an inline structural comment.

A directive exposes `key: directive_key`, `operator`, and `value`. Query values
are `query_value` leaves; route and recall lists retain their containers.
Selectors point directly to `identifier` or the anonymous `default` / `none`
terminal, and `lanes` points to `integer_literal` or anonymous `default`.

### Agic

```ebnf
agic_body              ::= _body(_directives _messages? | _messages | "pass" _line_end) ;
_messages              ::= message:_message_entry (message:_message_entry | _trivia)* ;
_message_entry         ::= message ;
message                ::= role:role ":" _content(content)
                           | content:alias(_message_content, content) ;
_message_content       ::= _paragraph(_implicit_message_line) ;
_implicit_message_line ::= alias(_agic_raw_text, text) newline ;
```

An agic may contain directives alone, messages alone, or directives followed by
messages. `pass` is a whole-body alternative; it cannot follow directives or
coexist with messages. The `agic_body` exposes repeated `directive` and `message`
fields in source order.

A message has optional `role` and required `content`. Role headers require `:`
and same-line or indented text. Bare paragraphs have no explicit role and use
`_agic_keyword` boundaries. Use a role header for literal text beginning with
one of those keywords; indentation alone does not make it literal.

```too
agic summarize(_: Text, style?: Text) -> Text:
  models = *
  recall = far, near
  user:
    Summarize {{_}} in the requested style.
  assistant: Ready.
```

### Flow

```ebnf
flow_body       ::= _body(_directives? _stmts | "pass" _line_end) ;
_stmts          ::= stmt:_flow_stmt (stmt:_flow_stmt | _trivia)* ;
_flow_stmt      ::= let_stmt | exec_stmt | _flow_operation | implicit_run_stmt ;
_flow_operation ::= run_stmt | spawn_stmt | await_stmt | seek_stmt
                    | ask_stmt | generate_stmt | map_stmt | reduce_stmt
                    | keep_stmt | drop_stmt | sort_stmt | repeat_stmt ;
```

A flow requires statements, optionally preceded by directives. Directives alone
are insufficient. `pass` is a whole-body alternative and cannot coexist with
directives or statements. The `flow_body` exposes repeated `directive` and
`statement` fields in source order.

```too
flow summarize(_: Text) -> Text:
  models = *
  run worker
  run: Summarize the result.
```

## Flow Statements

### Targets and Lanes

```ebnf
_named_target  ::= target:runnable_name ;
_inline_target ::= target:inline_agic ;
_target_tail   ::= _named_target _line_end | _inline_target ;
inline_agic    ::= _return_clause? ":" _content(content) ;
_lanes_clause  ::= "in" lanes:integer_literal ("lane" | "lanes") ;
```

A call's `target` is a `runnable_name` leaf or an `inline_agic` with required text
and an optional return type. Named targets permit an inline comment, but no
argument list or trailing prose. After an inline target's colon, the rest of
that line is content, including clause-like words and `#`.

The hidden target rules expose values directly. Tail rules finish the enclosing
statement; an inline agic already owns its content's line ending.

`generate`, `map`, `keep`, `drop`, and `sort` permit one lane clause before their
connector (`using`, `if`, or `by`) or inline target. Each operation below defines
its remaining order.

### Let

```ebnf
let_stmt ::= "let" local:local_name "=" stmt:_flow_operation
             | "let" stmt:_flow_operation
             | "let" local:local_name "=" _content(value) ;
```

Named bindings require `=`; nameless `let` requires an operation. Text bindings
accept same-line or indented content, without a local type annotation or special
array-literal syntax. `_` cannot be an explicit destination. `exec` cannot be
bound; the other operations listed in `_flow_operation` may follow `let`.

Immediately after `let`, a complete name followed by optional spaces/tabs and
`=` on the same line selects a named binding, including keyword names. Without
that prefix, operation heads select operations: `let run worker` is nameless;
`let run = Evidence.` binds text to the name `run`.

After `=`, a complete operation head, including `async`, selects operation syntax
even when malformed. `exec`, `until`, and `_` cannot start a same-line text value.
Other flow keywords, such as `let` or `pass`, may start such a value. Keyword
prefixes such as `runworker` stay text. Use an indented value for unrestricted
literal keyword-led text.

```too
flow keyword_names(sort: Text):
  let run = {{sort}}
  let spawn = spawn worker
  await spawn
  let note =
    run is literal here.
```

### Run, Exec, and Spawn

```ebnf
run_stmt   ::= async:"async"? "run" _target_tail ;
exec_stmt  ::= "exec" _target_tail ;
spawn_stmt ::= "spawn" _target_tail ;
```

All three take a named target or inline agic. Only `run` accepts `async`, placed
before `run`. `run` and `spawn` may appear in named or nameless `let` bindings;
`exec` cannot.

```too
flow inspect:
  run worker
  run -> Text: Inspect {{_}}.
  let child = async run worker
  let handle = spawn -> Text[]:
    List three sources about {{_}}.
  exec -> Text: Return the final report.
```

### Await

```ebnf
await_stmt ::= "await" handle:handle_name _line_end ;
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
seek_stmt ::= "seek" agent:agent_name _target_tail ;
```

The first name identifies the agent; a runnable name or inline agic follows it.

```too
flow review:
  seek reviewer worker
  seek reviewer -> Text: Inspect the supplied changes.
```

### Ask

```ebnf
ask_stmt ::= "ask" ":" _content(content) ;
```

The colon introduces required same-line or indented text.

```too
flow choose:
  ask: Which result should be kept?
```

### Generate and Map

```ebnf
generate_stmt ::= "generate" count:integer_literal _lanes_clause? _using_tail ;
map_stmt      ::= "map" _lanes_clause? _using_tail ;
_using_tail   ::= _using_clause _line_end | _inline_target ;
_using_clause ::= "using" target:runnable_name ;
```

`generate` requires a count immediately after its keyword; `map` takes no count.
Both require `using` for a named target and omit it for an inline target. An
optional lane clause precedes that target form.

```too
flow expand:
  generate 3 in 2 lanes using worker
  generate 2 -> Text: Produce another example.
  map in 2 lanes using worker
  map -> Text: Summarize {{_}}.
```

### Reduce

```ebnf
reduce_stmt          ::= "reduce" _using_clause _line_end
                         | _reduce_using_header _body_prefix* _body(_initial_clause)
                         | "reduce" target:alias(_reduce_inline_line, inline_agic)
                         | "reduce" target:alias(_reduce_inline_block, inline_agic)
                               _initial_clause? _trivia* _dedent ;
_reduce_using_header ::= "reduce" _using_clause ":" _line_end ;
_reduce_inline_line  ::= _return_clause? ":" content:alias(_inline_content, content) _text_end ;
_reduce_block_header ::= _return_clause? ":" _text_end ;
_reduce_inline_block ::= _reduce_block_header content:alias(_reduce_content, content) ;
_reduce_content      ::= blank_line* _reduce_indent _reduce_text_start
                               (_content_line | blank_line)+ _dedent ;
_initial_clause      ::= "initial" ":" _content(initial) ;
```

A named reducer's optional header colon requires an indented `initial:` initializer.
An inline reducer may have a same-line value, or an indented value optionally
followed by `initial:` at the text baseline. A same-line reducer cannot have a
following initializer. A deeper `initial:` remains literal text. At the baseline,
the complete word `initial` selects initializer syntax even when malformed.

`_reduce_indent` opens the initializer scope; `_reduce_text_start` opens literal
text at that baseline. The inner `_dedent` ends reducer text before `initial`, and
the outer one closes the initializer scope. Leading blank lines belong to the
reducer's `content`. The CST `target` contains the name or `inline_agic`; `initial`
points directly to the initializer's `content`. There is no separate public body
or initializer wrapper. `reduce` has no lane clause.

```too
flow combine:
  reduce using merge:
    initial: Initial report.
  reduce:
    Incorporate {{_}} into the report.
    initial:
      Initial report.
```

### Keep and Drop

```ebnf
keep_stmt ::= "keep" (selection:selection _line_end | _lanes_clause? _if_tail) ;
drop_stmt ::= "drop" (selection:selection _line_end | _lanes_clause? _if_tail) ;
selection ::= side:("first" | "last") count:integer_literal ;
_if_tail  ::= "if" _target_tail ;
```

Both accept `first N`, `last N`, or a named/inline predicate introduced by `if`.
A lane clause may precede `if`; positional selections have no lane clause.

```too
flow select:
  keep first 3
  keep in 2 lanes if -> Boolean: Is {{_}} useful?
  drop last 2
  drop in 2 lanes if duplicate
```

### Sort

```ebnf
sort_stmt   ::= "sort" _sort_order _lanes_clause? _by_tail ;
_sort_order ::= order:("ascending" | "descending") ;
_by_tail    ::= "by" _target_tail ;
```

An explicit order immediately follows `sort`. An optional lane clause follows
the order and precedes `by`, which introduces the named or inline score target.

```too
flow order:
  sort descending by score
  sort ascending in 2 lanes by -> Number: Score {{_}}.
```

### Repeat

```ebnf
repeat_stmt       ::= _repeat_header _body_prefix* body:repeat_body ;
_repeat_header    ::= "repeat" _times_clause? _windowing_clause? ":" _line_end ;
_times_clause     ::= count:integer_literal ("time" | "times") ;
_windowing_clause ::= "windowing" window:integer_literal ;
repeat_body       ::= _body(_stmts (until:until_clause _trivia* _stmts?)?
                      | until:until_clause _trivia* _stmts) ;
until_clause      ::= "until" (target:runnable_name _line_end
                      | target:alias(_until_agic, inline_agic)) ;
_until_agic       ::= ":" _content(content) ;
```

Count and window are independently optional. If present, the count comes before
`windowing`; both precede the header colon. A repeat requires at least one
statement and permits at most one condition, at any baseline entry position.
A condition alone does not satisfy the statement requirement. Nested repeats own
their conditions; `until` is invalid outside a repeat.

The condition takes a bare name or `:` followed by text. It has no return type,
argument list, or binding. Deeper explicit text remains literal. The CST
`repeat_body` exposes repeated `statement` fields and optional `until: until_clause`;
that clause's `target` is a `runnable_name` or `inline_agic`.

```too
flow improve:
  repeat 5 times windowing 3:
    run inspect
    until ready
    run: Improve {{_}}.
```

### Implicit Run

```ebnf
implicit_run_stmt  ::= content:alias(_implicit_content, content) ;
_implicit_content  ::= _paragraph(_implicit_run_line) ;
_implicit_run_line ::= alias(_flow_raw_text, text) newline ;
```

Flow prose follows the implicit paragraph rules with `_flow_keyword` boundaries.
`run`, `run:`, and `run,` select syntax; `runner` and `run_suffix` remain text.
Likewise, `_` selects syntax while `_suffix` remains text. A keyword without a
valid statement form is an error. Use `run:` for unrestricted keyword-led prose.

## CST

| Node | Responsibility |
| --- | --- |
| `program` | Complete parsed source, with direct top-level constructs and trivia. |
| `*_body` | Structural member container, including its leading member trivia. |
| `message` | Message entry with optional `role` and required `content`. |
| `content` | Text value with direct `text`, `newline`, and `blank_line` children. |
| `text` | A leaf fragment without CR/LF; its lexical context sets whitespace and comment boundaries. |

The hidden inline, block, paragraph, and lexical rules add no forwarding nodes.
Documentation fields, `property.value`, and `with.reference` point directly to
`text`. `let_stmt.value` and `reduce_stmt.initial` point to `content`.
A same-line `content` excludes its line ending; indented and paragraph values
include their text-line endings. Parsing does not trim or dedent text.

Fixed keywords, operators, punctuation, and modifiers are anonymous terminals.
Fields such as `keyword`, `operator`, `arrow`, `colon`, `optional`, `suffix`,
`side`, `order`, and `async` remain accessible through field and all-child APIs;
`named_children` excludes their literal terminals. Semantic aliases including
`directive_key`, `role`, `cap_kind`, `builtin_type`, and `recall_source` remain
named leaves. A directive word's node type depends on its role: `lanes` is a
`directive_key` in a directive and an anonymous unit in a lane clause.

Hidden `_line_end` exposes its inline `plain_comment` and `newline` directly.
Highlighting depends on parent nodes and fields, not on `text` alone.

## Validity and Recovery

Consumers must reject native `ERROR`, missing tokens, and every `invalid_*`
descendant. `root.has_error` alone is insufficient. Diagnostic alternatives
retain surrounding structure; they do not make malformed source valid.

| Diagnostic | Meaning |
| --- | --- |
| `invalid_missing_body` | Required structural body is absent. |
| `invalid_missing_content` | Required text is absent. |
| `invalid_missing_stmt` | A flow or repeat still requires a statement. |
| `invalid_missing_type` | A return arrow lacks a type before an explicit header colon. |
| `invalid_param` | A parameter annotation has missing operands or malformed trailing text. |
| `invalid_directive` | A known directive is incomplete or malformed. |
| `invalid_flow_stmt` | A malformed or misplaced flow statement. |
| `invalid_agic_message` | A malformed keyword-led message entry. |
| `invalid_run_target` | A malformed target fragment after `async run`. |

The four `invalid_missing_*` nodes are zero-width leaves. With a missing return
type, the owning declaration or inline agic has an `invalid_missing_type` child
and no `return` field. A missing closing `)` remains a native missing token.

Hidden entry rules keep diagnostic entries alongside normal ones:
`params.param` accepts `param` or `invalid_param`, body `directive` accepts
`directive` or `invalid_directive`, and `agic_body.message` accepts `message` or
`invalid_agic_message`. There is no normal-node wrapper around an invalid entry.
Normal required fields remain required in the schema. While a directive prefix
is open, known malformed directives stay in it; unknown assignment heads remain
native syntax errors.

`invalid_param` excludes list separators. Its trailing recovery text requires a
real comma or `)` on the same physical line and cannot borrow one from a header
comment. `invalid_directive` includes indentation and its line ending, like a
normal directive. `invalid_agic_message` starts at the malformed keyword;
normal messages retain their leading indentation.
