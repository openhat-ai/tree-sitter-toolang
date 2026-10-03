# Flow exec grammar

## Goal and scope

Add standalone `exec` statements to Flow and repeat bodies. Exec replaces the
current Run's runnable; the outgoing runnable does not resume. Accept named
runnable and inline agic targets, reusing the target forms supported by `run`.

This repository owns syntax, highlighting, and parser artifacts. Runtime
binding, authorization, Run lifecycle, and `_toolang/exec` belong to Toolang.
The [handoff definition](https://github.com/openhat-ai/toolang/blob/main/docs/plans/flow-exec.md)
and [live-resolution definition](https://github.com/openhat-ai/toolang/pull/674)
own those semantics, including the shared prohibition on calling the current
runnable or an ancestor through run, exec, map, or other call forms. Runtime
checks each branch's active path; the parser does not resolve names, revisions,
or cycles.
Toolang must support inline exec and consume a published grammar package.
Package versioning and publication remain separate concerns.

## Syntax and CST

```too
exec grow
exec: Complete the remaining work.
exec -> Text:
  Complete the remaining work and return the result.
```

- Expose `exec_statement.target` as `runnable` or `inline_agic`.
  Reuse the existing named-runnable and inline-agic rules,
  including inline bodies, indented bodies, and optional return types.
- Keep named targets as unresolved names in the CST. State selection and
  target resolution belong to Toolang runtime. Inline targets are literal code
  from the containing definition, not names to look up in a newer revision.
- Template references inside inline agic text keep their existing meaning.
- Keep exec outside bindable operations. Reject `let exec ...` and
  `let value = exec ...`, including inline forms. Accept no argument lists or
  modifiers; a named target cannot introduce an inline body.
- Reserve the complete `exec` token at Flow statement boundaries. Prefixes
  such as `executor`, `execution`, and `exec_v2` remain text, including after
  `let value =`. Explicit text bodies remain literal. Reuse existing invalid
  statement diagnostics; malformed exec must never become valid prose.

## Implementation touchpoints

- `grammar.js`, `src/scanner.c`: statement alternatives and token boundaries;
  reuse existing layout handling without adding a parser mode.
- `queries/highlights.scm`, `GRAMMAR.md`: keyword captures and syntax reference.
- `test/corpus/`, `tests/fixtures/`, `tests/`, `scripts/check_cli.mjs`: acceptance checks.
- Regenerate `src/{parser.c,grammar.json,node-types.json,keywords.h}` from source.

## Acceptance and risks

1. Match run's named/inline target forms in Flow and every repeat body, including
   typed/untyped inline agics, dedents, comments, and LF/CRLF/EOF. Named agics and
   flows use the same `runnable` node; following statements remain parseable.
   Parse same-name targets normally; runtime rejection is not a syntax error.
2. Invalid targets, bindings, arguments, modifiers, and named-target bodies stay
   invalid. Keyword prefixes and explicit text preserve their prior meaning.
3. Incremental edits across target forms, invalid bindings, text, and indentation
   produce the same node types, fields, ranges, and errors as a fresh parse.
4. CLI parsing and highlighting pass; generated files are reproducible.
   Run `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.

Risks: reserving `exec` changes implicit prose beginning with that token;
consumers must handle the new target union. No open design questions.
