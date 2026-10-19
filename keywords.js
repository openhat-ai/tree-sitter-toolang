// Language vocabulary and recognition contexts, independent of CST rule names.
const declarations = [
  "with", "struct", "psyche", "skill", "service", "prompt", "chore",
  "context", "instruct", "agic", "flow",
];
const operations = [
  "run", "seek", "ask", "generate", "map", "reduce", "keep", "drop", "sort", "repeat", "spawn", "await",
];
const clauses = [
  "until", "from", "windowing", "using", "if", "by", "in", "lane", "lanes",
  "ascending", "descending", "time", "times", "first", "last",
];
const queryKeys = ["models", "tools", "skills", "services", "psyches", "prompts"];
const routeKeys = ["hands", "handoffs"];
const roles = ["user", "assistant", "tool"];
const builtinTypes = ["Text", "Number", "Boolean", "Json", "Part"];
const recallSources = ["far", "near"];
const capKinds = ["psyche", "skill", "service", "prompt"];

// No inactive spelling is reserved. Future reservations need an explicit reason
// and a decision about each recognition context.
const reservedWords = [];
const directive = [...queryKeys, ...routeKeys, "recall", "lanes", "context", "instruct"];
const agic = [...roles, "pass", ...directive];
const flow = [
  ...declarations, ...operations, ...clauses,
  "let", "exec", "async", "_", ...agic, ...reservedWords,
];
const tables = {
  flow, agic, directive,
  operation_binding: [...operations, "async"],
  restricted_binding: ["until", "_", ...reservedWords],
};

module.exports = {
  queryKeys, routeKeys, roles, builtinTypes, recallSources, capKinds,
  reservedWords, tables,
};
