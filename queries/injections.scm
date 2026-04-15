; Source of truth for Toolang Tree-sitter injection queries.
; Maintain this file in this repository and consume it from tooling.

((fenced_declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#eq? @_language "json")
  (#set! injection.language "json"))

((fenced_declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#eq? @_language "python")
  (#set! injection.language "python"))

((fenced_declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#any-of? @_language "md" "markdown")
  (#set! injection.language "markdown"))
