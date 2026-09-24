# Shared runnable directives and flow syntax

## Goal and scope

Implement the approved flow syntax and one directive contract for agic and flow.
Success means valid source has stable public CST fields, malformed structural
syntax cannot become prose, and Toolang consumes the built parser end to end.
Template lookup semantics and package releases are separate work.

## Decisions

- Q: models/tools/psyches/skills/services/prompts use match union queries with
  `=`, `+=`, `-=`; `none` selects nothing and `*` selects all available resources.
- L: hands/handoffs use CSV runnable references or standalone `none`/`*`.
  Recall uses CSV far/near or standalone `none`/`default`/`*`. Remove recall auto;
  migrate it to `far, near`. L only supports `=`.
- V: lanes uses a positive integer or `default` (4); instruct/context select a
  name, `none`, or `default`. V only supports `=`. No directive has an empty RHS.
- Named prompt declarations define selections; unnamed declarations override
  the module default. Default always exists through the system fallback. Only
  nonexistent explicit names fail resolution. Omission inherits resolved parent
  configuration; roots default. Resource inheritance cannot widen its base.
- Remove scatter's count; retain storm's count. Scatter allows `using name`,
  `using:`, and `:`. Preserve explicit return annotations and omitted signatures.
- Settle allows a trailing `from:` in adhoc and named-reducer blocks. Its public
  `runnable` and `from` fields are separate. Only baseline `from` ends reducer
  text; deeper text stays literal. Settle's history window is fixed at one.
- Repeat accepts `windowing N` before `:`; default 3. Count and until may coexist;
  at least one is required. The body, until, count, and window are flat fields.

## Touchpoints and acceptance

- Update grammar.js, scanner.c, keyword generation, generated parser/node files,
  queries, GRAMMAR.md, corpus, fixtures, and binding tests together.
- Toolang updates lowering, AST, validation, formatting, resource/configuration
  selection, examples, and tests; defaults and type checks remain semantic.
- Cover all Q/L/V operators and values, old syntax rejection, clause ownership,
  nesting, comments, LF/CRLF, tabs, EOF, and incremental/fresh tree equivalence.
- Exercise source-to-execution and formatter round trips with the built parser.
- Verify npm run check, Python binding tests, cargo test, and Toolang's default
  ruff/ty/pytest checks. Keep feature commits free of version bumps; publish and
  update the consumer's released dependency in a separate release step.

## Risks and open questions

Clause boundaries must not consume sibling statements or literal nested text.
CST changes and syntax removal require coordinated consumer and fixture updates.
No open syntax decisions remain.
