# Define Flow Spawn Grammar

Status: Proposed; feature definition only. The human selected no implicit binding
for bare spawn; retaining its handle requires a named let. No grammar or parser
behavior changes in this PR. The complete definition still requires approval.

## Goal and Scope

Add a `spawn` operation with optional named binding to Flow and repeat bodies,
using the named and inline target forms of run. Toolang starts an independent
root; a named let retains its admission handle, while bare spawn discards it.
This repository owns syntax, CST, keyword boundaries, queries,
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
rejects let bindings; run is bindable and `let run R` discards its output.
Collection operations demonstrate reserved
keyword handling on named let right-hand sides. The scanner obtains reserved
words from generated keywords.h. Spawn has no statement or keyword node and can
currently be implicit Flow prose or a let text value. This is a syntax change,
not an alias for an existing operation.

## Syntax and CST

```too
flow launch -> Text:
  let job = spawn investigate
  spawn record_audit
  spawn -> Text:
    Research the request and save the findings.
  run: Independent work has been started.
```

| Form | CST |
| --- | --- |
| `spawn R` | spawn_statement.target is runnable |
| `spawn: BODY` | spawn_statement.target is inline_agic |
| `spawn -> T: BODY` | Same inline_agic, with its existing return field |
| `let job = spawn ...` | let_statement.name is job; statement is spawn_statement |
| `let spawn ...` | let_statement.statement is spawn_statement, with no name |

Bare spawn is the standard unbound form: it preserves `_` and all other locals.
Only `let job = spawn ...` retains a handle for later use or future await support.
Retain `let spawn ...` as an equivalent explicit discard, following the existing
nameless let rule; it is unnecessary for ordinary examples. Both unbound forms
format canonically as bare spawn. No separate discard token or CST field is needed.

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
  runtime must lower it with no binding, not the ordinary run default `_`.
  Do not support nested statement expressions or change existing local-name syntax.
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

On a named let's same-line right-hand side, recognizing the complete lowercase
`spawn` token commits to operation parsing, even when the remaining syntax is
invalid. For example, `let text = spawn a process` is a malformed spawn invocation
(`process` is an extra token), not a literal assignment. Report that syntax error
without retrying the text alternative. A syntactically valid `spawn missing_name`
still leaves runnable resolution to Toolang validation.

Reject spawn with a missing target/body; `spawn using R`; `spawn using: BODY`;
`spawn R: BODY`; `spawn R(...)`; `spawn R -> T`; and lane/count/async modifiers
after spawn. Apply the same rules after `let` and `let name =`. A valid named
target may not acquire a second target or inline body.

Keep prefixes such as `spawned`, `spawner`, and `spawn_task` as ordinary text,
including after `let name =`. Keep spawn literal inside explicit text bodies,
Agic messages, comments, and templates. Do not reserve async/await/all or change
their existing prose behavior in this PR; `async spawn ...` is not a spawn
operation. Later async/await work owns those keyword boundaries.

Authoring advice (non-normative): this reservation affects prose starting with
lowercase spawn. A user intending literal text could use an existing indented
block or choose capitalized wording, for example:

```too
let text =
  spawn a process

let text = Spawn a process
```

These are writing suggestions using existing text syntax, not new grammar forms,
acceptance requirements, or additional formatter behavior for this feature.

## Runtime Adoption Boundary

The consuming Toolang PR must lower bare and nameless-let SpawnStmt with
binding=None, and named-let SpawnStmt with the authored local name. Infer the
retained handle independently of inline target type; keep durable receipts even
when unbound. Cover canonical formatting, descriptions, diagnostics, and prepared
cache compatibility. Agic launches through a runtime tool and needs no new Agic
grammar or directive.

This follows the future-producing launch rule: spawn and later async run retain
their handles only through an explicit named let. Ordinary synchronous run keeps
its `_` default. No implicit handle is available for later await when discarded;
await syntax and value typing remain outside this grammar PR.

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
   comments, adjacent statements, dedents, and LF/CRLF/EOF. Verify the consuming
   runtime preserves all locals for bare/nameless-let spawn, binds only the named
   local for named let, and canonically formats both unbound forms as bare spawn.
2. Reject every malformed/reserved form above in all three bindings, including
   `let text = spawn a process`, named-let text fallback, and partial edits.
   Keep keyword prefixes and explicit text/Agic bodies literal.
   Undefined/same-name targets still parse normally.
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
