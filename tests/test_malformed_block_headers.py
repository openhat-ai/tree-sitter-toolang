"""Malformed block delimiters cannot replace their enclosing header's colon."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


HEADERS = [
    "generate :", "generate in 2 lanes:", "generate 2 in:",
    "keep in:", "keep in 2:", "keep in 2 lanes:",
    "drop in:", "drop in 2:", "drop in 2 lanes:",
    "sort ascending:", "sort ascending in:", "sort ascending in 2:",
    "sort ascending in 2 lanes:", "repeat 2:",
]


@pytest.mark.parametrize("header", HEADERS)
@pytest.mark.parametrize("binding", ["", "let result = ", "let "])
@pytest.mark.parametrize("scope", ["first", "later", "repeat"])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_malformed_block_header_retains_surrounding_statements_and_docs(header, binding, scope, indent, newline):
    nested = scope == "repeat"
    depth = 2 if nested else 1
    source = "flow first:\n" + (indent + "run before\n" if scope != "first" else "")
    if nested:
        source += indent + "repeat:\n" + indent * 2 + "run inner\n"
    source += indent * depth + binding + header + "\n" + indent * (depth + 1) + "Orphaned text.\n"
    source += indent * depth + "## Following.\n" + indent * depth + "run after\n"
    if nested:
        source += indent + "run after_outer\n"
    source += "## Next.\nflow next:\n  pass\n"
    source = source.replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    owner = declarations(root)[0]
    assert owner.type == "flow" and owner.child_by_field_name("name").text == b"first", root
    assert owner.child_by_field_name("colon").start_byte == source.encode().index(b":"), root
    for target, parent in [("after", "repeat_body" if nested else "flow_body"),
                           *([("before", "flow_body")] if scope != "first" else []),
                           *([("inner", "repeat_body"), ("after_outer", "flow_body")] if nested else [])]:
        statement, = [n for n in descendants(root, "run_statement")
                      if n.child_by_field_name("target") is not None and n.child_by_field_name("target").text == target.encode()]
        assert valid(statement) and statement.parent.type == parent, root
    doc, = [n for n in descendants(root, "item_doc") if n.text == b"## Following." + newline.encode()]
    assert doc.parent.type == ("repeat_body" if nested else "flow_body") and valid(doc), root
    assert root.named_children[-2].type == "item_doc", root
    assert valid(declarations(root)[-1]), root


@pytest.mark.parametrize("broken,repaired", [
    ("generate :", "generate 2:"), ("keep in 2 lanes:", "keep in 2 lanes if:"),
    ("sort ascending:", "sort ascending by:"), ("repeat 2:", "repeat 2 times:"),
])
@pytest.mark.parametrize("binding", ["", "let result = ", "let "])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_block_header_repairs_keep_incremental_headers_and_siblings(broken, repaired, binding, nested, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    level = 2 if nested else 1
    indent = "  " * level
    prefix = "flow first:\n  run before\n" + ("  repeat:\n    run inner\n" if nested else "")
    suffix = indent + "## Following.\n" + indent + "run after\n"
    suffix += ("  run after_outer\n" if nested else "") + "flow next:\n  pass\n"
    for header in [broken, repaired, broken, repaired]:
        source = (prefix + indent + binding + header + "\n" + indent + "  Body.\n" + suffix)
        source = source.encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
        assert valid(root) == (header == repaired), root
        after, = [n for n in descendants(root, "run_statement")
                  if n.child_by_field_name("target") is not None and n.child_by_field_name("target").text == b"after"]
        assert valid(after) and after.parent.type == ("repeat_body" if nested else "flow_body"), root
        assert declarations(root)[0].child_by_field_name("colon").start_byte == source.index(b":"), root
        previous = source
