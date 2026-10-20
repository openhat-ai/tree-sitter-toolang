; Source of truth for Toolang Tree-sitter indentation queries.
; Maintain this file in this repository and consume it from tooling.

(struct) @indent
(psyche) @indent
(skill) @indent
(service) @indent
(prompt) @indent
(chore) @indent
(context) @indent
(instruct) @indent
(agic) @indent
(flow) @indent
(repeat_stmt) @indent
; Capture structural headers, not the first text row of semantic content.
(reduce_stmt target: (runnable_name) ":") @indent
(inline_agic (newline) content: (content)) @indent
(ask_stmt (newline) content: (content)) @indent
(let_stmt (newline) value: (content)) @indent
(message role: (role) (newline) content: (content)) @indent
(reduce_stmt
  "initial" @indent
  (newline) initial: (content))
