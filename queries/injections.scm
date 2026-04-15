; Source of truth for Toolang Tree-sitter injection queries.
; Maintain this file in this repository and consume it from tooling.

((fenced_declaration
  header: (declaration_header
    language: (language) @_language)
  body: [
    (psyche_fence_body)
    (service_fence_body)
    (slash_fence_body)
  ] @injection.content)
  (#any-of? @_language "md" "markdown")
  (#set! injection.language "markdown"))
