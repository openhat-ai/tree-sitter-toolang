"""Independently authored language vocabulary expectations, not generated data."""

DECLARATIONS = set("with struct psyche skill service prompt chore context instruct agic flow".split())
OPERATIONS = set("run seek ask generate map reduce keep drop sort repeat spawn await".split())
CLAUSES = set("until initial windowing using if by in lane lanes ascending descending time times first last".split())
DIRECTIVES = set("models tools skills services psyches prompts hands handoffs recall lanes context instruct".split())
ROLES = {"user", "assistant", "tool"}
AGIC_KEYWORDS = ROLES | DIRECTIVES | {"pass"}
FLOW_KEYWORDS = DECLARATIONS | OPERATIONS | CLAUSES | AGIC_KEYWORDS | {"let", "exec", "async", "_"}
KEYWORD_NAMES = (FLOW_KEYWORDS - {"_"}) | {"default", "none"}
ORDINARY_WORDS = set("review compose summarize combine translate explain inspect organize compare annotate draft refine analyze group select merge split collect expand".split())
TABLES = {
    "flow": FLOW_KEYWORDS,
    "agic": AGIC_KEYWORDS,
    "directive": DIRECTIVES,
    "operation_binding": OPERATIONS | {"async"},
    "restricted_binding": {"until", "_"},
}
