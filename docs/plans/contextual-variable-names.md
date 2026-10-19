# Contextual variable names

Status: proposed; requires approval before implementation. Grammar baseline:
`11c2dd0` in [PR #62](https://github.com/openhat-ai/tree-sitter-toolang/pull/62).
Toolang baseline: `3cca3b44`. Only isolated prototypes have been exercised;
this definition ships no parser behavior change.

## Goal and scope

Allow active keywords as names where their syntactic context identifies the
name. Remove the coupling between Flow prose boundaries and variable naming.
Deliver parameter/reference support first, then independently verify local
binding disambiguation before enabling it. Success preserves existing source,
CST fields and leaf shapes, operation recognition, and error recovery.

Exclude new identifier characters, escaped names, runtime-local reservations,
new statements, numeric/clause changes, version bumps, and publication.

## Decisions

1. Named parameters, `@param` documentation names, and `await` handle references
   accept every spelling matching `[a-z][a-z0-9_]*`, including active keywords,
   `default`, and `none`. Use the ordinary internal identifier token in these
   contexts, retaining the existing public `param_name` and `handle_name` leaves.
   `_` remains the special primary-input parameter/documentation name and is
   invalid as a handle. Name resolution and handle typing remain semantic checks.
2. Local destinations use the same name pattern. Immediately after `let`, a
   complete name followed by optional horizontal whitespace and `=` on the
   same physical line selects a named binding. Use a private zero-width scanner
   signal for this prefix before operation/invalid-binding signals; then let
   the grammar consume the identifier and assignment separately. The signal
   must neither change source ranges nor consume the following delimiter.
3. Without that assignment prefix, retain the existing anonymous-operation
   forms and malformed-operation recovery. After `=`, retain all current RHS
   operation and restricted-head guards. Do not use missing-token insertion or
   literal-text fallback to reinterpret an incomplete keyword-led operation.
   Keep existing missing-assignment diagnostics for ordinary names.
4. Remove `_variable_name` and its scanner exclusion table once no contexts use
   them. Do not introduce separate keyword ban lists for parameters and locals.
   Keep Flow/agic prose boundaries, directives, and RHS recognition independent.
   Future keyword additions must not implicitly reserve names.

| Source | Meaning or outcome |
| --- | --- |
| `flow work(sort: Text):` | Parameter named `sort` |
| `## @param sort Description.` | Documentation name `sort` |
| `await sort` | Handle reference named `sort` |
| `let sort = Evidence.` | Text local named `sort` |
| `let run = run worker` | Operation result bound to `run` |
| `let until = Evidence.` | Text local named `until` |
| `let exec = spawn worker` | Spawn handle bound to `exec` |
| `let sort ascending by score` | Existing anonymous sort operation |
| `let run` / `let run = run` | Invalid incomplete operations |
| `let x = until check` / `let x = exec worker` | Existing invalid RHS forms |
| `let _ = Evidence.` | Invalid local destination |

This broadens accepted source without requiring a source migration. On approval,
it supersedes only the blanket variable exclusions in the flexible-repeat and
grammar-contract-cleanup definitions. Primary-input and runtime-local rules stay
in force. Update current syntax documentation and Unreleased accordingly.

## Evidence and implementation touchpoints

Tree-sitter supports [context-aware lexing](https://tree-sitter.github.io/tree-sitter/creating-parsers/3-writing-the-grammar.html#conflicting-tokens).
The current external scanner overrides that opportunity with a shared exclusion
table. Replacing only parameter/documentation/handle rules accepted all 56
currently excluded words. Replacing local names without prefix disambiguation
accepted 41; operations, `async`, `exec`, and `until` remained obstructed.

An isolated assignment-prefix prototype accepted all 56 in every tested context.
Across 784 LF/CRLF acceptance/highlight cases and 896 incremental edits, names
were recognized without capturing them as keywords and following statements and
declarations survived recovery. All 60 existing fixture/corpus sources retained
identical CSTs, fields, ranges, validity, and all five query capture sets.
These probes establish feasibility; they do not replace implementation checks.

Grammar touchpoints: `grammar.js`, `keywords.js`, `src/scanner.c`, generated
parser/keyword/EBNF artifacts, `tests/test_variable_names.py`, vocabulary and
documentation tests, corpus, `GRAMMAR.md`, and `CHANGELOG.md`. Preserve public
name leaves and query paths; add no name or binding wrapper.

Toolang's parameter/binding validators currently check identifier shape and
runtime-local rules without a Flow keyword ban. Update negative keyword-name
tests and add lowering, documentation binding, formatting, template-reference,
and handle-validation coverage during #62 adoption. No validator relaxation is
needed based on the inspected implementation; verify this with integration tests.

## Acceptance and delivery

1. First enable typed/untyped/optional parameters, documentation names, and
   handles independently of local destinations. Test all active keyword sets,
   `default`, `none`, ordinary names, long names, and `_`'s contextual behavior.
2. Then enable local destinations with explicit same-line `=`. Test text and
   operation results, anonymous operations, compact/tab-separated assignment,
   comments, multiline values, EOF, missing `=`, missing values, and malformed
   RHS heads. Keyword prefixes and invalid name characters retain their rules.
3. At both stages verify public node shapes/ranges, highlighting, sibling
   recovery, and fresh versus incremental parsing across LF/CRLF edits. Add
   regression tests from the isolated probes rather than retaining prototypes.
4. Run grammar default checks and generation reproducibility after each stage.
   Verify Toolang consumer integration with the compatible parser as part of
   #62 adoption, including all default offline checks. Keep release work separate.

The main risk is misclassifying a keyword after `let` or weakening RHS error
recovery. The bounded assignment-prefix decision addresses that risk without
expanding a global reserved set. Approval of this definition remains outstanding.
