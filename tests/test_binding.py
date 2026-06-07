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


def _blocks(node):
    blocks = []
    for child in node.named_children:
        if child.type == "block":
            blocks.append(child)
        elif child.type in {
            "flow_body",
            "flow_body_tail",
            "flow_body_statement",
            "instruction_section",
            "message_section",
            "roled_message",
            "thunk_tail",
            "unroled_message",
        }:
            blocks.extend(_blocks(child))
    return blocks


def _steps(node):
    steps = []
    for child in node.named_children:
        if child.type == "step":
            steps.append(child)
        steps.extend(_steps(child))
    return steps


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
        "Part[]",
    ]
    assert param_counts == [None, 1, 1, 2, 1, 2, 3]
    assert "pass_statement" in str(thunks[0].child_by_field_name("body"))
    assert "type_suffix" in str(thunks[3].child_by_field_name("params"))
    assert "block_fenced" in str(thunks[-1].child_by_field_name("body"))
    echo_body = thunks[1].child_by_field_name("body")
    assert echo_body is not None
    echo_blocks = _blocks(echo_body)
    assert len(echo_blocks) == 1
    assert echo_blocks[0].child_by_field_name("kind") is None
    assert "Echo the current input:" in _text(source, echo_blocks[0])


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
        "program_doc_comment",
        "blank_line",
        "doc_comment",
    ]
    assert [item.type for item in items] == [
        "skill",
        "service",
        "prompt",
        "psyche",
        "struct",
        "instruct",
        "context",
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

    context = items[6]
    assert context.child_by_field_name("name") is not None
    assert "block_indented" in str(context.child_by_field_name("body"))

    thunk = items[7]
    body = thunk.child_by_field_name("body")
    assert body is not None
    blocks = _blocks(body)
    assert [_text(source, block.child_by_field_name("kind")).strip() for block in blocks] == [
        "instruct",
        "context",
        "user",
    ]
    assert "block_fenced" in str(blocks[2].child_by_field_name("value"))
    assert "block_name" in str(blocks[1].child_by_field_name("value"))


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
    assert params[0] is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params[0].children_by_field_name("param")
    ] == ["in"]
    assert _text(source, outputs[0]) == "Part[]"
    assert params[1] is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params[1].children_by_field_name("param")
    ] == ["in"]
    assert _text(source, outputs[1]) == "Part[]"
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
        for block in _blocks(chore_body)
        if block.child_by_field_name("kind") is not None
    ]
    chat_unroled_messages = [
        block
        for block in _blocks(chat_body)
        if block.child_by_field_name("kind") is None
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
    assert chore_block_kinds == [
        "instruct",
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
        "context",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
        "thunk",
    ]


def test_flows_fixture_covers_signatures_steps_and_doc_comments():
    parser = _parser()
    source = (FIXTURES_DIR / "flows.too").read_bytes()

    tree = parser.parse(source)
    root = tree.root_node
    items = [_item_child(item) for item in _items(root)]
    flows = [item for item in items if item.type == "flow"]

    assert root.has_error is False
    assert root.named_children[0].type == "program_doc_comment"
    assert [item.type for item in items] == [
        "struct",
        "struct",
        "struct",
        "flow",
        "flow",
        "flow",
        "flow",
        "flow",
    ]
    assert [_text(source, flow.child_by_field_name("name")) for flow in flows] == [
        "research",
        "delegate",
        "named",
        "bare",
        "empty",
    ]

    research = flows[0]
    params = research.child_by_field_name("params")
    output = research.child_by_field_name("output")
    body = research.child_by_field_name("body")

    assert params is not None
    assert [
        _text(source, param.child_by_field_name("name"))
        for param in params.children_by_field_name("param")
    ] == ["in"]
    assert _text(source, params.children_by_field_name("param")[0].child_by_field_name("type")) == "Pack"
    assert _text(source, output) == "Answer"
    assert body is not None
    assert len([child for child in body.named_children if child.type == "directive"]) == 2
    assert "doc_comment" in str(body)

    research_steps = _steps(body)
    assert [
        _text(source, step.child_by_field_name("keyword")).strip()
        for step in research_steps
    ] == ["do", "unfold", "keep", "drop", "rank", "each", "fold", "repeat"]
    do_head = research_steps[0].child_by_field_name("head")
    assert [
        _text(source, target)
        for target in _field_descendants(do_head, "target")
    ] == ["classify", "normalize"]
    assert "flow_to_modifier" in str(research_steps[1].child_by_field_name("head"))
    assert "SearchJob" in _text(source, research_steps[1].child_by_field_name("head"))
    assert "flow_par_modifier" in str(research_steps[2].child_by_field_name("head"))
    assert "Keep only useful" in _text(source, research_steps[2].child_by_field_name("body"))
    assert "Drop duplicate" in _text(source, research_steps[3].child_by_field_name("body"))
    assert "flow_number_arg" in str(research_steps[4].child_by_field_name("head"))
    assert "flow_to_modifier" in str(research_steps[5].child_by_field_name("head"))
    assert "flow_par_modifier" in str(research_steps[5].child_by_field_name("head"))
    assert "Synthesize all notes" in _text(source, research_steps[6].child_by_field_name("body"))
    assert _text(source, research_steps[7].child_by_field_name("condition_keyword")) == "until"
    assert _text(source, research_steps[7].child_by_field_name("count")) == "3"

    delegate_steps = _steps(flows[1].child_by_field_name("body"))
    assert [_text(source, step.child_by_field_name("keyword")).strip() for step in delegate_steps] == [
        "ask",
        "repeat",
    ]
    assert _text(source, delegate_steps[1].child_by_field_name("count")) == "3"

    named_steps = _steps(flows[2].child_by_field_name("body"))
    assert [_text(source, step.child_by_field_name("keyword")).strip() for step in named_steps] == [
        "unfold",
        "fold",
    ]
    assert [
        _text(source, step.child_by_field_name("head"))
        for step in named_steps
    ] == ["plan_searches", "synthesize_answer"]
    bare_blocks = _blocks(flows[3].child_by_field_name("body"))
    assert len(bare_blocks) == 1
    assert bare_blocks[0].child_by_field_name("kind") is None
    assert "Use the current input directly." in _text(source, bare_blocks[0])
    assert "pass_statement" in str(flows[4].child_by_field_name("body"))


def test_flow_named_reference_and_inline_thunk_forms():
    parser = _parser()
    source = (
        b"flow named:\n"
        b"  do classify, normalize, summarize\n"
        b"\n"
        b"flow inline:\n"
        b"  unfold to SearchJob: Create search jobs.\n"
        b"\n"
        b"flow block:\n"
        b"  fold to Answer:\n"
        b"    Synthesize final answer.\n"
    )

    tree = parser.parse(source)
    flows = [_item_child(item) for item in _items(tree.root_node)]

    assert tree.root_node.has_error is False
    named_head = _steps(flows[0].child_by_field_name("body"))[0].child_by_field_name("head")
    assert [
        _text(source, target)
        for target in _field_descendants(named_head, "target")
    ] == ["classify", "normalize", "summarize"]
    inline_step = _steps(flows[1].child_by_field_name("body"))[0]
    assert "flow_inline_body" in str(inline_step.child_by_field_name("body"))
    assert "Create search jobs." in _text(source, inline_step.child_by_field_name("body"))
    block_step = _steps(flows[2].child_by_field_name("body"))[0]
    assert "block_indented_implicit" in str(block_step.child_by_field_name("body"))
    assert "Synthesize final answer." in _text(source, block_step.child_by_field_name("body"))


def test_flow_repeat_forms():
    parser = _parser()
    source = (
        b"flow repeats:\n"
        b"  do search\n"
        b"  repeat 3\n"
        b"  repeat until: enough evidence\n"
        b"  repeat 5 until:\n"
        b"    answer is complete\n"
    )

    tree = parser.parse(source)
    steps = _steps(_item_child(_items(tree.root_node)[0]).child_by_field_name("body"))

    assert tree.root_node.has_error is False
    assert [_text(source, step.child_by_field_name("keyword")).strip() for step in steps] == [
        "do",
        "repeat",
        "repeat",
        "repeat",
    ]
    assert _text(source, steps[1].child_by_field_name("count")) == "3"
    assert steps[2].child_by_field_name("condition_keyword") is not None
    assert steps[2].child_by_field_name("count") is None
    assert _text(source, steps[3].child_by_field_name("count")) == "5"
    assert "block_indented_implicit" in str(steps[3].child_by_field_name("condition"))


def test_flow_directive_nodes_only_parse_at_body_start():
    parser = _parser()
    source = b"flow body:\n  models = gpt-5\n  do start\n  models = gpt-5\n"

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")

    assert tree.root_node.has_error is False
    assert len([child for child in body.named_children if child.type == "directive"]) == 1
    assert "models = gpt-5" in _text(source, _blocks(body)[0])


def test_flow_pass_is_required_for_empty_body_and_must_be_last():
    parser = _parser()
    empty = b"flow empty:\n"
    trailing = b"flow bad:\n  pass\n  do next\n"
    nested_empty = b"flow bad:\n  fold to Answer:\n"

    assert parser.parse(empty).root_node.has_error is True
    assert parser.parse(trailing).root_node.has_error is True
    assert parser.parse(nested_empty).root_node.has_error is True


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
        "in",
        "path",
        "focus",
    ]
    assert body is not None
    assert len([child for child in body.named_children if child.type == "directive"]) == 6
    blocks = _blocks(body)
    assert [_text(source, block.child_by_field_name("kind")).strip() for block in blocks] == [
        "instruct",
        "context",
        "user",
    ]


def test_parameter_types_are_required():
    parser = _parser()
    source = b"thunk bad(in: Part[], focus):\n  instruct: none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_thunk_name_can_be_omitted():
    parser = _parser()
    source = b"thunk:\n  instruct: none\n"

    tree = parser.parse(source)
    thunk = _item_child(_items(tree.root_node)[0])

    assert tree.root_node.has_error is False
    assert thunk.child_by_field_name("name") is None


def test_thunk_instruction_blocks_must_precede_messages():
    parser = _parser()
    source = b"thunk bad:\n  user: hello\n  instruct: default\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_directive_like_bare_text_after_instruction_block_is_allowed():
    parser = _parser()
    source = b"thunk bad:\n  instruct: default\n  recall = none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is False


def test_thunk_context_and_instruct_are_each_allowed_once():
    parser = _parser()
    source = b"thunk bad:\n  context: default\n  instruct: default\n  context: none\n"

    tree = parser.parse(source)

    assert tree.root_node.has_error is True


def test_thunk_roled_messages_support_user_assistant_and_tool():
    parser = _parser()
    source = b"thunk simulate:\n  recall = none\n  user: hello\n  assistant: hi\n  tool: result\n"

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    blocks = _blocks(body)

    assert tree.root_node.has_error is False
    assert [_text(source, block.child_by_field_name("kind")).strip() for block in blocks] == [
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


def test_bare_text_is_parsed_as_unroled_message():
    parser = _parser()
    source = b"thunk reply(in: Text) -> Text:\n  Return directly.\n"

    tree = parser.parse(source)
    body = _item_child(_items(tree.root_node)[0]).child_by_field_name("body")
    blocks = _blocks(body)

    assert tree.root_node.has_error is False
    assert len(blocks) == 1
    assert blocks[0].child_by_field_name("kind") is None
    assert "Return directly." in _text(source, blocks[0])


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
