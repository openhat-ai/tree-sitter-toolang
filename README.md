# tree-sitter-toolang

Tree-sitter grammar for Toolang.

This repository publishes:

- the npm grammar package `tree-sitter-toolang`
- the Python extension package `tree-sitter-toolang`

## Install

### Python

```bash
python -m pip install tree-sitter-toolang tree-sitter
```

```python
import tree_sitter_toolang
from tree_sitter import Language, Parser

language = Language(tree_sitter_toolang.language())
parser = Parser(language)
tree = parser.parse(b"use skill a/b\n")
```

The Python package also exposes packaged query strings:
`HIGHLIGHTS_QUERY`, `INJECTIONS_QUERY`, `INDENTS_QUERY`, `OUTLINE_QUERY`, and
`TAGS_QUERY`.

### Tree-sitter CLI

Install `tree-sitter-toolang` or clone this repository, then make sure the
directory that contains `tree-sitter-toolang` is listed in your Tree-sitter
`parser-directories`.

```bash
tree-sitter init-config
tree-sitter dump-languages
tree-sitter parse path/to/file.too
tree-sitter highlight path/to/file.too
tree-sitter tags path/to/file.too
```

Installing the npm package alone does not make `tree-sitter dump-languages`
discover Toolang automatically. The package must still live under one of the
configured `parser-directories`, or the grammar path must be provided
explicitly.

## Development

Edit:

- `grammar.js`
- `queries/*.scm`
- `test/corpus/*.txt`

Regenerate and test:

```bash
npm install
npm run generate
npm test
npm run test:cli
python -m pip install -e .[tests]
pytest tests
```

## Publishing

Verify the npm package:

```bash
npm publish --dry-run
```

Verify the Python distributions:

```bash
python -m pip install --upgrade pip build twine
python -m build
python -m twine check dist/*
```

Release checklist:

1. Bump the version in repository metadata.
2. Confirm CI is green.
3. Publish to npm.
4. Upload the sdist and wheels to PyPI.
