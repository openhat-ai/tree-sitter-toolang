"""Toolang grammar for tree-sitter."""

from pathlib import Path as _Path
from importlib.resources import files as _files

from ._binding import language

_QUERY_FILES = {
    "HIGHLIGHTS_QUERY": "highlights.scm",
    "INJECTIONS_QUERY": "injections.scm",
    "INDENTS_QUERY": "indents.scm",
    "OUTLINE_QUERY": "outline.scm",
    "TAGS_QUERY": "tags.scm",
}

__all__ = ["language", *_QUERY_FILES]


def _get_query(name: str) -> str:
    filename = _QUERY_FILES[name]
    try:
        query = _files(f"{__package__}.queries") / filename
        contents = query.read_text()
    except ModuleNotFoundError:
        query = _Path(__file__).resolve().parents[3] / "queries" / filename
        contents = query.read_text()
    globals()[name] = contents
    return contents


def __getattr__(name: str) -> str:
    if name in _QUERY_FILES:
        return _get_query(name)
    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")


def __dir__() -> list[str]:
    return sorted(
        __all__
        + [
            "__all__",
            "__builtins__",
            "__cached__",
            "__doc__",
            "__file__",
            "__loader__",
            "__name__",
            "__package__",
            "__path__",
            "__spec__",
        ]
    )
