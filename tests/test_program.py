"""A parse produces one program with program-owned documentation."""

import json
from pathlib import Path

import pytest

from test_layout_support import descendants, parse, valid


ROOT = Path(__file__).parents[1]


@pytest.mark.parametrize("source", [
    "", "#@ Program documentation.\n",
    "#@ Program documentation.\nchore review:\n  Review changes.\n",
    "agic first:\n  pass\n\nflow second:\n  run first\n",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_program_root_contains_the_complete_source(source, newline):
    source = source.replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    assert root.type == "program"
    assert root.start_byte == 0
    assert root.end_byte == len(source.encode())


@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
def test_program_documentation_exposes_text_without_parameter_tags(ending):
    source = f"#@ @param _ Program documentation.{ending}"
    root = parse(source)
    assert valid(root), root
    documentation, = descendants(root, "program_doc")
    assert documentation.parent == root
    assert documentation.child_by_field_name("text").text == b"@param _ Program documentation."
    assert not descendants(documentation, "param_doc")


def test_program_and_documentation_metadata_expose_their_public_roles():
    nodes = json.loads((ROOT / "src/node-types.json").read_text())
    schema = {node["type"]: node for node in nodes if node["named"]}
    children = {node["type"] for node in schema["program"]["children"]["types"]}
    assert {"program_doc", "item_doc", "param_doc", "flow", "agic"} <= children
    assert schema["program_doc"]["fields"]["text"]["types"] == [{"type": "text", "named": True}]
