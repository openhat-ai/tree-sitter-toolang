# Define Readable Flow Statements

## Status

Proposed for human confirmation. This plan defines grammar behavior only and
does not approve implementation.

## Goal

Make flow statements read like short English commands while keeping their
Tree-sitter structure deterministic. A statement consists of a verb followed
by complements that complete the command.

## Terminology

This plan uses the following terms throughout:

- **statement**: one executable flow instruction;
- **verb**: the leading operation keyword, represented by the `*_statement`
  node type;
- **complement**: one complete syntax unit after the verb;
- **positional complement**: an unmarked complement fixed immediately after
  the verb;
- **marked complement**: a complement introduced by `in`, `using`, `if`, or
  `by`; and
- **field**: the public CST field that exposes a complement value.

## Success Criteria

- `using`, `if`, and `by` identify the role of a named or inline runnable.
- `in N lane|lanes` expresses bounded concurrency instead of `par N`.
- `sort ascending|descending` replaces `rank`; selection remains a separate
  `keep` or `drop` statement.
- Counted repetition reads as `repeat N time|times:`.
- Positional complements follow the verb; marked complements may be reordered.
- Public CST nodes remain flat: the statement type identifies the verb and
  fields expose its complements.
- Implicit prose and explicit statements have deterministic, visually clear
  boundaries.
- Invalid and legacy forms do not silently fall back to implicit runs at a
  statement boundary.

## Scope

In scope:

- surface syntax and public CST fields for `scatter`, `storm`, `gather`,
  `settle`, `map`, `keep`, `drop`, `sort`, and counted `repeat`;
- named and inline runnable complements, lane limits, ordering, positional
  selection, and singular or plural units;
- the boundary between implicit runs and explicit flow statements; and
- grammar documentation, generated artifacts, queries, fixtures, corpus cases,
  and Python/Rust binding coverage for these changes.

Out of scope:

- surface syntax for `run`, `seek`, `ask`, `until`, uncounted `repeat`, `let`,
  and other unchanged statements;
- top-level `value` declarations and all supported type syntax for `value` or
  `let`;
- local, statement, or context variable interpolation;
- runtime execution, semantic type enforcement, and changes in the `toolang`
  repository;
- compatibility aliases and a package version bump.

Existing `let name = flow_operation` composition must continue to accept the
changed operations, but this does not change `let` syntax or its CST contract.

## Current Behavior

Named runnables currently follow operation keywords without a marker. Bounded
concurrency uses `par N`, complement order is fixed, and inline filters and
scorers have no marker. `rank` combines scoring, descending ordering, and
optional `top` or `bottom` selection. Counted repetition omits its unit.

```too
storm 8 generate_proposal par 4
map review_plan par 4
keep is_actionable par 4
rank priority_score top 5 par 4
repeat 3:
  run improve
```

The current CST exposes simple values as statement fields but wraps `par`,
position, and rank selection in public `*_clause` nodes. Named and inline
runnables use separate `runnable` and `agic` fields.

## Decisions

### Complement order

- A positional complement has no marker and must immediately follow the verb.
- A marked complement begins with `in`, `using`, `if`, or `by`.
- Marked complements may appear in any valid order after positional
  complements.
- Each required complement appears exactly once; each optional complement
  appears at most once.
- The words within a complement remain adjacent and use whitespace without
  commas.
- A complement containing an inline agic is final because its body consumes
  the rest of the statement.

The canonical documentation order is verb, positional complement, lanes, then
runnable. Other orders of marked complements remain valid for named runnables:

```too
storm 8 in 4 lanes using generate
storm 8 using generate in 4 lanes
```

Moving a positional complement is invalid:

```too
storm in 4 lanes 8 using generate
sort by priority_score descending
```

Keywords are lowercase and case-sensitive. `using` has no `with` alias, and
statement headers do not accept trailing prose punctuation.

### Runnable markers

| Marker | Use | Expected result |
| --- | --- | --- |
| `using` | Operation-specific runnable | Determined by the verb |
| `if` | `keep` or `drop` predicate | `Boolean` |
| `by` | `sort` scorer | `Number` |

Each marker is immediately followed by a named runnable or inline agic. The
grammar does not accept an expression, field name, or interpolated selector in
that position.

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

Inline forms use the same marker and may omit types that their context or
Toolang defaults determine:

```too
map in 4 lanes using:
  Summarize the current item.

keep in 4 lanes if:
  Return true when the current item is actionable.

sort descending in 4 lanes by:
  Score the current item by priority.
```

Explicit type annotations remain valid. Semantic validation of return types is
owned by the consuming Toolang implementation. Authoring recommendations live
in [Toolang Authoring Conventions](toolang-authoring-conventions.md).

### Statement forms

| Verb | Positional complement | Required marked complement | Optional marked complement |
| --- | --- | --- | --- |
| `scatter` | count | `using` | none |
| `storm` | count | `using` | `in N lane|lanes` |
| `gather` | none | `using` | none |
| `settle` | none | `using` | none |
| `map` | none | `using` | `in N lane|lanes` |
| predicate `keep` / `drop` | none | `if` | `in N lane|lanes` |
| positional `keep` / `drop` | `first N` or `last N` | none | none |
| `sort` | `ascending` or `descending` | `by` | `in N lane|lanes` |
| counted `repeat` | `N time|times` | none | none |

`map` is the complete verb; `map each` is explanatory prose, not an alias.

`sort` always requires an explicit order and only orders its input. Selection
is expressed by a following statement:

```too
sort descending in 4 lanes by priority_score
keep first 3
```

`rank`, `par`, `top`, and `bottom` are removed from valid operation syntax.
Relevant legacy statement starters remain reserved-invalid so old source cannot
be reinterpreted as implicit prose at a statement boundary.

### Singular and plural units

Literal `1` requires a singular unit. Every other integer literal requires a
plural unit.

| Form | Result |
| --- | --- |
| `in 1 lane` | valid |
| `in 1 lanes` | invalid |
| `in 2 lane` | invalid |
| `in 2 lanes` | valid |
| `repeat 1 time:` | valid |
| `repeat 1 times:` | invalid |
| `repeat 0 times:` | valid |
| `repeat 5 times:` | valid |

The public value remains an `integer_literal`. Hidden lexical rules may
distinguish numeric one from other integers and alias both forms back to that
node. Whether zero lanes is executable is semantic validation outside this
grammar plan.

Future non-literal counts use the plural unit, but non-literal count syntax is
outside this scope.

### Implicit run boundaries

Capitalization does not determine whether text is an implicit run. At a flow
statement boundary, a lowercase flow statement keyword starts an explicit
statement; malformed reserved forms are invalid instead of falling back to
text.

Once an implicit run begins:

- every adjacent nonblank text line remains part of it, even when a continuation
  line begins with a lowercase flow verb;
- one blank line followed by a lowercase flow verb ends the implicit run and
  starts an explicit statement;
- one blank line followed by other text remains inside the implicit run;
- two consecutive blank lines end the implicit run unconditionally; and
- a comment, the end of the flow body, or the end of the file ends it.

```too
flow example:
  Review the findings
  sort them by relevance.

  sort descending by relevance
```

The first `sort` line is prose because it is adjacent to the preceding text.
The second starts `sort_statement` because a blank line precedes it.

Complement markers such as `in`, `using`, `if`, and `by` are not statement
starters and remain valid words in implicit prose.

Capitalization and punctuation are not implicit-run parser requirements.
Authoring guidance is defined in
[Toolang Authoring Conventions](toolang-authoring-conventions.md).

### Public CST contract

Do not add public nodes for marker phrases. The statement node identifies the
verb, keyword children preserve source markers, and fields expose complement
values directly. A composite complement value may still use its own value node,
as `position` does for positional selection.

| Statement | Public complement fields |
| --- | --- |
| `scatter_statement` | `count`, `runnable` |
| `storm_statement` | `count`, optional `lanes`, `runnable` |
| `gather_statement` | `runnable` |
| `settle_statement` | `runnable` |
| `map_statement` | optional `lanes`, `runnable` |
| predicate `keep_statement` / `drop_statement` | optional `lanes`, `runnable` |
| positional `keep_statement` / `drop_statement` | `selection` |
| `sort_statement` | `order`, optional `lanes`, `runnable` |
| `repeat_statement` | optional `count`, `body` |

The `runnable` field accepts either a named `runnable` node or an `inline_agic`
node. Remove the separate statement-level `agic` field for these forms.

The `selection` field points to a `position` node that preserves `side` as
`first` or `last` and its unsigned `count`. A semantic consumer may lower
`first N` to `+N` and `last N` to `-N`; the CST does not synthesize signs that
are absent from the source.

```text
(keep_statement
  selection: (position
    side: (flow_first_keyword)
    count: (integer_literal)))
```

Replace `rank_statement` with `sort_statement`. Remove `par_clause`,
`rank_selection_clause`, and `position_clause`; use the flat `lanes` field and
the `selection: (position)` field instead. Counted `repeat` keeps its `count`
and `body` fields and adds the matching `time` or `times` keyword child.

Define and highlight keyword nodes for `using`, `if`, `by`, `in`, `lane`,
`lanes`, `sort`, `ascending`, `descending`, `time`, and `times`. CST child order
preserves authored complement order.

## Implementation Touchpoints

- Update authored rules, permutation helpers, unit tokens, and
  implicit-run boundary handling in `grammar.js`.
- Regenerate `src/grammar.json`, `src/node-types.json`, and `src/parser.c` with
  `npm run generate`.
- Update `GRAMMAR.md` with the new surface, boundary rules, and CST contract.
- Update keyword captures in `queries/highlights.scm`; change other queries only
  when generated node changes require it.
- Replace flow examples in `tests/fixtures/flows.too` and add representative
  valid and invalid trees in `test/corpus/source_file.txt`.
- Update `tests/test_flow_syntax.py` and affected binding assertions for flat
  fields, order rules, unit agreement, implicit-run boundaries, and rejected
  legacy syntax.

## Acceptance Tests

1. Parse named and inline runnable forms for every changed statement.
2. Require positional complements immediately after their verbs.
3. Parse every marked-complement permutation for named `storm`, `map`,
   predicate `keep`/`drop`, and `sort`; reject duplicates and conflicts.
4. Require a complement containing an inline agic to be final.
5. Accept only matching literal unit forms: `1 lane`, `N lanes`, `1 time`, and
   `N times`, where plural `N` is any integer other than one.
6. Parse `repeat N time|times:` with stable `count` and `body` fields; preserve
   the existing uncounted repeat form.
7. Keep adjacent lowercase verb lines inside implicit prose, start explicit
   statements after the required blank boundary, and split implicit runs after
   two blank lines or comments.
8. Reject missing runnable complements, commas, split complements, unsupported
   lane limits, trailing punctuation on named or positional statement headers,
   and old `par`, `rank`, `top`, or `bottom` forms at statement boundaries.
9. Assert the flat fields in the CST table for named and inline forms, including
   `let`-wrapped changed operations.
10. Confirm new keyword highlights and successful parsing of complete fixtures
    through the Python binding.
11. Run `npm run check`, `.venv/bin/python -m pytest tests`, and `cargo test`.

## Risks

- Order-independent marked complements require explicit finite alternatives to
  reject duplicates without adding ambiguous repetitions.
- Inline agics and implicit prose both consume remaining text; final-position
  and blank-boundary rules must be covered directly in corpus trees.
- Strict literal unit agreement needs hidden tokens without changing the public
  `integer_literal` node.
- Removed syntax could fall through to implicit runs unless statement-boundary
  reserved handling is comprehensive.
- Flat fields and renamed nodes change the public CST, so downstream lowering
  must upgrade with the grammar version in a separate repository change.
- Generated parser diffs are large; review authored grammar, node types, corpus
  trees, and tests before generated `parser.c`.

## Open Questions

None. Human confirmation of this plan is required before implementation.
