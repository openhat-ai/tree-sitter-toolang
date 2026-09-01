from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")
STATEMENT_TYPES = {
    "let_statement",
    "run_statement",
    "seek_statement",
    "ask_statement",
    "scatter_statement",
    "storm_statement",
    "gather_statement",
    "settle_statement",
    "map_statement",
    "keep_statement",
    "drop_statement",
    "rank_statement",
    "repeat_statement",
    "implicit_run_statement",
}


def _parser() -> Parser:
    return Parser(Language(tree_sitter_toolang.language()))


def _text(source: bytes, node) -> str:
    return source[node.start_byte : node.end_byte].decode()


def _items(root):
    return [
        child.named_children[0]
        for child in root.named_children
        if child.type == "item"
    ]


def _descendants(node, node_type: str):
    matches = []
    for child in node.named_children:
        if child.type == node_type:
            matches.append(child)
        matches.extend(_descendants(child, node_type))
    return matches


def _statements(flow):
    body = flow.child_by_field_name("body")
    statement_list = next(
        (child for child in body.named_children if child.type == "statements"),
        None,
    )
    if statement_list is None:
        return []
    return [
        child for child in statement_list.named_children if child.type in STATEMENT_TYPES
    ]


def test_flow_fixture_covers_complete_statement_set():
    parser = _parser()
    source = (FIXTURES_DIR / "flows.too").read_bytes()
    tree = parser.parse(source)
    items = _items(tree.root_node)
    flows = [item for item in items if item.type == "flow"]

    assert tree.root_node.has_error is False
    assert [item.type for item in items[:3]] == ["struct", "struct", "struct"]
    assert [
        _text(source, flow.child_by_field_name("name"))
        for flow in flows
    ] == ["research", "delegate", "bindings", "bare", "empty"]

    research = _statements(flows[0])
    assert [statement.type for statement in research] == [
        "run_statement",
        "run_statement",
        "scatter_statement",
        "scatter_statement",
        "storm_statement",
        "storm_statement",
        "gather_statement",
        "gather_statement",
        "settle_statement",
        "settle_statement",
        "map_statement",
        "map_statement",
        "keep_statement",
        "keep_statement",
        "keep_statement",
        "drop_statement",
        "drop_statement",
        "drop_statement",
        "rank_statement",
        "rank_statement",
        "repeat_statement",
    ]

    inline_run = research[1].child_by_field_name("agic")
    assert inline_run is not None and inline_run.type == "inline_agic"
    assert _text(source, inline_run.child_by_field_name("return")) == "Note"
    assert "Extract one note." in _text(
        source, inline_run.child_by_field_name("body")
    )

    inline_rank = research[19].child_by_field_name("agic")
    assert inline_rank is not None and inline_rank.type == "inline_agic_body"
    assert inline_rank.child_by_field_name("return") is None
    assert _descendants(research[20], "until_statement")

    delegate = _statements(flows[1])
    assert [statement.type for statement in delegate] == [
        "seek_statement",
        "seek_statement",
        "ask_statement",
    ]
    assert delegate[0].child_by_field_name("runnable") is not None
    assert delegate[1].child_by_field_name("agic") is not None

    bindings = _statements(flows[2])
    assert [statement.type for statement in bindings] == [
        "let_statement",
        "let_statement",
        "let_statement",
        "repeat_statement",
    ]
    assert _text(source, bindings[0].child_by_field_name("name")).strip() == "jobs"
    assert bindings[0].child_by_field_name("statement").type == "scatter_statement"
    assert bindings[1].child_by_field_name("name") is None
    assert bindings[1].child_by_field_name("statement").type == "run_statement"
    assert "Prefer primary sources." in _text(
        source, bindings[2].child_by_field_name("value")
    )

    assert [statement.type for statement in _statements(flows[3])] == [
        "implicit_run_statement"
    ]
    assert _statements(flows[4]) == []


def test_let_uses_equals_for_operation_results_and_text_locals():
    parser = _parser()
    source = (
        b"flow bindings:\n"
        b"  let result = run transform\n"
        b"  let run publish\n"
        b"  let note = Keep this text.\n"
        b"  let detail =\n"
        b"    Keep this block too.\n"
    )
    tree = parser.parse(source)
    statements = _statements(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    has_statement = [
        statement.child_by_field_name("statement") is not None
        for statement in statements
    ]
    has_value = [
        statement.child_by_field_name("value") is not None
        for statement in statements
    ]

    assert has_statement == [
        True,
        True,
        False,
        False,
    ]
    assert has_value == [
        False,
        False,
        True,
        True,
    ]
    assert (
        _text(source, statements[0].child_by_field_name("name")).strip()
        == "result"
    )
    assert statements[1].child_by_field_name("name") is None
    assert _text(source, statements[2].child_by_field_name("name")).strip() == "note"
    assert "Keep this block too." in _text(
        source, statements[3].child_by_field_name("value")
    )

    legacy = parser.parse(b"flow legacy:\n  let note: Old syntax.\n")
    assert legacy.root_node.has_error is True


def test_flow_clause_order_and_variants_are_explicit():
    parser = _parser()
    valid = (
        b"flow valid:\n"
        b"  keep last 3\n"
        b"  drop first 2\n"
        b"  rank score top 5 par 3\n"
        b"  rank bottom 2 par 3: Score this item.\n"
        b"  storm 4 sample par 2\n"
        b"  storm 4 par 2 -> Note: Produce one note.\n"
        b"  map convert par 2\n"
        b"  map par 2 -> Note: Convert this item.\n"
    )
    invalid = [
        b"flow bad:\n  rank top 5 score par 3\n",
        b"flow bad:\n  rank score par 3 top 5\n",
        b"flow bad:\n  map -> Note par 2: Convert this item.\n",
        b"flow bad:\n  keep filter: Return true.\n",
        b"flow bad:\n  repeat:\n    run improve\n",
    ]

    assert parser.parse(valid).root_node.has_error is False
    for source in invalid:
        tree = parser.parse(source)
        assert tree.root_node.has_error or _descendants(
            tree.root_node, "invalid_flow_reserved_statement"
        ), source


def test_legacy_and_reserved_words_do_not_fall_back_to_bare_runs():
    parser = _parser()
    statements = [
        "call work",
        "do work",
        "unfold work",
        "each work",
        "fold work",
        "sort work",
        "head 2",
        "tail 2",
        "think: Work.",
        "use shell",
        "thunk future",
        "until: Done.",
    ]

    for statement in statements:
        source = f"flow bad:\n  {statement}\n".encode()
        tree = parser.parse(source)
        assert tree.root_node.has_error or _descendants(
            tree.root_node, "invalid_flow_reserved_statement"
        ), statement
        assert not _descendants(tree.root_node, "implicit_run_statement"), statement


def test_repeat_requires_count_or_final_until():
    parser = _parser()
    valid = (
        b"flow counted:\n"
        b"  repeat 3:\n"
        b"    run improve\n"
        b"\n"
        b"flow counted_until:\n"
        b"  repeat 3:\n"
        b"    run improve\n"
        b"    until: Done.\n"
        b"\n"
        b"flow until_only:\n"
        b"  repeat:\n"
        b"    run improve\n"
        b"    until:\n"
        b"      Done.\n"
    )
    invalid = [
        b"flow bad:\n  repeat 3\n",
        b"flow bad:\n  repeat:\n    run improve\n",
        b"flow bad:\n  until: Done.\n",
    ]

    tree = parser.parse(valid)
    repeats = [_statements(flow)[0] for flow in _items(tree.root_node)]

    assert tree.root_node.has_error is False
    assert [repeat.child_by_field_name("count") is not None for repeat in repeats] == [
        True,
        True,
        False,
    ]
    assert not _descendants(repeats[0], "until_statement")
    assert _descendants(repeats[1], "until_statement")
    assert _descendants(repeats[2], "until_statement")
    for source in invalid:
        assert parser.parse(source).root_node.has_error is True


def test_bare_text_is_a_stable_inline_run_shorthand():
    parser = _parser()
    source = (
        b"flow bare:\n"
        b"  Rewrite the current value.\n"
        b"\n"
        b"  Extract one note.\n"
        b"\n"
        b"\n"
        b"  Start another run.\n"
        b"  # Split again.\n"
        b"  Start the final run.\n"
    )
    tree = parser.parse(source)
    statements = _statements(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    assert [statement.type for statement in statements] == [
        "implicit_run_statement",
        "implicit_run_statement",
        "implicit_run_statement",
    ]
    assert "Extract one note." in _text(source, statements[0])


def test_with_and_agic_replace_use_and_thunk():
    parser = _parser()
    valid = (
        b"with skill owner/reviewer\n"
        b"agic review(_: Text) -> Text:\n"
        b"  Review {{_}}.\n"
    )

    tree = parser.parse(valid)
    assert tree.root_node.has_error is False
    assert [item.type for item in _items(tree.root_node)] == ["with", "agic"]
    assert parser.parse(b"use skill owner/reviewer\n").root_node.has_error is True
    assert parser.parse(b"thunk review:\n  pass\n").root_node.has_error is True
