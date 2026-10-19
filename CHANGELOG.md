# Changelog

User-visible grammar, CST, query, and package compatibility changes follow
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/).
Dates are the existing Git tag dates. Earlier releases remain available in
[Git history](https://github.com/openhat-ai/tree-sitter-toolang/tags); this record
backfills the verified notes from 0.3.2 onward.

## [Unreleased]

### Added

- Generate `GRAMMAR.ebnf` as an annotated implementation reference, including
  hidden productions, aliases, recovery alternatives, and external tokens.
  `GRAMMAR.md` describes valid source and the public CST independently.

### Changed

This is a breaking syntax and CST update from `0.4.0-alpha.4`. Migrate source,
field paths, queries, and source-range handling together using the table below.
Package versions and runtime execution remain unchanged.

- Use `program` as the complete-source root. Documentation has three peer nodes:
  `program_doc`, `item_doc`, and `param_doc`. Their text fields use `text` leaves;
  `param_doc` directly exposes `param` and `description` and spans the complete
  `## @param` line, including its line ending.
- Recognize program documentation only with `#@` at program scope and column
  zero. It cannot separate a declaration header from its indented body or
  interrupt a continuing body. Move program documentation before the declaration
  or after a completed declaration. `##!` is ordinary item documentation with `!`
  retained as text; replace its marker with `#@` when program documentation was
  intended. Markers inside explicit text remain literal.
- Remove the retired `task` declaration and keyword. Migrate authored work
  declarations to `chore`; its name and body nodes are `chore_name` and
  `chore_body`. `task` remains an ordinary word in name/text positions and is
  unknown syntax at program level, without a dedicated legacy diagnostic.
- Consolidate text values as `content` with direct `text`, `newline`, and
  `blank_line` children. Documentation, property values, references, and recovery
  fragments share the `text` leaf while retaining their own lexical boundaries.
  Structural bodies own members directly; forwarding and list wrappers are
  removed. Calls use one `target` field; declaration introducers use `keyword`.
- Make fixed keywords, operators, punctuation, and modifiers anonymous literal
  terminals. Field access and all-child traversal still expose them;
  `named_children` no longer does. Replace queries such as `(flow_run_keyword)`
  with `"run"`. Semantic leaves including `directive_key`, `role`, `cap_kind`,
  `builtin_type`, and `recall_source` remain named. Query directives use the
  `query_value` leaf; selectors expose their values without a `text_ref` wrapper.
- Preserve every `#` in explicit same-line content, including URLs and
  quoted-looking text. `run: # Heading` contains `# Heading`, and
  `let note = "a#b"` retains the quotes and hash. Move intended annotations to
  standalone structural comment lines before the construct. Declarations,
  named operations, directives, properties, and `with` references retain inline
  structural comments. Quotes and backslashes remain ordinary characters.
- Accept active keywords, `default`, and `none` as parameter names, parameter
  documentation names, local destinations, and await handles. A same-line
  `name =` prefix selects a named binding: `let run = Evidence.` binds text,
  while `let run worker` remains a nameless operation. `_` may name a parameter
  but cannot be a local destination or await handle.
- Remove obsolete keyword restrictions for `scatter`, `gather`, `storm`,
  `settle`, `rank`, `par`, `top`, `bottom`, `think`, `use`, `thunk`, `call`, `do`,
  `unfold`, `each`, `fold`, `head`, and `tail`. These spellings are ordinary names
  or text where allowed; no inactive words are reserved. Replace intended old
  operations with current syntax so they do not become implicit prose.
- Require complete word and integer boundaries. Write `2 times`,
  `2 using worker`, and `with skill ./foo` with horizontal separators.
  `let note = runworker` remains text. Symbols still permit compact forms such
  as `let h=async run worker` and `generate 2->Text:Text.`. Structural tokens and
  raw `with` references exclude their separating spaces/tabs.
- Accept both `lane`/`lanes` and `time`/`times` regardless of integer value or
  leading zeros. Numeric ranges and canonical unit spellings belong to consumers.
  Lane clauses precede `using`, `if`, `by`, or an inline target. Move suffix
  clauses such as `sort ascending by score in 2 lanes` to
  `sort ascending in 2 lanes by score`; apply the same prefix order to predicates.
- Reject unknown assignment heads in the directive prefixes of agics and flows,
  including missing-value forms. Write intended prose explicitly as
  `user: modles = fast` or `run: modles = fast`. Property names on psyche, skill,
  service, prompt, and chore remain open-schema and use only `=`; consumers
  validate supported properties. Blank lines and structural comments leave
  either prefix open. The first message, statement, or literal body text closes
  the corresponding prefix permanently.
  An initial `answer = yes` in prompt/psyche is a property; after body text starts,
  assignments and comment markers are literal text.
- Exclude declaration-header line endings from structural bodies. The first
  substantive member establishes the baseline, and leading member documentation
  belongs inside that body. Outer trivia and documentation after an empty body
  stay outside. Empty psyche, skill, service, prompt, and chore declarations have
  no `body` field. Indented values, including reducer content, own their leading
  blank lines. Update range-based extraction and editing accordingly.
- Require `setuptools>=77.0.3` for Python source builds, matching the existing
  license metadata.

#### CST migration from alpha.4

| Previous shape | Current shape |
| --- | --- |
| `source_file` with `item` wrappers | `program` with direct declarations and `with` references. |
| `module_doc_comment.text: comment_text` | `program_doc.text: text`, still optional. |
| Ordinary `item_doc_comment.text: comment_text` | `item_doc.text: text`, still optional. |
| `item_doc_comment.parameter: param_doc_tag` with `name` and `description` | Direct `param_doc` with required `param: param_name` and `description: text`; its range covers the complete comment line. |
| `agic_name`, `flow_name`, `runnable` wrapping `snake_name` | `runnable_name` leaf. |
| `field_name`, `property_key`, `context_name`, `instruct_name` wrapping `snake_name` | `identifier` leaf. |
| `struct_name`, `user_type`, `type_name` wrapping `pascal_name` | `type_name` leaf. |
| `param_name` wrapping `snake_name` | `param_name` leaf, also for `_`; `param.name` is retained. |
| `let_statement.name: local_name` | `let_statement.local: local_name`; the leaf type is retained. |
| `await_statement.handle: local_name` | `await_statement.handle: handle_name`. |
| `seek_statement.agent: agent` | `seek_statement.agent: agent_name` leaf. |
| `kind` on psyche/skill/service/prompt/chore | `keyword` pointing to the anonymous declaration literal; `with.kind: cap_kind` is retained. |
| Named fixed-token nodes such as `flow_run_keyword`, `flow_async_keyword`, `arrow`, `colon`, `assign_operator`, and `directive_op` | Anonymous literals such as `"run"`, `"async"`, `"->"`, `":"`, `"="`, `"+="`, and `"-="`; semantic fields remain accessible. |
| `type.base: base_type`, `type.suffix: type_suffix` wrapping `array_suffix` | Direct `type.base: builtin_type` or `type_name`; repeated anonymous `"[]"` suffixes. |
| Mixed directive-key types including `context_keyword`, `instruct_keyword`, and `recall_keyword` | Every `directive.key` is a `directive_key` leaf, including in diagnostic entries. |
| `directive.value: directive_value` | `directive.value: query_value` leaf for query directives. |
| `directive.value: text_ref` wrapping identifiers or named special-value tokens | Direct `identifier` or anonymous `"default"` / `"none"`; route and recall selections retain `route_value` / `recall_value` containers. |
| `with.reference: cap_ref`, `property.value: property_value`, each wrapping `text_line` | Direct `reference: text` / `value: text` leaves. |
| `run_statement.runnable` / `agic`, `seek_statement.runnable` / `agic` | One `target` field containing a `runnable_name` or `inline_agic`. |
| `runnable` fields on generate/map/reduce/keep/drop/sort | `target` with the same named/inline alternatives. |
| `exec_statement.target`, `spawn_statement.target`, `until_clause.target` | Field names retained; named targets are `runnable_name` leaves. |
| `until_clause.target: inline_agic_body` | `inline_agic` with `content`; it still forbids a return annotation. |
| `keep_statement.selection` / `drop_statement.selection: position` | `selection: selection`; `side` points to anonymous `"first"` / `"last"`, and `count` is retained. |
| Cap properties on the declaration and text-only `body: cap_body` | Structural `body: cap_body` with repeated `property` and optional `content` fields. |
| `task`, chore `name: job_name`, and `body: job_body` | `task` removed; chore has `name: chore_name` and optional `body: chore_body` with `property` / `content` fields. |
| `context.body: context_body`, `instruct.body: instruct_body`, other text-valued `body` fields | Direct `content: content`; text bindings retain `let_statement.value`, and reducer initializers retain `reduce_statement.from`. |
| `text_inline`, `text_block`, `text_body` forwarding layers | One semantic `content` container. |
| `text_body_line` wrapping `indented_raw_text`, or `text_line` / `comment_text` leaves | `text` leaves without CR/LF; text-line endings remain separate `newline` children. |
| `message` wrapping a role/text sequence or `unroled_message`; bare implicit-run text | `message.role` is optional and `message.content` is required; implicit runs expose `implicit_run_statement.content`. |
| `statements`, `messages`, unfielded struct members | Direct repeated `statement`, `message`, `directive`, and `field` fields on their owning bodies. |
| `line_end` | Direct inline `plain_comment` and `newline` children; no layout wrapper. |
| `invalid_flow_reserved_statement`, nested `invalid_agic_reserved_message` | `invalid_flow_statement` and direct `agic_body.message: invalid_agic_message`; malformed modified-run targets use `invalid_run_target`. |
| Only normal entries in `params.param` and body `directive` fields | Normal entries or direct diagnostic peers `invalid_param` / `invalid_directive`; normal required fields remain required. |

Text retains authored bytes and relative indentation; parsing does not trim or
dedent it. Recompute parent ranges after removing wrappers: same-line content
excludes its line ending, indented/paragraph content includes text-line endings,
and bodies include their leading member trivia. Explicit inline text now also
includes the former hash-comment suffix.

### Fixed

- Keep malformed headers, parameters, directives, operations, conditions, and
  initializers local during recovery so they do not consume enclosing syntax or
  following declarations. Missing parameter operands and bounded error fragments
  retain their list entry; header-comment delimiters cannot close the list.
- Represent absent requirements with zero-width `invalid_missing_body`,
  `invalid_missing_content`, `invalid_missing_statement`, and
  `invalid_missing_type` leaves. A missing return type before an explicit header
  colon leaves the `return` field absent. Missing text does not consume outer
  comments or open a synthetic indentation frame.
- Preserve source order, documentation ownership, and following body entries
  through malformed prefixes and fresh/incremental parsing. Consumers must reject
  native `ERROR`, missing tokens, and every `invalid_*` descendant;
  `root.has_error` alone is insufficient. Diagnostic entries are invalid source,
  even when their enclosing declaration and body remain intact.

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
