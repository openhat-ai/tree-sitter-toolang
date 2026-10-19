"""A rejected prefix entry must not poison the next member's documentation."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_body_documentation import OWNERS
from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("header,owner_kind,body_kind,first,second", OWNERS)
@pytest.mark.parametrize("rejected", ["#@ Wrong scope.", "## @param", "## @param missing"])
@pytest.mark.parametrize("marker,doc_kind", [
    ("## First.", "item_doc"), ("## @param topic First.", "param_doc"), ("# First.", "plain_comment"),
])
@pytest.mark.parametrize("separator", ["", "# Outer.\n\n"])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_prefix_errors_preserve_member_documentation_and_body_ranges(
    header, owner_kind, body_kind, first, second, rejected, marker, doc_kind, separator, indent, newline
):
    depth = 2 if "\n" in header else 1
    header = header.replace("  ", indent)
    outer = indent * (depth - 1)
    separator = "".join(outer + line + "\n" for line in separator.splitlines())
    body_source = indent * depth + marker + "\n" + indent * depth + first + "\n"
    source = (header + "\n" + outer + rejected + "\n" + separator + body_source
              + "## Next.\nflow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert root.has_error, root
    owner = descendants(root, owner_kind)[0]
    body = owner.child_by_field_name("body")
    assert body is not None and body.type == body_kind, root
    doc, = [n for n in descendants(root, doc_kind) if n.text == (marker + newline).encode()]
    assert doc.parent == body and valid(doc), root
    assert body.text == body_source.replace("\n", newline).encode(), root
    assert all(n.end_byte <= doc.start_byte for n in descendants(root, "ERROR")), root
    assert root.named_children[-2].type == "item_doc", root
    assert declarations(root)[-1].child_by_field_name("name").text == b"next", root


@pytest.mark.parametrize("header,owner_kind,body_kind,first,second", OWNERS)
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_prefix_error_repairs_match_fresh_document_ownership(
    header, owner_kind, body_kind, first, second, newline
):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    depth = 2 if "\n" in header else 1
    outer, inner = "  " * (depth - 1), "  " * depth
    for rejected in ["#@ Wrong scope.", "## Repaired.", "## @param", "#@", "# Repaired."]:
        for separator in ["", "# Outer.\n\n"]:
            source = (header + "\n" + outer + rejected + "\n"
                      + "".join(outer + line + "\n" for line in separator.splitlines())
                      + inner + "## First.\n" + inner + first + "\nflow next:\n  pass\n")
            source = source.encode().replace(b"\n", newline)
            edit_tree(tree, previous, source)
            tree = parser.parse(source, tree)
            root = tree.root_node
            assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
            doc, = [n for n in descendants(root, "item_doc") if n.text == b"## First." + newline]
            assert doc.parent.type == body_kind and valid(doc), root
            previous = source
