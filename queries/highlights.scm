; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment) @comment
(inline_comment) @comment

(use_keyword) @keyword
(struct_keyword) @keyword
(slash_keyword) @keyword
(thunk_keyword) @keyword
(decl_kind) @keyword

(cap_kind) @type
(collection_subject) @property
(model_subject) @property
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
(body_text) @string
(fence_text) @string

(collection_directive
  values: (directive_values
    (directive_value) @constant))

(model_directive
  values: (directive_values
    (directive_value) @type))

(declaration_header
  name: (identifier) @type)

(struct_header
  name: (identifier) @type)

(slash_header
  name: (identifier) @function)

(thunk_header
  name: (identifier) @function)

(struct_field
  name: (identifier) @property)

(parameter
  name: (identifier) @property)

(type_expression
  name: (identifier) @type)

(use_statement
  reference: (reference) @constant)
