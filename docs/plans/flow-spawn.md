# Define Flow Spawn Grammar

Status: Proposed; feature definition only. No grammar or parser behavior changes
in this PR. The complete definition requires human approval before implementation.

## Goal and Scope

Add a bindable `spawn` operation to Flow and repeat bodies, using the named and
inline target forms of run. Toolang will start an independent root and return an
admission receipt. This repository owns syntax, CST, keyword boundaries, queries,
fixtures, and generated artifacts. The
[runtime definition](https://github.com/openhat-ai/toolang/pull/687) owns Flow and
Agic execution, inputs, receipts, authorization, controls, and lifecycle.

Exclude async/await syntax, Future types, thread-selection syntax, new directives,
runtime tool arguments, and execution behavior. The runtime definition chooses a
new empty thread; thread creation and executor/run lifetimes are not parser rules.
Spawn requires neither async-run nor await-block grammar.
Package versioning/publication remains a separate PR after implementation.

## Verified Baseline

Current main has run and exec named/inline forms. Exec exposes a target union and
rejects let bindings; run is bindable. Collection operations demonstrate reserved
keyword handling on named let right-hand sides. The scanner obtains reserved
words from generated keywords.h. Spawn has no statement or keyword node and can
currently be implicit Flow prose or a let text value. This is a syntax change,
not an alias for an existing operation.

## Syntax and CST

```too
flow launch -> Json:
  let job = spawn investigate
  let spawn record_audit
  spawn -> Text:
    Research the request and save the findings.
```

| Form | CST |
| --- | --- |
| `spawn R` | spawn_statement.target is runnable |
| `spawn: BODY` | spawn_statement.target is inline_agic |
| `spawn -> T: BODY` | Same inline_agic, with its existing return field |
| `let job = spawn ...` | let_statement.name is job; statement is spawn_statement |
| `let spawn ...` | let_statement.statement is spawn_statement, with no name |

- Introduce `spawn_statement` with one required `target` field, union
  `runnable | inline_agic`, and a named `flow_spawn_keyword` node. Match exec's
  target field rather than run's historical runnable/agic field split.
- Reuse the current runnable rule unchanged: a bare unresolved snake_name. The
  parser does not distinguish named Agic and Flow targets or add qualified names.
  Model tool reference syntax belongs to Toolang runtime, not this rule.
- Reuse inline_agic unchanged, including one-line/indented bodies, optional
  `-> T`, template references, text layout, and existing type syntax. An inline
  annotation describes the target's eventual output, not the receipt type.
- Add spawn to unbound and bindable operation alternatives. Use existing let
  wrappers with no new fields. A bare statement has no explicit binding node;
  runtime decides the default binding. Do not support nested statement expressions.
- Permit it wherever current bindable operations are accepted in a Flow or
  repeat body. Preserve repeat conditions, dedents, following statements, comments,
  and LF/CRLF/EOF behavior. The inline body is Agic text, not a nested Flow block.
- Syntax resolution ends at the CST. Undefined names, same-name/ancestor calls,
  inputs, receipt Json typing, and target contracts belong to Toolang validation.
  No Future token, generic type syntax, or await operator is introduced here.

## Reservation and Invalid Forms

Reserve the complete `spawn` token at Flow statement boundaries and after both
let binding prefixes. Malformed spawn must produce ERROR/MISSING or the existing
invalid_flow_reserved_statement diagnostic; it must not fall back to a valid
implicit_run_statement or let text value. Cover the named-let ambiguity using
the existing guarded bound-operation pattern and generated keyword lists.

Reject spawn with a missing target/body; `spawn using R`; `spawn using: BODY`;
`spawn R: BODY`; `spawn R(...)`; `spawn R -> T`; and lane/count/async modifiers
after spawn. Apply the same rules after `let` and `let name =`. A valid named
target may not acquire a second target or inline body.

Keep prefixes such as `spawned`, `spawner`, and `spawn_task` as ordinary text,
including after `let name =`. Keep spawn literal inside explicit text bodies,
Agic messages, comments, and templates. Do not reserve async/await/all or change
their existing prose behavior in this PR; `async spawn ...` is not a spawn
operation. Later async/await work owns those keyword boundaries.

This reservation breaks implicit prose starting with the complete spawn keyword.
Use `run: spawn a process` for an implicit-run prompt. Preserve a literal let
value by moving it into the existing indented text form:

```too
let text =
  spawn a process
```

## Runtime Adoption Boundary

The consuming Toolang PR must lower SpawnStmt, infer receipt output independently
of inline target type, implement default/named/discard bindings, and cover
format/description/diagnostics and prepared-cache compatibility. Agic launches
through a runtime tool and needs no new Agic grammar or directive.

Grammar acceptance alone does not implement execution. Publish a grammar version
before Toolang pins/consumes it, and coordinate downstream syntax documentation
and highlighting. Do not implement async/await or expose Python task handles as
a consequence of parsing spawn.

## Implementation Touchpoints

- `grammar.js`: spawn rule, target field, keyword, bindable alternatives, and
  reserved let boundaries.
- `src/scanner.c`, `scripts/generate_keywords.mjs`: reuse existing layout and
  keyword machinery; add only any binding-boundary guard needed for spawn.
- `queries/highlights.scm`, other queries matching statement kinds, and
  `GRAMMAR.md`: keyword capture, operation reference, and CST contract.
- `test/corpus/`, `tests/fixtures/`, `tests/`, `scripts/check_cli.mjs`: complete
  source, invalid forms, field assertions, CLI, and incremental coverage.
- Regenerate `src/{parser.c,grammar.json,node-types.json,keywords.h}`; never edit
  generated artifacts by hand. Keep package versions unchanged in the feature PR.

## Acceptance Tests

1. Parse all three binding forms across named, untyped inline, and typed inline
   targets in Flow and repeat bodies. Assert exact node/field shapes and no
   implicit-text fallback. Include one-line and multiline bodies, templates,
   comments, adjacent statements, dedents, and LF/CRLF/EOF.
2. Reject every malformed/reserved form above in all three bindings, including
   named-let text fallback and partial edits. Keep keyword prefixes and explicit
   text/Agic bodies literal. Undefined/same-name targets still parse normally.
3. Fresh and incremental parsing must agree on node kinds, fields, ranges, and
   errors when switching run/spawn, target forms, bindings, indentation, malformed
   syntax, and prose. Highlight only real spawn keywords.
4. Existing run/exec/collection/repeat and let corpus behavior stays unchanged.
   Inspect generated node-types and package bindings; generated files reproduce.
   Run `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.

## Risks and Approval

Main risks are let-expression fallback hiding syntax errors, keyword reservation
changing prose, and consumers confusing the target's output with the receipt.
Keep those boundaries explicit in corpus tests and the runtime adoption contract.
No unresolved design question remains within this proposed syntax scope; human
approval is still required before implementation.
