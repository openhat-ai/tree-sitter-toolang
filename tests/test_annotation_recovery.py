"""Annotations commit to their owner and leave outer header boundaries intact."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("annotation", ["topic: Text -> Text", "topic: Text"])
@pytest.mark.parametrize("comment", ["# Contains )", "# Contains ,", "# Contains ), both"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_parameter_recovery_cannot_borrow_a_delimiter_from_the_header_comment(kind, entry, annotation, comment, newline):
    source = (f"{kind} work({annotation}: {comment}\n  ## First.\n  {entry}\n"
              "## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    assert owner.child_by_field_name("name").text == b"work"
    assert owner.child_by_field_name("params").children[-1].is_missing
    assert owner.child_by_field_name("params").children[-1].type == ")"
    assert not descendants(owner, "invalid_param")
    actual_return = owner.child_by_field_name("return")
    assert (actual_return.text if actual_return else None) == (b"Text" if "->" in annotation else None)
    header_comment, = descendants(owner, "plain_comment")
    assert header_comment.text == comment.encode() and header_comment.parent == owner
    body = owner.child_by_field_name("body")
    assert body.children_by_field_name("statement" if kind == "flow" else "message")[-1].text.strip() == entry.encode()
    assert descendants(body, "item_doc")[0].text == ("## First." + newline).encode()
    assert following.child_by_field_name("name").text == b"next" and valid(following)
    assert root.named_children[-2].type == "item_doc"


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("parameter", [": Text?", "?: Text[ ]", ": Text extra"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_parameter_names_compose_with_invalid_annotation_suffixes(kind, entry, parameter, newline):
    source = (f"{kind} work(before: Text, {parameter}, after: Text):\n  {entry}\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    params = owner.child_by_field_name("params")
    entries = params.children_by_field_name("param")
    assert [entry.type for entry in entries] == ["param", "invalid_param", "param"]
    assert entries[1].text == parameter.encode()
    assert entries[1].child_by_field_name("name") is None
    assert entries[2].child_by_field_name("name").text == b"after"
    assert owner.child_by_field_name("body") is not None
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("kind,entry", [("flow", "run after"), ("agic", "user: After.")])
@pytest.mark.parametrize("params", ["", "(topic: Text)", "(topic:)"])
@pytest.mark.parametrize("name", ["", " work"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_declared_return_types_keep_signatures_bodies_and_documentation(kind, entry, params, name, newline):
    source = (f"{kind}{name}{params} -> : # Header.\n  ## First.\n  {entry}\n"
              "## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    actual_name = owner.child_by_field_name("name")
    assert (actual_name.text if actual_name else None) == (b"work" if name else None)
    assert owner.child_by_field_name("return") is None
    diagnostic, = descendants(owner, "invalid_missing_type")
    assert diagnostic.start_byte == diagnostic.end_byte == source.encode().index(b": # Header.")
    assert diagnostic.parent == owner
    assert owner.child_by_field_name("body").named_children[0].type == "item_doc"
    assert following.child_by_field_name("name").text == b"next" and valid(following)


INLINE_HEADS = ["run", "async run", "exec", "spawn", "seek reviewer", "generate 2", "map", "reduce",
                "keep if", "drop if", "sort ascending by"]


@pytest.mark.parametrize("head", INLINE_HEADS)
@pytest.mark.parametrize("block", [False, True])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_inline_return_types_keep_content_and_following_statements(head, block, newline):
    text = "\n    Text # literal." if block else " Text # literal."
    source = (f"flow work:\n  {head} -> :{text}\n  run after\n"
              "## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    inline, = descendants(owner, "inline_agic")
    diagnostic, = descendants(inline, "invalid_missing_type")
    assert diagnostic.parent == inline and diagnostic.start_byte == diagnostic.end_byte
    assert inline.child_by_field_name("return") is None
    assert inline.child_by_field_name("content").text.strip() == b"Text # literal."
    assert descendants(owner, "run_statement")[-1].child_by_field_name("target").text == b"after"
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_annotation_repairs_match_fresh_parses_and_retain_unchanged_items(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    tree = parser.parse(b"")
    previous = b""
    for header, statement, expected in [
        ("flow work(topic: Text) -> Text:", "run -> Text: Body.", True),
        ("flow work(topic: Text -> Text: # )", "run -> : Body.", False),
        ("flow work(: Text?) -> :", "reduce -> : Body.", False),
        ("flow work(topic: Text) -> Text:", "run -> Text: Body.", True),
    ]:
        source = (header + "\n  " + statement + "\n  run after\nflow next:\n  pass\n").replace("\n", newline).encode()
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        assert valid(root) == expected
        assert [item.child_by_field_name("name").text for item in declarations(root)] == [b"work", b"next"]
        previous = source


@pytest.mark.parametrize("statement", ["async run ->", "async run -> Text", "let h = async run ->"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_inline_colons_keep_modified_run_target_diagnostics(statement, newline):
    source = (f"flow work:\n  {statement}\n  run after\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    diagnostic, = descendants(owner, "invalid_run_target")
    assert diagnostic.parent.type == "run_statement"
    assert diagnostic.parent.child_by_field_name("async").text == b"async"
    assert not descendants(root, "invalid_missing_type")
    assert descendants(owner, "run_statement")[-1].child_by_field_name("target").text == b"after"
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("annotation", ["-> Boolean", "->"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_until_keeps_its_restricted_target_grammar(annotation, newline):
    source = (f"flow work:\n  repeat:\n    run worker\n    until {annotation}: Ready.\n"
              "    run after\n  run after_outer\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    assert not descendants(root, "invalid_missing_type")
    assert not descendants(owner, "until_clause")
    assert [n.child_by_field_name("target").text for n in descendants(owner, "run_statement")] == [b"worker", b"after", b"after_outer"]
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("parameter", ["topic: Text extra: Wrong", "topic: Text -> Other", "topic: Text# note", "topic: Text - > Other", "topic: Text -> next: Text", "topic: Text -> Other: Value"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_parameter_delimiters_take_priority_over_invalid_entry_fragments(parameter, newline):
    source = (f"flow work({parameter}, next: Text):\n  run after\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root)
    owner, following = declarations(root)
    entries = owner.child_by_field_name("params").children_by_field_name("param")
    assert [entry.type for entry in entries] == ["invalid_param", "param"]
    assert entries[0].text == parameter.encode()
    assert entries[1].child_by_field_name("name").text == b"next"
    assert owner.child_by_field_name("return") is None
    assert not descendants(owner, "plain_comment")
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("binding", ["", "let result = ", "let "])
@pytest.mark.parametrize("type_name", ["", "Text"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_reducer_return_annotations_preserve_content_initializers_and_bindings(binding, type_name, newline):
    source = (f"flow work:\n  {binding}reduce -> {type_name}:\n\n    Merge # literal.\n"
              "    from: Initial # literal.\n  run after\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root) == bool(type_name)
    owner, following = declarations(root)
    reducer, = descendants(owner, "reduce_statement")
    target = reducer.child_by_field_name("target")
    assert target.type == "inline_agic"
    assert target.child_by_field_name("content").text == (newline + "    Merge # literal." + newline).encode()
    assert reducer.child_by_field_name("from").text == b" Initial # literal."
    assert bool(descendants(target, "invalid_missing_type")) == (not type_name)
    if binding:
        wrapper, = descendants(owner, "let_statement")
        assert wrapper.child_by_field_name("statement") == reducer
    assert descendants(owner, "run_statement")[-1].child_by_field_name("target").text == b"after"
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_comment_only_edits_cannot_change_missing_parameter_delimiter_recovery(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for comment in ["No delimiter.", ")", ",", "), both", "No delimiter."]:
        source = (f"flow work(topic: Text -> Text: # {comment}\n  run after\n"
                  "flow next:\n  pass\n").replace("\n", newline).encode()
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        assert not valid(root)
        owner, following = declarations(root)
        assert owner.child_by_field_name("params").children[-1].is_missing
        assert not descendants(owner, "invalid_param")
        assert owner.child_by_field_name("return").text == b"Text"
        assert descendants(owner, "plain_comment")[0].text == ("# " + comment).encode()
        assert following.child_by_field_name("name").text == b"next" and valid(following)
        previous = source


def test_shared_return_clauses_preserve_existing_field_schemas_and_hide_their_rule():
    nodes = json.loads((Path(__file__).parents[1] / "src/node-types.json").read_text())
    named = {node["type"]: node for node in nodes if node["named"]}
    assert "_return_clause" not in named
    assert named["invalid_missing_type"] == {"type": "invalid_missing_type", "named": True}
    for owner in ["agic", "flow", "inline_agic"]:
        assert named[owner]["fields"]["return"] == {
            "multiple": False, "required": False, "types": [{"type": "type", "named": True}],
        }
        assert named[owner]["fields"]["arrow"] == {
            "multiple": False, "required": False, "types": [{"type": "->", "named": False}],
        }
