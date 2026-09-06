# Define Unified Block Boundaries

## Status and Goal

The human approved a shared block model, an external scanner, stable public
CST fields, and structural acceptance tests on 2026-09-06. The human also
required strict keyword recognition on implicit-run lines and indentation-based
`until` ownership. This document records that definition; this PR ships no
parser implementation.

Make indentation determine ownership consistently across Toolang. A parser
must never borrow an outer statement to fill an empty block, move an outer
statement into a loop, or consume a sibling statement as explicit text.
Malformed structural input must remain invalid through error recovery.

## Evidence and Scope

Baseline: `4a4c4db` / grammar 0.3.0. Review of
[PR #32](https://github.com/openhat-ai/tree-sitter-toolang/pull/32), head
`cf2a735`, confirmed three failures:

- Counted repeat absorbs a dedented outer statement in both versions.
- Multiline inline content inside repeat absorbs sibling statements and
  `until` in both versions.
- PR #32 accepts a blank-only repeat followed by a dedented outer statement;
  the baseline rejects it. Its negative tests cover only end of file.

The shared cause is missing structural layout state: `statements` greedily
collects operations, while nested text accepts any line with four spaces.
Adding trivia to individual productions cannot establish ownership.

In scope: shared layout scanning, all existing structural and text bodies,
strict implicit-line keyword recognition, repeat condition ownership, CST
compatibility, generated artifacts, existing binding/package integration,
queries, documentation, and deterministic tests. The eventual implementation
replaces the local approach in PR #32 and carries forward its regressions.

Out of scope: new Flow operations, dynamic counts, declaration namespaces,
new runtime control models, preconditions or mid-iteration conditions,
automatic source conversion, parser recovery in Toolang, and package releases.
Version selection and publishing remain separate release work.

## Layout Contract

1. The document starts at indentation level zero. Every structural body is
   opened by an existing body-introducing production, including a multiline
   Content binding after `=`. Its first non-trivia entry must be deeper than
   the owning header and establishes the body's baseline.
2. Structural siblings have exactly the same baseline. A deeper structural
   entry is valid only when the preceding production opened its body. A
   dedent closes bodies until an existing ancestor baseline is reached;
   landing between existing levels is invalid.
3. Indentation width is not fixed at two or four spaces. Two spaces remain the
   authoring convention. Preserve tab support with tab stops every eight
   columns; reject mixed tabs and spaces in a structural indentation prefix,
   or interchangeable tab/space spellings for the same structural level.
   Tabs within literal content remain data. Form feed is not structural
   indentation. LF and CRLF have identical layout semantics.
4. Structural blank lines and `#`, `##`, and `##!` comments do not establish a
   baseline, satisfy a required body, or terminate a block by themselves. The
   next substantive entry determines transitions. Preserve their source
   positions and the existing documentation attachment rules. A `##` attaches
   only to a directly following entry at its indentation; blank lines and
   ordinary comments detach it.
5. A required body containing only trivia is invalid, whether followed by EOF,
   an outer statement, a condition, or another declaration. Existing explicit
   `pass` remains legal only where already supported; repeat still requires
   an executable statement. Optional cap/job text retains its optionality.
6. At EOF, finish a final physical line without requiring a trailing newline,
   then close complete open bodies. Do not synthesize missing body content.

Apply this contract to struct fields; cap/job metadata and text transitions;
agic directives, settings, and messages; Flow directives and statements;
repeat bodies; and every multiline `text_inline` consumer. Keep existing
section ordering and the set of productions permitted within each body.

## Structural Lines and Text

There are two content policies sharing the same layout ownership:

| Policy | Recognition and boundary |
| --- | --- |
| Structural entry, including implicit prose | Check the first token on every substantive physical line. A recognized structural keyword always selects structural parsing, even after an adjacent prose line. Invalid syntax cannot fall back to prose. |
| Explicit text | After `run:`, a runnable connector's inline body, an explicit agic role/setting, `ask:`, `until:`, multiline Content `let`, or a named context/instruct text body, content is literal until its block ends. Keywords and Markdown inside it remain text. |

Keyword matching is case-sensitive and uses a complete lexical token, not a
string prefix. `run`, `run:`, and `run,` select keyword parsing (the last is
invalid); `runner` does not. Maintain one authoritative vocabulary for each
structural context. For Flow, include active statements, `until`, reserved
legacy heads, and connector-only words (`using`, `if`, `by`, `in`, directions,
positions, and count units); connector-only words are invalid statement heads.
Declaration or directive keywords at an illegal structural position are
errors, not an implicit run. User-defined names and type names do not become
statement keywords merely by appearing in a declaration.

Every implicit-run continuation uses this same check. Adjacent non-keyword
prose continues one implicit run; one intervening blank line preserves a
paragraph, while two blank lines or a structural comment end the run. Relative
Markdown indentation may continue the prose without opening structural
children. A keyword-led line at such a deeper indentation is structural input
and fails unless that structural depth is valid. Use an explicit `run:` block
for unrestricted multiline prose.

Thus this is an error, even without a blank line:

```too
flow research:
  Review the findings.
  sort them by relevance.
```

Use capitalization, prose that avoids the keyword, or explicit text:

```too
flow research:
  run:
    Review the findings.
    sort them by relevance.
```

Inside explicit text, a `#` or `##` at content indentation is literal Markdown,
not structural trivia. Content lines may indent further and return to the text
baseline. A line dedented below that baseline ends text and is interpreted in
its enclosing structural context; an intermediate nonexistent structural
level is invalid. Keep all content bytes after the structural indentation,
including relative indentation, punctuation, and blank lines. Preserve
same-line text bodies as a single physical line.

Cap/job metadata-to-text transitions and unroled agic messages retain their
existing context-specific recognition rules, with the same block boundaries.
The strict Flow keyword policy must not leak into explicit text or create
new meanings for ordinary content in another context.

## Repeat and Until

`until` belongs to the repeat whose body baseline matches its indentation.
Perform layout transitions before interpreting the keyword. An inner repeat
cannot capture an outer condition simply because it appeared more recently.
A wrongly indented `until` is either literal explicit-text content or invalid
structural input; do not relocate it to make a valid loop.

For this implementation:

- Count and `until` are individually optional, but every repeat must specify
  at least one. Accept count-only, until-only, and both; reject a repeat with
  neither. Unconditional loops are not supported in this phase.
- Every repeat requires at least one executable statement.
- Require `until` to be the last substantive entry at that repeat's body
  baseline. Allow trailing trivia; reject another sibling operation, a second
  condition, or `until` before the first body statement.
- Continue evaluating the condition after each completed iteration. Do not add
  precondition checks, mid-iteration checks, or a phase field to the runtime.
  Future positional conditions need a separate execution-semantics definition.

```too
flow research:
  repeat:
    repeat 2 times:
      run:
        Improve the evidence.
    until: Return true when the evidence is sufficient.
  run publish
```

The inner repeat owns the inline run, the outer repeat owns `until`, and the
Flow owns `publish`.

## Implementation Design and CST Contract

Use one C external scanner in `src/scanner.c` for layout state. Grammar
productions select permitted block/content modes; the scanner handles line
starts, indentation transitions, literal-text extent, and complete-token
classification where normal lexing cannot enforce line boundaries. Grammar
owns statement syntax, section ordering, and `until` placement. Do not put
operation execution rules into the scanner or create a scanner per statement.

Use hidden layout tokens and shared body helpers. Remove fixed-width text
heuristics and keyword-permissive implicit continuation rules. A malformed
keyword-led line must expose `ERROR`, a missing required node, or an existing
`invalid_*` diagnostic node; error recovery must not return an apparently
valid executable tree by treating it as text.

Preserve valid public node/field contracts, in particular:

- `repeat_statement.body: statements` and optional
  `repeat_statement.until: inline_agic_body`;
- named/inline `runnable`, `lanes`, sort `order`, and selection fields;
- `text_inline`, `text_block`, `text_body`, `text_body_line.content`, and source
  spans/content slices consumed by Toolang formatting and lowering;
- declaration fields, directive/property nodes, and documentation nodes.

No public block-wrapper node, consumer-side reparsing, source rewriting, or
compensating indentation check is required. Trees for incorrectly parsed
sources intentionally change. Hidden layout token ids and generated parser
state numbers are not public compatibility guarantees.

Scanner state must round-trip completely through serialization, including
layout/content mode and pending transitions. Honor `valid_symbols`, handle
error recovery explicitly, and ensure repeated zero-width transitions make
progress. Never silently truncate a stack that exceeds serialization capacity;
fail explicitly. Use Tree-sitter's scanner contract and Python's indentation
scanner as references, not a second dependency or a wholesale implementation.
See [external scanner documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers/4-external-scanners.html)
and [the Python scanner](https://github.com/tree-sitter/tree-sitter-python/blob/master/src/scanner.c).

Python's `setup.py` already discovers scanner sources; verify the scanner is
also included in sdists and wheels. Update `bindings/rust/build.rs` to compile
it and track its changes. Verify npm contents and CLI/WASM builds include it.
Do not add bindings merely because metadata advertises languages that have no
implementation in this repository.

## Acceptance and Delivery

| Area | Required checks |
| --- | --- |
| Ownership | Empty/trivia-only bodies followed by EOF, siblings, outer conditions, and declarations are invalid. Valid dedents produce exactly the expected parent/child tree. |
| Shared bodies | Exercise all structural-body and multiline-text consumers at several nesting depths and with different indent widths. Explicit sibling operations never become prompt content. |
| Keywords | Test every reserved Flow head on initial and continuation lines, with no blank, one blank, and comments. Cover malformed forms, punctuation, complete-token prefixes, capitalization, explicit-run escapes, and deeper indentation. |
| Conditions | Accept count-only, until-only, and combined forms. Reject a repeat with neither count nor until, even with a nonempty executable body. Cover nested count-only inner loops with outer until, wrong levels, duplicate/early/middle conditions, trailing trivia, and multiline conditions followed by outer statements. |
| Trivia/text | Leading/interstitial/trailing comments; `##!`; comment attachment; literal Markdown in explicit text; relative text indentation; supported tabs, rejected mixed indentation, LF/CRLF, and EOF without newline. |
| Incremental parsing | Edit indentation, comments, keywords, colons, text modes, and EOF. Incremental and fresh trees must match in node types, fields, text ranges, and error status; recover correctly after invalid edits. |
| Artifacts/bindings | Regeneration is clean; all current bindings and published source packages contain and execute the scanner; highlighting, tags, and indentation queries remain valid. |
| Toolang consumer | Run language/formatter tests and deterministic execution acceptance using the corrected package. Assert outer operations execute once, loop operations execute their count, until remains a Boolean evaluator, and prompts exclude sibling statements. Preserve public CST consumption without an additional parser adaptation. |

Use parameterized contract tests and corpus trees as the permanent suite;
retain the three review reproductions and PR #32's leading-trivia cases as
named regressions. Migrate fixtures that depended on permissive keyword
continuations using capitalization or explicit text; do not weaken assertions
to preserve the old incorrect trees.

Apply the same source/example/test migration within the existing Toolang
integration work before its final handoff. The stricter keyword policy
supersedes that work's earlier permissive-continuation expectation. This
requires no consumer-side block parser or CST-field adaptation.

Likely files: `grammar.js`, `src/scanner.c`, generated `src/{parser.c,grammar.json,
node-types.json}`, `GRAMMAR.md`, `queries/indents.scm`, relevant existing queries,
`tests/`, `test/corpus/`, `bindings/rust/build.rs`, and package build manifests
only where scanner inclusion needs correction.

Before each implementation commit run `npm run check`,
`.venv/bin/python -m pytest tests`, and `cargo test`. Verify generated artifacts
and packaged scanner inclusion, then test the downstream Toolang worktree with
the built package. Fetch/rebase onto current `origin/main`, rerun checks, and
open a ready implementation PR linked to this definition. Keep the package
version bump and publication separate; the Toolang upgrade locks the released
version before its final verification.

## Risks and Open Questions

The deliberate compatibility changes are strict keyword-led implicit lines
and rejection/correction of previously misparsed indentation. Scanner recovery,
serialization, and literal-text boundaries are the main implementation risks.
CST and downstream acceptance are release gates, not assumptions inferred from
successful parsing alone.

Release coordination must account for the deliberate source compatibility
break; do not describe the whole change as only the comment patch in PR #32.
Align the downstream dependency range and lock with the chosen release.

No open choice remains for the current execution phase: `until` is final and
post-iteration. Precondition or middle-condition semantics remain deferred.
