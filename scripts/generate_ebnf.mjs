import { readFileSync, writeFileSync, mkdtempSync, renameSync, rmSync } from "node:fs";
import { dirname, join, resolve } from "node:path";
import { fileURLToPath } from "node:url";
import { parseArgs } from "node:util";

const ROOT = resolve(dirname(fileURLToPath(import.meta.url)), "..");
const NAME = /^[A-Za-z_][A-Za-z0-9_]*$/;
const METADATA = ["$schema", "name", "word", "extras", "conflicts", "precedences",
  "inline", "supertypes", "externals"];
const PRECEDENCE = { choice: 1, sequence: 2, postfix: 3, atom: 4 };
const SHAPES = {
  BLANK: [], STRING: ["value"], SYMBOL: ["name"], PATTERN: ["value"],
  SEQ: ["members"], CHOICE: ["members"], REPEAT: ["content"], REPEAT1: ["content"],
  FIELD: ["name", "content"], ALIAS: ["value", "named", "content"],
  PREC: ["value", "content"], PREC_LEFT: ["value", "content"],
  PREC_RIGHT: ["value", "content"], PREC_DYNAMIC: ["value", "content"],
  TOKEN: ["content"], IMMEDIATE_TOKEN: ["content"],
};

function fail(path, message) {
  throw new Error(`Invalid grammar at ${path || "/"}: ${message}`);
}

function at(path, key) {
  return `${path}/${String(key).replaceAll("~", "~0").replaceAll("/", "~1")}`;
}

function object(value, path) {
  if (!value || typeof value !== "object" || Array.isArray(value)) fail(path, "expected an object");
}

function string(value, path) {
  if (typeof value !== "string") fail(path, "expected a string");
}

function name(value, path) {
  string(value, path);
  if (!NAME.test(value)) fail(path, "expected an ASCII rule name");
}

function array(value, path) {
  if (!Array.isArray(value)) fail(path, "expected an array");
}

function properties(value, required, optional, path) {
  object(value, path);
  for (const key of Object.keys(value)) {
    if (!required.includes(key) && !optional.includes(key)) fail(at(path, key), "unsupported property");
  }
  for (const key of required) {
    if (!Object.hasOwn(value, key)) fail(at(path, key), "missing required property");
  }
}

// Keep strings round-trippable while preventing nested or terminated comments.
function annotationJson(value) {
  return JSON.stringify(value).replaceAll("(*", "\\u0028*").replaceAll("*)", "*\\u0029");
}

function annotation(label, value) {
  return `(* ${label}${value === undefined ? "" : ` ${annotationJson(value)}`} *)`;
}

function metadataAnnotation(label, value) {
  const compact = annotation(label, value);
  if (!Array.isArray(value) || compact.length <= 100) return compact;
  return `(* ${label} [\n${value.map(entry => `  ${annotationJson(entry)}`).join(",\n")}\n] *)`;
}

function atom(text) {
  return { parts: [text], precedence: PRECEDENCE.atom };
}

function group(expression) {
  return ["(", ...expression.parts, ")"];
}

function postfix(expression, operator) {
  const parts = expression.precedence <= PRECEDENCE.postfix ? group(expression) : [...expression.parts];
  parts[parts.length - 1] += operator;
  return { parts, precedence: PRECEDENCE.postfix };
}

function production(ruleName, parts) {
  const lines = [`${ruleName} ::=`, " "];
  for (const part of parts) {
    if (lines.at(-1).length > 2 && lines.at(-1).length + part.length + 1 > 100) lines.push(" ");
    lines[lines.length - 1] += ` ${part}`;
  }
  lines[lines.length - 1] += ";";
  return lines.join("\n");
}

/** Render the evaluated grammar without executing authored code or scanner code. */
export function renderGrammar(grammar) {
  properties(grammar, ["name", "rules"], METADATA.filter(key => key !== "name"), "");
  name(grammar.name, "/name");
  object(grammar.rules, "/rules");
  const ruleNames = Object.keys(grammar.rules);
  if (!ruleNames.length) fail("/rules", "expected at least one rule");
  for (const ruleName of ruleNames) name(ruleName, at("/rules", ruleName));
  const known = new Set(ruleNames);
  const references = [];
  const externals = grammar.externals ?? [];
  if (Object.hasOwn(grammar, "externals")) array(grammar.externals, "/externals");
  externals.forEach((rule, index) => {
    const path = at("/externals", index);
    object(rule, path);
    if (rule.type === "SYMBOL") {
      name(rule.name, at(path, "name"));
      known.add(rule.name);
    } else if (rule.type !== "STRING") {
      fail(path, "unsupported external token; expected SYMBOL or STRING");
    }
  });

  function reference(value, path) {
    name(value, path);
    references.push([value, path]);
  }

  function expression(rule, path) {
    object(rule, path);
    if (typeof rule.type !== "string" || !Object.hasOwn(SHAPES, rule.type)) {
      fail(at(path, "type"), `unsupported rule type ${JSON.stringify(rule.type)}`);
    }
    properties(rule, ["type", ...SHAPES[rule.type]], rule.type === "PATTERN" ? ["flags"] : [], path);
    if (Object.hasOwn(rule, "name")) string(rule.name, at(path, "name"));
    if (Object.hasOwn(rule, "value")) {
      if (rule.type.startsWith("PREC")) {
        const integer = Number.isInteger(rule.value) && rule.value >= -2147483648 && rule.value <= 2147483647;
        if (!integer && !(rule.type !== "PREC_DYNAMIC" && typeof rule.value === "string")) {
          fail(at(path, "value"), "expected a 32-bit integer or a static precedence name");
        }
      } else string(rule.value, at(path, "value"));
    }
    if (Object.hasOwn(rule, "flags")) string(rule.flags, at(path, "flags"));
    if (rule.type === "ALIAS" && typeof rule.named !== "boolean") fail(at(path, "named"), "expected a boolean");

    switch (rule.type) {
      case "BLANK": return atom("? empty ?");
      case "STRING": return atom(JSON.stringify(rule.value));
      case "SYMBOL":
        reference(rule.name, at(path, "name"));
        return atom(rule.name);
      case "PATTERN":
        return atom(`? regex ${JSON.stringify(rule.value)}${Object.hasOwn(rule, "flags")
          ? ` flags ${JSON.stringify(rule.flags)}` : ""} ?`);
      case "SEQ":
      case "CHOICE": {
        array(rule.members, at(path, "members"));
        const children = rule.members.map((child, index) => expression(child, at(at(path, "members"), index)));
        if (!children.length) return atom(rule.type === "SEQ" ? "? empty ?" : "? no alternatives ?");
        if (rule.type === "CHOICE" && children.length === 2
            && rule.members.filter(child => child.type === "BLANK").length === 1) {
          return postfix(children[rule.members[0].type === "BLANK" ? 1 : 0], "?");
        }
        const precedence = rule.type === "SEQ" ? PRECEDENCE.sequence : PRECEDENCE.choice;
        const parts = children.flatMap((child, index) => [
          ...(rule.type === "CHOICE" && index ? ["|"] : []),
          ...(child.precedence < precedence ? group(child) : child.parts),
        ]);
        return { parts, precedence };
      }
      case "REPEAT":
      case "REPEAT1":
        return postfix(expression(rule.content, at(path, "content")), rule.type === "REPEAT" ? "*" : "+");
      default: {
        const labels = {
          FIELD: ["field", rule.name], ALIAS: ["alias", { value: rule.value, named: rule.named }],
          PREC: ["prec", rule.value], PREC_LEFT: ["prec.left", rule.value],
          PREC_RIGHT: ["prec.right", rule.value], PREC_DYNAMIC: ["prec.dynamic", rule.value],
          TOKEN: ["token"], IMMEDIATE_TOKEN: ["token.immediate"],
        };
        return {
          parts: [annotation(...labels[rule.type]), ...group(expression(rule.content, at(path, "content")))],
          // Keep the annotation and its operand together when quantified.
          precedence: PRECEDENCE.postfix,
        };
      }
    }
  }

  for (const key of ["$schema", "word"]) {
    if (Object.hasOwn(grammar, key)) string(grammar[key], at("", key));
  }
  if (Object.hasOwn(grammar, "word")) reference(grammar.word, "/word");
  for (const key of ["extras", "externals"]) {
    if (Object.hasOwn(grammar, key)) {
      array(grammar[key], at("", key));
      grammar[key].forEach((rule, index) => expression(rule, at(at("", key), index)));
    }
  }
  for (const key of ["inline", "supertypes"]) {
    if (Object.hasOwn(grammar, key)) {
      array(grammar[key], at("", key));
      grammar[key].forEach((value, index) => reference(value, at(at("", key), index)));
    }
  }
  for (const key of ["conflicts", "precedences"]) {
    if (!Object.hasOwn(grammar, key)) continue;
    array(grammar[key], at("", key));
    grammar[key].forEach((entries, index) => {
      const path = at(at("", key), index);
      array(entries, path);
      entries.forEach((entry, position) => {
        const entryPath = at(path, position);
        if (key === "conflicts") reference(entry, entryPath);
        else {
          object(entry, entryPath);
          if (entry.type !== "STRING" && entry.type !== "SYMBOL") fail(entryPath, "expected STRING or SYMBOL precedence entry");
          expression(entry, entryPath);
        }
      });
    });
  }

  const productions = ruleNames.map(ruleName => production(ruleName,
    expression(grammar.rules[ruleName], at("/rules", ruleName)).parts));
  const emitted = new Set(ruleNames);
  for (const external of externals) {
    if (external.type === "SYMBOL" && !emitted.has(external.name)) {
      productions.push(production(external.name, [`? external scanner token ${JSON.stringify(external.name)} ?`]));
      emitted.add(external.name);
    }
  }
  for (const [value, path] of references) {
    if (!known.has(value)) fail(path, `unresolved symbol ${JSON.stringify(value)}`);
  }

  const legend = `(* Generated by scripts/generate_ebnf.mjs from Tree-sitter grammar JSON; do not edit.
   Annotated implementation reference, including hidden and recovery rules.
   This is not a standalone valid-source grammar. See GRAMMAR.md for scanner,
   lexical, CST, and runtime constraints; an EBNF reader does not enforce them.

   ::= defines a production; | is choice; () groups; ? * + are postfix operators.
   Quoted terminals and regex payloads use JSON string escaping, without regex
   translation. Quoted strings are atomic even inside ? special sequences ?.
   ? empty ? is epsilon; ? no alternatives ? matches nothing.
   External token productions are opaque scanner contracts, not inferred rules.
   An annotation applies to its immediately following parenthesized operand.
   Grammar-level annotations preserve JSON metadata, including absent vs empty.
   Comment delimiters inside annotation strings use JSON Unicode escapes.
*)`;
  const metadata = METADATA.filter(key => Object.hasOwn(grammar, key))
    .map(key => metadataAnnotation(key, grammar[key])).join("\n");
  return `${legend}\n\n${metadata}\n\n${productions.join("\n\n")}\n`;
}

function run() {
  const { values } = parseArgs({ options: {
    input: { type: "string" }, output: { type: "string" }, check: { type: "boolean", default: false },
    help: { type: "boolean", default: false },
  } });
  if (values.help) {
    console.log("Usage: node scripts/generate_ebnf.mjs [--input PATH] [--output PATH] [--check]\n"
      + "Defaults: repository src/grammar.json and GRAMMAR.ebnf. --check never writes.");
    return;
  }
  const input = values.input === undefined ? join(ROOT, "src/grammar.json") : resolve(values.input);
  const output = values.output === undefined ? join(ROOT, "GRAMMAR.ebnf") : resolve(values.output);
  if (input === output) throw new Error("Input and output paths must differ");
  const rendered = Buffer.from(renderGrammar(JSON.parse(readFileSync(input, "utf8"))), "utf8");
  let existing;
  try {
    existing = readFileSync(output);
  } catch (error) {
    if (error.code !== "ENOENT") throw error;
  }
  if (existing?.equals(rendered)) return;
  if (values.check) throw new Error(`EBNF is ${existing ? "stale" : "missing"}: ${output}. Run npm run generate:ebnf.`);
  const temporary = mkdtempSync(join(dirname(output), ".ebnf-"));
  try {
    const path = join(temporary, "output");
    writeFileSync(path, rendered);
    renameSync(path, output);
  } finally {
    rmSync(temporary, { recursive: true, force: true });
  }
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  try {
    run();
  } catch (error) {
    console.error(error.message);
    process.exitCode = 1;
  }
}
