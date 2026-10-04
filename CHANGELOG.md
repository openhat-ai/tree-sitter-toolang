# Changelog

User-visible changes to the grammar package. Coverage starts at 0.3.2; dates
below are the annotated release-tag dates. Historical syntax references remain
available at their Git tags. Grammar versions do not identify runtime support.

## [Unreleased]

## [0.3.4] - 2026-10-03

### Added

- Standalone named and inline `exec` statements in flows and repeat bodies,
  with syntax highlighting. CST consumers must handle `exec_statement.target`
  as either `runnable` or `inline_agic`.

### Changed

- `exec` is now reserved at flow statement boundaries. For literal prose
  beginning with that word, use explicit `run:` text. Prefixes such as
  `executor` remain text. `let exec ...` and `let name = exec ...` are invalid.

## [0.3.3] - 2026-09-24

### Added

- Optional `from:` initializers for `settle` and `windowing N` in repeat headers.
  CST consumers can read `settle_statement.from` separately from `runnable`,
  and `repeat_statement.window`.
- Shared agic/flow directives include `prompts`, `lanes` and named
  `instruct`/`context` selectors. Route references support exported names with
  uppercase letters, leading underscores and hyphens.

### Changed

- Directives share `key`, `operator` and `value` fields; the former `settings`
  subtree is removed. Replace runnable-local `instruct:`/`context:` blocks or
  bare selectors with top-level declarations selected by `instruct = name`
  or `context = name`.
- `scatter` no longer accepts a count. Use `scatter using name` or `scatter:`;
  use `storm N using name` for the counted form. Inline `scatter` and `settle`
  accept an omitted `using` keyword.
- Only query directives accept `+=` and `-=`. Use `=` for `hands`, `handoffs`,
  `recall`, `lanes`, `instruct` and `context`; route lists accept runnable
  references or standalone `none`/`*` rather than arbitrary query text.
- Replace `recall = auto` with an accepted selection such as `recall = far, near`.
  Either source order is accepted; `none`, `default` and `*` are standalone forms.
  `from` and `windowing` are reserved at flow statement boundaries; use explicit
  text for prose beginning with those words.

## [0.3.2] - 2026-09-13

### Added

- Column-zero `#@` module comments and structured
  `## @param NAME DESCRIPTION` item comments, with documentation and parameter
  highlighting. Legacy `##!` comments remain accepted.

### Changed

- Public comment nodes: `comment_line` and `inline_comment` become
  `plain_comment`; byte-zero shebangs use `shebang_comment`; `doc_line` becomes
  `item_doc_comment`; `parent_doc_line` becomes `module_doc_comment`.
  Update node consumers and custom queries to use these names and the
  structured `text`/`parameter` fields.
- Malformed leading `@param` tags are syntax errors rather than ordinary
  documentation. Supply a parameter name and a same-line description.
  Markers inside explicit text remain literal and should not be rewritten.

[Unreleased]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.4...HEAD
[0.3.4]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.3...v0.3.4
[0.3.3]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.2...v0.3.3
[0.3.2]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.1...v0.3.2
