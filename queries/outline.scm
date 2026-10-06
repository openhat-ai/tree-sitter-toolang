; Source of truth for Toolang Tree-sitter outline queries.
; Maintain this file in this repository and consume it from tooling.

(agic
  name: (runnable_name) @name) @item

(flow
  name: (runnable_name) @name) @item

(struct
  name: (type_name) @name) @item

[
  (psyche
    name: (cap_name) @name)
  (skill
    name: (cap_name) @name)
  (service
    name: (cap_name) @name)
  (prompt
    name: (cap_name) @name)
  (task
    name: (job_name) @name)
  (chore
    name: (job_name) @name)
  (context
    name: (identifier) @name)
  (instruct
    name: (identifier) @name)
] @item
