"""Only chores remain in the authored work declaration and CST vocabulary."""

import json
from pathlib import Path

import pytest

from test_layout_support import descendants, parse, valid


ROOT = Path(__file__).parents[1]


def test_retired_task_and_job_nodes_are_absent():
    metadata = json.loads((ROOT / "src/node-types.json").read_text())
    assert not {"task", "task_keyword", "job_name", "job_body"} & {
        node["type"] for node in metadata
    }


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("body", ["", "  Review changes.\n", "  title = Review\n"])
def test_task_declarations_are_rejected(body, newline):
    source = f"task retired:\n{body}chore remaining:\n  Keep this chore.\n"
    root = parse(source.replace("\n", newline))
    assert not valid(root)
    assert root.has_error
    assert not descendants(root, "task")
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
    assert chore.child_by_field_name("body").type == "chore_body"
