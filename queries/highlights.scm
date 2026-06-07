; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment_line) @comment
(program_doc_comment) @comment.documentation
(doc_comment) @comment.documentation
(inline_comment) @comment
(frontmatter_comment) @comment

(use_keyword) @keyword
(struct_keyword) @keyword
(psyche_keyword) @keyword
(skill_keyword) @keyword
(service_keyword) @keyword
(prompt_keyword) @keyword
(context_keyword) @keyword
(instruct_keyword) @keyword
(thunk_keyword) @keyword
(flow_keyword) @keyword
(flow_do_keyword) @keyword
(flow_ask_keyword) @keyword
(flow_unfold_keyword) @keyword
(flow_keep_keyword) @keyword
(flow_drop_keyword) @keyword
(flow_rank_keyword) @keyword
(flow_each_keyword) @keyword
(flow_fold_keyword) @keyword
(flow_repeat_keyword) @keyword
(flow_until_keyword) @keyword
(flow_to_keyword) @keyword
(flow_par_keyword) @keyword

(cap_kind) @type
(directive_key) @property
(context_block_kind) @keyword
(instruct_block_kind) @keyword
(roled_message_kind) @keyword
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

(flow
  name: (flow_name
    (value_name) @function))

(prompt
  name: (cap_name
    (value_name) @function))

(context
  name: (context_name
    (value_name) @function))

(instruct
  name: (instruct_name
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
