"""Independently authored language vocabulary expectations, not generated data."""

DECLARATIONS = set("with struct psyche skill service prompt task chore context instruct agic flow".split())
OPERATIONS = set("run seek ask generate map reduce keep drop sort repeat spawn await".split())
CLAUSES = set("until from windowing using if by in lane lanes ascending descending time times first last".split())
DIRECTIVES = set("models tools skills services psyches prompts hands handoffs recall lanes context instruct".split())
ROLES = {"user", "assistant", "tool"}
AGIC_KEYWORDS = ROLES | DIRECTIVES | {"pass"}
FLOW_KEYWORDS = DECLARATIONS | OPERATIONS | CLAUSES | AGIC_KEYWORDS | {"let", "exec", "async", "_"}
VARIABLE_KEYWORDS = (FLOW_KEYWORDS - {"_"}) | {"default", "none"}
REMOVED_WORDS = set("scatter gather storm settle rank par top bottom think use thunk call do unfold each fold head tail".split())
TABLES = {
    "flow": FLOW_KEYWORDS,
    "agic": AGIC_KEYWORDS,
    "directive": DIRECTIVES,
    "operation_binding": OPERATIONS | {"async"},
    "restricted_binding": {"until", "_"},
    "variable": VARIABLE_KEYWORDS,
}
