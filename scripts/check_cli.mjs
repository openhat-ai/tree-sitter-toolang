import { mkdtempSync, rmSync, symlinkSync, writeFileSync } from "node:fs";
import { tmpdir } from "node:os";
import { dirname, join, resolve } from "node:path";
import { fileURLToPath } from "node:url";
import { spawnSync } from "node:child_process";

const REPO_ROOT = resolve(dirname(fileURLToPath(import.meta.url)), "..");
const FIXTURE = join(REPO_ROOT, "tests", "fixtures", "kitchen_sink.too");

function runCli(...args) {
  const result = spawnSync("npx", ["tree-sitter", ...args], {
    cwd: REPO_ROOT,
    encoding: "utf8",
  });
  const output = `${result.stdout ?? ""}${result.stderr ?? ""}`;

  if (result.status !== 0) {
    throw new Error(`Command failed: npx tree-sitter ${args.join(" ")}\n${output}`);
  }

  return output;
}

const configDir = mkdtempSync(join(tmpdir(), "tree-sitter-toolang-"));
const configPath = join(configDir, "config.json");

try {
  // Isolate discovery from other worktrees of this grammar on the same machine.
  symlinkSync(REPO_ROOT, join(configDir, "tree-sitter-toolang"), "junction");
  writeFileSync(
    configPath,
    JSON.stringify({ "parser-directories": [configDir] }),
  );

  const dumpOutput = runCli("dump-languages", "--config-path", configPath);
  if (!dumpOutput.includes("scope: source.toolang")) {
    throw new Error(`Toolang was not discovered by dump-languages.\n${dumpOutput}`);
  }

  runCli("parse", "--config-path", configPath, "--rebuild", "--quiet", FIXTURE,
    join(REPO_ROOT, "tests", "fixtures", "unified_blocks.too"));

  const highlightOutput = runCli("highlight", "--config-path", configPath, FIXTURE);
  if (highlightOutput.includes("No syntax highlighting config found")) {
    throw new Error(`Highlight metadata was not resolved.\n${highlightOutput}`);
  }

  const tagsOutput = runCli("tags", "--config-path", configPath, FIXTURE);
  if (
    !tagsOutput.includes("ReviewResult") ||
    !tagsOutput.includes("review") ||
    !tagsOutput.includes("summarize")
  ) {
    throw new Error(`Tag output was missing expected symbols.\n${tagsOutput}`);
  }
} finally {
  rmSync(configDir, { force: true, recursive: true });
}
