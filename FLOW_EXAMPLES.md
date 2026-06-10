# Flow Syntax Examples

This file lists the supported flow syntax forms.

```too
flow examples(in: Pack) -> Answer:
  ## Bare thunk: inline thunk body without a keyword.
  Rewrite the current value.

  Extract one note from the current value.


  This starts a separate bare thunk because it is separated by two blank lines.

  # Any comment line also starts a separate bare thunk.
  ## A doc comment can additionally describe the next statement in UI progress.
  Normalize the current value.

  ## do: named calls.
  do normalize
  do classify, normalize, summarize

  ## do: inline thunk, with optional output type.
  do: Rewrite the current value.
  do:
    Rewrite the current value.

  do to Note: Rewrite the current value.
  do to Note:
    Extract one note from the current value.

  ## ask: delegate to an agent.
  ask alice

  ## unfold: named thunk, or inline thunk with optional output type.
  unfold plan_searches

  unfold: Split into items.
  unfold:
    Split the request into independent jobs.

  unfold to SearchJob: Create search jobs from the request.
  unfold to SearchJob:
    Create search jobs from the request.

  ## keep: named predicate, or inline predicate. `par` is allowed.
  keep useful_filter
  keep useful_filter par 8

  keep: useful items
  keep:
    useful items

  keep par 8: useful items
  keep par 8:
    useful items

  ## drop: named predicate, or inline predicate. `par` is allowed.
  drop duplicate_filter
  drop duplicate_filter par 8

  drop: duplicate items
  drop:
    duplicate items

  drop par 8: duplicate items
  drop par 8:
    duplicate items

  ## rank: named ranker, inline ranker, or inline ranker with top N.
  rank ranking_rule

  rank: best items first
  rank:
    best items first

  rank 5: best five items
  rank 5:
    best five items

  ## each: named mapper, or inline mapper with optional output type and `par`.
  each search_notes
  each search_notes par 5

  each: Process each item.
  each:
    Process each item.

  each par 5: Process items in parallel.
  each par 5:
    Process items in parallel.

  each to Note: Extract a note.
  each to Note:
    Extract a note.

  each to Note par 5: Search and extract notes.
  each to Note par 5:
    Search and extract notes.

  ## fold: named reducer, or inline reducer with optional output type.
  fold synthesize_answer

  fold: Combine all items.
  fold:
    Combine all items.

  fold to Answer: Synthesize the final answer.
  fold to Answer:
    Synthesize the final answer.

  ## repeat: repeat previous executable statements in the same block.
  do search
  repeat 3

  do improve_answer
  repeat until: the answer is complete

  do collect_evidence
  repeat until:
    the answer is complete and well-supported

  do refine_answer
  repeat 5 until: the answer is complete

  do verify_answer
  repeat 5 until:
    the answer is complete and well-supported

  repeat 5:
    do collect_evidence
    do verify_sources

  repeat:
    do collect_evidence
    do verify_sources
    until: enough evidence

  repeat 5:
    do collect_evidence
    do verify_sources
    until:
      enough evidence
```

Notes:

- One blank line inside a bare thunk body keeps the text in the same bare thunk.
- Two or more blank lines split bare thunk bodies into separate bare thunk statements.
- Any comment line between bare thunk text blocks also splits them.
- A doc comment is not special for splitting; it is a comment line too, and may
  additionally describe the next bare thunk statement for UI progress.
- Short repeat forms normalize to block repeat forms before execution.
- A short repeat captures executable statements in the same flow block after the
  previous repeat statement and before the current repeat statement.
- A short repeat requires a non-empty captured range. A flow body cannot start
  with a short repeat.
- `repeat N:` and `repeat:` define explicit nested flow blocks. The block body is
  the repeat range, and a final `until:` clause may stop the loop early.
- Runtime only needs to execute block repeat semantics after normalization.
- Doc comments attached to captured statements move with those statements during
  normalization. Blank lines and unattached comments do not become executable
  repeat body entries.
- In examples such as `keep useful_filter`, `useful_filter` is a named thunk.
  Named thunk forms do not also define an inline body after `:`.
- `to Type` belongs to inline thunk forms. Named thunk forms already carry their
  own declared type.

Normalization examples:

```too
do refine_answer
repeat 5
```

normalizes to:

```too
repeat 5:
  do refine_answer
```

```too
do improve_answer
repeat until: the answer is complete
```

normalizes to:

```too
repeat:
  do improve_answer
  until: the answer is complete
```
