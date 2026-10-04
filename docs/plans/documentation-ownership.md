# Consolidate grammar documentation

Status: proposed implementation plan; the three-repository ownership direction
is agreed. This definition changes no current guide or parsing behavior.

## Goal and success criteria

Make this repository the concise syntax and CST reference for parser, editor
and language-tool developers. Keep executable parsing rules and their human
explanation aligned; give runtime semantics and authoring advice clear external
owners. A contributor should find syntax, node fields, layout/recovery behavior,
integration checks and downstream responsibilities without reading old plans.

This is the grammar-repository counterpart to
[Toolang's documentation plan](https://github.com/openhat-ai/toolang/pull/683).
Reuse its ownership decisions rather than designing another documentation tree.

## Scope and baseline

- Baseline: `origin/main` at `7477b10`, grammar 0.3.4, inspected on 2026-10-04.
  It is unchanged since the preceding ownership discussion. Recheck only later
  changes and unresolved claims, recording source/test evidence once.
- Implementation files: **`README.md` and `GRAMMAR.md` only**. This definition
  adds only `docs/plans/documentation-ownership.md`.
- Keep existing `docs/plans/` as historical definitions. Add no separate index,
  knowledge base, style guide, release notes or exhaustive generated-node copy.
- Change no grammar, scanner, generated artifacts, queries, bindings, fixtures,
  tests, dependency/version metadata, release workflow or sibling repository.
  A discovered parser defect requires a separately scoped fix.
- Toolang and website migrations use separate PRs. Verify the destination before
  removing unique material here; an open follow-up is not migration evidence.
  Independent grammar-documentation work may proceed while a handoff is pending.

## Ownership and target outline

| Owner | Responsibility | Boundary |
| --- | --- | --- |
| `tree-sitter-toolang` | Source syntax, layout, token boundaries, CST fields/ranges, invalid/recovery forms, queries and parser integration. | `grammar.js` and authored `src/scanner.c` define parsing; generated node types and existing tests verify descriptions. |
| `toolang` | Lowering, type defaults, name/doc binding, semantic validation, evaluation, formatting and runtime behavior. | Syntax acceptance does not establish runtime validity or feature availability. |
| `toolang-docs` | User learning, complete Authoring Conventions and published language reference. | Its reference derives parsing/behavior claims from the upstream owners and identifies compatible versions. |

**README:** repository purpose and these boundaries; Python/Rust/CLI integration
and packaged queries; links to current grammar and external semantic/style
owners; contributor generation/verification and downstream handoff; publishing.
Preserve accurate install/publishing instructions and keep detailed syntax out
of the README. Existing plans are clearly historical context.

**GRAMMAR:** scope/version/notation; lexical structure and layout; declarations
and signatures; shared directives and text; flow forms and clause ownership;
focused public CST details alongside each construct; parser compatibility notes
and consumer-boundary links. Keep the existing construct anchors where useful.
`src/node-types.json` remains the exhaustive field inventory; prose explains
contracts that are hard to infer from it, rather than copying the entire schema.

## Content disposition

Keep short explanations needed to read a production. Detailed rules have one
owner; split mixed paragraphs rather than deleting an entire construct.

| Current `GRAMMAR.md` material | Keep here | External owner / handoff |
| --- | --- | --- |
| Lexical structure, block layout and comments | Accepted markers/positions, byte ranges, fields, literal-text boundaries, indentation and recovery. Preserve syntactically valid legacy `##!`. | Toolang `docs/program.md`: attachment, combining descriptions and parameter validation. Website conventions: useful descriptions and preferred authoring forms. |
| Types, context/instruct and agic signatures | Type-name syntax, optional forms, explicit empty parameter lists and CST shape. Determine grammar-enforced restrictions from code/tests, not semantic wording. | Toolang `docs/program.md`: value meaning, omitted-type/name defaults, signature validation and instruction selection/inheritance. |
| Caps, prompts and jobs | Common properties/body shape; placeholders remain raw text; a property-looking prefix still parses as a property. | Toolang `docs/program.md`, `docs/caps.md`, `docs/tasks.md` and `docs/call-input.md`: property schemas, prompt input inference and substitution. |
| Directives and messages | Accepted operators/value forms, ordering, unresolved references, reserved tokens and message boundaries. | Toolang `docs/program.md` and `docs/queries.md`: duplicate selection validation, query interpretation, resource authorization, defaults and message-role semantics. |
| Flow | Statement/target forms, bindability, token agreement, complement order, named/inline CST fields, `from`/`window`/`until` ownership and invalid nodes. | Toolang `docs/flow-syntax.md`: locals/value shapes, result propagation, exec lifecycle, concurrency/order, reducer initialization and repeat history/evaluation. |
| Model Call Assembly | Replace runtime detail with a short linked consumer-boundary note; preserve its inbound anchor if needed. | Toolang `docs/program.md` and `docs/call-input.md`: model instructions/messages, part promotion and call authorization. Verify current behavior there before transferring anything. |
| Migration notes and old names | Necessary syntax/CST compatibility: accepted legacy forms, reserved-but-invalid words and consumer-visible node changes, clearly labeled. | Historical rationale remains in Git history and existing plans. Runtime migrations belong to Toolang; stylistic preference belongs to the website. |

The authoring guide is owned by
`toolang-docs/docs/pages/docs/toolang-conventions.mdx`. Link it from the README;
do not reproduce naming, prose, type-omission or formatter recommendations here.
Fixtures must still cover valid discouraged forms. Parser documentation can
explain how reserved words affect prose without prescribing a general style.

In particular, retain the grammar's `ask`/`seek` forms without claiming that a
runtime bridge is available. Retain `exec` target/binding rules without owning
its Run lifecycle. Distinguish malformed `@param` syntax from syntactically
valid duplicate or unknown parameter names that consumers may reject.

## Cross-repository handoff

For this consolidation, record the original section, verified destination,
version and any required sibling PR in the implementation PR. Toolang was
inspected at `0be39fe1`; website sources at `c35411b`. Reuse those reads and check
only relevant deltas. Keep a necessary source explanation until a missing
destination is available; do not leave links to planned files or anchors.

Add a compact maintenance checklist to the README for future changes:

1. A syntax/CST change updates the grammar reference, generated artifacts and
   affected corpus/fixtures/queries/binding checks together. Publish the parser
   separately under the existing release process.
2. Toolang integrates a compatible parser and verifies CST consumers, semantic
   behavior and its corresponding documentation.
3. The website updates `docs/pages/reference/toolang-grammar.mdx`,
   `docs/syntaxes/toolang.tmLanguage.ts` and affected examples. Its CLI/API source
   pin and grammar reference should identify a verified compatible baseline;
   the repositories do not need matching version numbers.
4. Runtime-only changes stay with Toolang and its public docs; style-only changes
   stay with the website. Formatter contracts belong to Toolang. None implies
   a parser change unless accepted syntax or public CST actually changes.

These describe future coordination, not parser releases, downstream edits or
new automation authorized by this documentation plan.

## Ordered work

- [ ] Confirm the latest baseline and make one section-to-owner map from the
  disposition above. Record only unresolved code/test questions for inspection.
- [ ] Verify semantic/style destinations and identify missing handoffs before
  removing material. Use existing Toolang/website owners, not another copy.
- [ ] Refocus `GRAMMAR.md` on syntax/CST, splitting mixed paragraphs and retaining
  essential layout, recovery, compatibility and literal-text edge cases.
- [ ] Refocus README navigation and add the ownership/handoff checklist while
  preserving accurate integration and publishing guidance.
- [ ] Classify and validate examples, CST claims and links. Review frozen-plan
  and known website links before moving headings; retain necessary anchors.
- [ ] Run the acceptance checks, fetch/rebase onto latest main, recheck affected
  evidence and submit a documentation-only PR with handoff/verification results.
  Leave approval and merge decisions to the maintainer.

## Acceptance and verification

1. A reader can distinguish what parses, what Toolang validates/evaluates and
   what authors are advised to write. Detailed runtime defaults, model assembly,
   value shapes and style rules are replaced with verified owner links; no
   unique necessary explanation is lost during migration.
2. Every syntax/CST claim matches `grammar.js`, `src/scanner.c`, generated node
   types and existing tests. Reuse `tests/test_documentation_comments.py`,
   `tests/test_binding.py`, `tests/test_flow_syntax.py`,
   `tests/test_flow_upgrade.py`, `tests/test_exec.py` and layout tests as evidence.
   Keep LF/CRLF/EOF, doc-marker literals, keyword prefixes, omitted syntax,
   semantic-invalid-but-parseable input and malformed reserved forms distinct.
3. Complete `.too` examples parse without errors, missing nodes or `invalid_*`
   nodes. Fragments declare their wrapper/context; deliberately invalid samples
   produce the stated parse failure. EBNF/schematic notation is not presented as
   runnable source. Parser checks do not claim runtime validity.
4. Relative and cross-repository links resolve to existing owners and anchors.
   Preserve known links such as `#flow`, `#comments-and-documentation` and
   `#changes-in-033`; check others before moving headings. Retain historical
   plans unchanged and record exact upstream baselines for handoff checks.
5. Run the repository-required checks before each commit:
   `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.
   Run `git diff --check` and confirm generation leaves no tracked parser,
   query, fixture or metadata changes. The implementation diff contains only
   the two scoped guides; the definition diff contains only this plan.

## Risks and open questions

- **Over-trimming:** parser-enforced restrictions can look semantic. Check the
  owning rule/scanner/test before moving a claim; keep CST and recovery detail.
- **Lost content or broken anchors:** verify destinations before deletion and
  retain necessary existing anchors, including links from frozen plans.
- **Version drift:** distinguish a reviewed snapshot from rolling `main` links;
  update only affected evidence after rebasing. A parser release does not prove
  downstream runtime support or website publication.

No open ownership questions. Approval of this plan precedes the guide rewrite;
syntax changes, release work and sibling-repository edits remain separate scope.
