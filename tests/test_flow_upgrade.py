"""Public syntax contracts shared by Toolang's runnable implementations."""

import pytest
from tree_sitter import Language, Parser
import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("key", ["models", "tools", "psyches", "skills", "services", "prompts"])
@pytest.mark.parametrize("op", ["=", "+=", "-="])
def test_query_directives_preserve_the_complete_query(kind, key, op):
    query = "provider/*[price < 3], exact_name"
    root = parse(f"{kind} work:\n  {key} {op} {query}\n  {'user: Go.' if kind == 'agic' else 'run next'}\n")
    assert valid(root)
    directive = descendants(root, "directive")[0]
    assert directive.child_by_field_name("key").text.decode() == key
    assert directive.child_by_field_name("operator").text.decode() == op
    assert directive.child_by_field_name("value").text.decode() == query


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("selection", [
    "hands = worker, flow:finish", "handoffs = *", "hands = none",
    "hands = agent::agic:worker", "recall = far, near", "recall = near, far",
    "recall = default", "recall = *", "recall = none", "lanes = 4",
    "lanes = default", "instruct = default", "instruct = custom", "context = none",
])
def test_list_and_value_directives_are_shared(kind, selection):
    root = parse(f"{kind} work:\n  {selection}\n  {'user: Go.' if kind == 'agic' else 'run next'}\n")
    assert valid(root)
    assert len(descendants(root, "directive")) == 1


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("selection", [
    "hands += worker", "handoffs -= worker", "recall += far", "lanes += 4",
    "instruct -= custom", "context += default", "hands = worker,", "hands = ,worker",
    "hands = worker*", "hands = kind=agic", "hands = none, worker", "handoffs = *, worker",
    "recall = auto", "recall = none, near", "recall = default, far",
    "lanes = none", "lanes = *", "context = *", "instruct = a, b",
    "instruct default", "context: default", "instruct:\n    Inline text.",
    *[f"{key} =" for key in ("models", "tools", "psyches", "skills", "services", "prompts", "hands", "handoffs", "recall", "lanes", "instruct", "context")],
])
def test_malformed_directives_cannot_become_prose(kind, selection):
    root = parse(f"{kind} work:\n  {selection}\n")
    assert not valid(root)
    for node in descendants(root, "unroled_message") + descendants(root, "implicit_run_statement"):
        assert node.start_point.row > 1  # Recovery may retain the rejected block's text.



@pytest.mark.parametrize("head", ["settle:", "settle using:", "settle -> Text:"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_settle_fields_separate_reducer_and_initializer(head, newline, indent):
    source = (f"flow work:\n{indent}{head}\n{indent*2}Combine {{{{_}}}} with {{{{_1._}}}}.\n"
              f"{indent*3}from: literal nested text\n\n{indent*2}from:\n{indent*3}Seed.\n"
              f"{indent}run next\n").replace("\n", newline)
    root = parse(source)
    assert valid(root)
    settle = descendants(root, "settle_statement")[0]
    reducer = settle.child_by_field_name("runnable")
    assert reducer.type == "inline_agic"
    body = reducer.child_by_field_name("body").text
    assert b"from: literal nested text" in body
    assert b"Seed." not in body
    assert b"Seed." in settle.child_by_field_name("from").text
    assert len(descendants(root, "run_statement")) == 1


@pytest.mark.parametrize("statement", [
    "settle using merge", "settle: Combine {{_}}.", "settle:\n    Combine {{_}}.",
    "settle using merge:\n    from: Seed.", "settle using merge:\n    from:\n      Seed.",
    "scatter using generate", "scatter:\n    Generate items.", "storm 5 using generate",
    "repeat 5 times windowing 3:\n    run improve\n    until: Stable.",
    "repeat windowing 2:\n    run improve\n    until: Stable.",
    "repeat 5 times windowing 1:\n    run improve",
])
def test_flow_upgrade_forms(statement):
    assert valid(parse(f"flow work:\n  {statement}\n"))


@pytest.mark.parametrize("statement", [
    "scatter 3 using generate", "settle using merge:\n    from:",
    "settle:\n    from: Missing reducer.", "settle:\n    Merge.\n    from Seed.",
    "settle using merge:\n    from: Seed.\n    from: Duplicate.",
    "settle windowing 3:\n    Merge.", "repeat windowing 3:\n    run improve",
    "repeat 5 times windowing:\n    run improve", "from: Orphaned.",
])
def test_invalid_flow_upgrade_forms(statement):
    assert not valid(parse(f"flow work:\n  {statement}\n"))


def test_nested_repeat_and_settle_clause_ownership():
    root = parse("""flow work:
  repeat 5 times windowing 3:
    repeat windowing 1:
      settle:
        Merge {{_}}.
        from: Seed.
      until: Inner.
    until: Outer.
  run next
""")
    assert valid(root)
    outer, inner = descendants(root, "repeat_statement")
    assert outer.child_by_field_name("window").text == b"3"
    assert inner.child_by_field_name("window").text == b"1"
    assert b"Outer." in outer.child_by_field_name("until").text
    assert b"Inner." in inner.child_by_field_name("until").text


def test_settle_incremental_edits_match_fresh_parse():
    source = b"flow work:\n  settle:\n    Merge {{_}}.\n    from:\n      Seed.\n  run next\n"
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = source
    tree = parser.parse(source)
    assert valid(tree.root_node)
    for offset in range(len(source) + 1):
        for current in (source[:offset] + b"\n" + source[offset:], source):
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
            previous = current
