from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")


def _parser() -> Parser:
    language = Language(tree_sitter_toolang.language())
    return Parser(language)


def _text(source: bytes, node) -> str:
    return source[node.start_byte : node.end_byte].decode("utf-8")


def _fixture_text(name: str) -> str:
    return (FIXTURES_DIR / name).read_text(encoding="utf-8")


def _normalize_newlines(text: str) -> str:
    return text.replace("\r\n", "\n")


def _items(root):
    return [child for child in root.named_children if child.type == "item"]


def _item_child(item):
    assert item.named_child_count == 1
    return item.named_children[0]


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


def test_script_thunks_fixture_covers_signature_variations():
    parser = _parser()
    source = (FIXTURES_DIR / "script_thunks.too").read_bytes()

    tree = parser.parse(source)
    thunks = [_item_child(item) for item in _items(tree.root_node)]
    names = [
        _text(source, name)
        if (name := thunk.child_by_field_name("name")) is not None
        else None
        for thunk in thunks
    ]
    outputs = [thunk.child_by_field_name("output") for thunk in thunks]
    param_counts = [
        len(params.children_by_field_name("param"))
        if (params := thunk.child_by_field_name("params")) is not None
        else None
        for thunk in thunks
    ]

    assert [thunk.type for thunk in thunks] == ["thunk"] * 7
    assert names == ["respond", "echo", "summarize", "classify", "decide", "score", "render"]
    assert [None if output is None else _text(source, output) for output in outputs] == [
        None,
        "Text",
        "Text",
        "Json",
        "Boolean",
        "Number",
        "Message",
    ]
    assert param_counts == [None, 0, 1, 2, 1, 2, 3]
    assert "type_suffix" in str(thunks[3].child_by_field_name("params"))
    assert "block_fenced" in str(thunks[-1].child_by_field_name("body"))


def test_syntax_variants_fixture_parses_empty_params():
    parser = _parser()
    source = (FIXTURES_DIR / "syntax_variants.too").read_bytes()

    tree = parser.parse(source)
    thunk = next(
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "thunk"
    )
    params = thunk.child_by_field_name("params")

    assert thunk.type == "thunk"
    assert params is not None
    assert params.children_by_field_name("param") == []


def test_fixtures_can_parse_without_any_thunks():
    parser = _parser()

    for fixture_name in ("caps_fenced.too", "caps_indented.too", "uses.too"):
        source = (FIXTURES_DIR / fixture_name).read_bytes()
        tree = parser.parse(source)
        item_types = [_item_child(item).type for item in _items(tree.root_node)]

        assert "thunk" not in item_types, fixture_name


def test_uses_fixture_contains_only_use_items():
    parser = _parser()
    source = (FIXTURES_DIR / "uses.too").read_bytes()

    tree = parser.parse(source)
    item_types = [_item_child(item).type for item in _items(tree.root_node)]

    assert item_types == ["use", "use", "use", "use"]


def test_caps_fenced_fixture_covers_prompt_markdown_forms():
    parser = _parser()
    source = (FIXTURES_DIR / "caps_fenced.too").read_bytes()

    tree = parser.parse(source)
    prompts = [
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "prompt"
    ]
    bodies = [prompt.child_by_field_name("body") for prompt in prompts]

    assert [prompt.type for prompt in prompts] == ["prompt", "prompt"]
    assert all(body is not None for body in bodies)
    assert bodies[0].named_children[0].child_by_field_name("frontmatter") is None
    assert bodies[1].named_children[0].child_by_field_name("frontmatter") is not None
    assert "params: path, focus" in _text(source, bodies[1])


def test_caps_fenced_fixture_covers_supported_kinds_and_frontmatter():
    parser = _parser()
    source = (FIXTURES_DIR / "caps_fenced.too").read_bytes()

    tree = parser.parse(source)
    caps = [_item_child(item) for item in _items(tree.root_node)]
    kinds = [cap.type for cap in caps]
    bodies = [cap.child_by_field_name("body") for cap in caps]

    assert kinds == [
        "service",
        "service",
        "skill",
        "psyche",
        "prompt",
        "prompt",
    ]
    assert all(body is not None for body in bodies)
    assert all(body.named_children[0].type == "cap_markdown" for body in bodies)
    assert bodies[0].named_children[0].child_by_field_name("frontmatter") is not None
    assert bodies[2].named_children[0].child_by_field_name("frontmatter") is not None
    assert bodies[3].named_children[0].child_by_field_name("frontmatter") is None
    assert "protocol: http" in _text(source, bodies[0])
    assert "target: https://mcp.github.com/mcp" in _text(source, bodies[0])
    assert "source: by3gus/review" in _text(source, bodies[2])
    assert [_normalize_newlines(_text(source, bodies[5]))] == [
        "```md\n---\nparams: path, focus\n---\n\nReview {{path}} carefully.\n{{focus}}\n```\n"
    ]


def test_caps_indented_fixture_covers_supported_kinds_and_metadata():
    parser = _parser()
    source = (FIXTURES_DIR / "caps_indented.too").read_bytes()

    tree = parser.parse(source)
    caps = [_item_child(item) for item in _items(tree.root_node)]
    kinds = [cap.type for cap in caps]
    bodies = [cap.child_by_field_name("body") for cap in caps]

    assert kinds == [
        "service",
        "skill",
        "psyche",
        "prompt",
    ]
    assert all(body is not None for body in bodies)
    assert all(body.named_children[0].type == "cap_indented" for body in bodies)
    assert "target = http://localhost:3000/mcp" in _text(source, bodies[0])
    assert "source = by3gus/rewrite" in _text(source, bodies[1])
    assert "Prefer concrete findings." in _text(source, bodies[2])
    assert "params = tone" in _text(source, bodies[3])


def test_syntax_variants_fixture_covers_indented_caps_docs_and_fenced_blocks():
    parser = _parser()
    source = (FIXTURES_DIR / "syntax_variants.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    items = [_item_child(item) for item in _items(root)]

    assert root.has_error is False
    assert [child.type for child in root.named_children[:5]] == [
        "comment_line",
        "blank_line",
        "comment_line",
        "blank_line",
        "comment_line",
    ]
    assert [item.type for item in items] == [
        "skill",
        "service",
        "prompt",
        "psyche",
        "struct",
        "instruct",
        "thunk",
    ]

    for cap in items[:4]:
        body = cap.child_by_field_name("body")
        assert body is not None
        assert body.named_children[0].type == "cap_indented"

    struct = items[4]
    fields = [child for child in struct.child_by_field_name("body").named_children if child.type == "field"]
    assert [_text(source, field.child_by_field_name("name")) for field in fields] == [
        "summary",
        "count",
        "ok",
        "payload",
        "messages",
        "findings",
    ]
    assert fields[1].child_by_field_name("optional") is not None
    assert "type_suffix" in str(fields[4].child_by_field_name("type"))
    assert "user_type" in str(fields[5].child_by_field_name("type"))

    instruct = items[5]
    assert instruct.child_by_field_name("name") is not None
    assert "block_fenced" in str(instruct.child_by_field_name("body"))

    thunk = items[6]
    body = thunk.child_by_field_name("body")
    assert body is not None
    blocks = [child for child in body.named_children if child.type == "block"]
    assert [_text(source, block.child_by_field_name("kind")).strip() for block in blocks] == [
        "instruct",
        "system",
        "user",
    ]
    assert "block_fenced" in str(blocks[2].child_by_field_name("value"))
    assert "block_content_inline" in str(blocks[1].child_by_field_name("value"))


def test_comments_fixture_preserves_hash_lines_inside_fenced_blocks():
    parser = _parser()
    source = (FIXTURES_DIR / "comments.too").read_bytes()

    tree = parser.parse(source)
    caps = [
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type in {"service", "prompt"}
    ]
    bodies = [cap.child_by_field_name("body") for cap in caps]

    assert tree.root_node.has_error is False
    assert all(body is not None for body in bodies)
    assert "# frontmatter hash line is literal metadata text" in _text(source, bodies[0])
    assert "# body hash line is literal block text" in _text(source, bodies[0])
    assert "# prompt frontmatter hash line" in _text(source, bodies[1])
    assert "# prompt body hash line" in _text(source, bodies[1])
    assert "frontmatter_comment" in str(bodies[0])


def test_agent_thunks_fixture_covers_chat_task_and_chore_shapes():
    parser = _parser()
    source = (FIXTURES_DIR / "agent_thunks.too").read_bytes()

    tree = parser.parse(source)
    thunks = [_item_child(item) for item in _items(tree.root_node)]
    names = [_text(source, thunk.child_by_field_name("name")) for thunk in thunks]
    params = [thunk.child_by_field_name("params") for thunk in thunks]
    outputs = [thunk.child_by_field_name("output") for thunk in thunks]

    assert tree.root_node.has_error is False
    assert names == ["chat", "task", "chore"]
    assert params[0] is None
    assert outputs[0] is None
    assert params[1] is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params[1].children_by_field_name("param")
    ] == ["input"]
    assert _text(source, outputs[1]) == "Message"
    assert params[2] is None
    assert outputs[2] is None

    chat_body = thunks[0].child_by_field_name("body")
    task_body = thunks[1].child_by_field_name("body")
    chore_body = thunks[2].child_by_field_name("body")
    assert chat_body is not None
    assert task_body is not None
    assert chore_body is not None

    chat_directive_keys = [
        _text(source, directive.child_by_field_name("key")).strip()
        for directive in chat_body.named_children
        if directive.type == "directive"
    ]
    task_directive_keys = [
        _text(source, directive.child_by_field_name("key")).strip()
        for directive in task_body.named_children
        if directive.type == "directive"
    ]
    chore_block_kinds = [
        _text(source, block.child_by_field_name("kind")).strip()
        for block in chore_body.named_children
        if block.type == "block"
    ]

    assert chat_directive_keys == [
        "models",
        "tools",
        "delegates",
    ]
    assert task_directive_keys == [
        "models",
        "tools",
        "skills",
        "services",
        "delegates",
        "handoffs",
    ]
    assert chore_block_kinds == [
        "system",
        "user",
    ]


def test_kitchen_sink_fixture_covers_core_program_constructs():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]
    item_types = [_item_child(item).type for item in _items(root)]

    assert child_types[0] == "comment_line"
    assert item_types == [
        "use",
        "use",
        "use",
        "use",
        "psyche",
        "service",
        "prompt",
        "struct",
        "struct",
        "instruct",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
    ]


def test_kitchen_sink_thunk_signature_directives_and_blocks():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    thunks = [
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "thunk"
    ]
    review = next(
        thunk
        for thunk in thunks
        if (name := thunk.child_by_field_name("name")) is not None
        and _text(source, name) == "review"
    )
    params = review.child_by_field_name("params")
    body = review.child_by_field_name("body")

    assert params is not None
    assert [ _text(source, param.child_by_field_name("name")) for param in params.children_by_field_name("param") ] == [
        "input",
        "path",
        "focus",
    ]
    assert body is not None
    assert len([child for child in body.named_children if child.type == "directive"]) == 5
    blocks = [child for child in body.named_children if child.type == "block"]
    assert [_text(source, block.child_by_field_name("kind")).strip() for block in blocks] == [
        "instruct",
        "system",
        "user",
    ]


def test_parameter_types_are_required():
    parser = _parser()
    source = b"thunk bad(input: Message, focus):\n  system: none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_thunk_name_is_required():
    parser = _parser()
    source = b"thunk:\n  system: none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_lowercase_builtin_type_is_rejected():
    parser = _parser()
    source = b"struct ReviewResult:\n  summary: string\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_none_is_parsed_as_user_type_not_builtin_type():
    parser = _parser()
    source = b"struct ReviewResult:\n  summary: None\n"

    tree = parser.parse(source)
    field = _item_child(_items(tree.root_node)[0]).child_by_field_name("body").named_children[0]
    type_node = field.child_by_field_name("type")

    assert tree.root_node.has_error is False
    assert type_node is not None
    assert "user_type" in str(type_node)
    assert "builtin_type" not in str(type_node)


def test_bare_text_is_not_allowed_in_thunk_body():
    parser = _parser()
    source = b"thunk bad:\n  Return directly.\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_cap_frontmatter_parses_with_crlf_line_endings():
    parser = _parser()
    source = (
        b"prompt review: ```md\r\n"
        b"---\r\n"
        b"params: path, focus\r\n"
        b"---\r\n"
        b"\r\n"
        b"Review {{path}} carefully.\r\n"
        b"{{focus}}\r\n"
        b"```\r\n"
    )

    tree = parser.parse(source)
    root = tree.root_node
    prompt = _item_child(_items(root)[0])
    body = prompt.child_by_field_name("body")

    assert root.has_error is False
    assert body is not None
    assert body.named_children[0].child_by_field_name("frontmatter") is not None
    assert "params: path, focus" in _normalize_newlines(_text(source, body))


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
    assert "@definition" in tree_sitter_toolang.TAGS_QUERY
