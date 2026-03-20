; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment) @comment
(inline_comment) @comment

(use_keyword) @keyword
(thunk_keyword) @keyword
(decl_kind) @keyword

(cap_kind) @type
(collection_subject) @property
(model_subject) @property
(language) @property

(assign_operator) @keyword
(remove_operator) @operator
(arrow) @operator

(colon) @punctuation.delimiter
(comma) @punctuation.delimiter
(lparen) @punctuation.delimiter
(rparen) @punctuation.delimiter
(question) @punctuation.special
(fence_open) @punctuation.special
(fence_close) @punctuation.special

(reference) @constant
(prompt_text) @string
(fence_text) @string

(collection_directive
  operator: (assign_operator)
  values: (directive_values
    (directive_value) @constant))

(collection_directive
  operator: (remove_operator)
  values: (directive_values
    (directive_value) @string.special))

(model_directive
  values: (directive_values
    (directive_value) @type))

(declaration_header
  name: (identifier) @type)

(declaration_header
  language: (language) @property)

(parameter
  name: (identifier) @property)

(thunk_header
  name: (identifier) @function)

(thunk_header
  output: (identifier) @type)

(thunk_input
  value: (identifier) @variable)

(use_statement
  reference: (reference) @constant)
