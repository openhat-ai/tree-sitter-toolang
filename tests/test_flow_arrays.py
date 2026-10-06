"""Collection target syntax from Toolang's approved Flow array definition."""
from pathlib import Path

import pytest
from tree_sitter import Language, Parser
import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


OPERATIONS = [
    ("generate 0", "generate_statement", "0", None),
    ("generate 3", "generate_statement", "3", None),
    ("generate 3 in 2 lanes", "generate_statement", "3", "2"),
    ("generate 3 in 1 lane", "generate_statement", "3", "1"),
    ("map", "map_statement", None, None),
    ("map in 2 lanes", "map_statement", None, "2"),
    ("map in 1 lane", "map_statement", None, "1"),
    ("reduce", "reduce_statement", None, None),
]
BINDINGS = ["", "let result = ", "let "]


@pytest.mark.parametrize("head,kind,count,lanes", OPERATIONS)
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("target,output", [
    (" using worker", None),
    (": Complete {{_}}.", None),
    (" -> Text: Complete {{_}}.", "Text"),
    (" -> Text[][]:\n    Complete {{_}}.", "Text[][]"),
    (" -> Part[]:\n    Complete {{_}}.", "Part[]"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_collection_targets_and_bindings(head, kind, count, lanes, binding, target, output, newline):
    source = f"flow work:\n  {binding}{head}{target}\n  run next\n".replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    operation, = descendants(root, kind)
    runnable = operation.child_by_field_name("runnable")
    if output is None and target.startswith(" using"):
        assert runnable.type == "runnable_name"
        assert runnable.text == b"worker"
        assert len(descendants(operation, "flow_using_keyword")) == 1
    else:
        assert runnable.type == "inline_agic"
        result = runnable.child_by_field_name("return")
        assert (result.text.decode() if result else None) == output
        assert runnable.child_by_field_name("content").text.strip() == b"Complete {{_}}."
        assert not descendants(operation, "flow_using_keyword")
    for name, expected in [("count", count), ("lanes", lanes)]:
        value = operation.child_by_field_name(name)
        assert (value.text.decode().strip() if value else None) == expected
    if binding:
        bound, = descendants(root, "let_statement")
        assert bound.child_by_field_name("statement") == operation
        name = bound.child_by_field_name("local")
        assert (name.text.decode().strip() if name else None) == ("result" if "=" in binding else None)
        assert bound.child_by_field_name("value") is None
    assert len(descendants(root, "run_statement")) == 1


@pytest.mark.parametrize("head,kind,count,lanes", OPERATIONS)
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("target", [" worker", " using: Complete.", " using -> Text: Complete.",
                                  " using -> Text[]:\n    Complete."])
def test_invalid_collection_targets_never_become_binding_text(head, kind, count, lanes, binding, target):
    root = parse(f"flow bad:\n  {binding}{head}{target}\n")
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    for statement in descendants(root, "let_statement"):
        assert statement.child_by_field_name("value") is None, root


@pytest.mark.parametrize("statement", [
    "generate 3 using sample in 2 lanes", "map using worker in 2 lanes",
    "generate in 2 lanes 3 using sample", "reduce in 2 lanes using merge",
    "reduce using -> Text:\n    Merge.\n    from: Seed.",
])
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("nested", [False, True])
def test_malformed_active_forms_are_rejected(statement, binding, nested):
    body = binding + statement
    if nested:
        body = "repeat 2 times:\n    " + body.replace("\n", "\n  ")
    root = parse(f"flow bad:\n  {body}\n")
    assert not valid(root), root
    for statement in descendants(root, "let_statement"):
        assert statement.child_by_field_name("value") is None, root


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("target", ["using merge", "-> Text"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_reduce_initializer_with_all_bindings(binding, target, indent):
    text = f"{indent*2}Merge {{{{_}}}}.\n" if target.startswith("->") else ""
    root = parse(f"flow work:\n{indent}{binding}reduce {target}:\n{text}"
                 f"{indent*2}from:\n{indent*3}Seed.\n{indent}run next\n")
    assert valid(root), root
    operation, = descendants(root, "reduce_statement")
    assert operation.child_by_field_name("from").text.strip() == b"Seed."
    runnable = operation.child_by_field_name("runnable")
    assert b"Seed." not in runnable.text
    assert len(descendants(root, "run_statement")) == 1


@pytest.mark.parametrize("text", ["scatter using expand", "gather using merge", "storm 3 using sample",
                                 "settle: Merge.", "map using: Transform.", "generate 3 worker"])
def test_removed_syntax_stays_literal_inside_explicit_text(text):
    root = parse(f"flow work:\n  run: {text}\n  let note =\n    {text}\n")
    assert valid(root), root
    statement, = descendants(root, "let_statement")
    assert statement.child_by_field_name("value").text.strip().decode() == text


@pytest.mark.parametrize("text", ["generation", "generate_more", "map2", "mapping", "reduce_more",
                                 "reducer", "stormy", "scattering", "gathering", "settlement"])
def test_collection_keyword_prefixes_remain_text(text):
    root = parse(f"flow work:\n  {text} remains prose.\n  let note = {text} remains prose.\n")
    assert valid(root), root
    assert len(descendants(root, "implicit_run_statement")) == 1
    statement, = descendants(root, "let_statement")
    assert statement.child_by_field_name("value").text.strip().decode() == f"{text} remains prose."


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_collection_target_and_binding_edits(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b"flow work:\n  let note = mapping is text.\n".replace(b"\n", newline)
    tree = parser.parse(previous)
    bodies = [
        b"let result = generate 2 using worker", b"let result = generate 2 worker",
        b"let map: Transform.", b"let result = map using: Transform.",
        b"let result = map -> Text[][]:\n    Transform.", b"let result = storm 2 using worker",
        b"let reduce using merge:\n    from: Seed.",
        b"let result = reduce:\n    Merge.\n    from: Seed.\n  run next",
        b"let result = settle:\n    Merge.\n    from: Seed.\n  run next",
        b"let note =\n    map using: Literal text.", b"let note = reducer is text.",
    ]
    for body in bodies + bodies[::-1]:
        current = (b"flow work:\n  " + body + b"\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current


def test_collection_fixture_and_removed_cst_nodes():
    root = parse(Path(__file__).with_name("fixtures").joinpath("flow_arrays.too").read_text())
    assert valid(root), root
    language = Language(tree_sitter_toolang.language())
    kinds = {language.node_kind_for_id(i) for i in range(language.node_kind_count)}
    assert {"generate_statement", "reduce_statement"} <= kinds
    assert not {"scatter_statement", "storm_statement", "gather_statement", "settle_statement"} & kinds


@pytest.mark.parametrize("head", ["generate 2", "generate 2 in 1 lane", "map", "map in 2 lanes", "reduce"])
@pytest.mark.parametrize("binding", BINDINGS)
def test_using_prefix_is_not_a_named_target_connector(head, binding):
    root = parse(f"flow bad:\n  {binding}{head} usingworker\n")
    assert not valid(root), root
    for statement in descendants(root, "let_statement"):
        assert statement.child_by_field_name("value") is None, root


@pytest.mark.parametrize("binding", BINDINGS)
def test_seeded_reducer_requires_a_separate_using_keyword(binding):
    root = parse(f"flow bad:\n  {binding}reduce usingmerge:\n    from: Seed.\n")
    assert not valid(root), root


@pytest.mark.parametrize("head", ["generate 2", "map", "reduce"])
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("space", [" ", "\t", " \t "])
def test_named_target_can_start_with_using_after_horizontal_space(head, binding, space):
    root = parse(f"flow work:\n  {binding}{head} using{space}usingworker\n")
    assert valid(root), root
    operation, = descendants(root, f"{head.split()[0]}_statement")
    assert operation.child_by_field_name("runnable").text.strip() == b"usingworker"


@pytest.mark.parametrize("head", ["generate 2", "map", "reduce"])
@pytest.mark.parametrize("binding", BINDINGS)
def test_using_separator_edits_preserve_the_complete_target(head, binding):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for space in [" ", "", "\t", "", "  "]:
        current = f"flow work:\n  {binding}{head} using{space}usingworker\n  run next\n".encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        assert valid(tree.root_node) == bool(space)
        if space:
            operation, = descendants(tree.root_node, f"{head.split()[0]}_statement")
            assert operation.child_by_field_name("runnable").text.strip() == b"usingworker"
        previous = current
