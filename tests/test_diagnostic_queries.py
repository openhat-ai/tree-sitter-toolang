"""Packaged queries distinguish recovery diagnostics from semantic text."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import edit_tree, fingerprint, valid, walk_all


CASES = [
    ("invalid_missing_body", "flow first:\n", "flow first:\n  pass\n"),
    ("invalid_missing_content", "context first:\n", "context first: Body.\n"),
    ("invalid_missing_stmt", "flow first:\n  models = fast\n",
     "flow first:\n  models = fast\n  run worker\n"),
    ("invalid_param", "flow first(: Text):\n  pass\n", "flow first(topic: Text):\n  pass\n"),
    ("invalid_param", "flow first(topic: Text extra):\n  pass\n",
     "flow first(topic: Text):\n  pass\n"),
    ("invalid_flow_stmt", "flow first:\n  let exec worker\n", "flow first:\n  let run worker\n"),
    ("invalid_flow_stmt", "flow first:\n  repeat:\n    run worker\n    until 42\n",
     "flow first:\n  repeat:\n    run worker\n    until ready\n"),
    ("ERROR", "flow first:\n  run worker extra\n", "flow first:\n  run worker\n"),
]


def test_error_capture_cases_cover_every_public_diagnostic():
    metadata = json.loads((Path(__file__).parents[1] / "src/node-types.json").read_text())
    assert {node["type"] for node in metadata if node["type"].startswith("invalid_")} == {
        kind for kind, _, _ in CASES if kind != "ERROR"
    }


@pytest.mark.parametrize("kind,broken,repaired", CASES)
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
@pytest.mark.parametrize("final_newline", [False, True])
def test_error_captures_preserve_diagnostics_and_following_items(kind, broken, repaired, indent, newline, final_newline):
    language = Language(tree_sitter_toolang.language())
    parser = Parser(language)
    query = Query(language, tree_sitter_toolang.HIGHLIGHTS_QUERY)
    suffix = "## Next.\nflow next:\n  run after\n".replace("  ", indent).replace("\n", newline)
    if not final_newline:
        suffix = suffix.removesuffix(newline)
    previous = b""
    tree = parser.parse(previous)
    for prefix in [repaired, broken, repaired, broken, repaired]:
        source = (prefix.replace("  ", indent).replace("\n", newline) + suffix).encode()
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        captures = QueryCursor(query).captures(root)
        diagnostics = [node for node in walk_all(root) if node.is_error or node.type.startswith("invalid_")]
        assert set(captures.get("error", [])) == set(diagnostics)
        if prefix == broken:
            assert not valid(root)
            assert any(node.type == kind for node in diagnostics)
            for node in diagnostics:
                assert node.end_byte <= source.index(b"## Next.")
                assert not any(node.start_byte <= text.start_byte < node.end_byte
                               for text in captures.get("string", []))
        else:
            assert valid(root) and not diagnostics
        doc, following = root.named_children[-2:]
        assert doc.type == "item_doc" and doc.text == ("## Next." + newline).encode()
        assert following.type == "flow" and valid(following)
        assert following.child_by_field_name("name").text == b"next"
        assert following.text == suffix.encode().split(("## Next." + newline).encode(), 1)[1]
        previous = source
