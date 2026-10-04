# Grammar documentation cleanup

## Goal and scope

Give parser and language-tool developers a concise reference matching the
current implementation. Rewrite documentation only; preserve parsing behavior.
Baseline: `7477b10`, grammar 0.3.4, verified on 2026-10-04. Reuse existing
findings and inspect only changed or unresolved claims.

## Target layout

Keep **two current documentation files**:

| File | Responsibility | Required improvements |
| --- | --- | --- |
| `README.md` | Repository entry point: purpose, installation/integration, development and publishing. | Shorten repeated syntax/version summaries; link to GRAMMAR. Clarify authored/generated files, packaged queries and where checks live. Preserve accurate installation and publishing steps. |
| `GRAMMAR.md` | Current source syntax, layout, public CST and parser compatibility. | Reorganize by syntax family, consolidate shared rules, keep CST fields beside their constructs, and remove detailed runtime semantics and general style advice. |

Keep existing `docs/plans/` as clearly labeled design/history records. Add no
index, knowledge base, separate CST catalog or style guide.

## GRAMMAR outline and improvements

1. **Scope and notation:** grammar version, source-of-truth files, EBNF notation
   and the distinction between syntax acceptance and runtime validity.
2. **Lexical rules and layout:** names, token boundaries, indentation, comments,
   literal text and recovery. Consolidate repeated boundary explanations.
3. **Declarations and shared forms:** program items, types/signatures, caps/jobs,
   context/instruct, agics/flows and shared directives. Define shared syntax once.
4. **Text and flow statements:** message/prose boundaries, statement forms,
   bindability, named/inline targets, and `from`/`windowing`/`until` placement.
5. **Compatibility:** distinguish accepted legacy forms, reserved invalid words
   and relevant CST changes. Remove historical narrative from current rules.

Use a consistent pattern: **forms → parsing constraints → notable CST fields →
minimal example**. Link to generated node types and existing fixtures/tests for
exhaustive detail. Remove Model Call Assembly, runtime defaults, value shapes,
execution lifecycle, authorization and evaluation guarantees. Keep explanations
needed to understand parsing; do not remove parser-enforced constraints.

## Implementation and acceptance

- [ ] Reorganize README and GRAMMAR using the layout above; change no other guide,
  parser source, generated artifact, test, version or release workflow.
- [ ] Verify claims against `grammar.js`, `src/scanner.c`, `src/node-types.json`
  and existing tests. Retain comment/literal boundaries and recovery edge cases.
- [ ] Check complete examples; label fragments, EBNF and intentionally invalid
  samples. Validate links and preserve required existing heading anchors.
- [ ] Run `npm run check`, `.venv/bin/python -m pytest tests`, `cargo test` and
  `git diff --check`. Generated artifacts must remain unchanged.

Main risks: losing parsing constraints during trimming and breaking existing
anchors. This update changes only the plan; approval precedes the guide rewrite.
