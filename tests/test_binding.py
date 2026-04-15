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


def test_minimal_run_fixture_parses_one_thunk():
    parser = _parser()
    source = (FIXTURES_DIR / "minimal_run.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == ["thunk"]


def test_minimal_invoke_fixture_parses_one_thunk():
    parser = _parser()
    source = (FIXTURES_DIR / "minimal_invoke.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == ["thunk"]


def test_fixtures_can_parse_without_any_thunks():
    parser = _parser()

    for fixture_name in ("fenced_declarations.too", "slash_only.too"):
        source = (FIXTURES_DIR / fixture_name).read_bytes()
        tree = parser.parse(source)
        root = tree.root_node

        thunk_count = sum(1 for child in root.named_children if child.type == "thunk")

        assert thunk_count == 0, fixture_name


def test_slash_only_fixture_parses_slash_without_parameters():
    parser = _parser()
    source = (FIXTURES_DIR / "slash_only.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    slash_decl = root.named_children[0]

    assert slash_decl.type == "slash_declaration"

    header = slash_decl.child_by_field_name("header")
    assert header is not None
    assert header.child_by_field_name("parameters") is None


def test_fenced_declarations_fixture_covers_supported_kinds():
    parser = _parser()
    source = (FIXTURES_DIR / "fenced_declarations.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node

    kinds: list[str] = []
    for child in root.named_children:
        if child.type != "fenced_declaration":
            continue
        header = child.child_by_field_name("header")
        assert header is not None
        kind = header.child_by_field_name("kind")
        assert kind is not None
        kinds.append(source[kind.start_byte : kind.end_byte].decode("utf-8"))

    assert kinds == ["service", "psyche", "slash"]


def test_default_main_thunk_fixture_parses_one_unnamed_thunk():
    parser = _parser()
    source = (FIXTURES_DIR / "default_main_thunk.too").read_bytes()

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
        "slash_declaration",
        "struct_declaration",
        "struct_declaration",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
    ]


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
    assert "@definition" in tree_sitter_toolang.TAGS_QUERY
