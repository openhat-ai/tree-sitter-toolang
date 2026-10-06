; Source of truth for Toolang Tree-sitter indentation queries.
; Maintain this file in this repository and consume it from tooling.

(struct) @indent
(psyche) @indent
(skill) @indent
(service) @indent
(prompt) @indent
(task) @indent
(chore) @indent
(context) @indent
(instruct) @indent
(agic) @indent
(flow) @indent
(repeat_statement) @indent
; Capture structural headers, not the first text row of semantic content.
(reduce_statement runnable: (runnable_name) (colon)) @indent
(inline_agic (line_end) content: (content)) @indent
(inline_agic_body (line_end) content: (content)) @indent
(ask_statement (line_end) content: (content)) @indent
(let_statement (line_end) value: (content)) @indent
(message role: (role) (line_end) content: (content)) @indent
(reduce_statement
  (flow_from_keyword) @indent
  (line_end) from: (content))
