import { deepStrictEqual } from "node:assert/strict";
import { mkdtempSync, readFileSync, rmSync, symlinkSync, writeFileSync } from "node:fs";
import { tmpdir } from "node:os";
import { dirname, join, resolve } from "node:path";
import { fileURLToPath } from "node:url";
import { spawnSync } from "node:child_process";

const REPO_ROOT = resolve(dirname(fileURLToPath(import.meta.url)), "..");
const FIXTURE = join(REPO_ROOT, "tests", "fixtures", "kitchen_sink.too");
const COLLECTION_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "flow_arrays.too");
const SPAWN_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "spawn.too");
const REPEAT_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "flexible_repeat.too");
const DOCUMENTATION_FIXTURE = join(
  REPO_ROOT, "tests", "fixtures", "documentation_comments.too",
);

const nodeTypes = JSON.parse(readFileSync(join(REPO_ROOT, "src", "node-types.json"), "utf8"));
deepStrictEqual(nodeTypes.find(node => node.type === "spawn_statement").fields, {
  target: {
    multiple: false,
    required: true,
    types: [
      { type: "inline_agic", named: true },
      { type: "runnable", named: true },
    ],
  },
});

const repeatFields = nodeTypes.find(node => node.type === "repeat_statement").fields;
deepStrictEqual(Object.keys(repeatFields).sort(), ["body", "count", "window"]);
deepStrictEqual(repeatFields.body, {
  multiple: false, required: true, types: [{ type: "repeat_body", named: true }],
});
const repeatBodyFields = nodeTypes.find(node => node.type === "repeat_body").fields;
deepStrictEqual(Object.keys(repeatBodyFields).sort(), ["statement", "until"]);
deepStrictEqual([repeatBodyFields.statement.multiple, repeatBodyFields.statement.required], [true, true]);
deepStrictEqual(repeatBodyFields.until, {
  multiple: false, required: false, types: [{ type: "until_clause", named: true }],
});
deepStrictEqual(nodeTypes.find(node => node.type === "until_clause").fields, {
  target: {
    multiple: false,
    required: true,
    types: [{ type: "inline_agic_body", named: true }, { type: "runnable", named: true }],
  },
});

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
    join(REPO_ROOT, "tests", "fixtures", "unified_blocks.too"),
    join(REPO_ROOT, "tests", "fixtures", "flow_upgrade.too"), DOCUMENTATION_FIXTURE,
    join(REPO_ROOT, "tests", "fixtures", "exec.too"), COLLECTION_FIXTURE, SPAWN_FIXTURE,
    REPEAT_FIXTURE);

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

  const execHtml = runCli(
    "highlight", "--config-path", configPath, "--html",
    join(REPO_ROOT, "tests", "fixtures", "exec.too"),
  );
  for (const expected of [
    "<span style='color: #334455'>exec</span>",
    "<span style='color: #556677'>        exec remains literal inside inline text.</span>",
  ]) {
    if (!execHtml.includes(expected)) {
      throw new Error(`Exec highlighting was missing: ${expected}\n${execHtml}`);
    }
  }

  const spawnHtml = runCli(
    "highlight", "--config-path", configPath, "--html", SPAWN_FIXTURE,
  );
  for (const expected of [
    "<span style='color: #334455'>spawn</span>",
    "<span style='color: #556677'>        spawn remains literal inside inline text.</span>",
    "<span style='color: #556677'>    spawn remains literal inside explicit text.</span>",
    "<span style='color: #556677'>  spawn remains literal in an unroled message.</span>",
    "<span style='color: #112233'># spawn is also literal in a comment.</span>",
  ]) {
    if (!spawnHtml.includes(expected)) {
      throw new Error(`Spawn highlighting was missing: ${expected}\n${spawnHtml}`);
    }
  }

  const collectionHtml = runCli(
    "highlight", "--config-path", configPath, "--html", COLLECTION_FIXTURE,
  );
  for (const keyword of ["generate", "reduce", "map", "using", "from"]) {
    const expected = `<span style='color: #334455'>${keyword}</span>`;
    if (!collectionHtml.includes(expected)) {
      throw new Error(`Collection highlighting was missing: ${expected}\n${collectionHtml}`);
    }
  }

  const repeatHtml = runCli("highlight", "--config-path", configPath, "--html", REPEAT_FIXTURE);
  for (const expected of [
    "<span style='color: #334455'>until</span>",
    "<span style='color: #556677'>        until remains literal inside condition text.</span>",
    "<span style='color: #556677'>      until remains literal inside explicit Content.</span>",
  ]) {
    if (!repeatHtml.includes(expected)) {
      throw new Error(`Repeat highlighting was missing: ${expected}\n${repeatHtml}`);
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
