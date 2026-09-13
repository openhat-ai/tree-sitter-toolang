# Normalize Tree-sitter Comments and Add Runnable Parameter Documentation

Status: Approved for implementation on 2026-09-13, including version 0.3.2
and compatibility with the previous `##!` spelling.

## Goal and Success Criteria

Give Toolang comments a consistent public CST vocabulary and support `#@`
module documentation and structured `## @param` documentation. Consumers must
be able to obtain parameter names and descriptions from CST fields, preserving
source ranges, layout behavior, literal text, and incremental parsing.

The downstream outcome is one authored description for Script help and
`hands`/`handoffs` calling hints: runnable docs explain what to call and when;
parameter docs explain the input. Grammar recognition and semantic binding
remain separate responsibilities.

## Verified Baseline

Upstream `main` is
[`e520a926`](https://github.com/openhat-ai/tree-sitter-toolang/tree/e520a926d8b230ce3aff61f17a0c2c3d0deb57ad),
with package version 0.3.1. Toolang `02419769` locks that version. The local
upstream checkout is older (0.2.1) and is not the implementation baseline.

The 0.3.1 parser and source confirm:

- `src/scanner.c` classifies structural comments and consumes their line endings
  through the shared indentation/trivia machinery.
- Public nodes are `comment_line`, `inline_comment`, `doc_line`, and
  `parent_doc_line`. A shebang is currently a `comment_line`.
- `#@` is currently an ordinary comment. `## @param ...` is an opaque `doc_line`
  without fields. `##!` produces `parent_doc_line`.
- Comment-looking lines inside explicit text blocks remain literal text.
- Toolang collects docs from source lines, leaves `Parameter.doc` empty, and
  omits parameter descriptions from its model-visible runnable catalog.

## Scope

In scope for the upstream feature: grammar/scanner rules, public comment nodes
and fields, queries, generated artifacts, fixtures, corpus and binding/layout
tests, and syntax documentation. Add the new module-doc spelling, retain `##!` compatibility, normalize
existing comment node names, and set all package metadata to version 0.3.2.

Out of scope: implementing Toolang CLI changes, renaming runnable entry points,
changing invocation authorization, adding multiline signatures, new doc tags
such as `@return` or `@trigger`, Markdown parsing, or publishing a release.
Toolang adoption is a separate follow-up with the contract below.

## Comment Vocabulary and Syntax

Use **comment** as the family name and these four concrete public node types.
Do not add a generic CST wrapper or retain old names as compatibility aliases.

| Category | Syntax | Public CST node | Meaning |
| --- | --- | --- | --- |
| Plain comment | `# text` | `plain_comment` | Ordinary source annotation, including existing inline comments. |
| Shebang comment | `#!...` at byte zero | `shebang_comment` | Interpreter directive on the first physical line. |
| Item doc comment | `## text` | `item_doc_comment` | Documentation for the immediately following supported node. |
| Module doc comment | `#@ text` | `module_doc_comment` | Documentation for the complete source module. |

`## @param NAME DESCRIPTION` is a structured form of **item doc comment**;
`param_doc_tag` is its child tag, not a fifth comment category.

```too
#!/usr/bin/env too

#@ Research tools for collecting and summarizing evidence.

# Keep summaries short.
## Summarize source material when a concise overview is needed.
## @param _ Source material to summarize.
## @param style Preferred summary style.
agic summarize(_: Text, style?: Text):
  Summarize {{_}}.
```

### Plain and Shebang Comments

- Full-line plain comments retain current structural-trivia behavior. Existing
  inline comments also expose `plain_comment`, using an internal token/alias
  where necessary to preserve their grammar positions and source ranges.
- Only `#!` at byte zero is a `shebang_comment`. Preserve the full interpreter
  text without interpreting it or validating an executable. Later or indented
  `#!` lines are plain comments. Do not expand existing BOM support.
- A `#` after substantive syntax is an inline plain comment where `line_end`
  already permits one; `##`, `#@`, and `#!` there have no documentation meaning.
  This change does not expand where inline comments are legal.

### Module Documentation

- `#@` is recognized only as a structural comment at column zero, between
  top-level declarations or before/after them. An indented structural `#@` is
  invalid; it must not acquire parent-block or item-documentation meaning.
- Permit optional horizontal whitespace and an empty body after `#@`. Each
  physical line is a separate `module_doc_comment`. Consumers trim outer body
  whitespace, ignore empty contributions, and join text in source order.
- Module docs belong to the whole `.too` module, regardless of their position;
  they never attach to the next declaration or become runnable trigger text.
  A module-doc line interrupts an item-doc attachment sequence.
- Prefer `#@`; retain `##!` as a compatibility spelling of
  `module_doc_comment`, including its previously accepted indented structural
  positions. Consumers collect column-zero module docs; accepting indented
  legacy comments does not introduce parent-documentation semantics. Literal
  text remains unchanged. Old public CST node names are not retained.

### Item and Parameter Documentation

- Keep ordinary `##` attachment semantics: the next supported semantic node
  must be adjacent and at the same indentation. Consecutive item-doc lines form
  a block. Blank lines, plain/module comments, other syntax, and scope endings
  interrupt attachment. Tree-sitter exposes lines; Toolang owns attachment.
- Recognize `@param` only as the first non-whitespace word after `##`, with zero
  or more spaces/tabs between the marker and tag. Require horizontal whitespace
  after `@param`, then a signature-compatible `param_name`, whitespace, and a
  nonempty description on the same physical line.
- Reuse the existing parameter-name grammar, including `_`. Optionality, type,
  and default values come from the signature, not the documentation tag.
- The exact reserved word is `@param`. `@parameter`, `@parametric`, other tags,
  and `@param` occurring later in a sentence remain ordinary item-doc text.
  A leading exact `@param` with missing/invalid fields is a syntax error and
  cannot fall back to ordinary documentation or consume the next source line.
- One tag documents one parameter. No continuation syntax is added. Description
  text may contain Unicode, `#`, `$`, quotes, and additional `@` characters;
  all remain text through the physical line ending. A `#@` body does not parse
  parameter tags.
- Well-formed unknown or duplicate parameter names remain syntactically valid.
  Toolang validates names and uniqueness after attaching the block to a
  runnable. The parser does not inspect a later signature to bind a tag.

## Public CST Contract

Retain one node per physical comment. Full-line node ranges begin at the marker
after indentation and include the physical newline when present; inline plain
comments end before it. EOF is valid without a newline. Field ranges exclude
comment markers and separating whitespace and preserve exact UTF-8 byte ranges.

| Node | Public fields |
| --- | --- |
| `plain_comment` | Leaf; full text available through its source range. |
| `shebang_comment` | Leaf; full interpreter line available through its source range. |
| `module_doc_comment` | Optional `text: comment_text`. |
| `item_doc_comment` | Optional `text: comment_text`, or `parameter: param_doc_tag`; never both. |
| `param_doc_tag` | Required `name: param_name` and `description: comment_text`. |

The fixed `@param` token is queryable within `param_doc_tag`. Empty ordinary
item/module docs omit `text`. Preserve whitespace in source; normalization is
a consumer operation. Do not build a doc-block wrapper or move comments into
runnable/parameter nodes in the CST.

Use the existing scanner comment-start handshake for layout. Structured docs
need prefix recognition followed by grammar-owned fields instead of today's
opaque full-line doc tokens. Ensure each comment finishes its trivia line
exactly once, including EOF and recovery. Any added scanner state must survive
serialization. Keep external-token ordering synchronized with `grammar.js`.

Explicit text blocks retain priority over all comment recognition: at or below
their text baseline, `#`, `#!`, `##`, `## @param`, `#@`, and `##!` remain literal
content. Structural comments neither establish indentation nor satisfy a
required body. Preserve current dedent and trivia-lookahead behavior.

## Implementation Sequence and Files

- [x] Define the four comment productions and parameter-tag fields in
  `grammar.js`; update `src/scanner.c` classification, line completion, recovery,
  and serialized state as needed. Keep non-comment grammar behavior unchanged.
- [x] Update `queries/highlights.scm` to capture plain/shebang comments as
  `@comment`, item/module comments as `@comment.documentation`, the parameter
  tag as `@keyword`, and its name as `@variable.parameter`. Keep description
  text documentation-colored. Validate all packaged queries; docs must not
  create outline/tag symbols or trigger Markdown injection.
- [x] Add `test/corpus/documentation_comments.txt` and
  `tests/fixtures/documentation_comments.too`. Update expected trees to the
  new node names and retain legacy fixtures for compatibility coverage. Update
  binding tests (including `bindings/rust/lib.rs`),
  `tests/test_layout_contract.py`, and `tests/test_layout_properties.py`.
- [x] Update `GRAMMAR.md` and directly affected README examples with vocabulary,
  CST fields, syntax/semantic boundaries, invalid forms, and migration examples.
- [x] Run `npm run generate`; commit generated `src/grammar.json`,
  `src/node-types.json`, `src/parser.c`, and any normal generator output together
  with the authored changes. Never edit generated artifacts by hand.
- [x] Run upstream verification: `npm run check`,
  `.venv/bin/python -m pytest tests`, and `cargo test`. Rebuild the Python binding
  after parser changes so tests use the new artifact. Verify npm/Python/Rust
  packages expose consistent node types and packaged queries.
- [x] Set version 0.3.2 consistently in `package.json`, `package-lock.json`,
  `pyproject.toml`, `Cargo.toml`, `Cargo.lock`, and `tree-sitter.json`. Hand off
  the CST changes for Toolang adoption. Release tagging/publishing is outside
  this PR.

## Acceptance Tests

1. All four categories produce the specified nodes and exact source ranges.
   Shebang detection is first-line-only; inline marker variants stay plain.
   Empty comments, LF/CRLF, EOF without newline, tabs, and Unicode are covered.
2. Plain item docs have `text`; parameter docs have exactly the specified tag,
   name, and description fields. Cover `_`, named/optional parameters, named
   and unnamed agic/flow declarations, reordered tags, and punctuation in text.
3. Malformed reserved parameter tags and indented structural `#@` produce
   errors. Legacy `##!` retains its accepted structural positions and produces
   the same fields as `#@`. Well-formed unknown/duplicate parameter tags
   parse successfully for downstream semantic validation. Other `@` text stays
   ordinary documentation.
4. Comments around declarations, caps, structs, directives, messages, nested
   repeats, and EOF preserve layout. Empty required bodies remain invalid;
   malformed tags cannot borrow a later parameter or declaration during recovery.
5. Explicit text blocks retain every marker literally, including on the first
   text line and at deeper indentation. Exiting the block restores structural
   comment recognition without changing the following declaration's ownership.
6. All queries compile. Highlighting identifies the four kinds and parameter
   tag/name without duplicate symbols or unintended injections. Python and Rust
   bindings expose the same regenerated grammar and query contract.
7. Incremental edits among `#`, `#!`, `##`, `## @param`, `#@`, and legacy `##!`,
   plus edits to tag fields, newline style, indentation, and structural/text
   context, produce the same tree as a fresh parse. Include partial tags,
   incomplete UTF-8, repair after errors, and existing deep-layout cases.
8. Existing non-comment fixtures and default upstream verification pass.
   Regeneration is reproducible and leaves no uncommitted generated changes.

## Toolang Adoption Contract

This is a required downstream follow-up, not runtime work in the grammar PR:

- Update the dependency range/lock and all old comment-node consumers together.
  Use CST comment fields in `toolang.lang`; stop independently recognizing
  module/parameter doc syntax from raw source prefixes.
- Bind ordinary item-doc text to `Runnable.doc` and parameter tags to
  `Parameter.doc`. Strip tags from the overall description. Match exact names,
  support implicit `_`, reject unknown/duplicate names and tags attached to a
  non-runnable, and preserve existing detachment rules for unattached docs.
- Collect module comments into `Program.doc`, preserving each file's module
  identity. Formatters must preserve markers, text, and attachment. Rebuild
  prepared metadata derived under the old doc rules without rewriting history.
- Present the same runnable and parameter docs in Script help, runnable query
  descriptions, and `hands`/`handoffs` catalogs/input contracts. Preserve the
  existing documentation limits, actual signature, and route authority.
- Update old node-name references and prefer `#@` in new examples; existing
  `##!` sources remain valid. Preserve literal text and historical data.
  New metadata must not change runnable naming, model/reset vocabulary, or
  runtime tool interfaces. Those remain separate concerns.

This upstream contract supersedes the earlier CLI draft's assumptions that
`##!` remains canonical and parameter docs need no grammar update.

## Risks and Open Questions

Renamed public CST nodes are an intentional compatibility break; consumers
must upgrade alongside the new grammar. The `##!` source spelling remains
compatible; release tagging remains separate. A plain global search-and-replace
could corrupt literal prompts.
Splitting opaque comments risks newline, lookahead, and scanner-recovery bugs;
source-range and incremental-equivalence tests are mandatory.

No unresolved design alternatives remain. This PR implements the approved
upstream contract; Toolang adoption remains a separate follow-up.
