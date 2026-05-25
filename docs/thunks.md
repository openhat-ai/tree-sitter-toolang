# Thunks

A thunk is a callable Toolang workflow. It can declare parameters, an output
type, runtime directives, and message blocks.

## Basic Form

```too
thunk summarize(topic: Text) -> Message:
  user:
    Summarize {{topic}}.
```

The general shape is:

```too
thunk name(param: Type, optional?: Type) -> OutputType:
  directives

  message blocks
```

## Defaults

If the name is omitted, the thunk semantically defaults to `default`:

```too
thunk:
  user:
    Continue from the input.
```

If parameters are omitted, the thunk semantically receives `(input: Message)`:

```too
thunk reply:
  user:
    Reply to the current message.
```

If empty parentheses are present, there are exactly no parameters:

```too
thunk hello() -> Message:
  user:
    Say hello.
```

If the output type is omitted, it semantically defaults to `Message`.

## Parameters

Parameters require explicit types:

```too
thunk classify(text: Text, strict?: Boolean) -> Message:
  user:
    Classify {{text}}.
    Strict mode: {{strict}}
```

Use `?` after the parameter name for optional parameters:

```too
focus?: Text
```

The name `input` is reserved. If a thunk declares `input`, it must be the first
parameter:

```too
thunk rewrite(input: Message, tone?: Text) -> Message:
  user:
    Rewrite the input in a {{tone}} tone.
```

Parentheses mean exact parameters. No implicit `input` parameter is added when a
parameter list is present.

## Output Types

Use `->` to declare the output type:

```too
struct ReviewResult:
  summary: Text
  findings: Text[]

thunk review(path: Text) -> ReviewResult:
  user:
    Review {{path}} and return structured findings.
```

## Directives

Directives configure runtime context for a thunk:

```too
thunk review(path: Text) -> Message:
  models = gpt-5
  skills += code-review
  services += github
  tools = shell, service-use

  user:
    Review {{path}}.
```

Supported directive keys:

- `models`
- `tools`
- `skills`
- `services`
- `psyches`
- `hands`
- `handoffs`

`hands` lists the sub-thunks this thunk may call. `handoffs` lists the thunks
this thunk may transfer control to.

Supported operators:

- `=` replaces the current value list.
- `+=` adds values.
- `-=` removes values.

The `models` directive supports only `=`.

Directive values are comma-separated:

```too
skills += review, patch
services -= linear
```

Runtime validation decides whether referenced names exist and whether a
directive is allowed in the current context.

## Message Blocks

Thunk message blocks define the messages sent to the runtime:

```too
thunk rewrite(input: Message, tone?: Text) -> Message:
  system:
    Rewrite faithfully and preserve meaning.

  user:
    Rewrite the input in a {{tone}} tone.
```

Supported block kinds:

- `instruct`
- `system`
- `user`

Each kind should appear at most once in a thunk. Runtime behavior decides what
happens when a block is omitted.

## Inline Block Values

A block can reference a named value inline:

```too
thunk review(path: Text) -> Message:
  instruct: reviewer
  user:
    Review {{path}}.
```

The special inline values `default` and `none` are name-like values whose
semantics are decided by the runtime:

```too
thunk summarize(topic: Text) -> Message:
  instruct: default
  user:
    Summarize {{topic}}.
```

Inline block values that do not match a name are treated as literal inline text:

```too
thunk say(message: Text) -> Message:
  user: Say {{message}} exactly.
```

## Fenced Blocks

Message blocks may use fenced content:

````too
thunk explain(topic: Text) -> Message:
  system: ```md
Explain with short sections and concrete examples.
```

  user: ```md
Explain {{topic}}.
```
````

Indented blocks remove common content indentation, trim outer blank lines, and
preserve inner blank lines and relative indentation. Fenced blocks preserve
content after fence-indent dedent.

## Body Rules

Thunk bodies contain directives followed by message blocks:

```too
thunk review(path: Text) -> Message:
  models = gpt-5
  skills += code-review

  instruct: reviewer
  user:
    Review {{path}}.
```

Do not put bare text directly in a thunk body. Put message text under `system`,
`user`, or another supported block kind.
