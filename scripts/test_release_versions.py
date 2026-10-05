import unittest

from release_versions import release_settings


class ReleaseVersionTests(unittest.TestCase):
    def test_stable_releases_use_latest(self):
        self.assertEqual(release_settings("0.3.4"), ("0.3.4", "latest"))
        self.assertEqual(release_settings("0.4.0"), ("0.4.0", "latest"))

    def test_prereleases_use_python_spelling_and_next(self):
        for version, python_version in (
            ("0.4.0-alpha.1", "0.4.0a1"),
            ("0.4.0-beta.2", "0.4.0b2"),
            ("0.4.0-rc.1", "0.4.0rc1"),
            ("1.2.3-rc.10", "1.2.3rc10"),
        ):
            with self.subTest(version=version):
                self.assertEqual(release_settings(version), (python_version, "next"))

    def test_unsupported_versions_cannot_publish(self):
        for version in (
            "v0.4.0", "0.4", "0.4.0a1", "0.4.0-dev.1", "0.4.0-alpha",
            "0.4.0-alpha.01", "00.4.0", "0.4.0+build.1", "0.4.0\n",
        ):
            with self.subTest(version=version):
                with self.assertRaises(ValueError):
                    release_settings(version)
