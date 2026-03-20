; Source of truth for Toolang Tree-sitter injection queries.
; Maintain this file in this repository and consume it from tooling.

((declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#eq? @_language "json")
  (#set! injection.language "json"))

((declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#eq? @_language "python")
  (#set! injection.language "python"))

((declaration
  header: (declaration_header
    language: (language) @_language)
  body: (fence_body) @injection.content)
  (#any-of? @_language "md" "markdown")
  (#set! injection.language "markdown"))
