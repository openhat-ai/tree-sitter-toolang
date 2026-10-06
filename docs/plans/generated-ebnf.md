# Generate an EBNF reference from the Tree-sitter grammar

Status: approved by the user on 2026-10-06. Follow-up to
[PR #60](https://github.com/openhat-ai/tree-sitter-toolang/pull/60).
Implementation follows this approved scope.

## Goal and success criteria

Replace manually synchronized productions in `GRAMMAR.ebnf` with a deterministic
reference generated from `src/grammar.json`. Reviewers must be able to trace a
production to its implementation without silently losing grouping, optionality,
lexical constraints, or CST metadata. CI must detect stale output.

The output is an annotated implementation reference, including recovery rules;
it is not a standalone specification of valid Toolang source. `GRAMMAR.md`
continues to explain valid-source requirements, scanner behavior, and runtime
semantics. No accepted source, parser output, or public CST changes.

## Scope and design

- Implement a repository-local Node.js ES module using built-in libraries and
  Node's test runner, compatible with the existing Node 20 CI. No new dependency,
  network access, browser, or package publication is required.
- Read the JSON produced by the existing Tree-sitter CLI. Do not parse or
  execute `grammar.js` in the converter, inspect `scanner.c`, or invent lexical
  definitions for external tokens.
- Use a small recursive renderer with explicit expression precedence. Retain
  every authored rule and its order, including hidden and recovery rules. Do
  not rename, inline, remove, or heuristically simplify rules for readability.
- Use an independent implementation. The
  [json2ebnf example](https://github.com/mingodad/plgh/blob/ca3398c391ac238a25088a94f9d8e1fbff19c3fe/json2ebnf.html)
  informs the approach; its regex conversion and grouping heuristics are not
  reused. Railroad diagrams and a general-purpose grammar conversion framework
  are out of scope.

### Output contract

Use `::=`, `|`, parentheses, postfix `?`, `*`, `+`, and `;` production endings.
Use JSON string escaping for terminals. Represent epsilon explicitly as
`? empty ?`, rather than omitting the production. Quoted JSON strings are atomic
within annotations and special sequences, including strings containing `?`.

| Input | Generated representation |
| --- | --- |
| `STRING`, `SYMBOL` | Quoted terminal or unchanged rule name. |
| `SEQ`, `CHOICE` | Concatenation or alternatives; parentheses follow expression precedence. |
| `BLANK` | `? empty ?`. |
| Two-way `CHOICE` with one `BLANK` | Optional expression, including at a production root and beneath wrappers. Recognize either member order. |
| `REPEAT`, `REPEAT1` | Grouped operand when needed, followed by `*` or `+`. |
| `PATTERN` | `? regex <JSON-encoded pattern> ?`; retain the exact decoded pattern and any supported flags, without translating regex syntax. |
| `FIELD`, `ALIAS` | Parenthesized operand with an adjacent annotation carrying the field name or alias value and named flag. |
| `PREC`, `PREC_LEFT`, `PREC_RIGHT`, `PREC_DYNAMIC` | Parenthesized operand annotated with precedence kind and value. |
| `TOKEN`, `IMMEDIATE_TOKEN` | Parenthesized operand annotated with token kind; immediacy must remain visible. |

Annotations use `(* ... *)` comments and apply to the following parenthesized
operand, for example `(* field "handle" *) (handle_name)`. Escape embedded
comment terminators in annotation strings so authored values cannot close a
comment. These annotations document Tree-sitter semantics; an ordinary EBNF
reader does not enforce them.

Include a generated-file notice and notation legend, without timestamps or
machine paths. Preserve grammar-level `word`, `extras`, `conflicts`,
`precedences`, `inline`, `supertypes`, and the ordered external-token inventory
in labeled JSON annotations. Record the grammar name and input schema reference.
External symbols without an authored production receive an explicit production
such as `_indent ::= ? external scanner token "_indent" ?;`. If a symbol has
both an authored rule and an external declaration, retain both facts without
creating duplicate productions. Validate that every symbol reference resolves
to a rule or declared external symbol.

Support the schema constructs used by this repository's pinned CLI. Unsupported
rule types, semantic properties, malformed nodes, and unresolved references
fail with the rule name and JSON path before any output file is overwritten.
New schema features require explicit support; never silently drop them.

### Commands and synchronization

- Add `scripts/generate_ebnf.mjs` with `--input`, `--output`, and `--check`.
  Defaults resolve relative to the repository root: `src/grammar.json` and
  `GRAMMAR.ebnf`. Explicit paths resolve relative to the caller's working
  directory. Export the pure rendering function for unit tests.
- Normal mode validates and renders fully before atomically replacing the output.
  `--check` compares exact UTF-8 bytes, writes nothing, and fails for a missing
  or stale file. Output always uses LF and ends with one newline.
- Add `generate:ebnf`, `check:ebnf`, and `test:ebnf` npm commands. Run the
  generator after Tree-sitter and keyword generation in `npm run generate`;
  include converter tests and its output check in `npm run check`.
- Extend CI's existing post-generation `git diff --exit-code` list to include
  `GRAMMAR.ebnf`. This catches a stale committed file even though generation
  has refreshed it before `check:ebnf` runs.
- Replace the hand-written EBNF after #60 is integrated. Move any unique source
  constraints from its comments into the relevant `GRAMMAR.md` sections, while
  avoiding a second manually maintained production listing. Update README and
  grammar-reference links and descriptions to distinguish the generated
  implementation view from valid-source explanations.

## Implementation touchpoints

- `scripts/generate_ebnf.mjs`, `scripts/test_generate_ebnf.mjs`.
- `package.json`, `.github/workflows/ci.yml`.
- `GRAMMAR.ebnf`, `GRAMMAR.md`, `README.md`.

Do not change `grammar.js`, `keywords.js`, `src/scanner.c`, parser artifacts,
queries, bindings, release records, versions, or package manifests beyond the
listed npm script changes.

## Acceptance tests

1. Independently specified fixtures cover every supported rule kind and wrapper
   composition. In particular, `a prec(b | c) d` retains `a (b | c) d`, and
   `repeat(prec(a b))` retains `(a b)*`; annotations cannot change grouping.
2. Optionality survives at the root, in sequences, under each wrapper, and
   inside repetitions; either blank position and explicit epsilon are covered.
3. Regex values including `ab+`, `\\w`, `a{2,3}`, escaped slashes, Unicode,
   quotes, and control characters round-trip exactly through their JSON string
   representation. No regex rewriting is performed.
4. Fields, named/anonymous aliases, precedence values, immediate tokens, and
   nonempty grammar-level metadata remain observable in output. External
   references are declared, and invalid references fail with their location.
5. Unknown constructs and malformed input fail without changing an existing
   output file. Repeated generation is byte-identical; `--check` detects a
   missing file or a one-byte change without modifying either.
6. The complete repository grammar converts; every authored rule appears once.
   The generated file matches the checked-in artifact, including external and
   recovery symbols. Existing parser/CST artifacts stay byte-identical.
7. Run `npm run check`, `.venv/bin/python -m pytest tests`, `cargo test`, and
   `git diff --check`; all pass offline.

## Risks and decisions

- An implementation view is longer than the current curated EBNF. Traceability
  takes priority; source explanations remain in `GRAMMAR.md`.
- Scanner constraints cannot be inferred from external names. Explicit external
  declarations and linked documentation prevent an unsupported equivalence claim.
- Grammar and scanner documentation can still drift semantically. Generation
  guarantees synchronization with the JSON rules, not validation of scanner prose.
- No design questions remain open for the first version.
