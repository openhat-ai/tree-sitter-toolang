"""Hidden productions preserve lexical contexts behind one public text leaf."""

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, native_errors, parse, valid


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_text_leaves_preserve_each_lexical_context_and_highlight(newline):
    source = ("#@ Program # details.\n## Item # details.\n"
              "## @param topic Input # details.\nwith skill ./review# Structural.\n"
              "prompt review:\n  answer = yes # Structural.\n  Body # literal.\n"
              "flow work(topic: Text):\n  let note = \"a#b\"\n  run worker # Structural.\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    contexts = [
        ("program_doc", "text", b"Program # details.", "comment.documentation"),
        ("item_doc", "text", b"Item # details.", "comment.documentation"),
        ("param_doc", "description", b"Input # details.", "comment.documentation"),
        ("with", "reference", b"./review", "constant"),
        ("property", "value", b" yes ", "string"),
    ]
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    for owner_kind, field, expected, capture in contexts:
        owner, = descendants(root, owner_kind)
        text = owner.child_by_field_name(field)
        assert text.type == "text" and text.child_count == 0
        assert text.text == expected
        assert any(node.start_byte <= text.start_byte and node.end_byte >= text.end_byte
                   for node in captures[capture])
        if capture != "string":
            assert not any(node.start_byte == text.start_byte and node.end_byte == text.end_byte
                           for node in captures.get("string", []))
    assert all(node.child_count == 0 and b"\n" not in node.text and b"\r" not in node.text
               for node in descendants(root, "text"))
    assert [node.text for node in descendants(root, "plain_comment")] == [
        b"# Structural.", b"# Structural.", b"# Structural.",
    ]


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("prefix", ["\n", "\n\n", " \t\n\n"])
@pytest.mark.parametrize("text", ["Merge.", "# Heading", "## @param _ Literal."])
def test_reducer_content_owns_leading_blank_lines(newline, indent, prefix, text):
    source = (f"flow work:\n{indent}reduce:\n{prefix}{indent*2}{text}\n"
              f"{indent*2}initial: Seed.\n{indent}run next\n"
              "## Following.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    reduce, = descendants(root, "reduce_stmt")
    reducer = reduce.child_by_field_name("target")
    content = reducer.child_by_field_name("content")
    assert content.text == (prefix + indent*2 + text + "\n").replace("\n", newline).encode()
    assert all(node.parent == content for node in descendants(content, "blank_line"))
    assert not descendants(reducer, "plain_comment")
    assert reduce.child_by_field_name("initial").text == b" Seed."
    assert root.named_children[-2].type == "item_doc"
    assert root.named_children[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("kind", ["flow", "agic"])
@pytest.mark.parametrize("head", ["recall", "recall =", "recall = auto", "recall += near"])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n", "  run worker\n"])
def test_incomplete_recall_uses_directive_roles_in_the_prefix_and_errors_after_it(kind, head, prefix):
    prefix = prefix.replace("run worker", "user: Ready.") if kind == "agic" else prefix
    following = "run next" if kind == "flow" else "user: Next."
    root = parse(f"{kind} work:\n{prefix}  {head}\n  {following}\nflow next:\n  pass\n")
    assert not valid(root), root
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    if "run worker" in prefix or "user:" in prefix:
        assert root.has_error
        start = root.text.index(head.encode())
        assert any(error.start_byte <= start and error.end_byte >= start + len("recall")
                   for error in native_errors(root))
        assert any(error.start_byte <= start and error.end_byte >= start + len("recall")
                   for error in captures["error"])
    else:
        key, = [node for node in descendants(root, "directive_key") if node.text == b"recall"]
        assert key in captures["property"]
    assert not descendants(root, "recall_keyword")
    assert root.named_children[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("following", ["", "    initial: Seed.\n", "  # Outside.\n"])
@pytest.mark.parametrize("prefix", ["", "\n", " \t\n\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_blank_lines_cannot_satisfy_required_reducer_content(following, prefix, newline):
    source = ("flow work:\n  reduce:\n" + prefix + following +
              "  run next\n## Following.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    missing, = descendants(root, "invalid_missing_content")
    assert missing.start_byte == missing.end_byte
    reducer, = descendants(root, "inline_agic")
    expected = prefix if following.startswith("    initial:") else ""
    assert reducer.child_by_field_name("content").text == expected.replace("\n", newline).encode()
    assert root.named_children[-2].type == "item_doc"
    assert root.named_children[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("key", ["models", "tools", "skills", "services", "psyches", "prompts"])
def test_query_values_keep_their_semantic_leaf(key):
    root = parse(f"flow work:\n  {key} += provider/*[price < 3] # Structural.\n  run next\n")
    assert valid(root), root
    directive, = descendants(root, "directive")
    value = directive.child_by_field_name("value")
    assert value.type == "query_value" and value.child_count == 0
    assert value.text == b"provider/*[price < 3] "
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    assert value in captures["constant"]
    assert value not in captures.get("string", [])


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_text_and_directive_boundary_edits_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for value in [b"Merge.", b"# Heading", b"initial: Seed.", b"", b"Merge.\n    initial: Seed."]:
        for prefix in [b"", b"\n", b" \t\n\n"]:
            current = (b"flow work:\n  reduce:\n" + prefix + b"    " + value +
                       b"\n  run next\n## Following.\nflow next:\n  pass\n").replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
            previous = current
    for head in [b"recall", b"recall =", b"recall = near", b"recall += near", b"let recall = Literal # text."]:
        current = (b"flow work:\n  " + head + b"\n  run next\nflow next:\n  pass\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current
