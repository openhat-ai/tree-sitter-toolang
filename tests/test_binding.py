from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")


def _parser() -> Parser:
    language = Language(tree_sitter_toolang.language())
    parser = Parser(language)
    return parser


def test_language_capsule_builds_language():
    language = Language(tree_sitter_toolang.language())

    assert language.abi_version > 0
    assert language.node_kind_count > 0
    assert language.field_count > 0


def test_parser_can_parse_all_fixtures():
    parser = _parser()

    for source_path in sorted(FIXTURES_DIR.glob("*.too")):
        tree = parser.parse(source_path.read_bytes())
        root = tree.root_node

        assert root.type == "source_file", source_path.name
        assert root.has_error is False, source_path.name
        assert root.named_child_count > 0, source_path.name


def test_minimal_fixture_parses_one_thunk():
    parser = _parser()
    source = (FIXTURES_DIR / "minimal.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == ["thunk"]


def test_kitchen_sink_fixture_covers_core_program_constructs():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == [
        "comment",
        "use_statement",
        "use_statement",
        "use_statement",
        "use_statement",
        "blank_line",
        "fenced_declaration",
        "blank_line",
        "fenced_declaration",
        "blank_line",
        "fenced_declaration",
        "blank_line",
        "struct_declaration",
        "struct_declaration",
        "slash_declaration",
        "thunk",
    ]


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
    assert "@definition" in tree_sitter_toolang.TAGS_QUERY
