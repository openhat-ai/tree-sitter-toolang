# Flexible repeat grammar

Proposed definition; approval is required before implementation. This plan fixes
the syntax/CST contract for Toolang's [approved runtime design](https://github.com/openhat-ai/toolang/blob/fe0e533e978431b38577980e9e4b8c2ff67e2d8c/docs/plans/repeat-until-position.md).
No parser implementation or package release is included.

## Syntax and boundaries

Allow zero or one `until` at any position in a repeat body. Count and condition
are independently optional; at least one ordinary Flow statement is required.
Preserve count spelling (`1 time`, other values `times`), optional `windowing`,
and all existing ordinary Flow statements. Proposed forms:

```text
repeat [N time|times] [windowing P]:
  PREFIX
  [until NAME | until: BODY]
  SUFFIX
```

PREFIX and SUFFIX may be empty individually, but not together. Either may
contain nested repeats, whose conditions belong only to that nested body.

- `until NAME` reuses `runnable` unchanged: an unresolved bare `snake_name`, as
  with `run`. Reject kind- and module-qualified references, including
  `until agic:is_done` and `until checks::is_done`.
- `until: BODY` reuses `inline_agic_body`, including same-line/multiline text
  and templates. No `-> T`, argument lists, modifiers, or named-target bodies.
  Boolean output, name resolution, execution position, history, count/window
  values, and cancellation belong to Toolang validation/runtime.
- Reject empty/condition-only bodies, duplicate direct conditions, conditions
  outside repeats, missing targets/text, and malformed forms such as
  `until using check`, `until check()`, and `until check: text`.
- Language keywords, including reserved legacy words, cannot be variable names
  (`local_name` or `param_name`). Reject `let until = value` and keyword-named
  parameters; remove the existing `spawn` local-name exception. Preserve `_`
  where currently allowed and keyword prefixes such as `until_done`.
- Reject `let until ...` and `let x = until ...`; guard both binding prefixes
  against fallback to text. Literal `until` remains valid inside explicit
  multiline text, messages, and comments.
- Reuse structural indentation and `_until_start` handling. A baseline condition
  ends preceding implicit prose; a baseline statement ends its inline body.
  Deeper text remains literal. Comments/blank lines do not supply a statement
  or change ownership; dedented siblings remain outside the repeat.

## CST contract

| Node | Fields |
| --- | --- |
| `repeat_statement` | Required `body: repeat_body`; existing optional `count` and `window` fields |
| `repeat_body` | Required repeated `statement` fields for ordinary Flow nodes; optional single `until: until_clause` |
| `until_clause` | Required `target: runnable \| inline_agic_body`; retains `flow_until_keyword` as a named child |

The body's statement and condition nodes are direct children in source order,
with ordinary trivia children retaining their existing node types. Add no
`statements` wrappers within `repeat_body`. `until_clause` includes the keyword
and entire target in its source range and is not a general or bindable Flow
statement. Leave top-level `flow_body.statements` unchanged.

Toolang reads `repeat.body.until.target`, collects `repeat.body.statement`
children in order, and counts those preceding the condition to derive
`until_index`. Nested repeats count as one statement; trivia counts as zero.
An absent or trailing condition keeps the existing default index representation.

This replaces the current `repeat.body: statements` and root-level
`repeat.until: inline_agic_body`, including for existing source. Consumers must
adopt the new paths together with the published grammar version; no duplicate
legacy CST aliases. Existing valid source is preserved except keyword-named
variables/parameters, which must be renamed with their references, and same-line
let text beginning with the complete `until` token, which must move to an explicit
multiline text body. This supersedes the local-name compatibility exception in
[the spawn plan](flow-spawn.md). Toolang must retain historical AST decoding
independently.

## Implementation and acceptance

Touchpoints: `grammar.js`, `src/scanner.c`, `GRAMMAR.md`, queries, corpus cases,
fixtures, binding/layout tests, and `scripts/check_cli.mjs`. Regenerate
`src/{parser.c,grammar.json,node-types.json,keywords.h}`. Keep the existing repeat
indent capture without adding a second indentation level for `repeat_body`;
preserve keyword/text highlighting. Version bumps and publication remain separate.

1. Cover leading/middle/trailing inline and named conditions, no condition,
   omitted/zero counts, windows, and nesting. Assert exact field cardinality,
   node types, source ranges/order, and Toolang's derived condition index.
2. Invalid forms above must yield ERROR/MISSING or existing invalid-statement
   diagnostics, never a valid implicit run or let text fallback. Undefined
   runnable names still parse; Toolang owns their rejection. Cover keyword
   locals/parameters, including the former `spawn` exception, valid keyword
   prefixes, and both kinds of qualified reference.
3. Exercise comments, docs, implicit prose, literal keywords, sibling dedents,
   indentation variants, LF/CRLF, and EOF. Incremental moves, insertions,
   deletions, and target-form changes must match fresh-parse fingerprints.
4. Update existing repeat corpus/CST assertions, compile all queries, verify
   CLI parsing/highlighting, and confirm reproducible generated artifacts.
   Run `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.

Risks: public CST migration, text-boundary recovery, and named-let ambiguity.
Success requires the accepted forms, stable ownership, and synchronized consumer
adoption above. No open design alternatives; human approval and release remain
separate decisions.
