# Define property prefixes and runnable directives

Status: proposed; revised after design discussion on 2026-10-19. Grammar
baseline: `49436c4` in [PR #62](https://github.com/openhat-ai/tree-sitter-toolang/pull/62).
Consumer baseline: Toolang `3cca3b44`, using the published `0.4.0a4` parser.
Property recognition independent of name support, and trivia/body transitions,
are confirmed. The proposed unknown-directive prefix guard awaits approval.
This definition changes no implementation.

## Goal and scope

Keep two distinct concepts: open-schema properties for declarations and closed
language directives for runnables. Specify prefix/body ownership without using
consumer property schemas to guess whether a source line is prose.

Cover prefix boundaries, documentation, unknown directive handling, and their
acceptance checks. Preserve existing public CST fields, typed directive values,
body optionality, operation syntax, layout, and literal hash/quote behavior.
Exclude generic runnable directive names, CST `known` flags, new syntax for
body delimiters, property-schema changes, version bumps, and publication.

## Verified current behavior

| Owners | Grammar | Consumer |
| --- | --- | --- |
| `psyche`, `skill`, `service`, `prompt` | Generic `property` prefix under `cap_body`, followed by optional literal `content`. | Prompt/psyche reject all properties; skill/service validate their own schemas. |
| `chore` | Same prefix under `chore_body`. | Preserves metadata in `meta`; validates schedule syntax when present. |
| `agic`, `flow` | Recognizes the 12 built-in directive names below. Unknown assignment lines become messages/implicit runs. | Checks known directive semantics; `_validate_directives` has no general unknown-name guard. |

Blank lines and structural comments already leave property prefixes open.
A leading `answer = yes` becomes a property even in prompt/psyche; after an
ordinary body line, the same source remains literal text. In runnables,
`models = fast` is a directive, `modles = fast` is prose, and `lanes = banana`
or `recall = auto` are syntax errors. Known directive heads after body entry
are rejected by the existing keyword-boundary rules.

Sources: `grammar.js` (`definitionBody`, `property`, `directive`),
`src/scanner.c` (prefix entry and prose boundaries), `GRAMMAR.md` (Property,
Directive), and Toolang `src/toolang/lang/{lower,validate,format}.py`.

## Proposed contract

### Property prefixes

Apply the same rule to `psyche`, `skill`, `service`, `prompt`, and `chore`:

```ebnf
property       ::= identifier "=" property_value line_end ;
property_value ::= /[^#\r\n]+/ ;
```

- The grammar defines the identifier, operator, and raw-value syntax. It contains
  no supported-property-name list and does not consult the consumer's schema.
  Only `=` is a property operator; `+=` and `-=` do not form properties.
- At the owner's body baseline, blank lines and structural comments may precede
  or separate properties. They neither end the prefix nor establish text.
- The first substantive non-property line starts literal body content. Once
  started, the body cannot return to property parsing before its owner ends.
  Keywords, assignments, and comment markers within that text remain literal.
- A complete `identifier =` prefix with a missing value remains a syntax error;
  it cannot fall back to text or borrow the next line. Preserve current raw
  value ranges, including permitted whitespace; nonempty-value semantics belong
  to the consumer.
- The consumer determines supported names, duplicates, required metadata,
  value meanings, and extensions for each owner. It may reject, tolerate, or
  preserve a property according to its own policy, including for prompt/psyche.
  The grammar neither enforces the current consumer policy nor requires
  consumers to accept arbitrary metadata.

Keep `property.key: identifier`, `operator: assign_operator`, and
`value: text_line`, and existing `cap_body` / `chore_body` fields. Do not add a
`known` marker or split known/unknown property nodes.

This deliberately means `prompt p:\n  answer = yes` is a property. The current
consumer rejects it, but another consumer may tolerate it. Neither a blank line
nor a structural comment forces that line into text. An ordinary preceding body line makes it literal. Also,
`answer += yes` does not match property syntax and therefore starts body text.
Do not use whether `answer` is supported to reinterpret either line.

### Runnable directives

Agic/flow directives are closed language syntax. Keep the existing names,
operator restrictions, typed value productions, and CST fields:

| Names | Operators | Source value syntax |
| --- | --- | --- |
| `models`, `tools`, `psyches`, `skills`, `services`, `prompts` | `=`, `+=`, `-=` | Nonempty raw query value. |
| `hands`, `handoffs` | `=` | Runnable-reference list or standalone `none` / `*`. |
| `recall` | `=` | `far` / `near` list or standalone `none` / `default` / `*`. |
| `lanes` | `=` | Integer literal or `default`. |
| `context`, `instruct` | `=` | Identifier, `none`, or `default`. |

Directives precede messages/statements. Blank lines and structural comments may
separate them. The first message/statement ends the prefix; it cannot reopen.
Existing reserved-head and malformed-operation rules still apply in the body.
Explicit text always treats directive-looking lines literally. Preserve
existing directives-only agics, required flow statements, and whole-body `pass`.

Proposed strictness to confirm with this contract: while the runnable directive
prefix is open, a complete assignment-shaped head with an unsupported name is
a syntax error, rather than implicit prose. Thus `modles = fast` cannot silently
become executable text. Do not expose an unknown `directive` or add a `known`
flag. Known malformed directives also remain errors without prose fallback.
After body entry, unknown assignments follow the existing message/statement
rules and never become directives. This proposal adds no general assignment ban
inside existing bodies or explicit text constructs.

The consumer still validates numeric ranges, query expressions, name resolution,
duplicates, and runtime/configuration constraints. An integer literal in the
CST does not establish that its value is a positive lane count. A defensive
unknown-name check may protect manually constructed ASTs, but does not replace
the grammar's closed directive productions.

## Compatibility and delivery

The property contract preserves current parsing, including the prompt/psyche
assignment behavior. The directive contract preserves existing known syntax and
public CST shapes. The proposed unknown-prefix guard rejects assignment-led
runnable prose that was previously accepted. Express intended literal text as
an existing explicit message (`user: modles = fast`) or flow body
(`run: modles = fast`), or enter an ordinary body before that prose.

Grammar touchpoints: `grammar.js`, `src/scanner.c`, keyword tables as needed,
generated parser/EBNF artifacts if behavior changes, corpus/fixtures, binding
and CLI tests, `GRAMMAR.md`, and Changelog migration notes. Consumer checks
cover property validation, lowering, syntax diagnostics, and syntax-only
formatting; no property policy or directive meaning changes are implied.

This replaces the earlier proposal to make prompt/psyche immediately literal,
accept arbitrary runnable directive names, and flatten typed values to raw text.
Current syntax documentation and Changelog remain factual until implementation.

## Acceptance and risks

1. All five declaration kinds share property recognition, independent of name
   support. Cover ordinary/unknown/keyword/long keys, only `=`, malformed values,
   and unchanged direct fields/ranges. Verify whitespace-only values retain
   current syntax and consumer validation behavior.
2. Blank lines and structural comments leave prefixes open. The first body
   line closes property parsing permanently; later assignments and hashes stay
   text. Include the assignment-led prompt/psyche counterexample above.
3. Every listed directive retains its operators, typed values, separators,
   malformed-form rejection, public fields, and query captures. Unknown
   assignment-shaped heads in an open prefix fail without a synthetic known
   flag, directive node, or prose fallback; following source survives recovery.
4. Verify body-phase unknown assignments and explicit literal text still work;
   known misplaced directive heads retain their existing diagnostics. Preserve
   required bodies, operation/role guards, `pass`, and nested layout.
5. Cover LF/CRLF, tabs, EOF, long names, fresh/incremental equivalence, installed
   bindings, highlighting, formatter idempotence, and documentation examples.
   Run grammar default checks and relevant consumer checks for implementation.

The main design limitation is intentional: assignment-led cap/chore text cannot
be distinguished from a property while the prefix is open. The main change risk
is overextending the unknown-directive guard into body text or swallowing the
next source line during recovery. The revised owner split and the proposed
guard remain a proposed definition; no parser changes are delivered here.
