"""Boundary matrices for the approved shared block and text contracts."""

import pytest

from test_layout_support import descendants, parse, point, valid


@pytest.mark.parametrize("count", ["", " 2 times"])
@pytest.mark.parametrize("body", ["run improve", "# No executable body.", "pass"])
@pytest.mark.parametrize("condition", ["", "until: Ready.", "until:\n      Ready."])
@pytest.mark.parametrize("ending", ["", "\n  run publish\n", "\nflow next:\n  pass"])
def test_repeat_requires_executable_body_and_at_least_one_bound(
    count, body, condition, ending
):
    source = f"flow work:\n  repeat{count}:\n    {body}"
    if condition:
        source += f"\n    {condition}"
    root = parse(source + ending)
    expected_valid = body == "run improve" and bool(count or condition)
    assert valid(root) == expected_valid, source
    if expected_valid:
        loop = descendants(root, "repeat_statement")[0]
        assert loop.child_by_field_name("body").type == "statements"
        assert [n.text.strip() for n in descendants(loop, "run_statement")] == [
            b"run improve"
        ]
        assert (loop.child_by_field_name("count") is not None) == bool(count)
        until = loop.child_by_field_name("until")
        assert (until is not None) == bool(condition)
        if until is not None:
            assert until.type == "inline_agic_body"
            assert until.child_by_field_name("body").text.strip() == b"Ready."


@pytest.mark.parametrize(
    "header, required",
    [
        ("flow work:", True),
        ("agic work:", True),
        ("struct Item:", True),
        ("context notes:", True),
        ("instruct rules:", True),
        ("psyche reviewer:", False),
        ("skill review:", False),
        ("service search:", False),
        ("prompt review:", False),
        ("task review:", False),
        ("chore review:", False),
    ],
)
@pytest.mark.parametrize("trivia", ["", "\n\n", "\n# Note.\n## Details.\n##! Parent."])
@pytest.mark.parametrize("ending", ["", "\nflow next:\n  pass\n"])
def test_declaration_body_optionality_at_eof_and_next_item(
    header, required, trivia, ending
):
    root = parse(header + "\n" + trivia + ending)
    assert valid(root) == (not required)
    if not required:
        items = [
            node.named_children[0]
            for node in root.named_children
            if node.type == "item"
        ]
        assert len(items) == (2 if ending else 1)
        # Jobs retain a job_body wrapper even when they contain only trivia.
        assert not descendants(items[0], "text_body_line")
        assert not descendants(items[0], "property")
        assert not descendants(items[0], "flow")
        if ending:
            assert items[1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("head", ["context", "instruct", "user", "assistant", "tool"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_agic_explicit_bodies_preserve_literal_bytes_and_end_before_siblings(
    head, indent, newline
):
    content = (
        (
            f"{indent * 2}# Heading.\n"
            f"{indent * 2}run, until, and context are literal.\n"
            f"{indent * 3}- Résumé with a\ttab.\n"
            "\n"
            f"{indent * 2}## A literal subheading.\n"
        )
        .replace("\n", newline)
        .encode()
    )
    source = (
        f"agic work:\n{indent}{head}:\n".replace("\n", newline).encode()
        + content
        + f"{indent}user: Continue.\nflow next:\n{indent}pass".replace(
            "\n", newline
        ).encode()
    )
    root = parse(source.decode())
    assert valid(root)
    owner = descendants(root, "agic")[0]
    block = descendants(owner, "text_body")[0]
    assert block.text == content
    assert block.start_byte == source.index(content)
    assert block.end_byte == block.start_byte + len(content)
    assert tuple(block.start_point) == point(source, block.start_byte)
    assert tuple(block.end_point) == point(source, block.end_byte)
    for line in descendants(block, "text_body_line"):
        value = line.child_by_field_name("content")
        assert value.text == source[value.start_byte : value.end_byte]
        assert tuple(value.start_point) == point(source, value.start_byte)
        assert tuple(value.end_point) == point(source, value.end_byte)
    assert not descendants(block, "comment_line")
    assert not descendants(block, "doc_line")
    assert descendants(owner, "message")[-1].text.strip() == b"user: Continue."
    assert len(descendants(root, "flow")) == 1


@pytest.mark.parametrize("kind", ["flow", "agic"])
@pytest.mark.parametrize(
    "separator, paragraphs",
    [
        ("", 1),
        ("\n", 1),
        ("  \n", 1),
        ("\n\n", 2),
        ("  # Note.\n", 2),
        ("  ## Step.\n", 2),
        ("  ##! Parent.\n", 2),
    ],
)
def test_implicit_paragraph_boundaries_are_shared_without_absorbing_trivia(
    kind, separator, paragraphs
):
    root = parse(f"{kind} work:\n  Review the evidence.\n{separator}  Summarize it.\n")
    assert valid(root)
    node_type = "implicit_run_statement" if kind == "flow" else "unroled_message"
    prose = descendants(root, node_type)
    assert len(prose) == paragraphs
    assert [
        line.child_by_field_name("content").text.strip()
        for node in prose
        for line in descendants(node, "text_body_line")
    ] == [b"Review the evidence.", b"Summarize it."]
    assert not any(
        descendants(node, "comment_line")
        or descendants(node, "doc_line")
        or descendants(node, "parent_doc_line")
        for node in prose
    )


@pytest.mark.parametrize("kind", ["agic", "prompt", "task"])
@pytest.mark.parametrize("word", ["run", "until", "sort", "using", "repeat"])
def test_flow_keywords_do_not_leak_into_other_implicit_contexts(kind, word):
    text = f"{word}, literal prose in this context."
    root = parse(f"{kind} work:\n  {text}\n")
    assert valid(root)
    assert descendants(root, "text_body_line")[0].text.strip() == text.encode()
    assert not descendants(root, "implicit_run_statement")


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [False, True])
def test_structural_trivia_preserves_comment_kinds_and_source_ranges(
    newline, final_newline
):
    lines = [
        "flow work:",
        "  repeat 2 times:",
        "    run first",
        "# Résumé.",
        "",
        "  ## Details.",
        "        ##! Parent.",
        "    run last",
        "  run publish",
        "##! Final.",
    ]
    source = (newline.join(lines) + (newline if final_newline else "")).encode()
    root = parse(source.decode())
    assert valid(root)
    expected = []
    offset = 0
    kinds = {"#": "comment_line", "##": "doc_line", "##!": "parent_doc_line"}
    for line in source.splitlines(keepends=True):
        if b"#" in line:
            marker = line.lstrip().split(maxsplit=1)[0].decode()
            expected.append(
                (kinds[marker], offset + line.index(b"#"), offset + len(line))
            )
        offset += len(line)
    comments = sorted(
        [node for kind in kinds.values() for node in descendants(root, kind)],
        key=lambda node: node.start_byte,
    )
    assert [(n.type, n.start_byte, n.end_byte) for n in comments] == expected
    for node in comments:
        assert tuple(node.start_point) == point(source, node.start_byte)
        assert tuple(node.end_point) == point(source, node.end_byte)
    loop = descendants(root, "repeat_statement")[0]
    assert [n.text.strip() for n in descendants(loop, "run_statement")] == [
        b"run first",
        b"run last",
    ]
