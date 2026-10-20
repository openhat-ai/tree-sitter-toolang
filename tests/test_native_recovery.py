"""Native recovery preserves recognized values and stays inside its owner."""

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, native_errors, parse, valid, walk_all
from test_recovery_boundaries import assert_next_items


@pytest.mark.parametrize("modifier", ["", "async "])
@pytest.mark.parametrize("binding", ["", "let ", "let result = "])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("tail", [" extra", "()", ".field", "[0]"])
def test_run_target_errors_retain_the_recognized_target(modifier, binding, newline, tail):
    source = (f"flow first:\n  {binding}{modifier}run worker{tail}\n"
              "  ## Following.\n  run after\n## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error and not valid(root), root
    owner, following = declarations(root)
    run = descendants(owner, "run_stmt")[0]
    assert run.child_by_field_name("target").text == b"worker"
    error, = [node for node in walk_all(run) if node.is_error]
    text = tail.strip().encode()
    assert error.text == text
    start = source.encode().index(text)
    assert (error.start_byte, error.end_byte) == (start, start + len(text))
    assert descendants(owner, "run_stmt")[-1].child_by_field_name("target").text == b"after"
    assert descendants(owner, "item_doc")[0].parent == owner.child_by_field_name("body")
    assert root.named_children[-2].type == "item_doc"
    assert following.child_by_field_name("name").text == b"next" and valid(following)


NATIVE_CASES = [
    ("flow first:\n  run worker extra\n  run after\n", "flow first:\n  run worker\n  run after\n"),
    ("flow first:\n  async run worker extra\n  run after\n", "flow first:\n  async run worker\n  run after\n"),
    ("flow first:\n  let result = async run worker extra\n  run after\n", "flow first:\n  let result = async run worker\n  run after\n"),
    ("flow first:\n  let result run worker\n  run after\n", "flow first:\n  let result = run worker\n  run after\n"),
    ("flow first:\n  let result = generate\n  run after\n", "flow first:\n  let result = generate 2 using worker\n  run after\n"),
    ("flow first -> :\n  run after\n", "flow first -> Text:\n  run after\n"),
    ("flow first(topic:) -> :\n  run after\n", "flow first(topic: Text) -> Text:\n  run after\n"),
    ("flow first(topic:, next: Text):\n  run after\n", "flow first(topic: Text, next: Text):\n  run after\n"),
    ("flow first:\n  run -> : Value # literal.\n  run after\n", "flow first:\n  run -> Text: Value # literal.\n  run after\n"),
    ("flow first:\n  models after\n  tools = fast\n  run after\n", "flow first:\n  models = fast\n  tools = fast\n  run after\n"),
    ("flow first:\n  models =\n  tools = fast\n  run after\n", "flow first:\n  models = fast\n  tools = fast\n  run after\n"),
    ("flow first:\n  hands += worker\n  tools = fast\n  run after\n", "flow first:\n  hands = worker\n  tools = fast\n  run after\n"),
    ("agic first:\n  Before.\n  user missing colon\n  assistant: After.\n", "agic first:\n  Before.\n  user: Repaired.\n  assistant: After.\n"),
]
NATIVE_CASES += [
    (f"flow first:\n  {modifier}run worker{tail}\n  run after\n",
     f"flow first:\n  {modifier}run worker\n  run after\n")
    for modifier in ["", "async "]
    for tail in ["()", ".field", "[0]", "::other", " -> Text", " in 2 lanes", " extra # Comment."]
]


@pytest.mark.parametrize("broken,repaired", NATIVE_CASES)
@pytest.mark.parametrize("indent,newline", [("  ", b"\n"), ("\t", b"\r\n")])
@pytest.mark.parametrize("eof", [True, False])
def test_native_error_edits_preserve_unchanged_items_and_match_fresh_trees(broken, repaired, indent, newline, eof):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    suffix = "## Next résumé.\nflow next:\n  pass\nagic last:\n  user: Body.\n"
    suffix = suffix.replace("  ", indent).encode().replace(b"\n", newline)
    if eof:
        suffix = suffix.removesuffix(newline)
    for prefix in [repaired, broken, repaired, broken, repaired]:
        source = prefix.replace("  ", indent).encode().replace(b"\n", newline) + suffix
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node), source
        assert root.has_error == (prefix == broken), root
        assert valid(root) == (prefix == repaired), root
        assert_next_items(root, source, suffix)
        owner = declarations(root)[0]
        assert owner.child_by_field_name("name").text == b"first"
        assert owner.child_by_field_name("body") is not None
        boundary = len(source) - len(suffix)
        assert all(node.end_byte <= boundary for node in native_errors(root))
        doc, = [node for node in root.named_children if node.type == "item_doc"]
        assert doc.text == b"## Next r\xc3\xa9sum\xc3\xa9." + newline
        previous = source


@pytest.mark.parametrize("parameter", ["topic:", "topic?:"])
@pytest.mark.parametrize("position", ["{bad}, next: Text", "before: Text, {bad}, next: Text"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_parameter_types_use_local_native_errors(parameter, position, newline):
    source = (f"flow first({position.format(bad=parameter)}):\n  run worker\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error
    owner, following = declarations(root)
    params = owner.child_by_field_name("params")
    assert native_errors(params)
    assert not descendants(params, "invalid_param")
    assert following.child_by_field_name("name").text == b"next" and valid(following)


@pytest.mark.parametrize("key,node_type", [
    *[(key, "query_value") for key in ["models", "tools", "skills", "services", "psyches", "prompts"]],
    ("context", "identifier"), ("instruct", "identifier"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_missing_directive_values_are_visible_native_leaves(key, node_type, newline):
    language = Language(tree_sitter_toolang.language())
    source = (f"flow first:\n  {key} =\n  run after\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error
    owner, following = declarations(root)
    directive = owner.child_by_field_name("body").child_by_field_name("directive")
    value = directive.child_by_field_name("value")
    assert value.type == node_type and value.is_named and value.is_missing
    assert value.child_count == 0 and value.start_byte == value.end_byte
    assert native_errors(root) == [value]
    captures = QueryCursor(Query(language, "(MISSING) @missing")).captures(root)
    assert captures["missing"] == [value]
    assert following.child_by_field_name("name").text == b"next" and valid(following)
