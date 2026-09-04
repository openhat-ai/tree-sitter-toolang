# Define Readable Flow Statements

## Status

Proposed for human confirmation. This plan defines grammar behavior only and
does not approve implementation.

## Goal

Make collection-oriented flow statements read like short English commands
while keeping their Tree-sitter structure deterministic. Use a verb Head first,
followed by recognizable Dependents whose order may vary.

## Success Criteria

- Collection statements use `using`, `if`, and `by` to identify runnable roles.
- `in P lanes` expresses bounded concurrency instead of `par P`.
- `sort ascending|descending` replaces `rank` and composes with `keep` for
  selection.
- The Head always comes first; non-inline Dependents can follow in any order.
- An inline agic is always the final Dependent.
- Duplicate, conflicting, incomplete, and legacy clause forms do not parse as
  valid flow statements or fall back to implicit runs.
- Grammar documentation, queries, generated artifacts, corpus cases, fixtures,
  and Python/Rust binding tests remain aligned.

## Scope

In scope:

- `scatter`, `storm`, `gather`, `settle`, `map`, `keep`, `drop`, and sorting;
- runnable connectors, concurrency wording, direction wording, and Dependent
  ordering;
- named and inline runnable forms; and
- the public CST nodes and query captures for those forms.

Out of scope:

- `run`, `seek`, `ask`, `repeat`, `until`, `let`, and implicit-run wording;
- top-level `value` declarations, typed local assignment, or reassignment;
- local, statement, or context variable interpolation;
- runtime semantics, type enforcement, and changes in the `toolang` repository;
- compatibility aliases and a package version bump.

## Current Behavior

The grammar places a named runnable directly after the operation, uses `par P`,
and fixes clause order. Inline filter and scorer bodies have no connector.
`rank` combines scoring, sorting, and optional `top`/`bottom` selection.

Examples of current syntax are:

```too
storm 3 sample_direction par 2
map extract_note par 5
keep useful par 5
rank relevance top 5 par 5
```

## Decisions

### Head and Dependents

The operation keyword is the **Head**. Every complete group after it is a
**Dependent**. Documentation and node descriptions use only these two terms.

- The Head is first and indivisible.
- Dependents may be reordered; words inside one Dependent stay together.
- Each required Dependent appears exactly once. Optional Dependents appear at
  most once.
- Conflicting sort directions are invalid.
- Groups use whitespace, without header commas.
- A Dependent containing an inline agic is final because its body consumes the
  remainder of the statement.

The canonical documentation order is Head, count/direction, concurrency, then
runnable. The parser also accepts other valid group orders, and the CST
preserves authored order so formatters can do the same.

Keywords are lowercase and case-sensitive. `using` has no `with` alias.

### Runnable Connectors

| Connector | Role | Runnable result expected by the consumer |
| --- | --- | --- |
| `using` | Collection processing | Operation-specific output |
| `if` | Keep/drop predicate | `Boolean` |
| `by` | Sort score | `Number` |

Every connector is immediately followed by a named runnable or an inline agic.
The grammar does not accept an expression, field name, or interpolated runnable
selector in that position. Semantic return-type validation remains owned by
the consuming Toolang implementation.

```too
scatter 8 using generate_proposals
storm 8 in 4 lanes using generate_proposal
gather using write_report
settle using merge_next
map in 4 lanes using review_plan
keep in 4 lanes if is_actionable
drop if is_duplicate in 4 lanes
sort descending in 4 lanes by priority_score
```

Inline forms keep the same connector:

```too
map in 4 lanes using -> Text:
  Summarize the current plan in one paragraph.

keep in 4 lanes if -> Boolean:
  Return true when the current finding is actionable.

sort descending in 4 lanes by -> Number:
  Score the current finding from 0 to 10.
```

### Operation Forms

The following groups are required or optional after each Head. Their order is
otherwise free under the inline-final rule.

| Head | Required Dependents | Optional Dependents |
| --- | --- | --- |
| `scatter` | count, `using` | none |
| `storm` | count, `using` | `in P lanes` |
| `gather` | `using` | none |
| `settle` | `using` | none |
| `map` | `using` | `in P lanes` |
| `keep` / `drop` positional | `first N` or `last N` | none |
| `keep` / `drop` predicate | `if` | `in P lanes` |
| `sort` | `ascending` or `descending`, `by` | `in P lanes` |

Use `map` as the complete Head; `map each` is explanatory prose, not an alias.
Only plural `lanes` is accepted so grammar validity does not depend on a
runtime value.

`sort` always requires an explicit direction. It performs only ordering at the
syntax level. Selection is a separate statement:

```too
sort descending in 4 lanes by priority_score
keep first 3
```

`rank`, `par`, `top`, and `bottom` are removed from valid operation syntax.
The relevant legacy keywords remain reserved-invalid so old source cannot be
reinterpreted as implicit run text.

### CST Contract

Add named clause nodes `using_clause`, `if_clause`, `by_clause`, and
`lanes_clause`. Each runnable clause exposes either a `runnable` or `agic`
field. `lanes_clause` exposes `limit`. Add `sort_statement` with a required
`direction` field and a `by_clause`.

Keep existing statement node names for the other operations and retain
`position_clause`. Replace `rank_statement` with `sort_statement` and
`par_clause` with `lanes_clause`; do not add alias nodes for the old names.

Define keyword nodes for `using`, `if`, `by`, `in`, `lanes`, `sort`,
`ascending`, and `descending`, and highlight them as keywords. Explicitly
enumerate valid Dependent permutations rather than accepting an unrestricted
repetition that permits duplicates.

## Implementation Touchpoints

- Update authored rules and reserved-word handling in `grammar.js`.
- Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c` with
  `npm run generate`.
- Update `GRAMMAR.md` with the new surface and CST contract.
- Update keyword captures in `queries/highlights.scm`; change other queries only
  if generated node changes require it.
- Replace flow examples in `tests/fixtures/flows.too` and add representative
  valid and invalid trees in `test/corpus/source_file.txt`.
- Update `tests/test_flow_syntax.py` and affected binding assertions for clause
  nodes, permutations, inline-final behavior, and rejected legacy syntax.

## Acceptance Tests

1. Parse named and inline forms for every operation in the table without error.
2. Parse every permutation of named Dependents for `storm`, predicate
   `keep`/`drop`, and `sort`; preserve the authored group order in the CST.
3. Verify inline `using`, `if`, and `by` only in final position.
4. Reject missing runnable clauses, duplicate groups, two directions, split
   multiword groups, commas between groups, and concurrency on one-run or
   sequential operations.
5. Reject old source forms containing `par`, `rank`, `top`, or `bottom` without
   converting the statement to `implicit_run_statement`.
6. Assert stable public fields for named/inline runnable clauses, lane limits,
   sort direction, positional selection, and `let`-wrapped operations.
7. Confirm new keyword highlights and successful parsing of every complete
   fixture through the Python binding.
8. Run `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.

## Risks

- Order-independent groups can create ambiguity with inline text; explicit
  permutations and the inline-final rule contain it.
- Removed syntax could otherwise fall through to implicit runs; reserved-invalid
  coverage is required for migration safety.
- Clause nodes change the public CST shape, so downstream lowering must upgrade
  with the grammar version in a separate repository change.
- Generated parser diffs are large; review authored grammar, node types, corpus
  trees, and tests before generated `parser.c`.

## Open Questions

None. Human confirmation of this plan is required before implementation.
