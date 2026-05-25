# Getting Started

This guide walks through a small `.too` file that defines a review workflow.

## Create a File

Create a file named `review.too`:

````too
##! Review workflow for source files.

use skill company/code-review

struct ReviewFinding:
  path: Text
  line?: Number
  message: Text

struct ReviewResult:
  summary: Text
  findings: ReviewFinding[]

psyche reviewer: ```md
Prefer concrete findings, exact file references, and direct language.
```

prompt review-file: ```md
---
params: path, focus?
---

Review {{path}}.
{{focus}}
```

thunk review(path: Text, focus?: Text) -> ReviewResult:
  models = gpt-5
  psyches += reviewer
  skills += company/code-review

  instruct: default
  user:
    Review {{path}}.
    Focus: {{focus}}
````

## What Each Part Does

The `use` line imports an existing skill:

```too
use skill company/code-review
```

The `struct` declarations define typed data that the thunk can return:

```too
struct ReviewResult:
  summary: Text
  findings: ReviewFinding[]
```

The `psyche` declaration describes style and behavior that can be attached to a
thunk:

````too
psyche reviewer: ```md
Prefer concrete findings, exact file references, and direct language.
```
````

The `prompt` declaration defines reusable prompt text with parameters:

````too
prompt review-file: ```md
---
params: path, focus?
---

Review {{path}}.
{{focus}}
```
````

The `thunk` declaration defines an executable workflow:

```too
thunk review(path: Text, focus?: Text) -> ReviewResult:
  models = gpt-5
  psyches += reviewer
  skills += company/code-review

  instruct: default
  user:
    Review {{path}}.
    Focus: {{focus}}
```

## Naming Basics

- Type names start with an uppercase letter, such as `ReviewResult`.
- Value names start with a lowercase letter, such as `review`, `path`, or
  `review-file`.
- Built-in types are `Text`, `Number`, `Boolean`, `Json`, and `Message`.
- Add `[]` after a type for an array, such as `ReviewFinding[]`.
- Add `?` after a field or parameter name to make it optional, such as
  `focus?: Text`.

## Next Steps

Read [Thunks](thunks.md) to learn how runtime directives and message blocks work,
then read [Capabilities](capabilities.md) to learn how to package reusable
behavior.
