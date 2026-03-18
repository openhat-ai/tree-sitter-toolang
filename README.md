# tree-sitter-toolang

Tree-sitter grammar for Toolang.

## Source Of Truth

Edit these files in this repository only:

- `grammar.js`
- `queries/*.scm`
- `test/corpus/*.txt`

Treat generated files as build output:

- `src/parser.c`
- `src/grammar.json`
- `src/node-types.json`
- `tree-sitter-toolang.wasm`

The Zed extension consumes query files that are synced from this grammar repo.
Do not hand-edit the copies under `../zed-toolang/languages/toolang`.

## Workflow

1. Update `grammar.js` and, if needed, `queries/*.scm`.
2. Add or update corpus fixtures under `test/corpus/`.
3. Regenerate the parser:

```bash
npm install
npm run generate
```

4. Run parser tests:

```bash
npm test
```

5. From the sibling Zed repository, sync query files into the extension:

```bash
cd ../zed-toolang
./scripts/sync-tree-sitter-queries.sh
```

## Helpful Commands

```bash
npm run parse -- ../toolang/syntax.t
npm run highlight -- ../toolang/syntax.t
npm run check
```
