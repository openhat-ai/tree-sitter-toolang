# Normalize Comments and Add Runnable Parameter Documentation

Status: Approved on 2026-09-13 for tree-sitter-toolang 0.3.2, including `##!`
compatibility. Baseline: upstream `e520a926` (0.3.1), also used by Toolang
`02419769`.

## Goal and Delivery Boundary

Expose consistent comment nodes and structured parameter documentation so
Toolang can reuse authored descriptions in Script help and `hands`/`handoffs`
calling hints. This PR delivers the grammar, CST, queries, generated artifacts,
tests, syntax documentation, and 0.3.2 package metadata. The explicitly
requested version update is part of this feature PR.

Toolang documentation binding, CLI changes, runnable naming, and model-visible
catalogs are a separate required adoption step below. Release tagging and
publishing, invocation authorization changes, multiline signatures, Markdown
parsing, and additional tags such as `@return`/`@trigger` are outside this PR.

## Approved Language and CST Contract

Use **comment** as the family name with four concrete public node types; there
is no generic wrapper or compatibility alias for old CST node names.

| Syntax | Public node | Public fields |
| --- | --- | --- |
| `# text`, including existing inline comments | `plain_comment` | Leaf. |
| `#!...` at byte zero | `shebang_comment` | Leaf. |
| `## text` | `item_doc_comment` | Optional `text: comment_text` or `parameter: param_doc_tag`, never both. |
| `#@ text`, with legacy `##!` compatibility | `module_doc_comment` | Optional `text: comment_text`. |

`## @param NAME DESCRIPTION` produces a `param_doc_tag` child with required
`name: param_name`, `description: comment_text`, and a queryable `"@param"` token.
It is not a fifth comment category.
[GRAMMAR.md](../../GRAMMAR.md#comments-and-documentation) is the detailed syntax,
source-range, and migration reference. The defining constraints are:

- One node per physical comment line. Full-line ranges begin at `#` after
  indentation and include the newline when present; inline comments end before
  it. EOF without a newline is valid. Fields exclude markers and separating
  whitespace, preserve trailing whitespace, and use exact UTF-8 byte ranges.
  Empty docs omit `text`; consumers normalize and combine text.
- A shebang is recognized only at byte zero. Later/indented `#!` and a `#!`
  after a runtime-skipped BOM remain plain comments. Preserve existing BOM
  support and do not interpret or validate the interpreter text.
- New `#@` comments occur at column zero before, between, or after top-level
  declarations. They cannot interrupt a continuing body. Legacy `##!` retains
  every previously accepted structural position, including indentation, and
  produces the same node and fields. Consumers collect column-zero module docs
  in source order; nested legacy acceptance adds no parent-doc semantics.
- Item docs attach to the next supported semantic node at the same indentation.
  Consecutive lines form a block; blank lines, plain/module comments, other
  syntax, and scope endings detach it. Consumers own attachment. Module docs
  belong to the complete file and do not become runnable calling descriptions.
- Only an exact leading `@param` word is reserved. Permit zero or more spaces
  or tabs after `##`; require horizontal whitespace after `@param` and the
  signature-compatible name, including `_`. A nonempty description must fit
  on the same physical line. Types and optionality come from the signature.
- Malformed reserved tags produce syntax errors without a prose fallback or
  borrowing the next line. Other tags, longer words such as `@parameter`, and
  later occurrences of `@param` remain prose. Descriptions allow Unicode and
  punctuation, including `#` and further `@` characters. Module docs do not
  interpret tags. Unknown/duplicate parameter names remain syntactically valid
  for downstream semantic validation; there is no continuation syntax.
- Explicit text blocks preserve every marker literally at or beyond their text
  baseline, including the first content line. Structural comments neither
  establish indentation nor satisfy a required body. Existing inline comment
  positions, dedent behavior, and non-comment syntax remain unchanged.

## Implementation Touchpoints

| Area | Files and responsibilities |
| --- | --- |
| Parsing | `grammar.js`, `src/scanner.c`: prefixes, grammar-owned fields, strict reserved tags, physical-line recovery. |
| Queries | `queries/highlights.scm`: plain/shebang as `@comment`, item/module as `@comment.documentation`, tag as `@keyword`, name as `@variable.parameter`; no extra symbols or injections. |
| Generated artifacts | Run `npm run generate`; commit `src/parser.c`, `src/grammar.json`, `src/node-types.json`, and normal generator output. |
| Coverage | `test/corpus/documentation_comments.txt`, `tests/fixtures/documentation_comments.too`, binding/layout/property tests, `bindings/rust/lib.rs`, and `scripts/check_cli.mjs`. Retain old fixtures for compatibility checks. |
| Documentation | `GRAMMAR.md` and affected README examples/migration links. |
| Version | Keep `package.json`, `package-lock.json`, `pyproject.toml`, `Cargo.toml`, `Cargo.lock`, and `tree-sitter.json` at 0.3.2. |

Retain the scanner's comment-start handshake and trivia lookahead. Structured
prefixes leave fields to the grammar; each comment finishes its trivia line
exactly once, including recovery and EOF. Serialize added state and keep the
external token order aligned with the grammar. Avoid doc-block CST wrappers,
parameter binding in the scanner, or unrelated grammar refactors.

## Acceptance

1. All four comment kinds and parameter-tag fields match the contract, with
   exact ranges for empty comments, whitespace, Unicode, LF/CRLF, and EOF.
   Cover first-line shebangs, BOMs, inline marker variants, and both module
   spellings, including legacy indentation.
2. Cover named/unnamed agics and flows, `_`, optional/named parameters, reordered
   tags, malformed tags, and syntactically valid unknown/duplicate names.
   Invalid docs preserve the following statement/declaration during recovery.
3. Verify comments around declarations, caps, structs, directives, messages,
   nested repeats, and EOF. Required bodies remain required; explicit text
   preserves all markers and ends at the same structural boundary.
4. Packaged queries compile in Python and Rust. The CLI parses the documentation
   fixture, renders comment/tag/name/description highlighting, preserves literal
   text styling, and emits only the actual declaration symbols.
5. Incremental trees equal fresh parses after marker/field/indentation/newline
   edits, BOM insertion/removal, incomplete UTF-8, error repair, and deep layout.
   Keep deterministic and randomized coverage.
6. Existing fixtures pass. Run `npm run check`, `.venv/bin/python -m pytest tests`,
   and `cargo test`; verify reproducible generation, installed-wheel behavior,
   packaged queries, version consistency, and usable migration documentation.

## Required Toolang Adoption

- Upgrade the dependency and migrate old node consumers together. Read CST
  fields in `toolang.lang` instead of reparsing doc prefixes from source lines.
- Bind ordinary item text to `Runnable.doc` and tags to `Parameter.doc`, stripping
  tags from the runnable description. Match exact names, support implicit `_`,
  reject unknown/duplicate names and tags attached to non-runnables, and retain
  existing detachment rules for unattached docs.
- Collect module text into each file's `Program.doc`. Preserve formatting,
  attachment, literal text, and historical data. Rebuild prepared metadata
  derived under old doc rules without rewriting history.
- Reuse these docs in Script help, runnable query descriptions, and
  `hands`/`handoffs` catalogs/input contracts, preserving documentation limits,
  signatures, and route authority. Prefer `#@` in examples; retain `##!` sources.
- Keep CLI command changes, default-entry naming, model/reset vocabulary, and
  runtime tool interfaces with their own definitions. This grammar contract
  supersedes the earlier CLI draft's `##!`-canonical/no-parser-update assumptions.

## Risks and Remaining Work

Public CST names intentionally change, so consumers must migrate together;
`##!` source compatibility is retained. Scanner newline/lookahead/recovery and
incremental state are the primary implementation risks covered above. Global
marker replacements could corrupt literal prompts and must be avoided.

No design alternatives remain open. Upstream acceptance is the completion
criterion for this PR; Toolang adoption and release publishing remain follow-up
work and are not implied by passing grammar tests.
