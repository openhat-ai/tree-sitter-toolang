; Source of truth for Toolang Tree-sitter tags queries.

(thunk
  name: (thunk_name
    (value_name) @name)) @definition.function

(struct
  name: (struct_name
    (type_name) @name)) @definition.class

[
  (psyche
    name: (cap_name
      (value_name) @name))
  (skill
    name: (cap_name
      (value_name) @name))
  (service
    name: (cap_name
      (value_name) @name))
  (prompt
    name: (cap_name
      (value_name) @name))
  (context
    name: (context_name
      (value_name) @name))
  (instruct
    name: (instruct_name
      (value_name) @name))
] @definition.class
