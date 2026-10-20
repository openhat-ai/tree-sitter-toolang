"""Native errors synchronize at layout and declaration boundaries."""

from random import Random

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, point, valid


BAD_STATEMENTS = [
    "map in 2 lanes in 3 lanes using worker",
    "generate 2 in 2 lanes in 3 lanes using worker",
    "keep in 2 lanes in 3 lanes if worker",
    "drop in 2 lanes in 3 lanes if worker",
    "sort ascending in 2 lanes in 3 lanes by worker",
    "map in 2lanes using worker",
    "repeat 2times:",
    "async run worker extra",
]
BAD_DIRECTIVES = [
    "hands += worker", "handoffs -= worker", "recall += far",
    "context += named", "instruct -= named", "lanes += 2",
    "recall = wrong", "lanes = wrong", "modles = fast",
]
ITEMS = [
    "with skill shared\n",
    "struct Next:\n  value: Text\n",
    *[f"{kind} next:\n  Body.\n" for kind in ["psyche", "skill", "service", "prompt", "chore"]],
    "context next: Body.\n", "instruct next: Body.\n",
    "agic next:\n  user: Body.\n", "flow next:\n  pass\n",
]


def assert_next_items(root, source, suffix):
    boundary = source.index(suffix)
    items = [n for n in declarations(root) if n.start_byte >= boundary]
    expected = declarations(parse(suffix.decode()))
    assert [n.type for n in items] == [n.type for n in expected], root
    assert all(valid(n) for n in items), root
    for node, original in zip(items, expected):
        assert node.text == original.text
        assert node.start_byte == boundary + original.start_byte
        assert node.end_byte == boundary + original.end_byte
        assert tuple(node.start_point) == point(source, node.start_byte)
        assert tuple(node.end_point) == point(source, node.end_byte)
    assert not any(n.start_byte < boundary < n.end_byte for n in descendants(root, "ERROR")), root


@pytest.mark.parametrize("statement", BAD_STATEMENTS)
@pytest.mark.parametrize("prefix", ["", "run before\n"])
@pytest.mark.parametrize("scope", ["flow", "repeat", "binding"])
@pytest.mark.parametrize("trivia", ["", "\n", "# Following.\n", "## Following.\n", "## @param topic Input.\n"])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_malformed_statements_preserve_following_siblings_and_items(statement, prefix, scope, trivia, indent, newline):
    depth = 2 if scope == "repeat" else 1
    header = "flow first:\n" + (indent + "repeat:\n" if scope == "repeat" else "")
    binding = "let result = " if scope == "binding" else ""
    body = (prefix + binding + statement + "\n" + trivia + "run after\n").splitlines()
    source = (header + "".join(indent * depth + row + "\n" for row in body)
              + "flow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert not valid(root), root
    assert any(n.child_by_field_name("target") is not None
               and n.child_by_field_name("target").text == b"after"
               for n in descendants(root, "run_stmt")), root
    assert_next_items(root, source, ("flow next:\n  pass\n").replace("\n", newline).encode())
    if "#" in trivia:
        marker = source.index(trivia.split("\n", 1)[0].encode())
        comment, = [n for kind in ["plain_comment", "item_doc", "param_doc"]
                    for n in descendants(root, kind) if n.start_byte == marker]
        assert comment.parent.type in {"flow_body", "repeat_body"}


@pytest.mark.parametrize("directive", BAD_DIRECTIVES)
@pytest.mark.parametrize("kind,following", [("agic", "user: Following."), ("flow", "run after")])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n", "# Preface.\n\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_malformed_directives_preserve_body_entries_and_next_items(directive, kind, following, prefix, newline):
    source = (f"{kind} first:\n{prefix}  {directive}\n  {following}\n"
              "## Next docs.\nflow next:\n  pass\n").replace("\n", newline).encode()
    root = parse(source.decode())
    assert not valid(root), root
    assert any(n.text.strip() == following.encode()
               for n in descendants(root, "message" if kind == "agic" else "run_stmt")), root
    assert_next_items(root, source, ("flow next:\n  pass\n").replace("\n", newline).encode())
    doc, = [n for n in root.named_children if n.type == "item_doc"]
    assert doc.text == b"## Next docs." + newline.encode()


@pytest.mark.parametrize("item", ITEMS)
@pytest.mark.parametrize("prefix", [
    "flow broken:\n  map in 2 lanes in 3 lanes using worker\n",
    "agic broken:\n  recall = wrong\n",
    "struct Broken:\n  value Text\n",
    "flow broken(\n",
    "unknown broken:\n  Body.\n",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_every_item_head_can_resynchronize_after_an_invalid_item(item, prefix, newline):
    suffix = item.replace("\n", newline).encode()
    source = prefix.replace("\n", newline).encode() + suffix
    root = parse(source.decode())
    assert not valid(root), root
    assert_next_items(root, source, suffix)


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_boundary_repair_and_corruption_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    query = Query(parser.language, tree_sitter_toolang.TAGS_QUERY)
    suffix = b"## Next.\nflow next:\n  pass\nagic last:\n  user: Body.\n".replace(b"\n", newline)
    for line in ["map using worker", *BAD_STATEMENTS, *BAD_DIRECTIVES, "run worker"]:
        source = ("flow first:\n  " + line + "\n  run after\n").encode().replace(b"\n", newline) + suffix
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
        assert_next_items(root, source, b"flow next:" + newline + b"  pass" + newline + b"agic last:" + newline + b"  user: Body." + newline)
        assert {b"next", b"last"} <= {n.text for n in QueryCursor(query).captures(root).get("name", [])}
        previous = source


@pytest.mark.parametrize("seed", range(4))
@pytest.mark.parametrize("prefix", [
    "flow broken:\n  repeat:\n    map in 2 lanes in 3 lanes using worker\n",
    "agic broken:\n  recall = wrong\n  user: Following.\n",
    "struct Broken:\n  value Text\n",
])
def test_corrupt_prefix_edits_preserve_unchanged_program_items(seed, prefix):
    parser = Parser(Language(tree_sitter_toolang.language()))
    rng = Random(seed)
    original = prefix.encode()
    current_prefix = original
    suffix = b"flow next:\n  pass\nagic last:\n  user: Body.\n"
    previous = current_prefix + suffix
    tree = parser.parse(previous)
    for step in range(200):
        offset = rng.randrange(len(current_prefix) + 1)
        end = min(len(current_prefix), offset + rng.randrange(4))
        current_prefix = current_prefix[:offset] + rng.choice([b"", b" ", b"\t", b"\n", b":", b"=", b"##", b"flow "]) + current_prefix[end:]
        if step % 20 == 19:
            current_prefix = original
        if not current_prefix.endswith(b"\n"):
            current_prefix += b"\n"
        source = current_prefix + suffix
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(source).root_node), (seed, step, source)
        try:
            assert_next_items(tree.root_node, source, suffix)
        except AssertionError as error:
            raise AssertionError((seed, step, source, str(tree.root_node))) from error
        previous = source
