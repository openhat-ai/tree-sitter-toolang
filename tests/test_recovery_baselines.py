"""Rejected first headers retain the body's authored indentation baseline."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("kind,following,entry", [
    ("flow", "run after", "run_stmt"), ("agic", "user: Following.", "message"),
])
@pytest.mark.parametrize("header", ["modles = fast", "modles += fast", "run = value", "repeat =", "letnote ="])
@pytest.mark.parametrize("orphan", ["Literal.", "run worker", "initial: Seed."])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n", "  ## First.\n"])
@pytest.mark.parametrize("documentation", ["", "  ## Following.\n"])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_rejected_headers_do_not_rebase_bodies_to_orphaned_nested_lines(
    kind, following, entry, header, orphan, prefix, documentation, indent, newline
):
    source = (f"{kind} first:\n{prefix}  {header}\n    {orphan}\n{documentation}  {following}\n"
              "## Next.\nflow next:\n  pass\n")
    source = source.replace("    ", indent * 2).replace("  ", indent).replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    owner = declarations(root)[0]
    assert owner.type == kind and owner.child_by_field_name("name").text == b"first", root
    after, = [n for n in descendants(root, entry) if n.text.strip() == following.encode()]
    assert valid(after) and after.parent == owner.child_by_field_name("body"), root
    expected = (indent if entry == "message" else "") + following + newline
    assert after.text == expected.encode(), root
    if documentation:
        doc, = [n for n in descendants(root, "item_doc") if n.text == b"## Following." + newline.encode()]
        assert doc.parent == after.parent and valid(doc), root
    assert root.named_children[-2].type == "item_doc", root
    assert valid(declarations(root)[-1]), root
    assert declarations(root)[-1].child_by_field_name("name").text == b"next", root


@pytest.mark.parametrize("kind,head,following,entry", [
    ("flow", "run:", "run after", "run_stmt"),
    ("agic", "user:", "user: Following.", "message"),
])
@pytest.mark.parametrize("indent,newline", [("  ", b"\n"), ("\t", b"\r\n")])
def test_rejected_header_edits_preserve_layout_and_match_fresh_trees(kind, head, following, entry, indent, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for header in ["modles = fast", head, "modles += fast", head, "letnote =", head]:
        for orphan in ["Literal.", "# Heading.", "run worker"]:
            source = (f"{kind} first:\n{indent}{header}\n{indent * 2}{orphan}\n"
                      f"{indent}## Following.\n{indent}{following}\n## Next.\nflow next:\n  pass\n")
            source = source.encode().replace(b"\n", newline)
            edit_tree(tree, previous, source)
            tree = parser.parse(source, tree)
            root = tree.root_node
            assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
            assert valid(root) == (header == head), root
            after, = [n for n in descendants(root, entry) if n.text.strip() == following.encode()]
            assert after.parent == declarations(root)[0].child_by_field_name("body") and valid(after), root
            doc, = [n for n in descendants(root, "item_doc") if n.text == b"## Following." + newline]
            assert doc.parent == after.parent and valid(doc), root
            previous = source
