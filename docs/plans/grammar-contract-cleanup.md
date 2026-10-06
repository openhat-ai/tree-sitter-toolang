# Unify the grammar contract

Status: proposed for maintainer review. This document collects the discussion
and replaces incremental implementation decisions with one target contract.
It does not approve or publish the unfinished content prototype.

## Goal and scope

Deliver one coherent grammar update after `v0.4.0-alpha.4`: complete token
boundaries, reliable layout recovery, a small semantic CST, and an explicit
keyword policy. Consumers should migrate once, directly from the published
grammar to the final contract.

This is feature definition for a combined grammar change: CST refactoring,
previously approved boundary fixes, and the newly requested removal of obsolete
keyword restrictions. Keyword cleanup changes accepted source; it is not only
a refactor. No parser implementation is part of this definition step.

Inputs are [PR #55](https://github.com/openhat-ai/tree-sitter-toolang/pull/55)
(CST flattening), [PR #56](https://github.com/openhat-ai/tree-sitter-toolang/pull/56)
(lexical/layout fixes), [PR #57](https://github.com/openhat-ai/tree-sitter-toolang/pull/57)
(semantic name fields), and the subsequent content/message discussion.
The [boundary definition](https://github.com/openhat-ai/tree-sitter-toolang/blob/3caaa899c9d80402d75c75fa3217cecda8c1c692/docs/plans/lexical-layout-boundaries.md) remains applicable,
except for the diagnostic names proposed below. Earlier plans and published
release notes remain historical records.

Out of scope: runtime implementation, new operations, await blocks, broader
async modifiers, changing spawn/await lifetimes, package versions, and releases.

Keep the settled source contracts: named `generate`/`map`/`reduce` targets use
`using`, inline targets omit it; `async` modifies `run`; spawn and async handles
support `await h`, `let x = await h`, `let await h`, and `let h = await h`.
`await _` stays invalid. Binding effects remain runtime semantics, not scanner
or CST responsibilities.

## Findings from main and the pending changes

- `_flow_reserved_word` mixes active heads, connectors, declarations, directive
  keys, and obsolete words. Four removed collection words also remain in the
  bound-operation classifier.
- `generate_keywords.mjs` builds variable exclusions partly from rule names
  ending in `_keyword`. Public CST naming therefore changes lexical policy.
  Some tests derive their expectations from the same source, so they cannot
  detect an incorrect vocabulary decision independently.
- A single `invalid_empty_body` describes several distinct failures, including
  an existing flow body that contains directives but no statement.
- The PR stack and content prototype expose intermediate migrations, including
  removing a text-only `cap_body` and then adding a meaningful structural body
  with that name. These intermediate contracts should not be released.
- Downstream lowering and formatting still depend on old text wrappers and
  source ranges. Successful parsing alone does not establish compatibility.

## 1. Separate vocabulary, recognition, and name restrictions

Use an explicit shared vocabulary with distinct roles. Do not infer language
policy from public node names or put every recognized word in one global lexer
reservation set.

| Category | Decision |
| --- | --- |
| Active syntax | Keep words used by current productions: declarations, operation heads, modifiers, connectors, clauses, directives, roles, and named values. Recognition remains contextual. |
| Intentionally reserved words | No production exists, but use is deliberately prohibited. Give every entry an explicit reason and scope. The proposed initial set is empty. |
| Removed words | Remove keyword rules, scanner memberships, keyword highlighting, and variable exclusions. Apply ordinary name/text rules in each position. |
| Symbols and markers | Keep their own syntax, including `->`, `[]`, `*`, `_`, and comment markers; these are not a list of future statement names. |

Remove the following currently inactive words from keyword/reservation tables:

```text
scatter gather storm settle
rank par top bottom
think use thunk
call do unfold each fold head tail
```

The empty reserved set is a recommendation, not a claim that the maintainer
has already chosen it. Merely discussing `seq`, `spread`, `produce`, `gen`,
`fut`, `wait`, or another possible spelling does not reserve it.

Active Flow heads remain `let`, `exec`, `run`, `spawn`, `seek`, `ask`, `async`,
`await`, `generate`, `map`, `reduce`, `keep`, `drop`, `sort`, and `repeat`.
`pass` retains its existing whole-body positions. `until`, `from`, `windowing`,
connectors, declaration heads, roles, and directive keys remain active syntax;
being invalid as a standalone Flow statement does not make them obsolete.

Preserve the current contextual policy for active words: Flow prose boundaries,
agic prose boundaries, same-line let values, and name positions are different
recognition sites. Malformed active operations must not fall back to text.
Explicit content remains literal. Preserve current active-word exclusions for
local, handle, and parameter names; `far` and `near` remain contextual recall
values that can also be variable names, while `default` and `none` retain their
current exclusion. Other name categories keep their existing constraints.

`_` remains the explicit primary-input parameter name, including parameter
documentation and `{{_}}`. It cannot be a local binding destination or await
handle, or become implicit Flow prose or a same-line let value.

Examples after cleanup:

```too
flow example(storm: Text):
  let scatter = Notes.
  let note = storm 2 using worker
  gather the evidence
```

The last two values are ordinary text, not revived legacy operations. Removing
a keyword does not make arbitrary top-level declarations or indentation valid.

Implementation direction: use a small shared vocabulary data module consumed
by `grammar.js` and the keyword-header generator. Record context membership
and variable exclusion explicitly. Keep semantic public keyword leaves and
Tree-sitter keyword extraction. Include the module in published grammar source
packages; do not introduce a general lexer framework or a second hand-maintained
C vocabulary. Retain an independently authored expected-category test.

## 2. Preserve the agreed token and layout rules

- Adjacent words/numbers require spaces or tabs. Complete ASCII word sequences
  cannot be split: `runworker`, `runWorker`, and `2times` are indivisible.
- Grammar symbols delimit tokens without mandatory surrounding spaces:
  `let h=async run worker` and `generate 2->Text:Text.` remain valid.
- Compound symbols remain contiguous: `->`, `+=`, `-=`, `[]`, comment markers,
  and qualified references. A raw `with` reference requires a separator after
  its kind; punctuation belonging to the reference is not a grammar delimiter.
- Keep Tree-sitter's word extraction, horizontal extras, and narrow required
  separators. Keep integer boundary checks and layout/literal scanning in the
  existing external scanner. Hide helper rules and scanner signals.
- Preserve arbitrary positive indentation widths, eight-column tabs, current
  structural prefix restrictions, LF/CRLF behavior, paragraph boundaries,
  literal Markdown indentation, trivia ownership, and complete serialization.
  Do not rewrite the scanner merely to simplify node names.

## 3. Publish semantic structure without forwarding wrappers

Use `content` for one authored text value and `text_line` for its physical text
fragments. A one-line value may have one fragment; a multiline value has text
fragments and its existing newline/blank-line children. Do not expose the
choice between source forms as another node.

Hide/remove `text_inline`, `text_block`, `text_body`, `text_body_line`,
`indented_raw_text`, and `unroled_message`. Hidden rules may distinguish inline,
indented, and implicit paragraph recognition. `content` is the semantic value
boundary, not a replacement chain of forwarding nodes. `text_line` remains a
leaf; raw references and property values can use it directly without acquiring
an unrelated prompt-content wrapper.

| Owner | Public contract |
| --- | --- |
| `context`, `instruct`, inline agics, `ask_statement` | `content: content` |
| `implicit_run_statement` | `content: content` |
| `message` | Optional `role: role`, required `content: content` in valid source |
| Text `let_statement` | `value: content` |
| Reduce initializer | `from: content` |
| `flow` | `body: flow_body`, with direct repeated `directive` and `statement` fields |
| `agic` | `body: agic_body`, with direct repeated `directive` and `message` fields |
| `repeat_statement` | `body: repeat_body`, with repeated `statement` and optional `until` |
| `struct` | `body: struct_body`, with repeated `field` |
| Cap declarations / task and chore | `body: cap_body` / `body: job_body`, with repeated `property` and optional `content` |

Retain body nodes because they own heterogeneous entries and scope. Hide the
`statements` and `messages` list wrappers. Preserve source order and trivia;
repeated fields do not reorder entries. Cap/job bodies retain their existing
optional entries and header line terminator; their text field is optional.
Do not require content simply because a structural body node exists.

Keep two complete message productions: `role ':' content` and bare paragraph
content. An omitted role is an absent field, not an empty role or fabricated
`user` token. A role header still requires a colon and actual content. Bare
messages retain the existing paragraph and keyword-boundary rules.

Preserve the name decisions from #55/#57: leaf `local_name`, `handle_name`,
`param_name`, `runnable_name`, and `type_name`; shared `identifier` where the
parent supplies the role; `let_statement.local`, `await_statement.handle`,
and `param_doc_tag.param`. Declarations retain `agic.name`, `flow.name`, and
`param.name`. Keep meaningful type/value alternatives and existing call-target
fields; do not mechanically rename every `name` field.

Comments keep their existing kinds and fields. Directives retain `key`,
`operator`, and `value`; properties retain their own structure. Neither becomes
prompt content. Markers in literal text remain text, while structural comments
remain trivia with unchanged documentation-attachment rules.

Header comments and line terminators remain outside the `content` value.
Text fragments exclude newlines and preserve the existing scanner's source
bytes, including indentation; no trimming or dedenting happens in the parser.
Document intentional parent-range and field-path changes in one migration
table from alpha.4, rather than exposing intermediate PR shapes.

## 4. Diagnose the missing requirement in its owning context

Keep one hidden scanner signal for a required boundary that cannot be filled.
Let grammar context select the diagnostic; do not teach the scanner about
public CST body or content names.

| Situation | Diagnostic |
| --- | --- |
| Required structural body absent or containing only trivia | `invalid_missing_body` |
| Required text absent, including an empty role header, inline runnable, or initializer | `invalid_missing_content` |
| A flow body has directives but no statement, or repeat has only `until` | `invalid_missing_statement` |

An inline reducer containing only `from:` is missing reducer content. A named
reducer with a colon but no initializer body is missing its required body.
An agic containing only directives remains valid. Empty cap/job bodies remain
valid. Indented Markdown/comment markers in explicit text are real content;
structural comments and blank lines cannot satisfy a required body.

Diagnostics are zero-width leaves at the next substantive boundary or EOF.
They consume no following source, open no artificial indentation frame, and
do not create an empty successful statement or message. A following sibling,
outer `until`, initializer, or declaration retains its proper owner.
Do not make required valid-source fields optional merely to accept missing
content; recovery alternatives are invalid trees, even where generated field
metadata must permit them.

Consumers must reject native ERROR/MISSING and `invalid_*` diagnostics;
`root.has_error` alone is insufficient. Downstream diagnostic wording can map
these categories separately when the new CST is adopted.

## Delivery and verification

Recommend one replacement PR based on current `origin/main`, incorporating
#55, #56, #57, content restructuring, and keyword cleanup. Keep the existing
branches and unfinished prototype until the replacement is verified and linked.
Then close the superseded PRs with the replacement reference. Do not merge or
publish intermediate CST contracts. Consolidation is still a proposal; this
definition step does not rewrite or close those PRs.

Organize the replacement into reviewable commits: explicit vocabulary and
boundary fixes; layout recovery; final CST and consumer fixtures. Each commit
includes its matching generated artifacts, queries, documentation, and tests.
Reuse verified fixes and regressions, but rebuild the final contract from main
instead of preserving accidental intermediate names.

Likely files: `grammar.js`, a shared keyword data module,
`scripts/generate_keywords.mjs`, `src/scanner.c`, generated `src` artifacts,
`queries`, `scripts/check_cli.mjs`, corpus/fixtures/Python/Rust tests,
`GRAMMAR.md`, relevant README migration links, and source-package manifests.
Preserve published release notes; put the final source/CST migration under
Unreleased. EBNF describes accepted source; document recovery separately.

| Acceptance area | Required evidence |
| --- | --- |
| Vocabulary | Independently enumerate active, contextual, reserved, and removed words; validate scanner tables, name restrictions, and query captures. Every removed word works as an ordinary local, handle name, parameter/doc name, Flow prose head, and same-line text head where the surrounding production allows it. |
| Boundaries | Keep the `let x = runworker` regression, malformed active heads, numeric separators, compact symbols, capitalization/prefixes, and explicit-text exceptions. |
| CST | Snapshot every owner above; verify leaf names, no forwarding/list wrappers, direct fields, optional role, ordering, and exact source ranges. Cover one-line, indented, and implicit paragraph content. |
| Recovery | Cover the three diagnostic classes, every required-body consumer, valid optional bodies, directives-only agics, comment/blank-only cases, EOF, siblings, nested conditions/initializers, LF/CRLF, and tabs. Assert both the diagnostic and the preserved following tree. |
| Incremental/layout | Fresh and edited parses agree through token edits, indentation edits, missing/repair transitions, text-mode changes, and scanner capacity boundaries. |
| Integration | Queries compile and capture intended source rows; package sources include shared vocabulary/scanner files; generated artifacts are reproducible. Existing published-source fixtures retain acceptance and text bytes except documented lexical-policy changes. |

Run `npm run check`, `.venv/bin/python -m pytest tests`, `cargo test`, and
`git diff --check` before implementation commits and final handoff. Do not
equate bulk-updated snapshots with semantic verification. Downstream lowering,
formatting, and diagnostics need a coordinated follow-up migration; record
exact paths/ranges so that work does not reconstruct text by guessing wrappers.
The inspected downstream touchpoints are `src/toolang/lang/lower.py`,
`format.py`, and `diagnostics.py`; they are not edited in this grammar change.

The main risks are accidental text/statement reclassification, changed text
bytes or paragraph boundaries, recovery swallowing siblings, and downstream
formatter assumptions. Old operation-looking lines may now become ordinary
prose; document that intentional change rather than preserving hidden legacy
reservations. The remaining maintainer decisions are acceptance of this
combined contract, the proposed empty reserved set, and PR consolidation.
