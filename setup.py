from os import path
from sysconfig import get_config_var

from setuptools import Extension, find_packages, setup
from setuptools.command.build import build
try:
    from setuptools.command.bdist_wheel import bdist_wheel
except ImportError:
    from wheel.bdist_wheel import bdist_wheel
from setuptools.command.build_ext import build_ext
from setuptools.command.egg_info import egg_info


PACKAGE_NAME = "tree_sitter_toolang"
MINIMUM_ABI = "0x030A0000"


class Build(build):
    def run(self):
        if path.isdir("queries"):
            dest = path.join(self.build_lib, PACKAGE_NAME, "queries")
            self.copy_tree("queries", dest)
        super().run()


class BuildExt(build_ext):
    def build_extension(self, ext: Extension):
        if self.compiler.compiler_type != "msvc":
            ext.extra_compile_args = ["-std=c11", "-fvisibility=hidden"]
        else:
            ext.extra_compile_args = ["/std:c11", "/utf-8"]

        for scanner in ("src/scanner.c", "src/scanner.cc"):
            if path.exists(scanner):
                ext.sources.append(scanner)

        if ext.py_limited_api:
            ext.define_macros.append(("Py_LIMITED_API", MINIMUM_ABI))

        super().build_extension(ext)


class BdistWheel(bdist_wheel):
    def get_tag(self):
        python, abi, platform = super().get_tag()
        if python.startswith("cp"):
            python, abi = "cp310", "abi3"
        return python, abi, platform


class EggInfo(egg_info):
    def find_sources(self):
        super().find_sources()
        self.filelist.recursive_include("queries", "*.scm")
        self.filelist.include("src/tree_sitter/*.h")
        self.filelist.recursive_include("tests/fixtures", "*.too")


setup(
    packages=find_packages("bindings/python"),
    package_dir={"": "bindings/python"},
    package_data={
        PACKAGE_NAME: ["*.pyi", "py.typed"],
        f"{PACKAGE_NAME}.queries": ["*.scm"],
    },
    ext_package=PACKAGE_NAME,
    ext_modules=[
        Extension(
            name="_binding",
            sources=[
                f"bindings/python/{PACKAGE_NAME}/binding.c",
                "src/parser.c",
            ],
            define_macros=[
                ("PY_SSIZE_T_CLEAN", None),
                ("TREE_SITTER_HIDE_SYMBOLS", None),
            ],
            include_dirs=["src"],
            py_limited_api=not get_config_var("Py_GIL_DISABLED"),
        )
    ],
    cmdclass={
        "build": Build,
        "build_ext": BuildExt,
        "bdist_wheel": BdistWheel,
        "egg_info": EggInfo,
    },
    zip_safe=False,
)
