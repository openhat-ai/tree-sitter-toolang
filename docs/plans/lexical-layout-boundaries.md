# Lexical boundaries and missing-body recovery

Status: approved for implementation by the maintainer in the design discussion.

## Goal and scope

Enforce the agreed whitespace rule throughout the grammar, and keep following
code usable when an editor buffer contains a missing required body. Success
means whole words and integers, unchanged valid-source CST shapes, local
diagnostics, and identical fresh/incremental trees.

## Decisions

- Tokens are indivisible. Adjacent words/numbers need spaces or tabs; grammar
  symbols allow optional horizontal space. Newlines remain layout boundaries.
- Keep `->`, `+=`, `-=`, `[]`, comment markers, and qualified references intact.
  Require horizontal space before a raw `with` reference, including `./foo`.
  The reference leaf starts after that separator.
  Explicit and implicit Content retain their existing literal rules.
- Use Tree-sitter keyword extraction for word boundaries and scanner lookahead
  for integer right boundaries. Keep numeric classifications private and expose
  the existing `integer_literal` leaf for all counts and numeric directives.
- A missing required body is invalid. Emit one zero-width `invalid_empty_body`
  diagnostic before the next substantive line or at EOF, without a synthetic
  indentation frame. Retain normal following siblings and declarations.
  This also covers flow directives without statements, a repeat condition
  without statements, and an initializer without reducer text.
- Keep existing indentation policies: arbitrary positive widths, eight-column
  tabs, no mixed structural prefix or differently spelled sibling baseline;
  different nested levels may use different styles. Preserve literal text,
  comment/trivia ownership, and complete scanner-state serialization.
- Keep EBNF focused on valid source and CST fields focused on semantic roles.
  Whitespace/layout helpers remain hidden. Diagnostic metadata may describe an
  absent required field in invalid trees; valid-source fields remain unchanged.
- Preserve the bounded scanner stack; test its exact capacity rather than
  silently truncating or introducing a new arbitrary depth limit.

No new operators, runtime behavior, async/await blocks, name syntax, whole-file
indentation-style rule, or release is included.

## Implementation touchpoints

`grammar.js`, `src/scanner.c`, regenerated parser/grammar/node metadata,
`GRAMMAR.md`, CLI schema assertions, corpus cases, fixtures, and Python grammar
and incremental-layout tests. Existing runtime diagnostics already reject all
`invalid_*` nodes; no runtime changes are needed.

## Acceptance

- Reject `2times`, `2using`, `2lanes`, `windowing1`, and `with skill./foo` in
  structural positions. Keep `2->Text`, symbol-adjacent bindings/signatures,
  leading-zero numbers, and literal `let text = 2times runworker` valid.
- Exercise every required-body consumer, comments-only structural bodies,
  blank lines, LF/CRLF, spaces/tabs, EOF, following siblings, and declarations.
  Missing bodies remain diagnostic and never borrow the next statement.
- Compare fresh and incremental trees through errors, repairs, and edits across
  stack capacity. Existing literal ranges and valid-source CST shapes hold.
- Regenerate cleanly and pass `npm run check`, Python tests, and `cargo test`.

## Risks and migration

Previously accepted concatenations require separators. Consumers must reject
`invalid_*` nodes as well as native ERROR/MISSING nodes before execution.
Lexical changes can affect recovery or token ranges, so verify both the full
suite and valid-fixture CST comparisons. No open design questions remain.
