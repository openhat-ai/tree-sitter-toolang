# tree-sitter-toolang

Tree-sitter grammar for Toolang.

This repository publishes:

- the npm grammar package `tree-sitter-toolang`
- the Python extension package `tree-sitter-toolang`
- the Rust crate `tree-sitter-toolang`

## Install

### Python

Building from this branch requires Python 3.11 or newer. The published
`0.4.0a1` release still supports Python 3.10.

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
tree-sitter-toolang = "0.4.0-alpha.2"
```

```rust
let language = tree_sitter::Language::new(tree_sitter_toolang::LANGUAGE);
```

## Grammar

[GRAMMAR.md](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md)
documents the public Toolang syntax and CST contract.
`grammar.js` is the parser source of truth; generated artifacts live under
`src/`.

Version 0.4.0-alpha.2 adds named and inline `spawn` targets, including typed
inline targets and optional let bindings. See the
[spawn syntax notes](GRAMMAR.md#changes-in-040-alpha2). Execution and handle
semantics require matching Toolang runtime support.

Version 0.4.0-alpha.1 uses `run` in place of `scatter`/`gather`, renames
`storm`/`settle` to `generate`/`reduce`, and requires `using` only for named
collection targets. See the [migration notes](GRAMMAR.md#changes-in-040-alpha1).
These forms require a matching Toolang runtime release.

Install this prerelease explicitly with
`python -m pip install tree-sitter-toolang==0.4.0a2` or
`npm install tree-sitter-toolang@0.4.0-alpha.2`.

Version 0.3.4 adds named and inline `exec` statements in flows and repeats.
See the [Flow reference](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md#flow)
for syntax and CST fields.

Version 0.3.3 shares configuration directives between agics and flows, removes
the count from `scatter`, adds optional `from:` initializers to `settle`, and
adds `windowing N` to `repeat`. See the
[0.3.3 migration notes](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md#changes-in-033).

Documentation comments use `#@` for modules and `##` for items, including
`## @param NAME DESCRIPTION`. The legacy `##!` module marker remains accepted.
See [comments and documentation](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md#comments-and-documentation)
for syntax, CST fields, and the 0.3.2 node-name migration.

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
.venv/bin/python -m unittest discover -s scripts -p 'test_*.py'
cargo test
```

## Publishing

Trusted publishers are configured in GitHub Actions with
[release.yml](.github/workflows/release.yml).

Python wheels use the `cp311-abi3` tag for compatibility with Python 3.11 and
later. Both wheel and release workflows build Linux x86_64 and ARM64 wheels
on separate native runners, covering manylinux and musllinux. macOS universal2
and Windows AMD64 builds are also retained. Every wheel build runs the full
Python test suite.

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
3. Merge the version bump PR into `main`.
4. Create and push a matching tag such as `v0.4.0-alpha.1`.
5. GitHub Actions publishes npm and PyPI automatically.
6. GitHub Actions also publishes the Rust crate when `CRATES_IO_TOKEN` is set.

The release workflow skips npm, PyPI, or crates.io if that version already
exists on the registry. The git tag must match the package version.

Prereleases use `X.Y.Z-alpha.N`, `X.Y.Z-beta.N`, or `X.Y.Z-rc.N` consistently
in source metadata and tags. Python packaging normalizes these to `X.Y.ZaN`,
`X.Y.ZbN`, or `X.Y.ZrcN`; for example, `0.4.0-alpha.1` is published on PyPI as
`0.4.0a1`. npm prereleases use the `next` dist-tag; stable releases use `latest`.
