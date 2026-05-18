; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment_line) @comment
(inline_comment) @comment

(use_keyword) @keyword
(struct_keyword) @keyword
(psyche_keyword) @keyword
(skill_keyword) @keyword
(service_keyword) @keyword
(prompt_keyword) @keyword
(instruct_keyword) @keyword
(thunk_keyword) @keyword

(cap_kind) @type
(directive_key) @property
(block_kind) @keyword
(block_language) @property

(assign_operator) @operator
(directive_op) @operator
(arrow) @operator

(colon) @punctuation.delimiter
(comma) @punctuation.delimiter
(lparen) @punctuation.delimiter
(rparen) @punctuation.delimiter
(optional_marker) @punctuation.special
(array_suffix) @punctuation.special
(fence_open) @punctuation.special
(fence_close) @punctuation.special
(frontmatter_delimiter) @punctuation.special

(cap_uri) @constant
(cap_shorthand) @constant
(bare_value) @constant

(property_value) @string
(block_content_inline) @string
(fenced_raw_text) @string
(indented_raw_text) @string

(struct
  name: (struct_name
    (type_name) @type))

(thunk
  name: (thunk_name
    (value_name) @function))

(prompt
  name: (cap_name
    (value_name) @function))

[
  (psyche)
  (skill)
  (service)
] @type

(param
  name: (param_name
    (value_name) @property))

(field
  name: (field_name
    (value_name) @property))

(type
  (base_type
    (user_type
      (type_name) @type)))
