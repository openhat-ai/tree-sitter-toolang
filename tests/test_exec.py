"""Exec is a standalone control statement, never a bindable text fallback."""
from pathlib import Path

import pytest
from tree_sitter import Language, Parser
import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("target,output", [
    (" grow", None),
    (": Complete {{_}}.", None),
    (":\n  Complete {{_}}.", None),
    (" -> Text: Complete {{_}}.", "Text"),
    (" -> Part[]:\n  Complete {{_}}.", "Part[]"),
])
def test_exec_target_fields_match_run(target, output, nested, ending):
    indent = "    " if nested else "  "
    prefix = "flow grow:\n" + ("  repeat 2 times:\n" if nested else "")
    source = prefix + indent + "exec" + target.replace("\n", "\n" + indent)
    source = source.replace("\n", ending or "\n") + ending
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "exec_statement")
    node = statement.child_by_field_name("target")
    if target == " grow":
        assert node.type == "runnable"
        assert node.text.strip() == b"grow"
    else:
        assert node.type == "inline_agic"
        return_type = node.child_by_field_name("return")
        assert (return_type.text.decode() if return_type else None) == output
        assert node.child_by_field_name("body").text.strip() == b"Complete {{_}}."
    run_root = parse(source.replace("exec", "run", 1))
    assert valid(run_root), run_root
    run, = descendants(run_root, "run_statement")
    run_target = run.child_by_field_name("runnable" if node.type == "runnable" else "agic")
    assert str(node) == str(run_target)
    assert node.text == run_target.text


@pytest.mark.parametrize("statement", [
    "exec", "exec:", "exec -> Text:", "exec foo bar", "exec foo()", "exec foo:",
    "exec foo -> Text", "exec foo in 2 lanes", "exec using foo",
    "exec 42", 'exec "grow"', "let x = exec foo", "let exec foo",
    "let exec: Transfer.", "let x = exec: Transfer.",
    "let exec -> Text:\n    Transfer.", "let x = exec -> Text:\n    Transfer.",
    "exec foo: Transfer.", "exec foo -> Text: Transfer.",
    "exec foo\n    An inline body.",
])
def test_invalid_exec_never_recovers_as_valid_text(statement):
    root = parse(f"flow bad:\n  {statement}\n")
    assert not valid(root), root


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_nested_exec_dedents_and_explicit_text(newline):
    source = Path(__file__).with_name("fixtures").joinpath("exec.too").read_text()
    root = parse(source.replace("\n", newline))
    assert valid(root), root
    targets = [node.child_by_field_name("target") for node in descendants(root, "exec_statement")]
    assert [node.type for node in targets] == ["inline_agic", "inline_agic", "runnable", "runnable"]
    assert [node.text.strip() for node in targets[2:]] == [b"evolve", b"grow"]
    assert b"exec remains literal inside inline text." in targets[0].text
    outer, inner = descendants(root, "repeat_statement")
    assert len(descendants(outer, "exec_statement")) == 2
    assert len(descendants(inner, "exec_statement")) == 1
    assert len(descendants(root, "implicit_run_statement")) == 1
    assert b"executor and execution" in descendants(root, "implicit_run_statement")[0].text
    assert any(b"exec remains literal inside explicit text." in node.text
               for node in descendants(root, "text_body"))


@pytest.mark.parametrize("prefix", ["executor", "execution", "exec_v2", "exec2"])
@pytest.mark.parametrize("binding", ["", "let note = "])
def test_exec_prefix_stays_text(prefix, binding):
    root = parse(f"flow main:\n  {binding}{prefix} is ordinary text.\n")
    assert valid(root), root
    assert not descendants(root, "exec_statement")
    if binding:
        statement, = descendants(root, "let_statement")
        assert prefix.encode() in statement.child_by_field_name("value").text
    else:
        statement, = descendants(root, "implicit_run_statement")
        assert prefix.encode() in statement.text


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_exec_target_and_binding_edits_match_fresh_parse(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b"flow grow:\n  let note = executor is text.\n".replace(b"\n", newline)
    tree = parser.parse(previous)
    bodies = [
        b"exec grow", b"exec: Complete {{_}}.", b"exec -> Text:\n    Complete {{_}}.",
        b"exec grow extra", b"let note = exec grow",
        b"let exec: Transfer.", b"let note = exec -> Text:\n    Transfer.",
        b"let note = execution is text.", b"let note = exec_v2 is text.",
        b"repeat 2 times:\n    exec:\n      Complete {{_}}.\n  run next",
        b"repeat 2 times:\n    exec:\n  Complete {{_}}.\n  run next",
    ]
    for body in bodies + bodies[::-1]:
        current = (b"flow grow:\n  " + body + b"\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current


@pytest.mark.parametrize("header", ["exec:", "exec -> Text:"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_inline_exec_owns_text_but_not_following_statements(header, indent):
    root = parse(
        f"flow grow:\n{indent}repeat 2 times:\n{indent*2}{header}\n"
        f"{indent*3}## Literal documentation.\n{indent*3}exec finish\n"
        f"{indent*2}run after_inline\n{indent*2}until: Ready.\n"
        f"{indent}exec grow\n"
    )
    assert valid(root), root
    loop, = descendants(root, "repeat_statement")
    inline, named = descendants(root, "exec_statement")
    target = inline.child_by_field_name("target")
    assert target.type == "inline_agic"
    assert b"## Literal documentation." in target.text
    assert b"exec finish" in target.text
    assert not descendants(target, "item_doc_comment")
    assert not descendants(target, "run_statement")
    assert [node.child_by_field_name("runnable").text.strip()
            for node in descendants(loop, "run_statement")] == [b"after_inline"]
    assert loop.child_by_field_name("until").text.strip() == b": Ready."
    assert named.child_by_field_name("target").text.strip() == b"grow"
