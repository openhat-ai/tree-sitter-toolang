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
item ::= use | struct | psyche | skill | service | prompt | instruct | thunk
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

- Top-level `instruct` uses an unnamed indented or fenced body.
- `instruct` does not contain properties.
- Indented bodies remove common content indentation, trim outer blank lines, and
  preserve inner blank lines and relative indentation.
- Fenced bodies preserve content after fence-indent dedent.

## Thunk

```ebnf
thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body DEDENT
thunk_name ::= value_name
thunk_body ::= directive* block*
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? ":" type
param_name ::= value_name
output_type ::= "->" type

directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*

block ::= block_kind ":" block_value
block_kind ::= "instruct" | "system" | "user"
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
- No bare text is allowed directly in `thunk_body`.
- Thunk-local blocks cannot have custom names.
- If an inline block value matches `block_name`, parse it as a
  name-like value.
- Otherwise, parse it as literal inline text.
- Inline values trim surrounding whitespace.
- One thunk should have at most one `instruct`, one `system`, and one `user`.
- Runtime decides defaults for omitted `instruct`, `system`, and `user`.
- Runtime decides the semantics of `default` and `none`.

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
item ::= use | struct | psyche | skill | service | prompt | instruct | thunk

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

thunk ::= "thunk" thunk_name? params? output_type? ":" line_end INDENT thunk_body DEDENT
thunk_name ::= value_name
thunk_body ::= directive* block*
params ::= "(" (param ("," param)*)? ")"
param ::= param_name optional_marker? ":" type
param_name ::= value_name
output_type ::= "->" type
directive ::= directive_key directive_op directive_csv line_end
directive_key ::= "models" | "tools" | "skills" | "services" | "psyches" | "hands" | "handoffs"
directive_op ::= "=" | "+=" | "-="
directive_csv ::= bare_value ("," bare_value)*
block ::= block_kind ":" block_value
block_kind ::= "instruct" | "system" | "user"
block_value ::= block_inline | block_indented | block_fenced
block_inline ::= (block_name | block_content_inline) line_end
block_name ::= "default" | "none" | value_name
block_content_inline ::= inline_text
```
