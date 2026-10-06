; Source of truth for Toolang Tree-sitter tags queries.

(agic
  name: (runnable_name) @name) @definition.function

(flow
  name: (runnable_name) @name) @definition.function

(struct
  name: (type_name) @name) @definition.class

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
] @definition.class
