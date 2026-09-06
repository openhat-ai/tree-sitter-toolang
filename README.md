# tree-sitter-toolang

Tree-sitter grammar for Toolang.

This repository publishes:

- the npm grammar package `tree-sitter-toolang`
- the Python extension package `tree-sitter-toolang`
- the Rust crate `tree-sitter-toolang`

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
tree = parser.parse(b"with skill a/b\n")
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

### Rust

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-toolang = "0.3.1"
```

```rust
let language = tree_sitter::Language::new(tree_sitter_toolang::LANGUAGE);
```

## Grammar

[GRAMMAR.md](GRAMMAR.md) documents the public Toolang syntax and CST contract.
`grammar.js` is the parser source of truth; generated artifacts live under
`src/`.

## Development

Edit:

- `GRAMMAR.md`
- `grammar.js`
- `queries/*.scm`
- `test/corpus/*.txt`
- `tests/fixtures/*.too`
- `tests/*.py`

Regenerate and test:

```bash
npm ci
python -m venv .venv
.venv/bin/python -m pip install -e '.[tests]'

npm run check
.venv/bin/python -m pytest tests
cargo test
```

## Publishing

Trusted publishers are configured in GitHub Actions with
[release.yml](.github/workflows/release.yml).

To publish the Rust crate automatically, add the repository secret
`CRATES_IO_TOKEN`.

Verify the npm package locally:

```bash
npm publish --dry-run
```

Verify the Python distributions locally:

```bash
python -m pip install --upgrade pip build twine
python -m build
python -m twine check dist/*
```

Verify the Rust crate:

```bash
cargo publish --dry-run
```

Release checklist:

1. Bump the version in `package.json`, `package-lock.json`, `pyproject.toml`,
   `Cargo.toml`, `Cargo.lock`, and `tree-sitter.json`.
2. Confirm CI is green.
3. Push the version commit to `main`.
4. Create and push a matching tag such as `v0.3.1`.
5. GitHub Actions publishes npm and PyPI automatically.
6. GitHub Actions also publishes the Rust crate when `CRATES_IO_TOKEN` is set.

The release workflow skips npm, PyPI, or crates.io if that version already
exists on the registry. The git tag must match the package version.
