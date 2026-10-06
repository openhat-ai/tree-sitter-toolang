"""CST names reflect semantic roles without exposing lexical forwarding rules."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid, walk


ROOT = Path(__file__).parents[1]
FIXTURES = sorted((ROOT / "tests/fixtures").glob("*.too"))
LEAVES = {"identifier", "runnable_name", "type_name", "local_name", "handle_name", "param_name",
          "agent_name", "cap_name", "job_name", "array_suffix", "builtin_type",
          "text_line", "role", "directive_operator", "assign_operator", "directive_key", "recall_source"}
REMOVED = {"item", "base_type", "user_type", "struct_name", "type_suffix",
           "snake_name", "pascal_name", "agic_name", "flow_name", "field_name",
           "property_key", "context_name", "instruct_name", "runnable",
           "agent", "directive_op", "cap_ref", "property_value", "cap_body", "context_body", "instruct_body"}


@pytest.mark.parametrize("path", FIXTURES, ids=lambda path: path.stem)
def test_fixture_names_are_leaves_and_declarations_are_direct(path):
    root = parse(path.read_text())
    assert valid(root), root
    assert declarations(root)
    for node in walk(root):
        assert node.type not in REMOVED, node
        if node.type in LEAVES:
            assert node.child_count == 0, node


def test_leaf_contract_covers_every_named_role_and_has_no_forwarding_wrappers():
    seen = {node.type for path in FIXTURES for node in walk(parse(path.read_text()))}
    assert LEAVES <= seen
    rules = json.loads((ROOT / "src/grammar.json").read_text())["rules"]
    for name, rule in rules.items():
        if name.startswith("_"):
            continue
        assert not (rule["type"] == "SYMBOL" and not rule["name"].startswith("_")), name
        assert rule["type"] != "ALIAS", name


@pytest.mark.parametrize("name", ["_", "topic", "some_name"])
def test_parameter_signature_and_documentation_share_leaf_names(name):
    root = parse(f"## @param {name} Input.\nagic work({name}: Text):\n  pass\n")
    assert valid(root), root
    names = descendants(root, "param_name")
    assert len(names) == 2
    assert all(node.child_count == 0 and node.text == name.encode() for node in names)


def test_name_fields_distinguish_declarations_bindings_and_references():
    root = parse("agic worker:\n  pass\n"
                 "## @param topic Input topic.\nflow launch(topic: Text):\n"
                 "  let job = spawn worker\n  let result = await job\n"
                 "  let job = await job\n")
    assert valid(root), root
    for kind in ["agic", "flow"]:
        declaration, = descendants(root, kind)
        assert declaration.child_by_field_name("name").type == "runnable_name"
        assert declaration.child_by_field_name("runnable") is None
    parameter, = descendants(root, "param")
    assert parameter.child_by_field_name("name").type == "param_name"
    assert parameter.child_by_field_name("param") is None
    doc, = descendants(root, "param_doc_tag")
    assert doc.child_by_field_name("name") is None
    assert doc.child_by_field_name("param").type == "param_name"
    for binding in descendants(root, "let_statement"):
        assert binding.child_by_field_name("name") is None
        local = binding.child_by_field_name("local")
        assert local.type == "local_name" and local.child_count == 0
    for statement in descendants(root, "await_statement"):
        handle = statement.child_by_field_name("handle")
        assert handle.type == "handle_name" and handle.child_count == 0
        assert handle.text == b"job"


@pytest.mark.parametrize("type_name,kind", [("Text", "builtin_type"), ("Result", "type_name")])
def test_type_fields_point_directly_to_base_and_array_suffixes(type_name, kind):
    root = parse(f"struct Example:\n  result: {type_name}[][]\n")
    assert valid(root), root
    value, = descendants(root, "type")
    base = value.child_by_field_name("base")
    assert base.type == kind and base.text == type_name.encode() and base.child_count == 0
    assert [(node.type, node.text, node.child_count)
            for node in value.children_by_field_name("suffix")] == [
        ("array_suffix", b"[]", 0), ("array_suffix", b"[]", 0),
    ]


@pytest.mark.parametrize("filename", ["tags.scm", "outline.scm"])
def test_symbol_queries_capture_declaration_names_without_call_targets(filename):
    language = Language(tree_sitter_toolang.language())
    query = Query(language, (ROOT / "queries" / filename).read_text())
    for path in FIXTURES:
        root = parse(path.read_text())
        expected = {(name.start_byte, name.end_byte)
                    for node in declarations(root)
                    if (name := node.child_by_field_name("name")) is not None}
        names = QueryCursor(query).captures(root).get("name", [])
        assert {(name.start_byte, name.end_byte) for name in names} == expected, path


@pytest.mark.parametrize("kind", ["prompt", "service", "task", "chore"])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_missing_property_values_stay_local_during_incremental_edits(kind, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for value, expected_valid in [
        ("Good.", True), ("", False), (" ", True), ("\t", True),
        ("# Missing.", False), (" # Whitespace value.", True), ("Repaired.", True),
    ]:
        source = (f"{kind} work:\n  description ={value}\n\n  Body.\n"
                  "flow next:\n  run worker\n").encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        owner = declarations(root)[0]
        assert [node.text.strip() for node in descendants(owner, "text_body_line")] == [b"Body."]
        assert declarations(root)[1].child_by_field_name("name").text == b"next"
        assert valid(root) == expected_valid
        assert owner.has_error == (not expected_valid)
        previous = source
