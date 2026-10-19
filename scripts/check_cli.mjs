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
const ASYNC_AWAIT_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "async_await.too");
const LITERAL_HASHES_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "literal_hashes.too");
const METADATA_PREFIXES_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "metadata_prefixes.too");
const UNITS_AND_LANES_FIXTURE = join(REPO_ROOT, "tests", "fixtures", "units_and_lanes.too");
const DOCUMENTATION_FIXTURE = join(
  REPO_ROOT, "tests", "fixtures", "documentation_comments.too",
);

const nodeTypes = JSON.parse(readFileSync(join(REPO_ROOT, "src", "node-types.json"), "utf8"));
deepStrictEqual(nodeTypes.filter(node => node.named).length, 79);
for (const [owner, field, literal] of [
  ["flow", "keyword", "flow"], ["flow", "colon", ":"], ["flow", "arrow", "->"],
  ["param", "optional", "?"], ["property", "operator", "="],
  ["selection", "side", "first"], ["sort_statement", "order", "ascending"],
]) {
  const types = nodeTypes.find(node => node.type === owner && node.named).fields[field].types;
  deepStrictEqual(types.some(type => type.type === literal && !type.named), true);
}
deepStrictEqual(nodeTypes.find(node => node.type === "spawn_statement").fields, {
  target: {
    multiple: false,
    required: true,
    types: [
      { type: "inline_agic", named: true },
      { type: "runnable_name", named: true },
    ],
  },
});
deepStrictEqual(nodeTypes.find(node => node.type === "run_statement").fields, {
  async: {
    multiple: false, required: false, types: [{ type: "async", named: false }],
  },
  target: {
    multiple: false, required: false,
    types: [{ type: "inline_agic", named: true }, { type: "runnable_name", named: true }],
  },
});
deepStrictEqual(nodeTypes.find(node => node.type === "await_statement").fields, {
  handle: {
    multiple: false, required: true, types: [{ type: "handle_name", named: true }],
  },
});
const letFields = nodeTypes.find(node => node.type === "let_statement").fields;
deepStrictEqual(Object.keys(letFields).sort(), ["local", "statement", "value"]);
deepStrictEqual(letFields.local, {
  multiple: false, required: false, types: [{ type: "local_name", named: true }],
});
const paramDocFields = nodeTypes.find(node => node.type === "param_doc").fields;
deepStrictEqual(Object.keys(paramDocFields).sort(), ["description", "param"]);
deepStrictEqual(paramDocFields.param, {
  multiple: false, required: true, types: [{ type: "param_name", named: true }],
});
deepStrictEqual(paramDocFields.description, {
  multiple: false, required: true, types: [{ type: "text", named: true }],
});
for (const name of ["program_doc", "item_doc"]) {
  deepStrictEqual(nodeTypes.find(node => node.type === name).fields, {
    text: { multiple: false, required: false, types: [{ type: "text", named: true }] },
  });
}
for (const name of ["local_reference", "item_doc_comment", "param_doc_tag"]) {
  deepStrictEqual(nodeTypes.some(node => node.type === name), false);
}
deepStrictEqual(nodeTypes.find(node => node.type === "local_name"), {
  type: "local_name", named: true, fields: {},
});

for (const name of [
  "identifier", "runnable_name", "type_name", "local_name", "handle_name", "param_name",
  "agent_name", "cap_name", "chore_name", "builtin_type",
  "text", "role", "directive_key", "recall_source",
]) {
  const node = nodeTypes.find(node => node.type === name);
  deepStrictEqual(node.named, true, name);
  deepStrictEqual(node.fields ?? {}, {}, name);
  deepStrictEqual(node.children, undefined, name);
}
deepStrictEqual(nodeTypes.find(node => node.type === "type").fields, {
  base: {
    multiple: false, required: true,
    types: [{ type: "builtin_type", named: true }, { type: "type_name", named: true }],
  },
  suffix: {
    multiple: true, required: false, types: [{ type: "[]", named: false }],
  },
});

const repeatFields = nodeTypes.find(node => node.type === "repeat_statement").fields;
deepStrictEqual(Object.keys(repeatFields).sort(), ["body", "count", "window"]);
deepStrictEqual(repeatFields.body, {
  multiple: false, required: true, types: [{ type: "repeat_body", named: true }],
});
const repeatBodyFields = nodeTypes.find(node => node.type === "repeat_body").fields;
deepStrictEqual(Object.keys(repeatBodyFields).sort(), ["statement", "until"]);
// Missing requirements keep the owning body and expose an invalid_* diagnostic.
deepStrictEqual([repeatBodyFields.statement.multiple, repeatBodyFields.statement.required], [true, false]);
deepStrictEqual(repeatBodyFields.until, {
  multiple: false, required: false, types: [{ type: "until_clause", named: true }],
});
deepStrictEqual(nodeTypes.find(node => node.type === "until_clause").fields, {
  target: {
    multiple: false,
    required: true,
    types: [{ type: "inline_agic", named: true }, { type: "runnable_name", named: true }],
  },
});

const textField = { multiple: false, required: true, types: [{ type: "content", named: true }] };
for (const kind of ["context", "instruct", "inline_agic", "ask_statement", "implicit_run_statement"]) {
  deepStrictEqual(nodeTypes.find(node => node.type === kind).fields.content, textField, kind);
}
const messageFields = nodeTypes.find(node => node.type === "message").fields;
deepStrictEqual(messageFields.role, {
  multiple: false, required: false, types: [{ type: "role", named: true }],
});
// Invalid messages are separate body entries; normal messages require content.
deepStrictEqual(messageFields.content, textField);
deepStrictEqual(nodeTypes.find(node => node.type === "agic_body").fields.message.types, [
  { type: "invalid_agic_message", named: true }, { type: "message", named: true },
]);
deepStrictEqual(nodeTypes.find(node => node.type === "params").fields.param.types, [
  { type: "invalid_param", named: true }, { type: "param", named: true },
]);
for (const body of ["agic_body", "flow_body"]) {
  deepStrictEqual(nodeTypes.find(node => node.type === body).fields.directive.types, [
    { type: "directive", named: true }, { type: "invalid_directive", named: true },
  ]);
}
deepStrictEqual(nodeTypes.find(node => node.type === "param").fields.name.required, true);
deepStrictEqual(nodeTypes.find(node => node.type === "directive").fields.value.required, true);
for (const [kind, field] of [["flow_body", "statement"], ["agic_body", "message"],
  ["struct_body", "field"], ["cap_body", "property"], ["chore_body", "property"]]) {
  deepStrictEqual(nodeTypes.find(node => node.type === kind).fields[field].multiple, true);
}
for (const kind of ["text_inline", "text_block", "text_body", "text_body_line", "indented_raw_text",
  "unroled_message", "statements", "messages", "invalid_empty_body",
  "line_end", "inline_agic_body", "text_ref", "invalid_flow_reserved_statement", "invalid_agic_reserved_message",
  "task", "task_keyword", "job_name", "job_body",
  "source_file", "module_doc_comment", "module_doc"]) {
  deepStrictEqual(nodeTypes.some(node => node.type === kind), false, kind);
}
for (const kind of ["invalid_missing_body", "invalid_missing_content", "invalid_missing_statement"]) {
  deepStrictEqual(nodeTypes.find(node => node.type === kind), { type: kind, named: true });
}

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
        type: "#667788",
        function: "#778899",
        constant: "#8899aa",
        property: "#99aabb",
      },
    }),
  );

  const dumpOutput = runCli("dump-languages", "--config-path", configPath);
  if (!dumpOutput.includes("scope: source.toolang")) {
    throw new Error(`Toolang was not discovered by dump-languages.\n${dumpOutput}`);
  }

  const textProductionsPath = join(REPO_ROOT, "tests", "fixtures", "text_productions.too");
  const textProductions = runCli("parse", "--config-path", configPath, "--rebuild", textProductionsPath);
  for (const kind of ["text", "query_value", "content", "directive_key"]) {
    deepStrictEqual(textProductions.includes(`(${kind} [`), true, textProductions);
  }
  const textHtml = runCli("highlight", "--config-path", configPath, "--html", textProductionsPath);
  for (const expected of [
    "<span style='color: #223344'>#@ Text fragments retain # literally.</span>",
    "<span style='color: #8899aa'>./review</span>",
    "<span style='color: #99aabb'>recall</span>",
    "<span style='color: #556677'>    # Literal reducer heading.</span>",
  ]) {
    deepStrictEqual(textHtml.includes(expected), true, textHtml);
  }
  const incompleteRecallPath = join(configDir, "incomplete-recall.too");
  writeFileSync(incompleteRecallPath, "flow work:\n  recall\n  run next\n");
  const recallHtml = runCli("highlight", "--config-path", configPath, "--html", incompleteRecallPath);
  deepStrictEqual(recallHtml.includes("<span style='color: #99aabb'>recall</span>"), true, recallHtml);

  runCli("parse", "--config-path", configPath, "--rebuild", "--quiet", FIXTURE,
    join(REPO_ROOT, "tests", "fixtures", "unified_blocks.too"),
    join(REPO_ROOT, "tests", "fixtures", "flow_upgrade.too"), DOCUMENTATION_FIXTURE,
    join(REPO_ROOT, "tests", "fixtures", "exec.too"), COLLECTION_FIXTURE, SPAWN_FIXTURE,
    REPEAT_FIXTURE, ASYNC_AWAIT_FIXTURE, join(REPO_ROOT, "tests", "fixtures", "spawn_await.too"),
    join(REPO_ROOT, "tests", "fixtures", "whitespace.too"), LITERAL_HASHES_FIXTURE,
    METADATA_PREFIXES_FIXTURE, UNITS_AND_LANES_FIXTURE);

  runCli("parse", "--config-path", configPath, "--quiet",
    join(REPO_ROOT, "tests", "fixtures", "cst_contract.too"),
    join(REPO_ROOT, "tests", "fixtures", "body_documentation.too"));

  const bodyDocsPath = join(configDir, "body-documentation.too");
  writeFileSync(bodyDocsPath, "flow first:\n# Outer.\n\n  ## First.\n  run one\n  ## Second.\n  run two\nprompt empty:\n## Next.\nflow next:\n  pass\n");
  const bodyDocs = runCli("parse", "--config-path", configPath, bodyDocsPath);
  for (const node of ["body: (flow_body [3, 0] - [7, 0]",
    "\n      (item_doc [3, 2] - [4, 0]", "\n      (item_doc [5, 2] - [6, 0]",
    "\n  (prompt [7, 0] - [8, 0]", "\n  (item_doc [8, 0] - [9, 0]"]) {
    deepStrictEqual(bodyDocs.includes(node), true, bodyDocs);
  }

  const recoveryPath = join(configDir, "recovery-edges.too");
  writeFileSync(recoveryPath, "flow bad_comment:\n  run before\n  #@ Wrong scope.\n  run after\nflow missing:\n  models = fast\n## Next.\nflow bad_until:\n  repeat:\n    run worker\n    until 42\n  run after_repeat\nflow next:\n  pass\n");
  const recovery = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, recoveryPath], {
    cwd: REPO_ROOT, encoding: "utf8",
  });
  deepStrictEqual(recovery.status, 1, recovery.stdout + recovery.stderr);
  for (const item of ["flow [0, 0] - [4, 0]", "flow [4, 0] - [6, 0]",
    "item_doc [6, 0] - [7, 0]", "flow [7, 0] - [12, 0]", "flow [12, 0] - [14, 0]"]) {
    deepStrictEqual(recovery.stdout.includes(`\n  (${item}`), true, recovery.stdout);
  }
  deepStrictEqual(recovery.stdout.includes("invalid_flow_statement"), true, recovery.stdout);

  const blockHeaderPath = join(configDir, "malformed-block-header.too");
  writeFileSync(blockHeaderPath, "flow first:\n  run before\n  repeat:\n    run inner\n    let value = sort ascending:\n      Orphaned text.\n    ## Following.\n    run after\n  run after_outer\n## Next.\nflow next:\n  pass\n");
  const blockHeader = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, blockHeaderPath], {
    cwd: REPO_ROOT, encoding: "utf8",
  });
  deepStrictEqual(blockHeader.status, 1, blockHeader.stdout + blockHeader.stderr);
  for (const node of ["(repeat_statement [2, 2] - [8, 0]",
    "\n          (item_doc [6, 4] - [7, 0]", "(run_statement [7, 4] - [8, 0]",
    "(run_statement [8, 2] - [9, 0]", "\n  (item_doc [9, 0] - [10, 0]",
    "\n  (flow [10, 0] - [12, 0]"]) {
    deepStrictEqual(blockHeader.stdout.includes(node), true, blockHeader.stdout);
  }

  const prefixRecoveryPath = join(configDir, "prefix-recovery.too");
  writeFileSync(prefixRecoveryPath, "flow first:\n#@ Wrong scope.\n# Outer.\n\n  ## First.\n  run one\n## Next.\nflow next:\n  pass\n");
  const prefixRecovery = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, prefixRecoveryPath], {
    cwd: REPO_ROOT, encoding: "utf8",
  });
  deepStrictEqual(prefixRecovery.status, 1, prefixRecovery.stdout + prefixRecovery.stderr);
  for (const node of ["body: (flow_body [4, 0] - [6, 0]",
    "\n      (item_doc [4, 2] - [5, 0]", "\n  (item_doc [6, 0] - [7, 0]",
    "\n  (flow [7, 0] - [9, 0]"]) {
    deepStrictEqual(prefixRecovery.stdout.includes(node), true, prefixRecovery.stdout);
  }

  for (const kind of ["agic", "flow"]) {
    const path = join(configDir, `${kind}-unknown-directive.too`);
    const body = kind === "agic" ? "user: Continue." : "run after";
    writeFileSync(path, `${kind} work:\n  modles = fast\n  ${body}\nflow next:\n  pass\n`);
    const result = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, path], {
      cwd: REPO_ROOT, encoding: "utf8",
    });
    deepStrictEqual(result.status, 1, result.stdout + result.stderr);
    deepStrictEqual(result.stdout.includes("ERROR"), true, result.stdout);
    deepStrictEqual(result.stdout.includes("[3, 0] - [5, 0]"), true, result.stdout);

    writeFileSync(path, `${kind} work:\n  modles = fast\n    Orphaned content.\n  ## Following.\n  ${body}\n## Next.\nflow next:\n  pass\n`);
    const nestedResult = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, path], {
      cwd: REPO_ROOT, encoding: "utf8",
    });
    deepStrictEqual(nestedResult.status, 1, nestedResult.stdout + nestedResult.stderr);
    for (const node of [`body: (${kind}_body [1, 0] - [5, 0]`,
      "\n      (item_doc [3, 2] - [4, 0]", "\n  (item_doc [5, 0] - [6, 0]",
      "\n  (flow [6, 0] - [8, 0]"]) {
      deepStrictEqual(nestedResult.stdout.includes(node), true, nestedResult.stdout);
    }
  }

  for (const [index, statement] of [
    "keep if worker in 2 lanes", "drop if worker in 1 lane", "sort ascending by worker in 2 lanes",
  ].entries()) {
    const path = join(configDir, `suffix-lane-${index}.too`);
    writeFileSync(path, `flow work:\n  ${statement}\n  run after\nflow next:\n  pass\n`);
    const result = spawnSync("npx", ["tree-sitter", "parse", "--config-path", configPath, path], {
      cwd: REPO_ROOT, encoding: "utf8",
    });
    deepStrictEqual(result.status, 1, result.stdout + result.stderr);
    deepStrictEqual(result.stdout.includes("ERROR"), true, result.stdout);
    deepStrictEqual(result.stdout.includes("[3, 0] - [5, 0]"), true, result.stdout);
  }

  const unitsHtml = runCli("highlight", "--config-path", configPath, "--html", UNITS_AND_LANES_FIXTURE);
  for (const unit of ["lane", "lanes", "time", "times"]) {
    deepStrictEqual(unitsHtml.includes(`<span style='color: #334455'>${unit}</span>`), true, unitsHtml);
  }
  deepStrictEqual(unitsHtml.includes("<span style='color: #556677'>    Keep 1 lanes and 2 time in 3 lanes # literal.</span>"), true, unitsHtml);

  const choresHtml = runCli("highlight", "--config-path", configPath, "--html",
    join(REPO_ROOT, "tests", "fixtures", "chores.too"));
  for (const expected of [
    "<span style='color: #334455'>chore</span>",
    "<span style='color: #778899'>review_api</span>",
    "<span style='color: #778899'>stale-prs</span>",
    "<span style='color: #556677'>  Review the API changes and summarize risks.</span>",
    "<span style='color: #556677'>  Check stale PRs and report actionable items.</span>",
  ]) {
    deepStrictEqual(choresHtml.includes(expected), true, choresHtml);
  }
  deepStrictEqual(choresHtml.includes("<span style='color: #667788'>"), false, choresHtml);

  const highlightOutput = runCli("highlight", "--config-path", configPath, FIXTURE);
  if (highlightOutput.includes("No syntax highlighting config found")) {
    throw new Error(`Highlight metadata was not resolved.\n${highlightOutput}`);
  }

  const documentationHtml = runCli(
    "highlight", "--config-path", configPath, "--html", DOCUMENTATION_FIXTURE,
  );
  const literalHtml = runCli(
    "highlight", "--config-path", configPath, "--html", LITERAL_HASHES_FIXTURE,
  );
  for (const expected of [
    "<span style='color: #556677'> Visit https://example.com/#details</span>",
    "<span style='color: #556677'> # Follow this heading.</span>",
    "<span style='color: #556677'> ## Literal Markdown heading.</span>",
    "<span style='color: #556677'>    # Literal multiline heading.</span>",
    "<span style='color: #112233'># Structural declaration comment.</span>",
    "<span style='color: #112233'># Structural operation comment.</span>",
  ]) {
    if (!literalHtml.includes(expected)) {
      throw new Error(`Literal-text highlighting was missing: ${expected}\n${literalHtml}`);
    }
  }
  for (const expected of [
    "<span style='color: #112233'>#!/usr/bin/env too</span>",
    "<span style='color: #112233'># Keep summaries short.</span>",
    "<span style='color: #223344'>#@ Research tools for collecting and summarizing evidence.</span>",
    "<span style='color: #223344'>##! Important item documentation.</span>",
    "<span style='color: #223344'>## Summarize source material when a concise overview is needed.</span>",
    "<span style='color: #223344'>## <span style='color: #334455'>@param</span> <span style='color: #445566'>style</span> Preferred summary style.</span>",
    "<span style='color: #556677'>    #@ Literal program marker.</span>",
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

  const asyncAwaitHtml = runCli(
    "highlight", "--config-path", configPath, "--html", ASYNC_AWAIT_FIXTURE,
  );
  for (const expected of [
    "<span style='color: #334455'>async</span>",
    "<span style='color: #334455'>await</span>",
    "<span style='color: #556677'>      async run remains literal inside inline text.</span>",
    "<span style='color: #556677'>      await h remains literal inside inline text.</span>",
    "<span style='color: #556677'>  async run remains literal in an unroled message.</span>",
    "<span style='color: #556677'>  await h is also literal.</span>",
    "<span style='color: #112233'># await and async remain literal in comments.</span>",
  ]) {
    if (!asyncAwaitHtml.includes(expected)) {
      throw new Error(`Async/await highlighting was missing: ${expected}\n${asyncAwaitHtml}`);
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
