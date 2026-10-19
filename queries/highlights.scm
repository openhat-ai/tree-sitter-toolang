; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(plain_comment) @comment
(shebang_comment) @comment
(program_doc) @comment.documentation
(item_doc) @comment.documentation
(param_doc) @comment.documentation
(param_doc "@param" @keyword param: (param_name) @variable.parameter)

[
  "with"
  "struct"
  "psyche"
  "skill"
  "service"
  "prompt"
  "chore"
  "context"
  "instruct"
  "agic"
  "flow"
  "run"
  "async"
  "await"
  "exec"
  "spawn"
  "let"
  "seek"
  "ask"
  "generate"
  "reduce"
  "map"
  "keep"
  "drop"
  "sort"
  "repeat"
  "until"
  "from"
  "windowing"
  "using"
  "if"
  "by"
  "in"
  "lane"
  "lanes"
  "ascending"
  "descending"
  "time"
  "times"
  "first"
  "last"
] @keyword

(cap_kind) @type
(directive_key) @property
(role) @keyword

[
  "="
  "+="
  "-="
  "->"
] @operator

[
  ":"
  ","
  "("
  ")"
] @punctuation.delimiter

[
  "?"
  "[]"
] @punctuation.special

(with reference: (text) @constant)
(query_value) @constant
(recall_value) @constant
(route_value) @constant
(directive value: (identifier) @constant)
(integer_literal) @number
[
  "default"
  "none"
  "*"
] @constant.builtin

(content (text) @string)
(property value: (text) @string)
(invalid_flow_statement (text) @string)
(invalid_agic_message (text) @string)
(invalid_run_target (text) @string)

(struct
  name: (type_name) @type)

(agic
  name: (runnable_name) @function)

(flow
  name: (runnable_name) @function)

(psyche
  name: (cap_name) @type)

(skill
  name: (cap_name) @type)

(service
  name: (cap_name) @type)

(prompt
  name: (cap_name) @type)

(chore
  name: (chore_name) @function)

(context
  name: (identifier) @function)

(instruct
  name: (identifier) @function)

(param
  name: (param_name) @property)

(field
  name: (identifier) @property)

(type base: (type_name) @type)
