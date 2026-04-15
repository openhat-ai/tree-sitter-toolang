; Source of truth for Toolang Tree-sitter tags queries.

(thunk_header
  name: (identifier) @name) @definition.function

(slash_header
  name: (identifier) @name) @definition.function

(struct_header
  name: (identifier) @name) @definition.class

(declaration_header
  name: (identifier) @name) @definition.class
