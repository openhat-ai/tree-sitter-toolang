# Toolang Grammar

This document describes the current source syntax of Toolang `.too` files
through grammar productions, constraints, and examples.

Name resolution, type defaults, input binding, and execution are defined by the
[Toolang language reference](https://github.com/openhat-ai/toolang/blob/main/docs/program.md).
The constraints beside each production are part of the syntax. Examples are
complete source files for parsing; referenced resources and runnable names may
require definitions at runtime.

## Conventions

### EBNF

The following notation is used throughout:

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

`block(P)` denotes a header line ending followed by an indented body described
by `P`. `optional_block(P)` also permits the header without an indented body.
Both use the [layout rules](#block-layout). Blank lines and structural comments
may appear before and between structural entries and after the last entry.
Literal text follows its own rules once it begins.

Spaces between grammar symbols follow the [token separation rules](#tokens).
Productions do not insert line breaks between ordinary tokens. Newlines occur
through `newline`, `line_end`, or an explicitly defined block/text form. Names in
these productions identify source concepts, independently of parser node names.

[GRAMMAR.ebnf](GRAMMAR.ebnf) is the complete annotated implementation view,
generated from the Tree-sitter grammar. It includes helper and recovery rules.
This readable reference presents valid source forms and the lexical/layout
conditions needed to interpret them.

## Lexical Structure

### Names and Integers

```ebnf
name           ::= /[a-z][a-z0-9_]*/ ;
type_name      ::= /[A-Z][A-Za-z0-9]*/ ;
cap_name       ::= /[a-z][a-z0-9_-]*/ ;
chore_name     ::= /[a-z][a-z0-9_-]*/ ;
variable_name  ::= name ;
parameter_name ::= variable_name | "_" ;
integer        ::= /[0-9]+/ ;

route_name     ::= /([A-Za-z_][A-Za-z0-9_-]*::)*(agic:|flow:)?[A-Za-z_][A-Za-z0-9_-]*/ ;
```

`variable_name` excludes every word in `flow_keyword` below, together with
`default` and `none`. This applies to local destinations, await handles, and
named parameters. Other `name` positions, including declaration names and named
call targets, do not acquire that exclusion. `far` and `near` remain valid
variable names. `_` is accepted only in parameter-name positions; it is not a
local destination or await handle.

Integers contain decimal digits only. Signs, fractions, exponent notation, and
underscores are not accepted in structural numeric positions. Leading zeros
are allowed. A numeric value of one, including `01`, requires `lane` or `time`;
all other values require `lanes` or `times`. Numeric ranges are validated by
the language consumer.

### Keywords

Keywords are lowercase and case-sensitive. Their recognition depends on the
source position: the following sets determine implicit-text boundaries and
variable exclusions, rather than reserving words in every name or text position.

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

Punctuation inside a name or reference belongs to that token: `my-skill` and
`ns::flow:work` do not allow internal whitespace. Raw import references require
a separator after the kind: `with skill ./foo` is valid; `with skill./foo` is
invalid. Once a text form is selected, its interior follows the text rules.

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

### Comments and Documentation

```ebnf
comment        ::= plain_comment | shebang_comment | module_doc | item_doc ;
plain_comment  ::= "#" comment_text comment_end ;
shebang_comment ::= "#!" comment_text comment_end ;
module_doc     ::= ("#@" | "##!") hspace? doc_text? comment_end ;
item_doc       ::= "##" hspace? (parameter_doc | doc_text)? comment_end ;
parameter_doc  ::= "@param" hspace parameter_name hspace doc_text ;
doc_text       ::= /[^ \t\r\n][^\r\n]*/ ;
comment_end    ::= newline | eof ;
trivia         ::= blank_line | comment ;
```

These forms have contextual constraints:

- At structural comment positions, a recognized longer marker takes precedence
  over `#` or `##`, subject to the position restrictions below.
- `#!` is a shebang only at byte zero. A later or indented `#!`, including one
  after a leading BOM, is a plain comment. The interpreter text is unrestricted.
- `#@` is module documentation only at column zero. Indented structural `#@` is
  invalid. `##!` also introduces module documentation and is accepted in indented
  structural positions. Module documentation never interprets parameter tags.
- `##` introduces item documentation. Consecutive lines at the item's indentation
  can document the following item. Blank lines, other comment kinds, intervening
  syntax, and scope endings interrupt attachment; consumers perform attachment.
- A leading `@param` followed by space, tab, a line ending, or EOF selects a
  parameter tag. Both name and same-line description are required. A malformed
  tag cannot fall back to ordinary documentation. `@parameter`, `@param:`,
  `@return`, and `@param` later in prose remain ordinary documentation text.
- Inline `#`, `##`, `#@`, `##!`, and `#!` all introduce plain comments where
  `line_end` allows them. In indented explicit text, every marker is literal.

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

Blank lines and structural comments do not establish indentation or satisfy a
required body. The `block(P)` notation requires the entries described by `P`;
`optional_block(P)` allows the body to be absent. Cap and chore bodies are optional.
`pass` is accepted only as an entire agic or flow body. A directive-only agic is
valid; a directive-only flow and a condition-only repeat are invalid.

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

## Source File

```ebnf
source_file ::= trivia* ((with | struct | psyche | skill | service | prompt
                       | chore | context | instruct | agic | flow) trivia*)* ;
```

A source file contains these constructs and trivia in source order. Arbitrary
top-level prose is invalid. Top-level constructs start at column zero.

## With

```ebnf
with          ::= "with" cap_kind raw_reference line_end ;
cap_kind      ::= "psyche" | "skill" | "service" | "prompt" ;
raw_reference ::= /[^#\r\n]+/ ;
```

A raw reference requires horizontal separation after its kind and at least one
non-space/tab character. Its interior is raw text, not a path or expression
parsed by this grammar.

```too
with skill ./skills/review
with prompt library/summary
```

## Types

```ebnf
type         ::= (builtin_type | type_name) "[]"* ;
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Part" ;
```

An authored type uses `type_name`. Each `[]` adds an array suffix; `Text[][]`
is valid.

## Structs

```ebnf
struct ::= "struct" type_name ":" block(field+) ;
field  ::= name "?"? ":" type line_end ;
```

A struct requires at least one field. Fields may carry the optional marker `?`.

```too
struct Report:
  summary: Text
  count?: Number
  parts: Part[]
```

## Properties

```ebnf
property       ::= name "=" property_value line_end ;
property_value ::= /[^#\r\n]+/ ;
body_text      ::= ? nonempty literal text at the containing body's baseline ? ;
```

Properties form a leading prefix in a psyche, skill, service, prompt, or chore
body. Once body text begins, later property-looking lines remain text. A raw
property value may contain only spaces/tabs. Property schemas are validated by
consumers.

## Psyches

```ebnf
psyche ::= "psyche" cap_name ":" optional_block(property* body_text?) ;
```

A psyche has a required name and an optional indented body. The body accepts
properties followed by text. Empty and property-only bodies are valid;
same-line bodies are not accepted.

```too
psyche reviewer:
  Prefer concrete findings and direct language.
```

## Skills

```ebnf
skill ::= "skill" cap_name ":" optional_block(property* body_text?) ;
```

A skill has a required name and an optional indented body with a property prefix
and text. Empty and property-only bodies are valid; same-line bodies are not
accepted.

```too
skill review:
  source = library/review

  Review the supplied changes.
```

## Services

```ebnf
service ::= "service" cap_name ":" optional_block(property* body_text?) ;
```

A service has a required name and an optional indented body with a property
prefix and text. Empty and property-only bodies are valid; same-line bodies
are not accepted.

```too
service repository:
  protocol = http
  target = https://example.com/mcp

  Use this service for repository operations.
```

## Prompts

```ebnf
prompt ::= "prompt" cap_name ":" optional_block(property* body_text?) ;
```

A prompt has a required name and an optional indented body. It has no typed
parameter list; placeholders remain part of the text. Leading property-looking
lines are parsed as properties, although the Toolang runtime rejects prompt
properties. Same-line bodies are not accepted.

```too
prompt rewrite:
  Rewrite {{_}} in the requested {{tone}} tone.
```

## Chores

```ebnf
chore ::= "chore" chore_name ":" optional_block(property* body_text?) ;
```

A chore has a required name and an optional indented body with a property prefix
and text. Empty and property-only bodies are valid; same-line bodies are not
accepted.

```too
chore review_changes:
  title = Review changes

  Review the latest changes.
```

## Context

```ebnf
context ::= "context" name? ":" text ;
```

A context accepts an optional name and requires same-line or indented text.

```too
context project:
  Use the supplied project context.
```

## Instruct

```ebnf
instruct ::= "instruct" name? ":" text ;
```

An instruct accepts an optional name and requires same-line or indented text.

```too
instruct: Return a concise answer.
```

## Text

Text is unquoted. The containing construct selects same-line text, an indented
text block, or an implicit paragraph.

```ebnf
text          ::= inline_text line_end
                | line_end blank_line* indented_text ;
inline_text   ::= /[^#\r\n]+/ ;
indented_text ::= ? nonempty literal text block at a deeper baseline ? ;
paragraph(C)  ::= ? implicit text paragraph using boundary set C ? ;
```

A required `inline_text` must contain a non-space/tab character before any comment
marker and ends on its physical line. Indented text may start after blank lines;
all lines at or beyond its baseline, including `#` markers and keywords, are
literal. Markdown fences have no special grammar meaning. Structural comments
outside the text cannot be followed by a resumed text block. Reducers have the
explicit exception described under [Reduce](#reduce).

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
flow explain:
  let note = A same-line text value.
  let literal =
    run is literal inside this text block.
    # This line is text too.
  Explain the material.
  Continue the same paragraph.

  Continue after one blank line.
```

## Directives

```ebnf
directive     ::= query_key query_operator query_value line_end
                | route_key "=" route_value line_end
                | "recall" "=" recall_value line_end
                | "lanes" "=" (integer | "default") line_end
                | ("context" | "instruct") "=" text_reference line_end ;
query_operator ::= "=" | "+=" | "-=" ;
query_value   ::= /[^ \t#\r\n][^#\r\n]*/ ;
route_value   ::= "none" | "*" | route_name ("," route_name)* ;
recall_value  ::= "none" | "default" | "*"
                | recall_source ("," recall_source)* ;
recall_source ::= "far" | "near" ;
text_reference ::= "default" | "none" | name ;
```

Directives precede agic messages or flow statements. Values are required.
Only query directives accept `+=` and `-=`. Query values are raw text up to a
comment or line ending; the query language is validated separately. `none`, `*`,
and recall's `default` stand alone rather than appearing in lists.

Route names permit qualification and a broader spelling than ordinary named
call targets. Recall accepts either source order; `auto` is invalid. Context
and instruct selectors require `=`; runnable-local `context:` / `instruct:`
blocks and bare selectors are invalid.

## Agics

```ebnf
agic ::= "agic" name? params? ("->" type)? ":" block(agic_body) ;
```

The name, parameter list, and return annotation are independently optional.
Multiple unnamed agics are syntactically valid.

### Parameters

```ebnf
params ::= "(" (param ("," param)*)? ")" ;
param  ::= parameter_name "?"? (":" type)? ;
```

A parameter accepts an optional `?` marker and type annotation. `_` is accepted
as a parameter name. `()` is an explicit empty list; a trailing comma is invalid.
Parameter order, duplicates, and omitted-type defaults are language-level
validation rather than syntax restrictions.

### Return Type

The optional `-> type` annotation uses the [type syntax](#types). The annotation
belongs on the declaration header, after any parameter list and before `:`.

### Body

```ebnf
agic_body ::= directive+ message* | message+ | "pass" line_end ;
```

A body may contain directives alone, or messages optionally preceded by
directives. `pass` is a whole-body alternative and cannot follow directives or
coexist with messages.

### Messages

```ebnf
message ::= role ":" text | paragraph(agic_keyword) ;
```

A role header requires a colon and actual text. A bare paragraph has no explicit
role. When literal text begins with an agic keyword, use a role header or an
indented text body.

```too
agic summarize(_: Text, style?: Text) -> Text:
  models = *
  user:
    Summarize {{_}} in the requested style.
  assistant: Ready.
```

## Flows

```ebnf
flow ::= "flow" name? params? ("->" type)? ":" block(flow_body) ;
```

The name, parameter list, and return annotation are independently optional.
Multiple unnamed flows are syntactically valid.

### Parameters

A flow uses the [parameter syntax](#parameters) defined for agics: an optional
parenthesized list, optional `?` markers, and optional type annotations. `_` is
accepted as a parameter name. An omitted list and `()` are distinct source forms;
trailing commas are invalid. Order, duplicates, and defaults are validated by
the language consumer.

### Return Type

The optional `-> type` annotation follows any parameter list and precedes `:`.
It uses the [type syntax](#types).

### Body

```ebnf
flow_body ::= directive* statement+ | "pass" line_end ;
statement ::= let | exec | bindable | implicit_run ;
bindable  ::= run | spawn | await | seek | ask | generate | map | reduce
            | keep | drop | sort | repeat ;

target      ::= name line_end | inline_agic ;
inline_agic ::= ("->" type)? ":" text ;
lanes       ::= "in" integer ("lane" | "lanes") ;
```

A flow requires statements, optionally preceded by directives. Directives alone
are insufficient. `pass` is a whole-body alternative and cannot coexist with
directives or statements.

Named targets are bare names and end at the line boundary. Inline targets
accept an optional return annotation and require text. Neither form accepts
argument lists. Inline text is final in its header; named headers do not accept
trailing prose punctuation. Lane/count noun agreement follows the
[integer rules](#names-and-integers).

### Let


```ebnf
let ::= "let" variable_name "=" bindable
      | "let" bindable
      | "let" variable_name "=" text ;
```

A named binding requires `=`. Text bindings accept same-line or indented text;
there is no local type annotation or dedicated array-literal form. A nameless
`let` accepts an operation, not arbitrary prose. `exec` and the `until` clause
cannot be bound; `_` cannot be an explicit destination.

After `=`, complete operation heads select syntax before the text alternative,
even when malformed. `until` and `_` also cannot begin same-line binding text.
`runworker` remains text. An indented text block permits literal operation words.

### Run

```ebnf
run ::= "async"? "run" target ;
```

`run` accepts a named target or an inline agic. `async` modifies only `run` and
precedes its keyword. Lane and count clauses and `using` are not accepted.

```too
flow inspect:
  run worker
  run -> Text: Inspect {{_}}.
  let child = async run worker
```

### Exec

```ebnf
exec ::= "exec" target ;
```

`exec` accepts a named target or an inline agic. It is a standalone statement
and cannot appear in a `let` binding. Modifiers and argument lists are invalid.

```too
flow finish:
  exec -> Text: Return the final report.
```

### Spawn

```ebnf
spawn ::= "spawn" target ;
```

`spawn` accepts a named target or an inline agic. It accepts no `using`, lanes,
counts, argument lists, or async modifier. A `let` wrapper is optional.

```too
flow research:
  let handle = spawn -> Text[]:
    List three sources about {{_}}.
```

### Await

```ebnf
await ::= "await" variable_name line_end ;
```

`await` requires one handle name. Expressions, field access, qualifiers, and
block bodies are invalid. `_` is not a handle name; nested operations such as
`await spawn worker` are invalid. Both named and nameless `let` wrappers are
accepted.

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
seek ::= "seek" name target ;
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
ask ::= "ask" ":" text ;
```

`ask` requires same-line or indented text. It accepts no named target or return
annotation.

```too
flow choose:
  ask: Which result should be kept?
```

### Generate

```ebnf
generate          ::= "generate" integer lanes? collection_target ;
collection_target ::= "using" name line_end | inline_agic ;
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
map ::= "map" lanes? collection_target ;
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
reduce ::= "reduce" "using" name line_end
         | "reduce" "using" name ":" block(initializer)
         | "reduce" ("->" type)? ":" inline_text line_end
         | "reduce" ("->" type)? ":" block(reducer_body) ;
reducer_body ::= reducer_text initializer? ;
reducer_text ::= ? nonempty literal text ending before a baseline initializer ? ;
initializer  ::= "from" ":" text ;
```

A named reducer with an initializer requires a header colon and an indented
`from:` clause. Omit that colon when there is no initializer. A multiline inline
reducer puts `from:` after nonempty reducer text at the text's baseline. Deeper
`from:` remains literal text. A same-line inline reducer cannot have a following
initializer; an initializer alone cannot supply reducer text.

Reducer headers permit structural comments before the first body row. This is
an exception to the generic explicit-text rule about outer comments.

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
keep     ::= "keep" (position line_end | predicate_target) ;
position ::= ("first" | "last") integer ;
predicate_target ::= lanes? "if" name line_end
                   | "if" name lanes line_end
                   | lanes? "if" inline_agic ;
```

`keep` accepts a position/count or a predicate introduced by `if`. A predicate
may be named or inline. A lane clause can precede either predicate form or
follow a named predicate, but cannot appear in both positions. A positional
selection has no lane clause.

```too
flow select:
  keep first 3
  keep in 2 lanes if -> Boolean: Is {{_}} useful?
```

### Drop

```ebnf
drop ::= "drop" (position line_end | predicate_target) ;
```

`drop` accepts `first N`, `last N`, or a named/inline predicate introduced by
`if`. A lane clause can precede either predicate form or follow a named
predicate, but cannot appear in both positions. A positional selection has no
lane clause.

```too
flow select:
  drop last 2
  drop if duplicate in 2 lanes
```

### Sort

```ebnf
sort ::= "sort" ("ascending" | "descending") score_target ;
score_target ::= lanes? "by" name line_end
               | "by" name lanes line_end
               | lanes? "by" inline_agic ;
```

An explicit order immediately follows `sort`. `by` introduces a named or inline
score target. A lane clause may precede either target form or follow a named
target, but cannot appear in both positions. Commas and `with` are not complement
syntax.

```too
flow order:
  sort descending by score
  sort ascending in 2 lanes by -> Number: Score {{_}}.
```

### Repeat


```ebnf
repeat       ::= "repeat" repeat_count? window? ":" block(repeat_body) ;
repeat_count ::= integer ("time" | "times") ;
window       ::= "windowing" integer ;
repeat_body  ::= statement+ (until_clause statement*)?
               | until_clause statement+ ;
until_clause ::= "until" (name line_end | ":" text) ;
```

Count and window are independently optional. `windowing` precedes the header
colon. Each repeat requires at least one ordinary statement and permits at most
one condition, before, between, or after its statements at the same baseline.
Nested repeats own their conditions. Empty/condition-only bodies, duplicate
conditions, and conditions outside repeats are invalid.

A condition accepts a bare named target or text directly. Qualified targets,
arguments, modifiers, named colon bodies, output annotations, and result bindings
are invalid. Deeper explicit text remains literal; a baseline sibling ends it.

```too
flow improve:
  repeat 5 times windowing 3:
    run inspect
    until ready
    run: Improve {{_}}.
```

### Implicit Run


```ebnf
implicit_run ::= paragraph(flow_keyword) ;
```

Flow paragraphs use the text rules with the complete Flow keyword set. Thus
`run`, `run:`, and `run,` select structural parsing; `runner` and `run_suffix`
remain prose. `_` selects syntax; `_suffix` remains prose. Declaration heads,
directive heads, and connector-only words are invalid at a statement position.
`from:` belongs only to a reduce initializer; `windowing` belongs only to a repeat
header. To begin literal prose with an active word, capitalize it or use explicit
`run:` text.

## Validity and Recovery

Consumers must reject native `ERROR`, missing tokens, and every `invalid_*`
descendant. `root.has_error` alone is insufficient. Missing-body, missing-content,
and missing-statement diagnostics are zero-width and preserve following source;
they do not make an absent required construct valid.

[src/node-types.json](src/node-types.json) defines the current node/field schema;
[queries](queries) show its use. Text preserves authored bytes and relative
indentation. Parsing does not trim or dedent it.
