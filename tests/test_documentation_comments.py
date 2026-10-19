"""Public comment fields, syntax errors, literal boundaries, and queries."""

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, point, valid


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("ending", [False, True])
@pytest.mark.parametrize(
    "line, kind, text",
    [
        ("#", "plain_comment", None),
        ("\t# Résumé.", "plain_comment", None),
        ("#!/usr/bin/env too", "shebang_comment", None),
        ("\ufeff#!/usr/bin/env too", "plain_comment", None),
        (" #! Later.", "plain_comment", None),
        ("##", "item_doc", None),
        ("\t## \t", "item_doc", None),
        ("  ## \tRésumé.  ", "item_doc", "Résumé.  "),
        ("#@", "program_doc", None),
        ("#@ \t", "program_doc", None),
        ("#@Résumé.", "program_doc", "Résumé."),
        ("##! Résumé.", "item_doc", "! Résumé."),
        ("\t##! Résumé.", "item_doc", "! Résumé."),
    ],
)
def test_comment_kinds_fields_and_physical_ranges(line, kind, text, newline, ending):
    source = (line + (newline if ending else "")).encode()
    root = parse(source.decode())
    assert valid(root)
    node = root.named_children[0]
    assert node.type == kind
    assert (node.start_byte, node.end_byte) == (source.index(b"#"), len(source))
    assert tuple(node.start_point) == point(source, node.start_byte)
    assert tuple(node.end_point) == point(source, node.end_byte)
    body = node.child_by_field_name("text")
    assert (body.text if body else None) == (text.encode() if text else None)
    if body:
        assert body.start_byte == source.index(text.encode())
        assert body.end_byte == len(line.encode())


@pytest.mark.parametrize("indent", ["", "  ", "\t"])
@pytest.mark.parametrize("suffix", ["", " ", " Text.", "@param _ Text.", " @param", "! Text."])
@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
def test_exclamation_after_item_doc_marker_remains_text(indent, suffix, ending):
    source = f"{indent}##!{suffix}{ending}".encode()
    root = parse(source.decode())
    assert valid(root), root
    comment, = root.named_children
    assert comment.type == "item_doc"
    assert (comment.start_byte, comment.end_byte) == (source.index(b"#"), len(source))
    text = comment.child_by_field_name("text")
    assert text.text == f"!{suffix}".encode()
    assert text.start_byte == source.index(b"!")
    assert not descendants(root, "program_doc")
    assert not descendants(root, "param_doc")


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [False, True])
def test_comment_prefix_edits_preserve_kind_text_and_following_declaration(newline, final_newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    cases = [
        ("## Note.", "item_doc", b"Note."),
        ("##! Note.", "item_doc", b"! Note."),
        ("#@ Note.", "program_doc", b"Note."),
        ("##! @param _ Text.", "item_doc", b"! @param _ Text."),
        ("## @param _ Input.", "param_doc", None),
        ("##!", "item_doc", b"!"),
        ("## Note.", "item_doc", b"Note."),
    ]
    for line, kind, text in cases:
        source = f"{line}\nflow work(_: Text):\n  pass"
        if final_newline:
            source += "\n"
        current = source.replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert valid(root), root
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node)
        comment = root.named_children[0]
        assert comment.type == kind
        body = comment.child_by_field_name("text")
        assert (body.text if body else None) == text
        assert root.named_children[1].child_by_field_name("name").text == b"work"
        previous = current


@pytest.mark.parametrize(
    "prefix", ["\n", "# Before.\n", "## Before.\n", "flow work:\n  pass\n"]
)
def test_shebang_is_recognized_only_at_byte_zero(prefix):
    root = parse(prefix + "#!/usr/bin/env too\n")
    assert valid(root)
    assert not descendants(root, "shebang_comment")
    assert descendants(root, "plain_comment")[-1].text == b"#!/usr/bin/env too\n"


@pytest.mark.parametrize("marker", ["#", "#!", "##", "#@", "##!", "## @param"])
def test_inline_markers_remain_plain_comments(marker):
    source = f"struct Item: {marker} Annotation.\n  value: Text {marker} Field.\n"
    root = parse(source)
    assert valid(root)
    comments = descendants(root, "plain_comment")
    assert [node.text for node in comments] == [
        f"{marker} Annotation.".encode(),
        f"{marker} Field.".encode(),
    ]


@pytest.mark.parametrize("space", [" ", "\t", " \t"])
@pytest.mark.parametrize("name", ["_", "topic", "some_name", "x1", "trailing_",
                                  "sort", "until", "default", "none"])
@pytest.mark.parametrize("newline", ["\n", "\r\n", ""])
def test_parameter_fields_use_signature_names_and_preserve_description(
    space, name, newline
):
    description = 'Résumé # $ @ "quotes" @param literal.  '
    line = f"  ##{space}@param{space}{name}{space}{description}"
    source = (line + newline).encode()
    root = parse(source.decode())
    assert valid(root)
    node = root.named_children[0]
    assert node.type == "param_doc"
    assert node.start_byte == 2 and node.end_byte == len(source)
    assert tuple(node.start_point) == point(source, node.start_byte)
    assert tuple(node.end_point) == point(source, node.end_byte)
    assert node.child_by_field_name("text") is None
    assert node.child_by_field_name("parameter") is None
    marker = node.children[0]
    assert marker.type == "@param"
    assert marker.start_byte == source.index(b"@param")
    assert marker.end_byte == marker.start_byte + len(b"@param")
    param = node.child_by_field_name("param")
    assert param.type == "param_name" and param.text == name.encode()
    assert param.child_count == 0
    body = node.child_by_field_name("description")
    assert body.type == "comment_text" and body.text == description.encode()
    assert param.end_byte + len(space) == body.start_byte


@pytest.mark.parametrize(
    "text",
    [
        "@parameter _ Text.",
        "@parametric",
        "@param: text",
        "@return Text.",
        "Use @param here.",
    ],
)
def test_only_the_leading_exact_param_tag_is_reserved(text):
    root = parse(f"## {text}\n")
    assert valid(root)
    assert root.named_children[0].child_by_field_name("text").text == text.encode()
    assert not descendants(root, "param_doc")


@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
def test_program_docs_do_not_interpret_parameter_tags(ending):
    root = parse(f"#@ @param _ Just text.{ending}")
    assert valid(root)
    assert (
        root.named_children[0].child_by_field_name("text").text
        == b"@param _ Just text."
    )
    assert not descendants(root, "param_doc")


@pytest.mark.parametrize(
    "comment",
    [
        "## @param",
        "## @param ",
        "## @param _",
        "## @param _ \t",
        "## @param 1bad Text.",
        "## @param _bad Text.",
        "## @param x? Text.",
        "## @param x: Text",
        "## @param x=hello Text.",
        "## @param x-y Text.",
    ],
)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_malformed_tags_stay_on_their_line_and_preserve_the_next_declaration(
    comment, newline
):
    source = (comment + "\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error
    flows = descendants(root, "flow")
    assert len(flows) == 1, root
    assert flows[0].child_by_field_name("name").text == b"next"
    assert not flows[0].has_error
    assert parse(comment).has_error


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("name", ["", " work"])
def test_binding_and_duplicate_names_are_left_to_consumers(kind, name):
    root = parse(
        "## @param unknown Valid syntax, unknown binding.\n"
        "## @param _ Input.\n## @param _ Duplicate binding.\n"
        f"{kind}{name}(_: Text, style?: Text):\n  pass\n"
    )
    assert valid(root)
    assert len(descendants(root, "param_doc")) == 3


@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("marker", ["#", "#!", "##", "## @param", "#@", "##!"])
def test_explicit_text_preserves_markers_at_first_line_and_deeper(indent, marker):
    root = parse(
        f"agic work:\n{indent}user:\n{indent * 2}{marker}\n"
        f"{indent * 3}{marker} Résumé.\nflow next:\n{indent}pass\n"
    )
    assert valid(root)
    block = descendants(root, "content")[0]
    assert len(descendants(block, "text_line")) == 2
    assert not any(
        descendants(block, kind)
        for kind in (
            "plain_comment",
            "shebang_comment",
            "item_doc",
            "param_doc",
            "program_doc",
        )
    )
    assert len(descendants(root, "flow")) == 1


@pytest.mark.parametrize("indent", [" ", "\t", "  \t"])
def test_indented_program_marker_is_invalid_but_item_docs_remain_valid(indent):
    assert parse(f"{indent}#@ Program.\nflow next:\n  pass\n").has_error
    root = parse(f"{indent}##! Important.\nflow next:\n  pass\n")
    assert valid(root)
    comment, = descendants(root, "item_doc")
    assert comment.child_by_field_name("text").text == b"! Important."
    assert not descendants(root, "program_doc")


def test_packaged_queries_capture_docs_without_adding_symbols_or_injections():
    language = Language(tree_sitter_toolang.language())
    root = parse(
        "#!/usr/bin/env too\n# Plain.\n#@ Program.\n## Item.\n## @param _ Input.\n"
    )
    queries = [
        Query(language, getattr(tree_sitter_toolang, name))
        for name in (
            "HIGHLIGHTS_QUERY",
            "INJECTIONS_QUERY",
            "INDENTS_QUERY",
            "OUTLINE_QUERY",
            "TAGS_QUERY",
        )
    ]
    captures = QueryCursor(queries[0]).captures(root)
    assert {node.type for node in captures["comment"]} == {
        "plain_comment",
        "shebang_comment",
    }
    assert {node.type for node in captures["comment.documentation"]} == {
        "item_doc",
        "param_doc",
        "program_doc",
    }
    documentation = [node for node in root.named_children
                     if node.type in {"program_doc", "item_doc", "param_doc"}]
    assert {(node.start_byte, node.end_byte) for node in captures["comment.documentation"]} == {
        (node.start_byte, node.end_byte) for node in documentation
    }
    assert [node.text for node in captures["keyword"]] == [b"@param"]
    assert [node.text for node in captures["variable.parameter"]] == [b"_"]
    for query in [queries[1], queries[3], queries[4]]:
        assert not QueryCursor(query).captures(root)


def test_new_program_docs_cannot_interrupt_a_continuing_body():
    assert parse("flow work:\n  run first\n#@ Program.\n  run next\n").has_error
    assert valid(parse("flow work:\n  pass\n#@ Program.\nflow next:\n  pass\n"))


@pytest.mark.parametrize(
    "comment", ["## Item.", "## @param _ Input.", "#@ Program.", "##! Legacy."]
)
@pytest.mark.parametrize("kind", ["flow", "agic", "struct"])
def test_documentation_does_not_fill_required_bodies(kind, comment):
    name = "Work" if kind == "struct" else "work"
    assert not valid(parse(f"{kind} {name}:\n{comment}\n"))


@pytest.mark.parametrize(
    "comment", ["## @param", "## @param _", "## @param x? Invalid."]
)
def test_malformed_nested_docs_preserve_following_statement_and_top_level_item(comment):
    root = parse(
        f"flow work:\n  run first\n  {comment}\n  run last\nflow next:\n  pass\n"
    )
    assert root.has_error
    assert [
        node.child_by_field_name("target").text.strip()
        for node in descendants(root, "run_statement")
    ] == [b"first", b"last"]
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("ending", [False, True])
def test_documentation_nodes_are_peers_with_direct_fields(newline, ending):
    source = newline.join([
        "#@ Program.", "## Item.", "## @param _ Input.",
        "flow work(_: Text):", "  run first", "  ## Nested item.",
        "  ## @param sort Nested parameter.", "  run last",
    ]) + (newline if ending else "")
    root = parse(source)
    assert valid(root), root
    assert [node.type for node in root.named_children] == [
        "program_doc", "item_doc", "param_doc", "flow",
    ]
    body = root.named_children[-1].child_by_field_name("body")
    assert [node.type for node in body.named_children] == [
        "run_statement", "item_doc", "param_doc", "run_statement",
    ]
    for owner in [root, body]:
        doc, = [node for node in owner.named_children if node.type == "param_doc"]
        assert [node.type for node in doc.named_children] == ["param_name", "comment_text"]
        assert doc.named_children[0] == doc.child_by_field_name("param")
        assert doc.named_children[1] == doc.child_by_field_name("description")
        assert doc.text.startswith(b"## @param") and doc.text.endswith(newline.encode())
