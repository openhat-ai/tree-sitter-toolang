# Grammar documentation cleanup

## Goal and scope

Give parser and language-tool developers a concise reference matching the
current implementation. Rewrite documentation only; preserve parsing behavior.
Baseline: `7477b10`, grammar 0.3.4, verified on 2026-10-04. Reuse existing
findings and inspect only changed or unresolved claims.

## Target layout

Keep **four documentation files**: three at the root and one maintainer guide.

| File | Responsibility | Required improvements |
| --- | --- | --- |
| `README.md` | Entry point for parser users and contributors: purpose, installation/integration and a short development section. | Keep minimal working examples and check commands; link to GRAMMAR, CHANGELOG and publishing guidance. Remove repeated syntax/version summaries and the detailed Publishing section. |
| `GRAMMAR.md` | Current source syntax, layout, public CST and parser compatibility. | Reorganize by syntax family, consolidate shared rules, keep CST fields beside their constructs, and remove detailed runtime semantics and general style advice. |
| `CHANGELOG.md` | User-visible grammar-package changes by release. | Add a concise change record for syntax, public CST, queries, compatibility and important parser/integration fixes; explain breaking changes and migration. |
| `docs/publishing.md` | Release-maintainer instructions. | Extract the current Publishing section: prerequisites, package validation, version/changelog preparation, tag-triggered publication and release verification. Check instructions against the existing release workflow. |

Keep existing `docs/plans/` as clearly labeled design/history records. Add no
index, knowledge base, separate CST catalog or style guide. Keep GRAMMAR at the
root as the core reference; do not add version-specific documentation folders.
README links to the publishing guide without repeating its steps. Use repository
URLs for linked documents not included in published packages.

## GRAMMAR outline and improvements

1. **Scope and notation:** grammar version, source-of-truth files, EBNF notation
   and the distinction between syntax acceptance and runtime validity.
2. **Lexical rules and layout:** names, token boundaries, indentation, comments,
   literal text and recovery. Consolidate repeated boundary explanations.
3. **Declarations and shared forms:** program items, types/signatures, caps/jobs,
   context/instruct, agics/flows and shared directives. Define shared syntax once.
4. **Text and flow statements:** message/prose boundaries, statement forms,
   bindability, named/inline targets, and `from`/`windowing`/`until` placement.
5. **Compatibility:** distinguish currently accepted legacy forms and reserved
   invalid words. Put chronological syntax/CST changes in CHANGELOG.

Use a consistent pattern: **forms → parsing constraints → notable CST fields →
minimal example**. Link to generated node types and existing fixtures/tests for
exhaustive detail. Remove Model Call Assembly, runtime defaults, value shapes,
execution lifecycle, authorization and evaluation guarantees. Keep explanations
needed to understand parsing; do not remove parser-enforced constraints.

## Change record

- Keep `Unreleased` first, followed by actual releases in reverse chronological
  order with `YYYY-MM-DD` dates and verified tag/comparison links. Use only
  nonempty change categories; explain impact and migration for breaking changes.
- Record changes observable by authors and parser consumers. Omit internal-only
  refactors/tests and documentation rewording. Reuse these entries for GitHub
  Release notes instead of maintaining another release-history document.
- GRAMMAR follows the current implementation; Git tags preserve earlier
  references. Backfill only verified release changes from existing notes/history,
  without a full historical audit or invented entries for this docs cleanup.

## Implementation and acceptance

- [ ] Shorten README, reorganize GRAMMAR, add CHANGELOG and extract publishing
  instructions to `docs/publishing.md`. Change no other guide, parser source,
  generated artifact, test, version or release workflow.
- [ ] Verify claims against `grammar.js`, `src/scanner.c`, `src/node-types.json`
  and existing tests. Retain comment/literal boundaries and recovery edge cases.
- [ ] Check complete examples; label fragments, EBNF and intentionally invalid
  samples. Validate links and preserve required existing heading anchors;
  verify every changelog entry against its actual release and evidence. Check
  publishing instructions against `.github/workflows/release.yml`; README links
  must also work from package-registry pages.
- [ ] Run `npm run check`, `.venv/bin/python -m pytest tests`, `cargo test` and
  `git diff --check`. Generated artifacts must remain unchanged.

Main risks: losing parsing constraints during trimming and breaking existing
anchors. This update changes only the plan; approval precedes the guide rewrite.
