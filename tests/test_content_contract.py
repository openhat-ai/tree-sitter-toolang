"""Semantic content boundaries retain physical text, trivia, and parent roles."""

from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid, walk


ROOT = Path(__file__).parents[1]


@pytest.mark.parametrize("header,kind,field", [
    ("context note:", "context", "content"),
    ("instruct rules:", "instruct", "content"),
    ("agic chat:\n  user:", "message", "content"),
    ("flow work:\n  run:", "inline_agic", "content"),
    ("flow work:\n  spawn:", "inline_agic", "content"),
    ("flow work:\n  ask:", "ask_statement", "content"),
    ("flow work:\n  let note =", "let_statement", "value"),
    ("flow work:\n  repeat:\n    until:", "inline_agic_body", "content"),
    ("flow work:\n  reduce using worker:\n    from:", "reduce_statement", "from"),
])
@pytest.mark.parametrize("multiline", [False, True])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_content_fields_do_not_include_headers_or_forwarding_nodes(header, kind, field, multiline, newline):
    indent = " " * (len(header.rsplit("\n", 1)[-1]) - len(header.rsplit("\n", 1)[-1].lstrip()) + 2)
    value = f"{indent}First.\n{indent}  # Literal detail.\n" if multiline else "First."
    source = header + (" # Header.\n" + value if multiline else " " + value + " # Header.\n")
    if "repeat:" in source:
        source += "    run worker\n"
    source += "flow next:\n  pass\n"
    source = source.replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    owner, = descendants(root, kind)
    content = owner.child_by_field_name(field)
    assert content.type == "content"
    expected = value.replace("\n", newline) if multiline else " " + value + " "
    assert content.text == expected.encode()
    assert b"Header." not in content.text and b"flow next" not in content.text
    assert {node.type for node in content.named_children} <= {"text_line", "newline", "blank_line"}
    lines = descendants(content, "text_line")
    assert len(lines) == (2 if multiline else 1)
    assert all(node.child_count == 0 and b"\n" not in node.text and b"\r" not in node.text for node in lines)
    assert len(descendants(root, "plain_comment")) == 1


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_message_role_edits_preserve_content_and_following_messages(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    for first, role, expected_valid in [
        ("Bare.\n  Continued.", None, True), ("user: Hello.", b"user", True),
        ("assistant:\n    Hello.", b"assistant", True), ("tool:", b"tool", False),
        ("tool: Result.", b"tool", True), ("Bare.", None, True),
    ]:
        source = f"agic chat:\n  {first}\n  user: Following.\nflow next:\n  pass\n".encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        assert valid(root) == expected_valid
        messages = descendants(root, "message")
        assert len(messages) == 2
        actual_role = messages[0].child_by_field_name("role")
        assert (actual_role.text if actual_role else None) == role
        assert messages[0].child_by_field_name("content").type == "content"
        assert messages[1].child_by_field_name("content").text.strip() == b"Following."
        if not expected_valid:
            diagnostic, = descendants(messages[0], "invalid_missing_content")
            assert diagnostic.start_byte == diagnostic.end_byte
        previous = source


def test_body_fields_own_entries_directly_and_keep_source_order():
    root = parse((ROOT / "tests/fixtures/content_contract.too").read_text())
    assert valid(root), root
    for owner_kind, body_kind, fields in [
        ("skill", "cap_body", ["property", "content"]),
        ("task", "job_body", ["property", "content"]),
        ("struct", "struct_body", ["field"]),
        ("agic", "agic_body", ["directive", "message"]),
        ("flow", "flow_body", ["directive", "statement"]),
        ("repeat_statement", "repeat_body", ["until", "statement"]),
    ]:
        owner, = descendants(root, owner_kind)
        body = owner.child_by_field_name("body")
        assert body.type == body_kind
        entries = [node for field in fields for node in body.children_by_field_name(field)]
        assert entries and all(node.parent == body for node in entries)
        assert entries == sorted(entries, key=lambda node: node.start_byte)
    for node in walk(root):
        if node.type == "content":
            assert all(child.type in {"text_line", "newline", "blank_line"} for child in node.named_children)


@pytest.mark.parametrize("source", [
    "skill empty:\n", "task empty:\n", "chore empty:\n  # Comment.\n",
    "agic configured:\n  models=fast\n", "flow empty:\n  pass\n",
])
def test_optional_entries_and_explicit_pass_do_not_create_missing_diagnostics(source):
    root = parse(source + "flow next:\n  pass\n")
    assert valid(root), root
    assert not any(node.type.startswith("invalid_missing_") for node in walk(root))


def test_indentation_queries_capture_headers_instead_of_content_rows():
    source = """flow work:
  run: Inline.
  run:
    Multiline.
  let note =
    Bound.
  reduce:
    Merge.
    from:
      Seed.
agic chat:
  user:
    Reply.
  Bare.
"""
    root = parse(source)
    assert valid(root), root
    query = Query(Language(tree_sitter_toolang.language()), (ROOT / "queries/indents.scm").read_text())
    captured = QueryCursor(query).captures(root)["indent"]
    assert {node.start_point.row for node in captured} == {0, 2, 4, 6, 8, 10, 11}
