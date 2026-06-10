; Source of truth for Toolang Tree-sitter tags queries.

(thunk
  name: (thunk_name
    (snake_name) @name)) @definition.function

(flow
  name: (flow_name
    (snake_name) @name)) @definition.function

(struct
  name: (struct_name
    (type_name) @name)) @definition.class

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
] @definition.class
