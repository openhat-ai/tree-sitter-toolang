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
    "sort_statement",
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


def _assert_invalid_flow_statement(parser: Parser, statement: str) -> None:
    source = f"flow bad:\n  {statement}\n".encode()
    tree = parser.parse(source)

    assert tree.root_node.has_error or _descendants(
        tree.root_node, "invalid_flow_reserved_statement"
    ), statement
    assert not _descendants(tree.root_node, "implicit_run_statement"), statement


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
        "sort_statement",
        "sort_statement",
        "repeat_statement",
    ]

    inline_run = research[1].child_by_field_name("agic")
    assert inline_run is not None and inline_run.type == "inline_agic"
    assert _text(source, inline_run.child_by_field_name("return")) == "Note"
    assert "Extract one note." in _text(
        source, inline_run.child_by_field_name("body")
    )

    inline_sort = research[19].child_by_field_name("runnable")
    assert inline_sort is not None and inline_sort.type == "inline_agic"
    assert inline_sort.child_by_field_name("return") is None
    assert research[20].child_by_field_name("until") is not None
    assert not _descendants(research[20], "until_statement")
    runnable_statements = [
        statement
        for index, statement in enumerate(research[2:20], start=2)
        if index not in {12, 15}
    ]
    assert all(
        statement.child_by_field_name("runnable") is not None
        for statement in runnable_statements
    )
    assert all(
        statement.child_by_field_name("agic") is None
        for statement in runnable_statements
    )

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


def test_readable_flow_complements_have_flat_public_fields():
    parser = _parser()
    source = (
        b"flow fields:\n"
        b"  scatter 4 using generate\n"
        b"  storm 4 in 2 lanes using sample\n"
        b"  gather using combine\n"
        b"  settle using merge\n"
        b"  map in 2 lanes using convert\n"
        b"  keep if useful in 2 lanes\n"
        b"  drop in 2 lanes if duplicate\n"
        b"  sort descending in 2 lanes by score\n"
        b"  keep first 3\n"
        b"  repeat 2 times:\n"
        b"    run improve\n"
        b"    until: Ready.\n"
    )
    tree = parser.parse(source)
    statements = _statements(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    assert [statement.type for statement in statements] == [
        "scatter_statement",
        "storm_statement",
        "gather_statement",
        "settle_statement",
        "map_statement",
        "keep_statement",
        "drop_statement",
        "sort_statement",
        "keep_statement",
        "repeat_statement",
    ]

    for statement in statements[:8]:
        runnable = statement.child_by_field_name("runnable")
        assert runnable is not None and runnable.type == "runnable"
        assert statement.child_by_field_name("agic") is None

    assert _text(source, statements[0].child_by_field_name("count")).strip() == "4"
    lane_statements = (
        statements[1],
        statements[4],
        statements[5],
        statements[6],
        statements[7],
    )
    for statement in lane_statements:
        assert _text(source, statement.child_by_field_name("lanes")).strip() == "2"

    order = statements[7].child_by_field_name("order")
    assert _text(source, order).strip() == "descending"
    selection = statements[8].child_by_field_name("selection")
    assert selection is not None and selection.type == "position"
    assert _text(source, selection.child_by_field_name("side")).strip() == "first"
    assert _text(source, selection.child_by_field_name("count")).strip() == "3"

    repeat = statements[9]
    assert _text(source, repeat.child_by_field_name("count")).strip() == "2"
    assert repeat.child_by_field_name("body").type == "statements"
    assert repeat.child_by_field_name("until").type == "inline_agic_body"


def test_unnamed_flow_supports_signatures():
    parser = _parser()
    source = (
        b"flow:\n  pass\n"
        b"flow() -> Text:\n  pass\n"
        b"flow(_: Text) -> Text:\n  pass\n"
    )

    tree = parser.parse(source)
    flows = _items(tree.root_node)

    assert tree.root_node.has_error is False
    assert [flow.type for flow in flows] == ["flow", "flow", "flow"]
    assert all(flow.child_by_field_name("name") is None for flow in flows)
    assert [flow.child_by_field_name("params") is not None for flow in flows] == [
        False,
        True,
        True,
    ]
    assert [flow.child_by_field_name("return") is not None for flow in flows] == [
        False,
        True,
        True,
    ]


def test_unnamed_agics_and_flows_can_coexist_syntactically():
    parser = _parser()
    source = (
        b"agic:\n  pass\n"
        b"flow:\n  pass\n"
        b"agic:\n  pass\n"
        b"flow:\n  pass\n"
    )

    tree = parser.parse(source)
    runnables = _items(tree.root_node)

    assert tree.root_node.has_error is False
    assert [runnable.type for runnable in runnables] == [
        "agic",
        "flow",
        "agic",
        "flow",
    ]
    assert all(
        runnable.child_by_field_name("name") is None for runnable in runnables
    )


def test_let_uses_equals_for_operation_results_and_content_locals():
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


def test_marked_complements_reorder_while_positional_complements_stay_first():
    parser = _parser()
    valid = (
        b"flow valid:\n"
        b"  keep last 3\n"
        b"  drop first 2\n"
        b"  storm 4 in 2 lanes using sample\n"
        b"  storm 4 using sample in 2 lanes\n"
        b"  map in 2 lanes using convert\n"
        b"  map using convert in 2 lanes\n"
        b"  keep in 2 lanes if useful\n"
        b"  keep if useful in 2 lanes\n"
        b"  drop in 2 lanes if duplicate\n"
        b"  drop if duplicate in 2 lanes\n"
        b"  sort descending in 2 lanes by score\n"
        b"  sort ascending by score in 1 lane\n"
        b"  map in 2 lanes using -> Note: Convert this item.\n"
        b"  keep in 2 lanes if -> Boolean: Check this item.\n"
        b"  sort descending in 2 lanes by -> Number: Score this item.\n"
    )
    invalid = [
        "storm in 2 lanes 4 using sample",
        "sort by score descending",
        "map in 2 lanes in 3 lanes using convert",
        "map using first using second",
        "map using -> Note in 2 lanes: Convert this item.",
        "sort descending, by score",
        "map in 2 lanes",
        "map in 2 lanes with convert",
        "map using convert.",
    ]

    assert parser.parse(valid).root_node.has_error is False
    for statement in invalid:
        _assert_invalid_flow_statement(parser, statement)


def test_literal_units_agree_with_their_numeric_values():
    parser = _parser()
    valid = (
        b"flow valid:\n"
        b"  map in 1 lane using convert\n"
        b"  map in 01 lane using convert\n"
        b"  map in 0 lanes using convert\n"
        b"  map in 2 lanes using convert\n"
        b"  map in 02 lanes using convert\n"
        b"  repeat 1 time:\n"
        b"    run improve\n"
        b"  repeat 01 time:\n"
        b"    run improve\n"
        b"  repeat 0 times:\n"
        b"    run improve\n"
        b"  repeat 5 times:\n"
        b"    run improve\n"
    )

    assert parser.parse(valid).root_node.has_error is False
    for statement in (
        "map in 1 lanes using convert",
        "map in 01 lanes using convert",
        "map in 0 lane using convert",
        "map in 2 lane using convert",
        "repeat 1 times:\n    run improve",
        "repeat 01 times:\n    run improve",
        "repeat 0 time:\n    run improve",
        "repeat 5 time:\n    run improve",
    ):
        _assert_invalid_flow_statement(parser, statement)


def test_legacy_and_reserved_words_do_not_fall_back_to_bare_runs():
    parser = _parser()
    statements = [
        "call work",
        "do work",
        "unfold work",
        "each work",
        "fold work",
        "sort work",
        "rank score",
        "par 2",
        "top 2",
        "bottom 2",
        "head 2",
        "tail 2",
        "think: Work.",
        "use shell",
        "thunk future",
        "until: Done.",
    ]

    for statement in statements:
        _assert_invalid_flow_statement(parser, statement)

    for statement in (
        "scatter 4 generate",
        "storm 4 generate par 2",
        "gather combine",
        "settle merge",
        "map convert par 2",
        "keep useful par 2",
        "drop duplicate par 2",
        "rank score top 2 par 2",
        "repeat 3:\n    run improve",
    ):
        _assert_invalid_flow_statement(parser, statement)


def test_repeat_requires_count_or_final_until():
    parser = _parser()
    valid = (
        b"flow counted:\n"
        b"  repeat 3 times:\n"
        b"    run improve\n"
        b"\n"
        b"flow counted_until:\n"
        b"  repeat 3 times:\n"
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
        "repeat 3",
        "repeat 3:",
        "repeat:",
        "until: Done.",
    ]

    tree = parser.parse(valid)
    repeats = [_statements(flow)[0] for flow in _items(tree.root_node)]

    assert tree.root_node.has_error is False
    assert [repeat.child_by_field_name("count") is not None for repeat in repeats] == [
        True,
        True,
        False,
    ]
    assert all(
        repeat.child_by_field_name("body").type == "statements"
        for repeat in repeats
    )
    assert [repeat.child_by_field_name("until") is not None for repeat in repeats] == [
        False,
        True,
        True,
    ]
    assert not any(
        _descendants(repeat, node_type)
        for repeat in repeats
        for node_type in ("repeat_body", "repeat_until_body", "until_statement")
    )
    for statement in invalid:
        _assert_invalid_flow_statement(parser, statement)


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


def test_implicit_run_paragraph_boundaries_control_statement_starts():
    parser = _parser()
    source = (
        b"flow boundaries:\n"
        b"  Review the findings\n"
        b"  sort them by relevance.\n"
        b"\n"
        b"  using ordinary prose here.\n"
        b"\n"
        b"  Until enough evidence exists.\n"
        b"\n"
        b"  sort descending by relevance\n"
        b"  Continue with the sorted findings.\n"
        b"\n"
        b"\n"
        b"  Final prose paragraph.\n"
    )
    tree = parser.parse(source)
    statements = _statements(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    assert [statement.type for statement in statements] == [
        "implicit_run_statement",
        "sort_statement",
        "implicit_run_statement",
        "implicit_run_statement",
    ]
    assert "sort them by relevance." in _text(source, statements[0])
    assert "using ordinary prose here." in _text(source, statements[0])
    assert "Until enough evidence exists." in _text(source, statements[0])
    assert "Continue with the sorted findings." in _text(source, statements[2])


def test_malformed_statement_after_blank_line_does_not_become_an_implicit_run():
    parser = _parser()
    source = (
        b"flow bad:\n"
        b"  Explain the intended operation.\n"
        b"\n"
        b"  map using review.\n"
    )
    tree = parser.parse(source)
    implicit_runs = _descendants(tree.root_node, "implicit_run_statement")

    assert tree.root_node.has_error or _descendants(
        tree.root_node, "invalid_flow_reserved_statement"
    )
    assert len(implicit_runs) == 1
    assert "map using review." not in _text(source, implicit_runs[0])


def test_statement_keywords_only_reserve_complete_words():
    parser = _parser()

    for line in (
        "sorting remains prose.",
        "mapping remains prose.",
        "stormy weather remains prose.",
        "repeatable work remains prose.",
        "untilable work remains prose.",
        "Sort descending by relevance.",
    ):
        source = f"flow prose:\n  {line}\n".encode()
        tree = parser.parse(source)

        assert tree.root_node.has_error is False
        assert len(_descendants(tree.root_node, "implicit_run_statement")) == 1
        assert not _descendants(tree.root_node, "invalid_flow_reserved_statement")


def test_until_is_reserved_at_statement_boundaries():
    parser = _parser()
    valid = (
        b"flow prose:\n"
        b"  Until enough evidence exists.\n"
        b"\n"
        b"  run: Until enough evidence exists.\n"
    )

    assert parser.parse(valid).root_node.has_error is False
    for statement in (
        "until",
        "until enough evidence exists.",
        "repeat 2 times:\n    run improve\n\n    until",
        "repeat 2 times:\n    run improve\n\n    until enough evidence exists.",
    ):
        _assert_invalid_flow_statement(parser, statement)


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
