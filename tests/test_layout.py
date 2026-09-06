import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang


def parse(source):
    return (
        Parser(Language(tree_sitter_toolang.language()))
        .parse(source.encode())
        .root_node
    )


def descendants(node, kind):
    return [child for child in walk(node) if child.type == kind]


def walk(node):
    yield node
    for child in node.named_children:
        yield from walk(child)


def valid(root):
    return not root.has_error and not any(
        node.type.startswith("invalid_") for node in walk(root)
    )


def test_repeat_does_not_capture_outer_statement():
    root = parse("flow work:\n  repeat 2 times:\n    run improve\n  run publish\n")
    assert valid(root)
    loop = descendants(root, "repeat_statement")[0]
    assert [node.text.strip() for node in descendants(loop, "run_statement")] == [
        b"run improve"
    ]


def test_nested_text_does_not_capture_siblings():
    root = parse(
        "flow work:\n  repeat 2 times:\n    run:\n      Improve the evidence.\n"
        "    run review\n    until: Ready.\n  run publish\n"
    )
    assert valid(root)
    loop = descendants(root, "repeat_statement")[0]
    assert len(descendants(loop, "run_statement")) == 2
    assert loop.child_by_field_name("until") is not None
    assert (
        descendants(loop, "text_body_line")[0].text == b"      Improve the evidence.\n"
    )


@pytest.mark.parametrize(
    "trivia", ["", "\n", "    # No work yet.\n", "    ## Stage.\n"]
)
def test_empty_repeat_cannot_borrow_outer_statement(trivia):
    assert not valid(parse(f"flow work:\n  repeat 2 times:\n{trivia}  run publish\n"))


def test_outer_until_belongs_to_its_indentation():
    root = parse(
        "flow work:\n  repeat:\n    repeat 2 times:\n      run improve\n"
        "    until: Ready.\n  run publish\n"
    )
    assert valid(root)
    outer, inner = descendants(root, "repeat_statement")
    assert outer.child_by_field_name("until") is not None
    assert inner.child_by_field_name("until") is None


@pytest.mark.parametrize(
    "source",
    [
        "  flow work:\n    run improve\n",
        "flow work:\nrun improve\n",
        "flow work:\n  run improve\n   run publish\n",
        "flow work:\n  repeat 2 times:\n    run improve\n   run publish\n",
        "flow work:\n  repeat 2 times:\n    run improve\n      until: Ready.\n",
        "flow work:\n  repeat 2 times:\n    run improve\n  until: Ready.\n",
        "flow work:\n  repeat 2 times:\n    until: Ready.\n    run improve\n",
        "flow work:\n  repeat 2 times:\n    run improve\n    until: Ready.\n    run publish\n",
        "flow work:\n  repeat 2 times:\n    run improve\n    until: Ready.\n    until: Done.\n",
        "flow work:\n  repeat:\n    run improve\n",
        "flow work:\n  repeat:\n    until: Ready.\n",
        "flow work:\n \trun improve\n",
        "flow work:\n\trun improve\n        run publish\n",
        "flow work:\n        run improve\n\trun publish\n",
        "flow work:\n\frun improve\n",
    ],
)
def test_invalid_structure_never_becomes_a_valid_program(source):
    assert not valid(parse(source))


@pytest.mark.parametrize("indent", [" ", "  ", "    ", "\t"])
@pytest.mark.parametrize(
    "header",
    [
        "run:",
        "seek reviewer:",
        "ask:",
        "scatter 2 using:",
        "storm 2 in 2 lanes using:",
        "gather using:",
        "settle using:",
        "map using:",
        "keep if:",
        "drop if:",
        "sort descending by:",
        "let note =",
        "let result = run:",
    ],
)
def test_all_inline_bodies_share_relative_layout(indent, header):
    body = (
        f"{indent * 3}run is literal content.\n"
        f"{indent * 4}- Nested Markdown.\n"
        f"{indent * 3}## A literal heading.\n"
    )
    source = (
        f"flow work:\n{indent}repeat 2 times:\n{indent * 2}{header}\n"
        f"{body}{indent * 2}run review\n{indent * 2}until: Ready.\n"
        f"{indent}run publish\n"
    )
    root = parse(source)
    assert valid(root)
    outer = descendants(root, "repeat_statement")[0]
    text = descendants(outer, "text_body")[0]
    assert text.text.decode() == body
    assert outer.child_by_field_name("until") is not None
    assert descendants(root, "run_statement")[-1].text.strip() == b"run publish"


@pytest.mark.parametrize("header", ["context notes:", "instruct rules:"])
def test_top_level_explicit_text_keeps_keywords_and_markdown(header):
    root = parse(
        f"{header}\n  # Heading.\n  flow is literal text.\nflow work:\n  pass\n"
    )
    assert valid(root)
    assert (
        descendants(root, "text_body")[0].text
        == b"  # Heading.\n  flow is literal text.\n"
    )
    assert len(descendants(root, "flow")) == 1


@pytest.mark.parametrize(
    "header, body",
    [
        ("struct Item:", "value: Text"),
        ("agic work:", "tools = search\n  context none\n  user: Review."),
        ("flow work:", "run improve"),
        (
            "service search:",
            "transport = stdio\n  Search the web.\n  command = literal text",
        ),
        ("psyche reviewer:", "Review the evidence."),
        ("skill review:", "Review the evidence."),
        ("prompt review:", "Review the evidence."),
        ("task review:", "Review the evidence."),
        ("chore review:", "Review the evidence."),
    ],
)
def test_declaration_bodies_end_before_following_declaration(header, body):
    root = parse(f"{header}\n  {body}\nflow publish:\n  pass\n")
    assert valid(root)
    items = [child for child in root.named_children if child.type == "item"]
    assert len(items) == 2
    assert items[-1].named_children[0].child_by_field_name("name").text == b"publish"


@pytest.mark.parametrize("header", ["flow work:", "agic work:", "struct Item:"])
@pytest.mark.parametrize("trivia", ["\n", "  ## No body.\n", "  # No body.\n\n"])
def test_required_declaration_body_cannot_borrow_next_declaration(header, trivia):
    assert not valid(parse(f"{header}\n{trivia}flow publish:\n  pass\n"))


def reserved_words():
    rules = json.loads((Path(__file__).parents[1] / "src/grammar.json").read_text())[
        "rules"
    ]

    def words(rule):
        if rule["type"] == "STRING":
            return [rule["value"]]
        if rule["type"] == "SYMBOL":
            return words(rules[rule["name"]])
        if "content" in rule:
            return words(rule["content"])
        return [word for member in rule.get("members", []) for word in words(member)]

    return sorted(set(words(rules["_flow_reserved_word"])))


@pytest.mark.parametrize("word", reserved_words())
@pytest.mark.parametrize(
    "prefix",
    ["", "  Review the evidence.\n", "  Review the evidence.\n\n", "  # Stage.\n"],
)
def test_every_keyword_is_structural_on_every_implicit_line(word, prefix):
    root = parse(f"flow work:\n{prefix}  {word}, invalid syntax.\n")
    assert not valid(root)
    assert not any(
        f"{word},".encode() in node.text
        for node in descendants(root, "implicit_run_statement")
    )


@pytest.mark.parametrize("word", reserved_words())
def test_keywords_have_case_sensitive_complete_token_boundaries(word):
    for prose in (
        f"{word.capitalize()} is prose.",
        f"{word}_suffix is prose.",
        f"{word}x is prose.",
    ):
        root = parse(f"flow work:\n  {prose}\n")
        assert valid(root)
        assert len(descendants(root, "implicit_run_statement")) == 1
    root = parse(f"flow work:\n  run:\n    {word}, literal text.\n")
    assert valid(root)
    assert (
        descendants(root, "text_body_line")[0]
        .child_by_field_name("content")
        .text.strip()
        == f"{word}, literal text.".encode()
    )


def test_markdown_indentation_continues_only_non_keyword_prose():
    root = parse(
        "flow work:\n  Review the evidence.\n    - First point.\n  Draw a conclusion.\n"
    )
    assert valid(root)
    assert len(descendants(root, "implicit_run_statement")) == 1
    assert not valid(parse("flow work:\n  Review the evidence.\n    run improve\n"))


def test_comments_do_not_change_layout_and_outer_docs_keep_their_owner():
    root = parse(
        "flow work:\n  repeat 2 times:\n    run improve\n"
        "# This comment does not end the loop.\n    run review\n"
        "  ## Publish the result.\n  run publish\n"
    )
    assert valid(root)
    loop = descendants(root, "repeat_statement")[0]
    assert len(descendants(loop, "run_statement")) == 2
    assert not descendants(loop, "doc_line")
    assert descendants(root, "doc_line")[0].parent.type == "statements"


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [True, False])
def test_line_endings_and_eof_preserve_completed_blocks(newline, final_newline):
    source = (
        "flow work:\n  repeat:\n    repeat 2 times:\n      run:\n"
        "        Improve the evidence.\n    until:\n      Ready.\n  run publish\n"
    ).replace("\n", newline)
    if not final_newline:
        source = source.rstrip("\r\n")
    root = parse(source)
    assert valid(root)
    assert len(descendants(root, "repeat_statement")) == 2
    assert len(descendants(root, "run_statement")) == 2


def fingerprint(node):
    return (
        node.type,
        node.is_named,
        node.is_missing,
        node.has_error,
        node.start_byte,
        node.end_byte,
        node.start_point,
        node.end_point,
        tuple(
            (node.field_name_for_child(i), fingerprint(child))
            for i, child in enumerate(node.children)
        ),
    )


def point(source, offset):
    prefix = source[:offset]
    return (prefix.count(b"\n"), len(prefix.rsplit(b"\n", 1)[-1]))


def edit_tree(tree, previous, current):
    start = 0
    while (
        start < min(len(previous), len(current)) and previous[start] == current[start]
    ):
        start += 1
    old_end, new_end = len(previous), len(current)
    while (
        old_end > start
        and new_end > start
        and previous[old_end - 1] == current[new_end - 1]
    ):
        old_end -= 1
        new_end -= 1
    tree.edit(
        start_byte=start,
        old_end_byte=old_end,
        new_end_byte=new_end,
        start_point=point(previous, start),
        old_end_point=point(previous, old_end),
        new_end_point=point(current, new_end),
    )


def test_incremental_edits_match_fresh_trees_through_invalid_states():
    parser = Parser(Language(tree_sitter_toolang.language()))
    original = (
        "flow work:\n  repeat:\n    repeat 2 times:\n      run:\n"
        "        Review the evidence.\n    until: Ready.\n  run publish\n"
    )
    variants = [
        original,
        original.replace("      run:", "      ## Compare the evidence.\n      run:"),
        original.replace("    until", "      until"),
        original.replace("    until: Ready.\n", ""),
        original.replace("      run:", "      Run:"),
        original.replace("        Review", "        # Review"),
        original.replace("        Review", "        sort"),
        original.replace("      run:", "      run"),
        original.rstrip(),
        original.replace("Review", "Résumé"),
        original.replace("  run publish", "    run publish"),
        original,
        "",
        "flow work:\n  pass",
        original,
    ]
    previous = b""
    tree = parser.parse(previous)
    for source in variants:
        current = source.encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        fresh = parser.parse(current)
        assert fingerprint(tree.root_node) == fingerprint(fresh.root_node), source
        previous = current


@pytest.mark.parametrize(
    "source",
    [
        b"flow work:\n  repeat:\n    repeat 2 times:\n      run:\n        Evidence.\n    until: Ready.\n  run publish\n",
        b"agic work:\n\ttools = search\n\tcontext:\n\t\t# Heading.\n\tuser: Review.\n",
        b"service search:\r\n  transport = stdio\r\n  Search.\r\nflow work:\r\n  pass\r\n",
    ],
)
def test_incremental_insertions_and_deletions_at_every_byte(source):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = source
    tree = parser.parse(previous)
    for offset in range(len(source) + 1):
        for insertion in (b" ", b"\n", b"#", b""):
            current = source[:offset] + insertion + source[offset + (not insertion) :]
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(
                parser.parse(current).root_node
            ), (offset, insertion, current)
            previous = current


def test_layout_stack_overflow_is_rejected_without_truncating_state():
    source = "flow work:\n" + "".join(
        " " * i + "repeat 1 time:\n" for i in range(1, 180)
    )
    source += " " * 180 + "run improve\n"
    assert not valid(parse(source))


@pytest.mark.parametrize(
    "line", ["Title = literal prose", "itemName = literal prose", "123 = literal prose"]
)
def test_cap_text_only_recognizes_valid_property_keys(line):
    root = parse(f"prompt example:\n  {line}\n")
    assert valid(root)
    assert not descendants(root, "property")
    assert descendants(root, "text_body_line")[0].text.strip() == line.encode()


def test_dedented_comment_ends_explicit_text_before_later_deeper_prose():
    root = parse(
        "flow work:\n  run:\n    Review the evidence.\n  # End the prompt.\n    More prose.\n"
    )
    assert not valid(root)


@pytest.mark.parametrize("suffix", ["", "\n", "\n\n"])
def test_blank_only_explicit_text_is_invalid(suffix):
    assert not valid(parse(f"context notes:\n{suffix}flow work:\n  pass\n"))


@pytest.mark.parametrize(
    "header",
    [
        "psyche review:",
        "skill review:",
        "service search:",
        "prompt review:",
        "task review:",
        "chore review:",
    ],
)
@pytest.mark.parametrize(
    "prefix, replacement", [("        ", "\t"), ("\t", "        ")]
)
def test_metadata_to_text_preserves_the_structural_indent_prefix(
    header, prefix, replacement
):
    source = (
        f"{header}\n{prefix}description = Review.\n"
        f"{replacement}Review the evidence.\n"
    )
    assert not valid(parse(source))
    assert valid(parse(source.replace(replacement + "Review", prefix + "Review")))


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_blank_lines_after_layout_errors_keep_the_same_owner(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    variants = [
        b"flow:\n pass\n\t. \n",
        b"flow:\n pass\n\t.\n \n",
        b"flow:\n pass\n\t. \n",
        b"flow:\n pass\n\n",
    ]
    previous = b""
    tree = parser.parse(previous)
    for source in variants:
        current = source.replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), current
        previous = current
    assert valid(tree.root_node)


@pytest.mark.parametrize(
    "kind", ["psyche", "skill", "service", "prompt", "task", "chore"]
)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_empty_metadata_errors_remain_inside_their_declaration(kind, newline):
    source = f"{kind} review:\n  description =\n\n  Review.\n"
    root = parse(source.replace("\n", newline))
    assert not valid(root)
    owner = descendants(root, kind)[0]
    # Both ERROR nodes and missing required tokens must stay under the owner.
    assert owner.has_error
    assert descendants(owner, "text_body_line")[0].text.strip() == b"Review."


@pytest.mark.parametrize("comment", ["# Note.", "## Note.", "##! Note."])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incremental_malformed_headers_preserve_comment_line_boundaries(
    comment, newline
):
    before = f"flow work {comment}\nflow other:\n  pass\n  bad:\n"
    after = before.replace("flow other:", "until other:")
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for source in [before, after, before, "flow work:\n  run finish\n"]:
        current = source.replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), current
        previous = current
    assert valid(tree.root_node)


def test_consecutive_comments_require_linear_scanning_work():
    def scan_work(count):
        work = 0

        def log(kind, message):
            nonlocal work
            if message.startswith(("consume character:", "skip character:")):
                work += 1

        parser = Parser(Language(tree_sitter_toolang.language()))
        parser.logger = log
        source = (
            b"flow work:\n  run first\n"
            + b"  ## Documentation.\n" * count
            + b"  run last\n"
        )
        assert valid(parser.parse(source).root_node)
        assert work > len(source)
        return work

    # Count lexer operations instead of timing machines or CI runners.
    assert scan_work(128) < 3 * scan_work(64)


@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incremental_trivia_lookahead_tracks_content_and_dedent_edits(
    indent, newline
):
    comments = [
        indent * (i % 4) + ["# Note.", "## Step.", "##! Parent."][i % 3] + "\n"
        for i in range(40)
    ]
    prefix = f"flow work:\n{indent}repeat 2 times:\n{indent * 2}run first\n"
    tail = f"{indent * 2}run last\n{indent}run publish\n"
    trivia = "".join(comments)
    variants = [
        prefix + trivia + tail,
        prefix + trivia + tail.replace(indent * 2 + "run last", indent + "run last"),
        prefix + "".join(comments[::2]) + tail,
        prefix + trivia.replace(comments[2], indent * 2 + "Review.\n", 1) + tail,
        prefix + "\n" + trivia + tail,
        prefix + trivia.replace("# Note.", "## Changed.") + tail,
        prefix + trivia + tail + "## Final documentation.",
        prefix + trivia + tail,
    ]
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for source in variants:
        current = source.replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert valid(tree.root_node)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), current
        previous = current


@pytest.mark.parametrize(
    "before, after",
    [
        (b"flow k:\n pass\n n#\n:\n", b"flow y.k:\n pass\n n#\n:\n"),
        (b"flow :\n pass\n r:\n", b"flow \x87:\n pass\n r:\n"),
    ],
)
def test_incremental_header_errors_do_not_borrow_tokens_from_later_lines(
    before, after
):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for current in [before, after, before]:
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert not valid(tree.root_node)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), current
        previous = current
