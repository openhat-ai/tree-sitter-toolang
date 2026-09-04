; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(comment_line) @comment
(parent_doc_line) @comment.documentation
(doc_line) @comment.documentation
(inline_comment) @comment

(with_keyword) @keyword
(struct_keyword) @keyword
(psyche_keyword) @keyword
(skill_keyword) @keyword
(service_keyword) @keyword
(prompt_keyword) @keyword
(task_keyword) @keyword
(chore_keyword) @keyword
(context_keyword) @keyword
(instruct_keyword) @keyword
(agic_keyword) @keyword
(flow_keyword) @keyword
(flow_run_keyword) @keyword
(flow_let_keyword) @keyword
(flow_seek_keyword) @keyword
(flow_ask_keyword) @keyword
(flow_scatter_keyword) @keyword
(flow_storm_keyword) @keyword
(flow_gather_keyword) @keyword
(flow_settle_keyword) @keyword
(flow_map_keyword) @keyword
(flow_keep_keyword) @keyword
(flow_drop_keyword) @keyword
(flow_sort_keyword) @keyword
(flow_rank_keyword) @keyword
(flow_repeat_keyword) @keyword
(flow_until_keyword) @keyword
(flow_using_keyword) @keyword
(flow_if_keyword) @keyword
(flow_by_keyword) @keyword
(flow_in_keyword) @keyword
(flow_lane_keyword) @keyword
(flow_lanes_keyword) @keyword
(flow_ascending_keyword) @keyword
(flow_descending_keyword) @keyword
(flow_time_keyword) @keyword
(flow_times_keyword) @keyword
(flow_par_keyword) @keyword
(flow_first_keyword) @keyword
(flow_last_keyword) @keyword
(flow_top_keyword) @keyword
(flow_bottom_keyword) @keyword
(flow_think_keyword) @keyword
(flow_use_keyword) @keyword
(thunk_keyword) @keyword

(cap_kind) @type
(directive_key) @property
(recall_keyword) @property
(role) @keyword

(assign_operator) @operator
(directive_op) @operator
(arrow) @operator

(colon) @punctuation.delimiter
(comma) @punctuation.delimiter
(lparen) @punctuation.delimiter
(rparen) @punctuation.delimiter
(optional_marker) @punctuation.special
(array_suffix) @punctuation.special

(cap_ref
  (text_line) @constant)
(directive_value) @constant
(recall_value) @constant

(property_value) @string
(text_line) @string
(indented_raw_text) @string

(struct
  name: (struct_name
    (type_name) @type))

(agic
  name: (agic_name
    (snake_name) @function))

(flow
  name: (flow_name
    (snake_name) @function))

(psyche
  name: (cap_name) @type)

(skill
  name: (cap_name) @type)

(service
  name: (cap_name) @type)

(prompt
  name: (cap_name) @type)

(task
  name: (job_name) @function)

(chore
  name: (job_name) @function)

(context
  name: (context_name
    (snake_name) @function))

(instruct
  name: (instruct_name
    (snake_name) @function))

[
  (task)
  (chore)
] @type

(param
  name: (param_name
    (snake_name) @property))

(field
  name: (field_name
    (snake_name) @property))

(type
  (base_type
    (user_type
      (type_name) @type)))
