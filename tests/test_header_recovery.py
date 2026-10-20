"""Incomplete structural heads cannot borrow a following declaration's colon."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, native_errors, parse, valid
from test_recovery_boundaries import ITEMS, assert_next_items


REPEAT_HEADS = ["repeat", "repeat 2 times", "repeat windowing 1", "repeat 2 times windowing 1"]
BROKEN_ENDINGS = ["", "\n", ",", "(", ")", "[", "]", "=", "->", "# Header."]
SUFFIX = "## Next résumé.\nflow next:\n  run next_worker\nagic last:\n  user: Last.\n"


def assert_peer_boundaries(root, source, suffix):
    assert root.has_error and not valid(root), root
    boundary = len(source) - len(suffix)
    errors = native_errors(root)
    assert errors, root
    assert all(error.end_byte <= boundary for error in errors), root
    doc, = [node for node in descendants(root, "item_doc") if node.start_byte == boundary]
    assert doc.parent == root, root
    assert_next_items(root, source, suffix)


@pytest.mark.parametrize("head", REPEAT_HEADS)
@pytest.mark.parametrize("ending", BROKEN_ENDINGS)
@pytest.mark.parametrize("binding", ["", "let ", "let result = "])
@pytest.mark.parametrize("nested", [False, True])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_repeat_head_boundaries_keep_following_program_items(head, ending, binding, nested, indent, newline):
    depth = 2 if nested else 1
    prefix = "flow first:\n" + (indent + "repeat:\n" if nested else "")
    prefix += indent * depth + binding + head + ending + "\n"
    prefix += indent * (depth + 1) + "run worker\n" + indent * (depth + 1) + "until ready\n"
    source = (prefix + SUFFIX).replace("\n", newline).encode()
    suffix = SUFFIX.replace("\n", newline).encode()
    root = parse(source.decode())
    if binding == "let " and head == "repeat" and ending == "=":
        # This complete assignment names the destination "repeat". Its body is
        # literal text; contextual names must not be restricted by recovery.
        assert valid(root), root
        binding, = descendants(root, "let_stmt")
        assert binding.child_by_field_name("local").text == b"repeat"
        assert b"until ready" in binding.child_by_field_name("value").text
        assert_next_items(root, source, suffix)
    else:
        assert_peer_boundaries(root, source, suffix)


@pytest.mark.parametrize("kind,body", [
    ("flow", "  run worker\n"),
    ("agic", "  models = provider/*\n  recall = near, far\n  tool: Body.\n"),
])
@pytest.mark.parametrize("signature", [" first(_: Text)", "(_: Text)", " first", ""])
@pytest.mark.parametrize("annotation,ending", [
    *[("Json", ending) for ending in BROKEN_ENDINGS],
    ("J[on", ":"), ("J]on", ":"), ("J#on", ":"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incomplete_runnable_heads_keep_following_program_items(kind, body, signature, annotation, ending, newline):
    source = (f"{kind}{signature} -> {annotation}{ending}\n" + body + SUFFIX).replace("\n", newline).encode()
    suffix = SUFFIX.replace("\n", newline).encode()
    assert_peer_boundaries(parse(source.decode()), source, suffix)


@pytest.mark.parametrize("item", ITEMS)
@pytest.mark.parametrize("prefix", [
    "flow first:\n  repeat 2 times windowing 1,\n    run worker\n    until ready\n",
    "agic first(_: Text) -> Json\n  models = provider/*\n  recall = near, far\n  tool: Body.\n",
])
def test_unfinished_heads_resynchronize_at_each_declaration_kind(item, prefix):
    suffix = ("## Next résumé.\n" + item).encode()
    source = prefix.encode() + suffix
    assert_peer_boundaries(parse(source.decode()), source, suffix)


@pytest.mark.parametrize("template", [
    "flow first:\n  repeat 2 times windowing 1{ending}\n    run worker\n    until ready\n",
    "flow first:\n  repeat:\n    let result = repeat 2 times windowing 1{ending}\n      run worker\n      until ready\n",
    "flow first(_: Text) -> Json{ending}\n  run worker\n",
    "agic first(_: Text) -> Json{ending}\n  models = provider/*\n  recall = near, far\n  tool: Body.\n",
])
@pytest.mark.parametrize("ending", BROKEN_ENDINGS)
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_header_terminator_edits_keep_peer_ranges_and_match_fresh_parses(template, ending, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    suffix = SUFFIX.encode().replace(b"\n", newline)
    for terminator in [":", ending, ":", ending, ":"]:
        source = template.format(ending=terminator).encode().replace(b"\n", newline) + suffix
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
        assert valid(root) == (terminator == ":"), root
        if terminator != ":":
            assert_peer_boundaries(root, source, suffix)
        else:
            assert_next_items(root, source, suffix)
        previous = source
