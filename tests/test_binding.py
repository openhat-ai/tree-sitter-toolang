from pathlib import Path

from tree_sitter import Language, Parser

import tree_sitter_toolang


FIXTURES_DIR = Path(__file__).with_name("fixtures")
FIXTURE_NAMES = (
    "agent_agics.too",
    "caps.too",
    "caps_indented.too",
    "comments.too",
    "flows.too",
    "jobs.too",
    "kitchen_sink.too",
    "script_agics.too",
    "syntax_variants.too",
    "with_caps.too",
    "repeat_comments.too",
    "unified_blocks.too",
)


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


def _nodes(node, *types):
    matches = []
    for child in node.named_children:
        if child.type in types:
            matches.append(child)
        matches.extend(_nodes(child, *types))
    return matches


def _messages(node):
    return _nodes(node, "message")


def _field_descendants(node, field_name):
    matches = list(node.children_by_field_name(field_name))
    for child in node.named_children:
        matches.extend(_field_descendants(child, field_name))
    return matches


def test_language_capsule_builds_language():
    language = Language(tree_sitter_toolang.language())

    assert language.abi_version > 0
    assert language.node_kind_count > 0
    assert language.field_count > 0


def test_parser_can_parse_all_fixtures():
    parser = _parser()

    for fixture_name in FIXTURE_NAMES:
        source_path = FIXTURES_DIR / fixture_name
        tree = parser.parse(source_path.read_bytes())
        root = tree.root_node

        assert root.type == "source_file", source_path.name
        assert root.has_error is False, source_path.name
        assert root.named_child_count > 0, source_path.name


def test_script_agics_fixture_covers_signature_variations():
    parser = _parser()
    source = (FIXTURES_DIR / "script_agics.too").read_bytes()

    tree = parser.parse(source)
    shebang = tree.root_node.named_children[0]
    agics = [_item_child(item) for item in _items(tree.root_node)]
    names = [
        _text(source, name)
        if (name := agic.child_by_field_name("name")) is not None
        else None
        for agic in agics
    ]
    outputs = [agic.child_by_field_name("return") for agic in agics]
    param_counts = [
        len(params.children_by_field_name("param"))
        if (params := agic.child_by_field_name("params")) is not None
        else None
        for agic in agics
    ]

    assert shebang.type == "comment_line"
    assert _text(source, shebang) in {
        "#!/usr/bin/env toolang\n",
        "#!/usr/bin/env toolang\r\n",
    }
    assert [agic.type for agic in agics] == ["agic"] * 7
    assert names == ["respond", "echo", "summarize", "classify", "decide", "score", "render"]
    assert [None if output is None else _text(source, output) for output in outputs] == [
        None,
        "Text",
        "Text",
        "Json",
        "Boolean",
        "Number",
        "Part[]",
    ]
    assert param_counts == [None, 1, 1, 2, 1, 2, 3]
    assert "pass_keyword" in str(agics[0].child_by_field_name("body"))
    assert "type_suffix" in str(agics[3].child_by_field_name("params"))
    assert "text_block" in str(agics[-1].child_by_field_name("body"))
    echo_body = agics[1].child_by_field_name("body")
    assert echo_body is not None
    echo_messages = _messages(echo_body)
    assert len(echo_messages) == 1
    assert not _nodes(echo_messages[0], "role")
    assert "Echo the current input:" in _text(source, echo_messages[0])
    assert "{{_}}" in _text(source, echo_messages[0])


def test_syntax_variants_fixture_parses_empty_params():
    parser = _parser()
    source = (FIXTURES_DIR / "syntax_variants.too").read_bytes()

    tree = parser.parse(source)
    agic = next(
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "agic"
    )
    params = agic.child_by_field_name("params")

    assert agic.type == "agic"
    assert params is not None
    assert params.children_by_field_name("param") == []


def test_fixtures_can_parse_without_any_agics():
    parser = _parser()

    for fixture_name in ("caps.too", "caps_indented.too", "with_caps.too"):
        source = (FIXTURES_DIR / fixture_name).read_bytes()
        tree = parser.parse(source)
        item_types = [_item_child(item).type for item in _items(tree.root_node)]

        assert "agic" not in item_types, fixture_name


def test_with_fixture_contains_only_with_items():
    parser = _parser()
    source = (FIXTURES_DIR / "with_caps.too").read_bytes()

    tree = parser.parse(source)
    item_types = [_item_child(item).type for item in _items(tree.root_node)]

    assert item_types == ["with", "with", "with", "with"]


def test_caps_fixture_covers_placeholder_based_prompts():
    parser = _parser()
    source = (FIXTURES_DIR / "caps.too").read_bytes()

    tree = parser.parse(source)
    prompts = [
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "prompt"
    ]
    bodies = [prompt.child_by_field_name("body") for prompt in prompts]

    assert [prompt.type for prompt in prompts] == ["prompt", "prompt"]
    assert all(body is not None for body in bodies)
    assert all(body.type == "cap_body" for body in bodies)
    assert not any(
        prompt.children_by_field_name("property") for prompt in prompts
    )
    assert "Review {{_}} directly." in _text(source, bodies[0])
    assert "Review {{path}} carefully." in _text(source, bodies[1])
    assert "{{focus}}" in _text(source, bodies[1])


def test_prompt_property_like_prefix_uses_common_cap_property_shape():
    parser = _parser()
    source = b"prompt literal:\n  mode = exact\n  Render {{_}}.\n"

    tree = parser.parse(source)
    prompt = _item_child(_items(tree.root_node)[0])
    body = prompt.child_by_field_name("body")

    assert tree.root_node.has_error is False
    properties = prompt.children_by_field_name("property")

    assert body is not None and body.type == "cap_body"
    assert [_text(source, property_node).strip() for property_node in properties] == [
        "mode = exact"
    ]
    assert "mode = exact" not in _text(source, body)
    assert "Render {{_}}." in _text(source, body)


def test_caps_fixture_covers_supported_kinds_and_metadata():
    parser = _parser()
    source = (FIXTURES_DIR / "caps.too").read_bytes()

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
    assert all(body.type == "cap_body" for body in bodies)
    properties = [cap.children_by_field_name("property") for cap in caps]
    assert "protocol = http" in _text(source, properties[0][0])
    assert "target = https://mcp.github.com/mcp" in _text(
        source, properties[0][1]
    )
    assert "source = by3gus/review" in _text(source, properties[2][0])
    assert properties[3:] == [[], [], []]
    assert "Prefer concrete findings and direct language." in _text(source, bodies[3])
    assert "Review {{path}} carefully." in _text(source, bodies[5])


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
    assert all(body.type == "cap_body" for body in bodies)
    properties = [cap.children_by_field_name("property") for cap in caps]
    assert "target = http://localhost:3000/mcp" in _text(
        source, properties[0][1]
    )
    assert "source = by3gus/rewrite" in _text(source, properties[1][0])
    assert properties[2:] == [[], []]
    assert "Prefer concrete findings." in _text(source, bodies[2])
    assert "{{_}}" in _text(source, bodies[3])
    assert "{{tone}}" in _text(source, bodies[3])


def test_jobs_fixture_covers_task_and_chore_items():
    parser = _parser()
    source = (FIXTURES_DIR / "jobs.too").read_bytes()

    tree = parser.parse(source)
    jobs = [_item_child(item) for item in _items(tree.root_node)]
    bodies = [job.child_by_field_name("body") for job in jobs]

    assert tree.root_node.has_error is False
    assert [job.type for job in jobs] == ["task", "chore"]
    assert [_text(source, job.child_by_field_name("name")) for job in jobs] == [
        "review_api",
        "stale-prs",
    ]
    assert all(body is not None and body.type == "job_body" for body in bodies)
    assert "title = Review API changes" in _text(source, bodies[0])
    assert "schedule = FREQ=HOURLY;INTERVAL=6" in _text(source, bodies[1])
    assert "report actionable items" in _text(source, bodies[1])


def test_syntax_variants_fixture_covers_indented_caps_docs_and_text_blocks():
    parser = _parser()
    source = (FIXTURES_DIR / "syntax_variants.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    items = [_item_child(item) for item in _items(root)]

    assert root.has_error is False
    assert [child.type for child in root.named_children[:5]] == [
        "comment_line",
        "blank_line",
        "parent_doc_line",
        "blank_line",
        "doc_line",
    ]
    assert [item.type for item in items] == [
        "skill",
        "service",
        "prompt",
        "psyche",
        "struct",
        "instruct",
        "context",
        "agic",
    ]

    for cap in items[:4]:
        body = cap.child_by_field_name("body")
        assert body is not None
        assert body.type == "cap_body"

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
    assert "text_block" in str(instruct.child_by_field_name("body"))

    context = items[6]
    assert context.child_by_field_name("name") is not None
    assert "text_block" in str(context.child_by_field_name("body"))

    agic = items[7]
    body = agic.child_by_field_name("body")
    assert body is not None
    messages = _messages(body)
    assert [
        _text(source, _nodes(message, "role")[0]).strip()
        for message in messages
        if _nodes(message, "role")
    ] == [
        "user",
    ]
    assert [
        child.type
        for child in body.named_children
        if child.type in {"settings", "messages"}
    ] == [
        "settings",
        "messages",
    ]
    assert [
        child.type
        for child in _nodes(body, "settings")[0].named_children
        if child.type.endswith("_setting")
    ] == [
        "instruct_setting",
        "context_setting",
    ]
    assert "text_block" in str(messages[0])


def test_comments_fixture_keeps_comments_separate_from_cap_bodies():
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
    assert all("#" not in _text(source, body) for body in bodies)
    assert all(_nodes(cap, "comment_line") for cap in caps)


def test_agent_agics_fixture_covers_chat_task_and_chore_shapes():
    parser = _parser()
    source = (FIXTURES_DIR / "agent_agics.too").read_bytes()

    tree = parser.parse(source)
    agics = [_item_child(item) for item in _items(tree.root_node)]
    names = [_text(source, agic.child_by_field_name("name")) for agic in agics]
    params = [agic.child_by_field_name("params") for agic in agics]
    outputs = [agic.child_by_field_name("return") for agic in agics]

    assert tree.root_node.has_error is False
    assert names == ["chat", "task", "chore"]
    assert params[0] is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params[0].children_by_field_name("param")
    ] == ["_"]
    assert _text(source, outputs[0]) == "Part[]"
    assert params[1] is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params[1].children_by_field_name("param")
    ] == ["_"]
    assert _text(source, outputs[1]) == "Part[]"
    assert params[2] is None
    assert outputs[2] is None

    chat_body = agics[0].child_by_field_name("body")
    task_body = agics[1].child_by_field_name("body")
    chore_body = agics[2].child_by_field_name("body")
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
    chore_message_roles = [
        _text(source, _nodes(message, "role")[0]).strip()
        for message in _messages(chore_body)
        if _nodes(message, "role")
    ]
    chat_unroled_messages = [
        message
        for message in _messages(chat_body)
        if not _nodes(message, "role")
    ]

    assert chat_directive_keys == [
        "models",
        "tools",
        "hands",
    ]
    assert task_directive_keys == [
        "models",
        "tools",
        "skills",
        "services",
        "hands",
        "handoffs",
    ]
    assert [
        child.type
        for child in _nodes(chore_body, "settings")[0].named_children
        if child.type.endswith("_setting")
    ] == [
        "instruct_setting",
    ]
    assert chore_message_roles == [
        "user",
    ]
    assert len(chat_unroled_messages) == 1
    assert "{{_}}" in _text(source, chat_unroled_messages[0])


def test_kitchen_sink_fixture_covers_core_program_constructs():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    child_types = [child.type for child in root.named_children]
    item_types = [_item_child(item).type for item in _items(root)]

    assert child_types[0] == "comment_line"
    assert item_types == [
        "with",
        "with",
        "with",
        "with",
        "psyche",
        "service",
        "prompt",
        "struct",
        "struct",
        "instruct",
        "context",
        "agic",
        "agic",
        "agic",
        "agic",
        "agic",
    ]



def test_directive_value_is_trimmed_line_payload():
    parser = _parser()
    source = (
        b"agic search:\n"
        b"  tools = web_search/*, shell # selected tools\n"
        b"  user: Search.\n"
    )

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    directive = next(child for child in body.named_children if child.type == "directive")

    assert tree.root_node.has_error is False
    assert directive.child_by_field_name("values") is None
    assert _text(source, directive.child_by_field_name("value")).strip() == "web_search/*, shell"


def test_recall_directive_uses_canonical_keyword_values():
    parser = _parser()
    source = (
        b"agic automatic:\n  recall = auto\n"
        b"agic disabled:\n  recall = none\n"
        b"agic distant:\n  recall = far\n"
        b"agic recent:\n  recall = near\n"
        b"agic combined:\n  recall = far, near\n"
    )

    tree = parser.parse(source)
    directives = _nodes(tree.root_node, "directive")
    values = [directive.child_by_field_name("value") for directive in directives]

    assert tree.root_node.has_error is False
    assert all(
        directive.child_by_field_name("key").type == "recall_keyword"
        for directive in directives
    )
    assert all(
        directive.child_by_field_name("operator").type == "assign_operator"
        for directive in directives
    )
    assert [_text(source, value).strip() for value in values] == [
        "auto",
        "none",
        "far",
        "near",
        "far, near",
    ]
    assert [
        [child.type for child in value.named_children]
        for value in values
    ] == [
        ["recall_auto_keyword"],
        ["recall_none_keyword"],
        ["recall_far_keyword"],
        ["recall_near_keyword"],
        ["recall_far_keyword", "comma", "recall_near_keyword"],
    ]


def test_recall_directive_rejects_noncanonical_forms():
    parser = _parser()

    for source in (
        b"agic bad:\n  recall = line\n",
        b"agic bad:\n  recall = default\n",
        b"agic bad:\n  recall = near, far\n",
        b"agic bad:\n  recall += far\n",
    ):
        tree = parser.parse(source)
        assert tree.root_node.has_error or _nodes(
            tree.root_node, "invalid_agic_reserved_message"
        ), source


def test_flow_pass_is_required_for_empty_body_and_must_be_last():
    parser = _parser()
    empty = b"flow empty:\n"
    trailing = b"flow bad:\n  pass\n  run next\n"
    nested_empty = b"flow bad:\n  run -> Answer:\n"

    assert parser.parse(empty).root_node.has_error is True
    assert parser.parse(trailing).root_node.has_error is True
    assert parser.parse(nested_empty).root_node.has_error is True


def test_empty_text_blocks_are_rejected():
    parser = _parser()

    for source in (
        b"context empty:\n",
        b"instruct empty:\n",
        b"agic bad:\n  user:\n",
        b"flow bad:\n  run:\n",
    ):
        assert parser.parse(source).root_node.has_error is True, source


def test_kitchen_sink_agic_signature_directives_and_blocks():
    parser = _parser()
    source = (FIXTURES_DIR / "kitchen_sink.too").read_bytes()

    tree = parser.parse(source)
    agics = [
        _item_child(item)
        for item in _items(tree.root_node)
        if _item_child(item).type == "agic"
    ]
    review = next(
        agic
        for agic in agics
        if (name := agic.child_by_field_name("name")) is not None
        and _text(source, name) == "review"
    )
    params = review.child_by_field_name("params")
    body = review.child_by_field_name("body")

    assert params is not None
    assert [ _text(source, param.child_by_field_name("name")) for param in params.children_by_field_name("param") ] == [
        "_",
        "path",
        "focus",
    ]
    assert body is not None
    assert len([child for child in body.named_children if child.type == "directive"]) == 6
    settings = _nodes(body, "settings")[0] if _nodes(body, "settings") else None
    messages = _messages(body)
    assert settings is not None
    assert [
        child.type
        for child in settings.named_children
        if child.type.endswith("_setting")
    ] == [
        "instruct_setting",
        "context_setting",
    ]
    assert [
        _text(source, _nodes(message, "role")[0]).strip()
        for message in messages
        if _nodes(message, "role")
    ] == [
        "user",
    ]


def test_parameter_types_can_be_omitted():
    parser = _parser()
    source = b"agic ok(_: Part[], focus):\n  instruct none\n"

    tree = parser.parse(source)
    params = _item_child(_items(tree.root_node)[0]).child_by_field_name("params")
    untyped = params.children_by_field_name("param")[1]

    assert tree.root_node.has_error is False
    assert _text(source, params.children_by_field_name("param")[0].child_by_field_name("name")) == "_"
    assert untyped.child_by_field_name("type") is None


def test_agic_name_can_be_omitted():
    parser = _parser()
    source = b"agic:\n  instruct none\n"

    tree = parser.parse(source)
    agic = _item_child(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    assert agic.child_by_field_name("name") is None


def test_agic_settings_support_inline_bodies():
    parser = _parser()
    source = (
        b"agic search:\n"
        b"  context abc\n"
        b"  instruct:\n"
        b"      hello world\n"
        b"\n"
        b"  Query:\n"
        b"  {{_}}\n"
    )

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    settings = _nodes(body, "settings")[0]
    messages = _messages(body)

    assert tree.root_node.has_error is False
    assert _nodes(settings, "context_setting")
    instruct_setting = _nodes(settings, "instruct_setting")[0]
    assert "text_block" in str(instruct_setting)
    assert "hello world" in _text(source, instruct_setting)
    assert len(messages) == 1
    assert "Query:" in _text(source, messages[0])


def test_agic_instruction_blocks_must_precede_messages():
    parser = _parser()
    source = b"agic bad:\n  user: hello\n  instruct default\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is False
    assert _nodes(tree.root_node, "invalid_agic_reserved_message")


def test_unroled_messages_do_not_fallback_from_reserved_words():
    parser = _parser()
    invalid_sources = [
        b"agic bad:\n  instruct default\n  recall = none\n",
        b"agic bad:\n  user content\n",
        b"agic bad:\n  assistant content\n",
        b"agic bad:\n  tool content\n",
        b"agic bad:\n  pass content\n",
        b"agic bad:\n  models are mentioned as text\n",
        b"agic bad:\n  context project extra\n",
    ]
    valid_setting = b"agic ok:\n  context project\n"
    explicit_message = (
        b"agic ok:\n"
        b"  user:\n"
        b"    context project is just text\n"
        b"    user: this is also text\n"
        b"    models are also text\n"
    )

    for source in invalid_sources:
        tree = parser.parse(source)
        assert tree.root_node.has_error is True or _nodes(tree.root_node, "invalid_agic_reserved_message"), source

    assert parser.parse(valid_setting).root_node.has_error is False
    assert parser.parse(explicit_message).root_node.has_error is False


def test_agic_context_and_instruct_are_each_allowed_once():
    parser = _parser()
    source = b"agic bad:\n  context default\n  instruct default\n  context none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is False
    assert _nodes(tree.root_node, "invalid_agic_reserved_message")


def test_agic_roled_messages_support_user_assistant_and_tool():
    parser = _parser()
    source = b"agic simulate:\n  recall = none\n  user: hello\n  assistant: hi\n  tool: result\n"

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    messages = _messages(body)

    assert tree.root_node.has_error is False
    assert [_text(source, _nodes(message, "role")[0]).strip() for message in messages] == [
        "user",
        "assistant",
        "tool",
    ]


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


def test_pack_is_parsed_as_user_type_not_builtin_type():
    parser = _parser()
    source = b"struct ReviewResult:\n  parts: Pack\n"
    tree = parser.parse(source)

    assert not tree.root_node.has_error
    field = _nodes(tree.root_node, "field")[0]
    type_node = field.child_by_field_name("type")
    assert type_node is not None
    assert "user_type" in str(type_node)
    assert "builtin_type" not in str(type_node)


def test_bare_text_is_parsed_as_unroled_message():
    parser = _parser()
    source = (
        b"agic reply(_: Text) -> Text:\n"
        b"  Return directly.\n"
        b"  Include the current context in the reply.\n"
    )

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    messages = _messages(body)

    assert tree.root_node.has_error is False
    assert len(messages) == 1
    assert not _nodes(messages[0], "role")
    assert "Return directly." in _text(source, messages[0])
    assert "Include the current context in the reply." in _text(source, messages[0])


def test_unroled_message_stops_before_explicit_roles():
    parser = _parser()
    source = (
        b"agic classify:\n"
        b"  Evidence bundle:\n"
        b"  {{ _ }}\n"
        b"\n"
        b"  Decide whether to keep it.\n"
        b"\n"
        b"  user:\n"
        b"    abc\n"
        b"\n"
        b"  assistant:\n"
        b"    def\n"
    )

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    messages = _messages(body)

    assert tree.root_node.has_error is False
    assert len(messages) == 3
    assert not _nodes(messages[0], "role")
    assert "Evidence bundle:" in _text(source, messages[0])
    assert [_text(source, _nodes(message, "role")[0]).strip() for message in messages[1:]] == [
        "user",
        "assistant",
    ]


def test_comments_split_unroled_messages():
    parser = _parser()
    source = (
        b"agic split:\n"
        b"  first message\n"
        b"  # Plain comment splits messages.\n"
        b"  second message\n"
    )

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    messages = _messages(body)

    assert tree.root_node.has_error is False
    assert len(messages) == 2
    assert "first message" in _text(source, messages[0])
    assert "second message" in _text(source, messages[1])
    assert "Plain comment" not in _text(source, messages[0])
    assert "Plain comment" not in _text(source, messages[1])


def test_indented_cap_body_parses_with_crlf_line_endings():
    parser = _parser()
    source = (
        b"prompt review:\r\n"
        b"  Review {{path}} carefully.\r\n"
        b"  {{focus}}\r\n"
    )

    tree = parser.parse(source)
    root = tree.root_node
    prompt = _item_child(_items(root)[0])
    body = prompt.child_by_field_name("body")

    assert root.has_error is False
    assert body is not None
    assert body.type == "cap_body"
    assert "Review {{path}} carefully." in _normalize_newlines(_text(source, body))


def test_queries_are_packaged():
    assert "@" in tree_sitter_toolang.HIGHLIGHTS_QUERY
    assert "(" in tree_sitter_toolang.OUTLINE_QUERY
    assert "@definition" in tree_sitter_toolang.TAGS_QUERY
    for keyword in (
        "flow_sort_keyword",
        "flow_using_keyword",
        "flow_if_keyword",
        "flow_by_keyword",
        "flow_in_keyword",
        "flow_lane_keyword",
        "flow_lanes_keyword",
        "flow_ascending_keyword",
        "flow_descending_keyword",
        "flow_time_keyword",
        "flow_times_keyword",
    ):
        assert f"({keyword}) @keyword" in tree_sitter_toolang.HIGHLIGHTS_QUERY
