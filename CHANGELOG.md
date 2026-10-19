# Changelog

User-visible grammar, CST, query, and package compatibility changes follow
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/).
Dates are the existing Git tag dates. Earlier releases remain available in
[Git history](https://github.com/openhat-ai/tree-sitter-toolang/tags); this record
backfills the verified notes from 0.3.2 onward.

## [Unreleased]

### Changed

This update implements the [unified grammar definition](docs/plans/grammar-contract-cleanup.md).
It changes the public CST and requires a coordinated consumer migration from
0.4.0-alpha.4; package versions and runtime execution are unchanged.

- Rename the CST root from `source_file` to `program` and program-documentation
  nodes from `module_doc_comment` to `program_doc`. Update root checks, queries,
  and comment consumers. The `#@` / `##!` markers, accepted source, fields, and
  ranges are unchanged; module organization and loading remain outside syntax.
- Remove the retired `task` declaration and its keyword; `chore` is the only
  authored work declaration. Rename `job_name` / `job_body` to `chore_name` /
  `chore_body`. Migrate declarations to `chore` and update CST consumers and
  queries. `task` is an ordinary word in name/text positions; at top level it
  is unknown syntax, with no dedicated legacy diagnostic or reservation.
- Use leaf names/tokens and direct semantic fields. Text values are `content`
  containing `text_line` fragments; `message.role` is optional, and structural
  bodies own their entries directly. Migrate using the [CST migration](#cst-migration-from-alpha4).
- `let_statement.local: local_name`, `await_statement.handle: handle_name`, and
  `param_doc_tag.param: param_name` identify bindings and references precisely.
- Accept active keywords, `default`, and `none` as named parameters,
  parameter-documentation names, and await handles. Their existing name leaves
  and source ranges are unchanged; `_` retains its primary-input meaning.
- Remove obsolete keyword restrictions for `scatter`, `gather`, `storm`,
  `settle`, `rank`, `par`, `top`, `bottom`, `think`, `use`, `thunk`, `call`, `do`,
  `unfold`, `each`, `fold`, `head`, and `tail`. These words are ordinary names
  or text where allowed. Old operation-looking lines can become implicit prose;
  migrate intended calls to current operations. No inactive words are reserved.
- Match complete words and integers. `let note = runworker` is text; write
  `2 times`, `2 using worker`, and `with skill ./foo` with separators. Grammar
  symbols still permit `let h=async run worker` and `generate 2->Text:Text.`.
  Structural tokens and raw `with` references exclude separating whitespace;
  literal text bytes remain unchanged.
- Missing requirements expose zero-width `invalid_missing_body`,
  `invalid_missing_content`, or `invalid_missing_statement` without consuming
  following source or opening a synthetic indentation frame. Reject all
  `invalid_*` diagnostics even when native `has_error` is false.
  Outer comments before a missing text value stay outside `content`; recovery
  retains the text owner even when those comments end at EOF.
- Generate `GRAMMAR.ebnf` from `src/grammar.json` as an annotated implementation
  reference, including helper/recovery rules and opaque external tokens. It is
  not a standalone valid-source grammar; see [EBNF](GRAMMAR.md#ebnf).

#### CST migration from alpha.4

| Previous shape | Current shape |
| --- | --- |
| `source_file` | `program`, containing the complete parsed source. |
| `item → declaration` | Declaration directly under `program`. |
| `module_doc_comment` | `program_doc`, retaining the optional `text: comment_text` field. |
| `agic_name / flow_name / runnable → snake_name` | `runnable_name` leaf. |
| `field_name / property_key / context_name / instruct_name → snake_name` | `identifier` leaf. |
| `struct_name / user_type → type_name → pascal_name` | `type_name` leaf. |
| `param_name → snake_name` | `param_name` leaf, also for `_`; `local_name` was already a leaf in alpha.4. |
| `let_statement.name` | `let_statement.local`, including binding diagnostics. |
| `await_statement.handle: local_name` | `await_statement.handle: handle_name`. |
| `param_doc_tag.name` | `param_doc_tag.param`; declarations retain `param.name`. |
| `agent`, `directive_op` | `agent_name`, `directive_operator`. |
| Named lexical wrappers around anonymous tokens | Leaf `builtin_type`, `role`, `directive_key`, `recall_source`, `assign_operator`, and `flow_lanes_keyword`. |
| `base_type → builtin_type / user_type`, `type_suffix → array_suffix` | Direct `type.base` and repeated `type.suffix` leaves. |
| `cap_ref / property_value → text_line` | Direct `reference` / `value: text_line`. |
| Cap properties on declaration, text-only `body: cap_body → text_body` | Structural `body: cap_body` with `property` and optional `content` fields. |
| `task`, `task_keyword` | Removed; migrate authored work declarations to `chore`. |
| Chore `name: job_name` | `name: chore_name` leaf. |
| Chore text nested under `job_body` | Direct `body: chore_body` with `content: content`; properties use repeated `property` fields. |
| `context_body / instruct_body → text_inline` | Direct declaration `content: content`. |
| Other text-valued `body: text_inline` | `content: content`; let retains `value`, reduce initializer retains `from`. |
| `text_inline → text_block → text_body` | One `content` value boundary. |
| `text_body_line → indented_raw_text, newline` | Direct `text_line` leaf followed by `newline` under `content`. |
| `unroled_message`, bare implicit-run text children | `message.content` / `implicit_run_statement.content`. |
| `statements`, `messages` wrappers | Direct repeated `statement` / `message` fields on the owning body. |

Update field paths and queries together. New semantic content ranges omit the
header newline/comment formerly included by forwarding wrappers. Physical text
leaf ranges remain unchanged; removed line wrappers no longer contribute a
newline to a text leaf. Body ownership changes for caps are explicit above.
Consumers must reject native missing tokens, `ERROR`, and `invalid_*` diagnostics
before lowering, formatting, or execution. No runtime binding effect changes.

## [0.4.0-alpha.4] - 2026-10-06

### Changed

- Add `async run` with the existing named and inline run targets, and `await h`
  for a single local handle from either `async run` or `spawn`. Both support
  named and nameless `let`.
  This implements the grammar scope of the
  [async run and handle await definition](https://github.com/openhat-ai/toolang/pull/685).
  Await blocks are excluded.
- `run_statement` gains an optional `async: flow_async_keyword` field; existing
  `runnable` and `agic` fields are unchanged. `await_statement.handle` reuses
  `local_name` for a non-keyword variable name. Await requires an explicitly
  retained named handle; `await _` is invalid in every binding form.
- `local_name` is a leaf containing the identifier text. Queries that previously
  captured its nested `snake_name` must capture `local_name` directly; existing
  `name` and `handle` fields and their source ranges are unchanged.
- Complete lowercase `async` and `await` now select syntax at flow statement
  and same-line let-value boundaries. Malformed uses cannot become prose.
  Move affected literal text into an explicit text body or capitalize its first
  word. Keyword prefixes, agic messages, and explicit text remain literal.
  These new keywords are also excluded from variable names.
- Reserve `_` at flow statement and same-line let-value boundaries. Bare `_`
  and `let x = _` are invalid; move literal `_` into an explicit text body.
  Primary-input parameters, parameter documentation, and `{{_}}` templates
  remain supported. `_` is not an explicit let binding destination.
- Execution, handle validation, binding effects, and formatting require matching
  Toolang support. No built-in handle type or generic type syntax is added.

## [0.4.0-alpha.3] - 2026-10-06

### Changed

- Implement [flexible repeat conditions](docs/plans/flexible-repeat-conditions.md):
  zero or one `until NAME` or `until: BODY` at any body position, with optional
  count and window. Every repeat still requires an ordinary Flow statement.
- **CST migration:** read `repeat_statement.body: repeat_body`, its repeated
  `statement` fields, and optional `until: until_clause` with a required `target`.
  The old root-level `until` field is removed; consumers must adopt these paths
  with the matching grammar package. Nodes retain source order.
- **Source migration:** rename keyword-named variables and parameters together
  with their references. Move same-line let text starting with `until` into an
  indented text body. Variable naming follows [Lexical Structure](https://github.com/openhat-ai/tree-sitter-toolang/blob/v0.4.0-alpha.3/GRAMMAR.md#lexical-structure).

## [0.4.0-alpha.2] - 2026-10-05

### Changed

- Add `spawn R`, `spawn: BODY`, and `spawn -> T: BODY` in flow and repeat
  bodies, with optional `let job =` or nameless `let` wrappers. The public
  `spawn_statement.target` field is a required `runnable | inline_agic` union;
  `flow_spawn_keyword` identifies the keyword.
- Reserve complete lowercase `spawn` at statement boundaries and after let
  prefixes. Existing prose such as `let text = spawn a process` now reports a
  syntax error instead of becoming Content. Existing explicit text bodies and
  keyword prefixes such as `spawned` remain literal.
- This implements the [approved spawn syntax](docs/plans/flow-spawn.md).
  Execution, handle binding, and canonical formatting require downstream Toolang
  support. This release introduces no async/await syntax.
- Require Python 3.11 or newer and publish `cp311-abi3` wheels. Python 3.10
  users must upgrade Python or remain on 0.4.0a1. Linux ARM64 wheels now
  build on native runners.

## [0.4.0-alpha.1] - 2026-10-05

### Changed

This breaking syntax change implements the grammar portion of the approved
[Flow array definition](https://github.com/openhat-ai/toolang/blob/main/docs/plans/flow-array-semantics.md).
A matching Toolang runtime is required; parser support alone does not change
execution or stored values.

- Use `run` for a single call, including array-producing and array-consuming
  calls. `scatter` and `gather` are removed. Inline `run` defaults to Text, so a
  former implicit array-producing `scatter:` needs `run -> Text[]:`.
- Rename `storm` to `generate` and `settle` to `reduce`. Their public statement
  nodes become `generate_statement` and `reduce_statement`; count, lanes,
  runnable, and initializer fields retain their existing meanings.
- For `generate`, `map`, and `reduce`, a named runnable requires `using` and an
  inline runnable must omit it. `generate` and `map` put an optional lane clause
  before the target. Let binding and discard wrappers use the same rules.
- Removed statement nodes are no longer emitted. Their keyword nodes remain
  reserved for migration diagnostics. Removed or malformed collection heads
  cannot become implicit runs or same-line `let name = BODY` text. Explicit
  `run:` bodies and indented Content bindings can still contain literal text.
- `run`, `exec`, `seek`, `keep`/`drop` predicates, `sort`, and `repeat` retain
  their target and clause syntax. The collection migration added no async,
  await, or spawn syntax and no `produce` or `gen` alias.

| Previous source | Replacement |
| --- | --- |
| `scatter using expand` | `run expand` |
| `scatter [using]: BODY` | `run -> Text[]: BODY` |
| `scatter [using] -> T[]: BODY` | `run -> T[]: BODY` |
| `gather using merge` | `run merge` |
| `gather using [-> T]: BODY` | `run [-> T]: BODY` |
| `storm N [in P lanes] using worker` | `generate N [in P lanes] using worker` |
| `storm N [in P lanes] using [-> T]: BODY` | `generate N [in P lanes] [-> T]: BODY` |
| `settle using merge` | `reduce using merge` |
| `settle [using] [-> T]: BODY` | `reduce [-> T]: BODY` |
| `map [in P lanes] using [-> T]: BODY` | `map [in P lanes] [-> T]: BODY` |

Move a trailing lane clause before the target in `generate` and `map`. Preserve
bindings, explicit return types, counts, and `from:` initializers. Array behavior
and the removal of runtime shape/dim are owned by the Toolang definition, not by
the grammar. The following 0.3.3 notes describe that historical release;
this section supersedes its collection statement syntax.

## [0.3.4] - 2026-10-03

### Added

- Add named and inline `exec` statements in flows and repeats, with an optional
  inline return type. Read `exec_statement.target` as `runnable | inline_agic`;
  `exec` cannot be bound with `let`. Execution requires matching Toolang support.

## [0.3.3] - 2026-09-24

### Changed

- Agics and flows share query directives (`models`, `tools`, `skills`,
  `services`, `psyches`, `prompts`), route lists (`hands`, `handoffs`), `recall`,
  `lanes`, and named `instruct`/`context` selectors. Selectors use `=`; local
  `instruct:`/`context:` blocks and bare selector references are invalid.
- Replace `recall = auto` with `recall = far, near`. Query directives accept
  `=`, `+=`, and `-=`; all other directives accept only `=`.
- `scatter` no longer takes a count. Use `scatter using name` or `scatter:`
  for list generation; use `storm N using name` for a counted expansion.
- `settle` accepts a trailing `from:` initializer. `repeat` accepts
  `windowing N` before its header colon. See [Flow](https://github.com/openhat-ai/tree-sitter-toolang/blob/v0.3.3/GRAMMAR.md#flow) for clause ownership
  and examples.
- CST consumers should read shared `directive` nodes (`key`, `operator`,
  `value`), the separate `settle_statement.from` field, and
  `repeat_statement.window`. Prompt selectors have no `settings` subtree.

## [0.3.2] - 2026-09-13

### Added

- Add `#@` module documentation and `## @param NAME DESCRIPTION` item-documentation
  tags. Keep `##!` accepted, including its legacy indented structural positions.
  Parameter names and descriptions have dedicated CST fields and query captures.

### Changed

Version 0.3.2 changes public CST names: `comment_line` and `inline_comment`
become `plain_comment`, first-line shebangs become `shebang_comment`, `doc_line`
becomes `item_doc_comment`, and `parent_doc_line` becomes `module_doc_comment`.
Update queries and node consumers together. Existing `##!` source remains
valid; do not replace marker-like strings inside literal prompts or history.

[Unreleased]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.4.0-alpha.4...HEAD
[0.4.0-alpha.4]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.4.0-alpha.3...v0.4.0-alpha.4
[0.4.0-alpha.3]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.4.0-alpha.2...v0.4.0-alpha.3
[0.4.0-alpha.2]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.4.0-alpha.1...v0.4.0-alpha.2
[0.4.0-alpha.1]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.4...v0.4.0-alpha.1
[0.3.4]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.3...v0.3.4
[0.3.3]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.2...v0.3.3
[0.3.2]: https://github.com/openhat-ai/tree-sitter-toolang/compare/v0.3.1...v0.3.2
