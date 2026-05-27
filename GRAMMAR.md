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

comment_line ::= "#" line_text newline
inline_comment ::= "#" line_text
line_end ::= inline_comment? newline

optional_marker ::= "?"

type_name ::= /[A-Z][A-Za-z0-9]*/
value_name ::= /[a-z][a-z0-9_-]*/
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
- A comment that starts at the beginning of a line is a `comment_line`.
- A comment that starts after another token on the same line is an
  `inline_comment`.
- Grammar lines use `line_end` when they may carry an inline comment.
- `comment_line` and `blank_line` may appear between logical lines unless a
  production explicitly forbids them.

## Types

```ebnf
type ::= base_type type_suffix*
base_type ::= builtin_type | user_type
builtin_type ::= "Text" | "Number" | "Boolean" | "Json" | "Message"
user_type ::= type_name
type_suffix ::= array_suffix
array_suffix ::= "[]"
```

## Program

```ebnf
program ::= (item | comment_line | blank_line)*
item ::= use | struct | psyche | skill | service | prompt | context | instruct | thunk
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
struct_body ::= field+
field ::= field_name optional_marker? ":" type line_end
field_name ::= value_name
```

## Caps

```ebnf
psyche ::= "psyche" cap_name ":" cap_body
skill ::= "skill" cap_name ":" cap_body
service ::= "service" cap_name ":" cap_body
prompt ::= "prompt" cap_name ":" cap_body
cap_name ::= value_name

cap_uri ::= /[A-Za-z][A-Za-z0-9+.-]*:\/\/[^\s#]+/
cap_shorthand ::= /[A-Za-z0-9_@-][A-Za-z0-9_./:@-]*/
bare_value ::= /[A-Za-z0-9_./:@-]+/

cap_body ::= cap_indented | cap_markdown
cap_indented ::= line_end INDENT property_eq* cap_content? DEDENT
cap_markdown ::= "```md" line_end frontmatter? cap_content? "```" newline
cap_content ::= raw_text

frontmatter ::= "---" newline (property_colon | frontmatter_comment)* "---" newline

property_eq ::= property_key "=" property_value line_end
property_colon ::= property_key ":" property_value line_end
frontmatter_comment ::= "#" line_text newline
property_key ::= value_name
property_value ::= inline_text
```

Rules:

- `cap_shorthand` must not start with `.` or `/`.
- Both body forms may contain zero or more properties before body text.
- Markdown fenced bodies store properties in frontmatter using `key: value`
  lines.
- Frontmatter may include `#` comment lines; they are preserved as frontmatter
  content.
- Indented bodies store properties using `key = value` lines.
- Runtime validates property keys and cap-specific property constraints.
- Indented cap properties use only `=`; `+=` and `-=` are thunk directive
  operators, not property operators.
- The AST should expose `psyche`, `skill`, `service`, and `prompt` directly.
- Do not wrap these declarations in an abstract `cap` node.

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
thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body DEDENT
thunk_name ::= value_name
thunk_body ::= directive* template_block_section? message_block*
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? ":" type
param_name ::= value_name
output_type ::= "->" type

directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs" | "recall"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*

template_block_section ::= context_block instruct_block? | instruct_block context_block?
context_block ::= "context" ":" block_value
instruct_block ::= "instruct" ":" block_value
message_block ::= message_block_kind ":" block_value
message_block_kind ::= "user" | "assistant" | "tool"
block_value ::= block_inline | block_indented | block_fenced
block_inline ::= (block_name | block_content_inline) line_end
block_name ::= "default" | "none" | value_name
block_content_inline ::= inline_text
```

Defaults:

- Omitted name defaults semantically to `default`.
- Omitted params imply `(input: Message)`.
- Omitted output implies `Message`.
- Parentheses mean exact parameters; no implicit input is added.

Rules:

- Parameters require explicit types.
- `input` is reserved.
- If `input` appears, it must be first.
- `models` supports only `=`.
- Runtime validates referenced names.
- `hands` declares sub-thunks this thunk may call.
- `handoffs` declares thunks this thunk may transfer control to.
- `recall` controls which retrieved message sources are prepended before
  thunk-local messages. It supports only `=`. Valid semantic values are
  `none`, `default`, `history`, `memory`, or a CSV containing `history` and
  `memory`, for example `recall = history, memory`.
- No bare text is allowed directly in `thunk_body`.
- Thunk-local blocks cannot have custom names.
- If an inline block value matches `block_name`, parse it as a
  name-like value.
- Otherwise, parse it as literal inline text.
- Inline values trim surrounding whitespace.
- Thunk-local `context` and `instruct` blocks belong to the template section,
  which must appear after directives and before message blocks.
- One thunk may have at most one thunk-local `context` and at most one
  thunk-local `instruct`.
- A thunk may contain zero or more `user`, `assistant`, and `tool` message
  blocks, in declaration order.
- Thunk-local `context` and `instruct` values may be `none`, `default`, a named
  top-level template reference, inline text, an indented block, or a fenced
  block.
- Runtime decides defaults for omitted `context`, `instruct`, and messages.
- Runtime decides the semantics of `default` and `none`.

## Model Call Assembly

The runtime assembles a thunk call into `tools`, `instructions`, and
`messages` for the model adapter.

- `tools` is derived from available tool declarations and thunk capability
  directives.
- `instructions` is generated from the selected `instruct` template. The
  selection can be `default`, a named top-level `instruct`, `none`, or
  thunk-local inline/block text. Template rendering receives the run context.
- `messages` starts with retrieved history according to `recall`, then appends
  thunk-local `user`, `assistant`, and `tool` blocks.
- The final user message is formed by prepending a rendered context prompt to
  the user input. The context prompt is generated from `default`, a named
  top-level `context`, `none`, or thunk-local inline/block text. Template
  rendering receives the run context.
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
- Elsewhere, `#!` is a normal `comment_line`.
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
- Non-doc `comment_line` does not attach.

## Grammar Summary

```ebnf
program ::= (item | comment_line | blank_line)*
item ::= use | struct | psyche | skill | service | prompt | context | instruct | thunk

use ::= "use" cap_kind cap_ref line_end
cap_kind ::= "psyche" | "skill" | "service" | "prompt"
cap_ref ::= cap_uri | cap_shorthand

struct ::= "struct" struct_name ":" line_end INDENT struct_body DEDENT
struct_name ::= type_name
struct_body ::= field+
field ::= field_name optional_marker? ":" type line_end
field_name ::= value_name

psyche ::= "psyche" cap_name ":" cap_body
skill ::= "skill" cap_name ":" cap_body
service ::= "service" cap_name ":" cap_body
prompt ::= "prompt" cap_name ":" cap_body
cap_name ::= value_name
cap_body ::= cap_indented | cap_markdown
cap_indented ::= line_end INDENT property_eq* cap_content? DEDENT
cap_markdown ::= "```md" line_end frontmatter? cap_content? "```" newline
cap_content ::= raw_text
frontmatter ::= "---" newline (property_colon | frontmatter_comment)* "---" newline
property_eq ::= property_key "=" property_value line_end
property_colon ::= property_key ":" property_value line_end
frontmatter_comment ::= "#" line_text newline
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

thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body DEDENT
thunk_name ::= value_name
thunk_body ::= directive* template_block_section? message_block*
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? ":" type
param_name ::= value_name
output_type ::= "->" type
directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs" | "recall"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*
template_block_section ::= context_block instruct_block? | instruct_block context_block?
context_block ::= "context" ":" block_value
instruct_block ::= "instruct" ":" block_value
message_block ::= message_block_kind ":" block_value
message_block_kind ::= "user" | "assistant" | "tool"
block_value ::= block_inline | block_indented | block_fenced
block_inline ::= (block_name | block_content_inline) line_end
block_name ::= "default" | "none" | value_name
block_content_inline ::= inline_text
```
