"""Keyword boundaries and recovery text preserve structural tokens and Content."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid, walk


HEADS = [
    "run", "seek", "ask", "keep", "drop", "sort", "repeat", "generate", "map",
    "reduce", "spawn", "async", "await", "exec", "scatter", "gather", "storm", "settle",
]


@pytest.mark.parametrize("head", HEADS)
@pytest.mark.parametrize("suffix", ["worker", "Worker", "_value", "2"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_operation_prefixes_are_literal_in_both_implicit_text_positions(head, suffix, newline):
    word = head + suffix
    root = parse((f"flow work:\n  {word}\n  let note = {word}\n"
                  f"  repeat:\n    let nested = {word}\n").replace("\n", newline))
    assert valid(root), root
    implicit, = descendants(root, "implicit_run_statement")
    assert implicit.text.strip() == word.encode()
    bindings = descendants(root, "let_statement")
    assert len(bindings) == 2
    for binding in bindings:
        assert binding.child_by_field_name("statement") is None, binding
        assert binding.child_by_field_name("value").text.strip() == word.encode()


@pytest.mark.parametrize("source", [
    "run", "run worker extra", "seek", "seek reviewer", "ask",
    "keep", "drop first", "sort ascending", "repeat 2 times",
])
def test_complete_operation_heads_remain_invalid_instead_of_becoming_text(source):
    root = parse(f"flow work:\n  let result = {source}\n")
    assert not valid(root), root
    assert all(node.child_by_field_name("value") is None
               for node in descendants(root, "let_statement")), root


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_binding_heads_switch_between_operations_and_content(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    sources = [
        "run worker", "seek reviewer worker", "ask: Continue?", "keep first 1",
        "drop last 1", "sort ascending by score", "repeat:\n    run worker",
        "generate 2 using worker", "map using worker", "reduce using worker",
        "spawn worker", "async run worker", "await job",
    ]
    for operation in sources:
        head = operation.split()[0].rstrip(":")
        for value in [head + "worker", operation, head, head + "_value", operation]:
            current = (f"flow work:\n  let result = {value}\n  run after\n"
                       "flow next:\n  pass\n").encode().replace(b"\n", newline)
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
            previous = current


@pytest.mark.parametrize("source", [
    "flowwork:\n  pass\n", "agicworker:\n  pass\n", "contextnotes: Text.\n",
    "flow work:\n  keep ifworker\n", "flow work:\n  drop ifworker\n",
    "flow work:\n  keep first1\n", "flow work:\n  sort ascending byscore\n",
    "flow work:\n  sort ascendingby score\n", "flow work:\n  map in2 lanes using worker\n",
    "flow work:\n  repeat 2 timeswindowing 1:\n    run worker\n",
    "with skillfoo\n", "with psychefoo\n", "with servicefoo\n", "with promptfoo\n",
])
def test_keywords_cannot_split_declaration_names_or_clause_words(source):
    assert not valid(parse(source)), parse(source)


@pytest.mark.parametrize("name", ["Text", "Number", "Boolean", "Json", "Part"])
@pytest.mark.parametrize("suffix", ["", "ual", "2"])
def test_builtin_type_words_and_authored_type_prefixes_remain_distinct_leaves(name, suffix):
    root = parse(f"agic work -> {name}{suffix}[][]:\n  pass\n")
    assert valid(root), root
    base = descendants(root, "type")[0].child_by_field_name("base")
    assert base.type == ("type_name" if suffix else "builtin_type")
    assert base.text == (name + suffix).encode()
    assert base.child_count == 0


@pytest.mark.parametrize("source", [
    "with skill foo\n", "with skill\tfoo\n", "with skill ./foo\n",
    "flow work:\n  run: Text.\n", "flow work:\n  async run: Text.\n",
    "flow work:\n  run->Text: Text.\n", "flow work:\n  map: Text.\n",
    "flow work:\n  keep if: Text.\n", "flow work:\n  sort ascending by: Text.\n",
    "flow work:\n  run runworker\n", "flow work:\n  keep if ifworker\n",
    "flow work:\n  map using usingworker\n", "flow work:\n  let job=spawn worker\n",
])
def test_whitespace_and_punctuation_delimit_complete_keywords(source):
    assert valid(parse(source)), parse(source)


def test_keyword_aliases_preserve_named_leaf_nodes():
    root = parse("with skill example\n"
                 "skill example:\n  Text.\n"
                 "agic worker -> Text:\n  recall = far, near\n  user: Text.\n"
                 "flow work:\n  lanes = 2\n  map in 2 lanes using worker\n")
    assert valid(root), root
    for kind in ["cap_kind", "skill_keyword", "builtin_type", "recall_source",
                 "role", "directive_key", "flow_lanes_keyword"]:
        nodes = descendants(root, kind)
        assert nodes, kind
        assert all(node.child_count == 0 for node in nodes), nodes


@pytest.mark.parametrize("space", ["", " ", "\t", "  \t"])
def test_bound_run_range_starts_at_its_keyword(space):
    root = parse(f"flow work:\n  let result ={space}run worker\n")
    assert valid(root), root
    operation, = descendants(root, "run_statement")
    keyword = operation.named_children[0]
    assert keyword.type == "flow_run_keyword"
    assert operation.start_byte == keyword.start_byte
    assert operation.text == b"run worker\n"


@pytest.mark.parametrize("binding", ["", "let result = ", "let "])
@pytest.mark.parametrize("statement", [
    "run worker", "async run worker", "spawn worker", "seek reviewer worker",
    "generate 2 using worker", "map using worker", "reduce using worker",
    "keep if worker", "drop if worker", "sort ascending by worker",
])
@pytest.mark.parametrize("separator", [" ", "\t", "  "])
def test_structural_keyword_and_name_ranges_exclude_extras(binding, statement, separator):
    root = parse("flow work:\n  " + (binding + statement).replace(" ", separator) + "\n")
    assert valid(root), root
    for node in walk(root):
        if node.type.endswith(("_keyword", "_name")):
            assert node.text == node.text.strip(b" \t"), (node.type, node.text)


@pytest.mark.parametrize("statement", ["run worker", "async run worker", "let h = async run worker"])
def test_inline_comment_range_starts_at_its_marker(statement):
    root = parse(f"flow work:\n  {statement} # Note.\n")
    assert valid(root), root
    comment, = descendants(root, "plain_comment")
    assert comment.text == b"# Note."


def test_malformed_bound_operation_does_not_consume_following_statements():
    root = parse("flow work:\n  let items = map using: Transform.\n"
                 "  run after\nflow next:\n  pass\n")
    assert not valid(root), root
    flows = descendants(root, "flow")
    assert [flow.child_by_field_name("name").text for flow in flows] == [b"work", b"next"]
    after, = descendants(root, "run_statement")
    assert after.child_by_field_name("runnable").text == b"after"
