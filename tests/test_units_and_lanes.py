"""Units are spelling choices; lane clauses precede operation connectors."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, point, valid


OPERATIONS = [
    ("generate 3", "generate_statement", "using", "Text[]"),
    ("map", "map_statement", "using", "Text"),
    ("keep", "keep_statement", "if", "Boolean"),
    ("drop", "drop_statement", "if", "Boolean"),
    ("sort descending", "sort_statement", "by", "Number"),
]
NUMBERS = ["0", "1", "01", "2", "0002", "9" * 128]
BINDINGS = ["", "let result = ", "let "]
LITERAL = "Keep 1 lanes and 2 time in 3 lanes # literal."


def target(connector, type_name, form):
    if form == "named":
        return f" {connector} worker"
    connector = "" if connector == "using" else f" {connector}"
    if form == "inline":
        return f"{connector} -> {type_name}: {LITERAL}"
    return f"{connector} -> {type_name}:\n    {LITERAL}"


@pytest.fixture(scope="module")
def highlights():
    return Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)


@pytest.mark.parametrize("head,kind,connector,type_name", OPERATIONS)
@pytest.mark.parametrize("number", NUMBERS)
@pytest.mark.parametrize("unit", ["lane", "lanes"])
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("form", ["named", "inline", "block"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_lane_spellings_preserve_direct_fields_ranges_and_highlights(
    head, kind, connector, type_name, number, unit, binding, form, newline, highlights
):
    source = (f"flow work:\n  {binding}{head} in {number} {unit}{target(connector, type_name, form)}\n"
              "  run after\nflow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert valid(root), root
    operation, = descendants(root, kind)
    lanes = operation.child_by_field_name("lanes")
    assert lanes.type == "integer_literal" and lanes.text == number.encode() and lanes.child_count == 0
    assert source[lanes.start_byte:lanes.end_byte] == number.encode()
    assert tuple(lanes.start_point) == point(source, lanes.start_byte)
    assert tuple(lanes.end_point) == point(source, lanes.end_byte)
    keyword, = descendants(operation, f"flow_{unit}_keyword")
    assert keyword.child_count == 0 and keyword.text == unit.encode()
    assert keyword.start_byte == lanes.end_byte + 1
    captures = QueryCursor(highlights).captures(root)
    assert keyword in captures["keyword"]
    assert lanes in captures["number"]
    runnable = operation.child_by_field_name("runnable")
    if form == "named":
        assert runnable.type == "runnable_name" and runnable.text == b"worker"
        assert keyword.end_byte < descendants(operation, f"flow_{connector}_keyword")[0].start_byte
    else:
        assert runnable.type == "inline_agic"
        content = runnable.child_by_field_name("content")
        assert content.text.strip() == LITERAL.encode()
        assert runnable.child_by_field_name("return").text == type_name.encode()
        assert not any(node.start_byte >= content.start_byte and node.end_byte <= content.end_byte
                       for node in captures["keyword"])
    if kind == "generate_statement":
        assert operation.child_by_field_name("count").text == b"3"
    if binding:
        owner, = descendants(root, "let_statement")
        assert owner.child_by_field_name("statement") == operation
        assert owner.child_by_field_name("value") is None
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("number", NUMBERS)
@pytest.mark.parametrize("unit", ["time", "times"])
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_repeat_units_do_not_classify_numeric_value(number, unit, binding, newline, highlights):
    source = (f"flow work:\n  {binding}repeat {number} {unit} windowing 01:\n"
              "    run worker\n  run after\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    repeat, = descendants(root, "repeat_statement")
    count = repeat.child_by_field_name("count")
    window = repeat.child_by_field_name("window")
    assert count.type == window.type == "integer_literal"
    assert count.text == number.encode() and window.text == b"01"
    assert count.child_count == window.child_count == 0
    keyword, = descendants(repeat, f"flow_{unit}_keyword")
    captures = QueryCursor(highlights).captures(root)
    assert keyword in captures["keyword"] and count in captures["number"]
    assert count.end_byte + 1 == keyword.start_byte
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"


@pytest.mark.parametrize("head,kind,connector,type_name", OPERATIONS)
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("lanes", ["", " in 1 lane"])
def test_no_lane_clause_or_single_prefix_clause_is_valid(head, kind, connector, type_name, binding, newline, lanes):
    root = parse((f"flow work:\n  {binding}{head}{lanes} {connector} worker\n").replace("\n", newline))
    assert valid(root), root
    operation, = descendants(root, kind)
    assert bool(operation.child_by_field_name("lanes")) == bool(lanes)


@pytest.mark.parametrize("head,kind,connector,type_name", OPERATIONS)
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("placement", ["suffix", "duplicate_prefix", "prefix_and_suffix"])
def test_suffix_and_duplicate_lanes_are_invalid_and_preserve_following_source(
    head, kind, connector, type_name, binding, newline, placement
):
    statement = {
        "suffix": f"{head} {connector} worker in 2 lanes",
        "duplicate_prefix": f"{head} in 1 lane in 2 lanes {connector} worker",
        "prefix_and_suffix": f"{head} in 1 lane {connector} worker in 2 lanes",
    }[placement]
    root = parse((f"flow work:\n  run before\n  {binding}{statement}\n  run after\nflow next:\n  pass\n").replace("\n", newline))
    assert not valid(root), root
    assert not descendants(root, "implicit_run_statement"), root
    assert all(node.child_by_field_name("value") is None for node in descendants(root, "let_statement"))
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("statement", [
    "map in 2lanes using worker", "map in 01lane using worker",
    "map in -1 lane using worker", "map in +1 lanes using worker",
    "map in 1.5 lanes using worker", "map in 1_000 lanes using worker",
    "map in 1lane using worker", "map in 1 lanesusing worker",
    "map in 2 Lane using worker", "map in 2 laness using worker",
    "repeat 2times:\n    run worker", "repeat 1time:\n    run worker",
    "repeat -1 time:\n    run worker", "repeat +1 times:\n    run worker",
    "repeat 1.5 times:\n    run worker", "repeat 1_000 time:\n    run worker",
    "repeat 2 timeswindowing 3:\n    run worker", "repeat 1 Time:\n    run worker",
    "generate in 2 lanes 3 using worker", "sort in 2 lanes ascending by worker",
    "reduce in 2 lanes using worker", "keep first 2 in 2 lanes", "drop in 2 lanes last 1",
    "run in 2 lanes worker", "spawn in 2 lanes worker",
])
@pytest.mark.parametrize("binding", BINDINGS)
def test_unit_relaxation_does_not_relax_tokens_or_operation_support(statement, binding):
    root = parse(f"flow work:\n  run before\n  {binding}{statement}\n  run after\nflow next:\n  pass\n")
    assert not valid(root), root
    assert all(node.child_by_field_name("value") is None for node in descendants(root, "let_statement"))
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_units_at_eof_and_tab_separators_preserve_source(ending, indent):
    root = parse(f"flow work:\n{indent}map\tin\t01\tlanes\tusing\tworker" + ending)
    assert valid(root), root
    assert descendants(root, "map_statement")[0].child_by_field_name("lanes").text == b"01"


def test_long_numbers_remain_raw_digit_tokens_without_numeric_conversion():
    number = "0" * 5000 + "1"
    root = parse(f"flow work:\n  generate {number} in {number} lanes using worker\n"
                 f"  repeat {number} times windowing {number}:\n    run worker\n")
    assert valid(root), root
    assert len(descendants(root, "integer_literal")) == 4
    assert all(node.text == number.encode() for node in descendants(root, "integer_literal"))


def test_private_value_classification_tokens_are_removed():
    root = Path(__file__).parents[1]
    grammar = json.loads((root / "src/grammar.json").read_text())
    externals = {node["name"] for node in grammar["externals"]}
    assert "integer_literal" in externals
    assert not {"_one_integer_literal", "_other_integer_literal"} & externals
    language = Language(tree_sitter_toolang.language())
    names = {language.node_kind_for_id(i) for i in range(language.node_kind_count)}
    assert not {"_one_integer_literal", "_other_integer_literal"} & names


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("binding", BINDINGS)
def test_incremental_unit_and_clause_edits_match_fresh_trees(newline, binding):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for statement, accepted in [
        ("map in 1 lanes using worker", True), ("map in 2 lane using worker", True),
        ("map in 01 lanes using worker", True), ("map in 01lanes using worker", False),
        ("keep in 2 lane if worker", True), ("keep if worker in 2 lanes", False),
        ("drop in 1 lanes if worker", True), ("drop if worker in 1 lane", False),
        ("sort ascending in 2 lane by worker", True), ("sort ascending by worker in 2 lanes", False),
        ("sort ascending in 1 lanes by -> Number: in 2 lane is literal.", True),
        ("repeat 1 times:\n    run worker", True), ("repeat 2 time:\n    run worker", True),
        ("repeat 2time:\n    run worker", False), ("map using worker", True),
    ]:
        current = (f"flow work:\n  run before\n  {binding}{statement}\n  run after\nflow next:\n  pass\n").replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node), current
        assert valid(root) == accepted, root
        assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"
        previous = current


@pytest.mark.parametrize("statement", [
    "keep if worker in 2 lanes", "drop if worker in 2 lanes", "sort ascending by worker in 2 lanes",
])
@pytest.mark.parametrize("binding", BINDINGS)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_suffix_lane_on_first_statement_reports_error_without_losing_following_code(statement, binding, newline):
    root = parse((f"flow work:\n  {binding}{statement}\n  run after\nflow next:\n  pass\n").replace("\n", newline))
    assert not valid(root), root
    assert descendants(root, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"
