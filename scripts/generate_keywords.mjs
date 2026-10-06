import { writeFileSync } from "node:fs";
import { tables } from "../keywords.js";

let header = "// Generated from keywords.js; do not edit.\n";
for (const [context, words] of Object.entries(tables)) {
  const values = [...new Set(words)].sort();
  header += `static const char *const ${context}_keywords[] = {\n`;
  header += values.map(word => `  ${JSON.stringify(word)},\n`).join("");
  header += "};\n";
}
writeFileSync("src/keywords.h", header);
