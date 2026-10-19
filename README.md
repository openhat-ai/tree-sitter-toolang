# tree-sitter-toolang

Tree-sitter grammar for Toolang `.too` source files, with Python and Rust
bindings and queries for highlighting, indentation, outlines, tags, and injections.
The npm package supplies grammar source for Tree-sitter tooling; it does not
provide a JavaScript parser binding.

- [Grammar and CST reference](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md)
- [Generated grammar implementation reference](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.ebnf)
- [Changelog and migration notes](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/CHANGELOG.md)
- [Publishing guide](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/docs/publishing.md)

The repository reference includes unreleased changes. Use the matching Git tag
when integrating a published package. Execution, validation, and formatting
belong to the [Toolang runtime](https://github.com/openhat-ai/toolang).

## Install

### Python

Current source requires Python 3.11 or newer. Install the grammar and its
optional Tree-sitter parser dependency together:

```bash
python -m pip install 'tree-sitter-toolang[core]'
```

```python
from tree_sitter import Language, Parser
import tree_sitter_toolang

parser = Parser(Language(tree_sitter_toolang.language()))
tree = parser.parse(b"flow hello:\n  run: Hello.\n")
```

The package exposes `HIGHLIGHTS_QUERY`, `INJECTIONS_QUERY`, `INDENTS_QUERY`,
`OUTLINE_QUERY`, and `TAGS_QUERY` as query strings. Before lowering or executing
source, check both native errors and diagnostic nodes as described in the
[validity contract](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/GRAMMAR.md#validity-and-recovery).

The latest tagged prerelease is `0.4.0-alpha.4`. Select it explicitly with
`python -m pip install 'tree-sitter-toolang[core]==0.4.0a4'` or
`npm install tree-sitter-toolang@0.4.0-alpha.4`.

### Tree-sitter CLI

Clone this repository or install the npm grammar package:

```bash
npm install tree-sitter-toolang
tree-sitter init-config
```

Add the **parent directory** containing `tree-sitter-toolang` to the generated
configuration's `parser-directories` list. Installing the npm package alone
does not register the language. With Tree-sitter CLI installed, verify discovery
and parse a source file:

```bash
tree-sitter dump-languages
tree-sitter parse path/to/file.too
tree-sitter highlight path/to/file.too
tree-sitter tags path/to/file.too
```

### Rust

```toml
[dependencies]
tree-sitter = "0.25"
tree-sitter-toolang = "0.4.0-alpha.4"
```

```rust
let mut parser = tree_sitter::Parser::new();
parser.set_language(&tree_sitter_toolang::LANGUAGE.into())?;
let tree = parser.parse("flow hello:\n  run: Hello.\n", None).unwrap();
```

## Development

From a repository checkout, install Node.js tooling, a C compiler, Python 3.11+
and Rust, then run:

```bash
npm ci
python -m venv .venv
.venv/bin/python -m pip install -e '.[tests]'

npm run check
.venv/bin/python -m pytest tests
.venv/bin/python -m unittest discover -s scripts -p 'test_*.py'
cargo test
```

Edit `grammar.js`, `keywords.js`, and `src/scanner.c`; keep queries, corpus
cases, fixtures, binding tests, and `GRAMMAR.md` aligned. `npm run generate`
refreshes parser artifacts, keyword tables, and `GRAMMAR.ebnf`. Commit those
generated files; do not edit them manually. `npm run check` runs generation,
EBNF converter tests, corpus tests, and CLI/query checks. CI also checks for
stale generated output.

Use `npm run generate:ebnf` to regenerate only the annotated reference from
`src/grammar.json`, or `npm run check:ebnf` to check it without writing.
Historical definitions are under `docs/plans/`; the grammar reference describes
the current contract. Follow the
[publishing guide](https://github.com/openhat-ai/tree-sitter-toolang/blob/main/docs/publishing.md)
when preparing a release.
