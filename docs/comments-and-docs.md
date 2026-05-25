# Comments and Documentation

Toolang supports ordinary comments, inline comments, shebang comments, and doc
comments.

## Ordinary Comments

A comment starts with `#` and continues to the end of the line:

```too
# Import review behavior.
use skill company/code-review
```

Inline comments appear after another token on the same line:

```too
use skill company/code-review # Used by review thunks
```

Most comments have no semantic meaning.

## Comments in Content Blocks

Inside content blocks, comment-looking text is literal content:

````too
prompt shell-example: ```md
# This is part of the prompt text.
Run the command and explain the result.
```
````

Use this when prompt text, instructions, or Markdown content needs headings or
examples containing `#`.

## Shebang Comments

A first-line comment beginning with `#!` is a shebang comment:

```too
#!/usr/bin/env toolang

thunk:
  user:
    Run this workflow.
```

When a file is executed directly, the operating system uses the shebang to find
the Toolang interpreter. When the file is run through a Toolang command, the
shebang is parsed and ignored as a comment.

Only the first line has shebang behavior. Elsewhere, `#!` is a normal comment.

## Doc Comments

Line-start comments beginning with `##` are doc comments.

Use `##!` for program-level documentation:

```too
##! Review workflows for source code changes.
```

Use `##` before an item or struct field to document that item:

```too
## Returns actionable review findings for one path.
thunk review(path: Text) -> Message:
  user:
    Review {{path}}.
```

```too
struct ReviewFinding:
  ## File path for the finding.
  path: Text

  ## Optional 1-based line number.
  line?: Number
```

Doc comments attach to the next program item or struct field at the same
indentation level.

## Paragraphs

An empty doc comment line creates a paragraph break:

```too
## Reviews a file.
##
## Returns a concise summary and actionable findings.
thunk review(path: Text) -> Message:
  user:
    Review {{path}}.
```

A blank line breaks doc attachment:

```too
## This comment does not attach.

thunk review(path: Text) -> Message:
  user:
    Review {{path}}.
```

Non-doc comments do not attach as documentation.
