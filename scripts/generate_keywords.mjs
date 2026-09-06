import { readFileSync, writeFileSync } from "node:fs";

const { rules } = JSON.parse(readFileSync("src/grammar.json", "utf8"));

function words(rule) {
  if (rule.type === "STRING") return [rule.value];
  if (rule.type === "SYMBOL") return words(rules[rule.name]);
  if (rule.content) return words(rule.content);
  return (rule.members ?? []).flatMap(words);
}

let header = "// Generated from grammar.js; do not edit.\n";
for (const [context, rule] of [
  ["flow", "_flow_reserved_word"], ["agic", "_agic_reserved_word"],
  ["directive", "directive_key"],
]) {
  const values = [...new Set(words(rules[rule]))].sort();
  header += `static const char *const ${context}_keywords[] = {\n`;
  header += values.map(word => `  ${JSON.stringify(word)},\n`).join("");
  header += "};\n";
}
writeFileSync("src/keywords.h", header);
