# Publishing

For maintainers releasing the npm, Python and Rust packages. The
[release workflow](../.github/workflows/release.yml) runs when a `v*` tag is
pushed. This guide describes that workflow; routine development checks are in
[README](../README.md#development).

## Prerequisites

- npm and PyPI trusted publishers must match this repository's release workflow
  and the `npm` and `pypi` GitHub environments. Their jobs use OIDC permissions.
- Configure the repository secret `CRATES_IO_TOKEN` for crates.io. Without it,
  the workflow skips Rust publication; a successful workflow alone does not
  establish that all three packages were published.
- Use a reviewed release commit with passing checks and permission to push tags.

## Prepare the release

1. Update the version in `package.json`, both package entries in
   `package-lock.json`, `pyproject.toml`, `Cargo.toml`, the package entry in
   `Cargo.lock`, and `tree-sitter.json` metadata. Update versioned README examples.
2. Finalize verified entries in [CHANGELOG](../CHANGELOG.md): move `Unreleased`
   changes under the actual version and date, keep `Unreleased` first, and
   update comparison links. Describe compatibility impact and migration for
   breaking syntax or CST changes. Use these entries for any GitHub Release
   notes; the workflow does not create a GitHub Release.
3. Run development checks and inspect package contents:

   ```bash
   npm run check
   .venv/bin/python -m pytest tests
   cargo test
   npm run pack:dry-run
   cargo publish --dry-run
   ```

   To validate Python distributions locally:

   ```bash
   .venv/bin/python -m pip install --upgrade build twine
   .venv/bin/python -m build
   .venv/bin/python -m twine check dist/*
   ```

   Local Python builds validate the current platform; CI builds the release
   wheels across Linux, macOS and Windows. Confirm the intended generated
   artifacts are committed before tagging.
4. Merge the release PR, confirm main's checks, and create and push a matching
   `vVERSION` tag on the reviewed release commit. Keep package publication in
   the tag-triggered workflow.

The workflow checks that the tag agrees with `package.json`, `pyproject.toml`
and `Cargo.toml`. It does not check the lockfile or `tree-sitter.json` versions;
review those explicitly during preparation.

## Publication and verification

The workflow queries each registry and skips publication when that version
already exists there:

| Package | Publication path |
| --- | --- |
| npm | Run grammar and package-content checks, then `npm publish --provenance`. |
| PyPI | Build and test wheels on Linux, macOS and Windows, build an sdist, then publish collected distributions through the trusted publisher. |
| crates.io | Run `cargo publish` with `CRATES_IO_TOKEN`, or report a skip when the secret is absent. |

After the run, verify the intended version and artifacts in
[npm](https://www.npmjs.com/package/tree-sitter-toolang),
[PyPI](https://pypi.org/project/tree-sitter-toolang/) and
[crates.io](https://crates.io/crates/tree-sitter-toolang). Check skipped jobs as
well as failures, then test installation and a minimal parse with the published
packages. Tagging alone does not confirm publication.

For a partial publication, inspect the failed job before rerunning it. Existing
registry versions are skipped; keep the release tag attached to the same commit.
