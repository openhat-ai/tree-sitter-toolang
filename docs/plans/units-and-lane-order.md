# Unit spelling and lane clause order

Status: proposed; requires human approval before implementation. Baselines:
grammar `42dac3e` in [PR #62](https://github.com/openhat-ai/tree-sitter-toolang/pull/62)
and Toolang `3cca3b44`. This definition changes no parser or formatter behavior.

## Goal and scope

Remove numeric noun agreement from parsing and use one lane-clause position
across Flow operations. Formatting owns canonical unit spelling; semantic
validation continues to own numeric ranges. Success requires parser acceptance,
full-source formatting, statement-head rendering, and documentation to agree.

Scope covers grammar changes in #62 and their coordinated Toolang adoption.
Exclude new operations, lanes on reduce or positional keep/drop, signed or
fractional literals, runtime execution changes, compatibility parsers, version
bumps, and publication.

## Decisions

### Units and integers

- Accept either `lane` or `lanes` after any integer in a lane clause, and either
  `time` or `times` after any repeat count. This includes zero and leading-zero
  spellings. Unit choice does not validate or change the numeric value.
- Retain ASCII digits, complete integer-token boundaries, required horizontal
  separators, and existing source ranges. `2times` and `2lanes` remain invalid;
  symbol-delimited syntax such as `generate 2->Text:Text.` remains valid.
- Use one external `integer_literal` token. Remove `_one_integer_literal`,
  `_other_integer_literal`, their scanner enum entries, and value classification.
  Keep digit scanning and the right-boundary check; do not replace them with a
  permissive numeric regex or convert digits to a number in the scanner.
- Preserve public `count` / `lanes` integer fields, raw digit text, and the four
  existing unit keyword leaves. Do not add a unit wrapper or normalize the CST.
- Preserve semantic requirements: lane limits and repeat windows are positive;
  generation, selection, and repeat counts are non-negative. A zero lane limit
  parses and formats but fails semantic validation. Signs remain lexical errors.

### Lane position

The optional lane clause precedes the target connector, with count/direction
remaining immediately after the verb. The following are schematic forms:

```text
generate N [in P lane|lanes] using NAME
map [in P lane|lanes] using NAME
keep|drop [in P lane|lanes] if NAME
sort ascending|descending [in P lane|lanes] by NAME
```

For inline targets, generate/map omit `using`; predicate keep/drop retain `if`
and sort retains `by`. Lanes precede the connector or inline return annotation
and colon. Inline text remains final. Accept at most one lane clause.

Remove named-target suffix alternatives for keep/drop/sort. A lane clause
following a named target is invalid, with ordinary active-statement recovery;
add no legacy production or migration-specific diagnostic. After an inline
colon, lane-looking words remain literal text.

### Formatting

Both `format_source()` and `format_statement_head()` emit singular units for
numeric value one and plural units otherwise. Preserve existing numeric spelling
in full-source formatting: `01 lanes` becomes `01 lane`; AST-derived statement
heads continue to render the integer value as `1 lane`. This change does not
introduce numeric-spelling normalization.

Determine singularity from the digits, ignoring leading zeros, without integer
conversion or range validation. Long digit strings must remain formattable.

Canonicalize only structural lane/count units using CST ownership. Preserve
comments, bindings, return annotations, and literal content containing phrases
such as `1 lanes` or `2 time`. Source formatting must remain syntax-only: do not
lower or validate a complete Program merely to choose a unit spelling.

Toolang's statement-head renderer already chooses units by value and puts lanes
before connectors. Its full-source formatter preserves unit spelling and lane
order while adjusting header spacing. Extend that existing path
during adoption; do not introduce another formatter or an AST round-trip writer.

## Compatibility and delivery

Unit acceptance broadens. Named suffix lanes on keep/drop/sort stop parsing:

| Previous source | Replacement |
| --- | --- |
| `keep if useful in 2 lanes` | `keep in 2 lanes if useful` |
| `drop if duplicate in 1 lane` | `drop in 1 lane if duplicate` |
| `sort ascending by score in 2 lanes` | `sort ascending in 2 lanes by score` |

Move suffix clauses before upgrading. The current full-source formatter does
not migrate their order, and the new formatter cannot format source rejected by
its parser. No preprocessing or tolerant legacy parser is included.

Implement grammar/scanner changes with matching generated artifacts, queries,
corpus, and binding tests; then adopt the compatible grammar in Toolang alongside
the source-formatter change and integration tests. Verify adoption before
publication using a local wheel built from the exact grammar commit. Toolang
currently pins `0.4.0a4`; commit a dependency upgrade only when a compatible
published package is available.
Reuse #62's CST migration effort rather than separately adopting an intermediate
parser. The combined changes must be verified before 0.4.0 publication.

## Implementation touchpoints

- Grammar: `grammar.js`, `src/scanner.c`, regenerated `src/grammar.json`,
  `src/node-types.json`, `src/parser.c`, `GRAMMAR.ebnf`; update `GRAMMAR.md` and
  `CHANGELOG.md` Unreleased without rewriting released records.
- Grammar verification: `tests/test_flow_syntax.py`, `test_flow_arrays.py`,
  `test_whitespace.py`, `test_repeat.py`, affected fixtures/corpus, and
  `scripts/check_cli.mjs`. Queries and bindings must compile with the new parser.
- Toolang: `src/toolang/lang/format.py`, grammar dependency/lock during adoption,
  `tests/unit/lang/test_program_format.py`, `test_grammar_0_3.py`, focused
  validation tests, and current language/formatter documentation. Generate the
  Toolang changelog through its repository runnable. No validator behavior change
  is expected; verify its current range rules.

## Acceptance and verification

1. Unit matrix: both spellings parse for `0`, `1`, `01`, `2`, and long digit
   strings across lane-bearing operations, repeat counts, and let wrappers.
   Integer leaves retain exact digits/ranges; old private numeric categories
   disappear. Concatenated tokens, signed values, and malformed boundaries fail.
2. Position matrix: every supported operation accepts absent/prefix lanes with
   named and inline targets. Named suffix and duplicate lanes fail, preserving
   following statements/declarations. Reduce, positional keep/drop, and other
   operations gain no lane support.
3. Formatting: complete source and statement heads choose units by value;
   leading-zero source digits remain intact. Formatting is idempotent, reparses,
   and preserves comments, literal text, annotations, and binding forms. Zero
   lanes format successfully but still fail semantic validation; zero counts
   remain semantically valid.
4. LF/CRLF, tabs, EOF, and incremental edits across counts, unit spellings,
   separators, and clause positions match fresh parses. Existing text ownership,
   repeat conditions, and query captures remain intact.
5. Run grammar default checks and generation reproducibility, documentation
   examples/links, and `git diff --check`. During Toolang adoption, run its
   focused acceptance tests and all default offline checks. Record the exact
   grammar artifact used; no live provider is required.

Main risks are accidental token-boundary relaxation, rewriting prompt text while
normalizing units, and deploying the stricter order before migrating sources.
No open design alternatives remain in this proposal; approval is the outstanding
decision. Implementation and release remain separate steps.
