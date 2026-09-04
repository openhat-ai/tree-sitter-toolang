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
- **marked complement**: a complement introduced by `in`, `using`, `if`, `by`,
  or `until`; and
- **field**: the public CST field that exposes a complement value.

## Success Criteria

- `using`, `if`, and `by` identify the role of a named or inline runnable.
- `in N lane|lanes` expresses bounded concurrency instead of `par N`.
- `sort ascending|descending` replaces `rank`; selection remains a separate
  `keep` or `drop` statement.
- Counted repetition reads as `repeat N time|times:`.
- Positional complements follow the verb; lane and named-runnable complements
  may be reordered where the statement grammar permits them.
- Public CST nodes remain flat: the statement type identifies the verb and
  fields expose its complements.
- Implicit prose and explicit statements have deterministic, visually clear
  boundaries.
- Invalid and legacy forms do not silently fall back to implicit runs at a
  statement boundary.

## Scope

In scope:

- surface syntax and public CST fields for `scatter`, `storm`, `gather`,
  `settle`, `map`, `keep`, `drop`, `sort`, and counted `repeat`, plus public CST
  fields for both repeat forms;
- named and inline runnable complements, lane limits, ordering, positional
  selection, and singular or plural units;
- the boundary between implicit runs and explicit flow statements; and
- grammar documentation, generated artifacts, queries, fixtures, corpus cases,
  and Python/Rust binding coverage for these changes.

Out of scope:

- new surface forms for `run`, `seek`, `ask`, `until`, uncounted `repeat`,
  `let`, and other unchanged statements;
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
runnables use separate `runnable` and `agic` fields. A repeat's final `until`
runnable is nested inside its `body` rather than exposed by `repeat_statement`:

```text
(repeat_statement
  count: (integer_literal)
  body: (repeat_body
    (statements ...)
    (until_statement
      agic: (inline_agic_body ...))))
```

## Decisions

### Grammar notation

The EBNF below is normative for the changed surface syntax. Quoted terminals
are exact and case-sensitive. Rules prefixed with `_` are grammar helpers and
must not create public CST nodes. `line_end`, `runnable`, `inline_agic`,
`inline_agic_body`, and `flow_statement` retain their existing meanings unless
a rule below states otherwise.

```ebnf
_one_integer_literal   ::= an integer literal whose numeric value is 1
_other_integer_literal ::= an integer literal whose numeric value is not 1

_lanes_complement ::= "in" _one_integer_literal "lane"
                    | "in" _other_integer_literal "lanes"

_repeat_count_complement ::= _one_integer_literal "time"
                           | _other_integer_literal "times"

position          ::= ("first" | "last") integer_literal
_order_complement ::= "ascending" | "descending"
```

Both integer alternatives produce the public `integer_literal` node. Hidden
lexical rules may distinguish them before aliasing them to that node. `in 0
lanes` is grammatical; whether it is executable belongs to semantic validation.
Non-literal counts remain outside this plan.

### Runnable complements

```ebnf
_named_using_complement  ::= "using" runnable
_inline_using_complement ::= "using" inline_agic
_named_if_complement     ::= "if" runnable
_inline_if_complement    ::= "if" inline_agic
_named_by_complement     ::= "by" runnable
_inline_by_complement    ::= "by" inline_agic

_using_complements ::= _named_using_complement line_end
                     | _lanes_complement _named_using_complement line_end
                     | _named_using_complement _lanes_complement line_end
                     | _inline_using_complement
                     | _lanes_complement _inline_using_complement

_if_complements ::= _named_if_complement line_end
                  | _lanes_complement _named_if_complement line_end
                  | _named_if_complement _lanes_complement line_end
                  | _inline_if_complement
                  | _lanes_complement _inline_if_complement

_by_complements ::= _named_by_complement line_end
                  | _lanes_complement _named_by_complement line_end
                  | _named_by_complement _lanes_complement line_end
                  | _inline_by_complement
                  | _lanes_complement _inline_by_complement
```

These finite alternatives make each complement unique, allow the lane and
named-runnable complements in either order, and force an inline agic to be
final. A marker is adjacent to its runnable. No alternative admits commas,
`with`, an expression, a field name, or an interpolated selector.

The result of `if` is `Boolean`, the result of `by` is `Number`, and the result
of `using` is determined by its verb. Explicit matching type annotations remain
valid. Semantic validation belongs to the consuming Toolang implementation.
Authoring recommendations live in
[Toolang Authoring Conventions](toolang-authoring-conventions.md).

### Flow statement grammar

```ebnf
scatter_statement ::= "scatter" integer_literal
                      (_named_using_complement line_end
                      | _inline_using_complement)

storm_statement ::= "storm" integer_literal _using_complements

gather_statement ::= "gather" (_named_using_complement line_end
                               | _inline_using_complement)

settle_statement ::= "settle" (_named_using_complement line_end
                               | _inline_using_complement)

map_statement ::= "map" _using_complements

keep_statement ::= "keep" position line_end
                 | "keep" _if_complements

drop_statement ::= "drop" position line_end
                 | "drop" _if_complements

sort_statement ::= "sort" order_complement _by_complements

repeat_statement ::= "repeat" _repeat_count_complement ":" line_end
                     statements _until_complement?
                   | "repeat" ":" line_end
                     statements _until_complement

_until_complement ::= "until" inline_agic_body
```

The grammar fixes every positional complement immediately after its verb. It
allows marked lane and named-runnable complements to change order only through
the finite alternatives above. The canonical authored order is verb,
positional complement, lanes, then runnable.

The two `repeat_statement` alternatives require at least one of the `count` or
`until` complements. The body is always required. `until` keeps its existing
surface form but becomes a direct complement of `repeat_statement` in the CST.

```too
scatter 8 using generate_proposals
storm 8 in 4 lanes using generate_proposal
storm 8 using generate_proposal in 4 lanes
gather using write_report
settle using merge_next
map in 4 lanes using review_plan
keep in 4 lanes if is_actionable
drop if is_duplicate in 4 lanes
sort descending in 4 lanes by priority_score
repeat 3 times:
  run improve

repeat:
  run improve
  until:
    Return true when the result is ready.
```

The following forms do not match the grammar because they move a positional
complement or use an unsupported marker:

```too
storm in 4 lanes 8 using generate
sort by priority_score descending
map in 4 lanes with review_plan
```

`map` is the complete verb; `map each` is not an alias. `sort` requires an
explicit order and only orders its input. Selection composes as a following
statement:

```too
sort descending in 4 lanes by priority_score
keep first 3
```

`rank`, `par`, `top`, and `bottom` are removed from operation syntax and remain
reserved-invalid at statement boundaries. This prevents legacy source from
being reinterpreted as implicit prose. A named or positional statement header
must match `line_end` immediately after its final complement, so trailing prose
punctuation is invalid.

### Implicit run grammar

```ebnf
_active_statement_keyword ::= "let" | "run" | "seek" | "ask" | "scatter"
                            | "storm" | "gather" | "settle" | "map" | "keep"
                            | "drop" | "sort" | "repeat"

_reserved_statement_keyword ::= "rank" | "par" | "top" | "bottom"
                              | "think" | "use"

_statement_boundary_keyword ::= _active_statement_keyword
                              | _reserved_statement_keyword

_repeat_until_start ::= "until" ":"

implicit_run_statement ::= implicit_paragraph
                           (blank_line implicit_paragraph)*
                           blank_line?

implicit_paragraph ::= implicit_initial_line implicit_continuation_line*

implicit_initial_line ::= a nonblank flow text line that does not begin with
                          _statement_boundary_keyword as a complete word and,
                          within a repeat body, does not begin with
                          _repeat_until_start

implicit_continuation_line ::= any nonblank flow text line
```

Because only `implicit_initial_line` excludes statement keywords, an adjacent
line beginning with a lowercase verb remains prose. After one blank line, the
next line must match `implicit_initial_line` to continue the implicit run; a
lowercase verb therefore starts an explicit statement instead. Two consecutive
blank lines cannot match the repetition and always end the implicit run.

A comment, a flow-body boundary, or end of file cannot match a nonblank flow
text line and therefore ends the implicit run. `in`, `using`, `if`, and `by`
are complement markers rather than statement keywords, so they may begin or
occur within implicit prose. The word `until` may do the same unless it matches
`_repeat_until_start` where a repeat may accept its final complement.

```too
flow example:
  Review the findings
  sort them by relevance.

  sort descending by relevance
```

The first `sort` matches `implicit_continuation_line`. The second follows a
blank line and cannot match `implicit_initial_line`, so it begins
`sort_statement`. Capitalization and punctuation do not participate in these
rules; their authoring guidance is defined in
[Toolang Authoring Conventions](toolang-authoring-conventions.md).

### Public CST contract

Do not add public nodes for marker phrases. The statement node identifies the
verb, keyword children preserve source markers, and fields expose complement
values directly. A composite complement value may still use its own value node,
as `position` does for positional selection.

| Statement | Public fields |
| --- | --- |
| `scatter_statement` | `count`, `runnable` |
| `storm_statement` | `count`, optional `lanes`, `runnable` |
| `gather_statement` | `runnable` |
| `settle_statement` | `runnable` |
| `map_statement` | optional `lanes`, `runnable` |
| predicate `keep_statement` / `drop_statement` | optional `lanes`, `runnable` |
| positional `keep_statement` / `drop_statement` | `selection` |
| `sort_statement` | `order`, optional `lanes`, `runnable` |
| `repeat_statement` | optional `count`, `body`, optional `until` |

For `using`, `if`, and `by`, the `runnable` field accepts either a named
`runnable` node or an `inline_agic` node. Remove the separate statement-level
`agic` field for these forms. For `repeat`, the optional `until` field is the
`inline_agic_body` introduced by the final `until` keyword. Its role-specific
name makes the termination condition explicit to CST consumers.

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
the `selection: (position)` field instead.

Remove `repeat_body`, `repeat_until_body`, and `until_statement` from the public
CST. The `body` field points directly to `statements`, and the final `until`
condition is a sibling field on `repeat_statement`:

```text
(repeat_statement
  count: (integer_literal)
  body: (statements ...)
  (flow_until_keyword)
  until: (inline_agic_body ...))
```

The `count` and `until` fields are individually optional, but the grammar
requires at least one. Counted `repeat` adds the matching `time` or `times`
keyword child.

Define and highlight keyword nodes for `using`, `if`, `by`, `in`, `lane`,
`lanes`, `sort`, `ascending`, `descending`, `time`, and `times`. CST child order
preserves authored complement order.

## Implementation Touchpoints

- Update authored rules, permutation helpers, unit tokens, repeat field
  ownership, and implicit-run boundary handling in `grammar.js`.
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
6. Parse counted repeat with optional final `until` and uncounted repeat with
   required final `until`; expose `body` directly as `statements` and `until` as
   the statement's role-specific field.
7. Keep adjacent lowercase verb lines inside implicit prose, start explicit
   statements after the required blank boundary, and split implicit runs after
   two blank lines or comments.
8. Reject missing runnable complements, commas, split complements, unsupported
   lane limits, trailing punctuation on named or positional statement headers,
   and old `par`, `rank`, `top`, or `bottom` forms at statement boundaries.
9. Assert the flat fields in the CST table for named and inline forms, including
   repeat without its former wrapper nodes and `let`-wrapped changed
   operations.
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
