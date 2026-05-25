# Types and Structs

Toolang uses simple named types for parameters, fields, and thunk outputs.

## Built-In Types

Toolang provides these built-in types:

- `Text`
- `Number`
- `Boolean`
- `Json`
- `Message`

Use them in struct fields and thunk signatures:

```too
struct Request:
  title: Text
  priority: Number
  approved: Boolean
  metadata: Json

thunk handle(input: Message) -> Message:
  user:
    Handle the input message.
```

## User Types

Define user types with `struct`:

```too
struct ReviewFinding:
  path: Text
  line?: Number
  message: Text

struct ReviewResult:
  summary: Text
  findings: ReviewFinding[]
```

Struct names are type names and start with an uppercase letter.

## Arrays

Add `[]` after a type for an array:

```too
struct Batch:
  files: Text[]
  findings: ReviewFinding[]
```

Arrays can be used wherever a type is accepted:

```too
thunk review(files: Text[]) -> ReviewResult:
  user:
    Review these files: {{files}}
```

## Optional Fields

Put `?` after a field name to make it optional:

```too
struct UserProfile:
  name: Text
  email?: Text
```

The optional marker is separate from the colon:

```too
email?: Text
```

## Optional Parameters

Thunk parameters use the same optional marker:

```too
thunk summarize(topic: Text, audience?: Text) -> Message:
  user:
    Summarize {{topic}} for {{audience}}.
```

## Struct Documentation

Use doc comments to document structs and fields:

```too
## A single review finding.
struct ReviewFinding:
  ## Path to the reviewed file.
  path: Text

  ## 1-based line number when available.
  line?: Number

  ## Human-readable finding message.
  message: Text
```

Doc comments can be used by documentation generators and runtime metadata.
