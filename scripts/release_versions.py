"""Map supported release versions to Python versions and npm channels."""

import re


def release_settings(version: str) -> tuple[str, str]:
    number = r"(?:0|[1-9][0-9]*)"
    match = re.fullmatch(
        rf"({number}\.{number}\.{number})(?:-(alpha|beta|rc)\.({number}))?",
        version,
    )
    if match is None:
        raise ValueError(f"Unsupported release version: {version!r}")

    base, stage, serial = match.groups()
    if stage is None:
        return base, "latest"
    suffix = {"alpha": "a", "beta": "b", "rc": "rc"}[stage]
    return f"{base}{suffix}{serial}", "next"
