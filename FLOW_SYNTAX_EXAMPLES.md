# Flow Syntax Examples

This file lists the intended flow syntax forms for review. It is a design
example, not yet a complete grammar contract.

```too
flow examples(in: Pack) -> Answer:
  ## Bare thunk: inline thunk body without a keyword.
  Rewrite the current value.

  Extract one note from the current value.


  This starts a separate bare thunk because it is separated by two blank lines.

  ## This comment also starts a separate bare thunk.
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
  keep par 8 useful_filter

  keep: useful items
  keep:
    useful items

  keep par 8: useful items
  keep par 8:
    useful items

  ## drop: named predicate, or inline predicate. `par` is allowed.
  drop duplicate_filter
  drop duplicate_filter par 8
  drop par 8 duplicate_filter

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
  each par 5 search_notes

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
```

Notes:

- One blank line inside a bare thunk body keeps the text in the same bare thunk.
- Two or more blank lines split bare thunk bodies into separate bare thunk steps.
- A comment between bare thunk text blocks also splits them; a doc comment may
  describe the next bare thunk step for UI progress.
- `repeat` requires at least one previous executable statement in the same
  block. A flow body cannot start with `repeat`.
- In examples such as `keep useful_filter`, `useful_filter` is a named thunk.
  Named thunk forms do not also define an inline body after `:`.
- `to Type` belongs to inline thunk forms. Named thunk forms already carry their
  own declared type.
