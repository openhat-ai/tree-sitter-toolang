"""A member's leading structural documentation belongs to its body."""

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, point, valid


OWNERS = [
    ("flow first:", "flow", "flow_body", "run one", "run two"),
    ("agic first:", "agic", "agic_body", "user: One.", "user: Two."),
    ("struct First:", "struct", "struct_body", "one: Text", "two: Text"),
    *[(f"{kind} first:", kind, "chore_body" if kind == "chore" else "cap_body", "one = Value", "two = Value")
      for kind in ["psyche", "skill", "service", "prompt", "chore"]],
    ("flow first:\n  repeat:", "repeat_statement", "repeat_body", "run one", "run two"),
    ("flow first:\n  let result = repeat:", "repeat_statement", "repeat_body", "run one", "run two"),
]


@pytest.mark.parametrize("header,owner_kind,body_kind,first,second", OWNERS)
@pytest.mark.parametrize("marker,doc_kind", [("## First.", "item_doc"), ("## @param topic First.", "param_doc"), ("# First.", "plain_comment")])
@pytest.mark.parametrize("layout,newline", [("  ", "\n"), ("\t", "\r\n")])
@pytest.mark.parametrize("prefix", ["", "\n", "# Outer.\n\n", "## Before outer.\n# Outer.\n"])
def test_leading_and_later_member_docs_share_the_body(header, owner_kind, body_kind, first, second, marker, doc_kind, layout, newline, prefix):
    nested = "\n" in header
    depth = 2 if nested else 1
    header = header.replace("  ", layout)
    outer = layout * (depth - 1)
    prefix = "".join(outer + line + "\n" for line in prefix.splitlines())
    body_source = (layout * depth + marker + "\n\n" + layout * depth + first
                   + "\n" + layout * depth + "## Second.\n" + layout * depth + second + "\n")
    source = (header + " # Header.\n" + prefix + body_source + "## Next.\nflow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert valid(root), root
    owner = descendants(root, owner_kind)[0]
    body = owner.child_by_field_name("body")
    assert body.type == body_kind
    first_doc, = [n for n in descendants(root, doc_kind) if n.text.rstrip(b"\r\n") == marker.encode()]
    second_doc, = [n for n in descendants(root, "item_doc") if n.text.rstrip(b"\r\n") == b"## Second."]
    assert first_doc.parent == second_doc.parent == body, root
    assert body.text == body_source.replace("\n", newline).encode()
    assert body.start_byte == source.index(body.text)
    assert tuple(body.start_point) == point(source, body.start_byte)
    assert tuple(body.end_point) == point(source, body.end_byte)
    assert owner.named_children[-1] == body
    assert all(n.parent == owner for n in descendants(owner, "plain_comment") if n.text in {b"# Header.", b"# Outer." + newline.encode()}), root
    assert root.named_children[-2].type == "item_doc"
    query = Query(Language(tree_sitter_toolang.language()), f"({body_kind} ({doc_kind}) @doc)")
    assert first_doc in QueryCursor(query).captures(root)["doc"]


@pytest.mark.parametrize("layout", ["  ", "\t", "        "])
@pytest.mark.parametrize("comment_indent", ["", " ", "  ", "    ", "\t", "        ", "\t\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_actual_member_sets_the_baseline_and_prefix_spelling(layout, comment_indent, newline):
    source = ("flow first:\n" + comment_indent + "## Leading.\n" + layout + "run one\n"
              + layout + "run two\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    flow = declarations(root)[0]
    body = flow.child_by_field_name("body")
    doc, = descendants(root, "item_doc")
    column = lambda value: len(value.expandtabs(8))
    assert doc.parent == (body if column(comment_indent) >= column(layout) else flow), root
    assert [n.child_by_field_name("target").text for n in body.children_by_field_name("statement")] == [b"one", b"two"]


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_last_outer_comment_separates_a_contiguous_body_prefix(newline):
    source = ("flow first:\n  ## Before outer.\n# Outer.\n\n"
              "  ## First.\n    ## Deeper.\n  run one\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    owner = declarations(root)[0]
    body = owner.child_by_field_name("body")
    docs = descendants(root, "item_doc")
    assert [doc.parent.type for doc in docs] == ["flow", "flow_body", "flow_body"]
    assert body.text == ("  ## First.\n    ## Deeper.\n  run one\n").replace("\n", newline).encode()


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_body_documentation_edits_match_fresh_ownership_and_ranges(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for prefix in ["  ## First.\n", "## Outer.\n", "  ## First.\n# Outer.\n", "# Outer.\n  ## First.\n", "\n  ## First.\n\n"]:
        for member in ["  run one\n", "    run one\n", "\trun one\n", ""]:
            source = ("flow first:\n" + prefix + member + "## Next.\nflow next:\n  pass\n").encode().replace(b"\n", newline)
            edit_tree(tree, previous, source)
            tree = parser.parse(source, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(source).root_node), source
            assert declarations(tree.root_node)[-1].child_by_field_name("name").text == b"next"
            if not member:
                assert not descendants(declarations(tree.root_node)[0], "item_doc"), tree.root_node
            previous = source
