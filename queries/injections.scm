; Source of truth for Toolang Tree-sitter injection queries.
; Sync this file into editor integrations instead of editing copies by hand.

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
