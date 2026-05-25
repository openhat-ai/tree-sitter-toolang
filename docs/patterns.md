# Patterns

These examples show common Toolang authoring patterns.

## Review Workflow

````too
##! Code review workflow.

use skill company/code-review
use service github://company/caps/services/github@main

struct Finding:
  path: Text
  line?: Number
  message: Text

struct Review:
  summary: Text
  findings: Finding[]

psyche reviewer: ```md
Be direct, cite exact evidence, and avoid low-confidence findings.
```

thunk review(path: Text, focus?: Text) -> Review:
  models = gpt-5
  psyches += reviewer
  skills += company/code-review
  services += github

  instruct: default
  user:
    Review {{path}}.
    Focus: {{focus}}
````

## Service-Backed Agent

````too
service linear: ```md
---
description: Linear MCP service.
transport: stdio
target: npx -y mcp-remote https://mcp.linear.app/sse
env: LINEAR_API_KEY
---

Use this service for issue and project context.
```

thunk triage(issue: Text) -> Message:
  services += linear
  tools += service-use

  user:
    Triage this issue: {{issue}}
````

## Prompt Library

````too
prompt summarize: ```md
---
params: topic, audience?
---

Summarize {{topic}} for {{audience}}.
```

prompt rewrite: ```md
---
params: tone?
---

Rewrite the input in a {{tone}} tone.
Preserve meaning.
```
````

Use prompt declarations to keep reusable text near the workflows that need it.

## Named Instructions

```too
instruct concise:
  Use short paragraphs.
  Avoid filler.

instruct reviewer:
  Report concrete findings first.
  Include exact references when possible.

thunk summarize(topic: Text) -> Message:
  instruct: concise
  user:
    Summarize {{topic}}.

thunk review(path: Text) -> Message:
  instruct: reviewer
  user:
    Review {{path}}.
```

## Call And Handoff Policy

Use `hands` and `handoffs` to declare callable sub-thunks and runtime routing
targets:

```too
thunk plan(task: Text) -> Message:
  hands = researcher, implementer
  handoffs = reviewer

  user:
    Plan work for {{task}}.
```

The runtime decides the exact semantics of allowed sub-thunk calls and handoffs.

## Exact No-Input Command

Use empty parentheses when a thunk should have no implicit input:

```too
thunk status() -> Message:
  user:
    Report current system status.
```

Use omitted parentheses when a thunk should receive the default message input:

```too
thunk reply -> Message:
  user:
    Reply to the input message.
```
