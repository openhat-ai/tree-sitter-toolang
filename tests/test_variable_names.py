"""Name spelling and contextual keyword handling."""

from pathlib import Path
import re

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


from test_vocabulary_support import KEYWORD_NAMES


KEYWORDS = sorted(KEYWORD_NAMES)
LOCAL_CONTEXTS = [
    ("flow work:\n  let {name} = Evidence.\n", "local_name"),
    ("flow work:\n  let {name} = run worker\n", "local_name"),
]
NAME_CONTEXTS = [
    ("flow work({name}):\n  pass\n", "param_name"),
    ("flow work({name}: Text):\n  pass\n", "param_name"),
    ("flow work({name}?: Text):\n  pass\n", "param_name"),
    ("agic work({name}):\n  pass\n", "param_name"),
    ("agic work({name}: Text):\n  pass\n", "param_name"),
    ("agic work({name}?: Text):\n  pass\n", "param_name"),
    ("## @param {name} Description.\nflow work:\n  pass\n", "param_name"),
    ("flow work:\n  await {name}\n", "handle_name"),
]
CONTEXTS = LOCAL_CONTEXTS + NAME_CONTEXTS


@pytest.fixture(scope="module")
def highlights():
    language = Language(tree_sitter_toolang.language())
    return Query(language, (Path(__file__).parents[1] / "queries/highlights.scm").read_text())


@pytest.mark.parametrize("name", KEYWORDS)
@pytest.mark.parametrize("source, kind", CONTEXTS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_keywords_are_names_in_explicit_name_contexts(name, source, kind, newline, highlights):
    source = source.format(name=name).replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    node, = descendants(root, kind)
    assert node.text == name.encode()
    assert node.child_count == 0
    assert source.encode()[node.start_byte:node.end_byte] == name.encode()
    assert node.end_byte - node.start_byte == len(name)
    assert all((capture.start_byte, capture.end_byte) != (node.start_byte, node.end_byte)
               for capture in QueryCursor(highlights).captures(root).get("keyword", []))


@pytest.mark.parametrize("keyword", KEYWORDS)
def test_keyword_membership_uses_the_whole_identifier(keyword):
    for name in (keyword + "_value", "value_" + keyword, keyword + "2"):
        root = parse(CONTEXTS[0][0].format(name=name))
        assert valid(root), root
        local, = descendants(root, "local_name")
        assert local.text.decode() == name
        assert local.child_count == 0


@pytest.mark.parametrize("source, kind", CONTEXTS)
@pytest.mark.parametrize("name", ["a", "z0", "a__", "a_0_b", "a" * 128, "x9_" * 50,
                                  "", "_name", "9name", "Name", "aB", "a-b", "a.b", "变量"])
def test_variable_name_regex_boundaries(source, kind, name):
    root = parse(source.format(name=name))
    if not name and "({name})" in source:
        assert valid(root) and not descendants(root, "param_name")
        return
    expected = bool(re.fullmatch(r"[a-z][a-z0-9_]*", name))
    assert valid(root) == expected, root
    if expected:
        node, = descendants(root, kind)
        assert node.text.decode() == name
        assert node.child_count == 0


@pytest.mark.parametrize("source, kind", CONTEXTS)
def test_primary_input_marker_remains_special(source, kind):
    assert valid(parse(source.format(name="_"))) == (kind == "param_name")


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_name_edits_match_fresh_validation_and_ranges(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for source, _kind in CONTEXTS:
        for name in ["value", "until", "until2", "spawn", "run", "default", "name_", "_", "aB", "a" * 64, "value"]:
            current = source.format(name=name).encode().replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node), current
            previous = current


@pytest.mark.parametrize("name", KEYWORDS)
@pytest.mark.parametrize("assignment", ["=", " = ", "\t=\t"])
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
def test_assignment_selects_keyword_destination_without_changing_ranges(name, assignment, ending):
    source = f"flow work:\n  let {name}{assignment}spawn worker # Result.".replace("\n", ending or "\n") + ending
    root = parse(source)
    assert valid(root), root
    binding, = descendants(root, "let_statement")
    local = binding.child_by_field_name("local")
    assert local.type == "local_name" and local.text == name.encode()
    assert local.child_count == 0
    assert local.end_byte - local.start_byte == len(name)
    assert binding.child_by_field_name("statement").type == "spawn_statement"
    operator, = descendants(binding, "assign_operator")
    assert operator.text == b"=" and operator.end_byte == operator.start_byte + 1
    assert source.encode()[local.end_byte:operator.start_byte] == assignment.split("=")[0].encode()
    comment, = descendants(root, "plain_comment")
    assert comment.text == b"# Result."


@pytest.mark.parametrize("name", KEYWORDS)
def test_keyword_destinations_accept_indented_literal_values(name):
    source = f"flow work:\n  let {name} =\n    run is literal here.\n    # Literal comment.\n  await {name}\n"
    root = parse(source)
    assert valid(root), root
    binding, = descendants(root, "let_statement")
    value = binding.child_by_field_name("value")
    assert value.type == "content"
    assert [node.text for node in descendants(value, "text")] == [
        b"    run is literal here.", b"    # Literal comment.",
    ]
    handle, = descendants(root, "handle_name")
    assert handle.text == name.encode()
    assert not descendants(root, "run_statement")


@pytest.mark.parametrize("statement, kind", [
    ("run worker", "run_statement"),
    ("async run worker", "run_statement"),
    ("spawn worker", "spawn_statement"),
    ("await sort", "await_statement"),
    ("sort ascending by score", "sort_statement"),
])
def test_anonymous_let_operations_keep_their_meaning(statement, kind):
    root = parse(f"flow work:\n  let {statement}\n")
    assert valid(root), root
    binding, = descendants(root, "let_statement")
    assert binding.child_by_field_name("local") is None
    assert binding.child_by_field_name("statement").type == kind
    assert binding.child_by_field_name("value") is None


@pytest.mark.parametrize("head", [
    "run", "run =", "run = run", "run = until check", "exec worker",
    "exec = exec worker", "until check", "sort broken", "_ = Evidence.",
    "run\n  = Evidence.", "run # No assignment.\n  = Evidence.",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_keyword_binding_errors_preserve_following_source(head, newline):
    source = f"flow work:\n  let {head}\n  run after\nflow next:\n  pass\n".replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    assert len([node for node in root.named_children if node.type == "flow"]) == 2
    assert any(node.child_by_field_name("target") is not None
               and node.child_by_field_name("target").text == b"after"
               for node in descendants(root, "run_statement"))


@pytest.mark.parametrize("name", KEYWORDS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incremental_keyword_assignments_match_fresh_parses(name, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for head in [f"let {name}", f"let {name} = Evidence.", f"let {name}=run worker",
                 f"let {name}\t=\tspawn worker", f"let {name} =",
                 f"let {name} = run", f"let {name} = until check", f"let {name} = Evidence."]:
        current = f"flow work:\n  {head}\n  run after\nflow next:\n  pass\n".replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node), current
        assert len([node for node in tree.root_node.named_children if node.type == "flow"]) == 2
        assert any(node.child_by_field_name("target") is not None
                   and node.child_by_field_name("target").text == b"after"
                   for node in descendants(tree.root_node, "run_statement"))
        previous = current
