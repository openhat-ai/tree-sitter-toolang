"""Variable declarations use the identifier pattern minus grammar keywords."""

import json
import re
from pathlib import Path

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


def keyword_words(rule, rules):
    if rule["type"] == "STRING":
        return {rule["value"]}
    if rule["type"] == "SYMBOL":
        return keyword_words(rules[rule["name"]], rules)
    if "content" in rule:
        return keyword_words(rule["content"], rules)
    return set().union(*(keyword_words(member, rules) for member in rule.get("members", [])))


RULES = json.loads(Path(__file__).parents[1].joinpath("src/grammar.json").read_text())["rules"]
KEYWORDS = set().union(*(keyword_words(rule, RULES) for name, rule in RULES.items()
                        if name.endswith("_keyword") or name == "_flow_reserved_word"))
KEYWORDS = sorted(word for word in KEYWORDS if re.fullmatch(r"[a-z][a-z0-9_]*", word))
CONTEXTS = [
    "flow work:\n  let {name} = Evidence.\n",
    "flow work:\n  let {name} = run worker\n",
    "flow work({name}: Text):\n  pass\n",
    "agic work({name}?: Text):\n  pass\n",
    "## @param {name} Description.\nflow work:\n  pass\n",
]


@pytest.mark.parametrize("name", KEYWORDS)
@pytest.mark.parametrize("source", CONTEXTS)
def test_every_keyword_is_rejected_as_a_variable_name(name, source):
    assert not valid(parse(source.format(name=name))), (name, source)


@pytest.mark.parametrize("keyword", KEYWORDS)
def test_keyword_membership_uses_the_whole_identifier(keyword):
    for name in (keyword + "_value", "value_" + keyword, keyword + "2"):
        root = parse(CONTEXTS[0].format(name=name))
        assert valid(root), root
        local, = descendants(root, "local_name")
        assert local.text.decode() == name
        assert local.child_count == 0


@pytest.mark.parametrize("source", CONTEXTS)
@pytest.mark.parametrize("name", ["a", "z0", "a__", "a_0_b", "a" * 128, "x9_" * 50,
                                  "", "_name", "9name", "Name", "aB", "a-b", "a.b", "变量"])
def test_variable_name_regex_boundaries(source, name):
    root = parse(source.format(name=name))
    expected = bool(re.fullmatch(r"[a-z][a-z0-9_]*", name))
    assert valid(root) == expected, root
    if expected:
        container = "local_name" if "let " in source else "param_name"
        node, = descendants(root, container)
        assert node.text.decode() == name
        if container == "local_name":
            assert node.child_count == 0


@pytest.mark.parametrize("source", CONTEXTS)
def test_primary_input_marker_remains_special(source):
    assert valid(parse(source.format(name="_"))) == ("let " not in source)


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_name_edits_match_fresh_validation_and_ranges(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for source in CONTEXTS:
        for name in ["value", "until", "until2", "spawn", "run", "default", "name_", "_", "aB", "a" * 64, "value"]:
            current = source.format(name=name).encode().replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node), current
            previous = current
