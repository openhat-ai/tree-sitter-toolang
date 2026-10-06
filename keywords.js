// Language vocabulary and recognition contexts, independent of CST rule names.
const declarations = {
  with: "with_keyword", struct: "struct_keyword", psyche: "psyche_keyword",
  skill: "skill_keyword", service: "service_keyword", prompt: "prompt_keyword",
  task: "task_keyword", chore: "chore_keyword", context: "context_keyword",
  instruct: "instruct_keyword", agic: "agic_keyword", flow: "flow_keyword",
};
const operations = {
  run: "flow_run_keyword", seek: "flow_seek_keyword", ask: "flow_ask_keyword",
  generate: "flow_generate_keyword", map: "flow_map_keyword", reduce: "flow_reduce_keyword",
  keep: "flow_keep_keyword", drop: "flow_drop_keyword", sort: "flow_sort_keyword",
  repeat: "flow_repeat_keyword", spawn: "flow_spawn_keyword", await: "flow_await_keyword",
};
const clauses = {
  until: "flow_until_keyword", from: "flow_from_keyword", windowing: "flow_windowing_keyword",
  using: "flow_using_keyword", if: "flow_if_keyword", by: "flow_by_keyword",
  in: "flow_in_keyword", lane: "flow_lane_keyword", lanes: "flow_lanes_keyword",
  ascending: "flow_ascending_keyword", descending: "flow_descending_keyword",
  time: "flow_time_keyword", times: "flow_times_keyword",
  first: "flow_first_keyword", last: "flow_last_keyword",
};
const queryKeys = ["models", "tools", "skills", "services", "psyches", "prompts"];
const routeKeys = ["hands", "handoffs"];
const roles = ["user", "assistant", "tool"];
const builtinTypes = ["Text", "Number", "Boolean", "Json", "Part"];
const recallSources = ["far", "near"];
const capKinds = ["psyche", "skill", "service", "prompt"];

// No inactive spelling is reserved. Future reservations need an explicit reason
// and a decision about each recognition context and variable-name exclusion.
const reservedWords = [];
const wordNodes = {
  ...declarations, ...operations, ...clauses,
  let: "flow_let_keyword", exec: "flow_exec_keyword", async: "flow_async_keyword",
  pass: "pass_keyword", recall: "recall_keyword",
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
  // Recall sources are contextual values, not variable-name exclusions.
  variable: [...flow.filter(word => word !== "_"), "default", "none"],
};

module.exports = {
  wordNodes, queryKeys, routeKeys, roles, builtinTypes, recallSources, capKinds,
  reservedWords, tables,
};
