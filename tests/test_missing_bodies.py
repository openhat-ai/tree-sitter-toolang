"""An absent required body must not consume later siblings or declarations."""

from pathlib import Path

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid, walk


def test_missing_body_fixture_uses_local_leaf_diagnostics():
    root = parse((Path(__file__).parent / "fixtures/invalid/missing_bodies.too").read_text())
    assert not valid(root)
    diagnostics = [node for node in walk(root) if node.type.startswith("invalid_missing_")]
    assert [node.type for node in diagnostics] == [
        "invalid_missing_body", "invalid_missing_content", "invalid_missing_content",
    ]
    assert all(node.child_count == 0 and node.start_byte == node.end_byte
               for node in diagnostics)
    assert [node.child_by_field_name("name").text
            for node in descendants(root, "flow")] == [b"first", b"next"]
    assert [node.child_by_field_name("runnable").text
            for node in descendants(root, "run_statement")] == [
        b"after_repeat", b"after_text", b"after_reduce",
    ]


@pytest.mark.parametrize("header", [
    "flow first:", "agic first:", "struct First:", "context notes:", "instruct rules:",
    "flow first:\n  repeat:", "flow first:\n  run:", "flow first:\n  spawn:",
    "flow first:\n  let note =", "flow first:\n  map:", "flow first:\n  reduce:",
    "flow first:\n  ask:", "flow first:\n  async run:",
    "flow first:\n  async run->Text:", "flow first:\n  let h = async run:",
    "flow first:\n  let async run:", "flow first:\n  let h = async run->Text:",
    "flow first:\n  let async run->Text:",
    "flow first:\n  run->Text:", "flow first:\n  exec:",
    "flow first:\n  seek reviewer:", "flow first:\n  generate 2:",
    "flow first:\n  keep if:", "flow first:\n  drop if:",
    "flow first:\n  sort ascending by:", "flow first:\n  reduce using worker:",
    "flow first:\n  let result = map:", "flow first:\n  let run:",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("trivia", ["", "\n", "# Empty body.\n"])
def test_missing_body_recovers_at_the_next_statement_or_declaration(header, newline, trivia):
    nested = "\n" in header
    # In text bodies an indented comment is real content, so leave it at the
    # enclosing baseline. Structural bodies also exercise indented trivia.
    prefix = "  " if nested else ""
    tail = ("  run after\n" if nested else "") + "flow next:\n  pass\n"
    malformed = header + "\n" + (prefix + trivia if trivia else "") + tail
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for source in [malformed, "flow first:\n  run repaired\n" + tail, malformed]:
        current = source.replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
        assert valid(root) == (source != malformed)
        if source == malformed:
            structural_headers = {
                "flow first:", "agic first:", "struct First:",
                "flow first:\n  repeat:", "flow first:\n  reduce using worker:",
            }
            expected = "invalid_missing_body" if header in structural_headers else "invalid_missing_content"
            diagnostics = [node for node in walk(root) if node.type.startswith("invalid_missing_")]
            assert [node.type for node in diagnostics] == [expected]
            assert diagnostics[0].start_byte == diagnostics[0].end_byte
        assert b"next" in [node.child_by_field_name("name").text
                            for node in descendants(root, "flow")]
        if nested:
            assert b"after" in [node.child_by_field_name("runnable").text
                                 for node in descendants(root, "run_statement")
                                 if node.child_by_field_name("runnable")]
        previous = current


@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("trivia", ["", "\n", "# Empty.\n", "## Empty.\n"])
def test_empty_repeat_diagnostic_does_not_open_a_layout_frame(indent, newline, trivia):
    source = (f"flow first:\n{indent}repeat:\n"
              + (indent * 2 + trivia if trivia else "")
              + f"{indent}run after\nflow next:\n{indent}pass")
    root = parse(source.replace("\n", newline))
    assert not valid(root)
    loop, = descendants(root, "repeat_statement")
    body = loop.child_by_field_name("body")
    diagnostic, = descendants(body, "invalid_missing_body")
    assert diagnostic.child_count == 0
    assert diagnostic.start_byte == diagnostic.end_byte
    assert diagnostic.start_point.row == (3 if trivia else 2)
    assert not descendants(body, "run_statement")
    assert [node.child_by_field_name("name").text
            for node in descendants(root, "flow")] == [b"first", b"next"]
    assert descendants(root, "run_statement")[0].child_by_field_name("runnable").text == b"after"


@pytest.mark.parametrize("role", ["user", "assistant", "tool"])
def test_empty_message_body_preserves_the_next_message(role):
    root = parse(f"agic first:\n  {role}:\n  user: Continue.\nflow next:\n  pass\n")
    assert not valid(root)
    assert len(descendants(root, "message")) == 2
    assert descendants(root, "text_line")[-1].text.strip() == b"Continue."
    assert descendants(root, "flow")[0].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("body,kind", [
    ("  models=fast\n", "invalid_missing_statement"),
    ("  repeat:\n    until: Ready.\n  run after\n", "invalid_missing_statement"),
    ("  reduce:\n    from: Seed.\n  run after\n", "invalid_missing_content"),
    ("  repeat:\n    run one\n    until:\n  run after\n", "invalid_missing_content"),
    ("  reduce using worker:\n    from:\n  run after\n", "invalid_missing_content"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_required_content_after_directives_or_clauses_recovers(body, kind, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    broken = "flow first:\n" + body + "flow next:\n  pass\n"
    fixed = "flow first:\n  run repaired\nflow next:\n  pass\n"
    for source in [broken, fixed, broken]:
        current = source.replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
        assert valid(root) == (source == fixed)
        assert [node.child_by_field_name("name").text
                for node in descendants(root, "flow")] == [b"first", b"next"]
        if source == broken:
            assert len(descendants(root, kind)) == 1
            if "run after" in body:
                assert descendants(root, "run_statement")[-1].text.strip() == b"run after"
        previous = current


@pytest.mark.parametrize("header", [
    "context notes:", "instruct rules:",
    "flow first:\n  run:", "flow first:\n  async run:",
    "flow first:\n  let h = async run:", "flow first:\n  let note =",
    "flow first:\n  spawn:", "flow first:\n  ask:", "flow first:\n  map:",
    "agic first:\n  user:",
    "flow first:\n  reduce using worker:\n    from:",
    "flow first:\n  repeat:\n    run one\n    until:",
])
@pytest.mark.parametrize("marker", ["# Outside.", "## Documentation.", "# Outside.\n\n##! Module."])
@pytest.mark.parametrize("ending", ["", "\n", "\nflow next:\n  pass\n"])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_missing_content_before_outer_comments_retains_its_owner(header, marker, ending, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    malformed = header + "\n" + marker + ending
    last_line = header.rsplit("\n", 1)[-1]
    indent = " " * (len(last_line) - len(last_line.lstrip()) + 2)
    repaired = header + "\n" + indent + "Literal content.\n" + marker + ending
    for source in [malformed, repaired, malformed]:
        current = source.encode().replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
        assert not root.has_error, root
        assert valid(root) == (source == repaired)
        assert not any(descendants(content, "plain_comment") or descendants(content, "item_doc_comment")
                       for content in descendants(root, "content"))
        if source == malformed:
            diagnostic, = descendants(root, "invalid_missing_content")
            assert diagnostic.parent.type == "content"
            boundary = current.find(b"flow next") if "flow next" in source else len(current)
            assert diagnostic.start_byte == diagnostic.end_byte == boundary
        if "flow next" in source:
            assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"
        previous = current


@pytest.mark.parametrize("header", ["context notes:", "flow first:\n  run:", "agic first:\n  user:"])
def test_missing_content_recovery_does_not_allow_text_to_resume_after_outer_comments(header):
    root = parse(header + "\n# Outside.\n    Indented text.\nflow next:\n  pass\n")
    assert not valid(root)
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


def test_missing_content_comment_fixture_retains_all_declarations():
    root = parse((Path(__file__).parent / "fixtures/invalid/missing_content_comments.too").read_text())
    assert not root.has_error
    assert len(descendants(root, "invalid_missing_content")) == 3
    assert [node.type for node in root.named_children] == ["context", "flow", "agic"]
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
