"""Generated schemas and corpus trees are contracts for the installed binding."""

import json
from pathlib import Path
import re

import pytest
from tree_sitter import Language, Parser, Query

import tree_sitter_toolang

from test_layout_support import walk_all


ROOT = Path(__file__).resolve().parents[1]
METADATA = json.loads((ROOT / "src/node-types.json").read_text())
SCHEMA = {(node["type"], node["named"]): node for node in METADATA}
LANGUAGE = Language(tree_sitter_toolang.language())


def corpus_cases():
    paths = sorted((ROOT / "test/corpus").glob("*.txt"))
    assert paths, "The source distribution must include the shared corpus."
    for path in paths:
        data = path.read_bytes()
        headers = list(re.finditer(rb"^={3,}\r?\n([^\r\n]+)\r?\n={3,}\r?\n", data, re.M))
        assert headers, path
        for index, header in enumerate(headers):
            end = headers[index + 1].start() if index + 1 < len(headers) else len(data)
            parts = re.split(rb"\r?\n-{3,}\r?\n", data[header.end():end], maxsplit=1)
            assert len(parts) == 2, (path, header[1])
            # Only the separator's newline is removed; source blank lines count.
            source, expected = parts
            yield f"{path.stem}/{header[1].decode()}", source, expected.decode()


CORPUS = list(corpus_cases())
SOURCES = [(f"fixture/{path.name}", path.read_bytes())
           for path in sorted((ROOT / "tests/fixtures").rglob("*.too"))]
SOURCES += [(name, source) for name, source, _ in CORPUS]


def tree_tokens(tree):
    # Python includes field labels; the CLI's default corpus format omits them.
    return [token for token in re.findall(r'"(?:\\.|[^"\\])*"|[()]|[^\s()]+', tree)
            if not token.endswith(":")]


@pytest.mark.parametrize("name,source,expected", CORPUS, ids=[case[0] for case in CORPUS])
def test_installed_binding_matches_cli_corpus(name, source, expected):
    root = Parser(LANGUAGE).parse(source).root_node
    assert tree_tokens(str(root)) == tree_tokens(expected), name


def test_runtime_symbols_and_fields_match_generated_metadata():
    symbols = {(LANGUAGE.node_kind_for_id(index), LANGUAGE.node_kind_is_named(index))
               for index in range(LANGUAGE.node_kind_count)
               if LANGUAGE.node_kind_is_visible(index)}
    assert len(SCHEMA) == len(METADATA)
    assert symbols == SCHEMA.keys()
    fields = {field for node in METADATA for field in node.get("fields", {})}
    assert fields == {LANGUAGE.field_name_for_id(index)
                      for index in range(1, LANGUAGE.field_count + 1)}


@pytest.mark.parametrize("name,source", SOURCES, ids=[case[0] for case in SOURCES])
def test_runtime_children_conform_to_the_generated_schema(name, source):
    root = Parser(LANGUAGE).parse(source).root_node
    for node in walk_all(root):
        if node.is_error or node.is_missing:
            continue
        schema = SCHEMA[node.type, node.is_named]
        fields = schema.get("fields", {})
        for index, child in enumerate(node.children):
            field = node.field_name_for_child(index)
            if child.is_error or child.is_extra:
                continue
            if field:
                assert field in fields, (name, node, field)
                child_type = {"type": child.type, "named": child.is_named}
                assert child_type in fields[field]["types"], (name, node, field)
            elif child.is_named:
                child_type = {"type": child.type, "named": True}
                allowed = schema.get("children", {}).get("types", [])
                assert child_type in allowed, (name, node, child)
        if not node.has_error:
            for field, specification in fields.items():
                count = len(node.children_by_field_name(field))
                assert count or not specification["required"], (name, node, field)
                assert count <= 1 or specification["multiple"], (name, node, field)


def test_shared_sources_cover_every_public_named_type():
    seen = {node.type for _, source in SOURCES
            for node in walk_all(Parser(LANGUAGE).parse(source).root_node) if node.is_named}
    assert {node["type"] for node in METADATA if node["named"]} <= seen


@pytest.mark.parametrize("name", ["highlights", "injections", "indents", "outline", "tags"])
def test_packaged_queries_match_source_and_compile(name):
    query = getattr(tree_sitter_toolang, f"{name.upper()}_QUERY")
    assert query == (ROOT / "queries" / f"{name}.scm").read_text()
    Query(LANGUAGE, query)
