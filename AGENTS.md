# tree-sitter-toolang

This repository defines and publishes the Tree-sitter grammar for Toolang.

## Work Types

Classify the request as a work type before starting. If no specific type clearly
applies, raise the ambiguity and ask the human before proceeding.

- **Feature definition:** inspect current behavior, discuss scope and tradeoffs,
  then write a decision-complete `docs/plans/<feature>.md`. Include goal and
  success criteria, scope, design touchpoints, likely files, acceptance tests,
  risks, and open questions. Do not implement.
- **Feature implementation:** require an approved definition, implement only
  its scope, and add its acceptance tests. If approval or the definition is
  missing, return to feature definition.
- **Bug fix:** reproduce first, analyze plausible causes, verify the most likely
  cause, apply the minimal root-cause fix, and add a regression test.
- **Refactor:** preserve parsing behavior; keep the diff structural.
- **Test improvement:** change tests only; keep the default suite offline and
  deterministic.
- **Documentation:** verify current behavior against the grammar and generated
  parser, then update documentation without changing parsing behavior.

## Boundaries

- Never commit secrets or `.env`; do not edit `archive/`, `dist/`, or `scratch/`.
- When scope names files, do not change or include any other file.
- Humans own scope, risk, approval, and merge decisions.
- Treat `grammar.js` as the authored grammar source. Regenerate parser artifacts
  instead of editing them by hand.
- Keep grammar rules, public node names, fields, aliases, queries, fixtures, and
  bindings aligned. Preserve public syntax unless the approved scope changes it.
- Keep lexical rules narrow and explicit. Resolve ambiguity in the grammar
  rather than relying on consumer-specific recovery behavior.

## Structure

- `grammar.js`: authored Tree-sitter grammar.
- `GRAMMAR.md`: human-readable syntax and node reference.
- `src/grammar.json`, `src/node-types.json`, and `src/parser.c`: generated parser
  artifacts committed to the repository.
- `queries/`: highlighting, indentation, outline, tag, and injection queries.
- `test/corpus/`: Tree-sitter corpus cases and expected syntax trees.
- `tests/fixtures/` and `tests/`: complete-source fixtures and binding tests.
- `bindings/`: language bindings and package entry points.
- `docs/plans/`: approved and proposed feature definitions.

## Convention

- Write code, documentation, comments, commit messages, and PR text in English.
- Keep plans and documentation concise and decision-complete. Include only the
  decisions, acceptance criteria, risks, examples, and implementation
  touchpoints needed to execute the work.
- Use semantic commit messages and PR titles; open ready PRs by default.
- Use the GitHub CLI (`gh`) for GitHub operations; never use the GitHub App.
- Always create or reuse a dedicated Git worktree for repository changes; never
  create a work branch directly in the primary checkout.
- Before final handoff, fetch and rebase PR branches onto the latest
  `origin/main`, rerun verification, and push rebased history with
  `--force-with-lease`.
- Resolve every pull request review thread before final handoff.
- Keep diffs minimal, composable, and limited to one concern.
- Prefer simple, explicit grammar rules over unnecessary precedence,
  conflicts, hidden fallbacks, or compatibility aliases.

### Issue and Pull Request Titles

- Write issue titles as concise, outcome-oriented English sentences. Do not use
  semantic prefixes such as `feat:` or `fix:` in issue titles.
- Use an opening verb that normally signals whether the outcome requires a PR:
  - Repository change: `Define`, `Implement`, `Add`, `Fix`, `Change`, `Remove`,
    `Refactor`, `Cover`, `Test`, `Document`, `Clarify`, `Upgrade`, or `Configure`.
  - No repository change by default: `Investigate`, `Reproduce`, `Evaluate`,
    `Compare`, `Discuss`, `Decide`, `Review`, `Audit`, `Track`, or `Coordinate`.
- Avoid ambiguous titles such as `Improve ...`, `Prepare ...`, or `Work on ...`.
  Do not combine investigation and implementation in one title.
- `Define <capability or behavior>` is a feature-definition issue. It produces a
  decision-complete plan under `docs/plans/` and a PR such as
  `docs(plans): define readable flow statements`.
- `Implement <capability or behavior>` is a feature-implementation issue. Its
  body links the approved plan and identifies the implemented scope and
  acceptance criteria.
- Title PRs in semantic `type(scope): summary` form. Select the type from the
  delivered change.

## Grammar Updates

- Keep `GRAMMAR.md`, `grammar.js`, generated parser artifacts, fixtures, corpus
  cases, queries, and binding tests in sync.
- Regenerate parser artifacts with `npm run generate` after changing
  `grammar.js`.
- Add or update fixtures under `tests/fixtures` for new syntax forms.
- Do not include a package version bump in a grammar feature PR. Release changes
  remain a separate concern.

## Verification

Run the default verification before every commit:

```sh
npm run check
.venv/bin/python -m pytest tests
cargo test
```

## Version Bumps and Releases

- Bump the same version in `package.json`, `package-lock.json`, `pyproject.toml`,
  `Cargo.toml`, and `Cargo.lock`.
- The release workflow runs on pushed tags matching `v*`.
- After the version bump PR is merged, create and push a matching tag to publish
  npm, PyPI, and crates.io artifacts.
- The release workflow validates that the tag version matches package metadata.

## Definition of Done

Work is done only when the selected work type meets its criteria:

- **Feature definition:** the decision-complete plan exists, a human explicitly
  confirms it, and no implementation code was shipped.
- **Feature implementation:** behavior matches the approved definition, its
  acceptance checks pass, generated artifacts are current, and the default
  verification passes.
- **Bug fix:** the reproduction fails before the fix and passes after it, a
  regression test exists, and the default verification passes.
- **Refactor:** the diff is structural only and the default verification passes.
- **Test improvement:** new tests pass, parsing behavior is unchanged, and the
  default offline suite passes.
- **Documentation:** the requested docs are accurate, internally consistent,
  verified against the grammar, and contain no parsing behavior changes.

On failure, fix the root cause and rerun the checks. Never claim completion with
red checks.
