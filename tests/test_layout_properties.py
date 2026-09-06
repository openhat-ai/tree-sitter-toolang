"""Bounded, reproducible structural and incremental parser properties."""

from random import Random

import pytest
from tree_sitter import Language, Parser

import tree_sitter_toolang

from test_layout_support import descendants, edit_tree, fingerprint, parse, valid


def make_program(rng, depth=0):
    """Construct an expected tree before choosing any source layout."""
    result = []
    for index in range(rng.randint(1, 3)):
        if depth < 3 and (index == 0 or rng.random() < 0.4):
            count = rng.choice([None, 1, 2])
            condition = count is None or rng.choice([False, True])
            result.append(("repeat", count, condition, make_program(rng, depth + 1)))
        else:
            result.append(("run", f"step_{rng.randrange(1000000)}"))
    return result


def render_program(program, rng, tabs, indent=""):
    baseline = indent + ("\t" if tabs else " " * rng.choice([1, 2, 4]))
    lines = []
    for statement in program:
        # Trivia indentation is independent of the surrounding body baseline.
        for _ in range(rng.randrange(4)):
            prefix = " " * rng.randrange(12)
            lines.append(
                prefix + rng.choice(["", "# Note.", "## Step.", "##! Parent."])
            )
        if statement[0] == "run":
            lines.append(baseline + "run " + statement[1])
            continue
        _, count, condition, body = statement
        suffix = (
            "" if count is None else f" {count} {'time' if count == 1 else 'times'}"
        )
        lines.append(f"{baseline}repeat{suffix}:")
        children, child_baseline = render_program(body, rng, tabs, baseline)
        lines.extend(children)
        if condition:
            if rng.choice([False, True]):
                lines.extend(
                    [child_baseline + "until:", child_baseline + baseline + "Ready."]
                )
            else:
                lines.append(child_baseline + "until: Ready.")
        lines.extend([baseline + "# After the loop body.", ""])
    return lines, baseline


def program_shape(statements):
    result = []
    for statement in statements.named_children:
        if statement.type == "run_statement":
            result.append(
                ("run", statement.child_by_field_name("runnable").text.decode().strip())
            )
        elif statement.type == "repeat_statement":
            count = statement.child_by_field_name("count")
            condition = statement.child_by_field_name("until")
            if condition is not None:
                assert condition.type == "inline_agic_body"
                assert condition.child_by_field_name("body").text.strip() == b"Ready."
            body = statement.child_by_field_name("body")
            assert body.type == "statements"
            result.append(
                (
                    "repeat",
                    int(count.text) if count else None,
                    condition is not None,
                    program_shape(body),
                )
            )
        else:
            assert statement.type in {
                "comment_line",
                "doc_line",
                "parent_doc_line",
                "blank_line",
            }
    return result


@pytest.mark.parametrize("seed", range(64))
def test_generated_layout_preserves_the_independent_statement_tree(seed):
    rng = Random(seed)
    expected = make_program(rng)
    lines, _ = render_program(expected, rng, tabs=bool(seed % 2))
    lines = ["flow work:", *lines, "flow next:", "  pass"]
    if seed % 4 < 2:
        lines.append("")
    source = ("\r\n" if seed % 3 else "\n").join(lines)
    root = parse(source)
    assert valid(root), source
    flows = descendants(root, "flow")
    assert [flow.child_by_field_name("name").text for flow in flows] == [
        b"work",
        b"next",
    ]
    statements = descendants(flows[0].child_by_field_name("body"), "statements")[0]
    assert program_shape(statements) == expected, source
    assert not descendants(flows[1], "run_statement")


EDIT_SOURCES = [
    pytest.param(
        b"flow work:\n  repeat:\n    Review.\n    until: Ready.\n  run publish",
        id="repeat",
    ),
    pytest.param(
        b"service search:\n\ttransport = stdio\n\tSearch.\nflow work:\n  pass",
        id="metadata",
    ),
    pytest.param(
        "agic work:\r\n  context:\r\n    Résumé.\r\n  user: Review.".encode(),
        id="agic-unicode",
    ),
    pytest.param(
        b"flow:\n  repeat 1 time:\n    # Note.\n    run:\n      # Heading.\n      Evidence.\n  ## Publish.\n  run publish\n",
        id="text-comments",
    ),
    pytest.param(
        b"struct Result:\n\tvalue: Text\n\n## Details.\nprompt review:\n  description = Evidence.\n\n  Review.\n",
        id="declarations",
    ),
]
EDIT_FRAGMENTS = [
    b"",
    b" ",
    b"\t",
    b"\n",
    b"\r\n",
    b"#",
    b"##! Doc.\n",
    b"run:",
    b"until: Ready.",
    b"\nflow work:\n  pass",
    "Résumé".encode(),
]


@pytest.mark.parametrize("original", EDIT_SOURCES)
@pytest.mark.parametrize("seed", range(8))
def test_repeated_byte_edits_match_fresh_trees_and_recover(original, seed):
    rng = Random(seed)
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = original
    tree = parser.parse(previous)
    assert valid(tree.root_node)
    for step in range(750):
        # Byte edits deliberately include incomplete UTF-8 during typing.
        start = rng.randrange(len(previous) + 1)
        end = min(start + rng.randrange(5), len(previous))
        current = previous[:start] + rng.choice(EDIT_FRAGMENTS) + previous[end:]
        restore = step % 25 == 24
        if restore:
            current = original
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), (seed, step, previous, current)
        if restore:
            assert valid(tree.root_node)
        previous = current


@pytest.mark.parametrize("depth", [8, 64, 150])
@pytest.mark.parametrize("newline", [b"\n", b"\r\n"])
def test_deep_layout_state_survives_edits_and_pending_dedents(depth, newline):
    original = b"flow work:\n" + b"".join(
        b" " * level + b"repeat 1 time:\n" for level in range(1, depth + 1)
    )
    original += b" " * (depth + 1) + b"run first\n"
    original += b"# Pending dedents.\n" * 12 + b" run publish\n"
    original = original.replace(b"\n", newline)
    parser = Parser(Language(tree_sitter_toolang.language()))
    previous = b""
    tree = parser.parse(previous)
    for current, publish_depth in [
        (original, 0),
        (original.replace(b"run first", b"run changed"), 0),
        (original.replace(b" run publish", b" " * (depth + 1) + b"run publish"), depth),
        (original.replace(b"run first", b"run:"), None),
        (original, 0),
        (original.rstrip(b"\r\n"), 0),
        (original, 0),
    ]:
        edit_tree(tree, previous, current)
        tree = parser.parse(current, tree)
        assert fingerprint(tree.root_node) == fingerprint(
            parser.parse(current).root_node
        ), current
        if publish_depth is not None:
            assert valid(tree.root_node)
            assert len(descendants(tree.root_node, "repeat_statement")) == depth
            publish = descendants(tree.root_node, "run_statement")[-1]
            assert publish.child_by_field_name("runnable").text.strip() == b"publish"
            owner = publish.parent
            owners = 0
            while owner is not None:
                owners += owner.type == "repeat_statement"
                owner = owner.parent
            assert owners == publish_depth
        else:
            assert not valid(tree.root_node)
        previous = current
