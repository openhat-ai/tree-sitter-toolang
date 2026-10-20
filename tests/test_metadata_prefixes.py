"""Open property schemas and closed runnable directive prefixes."""

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


UNKNOWN_KEYS = ["modles", "answer", "models_extra", "trailing_", "models" + "_" * 80]
PROPERTIES = ["psyche", "skill", "service", "prompt", "chore"]


def following_body(kind):
    return "user: Continue." if kind == "agic" else "run after"


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("key", UNKNOWN_KEYS)
@pytest.mark.parametrize("operator", ["=", "+=", "-="])
@pytest.mark.parametrize("space", ["", "\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
@pytest.mark.parametrize("indent", ["  ", "\t"])
def test_unknown_assignment_heads_are_native_syntax_errors(kind, key, operator, space, newline, indent):
    source = (f"{kind} work:\n{indent}{key}{space}{operator}{space}Value.\n"
              f"{indent}{following_body(kind)}\nflow next:\n{indent}pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error, root
    assert descendants(root, "ERROR"), root
    assert not descendants(root, "directive"), root
    assert not any(key.encode() in node.text for node in descendants(root, "content")), root
    next_flow = descendants(root, "flow")[-1]
    assert next_flow.child_by_field_name("name").text == b"next"
    assert valid(next_flow), next_flow
    work = root.named_children[0]
    assert work.child_by_field_name("name").text == b"work"
    if kind == "agic":
        assert descendants(work, "message")[-1].child_by_field_name("role").text == b"user"
    else:
        assert descendants(work, "run_stmt")[-1].child_by_field_name("target").text == b"after"


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("ending", ["", "\n", "\r\n"])
@pytest.mark.parametrize("value", ["", " ", " # Missing.", " Value.", " ?literal"])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n"])
def test_unknown_directive_errors_do_not_require_a_value_or_final_newline(kind, value, ending, prefix):
    root = parse(f"{kind} work:\n{prefix}  modles ={value}{ending}")
    assert root.has_error, root
    assert [node.child_by_field_name("key").text for node in descendants(root, "directive")] == (
        [b"models"] if prefix else []
    )
    assert not descendants(root, "content")


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n", "  recall = none\n"])
@pytest.mark.parametrize("trivia", ["\n", "  # Note.\n", "  ## Note.\n\n", "  ## @param _ Input.\n"])
def test_trivia_keeps_directive_prefix_open_until_a_body_entry(kind, prefix, trivia):
    root = parse(f"{kind} work:\n{prefix}{trivia}  modles = fast\n"
                 f"  {following_body(kind)}\nflow next:\n  pass\n")
    assert root.has_error, root
    assert all(node.child_by_field_name("key").text != b"modles"
               for node in descendants(root, "directive"))
    assert not any(b"modles" in node.text for node in descendants(root, "content"))
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("kind", PROPERTIES)
@pytest.mark.parametrize("key", ["answer", "models", "run", "x1", "trailing_", "x" * 96])
@pytest.mark.parametrize("separator", ["=", " = ", "\t=\t"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_property_names_are_schema_independent_with_unchanged_fields(kind, key, separator, newline):
    line = f"  {key}{separator}yes  "
    source = f"{kind} example:\n{line}\nflow next:\n  pass\n".replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    owner = root.named_children[0]
    body = owner.child_by_field_name("body")
    prop, = body.children_by_field_name("property")
    assert prop.type == "property"
    name = prop.child_by_field_name("key")
    operator = prop.child_by_field_name("operator")
    value = prop.child_by_field_name("value")
    assert name.type == "identifier" and name.text == key.encode() and name.child_count == 0
    assert operator.type == "=" and not operator.is_named and operator.text == b"="
    assert value.type == "text" and value.text == line.partition("=")[2].encode()
    assert prop.text == line.encode() + newline.encode()
    assert body.child_by_field_name("content") is None
    assert not descendants(root, "directive")


@pytest.mark.parametrize("kind", PROPERTIES)
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_property_prefix_trivia_and_irreversible_literal_body(kind, newline):
    source = (f"{kind} example:\n  ## Before.\n  answer = yes\n\n"
              "  # Between.\n  unknown = value\n\n  Body begins.\n"
              "  models = literal # retained\n  answer = literal\n  # Heading\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    body = root.named_children[0].child_by_field_name("body")
    assert [p.child_by_field_name("key").text for p in body.children_by_field_name("property")] == [
        b"answer", b"unknown",
    ]
    content = body.child_by_field_name("content")
    assert [line.text.strip() for line in descendants(content, "text")] == [
        b"Body begins.", b"models = literal # retained", b"answer = literal", b"# Heading",
    ]
    assert not descendants(content, "property")
    assert not descendants(content, "plain_comment")
    assert len(descendants(root, "plain_comment")) == 1


@pytest.mark.parametrize("kind", PROPERTIES)
@pytest.mark.parametrize("operator", ["+=", "-="])
def test_only_plain_assignment_selects_a_property(kind, operator):
    root = parse(f"{kind} example:\n  answer {operator} yes\n  answer = literal\n")
    assert valid(root), root
    assert not descendants(root, "property")
    assert [line.text.strip() for line in descendants(root, "text")] == [
        f"answer {operator} yes".encode(), b"answer = literal",
    ]


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n\n  # Note.\n"])
@pytest.mark.parametrize("key", UNKNOWN_KEYS)
@pytest.mark.parametrize("operator", ["=", "+=", "-="])
def test_unknown_assignments_after_body_entry_remain_text(kind, prefix, key, operator):
    root = parse(f"{kind} work:\n{prefix}  {following_body(kind)}\n"
                 f"  {key} {operator} literal # retained\n")
    assert valid(root), root
    assert len(descendants(root, "directive")) == bool(prefix)
    assert any(line.text.strip() == f"{key} {operator} literal # retained".encode()
               for line in descendants(root, "text"))


@pytest.mark.parametrize("source", [
    "context note: modles = fast\n",
    "instruct rules:\n  modles = fast\n",
    "agic work:\n  user: modles = fast\n",
    "agic work:\n  user:\n    modles = fast\n",
    "flow work:\n  run: modles = fast\n",
    "flow work:\n  run:\n    modles = fast\n",
    "flow work:\n  let note = modles = fast\n",
    "flow work:\n  repeat:\n    modles = fast\n",
])
def test_explicit_text_and_nested_statement_scopes_do_not_open_directive_prefixes(source):
    root = parse(source)
    assert valid(root), root
    assert not descendants(root, "directive")
    assert any(b"modles = fast" in node.text for node in descendants(root, "content"))


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_incremental_key_operator_and_body_entry_edits_match_fresh_parses(kind, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for prefix, line, expected_valid in [
        ("", "models = fast", True),
        ("", "modles = fast", False),
        ("", "modles += fast", False),
        ("", "modles -= fast", False),
        ("", "modles + fast", True),
        ("", "modles =", False),
        ("", "models = fast", True),
        (f"  {following_body(kind)}\n", "modles = fast", True),
        ("  # Note.\n\n", "modles = fast", False),
        (f"  {following_body(kind)}\n", "modles = fast", True),
    ]:
        current = (f"{kind} work:\n{prefix}  {line}\n"
                   f"  {following_body(kind)}\nflow next:\n  pass\n").replace("\n", newline).encode()
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        root = tree.root_node
        assert fingerprint(root) == fingerprint(parser.parse(current).root_node), current
        assert valid(root) == expected_valid, root
        assert root.has_error == (not expected_valid), root
        assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"
        previous = current


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("prefix", ["", "  models = fast\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_bad_header_preserves_later_directives_and_body(kind, prefix, newline):
    source = (f"{kind} work:\n{prefix}  modles = fast\n  tools = none\n"
              f"  recall = none\n  {following_body(kind)}\n"
              "flow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert root.has_error, root
    assert [node.child_by_field_name("key").text for node in descendants(root, "directive")] == (
        ([b"models"] if prefix else []) + [b"tools", b"recall"]
    )
    assert descendants(root, "flow")[-1].child_by_field_name("name").text == b"next"
    assert not any(b"modles" in node.text for node in descendants(root, "content"))


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("line", [
    "Title = literal", "itemName = literal", "_name = literal", "123 = literal",
    "some-name = literal", "obj.field = literal", "answer + = literal",
    "answer - = literal", "answer: literal",
])
def test_only_complete_identifier_assignment_heads_are_reserved(kind, line):
    root = parse(f"{kind} work:\n  {line}\n  {following_body(kind)}\n")
    assert valid(root), root
    assert not descendants(root, "directive")
    assert any(node.text.strip() == line.encode() for node in descendants(root, "text"))


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("key", ["run", "pass", "user", "flow", "let", "default", "none"])
def test_unknown_directive_keys_include_other_keyword_spellings(kind, key):
    root = parse(f"{kind} work:\n  {key} = Value.\n  {following_body(kind)}\n")
    assert root.has_error, root
    assert not descendants(root, "directive")


@pytest.mark.parametrize("kind", ["agic", "flow"])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_incremental_prefix_mutations_preserve_scanner_layout(kind, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    source = (f"{kind} work:\n  modles = fast\n  {following_body(kind)}\n"
              "flow next:\n  pass\n").encode().replace(b"\n", newline)
    previous = source
    tree = parser.parse(source)
    for offset in range(len(source)):
        for insertion in [b" ", b"\n", b"=", b""]:
            current = source[:offset] + insertion + source[offset + (not insertion):]
            edit_tree(tree, previous, current)
            tree = parser.parse(current, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(current).root_node), current
            edit_tree(tree, current, source)
            tree = parser.parse(source, tree)
            assert fingerprint(tree.root_node) == fingerprint(parser.parse(source).root_node)
            previous = source
