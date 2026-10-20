"""Rejected comments, pending requirements, and malformed nested clauses stay local."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid, walk
from test_recovery_boundaries import assert_next_items


OWNERS = [
    ("flow", "first", "run before", "run after", "run_stmt"),
    ("agic", "first", "user: Before.", "user: After.", "message"),
    ("struct", "First", "before: Text", "after: Text", "field"),
    *[(kind, "first", "title = Value", "After.", "text")
      for kind in ["psyche", "skill", "service", "prompt", "chore"]],
]
SUFFIX = "flow next:\n  pass\nagic last:\n  user: Body.\n"


@pytest.mark.parametrize("kind,name,before,after,entry", OWNERS)
@pytest.mark.parametrize("has_before", [False, True])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
@pytest.mark.parametrize("separator", ["", "# Ordinary.\n", "## Following.\n"])
def test_rejected_program_docs_do_not_poison_following_source(kind, name, before, after, entry, has_before, indent, newline, separator):
    source = (f"{kind} {name}:\n" + (indent + before + "\n" if has_before else "")
              + indent + "#@ Wrong scope.\n" + indent + after + "\n" + separator + SUFFIX)
    source = source.replace("\n", newline).encode()
    root = parse(source.decode())
    assert root.has_error, root
    assert_next_items(root, source, SUFFIX.replace("\n", newline).encode())
    owner = declarations(root)[0]
    assert owner.type == kind and owner.child_by_field_name("name").text == name.encode(), root
    assert any(node.text.strip() == after.encode() for node in descendants(owner, entry)), root
    if has_before:
        assert any(node.text.strip() == before.encode() for node in walk(owner)), root
    assert not descendants(owner, "program_doc"), root


@pytest.mark.parametrize("kind,name,before,after,entry", OWNERS)
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_rejected_comment_at_eof_can_be_extended_and_repaired(kind, name, before, after, entry, indent, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    header = f"{kind} {name}:\n{indent}{before}\n"
    for marker in ["#@", "#@ Wrong scope.", "## Repaired.", "#@", "# Ordinary."]:
        for suffix in ["", "\n" + indent + after + "\n" + SUFFIX]:
            source = (header + indent + marker + suffix).replace("\n", newline).encode()
            edit_tree(tree, previous, source)
            tree = parser.parse(source, tree)
            root = tree.root_node
            assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
            assert root.has_error == marker.startswith("#@"), root
            if suffix:
                assert_next_items(root, source, SUFFIX.replace("\n", newline).encode())
                assert any(n.text.strip() == after.encode() for n in descendants(root, entry)), root
            previous = source


PENDING_PREFIXES = [
    "flow first:\n  models = fast\n",
    "flow first:\n  repeat:\n    until: Done.\n",
    "flow first:\n  run before\n  repeat:\n    until done\n",
    "flow first:\n  map in 2 lanes in 3 lanes using worker\n",
    "agic first:\n  hands += worker\n",
    "struct First:\n  value Text[][]\n",
    "flow first:\n  reduce using worker:\n    f\n",
]


@pytest.mark.parametrize("prefix", PENDING_PREFIXES)
@pytest.mark.parametrize("marker,kind", [
    ("# Outside.", "plain_comment"), ("## Next.", "item_doc"),
    ("## @param topic Input.", "param_doc"), ("#@ Program.", "program_doc"),
])
@pytest.mark.parametrize("trivia", ["", "\n# Outside prefix.\n\n"])
@pytest.mark.parametrize("ending", ["", "\n", "\n" + SUFFIX])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_pending_requirements_finish_before_outer_documentation(prefix, marker, kind, trivia, ending, newline):
    source = (prefix + trivia + marker + ending).replace("\n", newline).encode()
    root = parse(source.decode())
    assert not valid(root), root
    prefix_end = len(prefix.replace("\n", newline).encode())
    boundary = source.index(marker.encode())
    doc, = [n for n in descendants(root, kind) if n.start_byte == boundary]
    assert doc.parent == root, root
    assert declarations(root)[0].end_byte <= boundary, root
    outer_start = source.index(b"#", prefix_end)
    assert all(n.end_byte <= outer_start for n in walk(root) if n.type.startswith("invalid_missing_")), root
    assert all(n.parent == root for n in walk(root)
               if n.type in {"plain_comment", "item_doc", "param_doc", "program_doc"} and n.start_byte >= prefix_end), root
    if ending.endswith(SUFFIX):
        assert_next_items(root, source, SUFFIX.replace("\n", newline).encode())


@pytest.mark.parametrize("target", ["42", "Wrong", "check()", "-> Boolean: Ready.", "using check", ""])
@pytest.mark.parametrize("position", [0, 1, 2])
@pytest.mark.parametrize("scope", ["repeat", "nested", "binding"])
@pytest.mark.parametrize("indent,newline", [("  ", "\n"), ("\t", "\r\n")])
def test_malformed_until_preserves_its_repeat_and_outer_statements(target, position, scope, indent, newline):
    entries = ["run worker", "run inner_after"]
    entries.insert(position, "until " + target)
    nested = scope == "nested"
    level = 3 if nested else 2
    source = "flow first:\n  run before\n".replace("  ", indent)
    if nested:
        source += indent + "repeat:\n"
    source += indent * (level - 1) + ("let job = " if scope == "binding" else "") + "repeat:\n"
    source += "".join(indent * level + line + "\n" for line in entries)
    if nested:
        source += indent * 2 + "run between\n"
    source += indent + "run after\n" + SUFFIX
    source = source.replace("\n", newline).encode()
    root = parse(source.decode())
    assert not valid(root), root
    expected = {b"before": "flow_body", b"worker": "repeat_body", b"inner_after": "repeat_body", b"after": "flow_body"}
    if nested:
        expected[b"between"] = "repeat_body"
    for target, parent in expected.items():
        statement, = [n for n in descendants(root, "run_stmt")
                      if n.child_by_field_name("target") is not None and n.child_by_field_name("target").text == target]
        assert statement.parent.type == parent and valid(statement), root
    assert not descendants(root, "invalid_missing_body"), root
    assert_next_items(root, source, SUFFIX.replace("\n", newline).encode())


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_recovery_edges_and_repairs_match_fresh_trees(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    prefixes = [
        "flow first:\n  run before\n  #@ Wrong scope.\n  run after\n",
        "flow first:\n  run before\n  # Ordinary.\n  run after\n",
        *PENDING_PREFIXES,
        "flow first:\n  repeat:\n    run worker\n    until 42\n  run after\n",
        "flow first:\n  repeat:\n    run worker\n    until check()\n  run after\n",
        "flow first:\n  repeat:\n    run worker\n    until -> Boolean: Ready.\n  run after\n",
        "flow first:\n  repeat:\n    run worker\n    until done\n  run after\n",
    ]
    for prefix in prefixes + prefixes[::-1]:
        source = (prefix + "## Next.\n" + SUFFIX).encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
        assert_next_items(root, source, SUFFIX.encode().replace(b"\n", newline))
        doc, = [n for n in descendants(root, "item_doc") if n.text == b"## Next." + newline]
        assert doc.parent == root, root
        previous = source
