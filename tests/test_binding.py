from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")


def test_language_capsule_builds_language():
    language = Language(tree_sitter_toolang.language())

    assert language.abi_version > 0
    assert language.node_kind_count > 0
    assert language.field_count > 0


def test_parser_can_parse_toolang_source():
    language = Language(tree_sitter_toolang.language())
    parser = Parser(language)
    source = (FIXTURES_DIR / "smoke.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    first_child = root.named_child(0)
    second_child = root.named_child(1)

    assert root.type == "source_file"
    assert root.has_error is False
    assert first_child is not None
    assert second_child is not None
    assert first_child.type == "use_statement"
    assert second_child.type == "declaration"
    assert second_child.child_by_field_name("header").type == "declaration_header"


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
