"""Reducer initializer syntax, ownership, and recovery at explicit boundaries."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid


@pytest.mark.parametrize("header", ["reduce using merge:", "reduce:", "reduce -> Text:"])
@pytest.mark.parametrize("binding", ["", "let report = "])
@pytest.mark.parametrize("block", [False, True])
@pytest.mark.parametrize("indent", ["  ", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_initial_clause_has_one_content_field_and_preserves_text(header, binding, block, indent, newline):
    reducer = "" if "using" in header else f"{indent*2}Merge.\n"
    value = '"Seed # literal"'
    initializer = f"initial:\n{indent*3}{value}" if block else f"initial: {value}"
    source = (f"flow work:\n{indent}{binding}{header}\n{reducer}{indent*2}{initializer}\n"
              f"{indent}run next\n## Following.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "reduce_stmt")
    initial = statement.child_by_field_name("initial")
    assert initial.type == "content"
    expected = ((indent*3 + value + "\n").replace("\n", newline) if block else " " + value).encode()
    assert initial.text == expected
    assert initial.start_byte == source.encode().index(expected)
    assert initial.end_byte == initial.start_byte + len(expected)
    text, = descendants(initial, "text")
    assert text.text == ((indent*3 if block else " ") + value).encode()
    target = statement.child_by_field_name("target")
    assert target.end_byte <= initial.start_byte
    assert value.encode() not in target.text
    assert descendants(root, "run_stmt")[-1].child_by_field_name("target").text == b"next"
    assert root.named_children[-2].type == "item_doc"
    assert declarations(root)[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("header", ["reduce using merge:", "reduce:", "reduce -> Text:"])
@pytest.mark.parametrize("block", [False, True])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [False, True])
def test_initial_content_ranges_at_end_of_program(header, block, newline, final_newline):
    reducer = "" if "using" in header else "    Merge.\n"
    initializer = "initial:\n      Seed # literal." if block else "initial: Seed # literal."
    source = (f"flow work:\n  {header}\n{reducer}    {initializer}").replace("\n", newline)
    source += newline if final_newline else ""
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "reduce_stmt")
    content = statement.child_by_field_name("initial")
    expected = ("      Seed # literal." + (newline if final_newline else "")
                if block else " Seed # literal.").encode()
    assert content.text == expected
    assert content.start_byte == source.encode().index(expected)
    assert content.end_byte == content.start_byte + len(expected)
    assert root.end_byte == len(source.encode())


@pytest.mark.parametrize("head,kind", [
    ("run initial", "run_stmt"),
    ("async run initial", "run_stmt"),
    ("exec initial", "exec_stmt"),
    ("spawn initial", "spawn_stmt"),
    ("seek initial initial", "seek_stmt"),
    ("generate 2 using initial", "generate_stmt"),
    ("map using initial", "map_stmt"),
    ("reduce using initial", "reduce_stmt"),
    ("keep if initial", "keep_stmt"),
    ("drop if initial", "drop_stmt"),
    ("sort ascending by initial", "sort_stmt"),
    ("until initial", "until_clause"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_initial_is_a_name_in_each_explicit_target_context(head, kind, newline):
    source = ("flow work:\n  repeat:\n    run worker\n    " + head + "\n"
              if kind == "until_clause" else "flow work:\n  " + head + "\n")
    root = parse(source.replace("\n", newline))
    assert valid(root), root
    statement = descendants(root, kind)[0]
    target = statement.child_by_field_name("target")
    assert target.type == "runnable_name" and target.text == b"initial"
    assert target.child_count == 0
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    assert not any(node.text == b"initial" for node in QueryCursor(query).captures(root)["keyword"])


@pytest.mark.parametrize("word", ["intro", "initially", "initial_value", "initial2"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_only_the_complete_initial_keyword_selects_an_initializer(word, newline):
    source = (f"flow work:\n  reduce:\n    Merge.\n    {word}: Literal.\n"
              "    initial: Seed.\n  run next\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    statement, = descendants(root, "reduce_stmt")
    target = statement.child_by_field_name("target")
    assert f"{word}: Literal.".encode() in target.child_by_field_name("content").text
    assert statement.child_by_field_name("initial").text == b" Seed."


@pytest.mark.parametrize("word", ["initial", "from", "note"])
def test_initializer_words_remain_names_and_deeper_literal_text(word):
    root = parse(f"flow {word}({word}: Text):\n  let {word} = Value.\n  reduce:\n"
                 f"    Merge.\n      {word}: Nested literal.\n    initial: Seed.\n  run {word}\n")
    assert valid(root), root
    for kind in ["param_name", "local_name"]:
        name, = descendants(root, kind)
        assert name.text == word.encode()
    statement, = descendants(root, "reduce_stmt")
    assert f"{word}: Nested literal.".encode() in statement.child_by_field_name("target").text


@pytest.mark.parametrize("word", ["from", "seed", "note"])
@pytest.mark.parametrize("header", ["reduce:", "reduce -> Text:"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("final_newline", [False, True])
def test_nonkeywords_are_reducer_text_without_an_initializer(word, header, newline, final_newline):
    source = f"flow work:\n  {header}\n    Merge.\n    {word}: Seed."
    if final_newline:
        source += "\n"
    source = source.replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    reducer, = descendants(root, "reduce_stmt")
    assert reducer.child_by_field_name("initial") is None
    content = reducer.child_by_field_name("target").child_by_field_name("content")
    expected = (f"    Merge.\n    {word}: Seed." + ("\n" if final_newline else "")).replace("\n", newline).encode()
    assert content.text == expected
    assert (content.start_byte, content.end_byte) == (source.encode().index(expected), len(source.encode()))
    query = Query(Language(tree_sitter_toolang.language()), tree_sitter_toolang.HIGHLIGHTS_QUERY)
    captures = QueryCursor(query).captures(root)
    assert descendants(content, "text")[-1] in captures["string"]
    assert not any(node.text == word.encode() for node in captures.get("keyword", []))


@pytest.mark.parametrize("word", ["from", "seed", "note"])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_only_the_initializer_clause_is_valid_in_a_named_reducer_scope(word, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for keyword in ["initial", word, "initial", word, "initial"]:
        source = (f"flow first:\n  reduce using merge:\n    {keyword}: Seed.\n"
                  "  run after\n## Following.\nflow next:\n  pass\n").encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(source).root_node)
        assert valid(root) == (keyword == "initial"), root
        assert [node.child_by_field_name("name").text for node in declarations(root)] == [b"first", b"next"]
        doc, following = root.named_children[-2:]
        assert doc.type == "item_doc" and doc.text == b"## Following." + newline
        assert valid(following)
        if keyword == "initial":
            reducer, = descendants(root, "reduce_stmt")
            assert reducer.child_by_field_name("initial").text == b" Seed."
        else:
            assert root.has_error
        previous = source


@pytest.mark.parametrize("statement", [
    "reduce using merge:\n    seed: Unexpected initializer.",
    "reduce using merge:\n    initial",
    "reduce using merge:\n    initial Seed.",
    "reduce using merge:\n    initial:",
    "reduce using merge:\n    initial: Seed.\n    initial: Duplicate.",
    "reduce:\n    initial: Missing reducer.",
    "reduce:\n    Merge.\n    initial Seed.",
    "reduce:\n    Merge.\n    initial:",
    "initial: Orphaned.",
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_invalid_initializer_recovery_preserves_following_declarations(statement, newline):
    source = (f"flow first:\n  {statement}\n  run after\n"
              "## Following.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert not valid(root), root
    assert [node.child_by_field_name("name").text for node in declarations(root)] == [b"first", b"next"]
    assert root.named_children[-2].type == "item_doc"


def test_initial_keyword_highlighting_respects_text_contexts():
    root = parse("flow work:\n  reduce:\n    Merge.\n      initial: Literal.\n"
                 "    initial: Seed # literal.\n  run next\n")
    assert valid(root), root
    language = Language(tree_sitter_toolang.language())
    captures = QueryCursor(Query(language, tree_sitter_toolang.HIGHLIGHTS_QUERY)).captures(root)
    keywords = [node for node in captures["keyword"] if node.text == b"initial"]
    assert len(keywords) == 1
    statement, = descendants(root, "reduce_stmt")
    assert statement.child_by_field_name("initial").text == b" Seed # literal."


@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_initializer_edits_match_fresh_parses(newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for clause in [b"Merge.", b"initial: Seed.", b"initial", b"initial:",
                   b"initial: Seed.\n    initial: Duplicate.", b"initial_value: Literal.",
                   b"initial:\n      Seed # literal.", b"initial: Final."]:
        current = (b"flow work:\n  reduce:\n    Merge.\n    " + clause +
                   b"\n  run after\n## Following.\nflow next:\n  pass\n").replace(b"\n", newline)
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node)
        previous = current


def test_public_statement_names_and_fields_use_the_same_abbreviation():
    metadata = json.loads((Path(__file__).parents[1] / "src/node-types.json").read_text())
    schema = {node["type"]: node for node in metadata if node["named"]}
    assert set(schema["flow_body"]["fields"]) == {"directive", "stmt"}
    assert set(schema["let_stmt"]["fields"]) == {"local", "stmt", "value"}
    assert set(schema["reduce_stmt"]["fields"]) == {"initial", "target"}
    assert schema["flow_body"]["fields"]["stmt"]["multiple"]
    assert schema["repeat_body"]["fields"]["stmt"]["multiple"]
    assert schema["let_stmt"]["fields"]["stmt"]["multiple"] is False
    assert schema["reduce_stmt"]["fields"]["initial"]["types"] == [{"type": "content", "named": True}]
    assert "invalid_missing_stmt" in schema
