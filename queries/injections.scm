; Source of truth for Toolang Tree-sitter injection queries.
; Maintain this file in this repository and consume it from tooling.

((block_fenced
  language: (block_language) @_language) @injection.content
  (#eq? @_language "md")
  (#set! injection.language "markdown"))
