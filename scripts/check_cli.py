from __future__ import annotations

import json
import subprocess
import tempfile
from pathlib import Path


REPO_ROOT = Path(__file__).resolve().parents[1]
FIXTURE = REPO_ROOT / "tests" / "fixtures" / "cli.too"


def run_cli(*args: str) -> str:
    result = subprocess.run(
        ["npx", "tree-sitter", *args],
        cwd=REPO_ROOT,
        capture_output=True,
        text=True,
    )
    output = f"{result.stdout}{result.stderr}"
    if result.returncode != 0:
        raise RuntimeError(f"Command failed: {' '.join(args)}\n{output}")
    return output


def main() -> None:
    with tempfile.NamedTemporaryFile("w", suffix=".json", delete=False) as config_file:
        json.dump({"parser-directories": [str(REPO_ROOT.parent)]}, config_file)
        config_path = config_file.name

    dump_output = run_cli("dump-languages", "--config-path", config_path)
    if "scope: source.toolang" not in dump_output:
        raise RuntimeError(f"Toolang was not discovered by dump-languages.\n{dump_output}")

    highlight_output = run_cli("highlight", "--config-path", config_path, str(FIXTURE))
    if "No syntax highlighting config found" in highlight_output:
        raise RuntimeError(f"Highlight metadata was not resolved.\n{highlight_output}")

    tags_output = run_cli("tags", "--config-path", config_path, str(FIXTURE))
    if "WorkspaceSummary" not in tags_output or "summarize" not in tags_output:
        raise RuntimeError(f"Tag output was missing expected symbols.\n{tags_output}")


if __name__ == "__main__":
    main()
