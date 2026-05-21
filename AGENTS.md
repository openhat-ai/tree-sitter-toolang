# Agent Notes

## Language Policy

Write documentation, comments, commit messages, and code in English unless a
task explicitly asks for another language.

## Grammar Updates

- Keep `GRAMMAR.md`, `grammar.js`, generated parser artifacts, fixtures, and
  binding tests in sync.
- Regenerate parser artifacts with `npm run generate` after changing
  `grammar.js`.
- Add or update fixtures under `tests/fixtures` for new syntax forms.
- Run these checks before submitting grammar or parser changes:
  - `npm run check`
  - `.venv/bin/python -m pytest tests`
  - `cargo test`

## Version Bumps and Releases

- Bump the same version in:
  - `package.json`
  - `package-lock.json`
  - `pyproject.toml`
  - `Cargo.toml`
  - `Cargo.lock`
- The release workflow runs on pushed tags matching `v*`.
- After the version bump PR is merged, create and push a matching tag, for
  example `v0.0.13`, to publish npm, PyPI, and crates.io artifacts.
- The release workflow validates that the tag version matches package metadata.
