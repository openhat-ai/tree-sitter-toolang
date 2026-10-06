"""Positional repeat conditions preserve the public CST and source ownership."""

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("position", [None, 0, 1, 2])
@pytest.mark.parametrize("condition", ["until is_done", "until: Ready {{_}}.", "until:\n{indent}Ready {{_}}."])
@pytest.mark.parametrize("header", ["repeat:", "repeat 0 times:", "repeat 1 time:", "repeat 2 times windowing 3:", "repeat windowing 2:"])
@pytest.mark.parametrize("indent,newline,ending", [(" ", "\n", ""), ("  ", "\r\n", "\r\n"), ("\t", "\n", "\n")])
def test_repeat_fields_order_ranges_and_condition_index(position, condition, header, indent, newline, ending):
    entries = ["run first", "run last"]
    if position is not None:
        entries.insert(position, condition.replace("{indent}", indent))
    lines = ["flow work:", indent + header]
    for entry in entries:
        lines.extend(indent * 2 + line for line in entry.splitlines())
    source = newline.join(lines) + ending
    root = parse(source)
    assert valid(root), root
    loop, = descendants(root, "repeat_statement")
    assert loop.child_by_field_name("until") is None
    body, = loop.children_by_field_name("body")
    assert body.type == "repeat_body"
    assert not descendants(body, "statements")
    statements = body.children_by_field_name("statement")
    assert [node.type for node in statements] == ["run_statement", "run_statement"]
    assert [node.child_by_field_name("runnable").text.strip() for node in statements] == [b"first", b"last"]
    assert all(node.parent == body for node in statements)
    conditions = body.children_by_field_name("until")
    assert len(conditions) == int(position is not None)
    if conditions:
        clause, = conditions
        assert clause.type == "until_clause" and clause.parent == body
        keyword, = descendants(clause, "flow_until_keyword")
        assert keyword.text == b"until"
        target, = clause.children_by_field_name("target")
        assert target.type == ("runnable" if condition == "until is_done" else "inline_agic_body")
        assert target.parent == clause
        assert clause.start_byte <= keyword.start_byte < target.start_byte < target.end_byte <= clause.end_byte
        assert source.encode()[clause.start_byte:clause.end_byte].strip().startswith(b"until")
        assert b"run first" not in clause.text and b"run last" not in clause.text
        if target.type == "inline_agic_body":
            assert b"Ready {{_}}." in target.child_by_field_name("body").text
        else:
            assert target.text == b"is_done"
        preceding = sum(statement.end_byte <= clause.start_byte for statement in statements)
        assert preceding == position
        assert body.named_children == statements[:position] + [clause] + statements[position:]


@pytest.mark.parametrize("statement", [
    "run worker", "spawn worker", "exec worker", "seek reviewer worker", "ask: Continue?",
    "generate 2 using worker", "reduce using worker", "map using worker",
    "keep first 1", "drop last 1", "sort ascending by worker",
    "let value = run worker", "let note = Evidence.", "Describe the evidence.",
    "repeat:\n      run worker",
])
def test_condition_separates_all_ordinary_flow_statement_kinds(statement):
    root = parse(f"flow work:\n  repeat:\n    {statement}\n    until done\n    run next\n")
    assert valid(root), root
    body = descendants(root, "repeat_statement")[0].child_by_field_name("body")
    before, after = body.children_by_field_name("statement")
    clause = body.child_by_field_name("until")
    assert before.end_byte <= clause.start_byte < after.start_byte


@pytest.mark.parametrize("binding", ["", "let ", "let result = "])
@pytest.mark.parametrize("condition", [
    "until", "until:", "until:   ", "until: # Missing text.",
    "until # Missing target.", "until using check", "until check()",
    "until check: text", "until -> Boolean: Ready.", "until check -> Boolean",
    "until agic:check", "until module::check", "until module::flow:check",
    "until check other", "until 42", "until check\n      Unexpected body.",
])
def test_invalid_conditions_never_become_valid_text(binding, condition):
    root = parse(f"flow work:\n  repeat:\n    run work\n    {binding}{condition}\n")
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    assert all(node.child_by_field_name("value") is None for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("condition", ["until done", "until: Ready.", "until:\n      Ready."])
@pytest.mark.parametrize("binding", ["let ", "let result = "])
def test_conditions_cannot_be_bound(binding, condition):
    root = parse(f"flow work:\n  repeat:\n    run work\n    {binding}{condition}\n")
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement")
    assert all(node.child_by_field_name("value") is None for node in descendants(root, "let_statement"))


@pytest.mark.parametrize("space", ["", " ", "  ", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_explicit_content_binding_keeps_literal_until_after_header_whitespace(space, newline):
    source = f"flow work:\n  let note ={space}\n    until dawn.\n  run next\n".replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    binding, = descendants(root, "let_statement")
    assert binding.child_by_field_name("value").child_count == 1
    assert b"until dawn." in binding.child_by_field_name("value").text
    assert not descendants(root, "until_clause")
    assert not descendants(root, "implicit_run_statement")


@pytest.mark.parametrize("space", ["", " ", "\t"])
@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
def test_empty_content_binding_does_not_become_whitespace_text(space, ending):
    assert not valid(parse(f"flow work:\n  let note ={space}{ending}"))


@pytest.mark.parametrize("source", [
    "flow work:\n  until done\n", "flow work:\n  until: Ready.\n",
    "flow work:\n  repeat:\n", "flow work:\n  repeat:\n    # Empty.\n",
    "flow work:\n  repeat:\n    until done\n", "flow work:\n  repeat 0 times:\n    until: Ready.\n",
    "flow work:\n  repeat:\n    until done\n    ## Not a statement.\n  run outside\n",
    "flow work:\n  repeat:\n    until done\n    run work\n    until other\n",
    "flow work:\n  repeat:\n    run work\n    until done\n    until: Other.\n",
    "flow work:\n  repeat:\n    run work\n      until done\n",
])
def test_invalid_condition_cardinality_and_ownership(source):
    assert not valid(parse(source))


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_nested_conditions_trivia_prose_and_dedented_siblings(newline):
    source = """flow work:
  repeat:
    ## Leading condition.
    until outer_done

    repeat:
      Describe the evidence.
      ## Middle condition.
      until:
        Ready {{_}}?
        until remains literal here.
        ## Literal documentation.
      run revise
    # Still in the outer loop.
    run finish
  ## Outside the repeat.
  run publish
""".replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    outer, inner = descendants(root, "repeat_statement")
    outer_body, inner_body = [loop.child_by_field_name("body") for loop in (outer, inner)]
    assert [node.type for node in outer_body.children_by_field_name("statement")] == ["repeat_statement", "run_statement"]
    assert [node.type for node in inner_body.children_by_field_name("statement")] == ["implicit_run_statement", "run_statement"]
    outer_clause = outer_body.child_by_field_name("until")
    inner_clause = inner_body.child_by_field_name("until")
    assert outer_clause.child_by_field_name("target").text == b"outer_done"
    assert b"until remains literal here." in inner_clause.child_by_field_name("target").text
    assert len(descendants(root, "until_clause")) == 2
    assert len(descendants(inner_body, "item_doc_comment")) == 1
    assert descendants(root, "run_statement")[-1].parent.type == "statements"


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_condition_moves_forms_and_invalid_states_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    bodies = [
        b"run first\n    run last", b"until done\n    run first\n    run last",
        b"run first\n    until done\n    run last", b"run first\n    run last\n    until done",
        b"run first\n    until: Ready.\n    run last",
        b"run first\n    until:\n      Ready {{_}}.\n    run last",
        b"## Condition.\n    until done\n\n    run first", b"until done",
        b"until done\n    run first\n    until other", b"let note = until done",
        b"repeat:\n      until inner_done\n      run first\n    until outer_done",
        b"repeat:\n      until inner_done\n      run first\n      until outer_done",
        b"run first\n    until module::done\n    run last", b"run first\n    until",
    ]
    for body in bodies + bodies[::-1]:
        current = (b"flow work:\n  repeat:\n    " + body + b"\n  run outside").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node), current
        previous = current


def test_repeat_indentation_capture_has_one_level_per_repeat():
    language = Language(tree_sitter_toolang.language())
    root = parse("flow work:\n  repeat:\n    until done\n    repeat:\n      run work\n")
    captures = QueryCursor(Query(language, tree_sitter_toolang.INDENTS_QUERY)).captures(root)
    assert [node.type for node in sorted(captures["indent"], key=lambda n: n.start_byte)] == [
        "flow", "repeat_statement", "repeat_statement",
    ]
