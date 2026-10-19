# Literal inline text

Status: approved for implementation on 2026-10-19. Baseline: `6e052dc`
in [PR #62](https://github.com/openhat-ai/tree-sitter-toolang/pull/62).

## Contract

Explicit inline content consumes the rest of its physical line, including every
`#`. Text has no inline comments. Quotes and backslashes remain ordinary source
characters; do not introduce strings, escaping, or unquoting.

- Apply to context/instruct content, role messages, inline runnable bodies,
  ask requests, let text values, repeat conditions, and reducer initializers.
- `run: # Heading` contains `# Heading`. A text introducer followed only by
  spaces/tabs and a newline selects an indented body; it cannot have a header
  comment on that line. Existing blank/missing-content rules still apply.
- Preserve structural comments on declarations, typed fields, named operations,
  repeat headers, directives, properties, and `with` references. These raw
  structural values keep their existing comment boundaries.
- Preserve indented/implicit text, keyword boundaries, RHS operation guards,
  reducer leading-trivia rules, and sibling recovery. Keep public `content`
  and `text_line` shapes and fields; only affected text/comment ranges change.

Separate private lexical rules for literal inline text and comment-delimited
structural values. Text-ending productions must not offer an inline-comment
alternative. Keep recovery text separate from authored content.

## Compatibility and verification

Existing inline text followed by `# note` now includes that suffix in the text.
Move intended annotations to standalone structural comment lines before the
owning construct. Likewise, move comments from text-introducer lines before
using an indented body. No compatibility heuristic may silently drop the suffix.

Acceptance checks must assert exact text bytes, leaf fields/ranges, and string
query captures, rather than only successful parsing. Cover all explicit content
owners, URLs/fragments, leading and repeated comment markers, quotes, literal
backslashes, LF/CRLF, EOF, tabs, and incremental edits between inline/block and
structural/text forms. Verify that structural comments and malformed-operation
diagnostics retain their behavior. Migrate affected fixtures and corpus cases.

Update `grammar.js`, generated artifacts, tests/corpus, CLI highlighting checks,
`GRAMMAR.md`, and `CHANGELOG.md` Unreleased. Run all grammar default checks,
generation reproducibility, and documentation validation. No version bump or
publication is included. Toolang source formatting/lowering must consume the
new text/comment ownership during the coordinated #62 CST adoption, without
applying quote-aware or whitespace-based comment splitting to content.
