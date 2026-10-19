# Define metadata prefixes and body entry

Status: proposed; requires human approval before implementation. Baselines:
grammar `49436c4` in [PR #62](https://github.com/openhat-ai/tree-sitter-toolang/pull/62)
and Toolang `3cca3b44` (using the published `0.4.0a4` parser).
Blank lines and structural comments may separate metadata lines; the first
substantive body line ends the prefix. This boundary decision is confirmed.

## Goal and scope

Make metadata recognition depend on source form and the owning construct,
without silently converting unknown configuration into executable prose or
mistaking a pure-text body's first assignment for metadata. Separate syntactic
recognition from whether a key, operator, or value is supported.

This definition covers body entry, unknown runnable directives, their CST, and
coordinated consumer validation/formatting. Preserve operation syntax, literal
hash/quote rules, documentation nodes, indentation, and body optionality.
Exclude new directive names, extension registries, package version changes,
publication, and merging the public `property` and `directive` node families.

## Verified current behavior

| Owner | Grammar behavior | Consumer behavior |
| --- | --- | --- |
| `prompt`, `psyche` | Shared `cap_body` recognizes any lowercase `key = value` prefix as `property`; then optional literal `content`. | Both kinds reject all properties. |
| `skill`, `service` | Same generic property prefix and literal body. | Kind-specific property schemas reject unsupported names and check required fields/values. |
| `chore` | Same prefix under `chore_body`. | Keeps metadata in `meta`; checks schedule syntax when present. |
| `agic`, `flow` | Only 12 built-in directive names are recognized; some values have key-specific CSTs. Unknown assignments become messages/implicit runs. | Validates particular known directives; there is no general unknown-name guard. |
| `context`, `instruct`, explicit text values | Enter text directly. | Interpret text/templates after parsing. |

Reproductions on the grammar baseline:

- `prompt p:\n  answer = yes\n` and the equivalent psyche produce a property.
  The consumer rejects it rather than preserving an authored text line.
- A leading blank line or structural comment does not change that outcome.
- After `Start body.`, an assignment remains literal cap body text.
- In an agic/flow prefix, `answer = yes` is prose, `models = fast` is a
  directive, and `lanes = banana` / `recall = auto` are grammar errors.
- A bare `models are useful` line is rejected through keyword boundaries.
  A known directive after a message/statement is rejected; an unknown one is prose.
- Passing an AST directive named `unknown` or `modles` directly to
  `_validate_directives` currently succeeds. Parser relaxation alone would
  therefore be insufficient to reject unsupported configuration.

Sources: `grammar.js` (`definitionBody`, `directive`, runnable bodies),
`src/scanner.c` (cap-text/directive entry and prose boundaries), and Toolang
`src/toolang/lang/{lower,validate,format}.py`.

## Design choice

| Approach | Consequence |
| --- | --- |
| Grammar allowlist; reject every unknown assignment prefix | Catches typos if fallback is forbidden, but duplicates schemas and requires parser updates for new keys. |
| Generic syntax with CST `known` variants/flags | Preserves unknown source but still embeds a versioned, owner-dependent schema in syntax; the flag cannot establish validity. |
| Generic syntax with strict consumer validation | Preserves source and detects typos against the owning schema before execution. Recommended. |

## Recommended contract

### Owners and transitions

| Owner | Prefix | What follows |
| --- | --- | --- |
| `prompt`, `psyche` | None. | Literal text from the first body line, including `answer = yes` and comment markers. |
| `skill`, `service`, `chore` | Existing `property` syntax: identifier, `=`, raw value. Unknown keys are still properties. | Optional literal text. |
| `agic`, `flow` | Generic `directive` syntax below, including unknown keys. | Existing messages or statements, respectively. |
| `context`, `instruct`, explicit text values | None; unchanged. | Existing literal text. |

Prefix recognition occurs only at the owner's structural body baseline.
Blank lines and structural comments are trivia while the prefix is open;
they neither end it nor create a body. The first substantive non-metadata
line enters the owner's body rules permanently until that owner ends.
Metadata-looking text cannot reopen the prefix. Dedents and nested owners
retain their existing layout behavior.

In pure-text bodies every marker is literal once the text block begins.
Header comments and comments outside the block retain structural semantics.
Keep existing public body/content fields; do not add phase wrappers.

### Directive syntax and CST

Use one schema-independent runnable directive envelope:

```ebnf
directive          ::= directive_key hspace? directive_operator hspace? directive_value line_end ;
directive_key      ::= /[a-z][a-z0-9_]*/ ;
directive_operator ::= "=" | "+=" | "-=" ;
directive_value    ::= /[^ \t#\r\n][^#\r\n]*/ ;
```

Recognize the complete key/operator prefix, rather than just a built-in word.
`models are useful` starts a body; `modles = fast` is a directive. A recognized
assignment prefix missing its value is a syntax error, including for unknown
keys; it cannot fall back to text or borrow the following line. Key matching
must cover the complete identifier, including keyword spellings and long names.

Every directive has direct leaf fields `key: directive_key`,
`operator: directive_operator`, and `value: directive_value`. Preserve key and
operator ranges and the exact nonempty RHS, excluding separating whitespace
and structural inline comments. Quotes remain ordinary characters.

Known directive values use the same raw value leaf. Move their name-specific
operator restrictions, lists, references, selectors, integer ranges, and query
validation to the consumer before execution. This includes forms such as
`lanes += 4`, `recall = auto`, or `hands = worker,`: a CST can represent them,
while semantic validation reports the unsupported form and source location.

Once an agic/flow body begins, remove directive-name membership alone as a
prose boundary. A line beginning `models` can be text; it cannot become a late
directive. Existing operation, role, declaration, and malformed-operation
rules still apply. An agic may still contain directives alone; a flow still
requires a statement. Preserve the current whole-body `pass` alternative.

### Unknown names and `known`

Accept unknown keys syntactically. Determine support from the owning semantic
schema; do not add `known` fields, known/unknown node variants, or a grammar
allowlist. A global flag cannot answer whether a key is supported by this
owner, operator, value, consumer version, or extension policy.

The runtime must explicitly reject unknown runnable directives and unsupported
skill/service properties with a located diagnostic before configuration or
execution. Preserve chore metadata's existing open-map behavior; do not add a
new blanket prohibition there. Editors may expose derived support status;
syntax-only formatting must preserve unknown keys and their raw values.
Nothing may silently discard an unknown directive.

Compared with a grammar allowlist, this keeps typos out of implicit executable
prose without requiring parser releases for configuration-schema changes.
Compared with a CST `known` flag, support stays with the schema that owns it.

## Compatibility and implementation

Pure-text prompt/psyche assignments become body text; existing valid body text
is preserved. Cap/chore properties keep their public family, fields, and rules.
Unknown runnable assignment prefixes become directives and fail semantic
validation instead of entering messages/implicit runs. To express one as body
text, enter the body first or use an existing explicit text construct.

Runnable values formerly represented by `route_value`, `recall_value`,
`integer_literal`, or `text_ref` become `directive_value`; all keys/operators
use their uniform directive leaves. Migrate lowering, queries, diagnostics,
and formatting together. Existing valid directive meanings must be preserved.

Grammar touchpoints: `grammar.js`, `keywords.js`, `src/scanner.c`, generated
parser/keyword/EBNF artifacts, queries, corpus/fixtures, binding and CLI tests,
`GRAMMAR.md`, and Changelog migration notes. Consumer touchpoints:
`src/toolang/lang/{ast,lower,validate,format}.py`, directive resolution,
syntax diagnostics, language/formatter tests, and affected examples.

Implement grammar and coordinated Toolang adoption as reviewable changes;
release readiness requires both. Current `GRAMMAR.md` and Changelog remain
unchanged while this is a proposed definition.

## Acceptance and risks

1. Prompt/psyche first substantive lines containing assignments, Markdown,
   hashes, and keyword-looking text remain literal. Preserve existing text-block
   blank-line rules and optional empty bodies. Skill/service/chore distinguish
   properties from their later body without schema name checks.
2. Known/unknown directive prefixes, keyword/long names, compact spacing,
   operators, nonempty values, inline comments, LF/CRLF, tabs, EOF, and missing
   values have the specified fields and exact source ranges. Trivia does not
   end the prefix; body entry never reverses.
3. A known or unknown assignment after body entry is processed by the owner's
   body rules. Bare directive words no longer imply configuration syntax;
   operation/role recognition, malformed-operation recovery, siblings, required
   bodies, and `pass` remain intact.
4. Consumer checks reject unknown runnable keys and every previously invalid
   known directive form before execution. Known valid configurations retain
   their effects; chore extension metadata remains preserved. Formatting known
   and unknown source is idempotent and does not move text across the boundary.
5. Fresh and incremental trees agree across prefix/body edits. Verify packaged
   queries, installed bindings, generated output, documentation examples, and
   all grammar and Toolang default checks during implementation.

The main risks are converting existing assignment-led prose into directives,
relaxing a known-value parser check without its semantic replacement, and
formatter reordering that changes body entry. Test these migrations explicitly;
no compatibility heuristic should infer intent from whether a name is known.
The proposed owner split, generic directive representation, and semantic policy
await approval. There are no additional proposed syntax choices.
