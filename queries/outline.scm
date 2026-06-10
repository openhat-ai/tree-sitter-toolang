; Source of truth for Toolang Tree-sitter outline queries.
; Maintain this file in this repository and consume it from tooling.

(thunk
  name: (thunk_name
    (snake_name) @name)) @item

(flow
  name: (flow_name
    (snake_name) @name)) @item

(struct
  name: (struct_name
    (type_name) @name)) @item

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
    name: (context_name
      (snake_name) @name))
  (instruct
    name: (instruct_name
      (snake_name) @name))
] @item
