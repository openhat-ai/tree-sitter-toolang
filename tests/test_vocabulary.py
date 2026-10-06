"""Keyword policy is checked against expectations independent of the generator."""

import json
from pathlib import Path
import re

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid
from test_vocabulary_support import REMOVED_WORDS, TABLES


ROOT = Path(__file__).parents[1]


def test_scanner_tables_match_the_language_contract():
    header = (ROOT / "src/keywords.h").read_text()
    actual = {
        name: set(re.findall(r'"([^"]+)"', body))
        for name, body in re.findall(r"static const char \*const (\w+)_keywords\[\] = \{(.*?)\};", header, re.S)
    }
    assert actual == TABLES
    for words in actual.values():
        assert not words & REMOVED_WORDS


@pytest.mark.parametrize("word", sorted(REMOVED_WORDS))
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_removed_words_are_names_and_content_without_legacy_nodes(word, newline):
    source = (f"## @param {word} Input.\nflow example({word}: Text):\n"
              f"  let {word} = spawn worker\n  await {word}\n"
              f"  let note = {word} 2 using worker\n"
              f"  {word}: Ordinary text.\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    for kind in ["param_name", "local_name", "handle_name"]:
        assert any(node.text == word.encode() for node in descendants(root, kind))
    prose, = descendants(root, "implicit_run_statement")
    assert prose.child_by_field_name("content").text.strip() == f"{word}: Ordinary text.".encode()
    value = descendants(root, "let_statement")[1].child_by_field_name("value")
    assert value.type == "content" and value.text.strip() == f"{word} 2 using worker".encode()
    query = Query(Language(tree_sitter_toolang.language()), (ROOT / "queries/highlights.scm").read_text())
    assert all(node.text != word.encode()
               for node in QueryCursor(query).captures(root).get("keyword", []))


@pytest.mark.parametrize("word", sorted(REMOVED_WORDS))
def test_removed_words_do_not_become_bindable_operations(word):
    assert not valid(parse(f"flow work:\n  let {word}\n"))
    assert not valid(parse(f"{word} work:\n  pass\n"))


def test_removed_keyword_nodes_are_absent_from_metadata():
    nodes = json.loads((ROOT / "src/node-types.json").read_text())
    types = {node["type"] for node in nodes}
    assert not {f"flow_{word}_keyword" for word in REMOVED_WORDS} & types
    assert "thunk_keyword" not in types


@pytest.mark.parametrize("word", ["far", "near", "seq", "spread", "produce", "gen", "fut", "wait"])
def test_contextual_values_and_unreserved_spellings_remain_names(word):
    assert valid(parse(f"flow work({word}: Text):\n  let {word} = Text.\n"))


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_removed_heads_switch_cleanly_to_active_operations(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    for word in sorted(REMOVED_WORDS):
        for value, expected_valid in [(word, True), ("run", False), ("run worker", True), (word, True)]:
            current = (f"flow work:\n  let note = {value}\n  run after\n"
                       "flow next:\n  pass\n").encode().replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
            assert valid(tree.root_node) == expected_valid
            assert descendants(tree.root_node, "run_statement")[-1].child_by_field_name("runnable").text == b"after"
            previous = current
