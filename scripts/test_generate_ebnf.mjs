import assert from "node:assert/strict";
import { test } from "node:test";
import { mkdtempSync, readFileSync, writeFileSync, readdirSync, rmSync, statSync } from "node:fs";
import { tmpdir } from "node:os";
import { dirname, join } from "node:path";
import { fileURLToPath } from "node:url";
import { spawnSync } from "node:child_process";
import { renderGrammar } from "./generate_ebnf.mjs";

const ROOT = dirname(dirname(fileURLToPath(import.meta.url)));
const SCRIPT = join(ROOT, "scripts/generate_ebnf.mjs");
const literal = value => ({ type: "STRING", value });
const symbol = name => ({ type: "SYMBOL", name });
const blank = { type: "BLANK" };
const seq = (...members) => ({ type: "SEQ", members });
const choice = (...members) => ({ type: "CHOICE", members });
const optional = content => choice(content, blank);
const repeat = content => ({ type: "REPEAT", content });
const plus = content => ({ type: "REPEAT1", content });
const prec = content => ({ type: "PREC", value: 1, content });
const grammar = rule => ({ name: "example", rules: { start: rule } });

function body(rule) {
  // Only normalize layout in these fixtures, whose terminals contain no spaces.
  return renderGrammar(grammar(rule)).split("start ::=\n")[1].trim().replace(/\s+/g, " ");
}

const structures = [
  ["literal", literal("a"), '"a";'],
  ["epsilon", blank, "? empty ?;"],
  ["empty sequence", seq(), "? empty ?;"],
  ["empty choice", choice(), "? no alternatives ?;"],
  ["two epsilon alternatives", choice(blank, blank), "? empty ? | ? empty ?;"],
  ["sequence", seq(literal("a"), literal("b")), '"a" "b";'],
  ["choice", choice(literal("a"), literal("b")), '"a" | "b";'],
  ["nested choice", seq(literal("a"), choice(literal("b"), literal("c")), literal("d")),
    '"a" ( "b" | "c" ) "d";'],
  ["root optional", optional(literal("x")), '"x"?;'],
  ["blank-first optional", choice(blank, literal("x")), '"x"?;'],
  ["optional sequence", optional(seq(literal("a"), literal("b"))), '( "a" "b" )?;'],
  ["optional choice", optional(choice(literal("a"), literal("b"))), '( "a" | "b" )?;'],
  ["nested optional", optional(optional(literal("x"))), '( "x"? )?;'],
  ["optional repeat", optional(repeat(literal("x"))), '( "x"* )?;'],
  ["repeated optional", repeat(optional(literal("x"))), '( "x"? )*;'],
  ["one or more optional", plus(optional(literal("x"))), '( "x"? )+;'],
  ["repeated choice", repeat(choice(literal("a"), literal("b"))), '( "a" | "b" )*;'],
  ["one or more sequence", plus(seq(literal("a"), literal("b"))), '( "a" "b" )+;'],
  ["optional in sequence", seq(literal("a"), optional(literal("b")), literal("c")), '"a" "b"? "c";'],
  ["precedence-wrapped choice", seq(literal("a"), prec(choice(literal("b"), literal("c"))), literal("d")),
    '"a" (* prec 1 *) ( "b" | "c" ) "d";'],
  ["repeated precedence sequence", repeat(prec(seq(literal("a"), literal("b")))),
    '( (* prec 1 *) ( "a" "b" ) )*;'],
  ["nested precedence wrappers", prec({ type: "PREC_RIGHT", value: 0, content: optional(literal("x")) }),
    '(* prec 1 *) ( (* prec.right 0 *) ( "x"? ) );'],
];
for (const [name, rule, expected] of structures) {
  test(name, () => assert.equal(body(rule), expected));
}

const wrappers = [
  [{ type: "FIELD", name: "handle" }, 'field "handle"'],
  [{ type: "ALIAS", named: true, value: "content" }, 'alias {"value":"content","named":true}'],
  [{ type: "ALIAS", named: false, value: "operator" }, 'alias {"value":"operator","named":false}'],
  [{ type: "PREC", value: "sum" }, 'prec "sum"'],
  [{ type: "PREC_LEFT", value: 2 }, "prec.left 2"],
  [{ type: "PREC_RIGHT", value: 0 }, "prec.right 0"],
  [{ type: "PREC_DYNAMIC", value: -2 }, "prec.dynamic -2"],
  [{ type: "TOKEN" }, "token"],
  [{ type: "IMMEDIATE_TOKEN" }, "token.immediate"],
];
for (const [wrapper, label] of wrappers) {
  test(`${label}: optional operand and optional wrapper`, () => {
    assert.equal(body({ ...wrapper, content: optional(literal("x")) }), `(* ${label} *) ( "x"? );`);
    assert.equal(body(optional({ ...wrapper, content: literal("x") })), `( (* ${label} *) ( "x" ) )?;`);
    assert.equal(body(seq(literal("a"), { ...wrapper, content: choice(literal("b"), literal("c")) }, literal("d"))),
      `"a" (* ${label} *) ( "b" | "c" ) "d";`);
  });
}

test("symbols preserve recursion, names, and authored order", () => {
  const input = { name: "recursive", rules: {
    start: choice(symbol("_hidden"), symbol("start")),
    _hidden: literal("x"),
    invalid_example: blank,
  } };
  const result = renderGrammar(input);
  assert.match(result, /start ::=\n  _hidden \| start;/);
  assert.deepEqual([...result.matchAll(/^(\w+) ::=/gm)].map(match => match[1]), ["start", "_hidden", "invalid_example"]);
});

const patterns = ["ab+", String.raw`\w`, "a{2,3}", String.raw`a\/b`, "[^#\r\n]+",
  String.raw`\p{L}+`, "中文🙂?", '"quoted"', "a\n\t\u0000b", "(*text*)", "\\", ""];
for (const value of patterns) {
  test(`regex round trip: ${JSON.stringify(value)}`, () => {
    const result = renderGrammar(grammar({ type: "PATTERN", value, flags: "iu" }));
    const match = result.match(/\? regex ("(?:[^"\\]|\\.)*") flags ("(?:[^"\\]|\\.)*") \?/);
    assert.ok(match);
    assert.equal(JSON.parse(match[1]), value);
    assert.equal(JSON.parse(match[2]), "iu");
    assert.ok(!result.includes("\r"));
  });
}

test("terminals use JSON escaping without modifying authored values", () => {
  const values = ['"\'\\', "a\nb\r\tc\u0000", "🙂", "? (* *)", ""];
  for (const value of values) {
    const result = renderGrammar(grammar(literal(value))).split("start ::=\n")[1].trim();
    assert.equal(JSON.parse(result.slice(0, -1)), value);
  }
});

test("annotation delimiters cannot terminate or nest comments", () => {
  const field = 'handle*)(*"\\';
  const result = renderGrammar({ ...grammar({ type: "FIELD", name: field, content: literal("x") }),
    $schema: "https://example.test/(*schema*)" });
  const match = result.match(/\(\* field ("(?:[^"\\]|\\.)*") \*\)/);
  assert.equal(JSON.parse(match[1]), field);
  assert.ok(!match[1].includes("*)"));
  assert.ok(!match[1].includes("(*"));
  const schema = result.match(/\(\* \$schema (.*) \*\)/)[1];
  assert.equal(JSON.parse(schema), "https://example.test/(*schema*)");
});

test("grammar metadata is retained and references are checked", () => {
  const input = {
    ...grammar(symbol("external")), $schema: "schema", word: "start",
    extras: [{ type: "PATTERN", value: "[ \\t]" }, symbol("external")],
    conflicts: [["start", "external"]],
    precedences: [[literal("named_precedence"), symbol("start")]],
    inline: ["start"], supertypes: ["start"],
    externals: [symbol("external"), literal("+")],
  };
  const result = renderGrammar(input);
  for (const key of ["$schema", "name", "word", "extras", "conflicts", "precedences", "inline", "supertypes", "externals"]) {
    const label = key.replace("$", "\\$");
    const match = result.match(new RegExp(`\\(\\* ${label} ([\\s\\S]*?) \\*\\)`));
    assert.ok(match, key);
    assert.deepEqual(JSON.parse(match[1]), input[key], key);
  }
  assert.match(result, /external ::=\n  \? external scanner token "external" \?;/);
  const absent = renderGrammar(grammar(literal("x")));
  const empty = renderGrammar({ ...grammar(literal("x")), extras: [] });
  assert.ok(!absent.includes("(* extras "));
  assert.ok(empty.includes("(* extras [] *)"));
});

test("external/rule overlap retains both facts without duplicate productions", () => {
  const result = renderGrammar({ ...grammar(literal("x")), externals: [symbol("start"), symbol("unused")] });
  assert.equal([...result.matchAll(/^start ::=/gm)].length, 1);
  assert.ok(!result.includes('? external scanner token "start" ?'));
  assert.ok(result.includes('? external scanner token "unused" ?'));
  const inventory = result.match(/\(\* externals ([\s\S]*?) \*\)/)[1];
  assert.deepEqual(JSON.parse(inventory), [symbol("start"), symbol("unused")]);
});

const malformedRules = [
  [null, "/rules/start"],
  [{}, "/rules/start/type"],
  [{ type: "FUTURE_RULE" }, "/rules/start/type"],
  [{ type: "RESERVED", context_name: "x", content: literal("a") }, "/rules/start/type"],
  [{ type: "STRING" }, "/rules/start/value"],
  [{ type: "STRING", value: 1 }, "/rules/start/value"],
  [{ type: "STRING", value: "a", extra_semantics: true }, "/rules/start/extra_semantics"],
  [{ type: "PATTERN", value: "x", flags: null }, "/rules/start/flags"],
  [{ type: "SEQ", members: "not an array" }, "/rules/start/members"],
  [{ type: "SEQ", members: [literal("a"), null] }, "/rules/start/members/1"],
  [{ type: "FIELD", name: 1, content: blank }, "/rules/start/name"],
  [{ type: "ALIAS", value: "a", named: "true", content: blank }, "/rules/start/named"],
  [{ type: "REPEAT" }, "/rules/start/content"],
  [{ type: "PREC", value: 0.1, content: blank }, "/rules/start/value"],
  [{ type: "PREC", value: 2147483648, content: blank }, "/rules/start/value"],
  [{ type: "PREC_DYNAMIC", value: "named", content: blank }, "/rules/start/value"],
  [symbol("missing"), "/rules/start/name"],
  [symbol("bad name"), "/rules/start/name"],
];
for (const [rule, path] of malformedRules) {
  test(`reject ${JSON.stringify(rule)} at ${path}`, () => {
    assert.throws(() => renderGrammar(grammar(rule)), error => error.message.includes(path));
  });
}

test("reject unsupported or malformed metadata with its JSON path", () => {
  const cases = [
    ["new_semantics", true, "/new_semantics"], ["name", "bad name", "/name"],
    ["$schema", null, "/$schema"], ["word", "missing", "/word"],
    ["extras", [symbol("missing")], "/extras/0/name"], ["extras", null, "/extras"],
    ["externals", null, "/externals"], ["externals", [blank], "/externals/0"],
    ["inline", ["missing"], "/inline/0"], ["supertypes", "start", "/supertypes"],
    ["conflicts", [["missing"]], "/conflicts/0/0"],
    ["precedences", [[symbol("missing")]], "/precedences/0/0/name"],
    ["precedences", [[blank]], "/precedences/0/0"],
    ["precedences", [["name"]], "/precedences/0/0"],
    ["rules", {}, "/rules"], ["rules", { "bad/name": blank }, "/rules/bad~1name"],
  ];
  for (const [key, value, path] of cases) {
    assert.throws(() => renderGrammar({ ...grammar(literal("x")), [key]: value }), error => error.message.includes(path), key);
  }
});

function workspace(t) {
  const directory = mkdtempSync(join(tmpdir(), "toolang-ebnf-test-"));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  return directory;
}

function cli(cwd, ...args) {
  const result = spawnSync(process.execPath, [SCRIPT, ...args], { cwd, encoding: "utf8" });
  assert.ifError(result.error);
  return result;
}

test("CLI generation is deterministic; check detects byte changes and never writes", t => {
  const cwd = workspace(t);
  const input = grammar(literal("x"));
  writeFileSync(join(cwd, "input.json"), JSON.stringify(input));
  const args = ["--input", "input.json", "--output", "result.ebnf"];
  let result = cli(cwd, ...args, "--check");
  assert.equal(result.status, 1);
  assert.match(result.stderr, /missing/);
  assert.deepEqual(readdirSync(cwd), ["input.json"]);
  result = cli(cwd, ...args);
  assert.equal(result.status, 0, result.stderr);
  const path = join(cwd, "result.ebnf");
  const expected = Buffer.from(renderGrammar(input));
  assert.deepEqual(readFileSync(path), expected);
  const before = statSync(path).mtimeMs;
  assert.equal(cli(cwd, ...args).status, 0);
  assert.equal(statSync(path).mtimeMs, before);
  assert.equal(cli(cwd, ...args, "--check").status, 0);
  writeFileSync(path, Buffer.concat([expected, Buffer.from(" ")]));
  const stale = readFileSync(path);
  result = cli(cwd, ...args, "--check");
  assert.equal(result.status, 1);
  assert.match(result.stderr, /stale/);
  assert.deepEqual(readFileSync(path), stale);
  assert.equal(cli(cwd, ...args).status, 0);
  assert.deepEqual(readFileSync(path), expected);
  assert.deepEqual(readdirSync(cwd).sort(), ["input.json", "result.ebnf"]);
});

test("invalid input and unknown CLI options preserve existing output", t => {
  const cwd = workspace(t);
  const path = join(cwd, "output.ebnf");
  const prior = "Keep this file.\n";
  writeFileSync(path, prior);
  for (const input of ["{", JSON.stringify(grammar(symbol("undefined"))),
    JSON.stringify(grammar({ type: "NEW_TYPE", content: literal("x") }))]) {
    writeFileSync(join(cwd, "input.json"), input);
    for (const flags of [[], ["--check"]]) {
      const result = cli(cwd, "--input", "input.json", "--output", "output.ebnf", ...flags);
      assert.equal(result.status, 1);
      assert.equal(readFileSync(path, "utf8"), prior);
      assert.deepEqual(readdirSync(cwd).sort(), ["input.json", "output.ebnf"]);
    }
  }
  assert.equal(cli(cwd, "--unknown").status, 1);
  const same = cli(cwd, "--input", "output.ebnf", "--output", "output.ebnf");
  assert.equal(same.status, 1);
  assert.match(same.stderr, /must differ/);
  assert.equal(readFileSync(path, "utf8"), prior);
});

test("repository conversion is complete and matches the generated artifact", t => {
  const input = JSON.parse(readFileSync(join(ROOT, "src/grammar.json"), "utf8"));
  const before = JSON.stringify(input);
  const result = renderGrammar(input);
  assert.equal(JSON.stringify(input), before, "rendering must not mutate its input");
  assert.equal(result, renderGrammar(input));
  assert.ok(result.endsWith("\n") && !result.endsWith("\n\n"));
  assert.ok(!result.includes("\r"));
  const expected = [...Object.keys(input.rules), ...input.externals
    .filter(rule => rule.type === "SYMBOL" && !Object.hasOwn(input.rules, rule.name)).map(rule => rule.name)];
  assert.deepEqual([...result.matchAll(/^(\w+) ::=/gm)].map(match => match[1]), expected);
  assert.equal(result, readFileSync(join(ROOT, "GRAMMAR.ebnf"), "utf8"));
  const cwd = workspace(t);
  const checked = cli(cwd, "--check");
  assert.equal(checked.status, 0, checked.stderr);
  assert.deepEqual(readdirSync(cwd), []);
});
