# Capabilities

Capabilities package reusable behavior or runtime access. Toolang supports four
capability kinds:

- `psyche`: style, behavior, or decision-making guidance.
- `skill`: reusable task capability.
- `service`: runtime service integration.
- `prompt`: reusable prompt template.

## Import a Capability

Use `use` when a capability already exists elsewhere:

```too
use psyche toolang.ai/reviewer
use skill company/code-review
use service github://company/caps/services/github@main
use prompt https://toolang.ai/review
```

References may be URIs or runtime-defined shorthand values.

## Declare a Psyche

A psyche describes behavioral guidance:

````too
psyche reviewer: ```md
Prefer concrete findings, exact references, and direct language.
Avoid speculative claims.
```
````

Use psyches from thunks with `psyches` directives:

```too
thunk review(path: Text) -> Message:
  psyches += reviewer

  user:
    Review {{path}}.
```

## Declare a Skill

A skill describes a reusable task capability:

````too
skill code-review: ```md
Review source code changes.
Return only actionable findings with file and line references when available.
```
````

Use skills from thunks with `skills` directives:

```too
thunk review(path: Text) -> Message:
  skills += code-review

  user:
    Review {{path}}.
```

## Declare a Service

A service describes an external runtime integration:

````too
service github: ```md
---
description: GitHub MCP service.
transport: http
target: https://mcp.github.com/mcp
headers: Authorization=Bearer $GITHUB_TOKEN
---

Use this service when repository, issue, or pull request context is needed.
```
````

Service frontmatter commonly includes:

- `description`: user-facing service description.
- `transport`: `http` or another runtime-supported transport value.
- `target`: service endpoint or command.
- `headers`: header values for HTTP services, using the runtime's expected
  inline value format.
- `env`: environment variable names for stdio or command-based services.

Runtime validation decides which properties are required for a specific service
kind.

## Declare a Prompt

A prompt stores reusable text:

````too
prompt summarize: ```md
---
params: topic, audience?
---

Summarize {{topic}} for {{audience}}.
```
````

Prompt parameters are listed in frontmatter with optional parameters marked by
`?`.

## Indented Capability Bodies

Capabilities may also use indented bodies:

```too
prompt greeting:
  description = Friendly greeting prompt
  params = name

  Write a friendly greeting for {{name}}.
```

Indented bodies use `key = value` property lines before body text. Fenced
Markdown bodies use frontmatter with `key: value` lines.

## Property Operators

Capability properties use `=` in indented bodies:

```too
skill reviewer:
  description = Code review skill

  Review code changes.
```

The operators `+=` and `-=` are only for thunk directives. Do not use them for
capability properties.
