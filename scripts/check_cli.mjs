import { mkdtempSync, rmSync, symlinkSync, writeFileSync } from "node:fs";
import { tmpdir } from "node:os";
import { dirname, join, resolve } from "node:path";
import { fileURLToPath } from "node:url";
import { spawnSync } from "node:child_process";

const REPO_ROOT = resolve(dirname(fileURLToPath(import.meta.url)), "..");
const FIXTURE = join(REPO_ROOT, "tests", "fixtures", "kitchen_sink.too");
const DOCUMENTATION_FIXTURE = join(
  REPO_ROOT, "tests", "fixtures", "documentation_comments.too",
);

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
    JSON.stringify({
      "parser-directories": [configDir],
      theme: {
        comment: "#112233",
        "comment.documentation": "#223344",
        keyword: "#334455",
        "variable.parameter": "#445566",
        string: "#556677",
      },
    }),
  );

  const dumpOutput = runCli("dump-languages", "--config-path", configPath);
  if (!dumpOutput.includes("scope: source.toolang")) {
    throw new Error(`Toolang was not discovered by dump-languages.\n${dumpOutput}`);
  }

  runCli("parse", "--config-path", configPath, "--rebuild", "--quiet", FIXTURE,
    join(REPO_ROOT, "tests", "fixtures", "unified_blocks.too"), DOCUMENTATION_FIXTURE);

  const highlightOutput = runCli("highlight", "--config-path", configPath, FIXTURE);
  if (highlightOutput.includes("No syntax highlighting config found")) {
    throw new Error(`Highlight metadata was not resolved.\n${highlightOutput}`);
  }

  const documentationHtml = runCli(
    "highlight", "--config-path", configPath, "--html", DOCUMENTATION_FIXTURE,
  );
  for (const expected of [
    "<span style='color: #112233'>#!/usr/bin/env too</span>",
    "<span style='color: #112233'># Keep summaries short.</span>",
    "<span style='color: #223344'>#@ Research tools for collecting and summarizing evidence.</span>",
    "<span style='color: #223344'>##! Compatible module documentation.</span>",
    "<span style='color: #223344'>## Summarize source material when a concise overview is needed.</span>",
    "<span style='color: #223344'>## <span style='color: #334455'>@param</span> <span style='color: #445566'>style</span> Preferred summary style.</span>",
    "<span style='color: #556677'>    #@ Literal module marker.</span>",
    "<span style='color: #556677'>    ## @param _ Literal parameter tag.</span>",
  ]) {
    if (!documentationHtml.includes(expected)) {
      throw new Error(`Documentation highlighting was missing: ${expected}\n${documentationHtml}`);
    }
  }

  const documentationTags = runCli(
    "tags", "--config-path", configPath, DOCUMENTATION_FIXTURE,
  ).trim().split(/\r?\n/);
  if (
    documentationTags.length !== 1 ||
    !/^summarize\s+\| function\s+def\b/.test(documentationTags[0])
  ) {
    throw new Error(`Documentation created unexpected symbols.\n${documentationTags.join("\n")}`);
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
