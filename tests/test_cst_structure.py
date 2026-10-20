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
          "agent_name", "cap_name", "chore_name", "builtin_type",
          "text", "role", "directive_key", "recall_source"}
PUBLIC_NODES = set("""
agent_name agic agic_body ask_stmt await_stmt blank_line builtin_type cap_body cap_kind
cap_name chore chore_body chore_name content context directive directive_key drop_stmt
exec_stmt field flow flow_body generate_stmt handle_name identifier implicit_run_stmt
inline_agic instruct integer_literal invalid_agic_message invalid_directive invalid_flow_stmt
invalid_missing_body invalid_missing_content invalid_missing_stmt invalid_missing_type
invalid_param invalid_run_target item_doc keep_stmt let_stmt local_name map_stmt message
newline param param_doc param_name params plain_comment program program_doc prompt property
psyche query_value recall_source recall_value reduce_stmt repeat_body repeat_stmt role
route_value run_stmt runnable_name runnable_ref seek_stmt selection service shebang_comment
skill sort_stmt spawn_stmt struct struct_body text type type_name until_clause with
""".split())


@pytest.mark.parametrize("path", FIXTURES, ids=lambda path: path.stem)
def test_fixture_names_are_leaves_and_declarations_are_direct(path):
    root = parse(path.read_text())
    assert valid(root), root
    assert declarations(root)
    for node in walk(root):
        assert node.type in PUBLIC_NODES, node
        if node.type in LEAVES:
            assert node.child_count == 0, node


def test_leaf_contract_covers_every_named_role_and_has_no_forwarding_wrappers():
    seen = {node.type for path in FIXTURES for node in walk(parse(path.read_text()))}
    assert LEAVES <= seen
    metadata = json.loads((ROOT / "src/node-types.json").read_text())
    assert {node["type"] for node in metadata if node["named"]} == PUBLIC_NODES
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
        assert declaration.child_by_field_name("target") is None
    parameter, = descendants(root, "param")
    assert parameter.child_by_field_name("name").type == "param_name"
    assert parameter.child_by_field_name("param") is None
    doc, = descendants(root, "param_doc")
    assert doc.child_by_field_name("name") is None
    assert doc.child_by_field_name("param").type == "param_name"
    for binding in descendants(root, "let_stmt"):
        assert binding.child_by_field_name("name") is None
        local = binding.child_by_field_name("local")
        assert local.type == "local_name" and local.child_count == 0
    for statement in descendants(root, "await_stmt"):
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
        ("[]", b"[]", 0), ("[]", b"[]", 0),
    ]
    assert all(not node.is_named for node in value.children_by_field_name("suffix"))


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


@pytest.mark.parametrize("kind", ["prompt", "service", "chore"])
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
        assert [node.text.strip() for node in descendants(owner.child_by_field_name("body").child_by_field_name("content"), "text")] == [b"Body."]
        assert declarations(root)[1].child_by_field_name("name").text == b"next"
        assert valid(root) == expected_valid
        assert owner.has_error == (not expected_valid)
        previous = source
