// Language vocabulary and recognition contexts, independent of CST rule names.
const declarations = {
  with: "with_keyword", struct: "struct_keyword", psyche: "psyche_keyword",
  skill: "skill_keyword", service: "service_keyword", prompt: "prompt_keyword",
  chore: "chore_keyword", context: "context_keyword",
  instruct: "instruct_keyword", agic: "agic_keyword", flow: "flow_keyword",
};
const operations = {
  run: "run_keyword", seek: "seek_keyword", ask: "ask_keyword",
  generate: "generate_keyword", map: "map_keyword", reduce: "reduce_keyword",
  keep: "keep_keyword", drop: "drop_keyword", sort: "sort_keyword",
  repeat: "repeat_keyword", spawn: "spawn_keyword", await: "await_keyword",
};
const clauses = {
  until: "until_keyword", from: "from_keyword", windowing: "windowing_keyword",
  using: "using_keyword", if: "if_keyword", by: "by_keyword",
  in: "in_keyword", lane: "lane_keyword", lanes: "lanes_keyword",
  ascending: "ascending_keyword", descending: "descending_keyword",
  time: "time_keyword", times: "times_keyword",
  first: "first_keyword", last: "last_keyword",
};
const queryKeys = ["models", "tools", "skills", "services", "psyches", "prompts"];
const routeKeys = ["hands", "handoffs"];
const roles = ["user", "assistant", "tool"];
const builtinTypes = ["Text", "Number", "Boolean", "Json", "Part"];
const recallSources = ["far", "near"];
const capKinds = ["psyche", "skill", "service", "prompt"];

// No inactive spelling is reserved. Future reservations need an explicit reason
// and a decision about each recognition context.
const reservedWords = [];
const wordNodes = {
  ...declarations, ...operations, ...clauses,
  let: "let_keyword", exec: "exec_keyword", async: "async_keyword",
  pass: "pass_keyword",
  default: "default_keyword", none: "none_keyword",
};
const directive = [...queryKeys, ...routeKeys, "recall", "lanes", "context", "instruct"];
const agic = [...roles, "pass", ...directive];
const flow = [
  ...Object.keys(declarations), ...Object.keys(operations), ...Object.keys(clauses),
  "let", "exec", "async", "_", ...agic, ...reservedWords,
];
const tables = {
  flow, agic, directive,
  operation_binding: [...Object.keys(operations), "async"],
  restricted_binding: ["until", "_", ...reservedWords],
};

module.exports = {
  wordNodes, queryKeys, routeKeys, roles, builtinTypes, recallSources, capKinds,
  reservedWords, tables,
};
