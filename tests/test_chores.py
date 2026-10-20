"""Chore names, optional property bodies, and declaration boundaries."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, parse, valid


ROOT = Path(__file__).parents[1]


def test_chore_metadata_exposes_its_name_and_optional_body():
    metadata = json.loads((ROOT / "src/node-types.json").read_text())
    schema = {node["type"]: node for node in metadata if node["named"]}
    assert schema["chore"]["fields"]["name"]["types"] == [{"type": "chore_name", "named": True}]
    assert schema["chore"]["fields"]["body"]["required"] is False
    assert schema["chore_body"]["fields"]["content"]["types"] == [{"type": "content", "named": True}]


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("body", ["", "  Review changes.\n", "  title = Review\n"])
def test_unknown_declarations_preserve_the_following_chore(body, newline):
    source = f"routine unknown:\n{body}chore remaining:\n  Keep this chore.\n"
    root = parse(source.replace("\n", newline))
    assert not valid(root)
    assert root.has_error
    remaining, = descendants(root, "chore")
    assert remaining.child_by_field_name("name").text == b"remaining"


@pytest.mark.parametrize("body", [
    "", "  # Only trivia.\n", "  title = Review\n",
    "  Review changes.\n", "  title = Review\n\n  Review changes.\n",
])
def test_chore_has_its_own_name_and_structural_body(body):
    root = parse(f"chore review-changes:\n{body}")
    assert valid(root), root
    chore, = descendants(root, "chore")
    name = chore.child_by_field_name("name")
    assert name.type == "chore_name"
    assert name.text == b"review-changes"
    assert name.child_count == 0
    body_node = chore.child_by_field_name("body")
    if not body or body.lstrip().startswith("#"):
        assert body_node is None
    else:
        assert body_node.type == "chore_body"


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [False, True])
@pytest.mark.parametrize("body", [
    "", "  # Only trivia.\n", "  title = Review\n", "  Review changes.\n",
    '  title = Review\n\n  Review changes # literally "quoted".\n',
    "  title = Review\n  # Before content.\n  Review changes.\n  chore stays literal # text.\n",
])
def test_chore_highlights_capture_leaves_without_a_declaration_wide_type(body, newline, final_newline):
    source = f"chore review-changes:\n{body}"
    if not final_newline:
        source = source.rstrip("\n")
    root = parse(source.replace("\n", newline))
    assert valid(root), root
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    chore, = descendants(root, "chore")
    assert captures["function"] == [chore.child_by_field_name("name")]
    assert captures["keyword"] == [chore.child_by_field_name("keyword")]
    assert not captures.get("type"), captures
    assert set(captures.get("string", [])) == set(descendants(root, "text"))
    assert set(captures.get("comment", [])) == set(descendants(root, "plain_comment"))
