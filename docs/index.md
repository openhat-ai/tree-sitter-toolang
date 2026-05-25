# Toolang User Documentation

Toolang is a small language for describing agent capabilities, reusable prompts,
runtime services, typed data, and callable thunks.

This documentation is written for Toolang users who want to author `.too` files.
For the formal grammar, see [GRAMMAR.md](../GRAMMAR.md).

## Start Here

- [Getting Started](getting-started.md): write a small Toolang file and learn the
  top-level building blocks.
- [Language Reference](language-reference.md): syntax rules, naming, layout, and
  every top-level declaration.
- [Capabilities](capabilities.md): declare and import psyches, skills, services,
  and prompts.
- [Thunks](thunks.md): define callable agent workflows with inputs, outputs,
  directives, and message blocks.
- [Types and Structs](types-and-structs.md): model structured inputs and outputs.
- [Comments and Documentation](comments-and-docs.md): use ordinary comments,
  shebangs, and doc comments.
- [Patterns](patterns.md): common authoring patterns for review agents, service
  integrations, and prompt reuse.

## File Shape

A Toolang file is a sequence of top-level items:

````too
use skill company/review

struct ReviewFinding:
  path: Text
  line?: Number
  message: Text

prompt review: ```md
---
params: path, focus?
---

Review {{path}} carefully.
{{focus}}
```

thunk review(path: Text, focus?: Text) -> Message:
  models = gpt-5
  skills += company/review

  instruct: default
  user:
    Review {{path}}.
    Focus: {{focus}}
````

## Core Concepts

- `use` imports an existing capability by URI or shorthand.
- `psyche`, `skill`, `service`, and `prompt` declare reusable capabilities.
- `struct` defines typed records for parameters and return values.
- `instruct` defines reusable instruction text.
- `thunk` defines an executable unit with optional parameters, output type,
  runtime directives, and message blocks.

Toolang uses indentation to group blocks. Keep related lines at the same
indentation level, and use blank lines to separate sections for readability.
