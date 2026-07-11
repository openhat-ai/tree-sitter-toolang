# Flow Syntax Examples

This file shows every supported flow statement shape.

```too
flow examples(input: Pack) -> Answer:
  ## Bare text is shorthand for an inline run.
  Rewrite the current value.

  A single blank line remains inside the same inline run.


  Two blank lines start another inline run.

  ## Run a named agic or flow.
  run normalize

  ## Define an inline agic, optionally with a return type.
  run: Rewrite the current value.
  run -> Note:
    Extract one note from the current value.

  ## Seek another agent with a named runnable or inline agic.
  seek reviewer review
  seek reviewer -> Review:
    Review the current value.

  ## Ask the human owner.
  ask: Approve this result?
  ask:
    Choose the preferred result and explain why.

  ## Expand one item into a list with one run.
  scatter 5 plan_searches
  scatter 5 -> SearchJob:
    Generate five distinct search jobs.

  ## Expand one item into a list with independent runs.
  storm 5 sample_direction
  storm 5 sample_direction par 3
  storm 5 par 3 -> Direction:
    Generate one independent research direction.

  ## Reduce a list into one item with one run.
  gather synthesize
  gather -> Report:
    Synthesize every current item into one report.

  ## Reduce a list into one item through sequential runs.
  settle merge_next
  settle -> Report:
    Merge this item into the accumulated report.

  ## Transform every list item.
  map extract_note
  map extract_note par 5
  map par 5 -> Note:
    Extract one concise note from this item.

  ## Select by position or predicate.
  keep first 5
  keep last 5
  keep useful
  keep useful par 5
  keep par 5:
    Return true when this item is useful.

  drop first 2
  drop last 2
  drop duplicate
  drop duplicate par 5
  drop par 5:
    Return true when this item is a duplicate.

  ## Rank by descending numeric score.
  rank relevance
  rank relevance top 5
  rank relevance bottom 5 par 3
  rank top 5 par 3:
    Score this item by relevance.

  ## Bind, discard, or directly assign results.
  let jobs = scatter 5 plan_searches
  let run publish
  let guidance:
    Prefer primary sources and concrete evidence.

  ## Repeat by count, condition, or both.
  repeat 3:
    run improve

  repeat:
    run improve
    until: Return true when no material improvement remains.

  repeat 3:
    run improve
    until:
      Return true when no material improvement remains.
```

Notes:

- Named runnable forms use the return contract declared by the referenced agic
  or flow.
- `-> T` and the following body form one inline agic definition.
- `par P` limits concurrency without changing result order.
- Bare text uses the same inline-run semantics as `run:`.
- One blank line remains inside a bare text body. Two blank lines or any comment
  line split adjacent bare text into separate statements.
- `repeat` always has a count, a final `until` condition, or both.
