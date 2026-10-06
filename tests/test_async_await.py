"""Async run and handle await share let wrappers without accepting await blocks."""
from pathlib import Path

import pytest
from tree_sitter import Language, Parser
import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


BINDINGS = ["", "let job = ", "let "]


def assert_binding(root, statement, binding):
    if not binding:
        assert not descendants(root, "let_statement")
        return
    wrapper, = descendants(root, "let_statement")
    assert wrapper.child_by_field_name("statement") == statement
    assert wrapper.child_by_field_name("value") is None
    name = wrapper.child_by_field_name("name")
    expected = binding.split()[1].encode() if "=" in binding else None
    assert (name.text.strip() if name else None) == expected
    if name is not None:
        assert name.type == "local_name"
        assert name.child_count == 0


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("target,output", [
    (" research # Snapshot inputs at launch.", None),
    (": Research {{_}}.", None),
    (":\n  Research {{_}}.", None),
    (" -> Text: Research {{_}}.", "Text"),
    (" -> Finding[]:\n  Research {{_}}.", "Finding[]"),
])
def test_async_preserves_run_node_and_target_fields(binding, target, output, nested, ending):
    indent = "    " if nested else "  "
    prefix = "flow launch:\n" + ("  repeat 2 times:\n" if nested else "")
    source = prefix + indent + binding + "async run" + target.replace("\n", "\n" + indent)
    source = source.replace("\n", ending or "\n") + ending
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "run_statement")
    modifier = statement.child_by_field_name("async")
    assert modifier.type == "flow_async_keyword"
    assert modifier.text.strip() == b"async"
    field = "runnable" if target.startswith(" research") else "agic"
    node = statement.child_by_field_name(field)
    if field == "runnable":
        assert node.text.strip() == b"research"
    else:
        assert node.type == "inline_agic"
        return_type = node.child_by_field_name("return")
        assert (return_type.text.decode() if return_type else None) == output
        assert node.child_by_field_name("body").text.strip() == b"Research {{_}}."
    assert_binding(root, statement, binding)
    synchronous = parse(source.replace("async run", "run", 1))
    assert valid(synchronous), synchronous
    run, = descendants(synchronous, "run_statement")
    assert run.child_by_field_name("async") is None
    assert str(run.child_by_field_name(field)) == str(node)
    assert run.child_by_field_name(field).text.strip() == node.text.strip()


@pytest.mark.parametrize("binding", ["", "let x = ", "let ", "let h = "])
@pytest.mark.parametrize("handle", ["h", "missing_handle", "async_job", "await_job", "spawn_job", "run_job"])
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("nested", [False, True])
def test_await_handle_is_distinct_from_result_binding(binding, handle, ending, nested):
    indent = "    " if nested else "  "
    prefix = "flow launch:\n" + ("  repeat 2 times:\n" if nested else "")
    source = prefix + indent + binding + "await " + handle + " # Wait for completion."
    root = parse(source.replace("\n", ending or "\n") + ending)
    assert valid(root), root
    statement, = descendants(root, "await_statement")
    name = statement.child_by_field_name("handle")
    assert name.type == "local_name"
    assert name.child_count == 0
    assert name.text.strip() == handle.encode()
    assert not descendants(root, "implicit_run_statement")
    assert_binding(root, statement, binding)


@pytest.mark.parametrize("binding", ["", "let x = ", "let ", "let h = "])
@pytest.mark.parametrize("name", ["async", "await", "spawn", "run", "until", "map", "default"])
def test_await_handle_uses_the_same_keyword_exclusion_as_local_bindings(binding, name):
    root = parse(f"flow launch:\n  {binding}await {name}\n")
    assert not valid(root), root


@pytest.mark.parametrize("target", [
    " research", ": Research {{_}}.", ":\n  Research {{_}}.",
    " -> Text[]: Research {{_}}.", " -> Text[]:\n  Research {{_}}.",
])
@pytest.mark.parametrize("name", ["job", "spawn_job"])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
def test_spawn_handles_share_await_nodes_and_binding_fields(target, name, nested, ending):
    indent = "    " if nested else "  "
    prefix = "flow launch:\n" + ("  repeat 2 times:\n" if nested else "")
    source = prefix + indent + f"let {name} = spawn" + target.replace("\n", "\n" + indent)
    for statement in [f"await {name}", f"let result = await {name}",
                      f"let await {name}", f"let {name} = await {name}"]:
        source += "\n" + indent + statement
    source = source.replace("\n", ending or "\n") + ending
    root = parse(source)
    assert valid(root), root
    launch, = descendants(root, "spawn_statement")
    assert launch.parent.child_by_field_name("name").text.strip() == name.encode()
    assert launch.parent.child_by_field_name("statement") == launch
    assert launch.child_by_field_name("target").type == (
        "runnable" if target == " research" else "inline_agic"
    )
    awaits = descendants(root, "await_statement")
    assert len(awaits) == 4
    for index, (statement, destination) in enumerate(zip(awaits, [None, "result", None, name])):
        assert statement.child_by_field_name("handle").type == "local_name"
        assert statement.child_by_field_name("handle").text.strip() == name.encode()
        if index == 0:
            assert statement.parent.type == ("repeat_body" if nested else "statements")
        else:
            wrapper = statement.parent
            assert wrapper.type == "let_statement"
            assert wrapper.child_by_field_name("statement") == statement
            assert wrapper.child_by_field_name("value") is None
            local = wrapper.child_by_field_name("name")
            assert (local.text.strip().decode() if local else None) == destination
    child_root = parse(source.replace("= spawn", "= async run", 1))
    assert valid(child_root), child_root
    assert [str(node) for node in descendants(child_root, "await_statement")] == [
        str(node) for node in awaits
    ]


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("ending", ["\n", "\r\n", ""])
@pytest.mark.parametrize("statement", [
    "async", "async run", "async run:", "async run -> Text:",
    "async: Research.", "async research", "async run using research",
    "async run using: Research.", "async run research extra", "async run research()",
    "async run research: Research.", "async run research -> Text",
    "async run research\n    Research.", "async run in 2 lanes research",
    "async run research in 2 lanes", "async run 2 times research", "async run _",
    "async run agent/research", "async run agent.research", "async run \"research\"",
    "async exec research", "async spawn research", "async map using research",
    "async generate 2 using research", "async await h", "async async run research",
    "async let job = run research", "async reduce using research",
    "async seek agent research", "async ask: Choose.", "async keep first 1",
    "async drop first 1", "async sort ascending by score",
    "async repeat 2 times:\n    run research",
    "async run async research", "async run research async",
    "async runworker", "async runner", "async run_worker", "async run2",
    "run async research", "run research async",
    "await", "await # Missing handle.", "await h other", "await h, other",
    "await h.id", "await h()", "await (h)", "await [h]", "await {{h}}",
    "await 42", 'await "h"', "await H", "await _", "await _h", "await _1",
    "await h -> Text", "await h: Result.", "await h\n    Result.",
    "await h in 2 lanes", "await h timeout 2", "await async run research",
    "await spawn research", "await spawn: Research.", "await spawn -> Text: Research.",
    "await (spawn research)",
    "await:", "await:\n    run research", "await in 2 lanes:\n    run research",
    "await all h", "await all:\n    run research",
])
def test_unsupported_async_and_await_never_fall_back_to_text(binding, statement, ending):
    source = f"flow bad:\n  {binding}{statement}".replace("\n", ending or "\n") + ending
    root = parse(source)
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("statement", [
    "async\n  run research", "async run\n  research", "await\n  h",
])
def test_incomplete_headers_do_not_borrow_operands_from_the_next_line(binding, statement):
    root = parse(f"flow launch:\n  {binding}{statement}\n")
    assert not valid(root), root


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("statement", [
    "async run", "async run ->", "async run -> Text:",
    "async run worker extra", "async runworker",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_invalid_async_run_preserves_following_statements_and_declarations(binding, statement, newline):
    root = parse((
        f"flow first:\n  {binding}{statement}\n  run after\n\n"
        "flow second:\n  run finish\n"
    ).replace("\n", newline))
    assert not valid(root), root
    assert [node.text.strip() for node in descendants(root, "flow_name")] == [b"first", b"second"]
    targets = [node.child_by_field_name("runnable").text.strip()
               for node in descendants(root, "run_statement")
               if node.child_by_field_name("runnable")]
    assert b"after" in targets, root
    assert b"finish" in targets, root


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_async_header_repair_preserves_following_code(binding, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    for malformed, repaired in [
        ("async run", "async run worker"),
        ("async run ->", "async run -> Text: Research."),
        ("async run -> Text:", "async run -> Text: Research."),
        ("async run worker extra", "async run worker"),
        ("async runworker", "async run worker"),
    ]:
        def source(header):
            return (
                f"flow first:\n  {binding}{header}\n  run after\n\n"
                "flow second:\n  run finish\n"
            ).encode().replace(b"\n", newline)

        previous = source(malformed)
        tree = parser.parse(previous)
        for header, expected_valid in [(repaired, True), (malformed, False)]:
            current = source(header)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            root = tree.root_node
            assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
            assert valid(root) == expected_valid
            assert [node.text.strip() for node in descendants(root, "flow_name")] == [b"first", b"second"]
            previous = current


@pytest.mark.parametrize("prefix", [
    "asyncio", "asynchronous", "async_task", "async2",
    "awaited", "awaiter", "await_job", "await2", "Async", "Await", "all",
])
@pytest.mark.parametrize("binding", ["", "let text = "])
def test_complete_keyword_boundaries_preserve_prose(prefix, binding):
    root = parse(f"flow launch:\n  {binding}{prefix} is ordinary text.\n")
    assert valid(root), root
    assert not descendants(root, "flow_async_keyword")
    assert not descendants(root, "flow_await_keyword")
    if binding:
        wrapper, = descendants(root, "let_statement")
        assert prefix.encode() in wrapper.child_by_field_name("value").text
    else:
        assert prefix.encode() in descendants(root, "implicit_run_statement")[0].text


@pytest.mark.parametrize("name", ["async", "await"])
@pytest.mark.parametrize("value", [
    "Hello.", "\n    async run and await are literal text.",
    "run research", "async run research", "await h", "spawn research",
])
def test_new_keywords_cannot_be_local_names_before_assignment(name, value):
    root = parse(f"flow launch:\n  let {name} = {value}\n")
    assert not valid(root), root


@pytest.mark.parametrize("name", ["async", "await"])
@pytest.mark.parametrize("value", ["async", "async spawn worker", "await", "await h other"])
def test_keyword_local_names_do_not_hide_malformed_operations(name, value):
    root = parse(f"flow launch:\n  let {name} = {value}\n")
    assert not valid(root), root
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("statement", [
    "let _ = async run worker", "let _ = await h", "let job: Run = async run worker",
    "let value: Text = await h", "async run -> Run<Text>: Research.",
])
def test_async_await_does_not_extend_binding_names_or_authored_types(statement):
    root = parse(f"flow launch:\n  {statement}\n")
    assert not valid(root), root


@pytest.mark.parametrize("name", ["async", "await"])
def test_async_target_names_remain_contextual(name):
    root = parse(f"flow launch:\n  async run {name}\n")
    assert valid(root), root
    run, = descendants(root, "run_statement")
    assert run.child_by_field_name("runnable").text.strip() == name.encode()


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("spacing", [" ", "  ", "\t", " \t "])
@pytest.mark.parametrize("target", ["worker", ": Research.", "-> Text: Research."])
def test_async_run_target_separators(binding, spacing, target):
    root = parse(f"flow launch:\n  {binding}async{spacing}run{spacing}{target}\n")
    assert valid(root), root
    run, = descendants(root, "run_statement")
    if target == "worker":
        assert run.child_by_field_name("runnable").text.strip() == b"worker"
    else:
        assert run.child_by_field_name("agic").child_by_field_name("body").text.strip() == b"Research."


@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_async_inline_body_preserves_literal_text_and_repeat_boundaries(binding, indent):
    root = parse(
        f"flow launch:\n{indent}repeat 2 times:\n{indent*2}{binding}async run -> Text:\n"
        f"{indent*3}## Literal heading.\n{indent*3}async run worker\n{indent*3}await h\n"
        f"{indent*2}await h\n{indent*2}until: Ready.\n{indent}run finish\n"
    )
    assert valid(root), root
    loop, = descendants(root, "repeat_statement")
    run, = descendants(loop, "run_statement")
    assert b"async run worker" in run.child_by_field_name("agic").text
    assert b"await h" in run.child_by_field_name("agic").text
    assert not descendants(run, "await_statement")
    assert not descendants(run, "item_doc_comment")
    assert len(descendants(loop, "await_statement")) == 1
    condition = loop.child_by_field_name("body").child_by_field_name("until")
    assert condition.child_by_field_name("target").text.strip() == b": Ready."
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text.strip() == b"finish"


def test_async_and_await_end_implicit_text_paragraphs():
    root = parse("flow launch:\n  Before.\n  async run research\n  await h\n  After.\n")
    assert valid(root), root
    statements, = descendants(root, "statements")
    assert [node.type for node in statements.named_children] == [
        "implicit_run_statement", "run_statement", "await_statement", "implicit_run_statement",
    ]


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_async_await_fixture_keeps_text_literal_and_run_as_an_authored_type(newline):
    source = Path(__file__).with_name("fixtures").joinpath("async_await.too").read_text()
    root = parse(source.replace("\n", newline))
    assert valid(root), root
    assert len(descendants(root, "flow_async_keyword")) == 4
    assert len(descendants(root, "flow_await_keyword")) == 4
    for agic in descendants(root, "agic"):
        assert not descendants(agic, "flow_async_keyword")
        assert not descendants(agic, "flow_await_keyword")
    assert any(node.text == b"Run" for node in descendants(root, "user_type"))
    assert not any(node.text == b"Run" for node in descendants(root, "builtin_type"))


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_async_await_edits_match_fresh_fields_ranges_and_errors(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    bodies = [
        b"run research", b"async run research", b"async runresearch", b"let job = async run research",
        b"let job = spawn research\n  await job",
        b"let job = spawn -> Text[]:\n    Research.\n  let result = await job",
        b"let spawn_job = spawn research\n  let await spawn_job\n  let spawn_job = await spawn_job",
        b"let job = await spawn research",
        b"let async run research", b"async run: Research.",
        b"let job = async run -> Text:\n    Research {{_}}.",
        b"let job = async run -> Text:", b"let job = async spawn research",
        b"let job = asynchronous prose.", b"let async = async run research",
        b"let async = Text.", b"let await = await async", b"let await async",
        b"let async_job = async run research", b"let await_job = await async_job",
        b"await h", b"let x = await h", b"let await h", b"let h = await h",
        b"await _", b"await h.id", b"await", b"let x = await", b"let x = awaited prose.",
        b"await:\n    run research", b"let x = await:\n    run research",
        b"repeat 2 times:\n    async run:\n      await is literal.\n    await h\n    until: Ready.\n  run finish",
        b"repeat 2 times:\n    async run:\n    await h\n    until: Ready.\n  run finish",
    ]
    for body in bodies + bodies[::-1]:
        current = (b"flow launch:\n  " + body + b"\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current
