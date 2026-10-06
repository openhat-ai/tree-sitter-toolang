"""Horizontal separators and indivisible tokens at structural boundaries."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("statement", [
    "generate 2using worker", "generate 2in 4 lanes using worker",
    "map in 2lanes using worker", "map in 1lane using worker",
    "repeat 2times:\n    run worker", "repeat 1time:\n    run worker",
    "repeat 2 timeswindowing 1:\n    run worker",
    "repeat 2 times windowing1:\n    run worker",
    "keep first2", "drop last2", "generate 01using worker",
    "generate 2_000 using worker", "map in 02lanes using worker",
])
def test_words_and_numbers_cannot_be_split(statement):
    # A complete operation head commits both ordinary and bound syntax.
    for binding in ["", "let value = ", "let "]:
        assert not valid(parse(f"flow work:\n  {binding}{statement}\n"))


@pytest.mark.parametrize("kind", ["skill", "psyche", "service", "prompt"])
@pytest.mark.parametrize("reference", ["./foo", "/foo", "../foo", "@foo", "foo"])
@pytest.mark.parametrize("separator", ["", " ", "\t", "  \t"])
def test_raw_references_require_horizontal_separation(kind, reference, separator):
    root = parse(f"with {kind}{separator}{reference}\n")
    assert valid(root) == bool(separator)
    if separator:
        value = descendants(root, "with")[0].child_by_field_name("reference")
        assert value.text == reference.encode()
        assert value.child_count == 0


@pytest.mark.parametrize("separator", [" ", "\t", "  \t"])
def test_all_word_transitions_accept_horizontal_separators(separator):
    source = (
        "with skill ./foo\nflow work:\n  models+=fast\n"
        "  let job=async run worker\n  let result=await job\n"
        "  seek reviewer worker\n  generate 2 in 4 lanes using worker\n"
        "  map in 1 lane using worker\n  keep first 2\n  drop last 2\n"
        "  sort ascending by score\n  repeat 2 times windowing 1:\n    run worker\n"
    )
    # Only replace within headers; structural indentation has its own policy.
    source = "\n".join(line[:len(line) - len(line.lstrip())]
                       + line.lstrip().replace(" ", separator)
                       for line in source.split("\n"))
    root = parse(source)
    assert valid(root), root
    assert all(node.child_count == 0 for node in descendants(root, "integer_literal"))


@pytest.mark.parametrize("source", [
    "flow work(input?:Text,count:Number)->Text[]:\n  run worker# Note.\n",
    "flow work( )->Text []:\n  generate 2->Text:Generate text.\n",
    "flow work:\n  models+=fast\n  tools-=slow\n  hands=ns::flow:work\n  run worker\n",
    "skill my-skill:\n  Text.\n",
    "flow work:\n  let text=2times runworker skill./foo\n",
])
def test_symbols_delimit_tokens_and_content_remains_literal(source):
    assert valid(parse(source)), parse(source)


@pytest.mark.parametrize("source", [
    "flow work- >Text:\n  pass\n", "flow work->Text[ ]:\n  pass\n",
    "flow work:\n  models+ =fast\n  run worker\n",
    "flow work:\n  tools- =slow\n  run worker\n",
    "flow work:\n  hands=ns ::flow:work\n  run worker\n",
    "skill my- skill:\n  Text.\n",
    "with skill\n./foo\n", "flow work:\n  repeat 2\ntimes:\n    run worker\n",
])
def test_token_interiors_and_required_separators_do_not_accept_newlines(source):
    assert not valid(parse(source)), parse(source)


@pytest.mark.parametrize("number", ["0", "00", "1", "0001", "2", "023", "9" * 100])
def test_integer_tokens_preserve_digits_and_singular_plural_rules(number):
    unit = "time" if int(number) == 1 else "times"
    lane = "lane" if int(number) == 1 else "lanes"
    root = parse(f"flow work:\n  lanes={number}\n"
                 f"  generate {number} in {number} {lane}->Text:Text.\n"
                 f"  repeat {number} {unit} windowing {number}:\n    run worker\n")
    assert valid(root), root
    numbers = descendants(root, "integer_literal")
    assert len(numbers) == 5
    assert all(node.text == number.encode() and node.child_count == 0 for node in numbers)


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_separators_and_numeric_categories_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    cases = [
        ("repeat 2 times:\n    run worker", True),
        ("repeat 2times:\n    run worker", False),
        ("repeat 01 time:\n    run worker", True),
        ("repeat 01 times:\n    run worker", False),
        ("repeat 02 times windowing 2:\n    run worker", True),
        ("repeat 02 times windowing2:\n    run worker", False),
        ("generate 2 using worker", True),
        ("generate 2using worker", False),
        ("generate 2->Text:Text.", True),
        ("map in 01 lane using worker", True),
        ("map in 01lane using worker", False),
        ("let text=2times", True),
    ]
    for reference in ["skill ./foo", "skill./foo", "skill\t./foo"]:
        for statement, accepted in cases:
            current = (f"with {reference}\nflow work:\n  {statement}\n"
                       "  run after\nflow next:\n  pass\n").encode().replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
            assert valid(tree.root_node) == (accepted and reference != "skill./foo")
            previous = current
