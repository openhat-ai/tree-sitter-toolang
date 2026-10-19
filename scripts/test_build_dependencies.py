"""Native Python builds must invalidate their cache when local headers change."""

from pathlib import Path
import os
import shutil
import subprocess
import sys
import tempfile
import time
import unittest


ROOT = Path(__file__).resolve().parents[1]


class BuildDependencyTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.workspace = tempfile.TemporaryDirectory()
        cls.addClassCleanup(cls.workspace.cleanup)
        cls.baseline = Path(cls.workspace.name) / "baseline"
        cls.baseline.mkdir()
        for name in ["src", "bindings/python"]:
            shutil.copytree(
                ROOT / name, cls.baseline / name,
                ignore=shutil.ignore_patterns("*.so", "*.pyd", "__pycache__", "*.egg-info"),
            )
        for name in ["setup.py", "pyproject.toml", "README.md", "LICENSE"]:
            shutil.copy2(ROOT / name, cls.baseline / name)
        result = cls.build(cls.baseline)
        if result.returncode:
            raise AssertionError(result.stdout)

    @staticmethod
    def build(directory):
        return subprocess.run(
            [sys.executable, "setup.py", "build_ext", "--inplace"],
            cwd=directory, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
            check=False,
        )

    def check_header(self, relative):
        directory = Path(self.workspace.name) / relative.replace("/", "_")
        shutil.copytree(self.baseline, directory)
        header = directory / relative
        header.write_text(header.read_text() + "\n#error TOOLANG_HEADER_DEPENDENCY_PROBE\n")
        # Avoid timestamp granularity differences on build workers.
        changed = time.time() + 2
        os.utime(header, (changed, changed))
        result = self.build(directory)
        self.assertNotEqual(result.returncode, 0, result.stdout)
        self.assertIn("TOOLANG_HEADER_DEPENDENCY_PROBE", result.stdout)

    def test_keyword_header_invalidates_the_extension(self):
        self.check_header("src/keywords.h")

    def test_parser_header_invalidates_the_extension(self):
        self.check_header("src/tree_sitter/parser.h")

    def test_allocator_header_invalidates_the_extension(self):
        self.check_header("src/tree_sitter/alloc.h")
