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
    # Flat preorder plus child counts preserves the entire tree shape without
    # hitting Python 3.11's recursion limit when comparing deep nested tuples.
    records = []
    pending = [(node, None)]
    while pending:
        current, field = pending.pop()
        children = current.children
        records.append((
            field, current.type, current.is_named, current.is_missing,
            current.has_error, current.start_byte, current.end_byte,
            current.start_point, current.end_point, len(children),
        ))
        pending.extend((child, current.field_name_for_child(i))
                       for i, child in reversed(list(enumerate(children))))
    return tuple(records)


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


def declarations(root):
    kinds = {"with", "struct", "psyche", "skill", "service", "prompt",
             "task", "chore", "context", "instruct", "agic", "flow"}
    return [node for node in root.named_children if node.type in kinds]
