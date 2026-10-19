"""Public CST ownership, role fields, and layout boundaries for 0.4.0."""

import json
from pathlib import Path

import pytest
from tree_sitter import Language, Parser, Query, QueryCursor

import tree_sitter_toolang

from test_layout_support import declarations, descendants, edit_tree, fingerprint, parse, valid, walk


ROOT = Path(__file__).parents[1]
EMPTY_HEADERS = [
    (f"{kind} first:", kind, "body", False)
    for kind in ["psyche", "skill", "service", "prompt", "chore"]
] + [
    ("struct First:", "struct", "body", True),
    ("agic first:", "agic", "body", True),
    ("flow first:", "flow", "body", True),
    ("context first:", "context", "content", True),
    ("instruct first:", "instruct", "content", True),
] + [
    (f"flow first:\n  {head}", owner, field, True)
    for head, owner, field in [
        ("repeat:", "repeat_statement", "body"),
        ("run:", "inline_agic", "content"),
        ("async run:", "inline_agic", "content"),
        ("exec:", "inline_agic", "content"),
        ("spawn:", "inline_agic", "content"),
        ("seek agent:", "inline_agic", "content"),
        ("generate 2:", "inline_agic", "content"),
        ("map:", "inline_agic", "content"),
        ("reduce:", "inline_agic", "content"),
        ("reduce using worker:", "reduce_statement", None),
        ("keep if:", "inline_agic", "content"),
        ("drop if:", "inline_agic", "content"),
        ("sort ascending by:", "inline_agic", "content"),
        ("ask:", "ask_statement", "content"),
        ("let note =", "let_statement", "value"),
        ("repeat:\n    run worker\n    until:", "inline_agic", "content"),
    ]
] + [("agic first:\n  user:", "message", "content", True)]


@pytest.mark.parametrize("header,owner_kind,field,required", EMPTY_HEADERS)
@pytest.mark.parametrize("trivia", ["", "\n", "# Outside.\n\n"])
@pytest.mark.parametrize("documentation", ["## Next docs.", "## @param topic Input.", "#@ Program docs."])
@pytest.mark.parametrize("ending", ["", "\nflow next:\n  pass\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_empty_constructs_do_not_own_following_program_documentation(
    header, owner_kind, field, required, trivia, documentation, ending, newline
):
    source = (header + "\n" + trivia + documentation + ending).replace("\n", newline)
    root = parse(source)
    assert not root.has_error, root
    assert valid(root) == (not required), root
    doc, = [n for n in root.named_children if n.type in {"item_doc", "param_doc", "program_doc"}]
    assert doc.text == (documentation + (newline if ending else "")).encode()
    first = declarations(root)[0]
    assert first.end_byte <= doc.start_byte
    if not required:
        assert first.child_by_field_name("body") is None
    else:
        owner = descendants(first, owner_kind)[-1]
        value = owner.child_by_field_name(field) if field else owner
        diagnostic, = [n for n in walk(value) if n.type.startswith("invalid_missing_")]
        assert diagnostic.start_byte == diagnostic.end_byte <= doc.start_byte
    if ending:
        assert declarations(root)[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("header,entry", [
    *[(f"{kind} first:", "answer = yes\n  Body.") for kind in ["psyche", "skill", "service", "prompt", "chore"]],
    ("struct First:", "value: Text"),
    ("agic first:", "models = fast\n  user: Body."),
    ("flow first:", "models = fast\n  run worker"),
])
@pytest.mark.parametrize("prefix", ["", "\n", "# Preface.\n\n", "## Preface.\n"])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_body_ranges_exclude_header_endings_and_leading_trivia(header, entry, prefix, newline):
    source = (header + " # Header.\n" + prefix + "  " + entry + "\n## Next.\nflow next:\n  pass\n").replace("\n", newline)
    root = parse(source)
    assert valid(root), root
    owner = declarations(root)[0]
    body = owner.child_by_field_name("body")
    expected = ("  " + entry + "\n").replace("\n", newline).encode()
    assert body.text == expected
    assert body.start_byte == source.encode().index(expected)
    assert all(n.start_byte >= body.start_byte for n in walk(body))
    header_comment, = descendants(owner, "plain_comment")[:1]
    assert header_comment.text == b"# Header."
    assert header_comment.parent == owner
    if "#" in prefix:
        preface = [n for n in owner.named_children if n.type in {"plain_comment", "item_doc"}][-1]
        assert preface.end_byte <= body.start_byte
    assert root.named_children[-2].type == "item_doc"


@pytest.mark.parametrize("operation", [
    "run", "async run", "exec", "spawn", "seek agent", "generate 2",
    "map", "reduce", "keep", "drop", "sort ascending", "until",
])
@pytest.mark.parametrize("inline", [False, True])
def test_call_targets_share_one_field_without_losing_independent_roles(operation, inline):
    connector = " using" if operation in {"generate 2", "map", "reduce"} and not inline else ""
    connector = " if" if operation in {"keep", "drop"} else connector
    connector = " by" if operation == "sort ascending" else connector
    text = operation + connector + (": Body." if inline else " worker")
    if operation == "until":
        source = "flow first:\n  repeat:\n    run worker\n    " + text + "\n"
        owner_kind = "until_clause"
    else:
        source = "flow first:\n  " + text + "\n"
        owner_kind = operation.split()[0] + "_statement"
        if operation == "async run":
            owner_kind = "run_statement"
    root = parse(source)
    assert valid(root), root
    owner = descendants(root, owner_kind)[-1]
    target = owner.child_by_field_name("target")
    assert target.type == ("inline_agic" if inline else "runnable_name")
    assert target.text == (b": Body." + b"\n" if inline else b"worker")
    assert owner.child_by_field_name("runnable") is None
    assert owner.child_by_field_name("agic") is None
    if operation == "seek agent":
        assert owner.child_by_field_name("agent").type == "agent_name"
    if operation == "async run":
        assert owner.child_by_field_name("async").type == "async_keyword"


@pytest.mark.parametrize("key,value,operators", [
    *[(key, "fast", ["=", "+=", "-="]) for key in ["models", "tools", "skills", "services", "psyches", "prompts"]],
    ("hands", "worker", ["="]), ("handoffs", "worker", ["="]),
    ("recall", "far, near", ["="]), ("lanes", "1", ["="]),
    ("instruct", "named", ["="]), ("context", "default", ["="]),
])
@pytest.mark.parametrize("operator", ["=", "+=", "-="])
def test_directive_leaf_types_do_not_widen_operator_grammar(key, value, operators, operator):
    root = parse(f"flow first:\n  {key} {operator} {value}\n  run worker\n")
    assert valid(root) == (operator in operators), root
    if operator in operators:
        directive, = descendants(root, "directive")
        assert directive.child_by_field_name("key").type == "directive_key"
        assert directive.child_by_field_name("operator").type == "directive_operator"
        assert directive.child_by_field_name("operator").text == operator.encode()
        if key in {"instruct", "context"}:
            leaf = directive.child_by_field_name("value")
            assert leaf.type == ("default_keyword" if value == "default" else "identifier")
            assert not leaf.children


def test_public_metadata_exposes_roles_without_layout_or_forwarding_nodes():
    nodes = json.loads((ROOT / "src/node-types.json").read_text())
    names = [n["type"] for n in nodes if n["named"]]
    assert len(names) == len(set(names))
    assert not {"line_end", "text_ref", "inline_agic_body", "invalid_flow_reserved_statement",
                "invalid_agic_reserved_message", "kebab_name"}.intersection(names)
    assert not any(name.startswith("flow_") and name.endswith("_keyword") and name != "flow_keyword" for name in names)
    assert {"invalid_flow_statement", "invalid_run_target", "invalid_agic_message",
            "runnable_name", "agent_name", "local_name", "handle_name"} <= set(names)
    rules = json.loads((ROOT / "src/grammar.json").read_text())["rules"]
    assert "kebab_name" not in rules
    assert "_repeat_statements" not in rules
    reduce = next(node for node in nodes if node["type"] == "reduce_statement")
    assert reduce["fields"]["target"] == {
        "multiple": False, "required": True,
        "types": [{"type": "inline_agic", "named": True}, {"type": "runnable_name", "named": True}],
    }


@pytest.mark.parametrize("kind", ["psyche", "skill", "service", "prompt", "chore", "struct", "agic", "flow"])
def test_declaration_keywords_and_with_categories_keep_distinct_roles(kind):
    name = "First" if kind == "struct" else "first"
    entry = "value: Text" if kind == "struct" else "pass" if kind in {"agic", "flow"} else "Body."
    root = parse(f"with skill shared\n{kind} {name}:\n  {entry}\n")
    assert valid(root), root
    reference, owner = declarations(root)
    assert reference.child_by_field_name("keyword").type == "with_keyword"
    assert reference.child_by_field_name("kind").type == "cap_kind"
    assert reference.child_by_field_name("kind").text == b"skill"
    assert owner.child_by_field_name("keyword").type == kind + "_keyword"
    assert owner.child_by_field_name("keyword").text == kind.encode()
    assert owner.child_by_field_name("kind") is None


@pytest.mark.parametrize("statement,kind,fragment", [
    ("let result run worker", "invalid_flow_statement", "let result run worker"),
    ("let exec worker", "invalid_flow_statement", "let exec worker"),
    ("until worker", "invalid_flow_statement", "until worker"),
    ("async run worker extra", "invalid_run_target", " worker extra"),
    ("let result = async run worker extra", "invalid_run_target", " worker extra"),
])
@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_diagnostic_names_distinguish_complete_statements_from_target_fragments(statement, kind, fragment, newline):
    root = parse((f"flow first:\n  {statement}\n  run after\nflow next:\n  pass\n").replace("\n", newline))
    assert not valid(root), root
    diagnostic, = descendants(root, kind)
    assert diagnostic.text == (fragment + newline).encode()
    if kind == "invalid_run_target":
        assert diagnostic.parent.type == "run_statement"
        assert diagnostic.parent.child_by_field_name("async").text == b"async"
    else:
        assert diagnostic.parent.type == "flow_body"
    assert descendants(root, "run_statement")[-1].child_by_field_name("target").text == b"after"
    assert declarations(root)[-1].child_by_field_name("name").text == b"next"


@pytest.mark.parametrize("newline", ["\n", "\r\n"])
def test_invalid_agic_message_remains_a_public_local_diagnostic(newline):
    root = parse(("agic first:\n  user missing colon\n  user: Following.\nflow next:\n  pass\n").replace("\n", newline))
    diagnostic, = descendants(root, "invalid_agic_message")
    assert diagnostic.text == ("user missing colon" + newline).encode()
    assert diagnostic.parent.type == "message"
    assert descendants(root, "message")[-1].child_by_field_name("content").text == b" Following."


@pytest.mark.parametrize("target", [": Ready.", ":\n      Ready."])
def test_until_alias_keeps_the_return_annotation_restriction(target):
    root = parse("flow first:\n  repeat:\n    run worker\n    until" + target + "\n")
    assert valid(root), root
    clause, = descendants(root, "until_clause")
    assert clause.child_by_field_name("target").type == "inline_agic"
    assert clause.child_by_field_name("target").child_by_field_name("return") is None
    for annotation in [" -> Boolean", " -> Text"]:
        assert not valid(parse("flow first:\n  repeat:\n    run worker\n    until" + annotation + target + "\n"))
        assert valid(parse("flow first:\n  run" + annotation + target.replace("      ", "    ") + "\n"))


@pytest.mark.parametrize("header", ["prompt first:", "flow first:", "context first:", "flow first:\n  run:"])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_body_and_documentation_ownership_is_stable_across_incremental_edits(header, newline):
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    indent = "    " if "\n" in header else "  "
    body = "run worker" if header == "flow first:" else "Body."
    for entry in ["", "\n", indent + body + "\n", "# Preface.\n" + indent + body + "\n", "", indent + "# Literal.\n"]:
        source = (header + "\n" + entry + "## Next docs.\nflow next:\n  pass").encode().replace(b"\n", newline)
        edit_tree(tree, previous, source)
        tree = parser.parse(source, tree)
        assert fingerprint(tree.root_node) == fingerprint(parser.parse(source).root_node)
        doc, = [n for n in tree.root_node.named_children if n.type == "item_doc"]
        assert doc.text == b"## Next docs." + newline
        previous = source


def test_queries_capture_directive_roles_and_block_headers_after_flattening():
    language = Language(tree_sitter_toolang.language())
    source = "flow first:\n  instruct = named\n  context = default\n  run:\n    Body.\n  repeat:\n    run worker\n    until:\n      Done.\n"
    root = parse(source)
    assert valid(root), root
    queries = {p.stem: Query(language, p.read_text()) for p in (ROOT / "queries").glob("*.scm")}
    highlights = QueryCursor(queries["highlights"]).captures(root)
    assert b"named" in {n.text for n in highlights["constant"]}
    assert {b"instruct", b"context"} <= {n.text for n in highlights["property"]}
    indents = QueryCursor(queries["indents"]).captures(root)["indent"]
    assert len([n for n in indents if n.type == "inline_agic"]) == 2
    assert all(n.type != "line_end" for n in walk(root))
