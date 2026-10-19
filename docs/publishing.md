# Publishing grammar packages

This guide is for release maintainers. Package metadata and
[release.yml](../.github/workflows/release.yml) define the publication contract;
[CHANGELOG.md](../CHANGELOG.md) is the user-facing change record.

## Prerequisites

- npm and PyPI trusted publishers must match the repository's GitHub Actions
  configuration. npm uses the `npm` environment; PyPI uses `pypi`.
- Set the repository secret `CRATES_IO_TOKEN` for automated crates.io publication.
  Without it, the Rust publication job skips publishing.
- Verify the grammar changes and downstream CST migration before choosing a
  release version. Parser publication does not upgrade the Toolang runtime.

## Validate packages

Run the [development checks](../README.md#development), then inspect package
contents and build metadata:

```bash
npm run pack:dry-run
python -m pip install --upgrade build twine
release_dir=$(mktemp -d)
python -m build --outdir "$release_dir"
python -m twine check "$release_dir"/*
cargo publish --dry-run
```

Check that source packages contain `grammar.js`, `keywords.js`, scanner sources,
the generated parser, keyword header, and queries. Python wheels include the
extension and query resources. README links use repository URLs so they also
work when rendered on package registries.

Python wheels use `cp311-abi3` for Python 3.11 and later. Both the
[wheel workflow](../.github/workflows/wheels.yml) and release workflow build
Linux x86_64 and ARM64 on separate native runners, covering manylinux and
musllinux. macOS universal2 and Windows AMD64 wheels are also built. Each wheel
runs the Python test suite.

## Prepare a release

1. Verify `Unreleased` against changes since the preceding published tag. Record
   author-visible syntax, public CST, query, compatibility, and important parser
   fixes, including breaking impact and migration. Omit internal-only changes.
2. Move those entries into a dated `CHANGELOG.md` section for the target version,
   keeping `Unreleased` above it. Verify the `YYYY-MM-DD` release date and update
   comparison links; the target tag may be pending publication. Reuse this entry
   for GitHub Release notes if creating a GitHub Release.
3. Set the same source version in `package.json`, `package-lock.json` (both the
   top-level and root-package entries), `pyproject.toml`, `Cargo.toml`,
   `Cargo.lock` (this crate's entry), and `tree-sitter.json` metadata.
4. Run all checks again and confirm CI is green. Open and merge the release PR.
5. Create and push the matching `vVERSION` tag on the merged release commit.
   Pushing the tag starts publication; do this only when publication is intended.
6. Verify the Release workflow and availability of the exact target version on
   npm, PyPI, and crates.io. Missing Rust credentials require a separate publish.

Do not include a version bump in a grammar feature PR. The current cleanup is
unreleased; preparing 0.4.0 is a separate release step.

## Version and workflow behavior

Stable source versions use `X.Y.Z`. Prereleases use `X.Y.Z-alpha.N`,
`X.Y.Z-beta.N`, or `X.Y.Z-rc.N` consistently in source metadata and Git tags.
[release_versions.py](../scripts/release_versions.py) maps them to Python
versions `X.Y.ZaN`, `X.Y.ZbN`, or `X.Y.ZrcN`. For example,
`0.4.0-alpha.4` becomes `0.4.0a4` on PyPI. npm prereleases use `next`;
stable releases use `latest`.

The workflow runs on pushed tags matching `v*`. It requires the tag version to
match all package metadata and checks whether that exact version exists on each
registry. It skips an already-published registry version; this is not an
overwrite mechanism. npm and PyPI use trusted publication; crates.io uses the
configured token. The workflow does not create GitHub Release notes.
