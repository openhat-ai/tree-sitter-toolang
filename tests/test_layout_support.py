"""Shared layout assertions, shipped with the sdist's test_*.py modules."""

from tree_sitter import Language, Parser

import tree_sitter_toolang


def parse(source):
    return (
        Parser(Language(tree_sitter_toolang.language()))
        .parse(source.encode())
        .root_node
    )


def descendants(node, kind):
    return [child for child in walk(node) if child.type == kind]


def walk(node):
    yield node
    for child in node.named_children:
        yield from walk(child)


def valid(root):
    return not root.has_error and not any(
        node.type.startswith("invalid_") for node in walk(root)
    )


def fingerprint(node):
    return (
        node.type,
        node.is_named,
        node.is_missing,
        node.has_error,
        node.start_byte,
        node.end_byte,
        node.start_point,
        node.end_point,
        tuple(
            (node.field_name_for_child(i), fingerprint(child))
            for i, child in enumerate(node.children)
        ),
    )


def point(source, offset):
    prefix = source[:offset]
    return (prefix.count(b"\n"), len(prefix.rsplit(b"\n", 1)[-1]))


def edit_tree(tree, previous, current):
    start = 0
    while (
        start < min(len(previous), len(current)) and previous[start] == current[start]
    ):
        start += 1
    old_end, new_end = len(previous), len(current)
    while (
        old_end > start
        and new_end > start
        and previous[old_end - 1] == current[new_end - 1]
    ):
        old_end -= 1
        new_end -= 1
    tree.edit(
        start_byte=start,
        old_end_byte=old_end,
        new_end_byte=new_end,
        start_point=point(previous, start),
        old_end_point=point(previous, old_end),
        new_end_point=point(current, new_end),
    )
