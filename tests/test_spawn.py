"""Spawn targets and bindings preserve syntax errors instead of becoming prose."""
from pathlib import Path

import pytest
from tree_sitter import Language, Parser
import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


BINDINGS = ["", "let job = ", "let "]


@pytest.mark.parametrize("value", [
    "Hello.", "\n    spawn remains literal.", "run worker", "spawn worker",
])
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
def test_spawn_keyword_cannot_be_a_local_name(value, ending):
    source = f"flow launch:\n  let spawn = {value}".replace("\n", ending or "\n") + ending
    root = parse(source)
    assert not valid(root), root


@pytest.mark.parametrize("value", ["spawn", "spawn a process", "spawn using: Research."])
def test_spawn_local_name_does_not_hide_a_malformed_spawn_value(value):
    root = parse(f"flow launch:\n  let spawn = {value}\n")
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement")
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("target,output", [
    (" missing_name # Resolved by runtime.", None),
    (": Research {{_}}.", None),
    (":\n  Research {{_}}.", None),
    (" -> Text: Research {{_}}.", "Text"),
    (" -> Finding[]:\n  Research {{_}}.", "Finding[]"),
])
def test_spawn_target_and_binding_fields(binding, target, output, nested, ending):
    indent = "    " if nested else "  "
    prefix = "flow launch:\n" + ("  repeat 2 times:\n" if nested else "")
    source = prefix + indent + binding + "spawn" + target.replace("\n", "\n" + indent)
    source = source.replace("\n", ending or "\n") + ending
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "spawn_statement")
    keyword, = descendants(statement, "flow_spawn_keyword")
    assert keyword.text.strip() == b"spawn"
    node = statement.child_by_field_name("target")
    if target.startswith(" missing_name"):
        assert node.type == "runnable"
        assert node.text.strip() == b"missing_name"
    else:
        assert node.type == "inline_agic"
        return_type = node.child_by_field_name("return")
        assert (return_type.text.decode() if return_type else None) == output
        assert node.child_by_field_name("body").text.strip() == b"Research {{_}}."
    if binding:
        wrapper, = descendants(root, "let_statement")
        assert wrapper.child_by_field_name("statement") == statement
        assert wrapper.child_by_field_name("value") is None
        name = wrapper.child_by_field_name("name")
        assert (name.text.strip() if name else None) == (b"job" if "=" in binding else None)
    else:
        assert not descendants(root, "let_statement")


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("statement", [
    "spawn", "spawn:", "spawn -> Text:", "spawn # Missing target.",
    "spawn using worker", "spawn using: Research.",
    "spawn worker: Research.", "spawn worker()", "spawn worker(_) ",
    "spawn worker -> Text", "spawn worker -> Text: Research.",
    "spawn worker other", "spawn a process", "spawn 42", 'spawn "worker"',
    "spawn agent/worker", "spawn agent.worker", "spawn (run worker)",
    "spawn worker in 2 lanes", "spawn in 2 lanes worker", "spawn 2 times worker",
    "spawn worker 2 times", "spawn async worker", "spawn worker async",
    "spawn worker\n    Research.",
])
def test_invalid_spawn_never_falls_back_to_text(binding, statement, ending):
    source = f"flow bad:\n  {binding}{statement}".replace("\n", ending or "\n") + ending
    root = parse(source)
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("statement", [
    "let _ = spawn worker", "let job: Json = spawn worker",
])
def test_spawn_does_not_extend_local_name_or_binding_type_syntax(statement):
    root = parse(f"flow launch:\n  {statement}\n")
    assert not valid(root), root


def test_parenthesized_spawn_is_content_not_a_nested_expression():
    root = parse("flow launch:\n  let job = (spawn worker)\n")
    # Parenthesized text retains the existing Content syntax, not an expression.
    assert valid(root), root
    assert not descendants(root, "spawn_statement")
    wrapper, = descendants(root, "let_statement")
    assert wrapper.child_by_field_name("value").text.strip() == b"(spawn worker)"


def test_same_name_spawn_target_is_left_to_runtime_validation():
    root = parse("flow launch:\n  spawn launch\n")
    assert valid(root), root
    statement, = descendants(root, "spawn_statement")
    assert statement.child_by_field_name("target").text.strip() == b"launch"


@pytest.mark.parametrize("prefix", [
    "spawned", "spawner", "spawn_task", "spawn2", "all",
])
@pytest.mark.parametrize("binding", ["", "let note = "])
def test_spawn_prefixes_and_all_remain_text(prefix, binding):
    root = parse(f"flow launch:\n  {binding}{prefix} is ordinary text.\n")
    assert valid(root), root
    assert not descendants(root, "spawn_statement")
    if binding:
        wrapper, = descendants(root, "let_statement")
        assert prefix.encode() in wrapper.child_by_field_name("value").text
    else:
        statement, = descendants(root, "implicit_run_statement")
        assert prefix.encode() in statement.text


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("header", ["spawn:", "spawn -> Text:"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_spawn_inline_text_ends_before_following_statements(binding, header, indent):
    root = parse(
        f"flow launch:\n{indent}repeat 2 times:\n{indent*2}{binding}{header}\n"
        f"{indent*3}## Literal documentation.\n{indent*3}spawn finish\n"
        f"{indent*2}run after_inline\n{indent*2}until: Ready.\n"
        f"{indent}spawn worker\n"
    )
    assert valid(root), root
    loop, = descendants(root, "repeat_statement")
    inline, named = descendants(root, "spawn_statement")
    target = inline.child_by_field_name("target")
    assert target.type == "inline_agic"
    assert b"## Literal documentation." in target.text
    assert b"spawn finish" in target.text
    assert not descendants(target, "item_doc_comment")
    assert not descendants(target, "spawn_statement")
    run, = descendants(loop, "run_statement")
    assert run.child_by_field_name("runnable").text.strip() == b"after_inline"
    assert loop.child_by_field_name("body").child_by_field_name("until").child_by_field_name("target").text.strip() == b": Ready."
    assert named.child_by_field_name("target").text.strip() == b"worker"


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_spawn_fixture_preserves_comments_text_and_nested_repeats(newline):
    source = Path(__file__).with_name("fixtures").joinpath("spawn.too").read_text()
    root = parse(source.replace("\n", newline))
    assert valid(root), root
    targets = [node.child_by_field_name("target") for node in descendants(root, "spawn_statement")]
    assert [node.type for node in targets] == [
        "runnable", "runnable", "inline_agic", "inline_agic", "runnable",
    ]
    outer, inner = descendants(root, "repeat_statement")
    assert len(descendants(outer, "spawn_statement")) == 3
    assert len(descendants(inner, "spawn_statement")) == 1
    assert b"spawn remains literal inside inline text." in targets[2].text
    assert not descendants(descendants(root, "agic")[0], "flow_spawn_keyword")
    assert len(descendants(root, "flow_spawn_keyword")) == 5
    assert any(b"{{description}}" in node.text for node in descendants(root, "text_body"))


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_spawn_edits_match_fresh_nodes_fields_ranges_and_errors(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b"flow launch:\n  let note = spawned is text.\n".replace(b"\n", newline)
    tree = parser.parse(previous)
    bodies = [
        b"run worker", b"spawn worker", b"let job = run worker",
        b"let job = spawn worker", b"let spawn worker",
        b"let spawn = run worker", b"let spawn = spawn worker",
        b"let spawn = Hello.", b"let spawn = spawn a process", b"let spawn worker",
        b"let job = spawn", b"let job = spawn a process", b"let job = spawned is text.",
        b"let job = spawn: Research {{_}}.", b"let job = spawn -> Text: Research.",
        b"let job = spawn -> Text:\n    Research {{_}}.",
        b"let spawn -> Text:\n    Research {{_}}.",
        b"spawn -> Text:\n    Research {{_}}.",
        b"run -> Text:\n    Research {{_}}.", b"spawn -> Text:",
        b"spawn worker # Comment.\n  run next",
        b"repeat 2 times:\n    let job = spawn:\n      Research.\n    until: Ready.\n  run next",
        b"repeat 2 times:\n    let job = spawn:\n    Research.\n    until: Ready.\n  run next",
        b"repeat 2 times:\n    spawn worker\n  spawn next",
        b"repeat 2 times:\n    spawn worker\n    spawn next",
        b"let note = spawn_task is text.", b"async spawn worker", b"await job",
    ]
    for body in bodies + bodies[::-1]:
        current = (b"flow launch:\n  " + body + b"\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current
