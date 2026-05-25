# Language Reference

This page summarizes Toolang syntax for users. It is not a replacement for the
formal grammar, but it follows the same language shape.

## Top-Level Items

A Toolang file may contain these top-level items:

````too
use skill company/review

struct Result:
  text: Text

psyche concise: ```md
Be concise.
```

skill reviewer: ```md
Review code and report actionable findings.
```

service github: ```md
---
description: GitHub MCP service.
transport: http
target: https://mcp.github.com/mcp
---

Use this service for GitHub operations.
```

prompt summarize: ```md
---
params: topic
---

Summarize {{topic}}.
```

instruct:
  Answer directly.

thunk summarize(topic: Text) -> Message:
  user:
    Summarize {{topic}}.
````

Blank lines and comments may appear between top-level items.

## Layout

Toolang uses indentation for nested blocks:

```too
struct Person:
  name: Text
  email?: Text
```

Lines in the same block must share the same indentation level. Blank lines are
allowed in many places and are useful for separating directives from message
blocks.

## Comments

Use `#` for comments:

```too
# Top-level comment
use skill company/review # Inline comment
```

Inside fenced or indented content blocks, comment-looking text is literal content
unless the grammar position treats it as a comment.

## Names

Type names begin with an uppercase letter:

```too
struct ReviewResult:
  summary: Text
```

Value names begin with a lowercase letter and may contain lowercase letters,
digits, underscores, and hyphens:

```too
thunk review-file(path: Text) -> Message:
  user:
    Review {{path}}.
```

## Types

Built-in types:

- `Text`
- `Number`
- `Boolean`
- `Json`
- `Message`

User-defined types are struct names:

```too
struct ReviewFinding:
  message: Text

struct ReviewResult:
  findings: ReviewFinding[]
```

Use `[]` for arrays:

```too
tags: Text[]
```

## Imports

Use `use` to import a capability:

```too
use psyche toolang.ai/reviewer
use skill company/code-review
use service github://company/caps/services/github@main
use prompt https://toolang.ai/review
```

The runtime resolves references from URIs or shorthand references.

## Structs

Structs define typed records:

```too
struct UserProfile:
  name: Text
  email?: Text
  tags: Text[]
```

Optional fields put `?` after the field name:

```too
email?: Text
```

## Capability Declarations

Toolang supports four capability declarations:

````too
psyche reviewer: ```md
Prefer direct, evidence-based feedback.
```

skill code-review: ```md
Review source changes and produce findings.
```

service github: ```md
---
description: GitHub MCP service.
transport: http
target: https://mcp.github.com/mcp
---

Use this service for repository work.
```

prompt summarize: ```md
---
params: topic
---

Summarize {{topic}}.
```
````

Capability bodies may be indented blocks or fenced Markdown blocks. Fenced
Markdown bodies use frontmatter for properties.

## Instructions

Top-level `instruct` declarations define reusable instruction text:

```too
instruct:
  Answer with concrete, testable details.

instruct reviewer:
  Report only actionable review findings.
```

If the name is omitted, it defaults semantically to `default`.

## Thunks

A thunk is an executable unit:

```too
thunk review(path: Text, focus?: Text) -> Message:
  models = gpt-5
  skills += company/code-review

  instruct: reviewer
  user:
    Review {{path}}.
    Focus: {{focus}}
```

If a thunk name is omitted, it defaults semantically to `default`.

If parameters are omitted, the thunk semantically receives `(input: Message)`.
If empty parentheses are present, the thunk has exactly no parameters:

```too
thunk receive-default-input:
  user:
    Continue from the input message.

thunk no-input() -> Message:
  user:
    Say hello.
```

If the output type is omitted, it defaults semantically to `Message`.
