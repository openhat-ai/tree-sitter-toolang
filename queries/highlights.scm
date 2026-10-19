; Source of truth for Toolang Tree-sitter highlight captures.
; Maintain this file in this repository and consume it from tooling.

(plain_comment) @comment
(shebang_comment) @comment
(program_doc) @comment.documentation
(item_doc) @comment.documentation
(param_doc) @comment.documentation
(param_doc "@param" @keyword param: (param_name) @variable.parameter)

(with_keyword) @keyword
(struct_keyword) @keyword
(psyche_keyword) @keyword
(skill_keyword) @keyword
(service_keyword) @keyword
(prompt_keyword) @keyword
(chore_keyword) @keyword
(context_keyword) @keyword
(instruct_keyword) @keyword
(agic_keyword) @keyword
(flow_keyword) @keyword
(run_keyword) @keyword
(async_keyword) @keyword
(await_keyword) @keyword
(exec_keyword) @keyword
(spawn_keyword) @keyword
(let_keyword) @keyword
(seek_keyword) @keyword
(ask_keyword) @keyword
(generate_keyword) @keyword
(reduce_keyword) @keyword
(map_keyword) @keyword
(keep_keyword) @keyword
(drop_keyword) @keyword
(sort_keyword) @keyword
(repeat_keyword) @keyword
(until_keyword) @keyword
(from_keyword) @keyword
(windowing_keyword) @keyword
(using_keyword) @keyword
(if_keyword) @keyword
(by_keyword) @keyword
(in_keyword) @keyword
(lane_keyword) @keyword
(lanes_keyword) @keyword
(ascending_keyword) @keyword
(descending_keyword) @keyword
(time_keyword) @keyword
(times_keyword) @keyword
(first_keyword) @keyword
(last_keyword) @keyword

(cap_kind) @type
(directive_key) @property
(role) @keyword

(assign_operator) @operator
(directive_operator) @operator
(arrow) @operator

(colon) @punctuation.delimiter
(comma) @punctuation.delimiter
(lparen) @punctuation.delimiter
(rparen) @punctuation.delimiter
(optional_marker) @punctuation.special
(array_suffix) @punctuation.special

(with reference: (text_line) @constant)
(directive_value) @constant
(recall_value) @constant
(route_value) @constant
(directive value: (identifier) @constant)
(integer_literal) @number
(default_keyword) @constant.builtin
(none_keyword) @constant.builtin
(all_keyword) @constant.builtin

(text_line) @string

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

(chore) @type

(param
  name: (param_name) @property)

(field
  name: (identifier) @property)

(type base: (type_name) @type)
