from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")


def _parser() -> Parser:
    language = Language(tree_sitter_toolang.language())
    parser = Parser(language)
    return parser


def _text(source: bytes, node) -> str:
    return source[node.start_byte : node.end_byte].decode("utf-8")


def _fixture_text(name: str) -> str:
    return (FIXTURES_DIR / name).read_text(encoding="utf-8")


def _normalize_newlines(text: str) -> str:
    return text.replace("\r\n", "\n")


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
    header = root.named_children[0].child_by_field_name("header")
    assert header is not None
    assert header.child_by_field_name("parameters") is None


def test_minimal_invoke_fixture_parses_one_thunk():
    parser = _parser()
    source = (FIXTURES_DIR / "minimal_invoke.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == ["thunk"]
    header = root.named_children[0].child_by_field_name("header")
    assert header is not None
    parameters = header.child_by_field_name("parameters")
    assert parameters is not None
    assert parameters.children_by_field_name("parameter") == []


def test_fixtures_can_parse_without_any_thunks():
    parser = _parser()

    for fixture_name in ("caps.too", "slashes.too", "uses.too"):
        source = (FIXTURES_DIR / fixture_name).read_bytes()
        tree = parser.parse(source)
        root = tree.root_node

        thunk_count = sum(1 for child in root.named_children if child.type == "thunk")

        assert thunk_count == 0, fixture_name


def test_slashes_fixture_covers_supported_slash_forms():
    parser = _parser()
    source = (FIXTURES_DIR / "slashes.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == [
        "fenced_declaration",
        "blank_line",
        "fenced_declaration",
        "blank_line",
        "fenced_declaration",
    ]

    headers = []
    bodies = []
    for child in root.named_children:
        if child.type != "fenced_declaration":
            continue
        header = child.child_by_field_name("header")
        body = child.child_by_field_name("body")
        assert header is not None
        assert body is not None
        headers.append(header)
        bodies.append(_text(source, body))

    assert len(headers) == 3
    assert all(header.child_by_field_name("parameters") is None for header in headers)
    assert "params:" not in bodies[0]
    assert "params: style, audience?" in bodies[1]
    assert "params: tone?" in bodies[2]


def test_uses_fixture_contains_only_use_statements():
    parser = _parser()
    source = (FIXTURES_DIR / "uses.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]

    assert child_types == [
        "use_statement",
        "use_statement",
        "use_statement",
        "use_statement",
    ]


def test_caps_fixture_covers_supported_kinds():
    parser = _parser()
    source = (FIXTURES_DIR / "caps.too").read_bytes()

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

    assert kinds == ["service", "service", "psyche", "slash"]


def test_caps_fixture_covers_service_transports_and_slash_frontmatter():
    parser = _parser()
    source = (FIXTURES_DIR / "caps.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node

    service_bodies: list[str] = []
    slash_bodies: list[str] = []
    psyche_bodies: list[str] = []

    for child in root.named_children:
        if child.type != "fenced_declaration":
            continue
        header = child.child_by_field_name("header")
        body = child.child_by_field_name("body")
        assert header is not None
        assert body is not None
        assert header.child_by_field_name("parameters") is None
        kind = header.child_by_field_name("kind")
        assert kind is not None
        kind_text = _text(source, kind)
        body_text = _text(source, body)
        if kind_text == "service":
            assert body.child_by_field_name("frontmatter") is not None
            service_bodies.append(body_text)
        elif kind_text == "slash":
            assert body.child_by_field_name("frontmatter") is not None
            slash_bodies.append(body_text)
        elif kind_text == "psyche":
            assert body.child_by_field_name("frontmatter") is None
            psyche_bodies.append(body_text)

    assert len(service_bodies) == 2
    assert "transport: http" in service_bodies[0]
    assert "url: https://mcp.github.com/mcp" in service_bodies[0]
    assert "Authorization: Bearer $GITHUB_TOKEN" in service_bodies[0]
    assert "transport: stdio" in service_bodies[1]
    assert "command: npx" in service_bodies[1]
    assert "https://mcp.linear.app/sse" in service_bodies[1]
    assert "env: LINEAR_API_KEY, API_KEY=NOT_THE_SAME_NAME" in service_bodies[1]
    assert "cwd: /work/tools" in service_bodies[1]
    assert [_normalize_newlines(body) for body in slash_bodies] == [
        "---\nparams: path, focus?\n---\n\nReview {{path}} carefully.\n{{focus}}\n"
    ]
    assert [_normalize_newlines(body) for body in psyche_bodies] == [
        "Prefer concrete findings and direct language.\n"
    ]


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
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
    ]


def test_kitchen_sink_declarations_keep_metadata_in_fence_bodies():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node

    declarations = [child for child in root.named_children if child.type == "fenced_declaration"]
    assert len(declarations) == 3

    for declaration in declarations:
        header = declaration.child_by_field_name("header")
        body = declaration.child_by_field_name("body")
        assert header is not None
        assert body is not None
        assert header.child_by_field_name("parameters") is None

    service_body_node = declarations[1].child_by_field_name("body")
    slash_body_node = declarations[2].child_by_field_name("body")
    assert service_body_node is not None
    assert slash_body_node is not None
    service_body = _text(source, service_body_node)
    slash_body = _text(source, slash_body_node)

    assert "transport: http" in service_body
    assert "headers:" in service_body
    assert "params: path, focus?" in slash_body


def test_fenced_declaration_headers_reject_parameter_lists():
    parser = _parser()
    source = b"slash summarize(style): ```md\nSummarize the request in a concise style.\n```\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_thunk_unnamed_parameter_must_be_first():
    parser = _parser()
    source = b"thunk bad(path, _):\n  Respond directly.\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_thunk_unnamed_parameter_cannot_repeat():
    parser = _parser()
    source = b"thunk bad(_, _):\n  Respond directly.\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_thunk_optional_named_parameters_must_trail_required_named_parameters():
    parser = _parser()
    source = b"thunk bad(_, focus?, path: path):\n  Respond directly.\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_thunk_named_parameters_without_unnamed_message_parse_cleanly():
    parser = _parser()
    source = b"thunk render(style, audience?: string):\n  Render the current workspace.\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is False


def test_psyche_frontmatter_is_rejected():
    parser = _parser()
    source = b"psyche reviewer: ```md\n---\nmode: strict\n---\n\nPrefer concrete findings.\n```\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_service_requires_frontmatter():
    parser = _parser()
    source = b"service github: ```md\nUse this service when the agent needs GitHub access.\n```\n"

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_service_frontmatter_rejects_unknown_fields():
    parser = _parser()
    source = (
        b"service github: ```md\n---\ntransport: http\nurl: https://mcp.github.com/mcp\n"
        b"token: $GITHUB_TOKEN\n---\n\nUse this service when the agent needs GitHub access.\n```\n"
    )

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_slash_frontmatter_rejects_unknown_fields():
    parser = _parser()
    source = (
        b"slash review: ```md\n---\nparams: path, focus?\ndescription: Review the target.\n"
        b"---\n\nReview {{path}} carefully.\n{{focus}}\n```\n"
    )

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is True


def test_slash_frontmatter_parses_with_crlf_line_endings():
    parser = _parser()
    source = (
        b"slash review: ```md\r\n"
        b"---\r\n"
        b"params: path, focus?\r\n"
        b"---\r\n"
        b"\r\n"
        b"Review {{path}} carefully.\r\n"
        b"{{focus}}\r\n"
        b"```\r\n"
    )

    tree = parser.parse(source)
    root = tree.root_node

    assert root.has_error is False
    declaration = root.named_children[0]
    body = declaration.child_by_field_name("body")
    assert body is not None
    assert body.child_by_field_name("frontmatter") is not None
    assert _normalize_newlines(_text(source, body)) == (
        "---\nparams: path, focus?\n---\n\nReview {{path}} carefully.\n{{focus}}\n"
    )


def test_caps_fixture_body_assertions_are_line_ending_agnostic():
    parser = _parser()
    source = _fixture_text("caps.too").replace("\n", "\r\n").encode("utf-8")

    tree = parser.parse(source)
    root = tree.root_node

    slash_bodies: list[str] = []
    psyche_bodies: list[str] = []

    for child in root.named_children:
        if child.type != "fenced_declaration":
            continue
        header = child.child_by_field_name("header")
        body = child.child_by_field_name("body")
        assert header is not None
        assert body is not None
        kind = header.child_by_field_name("kind")
        assert kind is not None
        kind_text = _text(source, kind)
        body_text = _text(source, body)
        if kind_text == "slash":
            slash_bodies.append(body_text)
        elif kind_text == "psyche":
            psyche_bodies.append(body_text)

    assert [_normalize_newlines(body) for body in slash_bodies] == [
        "---\nparams: path, focus?\n---\n\nReview {{path}} carefully.\n{{focus}}\n"
    ]
    assert [_normalize_newlines(body) for body in psyche_bodies] == [
        "Prefer concrete findings and direct language.\n"
    ]


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
    assert "@definition" in tree_sitter_toolang.TAGS_QUERY
