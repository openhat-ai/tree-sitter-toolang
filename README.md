# tree-sitter-toolang

Tree-sitter grammar for `.too` source, published as npm, Python and Rust
packages named `tree-sitter-toolang`.

- [Grammar and CST reference](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md)
- [Changelog](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/CHANGELOG.md)
- [Publishing guide](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/docs/publishing.md) for release maintainers

## Install and integrate

### Python

```bash
python -m pip install tree-sitter-toolang tree-sitter
```

```python
import tree_sitter_toolang
from tree_sitter import Language, Parser

parser = Parser(Language(tree_sitter_toolang.language()))
tree = parser.parse(b"with skill a/b\n")
```

The package also exposes `HIGHLIGHTS_QUERY`, `INJECTIONS_QUERY`, `INDENTS_QUERY`,
`OUTLINE_QUERY` and `TAGS_QUERY` strings. See the grammar reference for
[invalid syntax nodes](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md#notation);
producing a tree does not establish that the source is valid.

### Rust

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-toolang = "0.3.4"
```

```rust
let language = tree_sitter::Language::new(tree_sitter_toolang::LANGUAGE);
```

### Tree-sitter CLI

With the Tree-sitter CLI installed, install the npm grammar package or clone
this repository. Add the parent of the `tree-sitter-toolang` directory to the
CLI's `parser-directories` configuration:

```bash
tree-sitter init-config
tree-sitter dump-languages
tree-sitter parse path/to/file.too
tree-sitter highlight path/to/file.too
tree-sitter tags path/to/file.too
```

Installing the package alone does not configure CLI discovery.

## Development

`grammar.js` and `src/scanner.c` define parsing; `queries/` defines editor
queries. Regenerate `src/parser.c`, `src/grammar.json`, `src/node-types.json`
and `src/keywords.h` after grammar changes. Corpus cases live in `test/corpus/`;
complete-source fixtures and Python binding checks live in `tests/`.

```bash
npm ci
python -m venv .venv
.venv/bin/python -m pip install -e '.[tests]'

npm run check
.venv/bin/python -m pytest tests
cargo test
```

`npm run check` regenerates artifacts and runs corpus and CLI integration
checks. Keep generated changes with their source changes. Proposed and
historical definitions live in
[docs/plans](https://github.com/openhat-ai/tree-sitter-toolang/tree/main/docs/plans);
use GRAMMAR for the current contract.
