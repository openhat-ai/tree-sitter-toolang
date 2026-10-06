"""Primary input is a reserved name, never an implicit operation or await handle."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("statement", [
    "_", "_ # Primary input.", "_, invalid prose.", "_ is not Content.",
    "let x = _", "let x = _ # Primary input.", "let x = _ is not Content.",
    "let _", "let _ = run worker", "let _ = spawn worker",
    "await _", "let x = await _", "let await _", "let h = await _",
])
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("nested", [False, True])
def test_primary_input_cannot_be_an_operation_or_await_handle(statement, ending, nested):
    indent = "    " if nested else "  "
    prefix = "flow work:\n" + ("  repeat:\n" if nested else "")
    root = parse((prefix + indent + statement).replace("\n", ending or "\n") + ending)
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("statement", ["_", "let x = _", "await _", "let await _"])
def test_primary_input_diagnostics_preserve_following_statements(statement):
    root = parse(
        f"flow work:\n  Read the input.\n  {statement}\n  run after\n"
        "flow next:\n  run finish\n"
    )
    assert not valid(root), root
    assert len(descendants(root, "flow")) == 2
    assert [node.child_by_field_name("runnable").text.strip()
            for node in descendants(root, "run_statement")] == [b"after", b"finish"]
    assert [node.text.strip() for node in descendants(root, "implicit_run_statement")] == [
        b"Read the input.",
    ]


@pytest.mark.parametrize("source", [
    "## @param _ Primary input.\nflow work(_: Text):\n  run worker\n",
    "agic work(_: Text):\n  user: Read {{_}}.\n",
    "flow work:\n  run: _\n",
    "flow work:\n  run:\n    _\n",
    "flow work:\n  let text =\n    _\n",
    "flow work:\n  let text = {{_}}\n",
    "flow work:\n  Read _ as text.\n",
    "flow work:\n  _suffix remains prose.\n",
    "flow work:\n  let text = _suffix remains Content.\n",
])
def test_primary_input_parameters_templates_and_explicit_text_remain_valid(source):
    root = parse(source)
    assert valid(root), root


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_primary_input_edits_match_fresh_parsing(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    bodies = [
        b"_suffix", b"_", b"_, invalid prose.", b"let text = _suffix",
        b"let text = _", b"let text =\n    _", b"let text = {{_}}",
        b"await h", b"await _", b"let x = await _", b"let await _",
        b"let h = await h", b"run: _", b"let _ = run worker",
    ]
    for body in bodies + bodies[::-1]:
        current = (
            b"flow work(_: Text):\n  " + body +
            b"\n  repeat:\n    run worker\n    until: Ready.\nflow next:\n  run finish\n"
        ).replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current
