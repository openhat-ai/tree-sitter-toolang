# tree-sitter-toolang

Tree-sitter parser for [Toolang](https://github.com/openhat-ai/toolang) `.too`
files, with Python and Rust bindings and editor queries.

## Python

```python
from tree_sitter import Language, Parser
import tree_sitter_toolang

parser = Parser(Language(tree_sitter_toolang.language()))
tree = parser.parse(b"flow hello:\n  run: Hello.\n")
```

The package exposes `HIGHLIGHTS_QUERY`, `INJECTIONS_QUERY`, `INDENTS_QUERY`,
`OUTLINE_QUERY`, and `TAGS_QUERY` as query strings.

## Rust

```rust
let mut parser = tree_sitter::Parser::new();
parser.set_language(&tree_sitter_toolang::LANGUAGE.into())?;
let tree = parser.parse("flow hello:\n  run: Hello.\n", None).unwrap();
```

## Development

Development requires Node.js, a C compiler, Python, and Rust. Run these checks
from a configured checkout:

```bash
npm run check
.venv/bin/python -m pytest tests
.venv/bin/python -m unittest discover -s scripts -p 'test_*.py'
cargo test
```

See the [publishing guide](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/docs/publishing.md)
for release instructions.
