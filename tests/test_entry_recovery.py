"""Invalid entries stay inside their parameter list or directive prefix."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


BAD_PARAMS = [": Text", "?: Text[]", "topic:", "topic?:", "topic: Text?", "topic: Text[ ]", "topic: Text extra", "topic: Text résumé"]
DIRECTIVE_KEYS = ["models", "tools", "skills", "services", "psyches", "prompts",
                  "hands", "handoffs", "recall", "lanes", "context", "instruct"]


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("parameter", BAD_PARAMS)
@pytest.mark.parametrize("position", ["{bad}, next: Text", "before: Text, {bad}, next: Text", "before: Text, {bad}"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_invalid_parameter_entries_preserve_the_signature_body_and_next_item(kind, entry, parameter, position, newline):
    signature = position.format(bad=parameter)
    source = (f"{kind} work({signature}) -> Text:\n  ## First.\n  {entry}\n"
              "## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    assert owner.type == kind and owner.child_by_field_name("name").text == b"work"
    assert owner.child_by_field_name("return").text == b"Text"
    params = owner.child_by_field_name("params")
    diagnostic, = descendants(params, "invalid_param")
    assert diagnostic in params.children_by_field_name("param")
    start = len(f"{kind} work(") + len(position.split("{bad}")[0])
    assert (diagnostic.start_byte, diagnostic.end_byte) == (start, start + len(parameter.encode()))
    assert diagnostic.parent == params
    expected = [word for word in ["before", "next"] if word + ": Text" in signature]
    assert [node.child_by_field_name("name").text.decode()
            for node in params.children_by_field_name("param") if node.type == "param"] == expected
    body = owner.child_by_field_name("body")
    assert body.children_by_field_name("stmt" if kind == "flow" else "message")[-1].text.strip() == entry.encode()
    assert descendants(body, "item_doc")[0].text == ("## First." + newline).encode()
    assert following.child_by_field_name("name").text == b"next" and valid(following)
    assert root.named_children[-2].type == "item_doc"


@pytest.mark.parametrize("kind", ["flow", "agic"])
@pytest.mark.parametrize("key", DIRECTIVE_KEYS)
@pytest.mark.parametrize("tail", ["", " after", " ="])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n\n  # Between.\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_invalid_directives_preserve_the_prefix_and_owner_without_a_following_statement(kind, key, tail, prefix, newline):
    source = (f"{kind} work:\n{prefix}  {key}{tail}\n  tools = fast\n"
              "## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    assert owner.type == kind and owner.child_by_field_name("name").text == b"work"
    body = owner.child_by_field_name("body")
    diagnostic, = descendants(body, "invalid_directive")
    assert diagnostic in body.children_by_field_name("directive")
    assert diagnostic.child_by_field_name("key").type == "directive_key"
    assert diagnostic.child_by_field_name("key").text == key.encode()
    assert diagnostic.text == ("  " + key + tail + newline).encode()
    assert body.children_by_field_name("directive")[-1].child_by_field_name("key").text == b"tools"
    assert bool(descendants(body, "invalid_missing_stmt")) == (kind == "flow")
    assert following.child_by_field_name("name").text == b"next" and valid(following)
    assert root.named_children[-2].type == "item_doc"


@pytest.mark.parametrize("kind", ["flow", "agic"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_parameter_and_directive_repairs_preserve_incremental_entry_boundaries(kind, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    entry = "run after" if kind == "flow" else "user: After."
    for params, directive, expected in [
        ("topic: Text", "models = fast", True),
        (": Text", "models = fast", False),
        ("topic:", "models after", False),
        ("topic?:", "models =", False),
        ("topic: Text", "models = fast", True),
    ]:
        source = (f"{kind} work({params}):\n  {directive}\n  {entry}\n"
                  "flow next:\n  pass\n").replace("\n", newline).encode()
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        assert valid(root) == expected
        assert [n.child_by_field_name("name").text for n in declarations(root)] == [b"work", b"next"]
        previous = source


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("parameter", ["_", "topic?", "topic: Text", "topic?: Text[]"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_parameter_recovery_preserves_native_missing_closing_delimiters(kind, entry, parameter, newline):
    source = (f"{kind} work({parameter} -> Text:\n  {entry}\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error and not valid(root)
    owner, following = declarations(root)
    assert owner.child_by_field_name("params").children[-1].is_missing
    assert owner.child_by_field_name("params").children[-1].type == ")"
    assert owner.child_by_field_name("return").text == b"Text"
    assert descendants(owner.child_by_field_name("body"), "run_stmt" if kind == "flow" else "message")
    assert following.child_by_field_name("name").text == b"next" and valid(following)


def test_entry_metadata_keeps_normal_required_fields_and_exposes_diagnostic_peers():
    nodes = {node["type"]: node for node in json.loads(
        (Path(__file__).parents[1] / "src/node-types.json").read_text()) if node["named"]}
    for kind, field in [("param", "name"), ("directive", "key"), ("directive", "operator"), ("directive", "value")]:
        assert nodes[kind]["fields"][field]["required"]
    assert nodes["params"]["fields"]["param"]["types"] == [
        {"type": "invalid_param", "named": True}, {"type": "param", "named": True},
    ]
    for body in ["agic_body", "flow_body"]:
        assert nodes[body]["fields"]["directive"]["types"] == [
            {"type": "directive", "named": True}, {"type": "invalid_directive", "named": True},
        ]


def test_invalid_entry_highlights_keep_key_operator_name_and_recovery_text_roles():
    root = parse("flow work(topic:, : Text):\n  recall += wrong\n  run after\n")
    assert not valid(root)
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    assert {node.text for node in captures["property"]} == {b"topic", b"recall"}
    assert b"+=" in {node.text for node in captures["operator"]}
    assert b"wrong" in {node.text for node in captures["string"]}
    assert b"Text" in {node.text for node in captures["type"]}


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_unknown_assignments_remain_native_errors_after_diagnostic_prefix_entries(kind, entry, newline):
    source = (f"{kind} work:\n  models after\n  modles = wrong\n  tools = fast\n  {entry}\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error and not valid(root)
    owner, following = declarations(root)
    assert descendants(owner, "invalid_directive")
    assert all(node.child_by_field_name("key").text != b"modles"
               for kind in ["directive", "invalid_directive"] for node in descendants(owner, kind))
    assert following.child_by_field_name("name").text == b"next" and valid(following)
