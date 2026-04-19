; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment) @comment
(inline_comment) @comment

(use_keyword) @keyword
(struct_keyword) @keyword
(thunk_keyword) @keyword
(decl_kind) @keyword

(cap_kind) @type
(overlay_subject) @property
(message_kind) @keyword
(language) @property

(assign_operator) @operator
(add_assign_operator) @operator
(remove_assign_operator) @operator
(arrow) @operator

(colon) @punctuation.delimiter
(comma) @punctuation.delimiter
(lparen) @punctuation.delimiter
(rparen) @punctuation.delimiter
(question) @punctuation.special
(array_suffix) @punctuation.special
(fence_open) @punctuation.special
(fence_close) @punctuation.special

(reference) @constant
(message_text) @string
(indented_message_text) @string
(fence_text) @string

(thunk_overlay
  subject: (overlay_subject) @_subject
  values: (overlay_values
    (overlay_value) @type)
  (#eq? @_subject "models"))

(thunk_overlay
  subject: (overlay_subject) @_subject
  values: (overlay_values
    (overlay_value) @constant)
  (#not-eq? @_subject "models"))

(declaration_header
  kind: (decl_kind) @_kind
  name: (identifier) @function
  (#eq? @_kind "prompt"))

(declaration_header
  kind: (decl_kind) @_kind
  name: (identifier) @type
  (#any-of? @_kind "psyche" "service"))

(struct_header
  name: (identifier) @type)

(thunk_signature
  name: (identifier) @function)

(struct_field
  name: (identifier) @property)

(param
  name: (named_identifier) @property)

(input
  name: (underscore) @property)

(type_expression
  name: (identifier) @type)

(use_statement
  reference: (reference) @constant)
