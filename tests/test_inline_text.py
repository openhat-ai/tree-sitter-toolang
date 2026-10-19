"""Inline content owns hashes literally; structural positions own comments."""

from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, point, valid


CONTENT_CONTEXTS = [
    ("context note:", "context", "content", ""),
    ("instruct rules:", "instruct", "content", ""),
    ("agic chat:\n  user:", "message", "content", ""),
    ("agic chat:\n  assistant:", "message", "content", ""),
    ("agic chat:\n  tool:", "message", "content", ""),
    ("flow work:\n  run:", "inline_agic", "content", ""),
    ("flow work:\n  async run -> Text:", "inline_agic", "content", ""),
    ("flow work:\n  exec:", "inline_agic", "content", ""),
    ("flow work:\n  spawn:", "inline_agic", "content", ""),
    ("flow work:\n  seek reviewer:", "inline_agic", "content", ""),
    ("flow work:\n  generate 2:", "inline_agic", "content", ""),
    ("flow work:\n  map:", "inline_agic", "content", ""),
    ("flow work:\n  reduce:", "inline_agic", "content", ""),
    ("flow work:\n  keep if:", "inline_agic", "content", ""),
    ("flow work:\n  drop if:", "inline_agic", "content", ""),
    ("flow work:\n  sort ascending by:", "inline_agic", "content", ""),
    ("flow work:\n  ask:", "ask_statement", "content", ""),
    ("flow work:\n  let note =", "let_statement", "value", ""),
    ("flow work:\n  repeat:\n    until:", "inline_agic_body", "content", "    run worker\n"),
    ("flow work:\n  reduce using worker:\n    from:", "reduce_statement", "from", ""),
]
VALUES = [
    "Visit https://example.com/#details", '"a#b"', "# Heading", "#", "## @param _ Literal.",
    "#@ Literal program marker.", "##! Literal marker.", "#!/bin/toolang", "Text # note # again",
    '""', '"unterminated', r'"a\nb\"c"', "Résumé # détails.",
]


@pytest.fixture(scope="module")
def highlights():
    return Query(Language(tree_sitter_toolang.language()),
                 (Path(__file__).parents[1] / "queries/highlights.scm").read_text())


@pytest.mark.parametrize("header,kind,field,suffix", CONTENT_CONTEXTS)
@pytest.mark.parametrize("value", VALUES)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_inline_content_retains_exact_source_including_hashes(header, kind, field, suffix, value, newline, highlights):
    source = (header + " " + value + "\n" + suffix + "flow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert valid(root), root
    owner, = descendants(root, kind)
    content = owner.child_by_field_name(field)
    line, = descendants(content, "text_line")
    assert content.type == "content" and content.text == (" " + value).encode()
    assert line.text == content.text and line.child_count == 0
    assert not descendants(root, "plain_comment")
    assert not descendants(root, "item_doc_comment")
    for node in [content, line]:
        assert source[node.start_byte:node.end_byte] == (" " + value).encode()
        assert tuple(node.start_point) == point(source, node.start_byte)
        assert tuple(node.end_point) == point(source, node.end_byte)
    captures = QueryCursor(highlights).captures(root)
    assert any(n.start_byte == line.start_byte and n.end_byte == line.end_byte
               for n in captures["string"])
    assert not captures.get("comment") and not captures.get("comment.documentation")
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("value", VALUES)
@pytest.mark.parametrize("separator", ["", " ", "\t"])
@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
def test_text_at_eof_preserves_hashes_quotes_and_backslashes(value, separator, ending):
    root = parse(f"flow work:\n  let note ={separator}{value}" + ending)
    assert valid(root), root
    content = descendants(root, "let_statement")[0].child_by_field_name("value")
    assert content.text == (separator + value).encode()
    assert not descendants(root, "plain_comment")


@pytest.mark.parametrize("source, kind, expected", [
    ("with skill ./review# Structural.", "with", b"./review"),
    ("skill review:\n  title = Value # Structural.", "property", b" Value "),
    ("agic chat:\n  models=fast # Structural.\n  user: Ready.", "directive", b"fast "),
])
def test_structural_values_keep_their_existing_comment_boundaries(source, kind, expected):
    root = parse(source + "\n")
    assert valid(root), root
    owner, = descendants(root, kind)
    value = owner.child_by_field_name("reference" if kind == "with" else "value")
    assert value.text == expected
    comment, = descendants(root, "plain_comment")
    assert comment.text == b"# Structural."


@pytest.mark.parametrize("marker", ["#", "##", "#@", "##!", "#!", "## @param"])
@pytest.mark.parametrize("source", [
    "flow work: {marker} Structural.\n  run worker\n",
    "flow work:\n  repeat: {marker} Structural.\n    run worker\n",
    "flow work:\n  reduce using worker: {marker} Structural.\n    from: Seed.\n",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_structural_headers_keep_inline_comments(source, marker, newline):
    root = parse(source.format(marker=marker).replace("\n", newline))
    assert valid(root), root
    comment, = descendants(root, "plain_comment")
    assert comment.text == f"{marker} Structural.".encode()
    assert not descendants(root, "item_doc_comment") and not descendants(root, "program_doc")


@pytest.mark.parametrize("header", ["context note:", "flow work:\n  run:"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_former_text_header_comments_cannot_select_an_indented_body(header, newline):
    indent = "  " if header.startswith("context") else "    "
    source = f"{header} # Former annotation.\n{indent}Former block.\nflow next:\n  pass\n".replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    first = descendants(root, "content")[0]
    assert first.text == b" # Former annotation."
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("head", [
    "let note = run # Missing target.", "let note = async # Missing operation.",
    "let note = exec worker # Invalid binding.", "let note = until # Invalid binding.",
    "let note = spawn # Missing target.", "let note = await # Missing handle.",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_literal_hashes_do_not_hide_malformed_bound_operations(head, newline):
    root = parse(f"flow work:\n  {head}\n  run after\nflow next:\n  pass\n".replace("\n", newline))
    assert not valid(root), root
    assert not any(node.child_by_field_name("value") for node in descendants(root, "let_statement"))
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
    assert len(descendants(root, "flow")) == 2


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incremental_text_and_comment_boundaries_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for head, text, comment in [
        ("run worker # Note.", None, b"# Note."),
        ("run: # Heading", b" # Heading", None),
        ('let note = "a#b"', b' "a#b"', None),
        ("run:\n    # Heading", b"    # Heading", None),
        ("run: Visit https://example.com/#details", b" Visit https://example.com/#details", None),
        ("run:", None, None),
        ("run: #", b" #", None),
        ("run worker # Note.", None, b"# Note."),
    ]:
        current = f"flow work:\n  {head}\n  run after\nflow next:\n  pass\n".replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
        assert valid(root) == (head != "run:")
        assert [n.text for n in descendants(root, "text_line")] == ([] if text is None else [text])
        assert [n.text for n in descendants(root, "plain_comment")] == ([] if comment is None else [comment])
        assert len(descendants(root, "flow")) == 2
        assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
        previous = current
