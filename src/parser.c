#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 1175
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 260
#define ALIAS_COUNT 1
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 106

enum ts_symbol_identifiers {
  sym__inline_comment = 1,
  anon_sym_ATparam = 2,
  aux_sym__doc_space_token1 = 3,
  sym_comment_text = 4,
  sym_builtin_type = 5,
  sym_array_suffix = 6,
  anon_sym__ = 7,
  aux_sym__invalid_named_binding_token1 = 8,
  sym_integer_literal = 9,
  sym__one_integer_literal = 10,
  sym__other_integer_literal = 11,
  anon_sym_lanes = 12,
  sym__query_directive_key = 13,
  sym__route_directive_key = 14,
  sym_directive_key = 15,
  sym_directive_operator = 16,
  sym_runnable_ref = 17,
  sym_recall_source = 18,
  sym_default_keyword = 19,
  sym_none_keyword = 20,
  sym_all_keyword = 21,
  sym_role = 22,
  sym_with_keyword = 23,
  sym_struct_keyword = 24,
  sym_psyche_keyword = 25,
  sym_skill_keyword = 26,
  sym_service_keyword = 27,
  sym_prompt_keyword = 28,
  sym_context_keyword = 29,
  sym_instruct_keyword = 30,
  sym_agic_keyword = 31,
  sym_task_keyword = 32,
  sym_chore_keyword = 33,
  sym_flow_keyword = 34,
  sym_pass_keyword = 35,
  sym_flow_run_keyword = 36,
  sym_flow_async_keyword = 37,
  sym_flow_await_keyword = 38,
  sym_flow_exec_keyword = 39,
  sym_flow_spawn_keyword = 40,
  sym_flow_let_keyword = 41,
  sym_flow_seek_keyword = 42,
  sym_flow_ask_keyword = 43,
  sym_flow_scatter_keyword = 44,
  sym_flow_storm_keyword = 45,
  sym_flow_generate_keyword = 46,
  sym_flow_gather_keyword = 47,
  sym_flow_settle_keyword = 48,
  sym_flow_reduce_keyword = 49,
  sym_flow_map_keyword = 50,
  sym_flow_keep_keyword = 51,
  sym_flow_drop_keyword = 52,
  sym_flow_sort_keyword = 53,
  sym_flow_rank_keyword = 54,
  sym_flow_repeat_keyword = 55,
  sym_flow_until_keyword = 56,
  sym_flow_from_keyword = 57,
  sym_flow_windowing_keyword = 58,
  sym_flow_using_keyword = 59,
  sym_flow_if_keyword = 60,
  sym_flow_by_keyword = 61,
  sym_flow_in_keyword = 62,
  sym_flow_lane_keyword = 63,
  sym_flow_ascending_keyword = 64,
  sym_flow_descending_keyword = 65,
  sym_flow_time_keyword = 66,
  sym_flow_times_keyword = 67,
  sym_flow_par_keyword = 68,
  sym_flow_first_keyword = 69,
  sym_flow_last_keyword = 70,
  sym_flow_top_keyword = 71,
  sym_flow_bottom_keyword = 72,
  sym_flow_think_keyword = 73,
  sym_flow_use_keyword = 74,
  sym_thunk_keyword = 75,
  sym_recall_keyword = 76,
  anon_sym_call = 77,
  anon_sym_do = 78,
  anon_sym_unfold = 79,
  anon_sym_each = 80,
  anon_sym_fold = 81,
  anon_sym_head = 82,
  anon_sym_tail = 83,
  sym_optional_marker = 84,
  sym_assign_operator = 85,
  sym_arrow = 86,
  sym_colon = 87,
  sym_lparen = 88,
  sym_rparen = 89,
  sym_comma = 90,
  sym_cap_kind = 91,
  sym_type_name = 92,
  sym__identifier = 93,
  sym__snake_kebab_name = 94,
  sym__text_line = 95,
  sym_newline = 96,
  sym_blank_line = 97,
  sym__comment_start = 98,
  sym_plain_comment = 99,
  sym_shebang_comment = 100,
  sym__module_doc_start = 101,
  sym__item_doc_start = 102,
  sym__param_item_doc_start = 103,
  sym__comment_end = 104,
  sym__indent = 105,
  sym__dedent = 106,
  sym__line_start = 107,
  sym__directive_start = 108,
  sym__until_start = 109,
  sym__from_start = 110,
  sym__reduce_indent = 111,
  sym__reduce_text_start = 112,
  sym__text_indent = 113,
  sym__cap_text_start = 114,
  sym_indented_raw_text = 115,
  sym__flow_raw_text = 116,
  sym__agic_raw_text = 117,
  sym__error_line = 118,
  sym__exec_binding_start = 119,
  sym__collection_binding_start = 120,
  sym__spawn_binding_start = 121,
  sym__reserved_binding_start = 122,
  sym__variable_name = 123,
  sym__async_await_binding_start = 124,
  sym_source_file = 125,
  sym__item = 126,
  sym_line_end = 127,
  sym_module_doc_comment = 128,
  sym_item_doc_comment = 129,
  sym_param_doc_tag = 130,
  sym__doc_space = 131,
  sym__trivia = 132,
  sym_with = 133,
  sym_type = 134,
  sym__base_type = 135,
  sym_struct = 136,
  sym_struct_body = 137,
  sym_field = 138,
  sym_psyche = 139,
  sym_skill = 140,
  sym_service = 141,
  sym_prompt = 142,
  sym__cap_definition = 143,
  sym__cap_text_body = 144,
  sym_task = 145,
  sym_chore = 146,
  sym_cap_name = 147,
  sym_job_name = 148,
  sym_job_body = 149,
  sym_property = 150,
  sym_instruct = 151,
  sym_context = 152,
  sym_text_inline = 153,
  sym_text_block = 154,
  sym_text_body = 155,
  sym_text_body_line = 156,
  sym_agic = 157,
  sym_agic_body = 158,
  sym_params = 159,
  sym_param = 160,
  sym__param_name = 161,
  sym_flow = 162,
  sym_flow_body = 163,
  sym_statements = 164,
  sym__flow_statement = 165,
  sym__flow_operation = 166,
  sym__collection_operation = 167,
  sym__bound_operation = 168,
  sym__invalid_collection_operation = 169,
  sym__invalid_spawn_operation = 170,
  sym__invalid_async_await_operation = 171,
  sym_let_statement = 172,
  sym_exec_statement = 173,
  sym_spawn_statement = 174,
  sym__invalid_exec_binding = 175,
  sym__invalid_reserved_binding = 176,
  sym__invalid_named_binding = 177,
  sym_run_statement = 178,
  sym__async_modifier = 179,
  sym__run = 180,
  sym__run_after_modifier = 181,
  sym__invalid_modified_run_tail = 182,
  sym_await_statement = 183,
  sym_implicit_run_statement = 184,
  sym__implicit_run_line = 185,
  sym_seek_statement = 186,
  sym_ask_statement = 187,
  sym_generate_statement = 188,
  sym_reduce_statement = 189,
  sym__reduce_inline_line = 190,
  sym__reduce_line = 191,
  sym__reduce_inline_block = 192,
  sym__reduce_text_body = 193,
  sym__from_complement = 194,
  sym_map_statement = 195,
  sym_keep_statement = 196,
  sym_drop_statement = 197,
  sym_sort_statement = 198,
  sym__named_using_complement = 199,
  sym__required_space = 200,
  sym__named_if_complement = 201,
  sym__inline_if_complement = 202,
  sym__named_by_complement = 203,
  sym__inline_by_complement = 204,
  sym__runnable_complements = 205,
  sym__if_complements = 206,
  sym__by_complements = 207,
  sym__lanes_complement = 208,
  sym__order_complement = 209,
  sym_repeat_statement = 210,
  sym_repeat_body = 211,
  sym__repeat_statements = 212,
  sym__window_complement = 213,
  sym__repeat_count_complement = 214,
  sym_until_clause = 215,
  sym_invalid_flow_reserved_statement = 216,
  sym_inline_agic = 217,
  sym_inline_agic_body = 218,
  sym_position = 219,
  sym_runnable_name = 220,
  sym_agent_name = 221,
  sym_local_name = 222,
  sym_directive = 223,
  sym_directive_value = 224,
  sym_route_value = 225,
  sym_recall_value = 226,
  sym__directives = 227,
  sym_text_ref = 228,
  sym_messages = 229,
  sym_message = 230,
  sym_unroled_message = 231,
  sym__unroled_message_line = 232,
  sym_invalid_agic_reserved_message = 233,
  sym__pass_statement = 234,
  sym_flow_lanes_keyword = 235,
  sym__flow_reserved_word = 236,
  sym__collection_binding_word = 237,
  sym__async_await_binding_word = 238,
  sym__reserved_binding_word = 239,
  sym__agic_reserved_word = 240,
  sym_identifier = 241,
  sym_text_line = 242,
  aux_sym_source_file_repeat1 = 243,
  aux_sym_type_repeat1 = 244,
  aux_sym_struct_body_repeat1 = 245,
  aux_sym_struct_body_repeat2 = 246,
  aux_sym__cap_definition_repeat1 = 247,
  aux_sym__cap_text_body_repeat1 = 248,
  aux_sym_job_body_repeat1 = 249,
  aux_sym_text_body_repeat1 = 250,
  aux_sym_params_repeat1 = 251,
  aux_sym_statements_repeat1 = 252,
  aux_sym_implicit_run_statement_repeat1 = 253,
  aux_sym__repeat_statements_repeat1 = 254,
  aux_sym_route_value_repeat1 = 255,
  aux_sym_recall_value_repeat1 = 256,
  aux_sym__directives_repeat1 = 257,
  aux_sym_messages_repeat1 = 258,
  aux_sym_unroled_message_repeat1 = 259,
  alias_sym_param_name = 260,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__inline_comment] = "plain_comment",
  [anon_sym_ATparam] = "@param",
  [aux_sym__doc_space_token1] = "_doc_space_token1",
  [sym_comment_text] = "comment_text",
  [sym_builtin_type] = "builtin_type",
  [sym_array_suffix] = "array_suffix",
  [anon_sym__] = "_",
  [aux_sym__invalid_named_binding_token1] = "_invalid_named_binding_token1",
  [sym_integer_literal] = "integer_literal",
  [sym__one_integer_literal] = "integer_literal",
  [sym__other_integer_literal] = "integer_literal",
  [anon_sym_lanes] = "lanes",
  [sym__query_directive_key] = "directive_key",
  [sym__route_directive_key] = "directive_key",
  [sym_directive_key] = "directive_key",
  [sym_directive_operator] = "directive_operator",
  [sym_runnable_ref] = "runnable_ref",
  [sym_recall_source] = "recall_source",
  [sym_default_keyword] = "default_keyword",
  [sym_none_keyword] = "none_keyword",
  [sym_all_keyword] = "all_keyword",
  [sym_role] = "role",
  [sym_with_keyword] = "with_keyword",
  [sym_struct_keyword] = "struct_keyword",
  [sym_psyche_keyword] = "psyche_keyword",
  [sym_skill_keyword] = "skill_keyword",
  [sym_service_keyword] = "service_keyword",
  [sym_prompt_keyword] = "prompt_keyword",
  [sym_context_keyword] = "context_keyword",
  [sym_instruct_keyword] = "instruct_keyword",
  [sym_agic_keyword] = "agic_keyword",
  [sym_task_keyword] = "task_keyword",
  [sym_chore_keyword] = "chore_keyword",
  [sym_flow_keyword] = "flow_keyword",
  [sym_pass_keyword] = "pass_keyword",
  [sym_flow_run_keyword] = "flow_run_keyword",
  [sym_flow_async_keyword] = "flow_async_keyword",
  [sym_flow_await_keyword] = "flow_await_keyword",
  [sym_flow_exec_keyword] = "flow_exec_keyword",
  [sym_flow_spawn_keyword] = "flow_spawn_keyword",
  [sym_flow_let_keyword] = "flow_let_keyword",
  [sym_flow_seek_keyword] = "flow_seek_keyword",
  [sym_flow_ask_keyword] = "flow_ask_keyword",
  [sym_flow_scatter_keyword] = "flow_scatter_keyword",
  [sym_flow_storm_keyword] = "flow_storm_keyword",
  [sym_flow_generate_keyword] = "flow_generate_keyword",
  [sym_flow_gather_keyword] = "flow_gather_keyword",
  [sym_flow_settle_keyword] = "flow_settle_keyword",
  [sym_flow_reduce_keyword] = "flow_reduce_keyword",
  [sym_flow_map_keyword] = "flow_map_keyword",
  [sym_flow_keep_keyword] = "flow_keep_keyword",
  [sym_flow_drop_keyword] = "flow_drop_keyword",
  [sym_flow_sort_keyword] = "flow_sort_keyword",
  [sym_flow_rank_keyword] = "flow_rank_keyword",
  [sym_flow_repeat_keyword] = "flow_repeat_keyword",
  [sym_flow_until_keyword] = "flow_until_keyword",
  [sym_flow_from_keyword] = "flow_from_keyword",
  [sym_flow_windowing_keyword] = "flow_windowing_keyword",
  [sym_flow_using_keyword] = "flow_using_keyword",
  [sym_flow_if_keyword] = "flow_if_keyword",
  [sym_flow_by_keyword] = "flow_by_keyword",
  [sym_flow_in_keyword] = "flow_in_keyword",
  [sym_flow_lane_keyword] = "flow_lane_keyword",
  [sym_flow_ascending_keyword] = "flow_ascending_keyword",
  [sym_flow_descending_keyword] = "flow_descending_keyword",
  [sym_flow_time_keyword] = "flow_time_keyword",
  [sym_flow_times_keyword] = "flow_times_keyword",
  [sym_flow_par_keyword] = "flow_par_keyword",
  [sym_flow_first_keyword] = "flow_first_keyword",
  [sym_flow_last_keyword] = "flow_last_keyword",
  [sym_flow_top_keyword] = "flow_top_keyword",
  [sym_flow_bottom_keyword] = "flow_bottom_keyword",
  [sym_flow_think_keyword] = "flow_think_keyword",
  [sym_flow_use_keyword] = "flow_use_keyword",
  [sym_thunk_keyword] = "thunk_keyword",
  [sym_recall_keyword] = "recall_keyword",
  [anon_sym_call] = "call",
  [anon_sym_do] = "do",
  [anon_sym_unfold] = "unfold",
  [anon_sym_each] = "each",
  [anon_sym_fold] = "fold",
  [anon_sym_head] = "head",
  [anon_sym_tail] = "tail",
  [sym_optional_marker] = "optional_marker",
  [sym_assign_operator] = "assign_operator",
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [sym_cap_kind] = "cap_kind",
  [sym_type_name] = "type_name",
  [sym__identifier] = "_identifier",
  [sym__snake_kebab_name] = "_snake_kebab_name",
  [sym__text_line] = "_text_line",
  [sym_newline] = "newline",
  [sym_blank_line] = "blank_line",
  [sym__comment_start] = "_comment_start",
  [sym_plain_comment] = "plain_comment",
  [sym_shebang_comment] = "shebang_comment",
  [sym__module_doc_start] = "_module_doc_start",
  [sym__item_doc_start] = "_item_doc_start",
  [sym__param_item_doc_start] = "_param_item_doc_start",
  [sym__comment_end] = "_comment_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__line_start] = "_line_start",
  [sym__directive_start] = "_directive_start",
  [sym__until_start] = "_until_start",
  [sym__from_start] = "_from_start",
  [sym__reduce_indent] = "_reduce_indent",
  [sym__reduce_text_start] = "_reduce_text_start",
  [sym__text_indent] = "_text_indent",
  [sym__cap_text_start] = "_cap_text_start",
  [sym_indented_raw_text] = "indented_raw_text",
  [sym__flow_raw_text] = "indented_raw_text",
  [sym__agic_raw_text] = "indented_raw_text",
  [sym__error_line] = "_error_line",
  [sym__exec_binding_start] = "_exec_binding_start",
  [sym__collection_binding_start] = "_collection_binding_start",
  [sym__spawn_binding_start] = "_spawn_binding_start",
  [sym__reserved_binding_start] = "_reserved_binding_start",
  [sym__variable_name] = "_variable_name",
  [sym__async_await_binding_start] = "_async_await_binding_start",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_line_end] = "line_end",
  [sym_module_doc_comment] = "module_doc_comment",
  [sym_item_doc_comment] = "item_doc_comment",
  [sym_param_doc_tag] = "param_doc_tag",
  [sym__doc_space] = "_doc_space",
  [sym__trivia] = "_trivia",
  [sym_with] = "with",
  [sym_type] = "type",
  [sym__base_type] = "_base_type",
  [sym_struct] = "struct",
  [sym_struct_body] = "struct_body",
  [sym_field] = "field",
  [sym_psyche] = "psyche",
  [sym_skill] = "skill",
  [sym_service] = "service",
  [sym_prompt] = "prompt",
  [sym__cap_definition] = "_cap_definition",
  [sym__cap_text_body] = "text_body",
  [sym_task] = "task",
  [sym_chore] = "chore",
  [sym_cap_name] = "cap_name",
  [sym_job_name] = "job_name",
  [sym_job_body] = "job_body",
  [sym_property] = "property",
  [sym_instruct] = "instruct",
  [sym_context] = "context",
  [sym_text_inline] = "text_inline",
  [sym_text_block] = "text_block",
  [sym_text_body] = "text_body",
  [sym_text_body_line] = "text_body_line",
  [sym_agic] = "agic",
  [sym_agic_body] = "agic_body",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym__param_name] = "_param_name",
  [sym_flow] = "flow",
  [sym_flow_body] = "flow_body",
  [sym_statements] = "statements",
  [sym__flow_statement] = "_flow_statement",
  [sym__flow_operation] = "_flow_operation",
  [sym__collection_operation] = "_collection_operation",
  [sym__bound_operation] = "_bound_operation",
  [sym__invalid_collection_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_spawn_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_async_await_operation] = "invalid_flow_reserved_statement",
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_spawn_statement] = "spawn_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
  [sym__invalid_reserved_binding] = "invalid_flow_reserved_statement",
  [sym__invalid_named_binding] = "invalid_flow_reserved_statement",
  [sym_run_statement] = "run_statement",
  [sym__async_modifier] = "_async_modifier",
  [sym__run] = "_run",
  [sym__run_after_modifier] = "_run_after_modifier",
  [sym__invalid_modified_run_tail] = "invalid_flow_reserved_statement",
  [sym_await_statement] = "await_statement",
  [sym_implicit_run_statement] = "implicit_run_statement",
  [sym__implicit_run_line] = "text_body_line",
  [sym_seek_statement] = "seek_statement",
  [sym_ask_statement] = "ask_statement",
  [sym_generate_statement] = "generate_statement",
  [sym_reduce_statement] = "reduce_statement",
  [sym__reduce_inline_line] = "inline_agic",
  [sym__reduce_line] = "text_inline",
  [sym__reduce_inline_block] = "inline_agic",
  [sym__reduce_text_body] = "text_body",
  [sym__from_complement] = "_from_complement",
  [sym_map_statement] = "map_statement",
  [sym_keep_statement] = "keep_statement",
  [sym_drop_statement] = "drop_statement",
  [sym_sort_statement] = "sort_statement",
  [sym__named_using_complement] = "_named_using_complement",
  [sym__required_space] = "_required_space",
  [sym__named_if_complement] = "_named_if_complement",
  [sym__inline_if_complement] = "_inline_if_complement",
  [sym__named_by_complement] = "_named_by_complement",
  [sym__inline_by_complement] = "_inline_by_complement",
  [sym__runnable_complements] = "_runnable_complements",
  [sym__if_complements] = "_if_complements",
  [sym__by_complements] = "_by_complements",
  [sym__lanes_complement] = "_lanes_complement",
  [sym__order_complement] = "_order_complement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_repeat_body] = "repeat_body",
  [sym__repeat_statements] = "_repeat_statements",
  [sym__window_complement] = "_window_complement",
  [sym__repeat_count_complement] = "_repeat_count_complement",
  [sym_until_clause] = "until_clause",
  [sym_invalid_flow_reserved_statement] = "invalid_flow_reserved_statement",
  [sym_inline_agic] = "inline_agic",
  [sym_inline_agic_body] = "inline_agic_body",
  [sym_position] = "position",
  [sym_runnable_name] = "runnable_name",
  [sym_agent_name] = "agent_name",
  [sym_local_name] = "local_name",
  [sym_directive] = "directive",
  [sym_directive_value] = "directive_value",
  [sym_route_value] = "route_value",
  [sym_recall_value] = "recall_value",
  [sym__directives] = "_directives",
  [sym_text_ref] = "text_ref",
  [sym_messages] = "messages",
  [sym_message] = "message",
  [sym_unroled_message] = "unroled_message",
  [sym__unroled_message_line] = "text_body_line",
  [sym_invalid_agic_reserved_message] = "invalid_agic_reserved_message",
  [sym__pass_statement] = "_pass_statement",
  [sym_flow_lanes_keyword] = "flow_lanes_keyword",
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__collection_binding_word] = "_collection_binding_word",
  [sym__async_await_binding_word] = "_async_await_binding_word",
  [sym__reserved_binding_word] = "_reserved_binding_word",
  [sym__agic_reserved_word] = "_agic_reserved_word",
  [sym_identifier] = "identifier",
  [sym_text_line] = "text_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_struct_body_repeat2] = "struct_body_repeat2",
  [aux_sym__cap_definition_repeat1] = "_cap_definition_repeat1",
  [aux_sym__cap_text_body_repeat1] = "_cap_text_body_repeat1",
  [aux_sym_job_body_repeat1] = "job_body_repeat1",
  [aux_sym_text_body_repeat1] = "text_body_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_implicit_run_statement_repeat1] = "implicit_run_statement_repeat1",
  [aux_sym__repeat_statements_repeat1] = "_repeat_statements_repeat1",
  [aux_sym_route_value_repeat1] = "route_value_repeat1",
  [aux_sym_recall_value_repeat1] = "recall_value_repeat1",
  [aux_sym__directives_repeat1] = "_directives_repeat1",
  [aux_sym_messages_repeat1] = "messages_repeat1",
  [aux_sym_unroled_message_repeat1] = "unroled_message_repeat1",
  [alias_sym_param_name] = "param_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__inline_comment] = sym_plain_comment,
  [anon_sym_ATparam] = anon_sym_ATparam,
  [aux_sym__doc_space_token1] = aux_sym__doc_space_token1,
  [sym_comment_text] = sym_comment_text,
  [sym_builtin_type] = sym_builtin_type,
  [sym_array_suffix] = sym_array_suffix,
  [anon_sym__] = anon_sym__,
  [aux_sym__invalid_named_binding_token1] = aux_sym__invalid_named_binding_token1,
  [sym_integer_literal] = sym_integer_literal,
  [sym__one_integer_literal] = sym_integer_literal,
  [sym__other_integer_literal] = sym_integer_literal,
  [anon_sym_lanes] = anon_sym_lanes,
  [sym__query_directive_key] = sym_directive_key,
  [sym__route_directive_key] = sym_directive_key,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_operator] = sym_directive_operator,
  [sym_runnable_ref] = sym_runnable_ref,
  [sym_recall_source] = sym_recall_source,
  [sym_default_keyword] = sym_default_keyword,
  [sym_none_keyword] = sym_none_keyword,
  [sym_all_keyword] = sym_all_keyword,
  [sym_role] = sym_role,
  [sym_with_keyword] = sym_with_keyword,
  [sym_struct_keyword] = sym_struct_keyword,
  [sym_psyche_keyword] = sym_psyche_keyword,
  [sym_skill_keyword] = sym_skill_keyword,
  [sym_service_keyword] = sym_service_keyword,
  [sym_prompt_keyword] = sym_prompt_keyword,
  [sym_context_keyword] = sym_context_keyword,
  [sym_instruct_keyword] = sym_instruct_keyword,
  [sym_agic_keyword] = sym_agic_keyword,
  [sym_task_keyword] = sym_task_keyword,
  [sym_chore_keyword] = sym_chore_keyword,
  [sym_flow_keyword] = sym_flow_keyword,
  [sym_pass_keyword] = sym_pass_keyword,
  [sym_flow_run_keyword] = sym_flow_run_keyword,
  [sym_flow_async_keyword] = sym_flow_async_keyword,
  [sym_flow_await_keyword] = sym_flow_await_keyword,
  [sym_flow_exec_keyword] = sym_flow_exec_keyword,
  [sym_flow_spawn_keyword] = sym_flow_spawn_keyword,
  [sym_flow_let_keyword] = sym_flow_let_keyword,
  [sym_flow_seek_keyword] = sym_flow_seek_keyword,
  [sym_flow_ask_keyword] = sym_flow_ask_keyword,
  [sym_flow_scatter_keyword] = sym_flow_scatter_keyword,
  [sym_flow_storm_keyword] = sym_flow_storm_keyword,
  [sym_flow_generate_keyword] = sym_flow_generate_keyword,
  [sym_flow_gather_keyword] = sym_flow_gather_keyword,
  [sym_flow_settle_keyword] = sym_flow_settle_keyword,
  [sym_flow_reduce_keyword] = sym_flow_reduce_keyword,
  [sym_flow_map_keyword] = sym_flow_map_keyword,
  [sym_flow_keep_keyword] = sym_flow_keep_keyword,
  [sym_flow_drop_keyword] = sym_flow_drop_keyword,
  [sym_flow_sort_keyword] = sym_flow_sort_keyword,
  [sym_flow_rank_keyword] = sym_flow_rank_keyword,
  [sym_flow_repeat_keyword] = sym_flow_repeat_keyword,
  [sym_flow_until_keyword] = sym_flow_until_keyword,
  [sym_flow_from_keyword] = sym_flow_from_keyword,
  [sym_flow_windowing_keyword] = sym_flow_windowing_keyword,
  [sym_flow_using_keyword] = sym_flow_using_keyword,
  [sym_flow_if_keyword] = sym_flow_if_keyword,
  [sym_flow_by_keyword] = sym_flow_by_keyword,
  [sym_flow_in_keyword] = sym_flow_in_keyword,
  [sym_flow_lane_keyword] = sym_flow_lane_keyword,
  [sym_flow_ascending_keyword] = sym_flow_ascending_keyword,
  [sym_flow_descending_keyword] = sym_flow_descending_keyword,
  [sym_flow_time_keyword] = sym_flow_time_keyword,
  [sym_flow_times_keyword] = sym_flow_times_keyword,
  [sym_flow_par_keyword] = sym_flow_par_keyword,
  [sym_flow_first_keyword] = sym_flow_first_keyword,
  [sym_flow_last_keyword] = sym_flow_last_keyword,
  [sym_flow_top_keyword] = sym_flow_top_keyword,
  [sym_flow_bottom_keyword] = sym_flow_bottom_keyword,
  [sym_flow_think_keyword] = sym_flow_think_keyword,
  [sym_flow_use_keyword] = sym_flow_use_keyword,
  [sym_thunk_keyword] = sym_thunk_keyword,
  [sym_recall_keyword] = sym_recall_keyword,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_unfold] = anon_sym_unfold,
  [anon_sym_each] = anon_sym_each,
  [anon_sym_fold] = anon_sym_fold,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_tail] = anon_sym_tail,
  [sym_optional_marker] = sym_optional_marker,
  [sym_assign_operator] = sym_assign_operator,
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [sym_cap_kind] = sym_cap_kind,
  [sym_type_name] = sym_type_name,
  [sym__identifier] = sym__identifier,
  [sym__snake_kebab_name] = sym__snake_kebab_name,
  [sym__text_line] = sym__text_line,
  [sym_newline] = sym_newline,
  [sym_blank_line] = sym_blank_line,
  [sym__comment_start] = sym__comment_start,
  [sym_plain_comment] = sym_plain_comment,
  [sym_shebang_comment] = sym_shebang_comment,
  [sym__module_doc_start] = sym__module_doc_start,
  [sym__item_doc_start] = sym__item_doc_start,
  [sym__param_item_doc_start] = sym__param_item_doc_start,
  [sym__comment_end] = sym__comment_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__line_start] = sym__line_start,
  [sym__directive_start] = sym__directive_start,
  [sym__until_start] = sym__until_start,
  [sym__from_start] = sym__from_start,
  [sym__reduce_indent] = sym__reduce_indent,
  [sym__reduce_text_start] = sym__reduce_text_start,
  [sym__text_indent] = sym__text_indent,
  [sym__cap_text_start] = sym__cap_text_start,
  [sym_indented_raw_text] = sym_indented_raw_text,
  [sym__flow_raw_text] = sym_indented_raw_text,
  [sym__agic_raw_text] = sym_indented_raw_text,
  [sym__error_line] = sym__error_line,
  [sym__exec_binding_start] = sym__exec_binding_start,
  [sym__collection_binding_start] = sym__collection_binding_start,
  [sym__spawn_binding_start] = sym__spawn_binding_start,
  [sym__reserved_binding_start] = sym__reserved_binding_start,
  [sym__variable_name] = sym__variable_name,
  [sym__async_await_binding_start] = sym__async_await_binding_start,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_line_end] = sym_line_end,
  [sym_module_doc_comment] = sym_module_doc_comment,
  [sym_item_doc_comment] = sym_item_doc_comment,
  [sym_param_doc_tag] = sym_param_doc_tag,
  [sym__doc_space] = sym__doc_space,
  [sym__trivia] = sym__trivia,
  [sym_with] = sym_with,
  [sym_type] = sym_type,
  [sym__base_type] = sym__base_type,
  [sym_struct] = sym_struct,
  [sym_struct_body] = sym_struct_body,
  [sym_field] = sym_field,
  [sym_psyche] = sym_psyche,
  [sym_skill] = sym_skill,
  [sym_service] = sym_service,
  [sym_prompt] = sym_prompt,
  [sym__cap_definition] = sym__cap_definition,
  [sym__cap_text_body] = sym_text_body,
  [sym_task] = sym_task,
  [sym_chore] = sym_chore,
  [sym_cap_name] = sym_cap_name,
  [sym_job_name] = sym_job_name,
  [sym_job_body] = sym_job_body,
  [sym_property] = sym_property,
  [sym_instruct] = sym_instruct,
  [sym_context] = sym_context,
  [sym_text_inline] = sym_text_inline,
  [sym_text_block] = sym_text_block,
  [sym_text_body] = sym_text_body,
  [sym_text_body_line] = sym_text_body_line,
  [sym_agic] = sym_agic,
  [sym_agic_body] = sym_agic_body,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym__param_name] = sym__param_name,
  [sym_flow] = sym_flow,
  [sym_flow_body] = sym_flow_body,
  [sym_statements] = sym_statements,
  [sym__flow_statement] = sym__flow_statement,
  [sym__flow_operation] = sym__flow_operation,
  [sym__collection_operation] = sym__collection_operation,
  [sym__bound_operation] = sym__bound_operation,
  [sym__invalid_collection_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_spawn_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_async_await_operation] = sym_invalid_flow_reserved_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_spawn_statement] = sym_spawn_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
  [sym__invalid_reserved_binding] = sym_invalid_flow_reserved_statement,
  [sym__invalid_named_binding] = sym_invalid_flow_reserved_statement,
  [sym_run_statement] = sym_run_statement,
  [sym__async_modifier] = sym__async_modifier,
  [sym__run] = sym__run,
  [sym__run_after_modifier] = sym__run_after_modifier,
  [sym__invalid_modified_run_tail] = sym_invalid_flow_reserved_statement,
  [sym_await_statement] = sym_await_statement,
  [sym_implicit_run_statement] = sym_implicit_run_statement,
  [sym__implicit_run_line] = sym_text_body_line,
  [sym_seek_statement] = sym_seek_statement,
  [sym_ask_statement] = sym_ask_statement,
  [sym_generate_statement] = sym_generate_statement,
  [sym_reduce_statement] = sym_reduce_statement,
  [sym__reduce_inline_line] = sym_inline_agic,
  [sym__reduce_line] = sym_text_inline,
  [sym__reduce_inline_block] = sym_inline_agic,
  [sym__reduce_text_body] = sym_text_body,
  [sym__from_complement] = sym__from_complement,
  [sym_map_statement] = sym_map_statement,
  [sym_keep_statement] = sym_keep_statement,
  [sym_drop_statement] = sym_drop_statement,
  [sym_sort_statement] = sym_sort_statement,
  [sym__named_using_complement] = sym__named_using_complement,
  [sym__required_space] = sym__required_space,
  [sym__named_if_complement] = sym__named_if_complement,
  [sym__inline_if_complement] = sym__inline_if_complement,
  [sym__named_by_complement] = sym__named_by_complement,
  [sym__inline_by_complement] = sym__inline_by_complement,
  [sym__runnable_complements] = sym__runnable_complements,
  [sym__if_complements] = sym__if_complements,
  [sym__by_complements] = sym__by_complements,
  [sym__lanes_complement] = sym__lanes_complement,
  [sym__order_complement] = sym__order_complement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_repeat_body] = sym_repeat_body,
  [sym__repeat_statements] = sym__repeat_statements,
  [sym__window_complement] = sym__window_complement,
  [sym__repeat_count_complement] = sym__repeat_count_complement,
  [sym_until_clause] = sym_until_clause,
  [sym_invalid_flow_reserved_statement] = sym_invalid_flow_reserved_statement,
  [sym_inline_agic] = sym_inline_agic,
  [sym_inline_agic_body] = sym_inline_agic_body,
  [sym_position] = sym_position,
  [sym_runnable_name] = sym_runnable_name,
  [sym_agent_name] = sym_agent_name,
  [sym_local_name] = sym_local_name,
  [sym_directive] = sym_directive,
  [sym_directive_value] = sym_directive_value,
  [sym_route_value] = sym_route_value,
  [sym_recall_value] = sym_recall_value,
  [sym__directives] = sym__directives,
  [sym_text_ref] = sym_text_ref,
  [sym_messages] = sym_messages,
  [sym_message] = sym_message,
  [sym_unroled_message] = sym_unroled_message,
  [sym__unroled_message_line] = sym_text_body_line,
  [sym_invalid_agic_reserved_message] = sym_invalid_agic_reserved_message,
  [sym__pass_statement] = sym__pass_statement,
  [sym_flow_lanes_keyword] = sym_flow_lanes_keyword,
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__collection_binding_word] = sym__collection_binding_word,
  [sym__async_await_binding_word] = sym__async_await_binding_word,
  [sym__reserved_binding_word] = sym__reserved_binding_word,
  [sym__agic_reserved_word] = sym__agic_reserved_word,
  [sym_identifier] = sym_identifier,
  [sym_text_line] = sym_text_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_struct_body_repeat2] = aux_sym_struct_body_repeat2,
  [aux_sym__cap_definition_repeat1] = aux_sym__cap_definition_repeat1,
  [aux_sym__cap_text_body_repeat1] = aux_sym__cap_text_body_repeat1,
  [aux_sym_job_body_repeat1] = aux_sym_job_body_repeat1,
  [aux_sym_text_body_repeat1] = aux_sym_text_body_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_implicit_run_statement_repeat1] = aux_sym_implicit_run_statement_repeat1,
  [aux_sym__repeat_statements_repeat1] = aux_sym__repeat_statements_repeat1,
  [aux_sym_route_value_repeat1] = aux_sym_route_value_repeat1,
  [aux_sym_recall_value_repeat1] = aux_sym_recall_value_repeat1,
  [aux_sym__directives_repeat1] = aux_sym__directives_repeat1,
  [aux_sym_messages_repeat1] = aux_sym_messages_repeat1,
  [aux_sym_unroled_message_repeat1] = aux_sym_unroled_message_repeat1,
  [alias_sym_param_name] = alias_sym_param_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__doc_space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_suffix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__invalid_named_binding_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__one_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__other_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lanes] = {
    .visible = true,
    .named = false,
  },
  [sym__query_directive_key] = {
    .visible = true,
    .named = true,
  },
  [sym__route_directive_key] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_key] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_runnable_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_recall_source] = {
    .visible = true,
    .named = true,
  },
  [sym_default_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_none_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_all_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_with_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_skill_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_service_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_context_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_agic_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_task_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_chore_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_pass_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_run_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_async_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_await_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_exec_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_spawn_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_let_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_seek_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_ask_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_scatter_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_storm_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_generate_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_gather_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_settle_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_reduce_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_map_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_keep_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_drop_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_sort_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_rank_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_repeat_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_until_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_from_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_windowing_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_using_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_if_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_by_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_in_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_lane_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_ascending_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_descending_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_time_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_times_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_par_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_first_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_last_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_top_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_bottom_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_think_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_thunk_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_recall_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unfold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_each] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tail] = {
    .visible = true,
    .named = false,
  },
  [sym_optional_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_kind] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__snake_kebab_name] = {
    .visible = false,
    .named = true,
  },
  [sym__text_line] = {
    .visible = false,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_start] = {
    .visible = false,
    .named = true,
  },
  [sym_plain_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__module_doc_start] = {
    .visible = false,
    .named = true,
  },
  [sym__item_doc_start] = {
    .visible = false,
    .named = true,
  },
  [sym__param_item_doc_start] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_end] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__line_start] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_start] = {
    .visible = false,
    .named = true,
  },
  [sym__until_start] = {
    .visible = false,
    .named = true,
  },
  [sym__from_start] = {
    .visible = false,
    .named = true,
  },
  [sym__reduce_indent] = {
    .visible = false,
    .named = true,
  },
  [sym__reduce_text_start] = {
    .visible = false,
    .named = true,
  },
  [sym__text_indent] = {
    .visible = false,
    .named = true,
  },
  [sym__cap_text_start] = {
    .visible = false,
    .named = true,
  },
  [sym_indented_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__agic_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym__error_line] = {
    .visible = false,
    .named = true,
  },
  [sym__exec_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym__spawn_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym__reserved_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_name] = {
    .visible = false,
    .named = true,
  },
  [sym__async_await_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_line_end] = {
    .visible = true,
    .named = true,
  },
  [sym_module_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_item_doc_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_param_doc_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__doc_space] = {
    .visible = false,
    .named = true,
  },
  [sym__trivia] = {
    .visible = false,
    .named = true,
  },
  [sym_with] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__base_type] = {
    .visible = false,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_psyche] = {
    .visible = true,
    .named = true,
  },
  [sym_skill] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym__cap_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__cap_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_chore] = {
    .visible = true,
    .named = true,
  },
  [sym_cap_name] = {
    .visible = true,
    .named = true,
  },
  [sym_job_name] = {
    .visible = true,
    .named = true,
  },
  [sym_job_body] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_text_inline] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym_text_body_line] = {
    .visible = true,
    .named = true,
  },
  [sym_agic] = {
    .visible = true,
    .named = true,
  },
  [sym_agic_body] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym__param_name] = {
    .visible = false,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__flow_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__bound_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__invalid_collection_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_spawn_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_async_await_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_spawn_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_exec_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_reserved_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_named_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_run_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__async_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym__run] = {
    .visible = false,
    .named = true,
  },
  [sym__run_after_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym__invalid_modified_run_tail] = {
    .visible = true,
    .named = true,
  },
  [sym_await_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_run_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_run_line] = {
    .visible = true,
    .named = true,
  },
  [sym_seek_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ask_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_generate_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_reduce_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__reduce_inline_line] = {
    .visible = true,
    .named = true,
  },
  [sym__reduce_line] = {
    .visible = true,
    .named = true,
  },
  [sym__reduce_inline_block] = {
    .visible = true,
    .named = true,
  },
  [sym__reduce_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym__from_complement] = {
    .visible = false,
    .named = true,
  },
  [sym_map_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keep_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_drop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__named_using_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__required_space] = {
    .visible = false,
    .named = true,
  },
  [sym__named_if_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_if_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__named_by_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_by_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__runnable_complements] = {
    .visible = false,
    .named = true,
  },
  [sym__if_complements] = {
    .visible = false,
    .named = true,
  },
  [sym__by_complements] = {
    .visible = false,
    .named = true,
  },
  [sym__lanes_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__order_complement] = {
    .visible = false,
    .named = true,
  },
  [sym_repeat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_body] = {
    .visible = true,
    .named = true,
  },
  [sym__repeat_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__window_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__repeat_count_complement] = {
    .visible = false,
    .named = true,
  },
  [sym_until_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_flow_reserved_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_agic] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_agic_body] = {
    .visible = true,
    .named = true,
  },
  [sym_position] = {
    .visible = true,
    .named = true,
  },
  [sym_runnable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_agent_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [sym_route_value] = {
    .visible = true,
    .named = true,
  },
  [sym_recall_value] = {
    .visible = true,
    .named = true,
  },
  [sym__directives] = {
    .visible = false,
    .named = true,
  },
  [sym_text_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_messages] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_unroled_message] = {
    .visible = true,
    .named = true,
  },
  [sym__unroled_message_line] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_agic_reserved_message] = {
    .visible = true,
    .named = true,
  },
  [sym__pass_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_flow_lanes_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_reserved_word] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_binding_word] = {
    .visible = false,
    .named = true,
  },
  [sym__async_await_binding_word] = {
    .visible = false,
    .named = true,
  },
  [sym__reserved_binding_word] = {
    .visible = false,
    .named = true,
  },
  [sym__agic_reserved_word] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cap_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cap_text_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_job_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_implicit_run_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__repeat_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_route_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recall_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__directives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_messages_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unroled_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_param_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_agent = 1,
  field_agic = 2,
  field_arrow = 3,
  field_async = 4,
  field_base = 5,
  field_body = 6,
  field_colon = 7,
  field_content = 8,
  field_count = 9,
  field_description = 10,
  field_from = 11,
  field_handle = 12,
  field_key = 13,
  field_keyword = 14,
  field_kind = 15,
  field_lanes = 16,
  field_name = 17,
  field_operator = 18,
  field_optional = 19,
  field_order = 20,
  field_param = 21,
  field_parameter = 22,
  field_params = 23,
  field_property = 24,
  field_reference = 25,
  field_return = 26,
  field_runnable = 27,
  field_selection = 28,
  field_side = 29,
  field_statement = 30,
  field_suffix = 31,
  field_target = 32,
  field_text = 33,
  field_type = 34,
  field_until = 35,
  field_value = 36,
  field_window = 37,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_agent] = "agent",
  [field_agic] = "agic",
  [field_arrow] = "arrow",
  [field_async] = "async",
  [field_base] = "base",
  [field_body] = "body",
  [field_colon] = "colon",
  [field_content] = "content",
  [field_count] = "count",
  [field_description] = "description",
  [field_from] = "from",
  [field_handle] = "handle",
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_lanes] = "lanes",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_optional] = "optional",
  [field_order] = "order",
  [field_param] = "param",
  [field_parameter] = "parameter",
  [field_params] = "params",
  [field_property] = "property",
  [field_reference] = "reference",
  [field_return] = "return",
  [field_runnable] = "runnable",
  [field_selection] = "selection",
  [field_side] = "side",
  [field_statement] = "statement",
  [field_suffix] = "suffix",
  [field_target] = "target",
  [field_text] = "text",
  [field_type] = "type",
  [field_until] = "until",
  [field_value] = "value",
  [field_window] = "window",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 5},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 3},
  [13] = {.index = 25, .length = 1},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 4},
  [16] = {.index = 32, .length = 4},
  [17] = {.index = 36, .length = 2},
  [18] = {.index = 38, .length = 2},
  [19] = {.index = 40, .length = 2},
  [20] = {.index = 42, .length = 3},
  [21] = {.index = 45, .length = 4},
  [22] = {.index = 49, .length = 2},
  [23] = {.index = 51, .length = 1},
  [24] = {.index = 52, .length = 1},
  [25] = {.index = 53, .length = 5},
  [26] = {.index = 58, .length = 1},
  [27] = {.index = 59, .length = 4},
  [28] = {.index = 63, .length = 5},
  [29] = {.index = 68, .length = 1},
  [30] = {.index = 69, .length = 1},
  [31] = {.index = 70, .length = 2},
  [32] = {.index = 72, .length = 1},
  [33] = {.index = 73, .length = 1},
  [34] = {.index = 74, .length = 2},
  [35] = {.index = 76, .length = 6},
  [36] = {.index = 82, .length = 6},
  [37] = {.index = 88, .length = 1},
  [38] = {.index = 89, .length = 1},
  [39] = {.index = 90, .length = 1},
  [40] = {.index = 91, .length = 4},
  [41] = {.index = 95, .length = 2},
  [42] = {.index = 97, .length = 1},
  [43] = {.index = 98, .length = 1},
  [44] = {.index = 99, .length = 1},
  [45] = {.index = 100, .length = 3},
  [46] = {.index = 103, .length = 2},
  [47] = {.index = 105, .length = 1},
  [48] = {.index = 106, .length = 1},
  [49] = {.index = 107, .length = 1},
  [50] = {.index = 108, .length = 7},
  [51] = {.index = 115, .length = 1},
  [52] = {.index = 116, .length = 1},
  [53] = {.index = 117, .length = 1},
  [54] = {.index = 118, .length = 1},
  [55] = {.index = 119, .length = 2},
  [56] = {.index = 121, .length = 3},
  [57] = {.index = 124, .length = 1},
  [58] = {.index = 125, .length = 2},
  [59] = {.index = 127, .length = 2},
  [60] = {.index = 129, .length = 2},
  [61] = {.index = 131, .length = 1},
  [62] = {.index = 132, .length = 3},
  [63] = {.index = 135, .length = 1},
  [64] = {.index = 136, .length = 1},
  [65] = {.index = 137, .length = 2},
  [66] = {.index = 139, .length = 3},
  [67] = {.index = 139, .length = 3},
  [68] = {.index = 118, .length = 1},
  [69] = {.index = 142, .length = 2},
  [70] = {.index = 144, .length = 2},
  [71] = {.index = 70, .length = 2},
  [72] = {.index = 146, .length = 2},
  [73] = {.index = 148, .length = 1},
  [74] = {.index = 149, .length = 5},
  [75] = {.index = 154, .length = 1},
  [76] = {.index = 155, .length = 2},
  [77] = {.index = 157, .length = 1},
  [78] = {.index = 158, .length = 3},
  [79] = {.index = 161, .length = 3},
  [80] = {.index = 164, .length = 1},
  [81] = {.index = 165, .length = 2},
  [82] = {.index = 167, .length = 2},
  [83] = {.index = 169, .length = 4},
  [84] = {.index = 173, .length = 1},
  [85] = {.index = 174, .length = 1},
  [86] = {.index = 175, .length = 2},
  [87] = {.index = 177, .length = 1},
  [88] = {.index = 178, .length = 3},
  [89] = {.index = 181, .length = 3},
  [90] = {.index = 184, .length = 2},
  [91] = {.index = 186, .length = 1},
  [92] = {.index = 187, .length = 2},
  [93] = {.index = 189, .length = 2},
  [94] = {.index = 191, .length = 2},
  [95] = {.index = 193, .length = 1},
  [96] = {.index = 194, .length = 3},
  [97] = {.index = 197, .length = 2},
  [98] = {.index = 199, .length = 3},
  [99] = {.index = 202, .length = 2},
  [100] = {.index = 204, .length = 2},
  [101] = {.index = 206, .length = 2},
  [102] = {.index = 208, .length = 3},
  [103] = {.index = 211, .length = 3},
  [104] = {.index = 214, .length = 2},
  [105] = {.index = 216, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 1},
  [1] =
    {field_parameter, 1},
  [2] =
    {field_body, 2},
    {field_colon, 1},
    {field_keyword, 0},
  [5] =
    {field_base, 0},
  [6] =
    {field_name, 0},
  [7] =
    {field_keyword, 0},
    {field_kind, 1},
    {field_reference, 2},
  [10] =
    {field_body, 3, .inherited = true},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
    {field_property, 3, .inherited = true},
  [15] =
    {field_body, 3},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [19] =
    {field_suffix, 0},
  [20] =
    {field_base, 0},
    {field_suffix, 1, .inherited = true},
  [22] =
    {field_body, 3},
    {field_colon, 1},
    {field_keyword, 0},
  [25] =
    {field_param, 1},
  [26] =
    {field_name, 0},
    {field_optional, 1},
  [28] =
    {field_body, 3},
    {field_colon, 2},
    {field_kind, 0},
    {field_name, 1},
  [32] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_name, 1},
  [36] =
    {field_suffix, 0, .inherited = true},
    {field_suffix, 1, .inherited = true},
  [38] =
    {field_param, 1},
    {field_param, 2, .inherited = true},
  [40] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [42] =
    {field_colon, 1},
    {field_name, 0},
    {field_type, 2},
  [45] =
    {field_body, 4},
    {field_colon, 2},
    {field_keyword, 0},
    {field_params, 1},
  [49] =
    {field_description, 4},
    {field_name, 2},
  [51] =
    {field_property, 0},
  [52] =
    {field_content, 0},
  [53] =
    {field_arrow, 1},
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_return, 2},
  [58] =
    {field_content, 0, .inherited = true},
  [59] =
    {field_colon, 2},
    {field_name, 0},
    {field_optional, 1},
    {field_type, 3},
  [63] =
    {field_body, 5},
    {field_colon, 3},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
  [68] =
    {field_async, 0},
  [69] =
    {field_name, 1, .inherited = true},
  [70] =
    {field_agic, 0, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [72] =
    {field_body, 2},
  [73] =
    {field_property, 2, .inherited = true},
  [74] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [76] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [82] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [88] =
    {field_agic, 1},
  [89] =
    {field_target, 1},
  [90] =
    {field_statement, 1},
  [91] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [95] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [97] =
    {field_runnable, 0},
  [98] =
    {field_runnable, 0, .inherited = true},
  [99] =
    {field_order, 0},
  [100] =
    {field_agic, 1, .inherited = true},
    {field_async, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [103] =
    {field_body, 3},
    {field_property, 2, .inherited = true},
  [105] =
    {field_body, 3},
  [106] =
    {field_property, 3, .inherited = true},
  [107] =
    {field_content, 1, .inherited = true},
  [108] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [115] =
    {field_body, 1},
  [116] =
    {field_runnable, 1},
  [117] =
    {field_handle, 1},
  [118] =
    {field_name, 1},
  [119] =
    {field_agent, 1},
    {field_agic, 2},
  [121] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [124] =
    {field_runnable, 1, .inherited = true},
  [125] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1},
  [127] =
    {field_count, 1},
    {field_side, 0},
  [129] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [131] =
    {field_selection, 1},
  [132] =
    {field_lanes, 2, .inherited = true},
    {field_order, 1, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [135] =
    {field_count, 0},
  [136] =
    {field_window, 1},
  [137] =
    {field_body, 4},
    {field_property, 3, .inherited = true},
  [139] =
    {field_key, 1},
    {field_operator, 2},
    {field_value, 3},
  [142] =
    {field_name, 1},
    {field_value, 3},
  [144] =
    {field_name, 1},
    {field_statement, 3},
  [146] =
    {field_agent, 1},
    {field_runnable, 2},
  [148] =
    {field_runnable, 2},
  [149] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_from, 2, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [154] =
    {field_lanes, 1},
  [155] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [157] =
    {field_agic, 2},
  [158] =
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [161] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [164] =
    {field_statement, 0},
  [165] =
    {field_body, 4},
    {field_window, 1, .inherited = true},
  [167] =
    {field_body, 4},
    {field_count, 1, .inherited = true},
  [169] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [173] =
    {field_body, 4},
  [174] =
    {field_from, 3},
  [175] =
    {field_statement, 0},
    {field_statement, 1, .inherited = true},
  [177] =
    {field_statement, 1, .inherited = true},
  [178] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [181] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [184] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [186] =
    {field_target, 2},
  [187] =
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
  [189] =
    {field_statement, 1, .inherited = true},
    {field_until, 2},
  [191] =
    {field_statement, 2, .inherited = true},
    {field_until, 1},
  [193] =
    {field_statement, 2, .inherited = true},
  [194] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [197] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [199] =
    {field_statement, 1, .inherited = true},
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [202] =
    {field_statement, 3, .inherited = true},
    {field_until, 1},
  [204] =
    {field_statement, 2, .inherited = true},
    {field_until, 3},
  [206] =
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [208] =
    {field_statement, 1, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [211] =
    {field_statement, 2, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 3},
  [214] =
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [216] =
    {field_statement, 2, .inherited = true},
    {field_statement, 5, .inherited = true},
    {field_until, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_param_name,
  },
  [66] = {
    [1] = sym_directive_key,
  },
  [68] = {
    [2] = sym_text_line,
  },
  [71] = {
    [0] = sym_run_statement,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__run, 2,
    sym__run,
    sym_run_statement,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 14,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 26,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 30,
  [41] = 37,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 43,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 54,
  [61] = 52,
  [62] = 62,
  [63] = 55,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 66,
  [71] = 68,
  [72] = 72,
  [73] = 58,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 45,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 46,
  [92] = 92,
  [93] = 93,
  [94] = 47,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 48,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 49,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 50,
  [114] = 59,
  [115] = 115,
  [116] = 65,
  [117] = 69,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 62,
  [122] = 64,
  [123] = 67,
  [124] = 124,
  [125] = 77,
  [126] = 126,
  [127] = 127,
  [128] = 44,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 79,
  [135] = 81,
  [136] = 136,
  [137] = 88,
  [138] = 89,
  [139] = 92,
  [140] = 140,
  [141] = 95,
  [142] = 96,
  [143] = 143,
  [144] = 101,
  [145] = 108,
  [146] = 109,
  [147] = 147,
  [148] = 131,
  [149] = 77,
  [150] = 77,
  [151] = 77,
  [152] = 77,
  [153] = 77,
  [154] = 77,
  [155] = 77,
  [156] = 77,
  [157] = 100,
  [158] = 105,
  [159] = 106,
  [160] = 112,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 119,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 165,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 118,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 173,
  [195] = 187,
  [196] = 181,
  [197] = 197,
  [198] = 198,
  [199] = 188,
  [200] = 200,
  [201] = 201,
  [202] = 189,
  [203] = 203,
  [204] = 163,
  [205] = 175,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 115,
  [210] = 210,
  [211] = 169,
  [212] = 190,
  [213] = 213,
  [214] = 180,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 215,
  [219] = 186,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 192,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 221,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 115,
  [339] = 328,
  [340] = 329,
  [341] = 330,
  [342] = 331,
  [343] = 332,
  [344] = 333,
  [345] = 210,
  [346] = 346,
  [347] = 213,
  [348] = 348,
  [349] = 349,
  [350] = 115,
  [351] = 351,
  [352] = 352,
  [353] = 328,
  [354] = 329,
  [355] = 330,
  [356] = 331,
  [357] = 332,
  [358] = 333,
  [359] = 115,
  [360] = 360,
  [361] = 210,
  [362] = 213,
  [363] = 210,
  [364] = 213,
  [365] = 365,
  [366] = 329,
  [367] = 330,
  [368] = 331,
  [369] = 332,
  [370] = 333,
  [371] = 210,
  [372] = 213,
  [373] = 210,
  [374] = 213,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 273,
  [379] = 379,
  [380] = 379,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 225,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 375,
  [398] = 376,
  [399] = 208,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 387,
  [404] = 394,
  [405] = 396,
  [406] = 185,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 206,
  [419] = 223,
  [420] = 420,
  [421] = 421,
  [422] = 207,
  [423] = 423,
  [424] = 307,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 383,
  [431] = 385,
  [432] = 386,
  [433] = 408,
  [434] = 389,
  [435] = 390,
  [436] = 409,
  [437] = 437,
  [438] = 438,
  [439] = 416,
  [440] = 440,
  [441] = 411,
  [442] = 426,
  [443] = 427,
  [444] = 412,
  [445] = 413,
  [446] = 414,
  [447] = 440,
  [448] = 388,
  [449] = 449,
  [450] = 273,
  [451] = 379,
  [452] = 452,
  [453] = 273,
  [454] = 379,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 182,
  [459] = 115,
  [460] = 391,
  [461] = 461,
  [462] = 381,
  [463] = 463,
  [464] = 420,
  [465] = 421,
  [466] = 337,
  [467] = 467,
  [468] = 400,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 312,
  [475] = 360,
  [476] = 395,
  [477] = 477,
  [478] = 328,
  [479] = 479,
  [480] = 256,
  [481] = 257,
  [482] = 482,
  [483] = 258,
  [484] = 259,
  [485] = 260,
  [486] = 261,
  [487] = 262,
  [488] = 263,
  [489] = 264,
  [490] = 490,
  [491] = 265,
  [492] = 266,
  [493] = 267,
  [494] = 268,
  [495] = 269,
  [496] = 270,
  [497] = 271,
  [498] = 272,
  [499] = 499,
  [500] = 274,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 275,
  [505] = 276,
  [506] = 277,
  [507] = 507,
  [508] = 278,
  [509] = 509,
  [510] = 279,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 280,
  [515] = 281,
  [516] = 282,
  [517] = 284,
  [518] = 285,
  [519] = 286,
  [520] = 287,
  [521] = 521,
  [522] = 289,
  [523] = 523,
  [524] = 290,
  [525] = 291,
  [526] = 292,
  [527] = 293,
  [528] = 294,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 296,
  [534] = 297,
  [535] = 535,
  [536] = 299,
  [537] = 300,
  [538] = 301,
  [539] = 302,
  [540] = 303,
  [541] = 304,
  [542] = 305,
  [543] = 543,
  [544] = 544,
  [545] = 306,
  [546] = 546,
  [547] = 308,
  [548] = 548,
  [549] = 309,
  [550] = 310,
  [551] = 351,
  [552] = 311,
  [553] = 313,
  [554] = 554,
  [555] = 314,
  [556] = 315,
  [557] = 316,
  [558] = 317,
  [559] = 318,
  [560] = 319,
  [561] = 561,
  [562] = 320,
  [563] = 321,
  [564] = 322,
  [565] = 323,
  [566] = 324,
  [567] = 325,
  [568] = 326,
  [569] = 327,
  [570] = 346,
  [571] = 206,
  [572] = 348,
  [573] = 349,
  [574] = 207,
  [575] = 208,
  [576] = 576,
  [577] = 577,
  [578] = 351,
  [579] = 579,
  [580] = 580,
  [581] = 331,
  [582] = 352,
  [583] = 332,
  [584] = 584,
  [585] = 333,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 346,
  [600] = 600,
  [601] = 449,
  [602] = 452,
  [603] = 455,
  [604] = 456,
  [605] = 457,
  [606] = 606,
  [607] = 607,
  [608] = 252,
  [609] = 253,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 352,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 623,
  [624] = 624,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 417,
  [630] = 630,
  [631] = 255,
  [632] = 632,
  [633] = 461,
  [634] = 634,
  [635] = 463,
  [636] = 636,
  [637] = 467,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 348,
  [645] = 469,
  [646] = 349,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 335,
  [651] = 470,
  [652] = 210,
  [653] = 213,
  [654] = 654,
  [655] = 471,
  [656] = 472,
  [657] = 657,
  [658] = 473,
  [659] = 477,
  [660] = 365,
  [661] = 661,
  [662] = 222,
  [663] = 328,
  [664] = 329,
  [665] = 330,
  [666] = 331,
  [667] = 332,
  [668] = 333,
  [669] = 210,
  [670] = 213,
  [671] = 328,
  [672] = 329,
  [673] = 330,
  [674] = 331,
  [675] = 332,
  [676] = 333,
  [677] = 677,
  [678] = 226,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 328,
  [683] = 210,
  [684] = 213,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 595,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 227,
  [702] = 228,
  [703] = 654,
  [704] = 229,
  [705] = 230,
  [706] = 231,
  [707] = 707,
  [708] = 329,
  [709] = 232,
  [710] = 233,
  [711] = 234,
  [712] = 235,
  [713] = 713,
  [714] = 236,
  [715] = 237,
  [716] = 238,
  [717] = 239,
  [718] = 240,
  [719] = 241,
  [720] = 242,
  [721] = 243,
  [722] = 244,
  [723] = 245,
  [724] = 531,
  [725] = 330,
  [726] = 246,
  [727] = 247,
  [728] = 595,
  [729] = 729,
  [730] = 595,
  [731] = 248,
  [732] = 249,
  [733] = 250,
  [734] = 734,
  [735] = 643,
  [736] = 482,
  [737] = 254,
  [738] = 596,
  [739] = 597,
  [740] = 740,
  [741] = 623,
  [742] = 742,
  [743] = 743,
  [744] = 744,
  [745] = 745,
  [746] = 643,
  [747] = 482,
  [748] = 643,
  [749] = 482,
  [750] = 750,
  [751] = 751,
  [752] = 649,
  [753] = 753,
  [754] = 754,
  [755] = 750,
  [756] = 756,
  [757] = 636,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 640,
  [776] = 641,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 479,
  [782] = 782,
  [783] = 783,
  [784] = 479,
  [785] = 785,
  [786] = 346,
  [787] = 787,
  [788] = 348,
  [789] = 349,
  [790] = 790,
  [791] = 791,
  [792] = 351,
  [793] = 352,
  [794] = 794,
  [795] = 328,
  [796] = 329,
  [797] = 797,
  [798] = 798,
  [799] = 330,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 210,
  [804] = 213,
  [805] = 331,
  [806] = 332,
  [807] = 333,
  [808] = 210,
  [809] = 809,
  [810] = 213,
  [811] = 811,
  [812] = 812,
  [813] = 335,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 210,
  [818] = 213,
  [819] = 328,
  [820] = 329,
  [821] = 330,
  [822] = 331,
  [823] = 332,
  [824] = 333,
  [825] = 825,
  [826] = 826,
  [827] = 328,
  [828] = 329,
  [829] = 330,
  [830] = 331,
  [831] = 332,
  [832] = 333,
  [833] = 833,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 839,
  [840] = 840,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 768,
  [845] = 769,
  [846] = 771,
  [847] = 773,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 791,
  [854] = 854,
  [855] = 855,
  [856] = 797,
  [857] = 798,
  [858] = 800,
  [859] = 859,
  [860] = 833,
  [861] = 842,
  [862] = 848,
  [863] = 863,
  [864] = 864,
  [865] = 863,
  [866] = 866,
  [867] = 867,
  [868] = 866,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 867,
  [875] = 756,
  [876] = 854,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 761,
  [881] = 763,
  [882] = 838,
  [883] = 812,
  [884] = 869,
  [885] = 836,
  [886] = 886,
  [887] = 887,
  [888] = 870,
  [889] = 777,
  [890] = 871,
  [891] = 891,
  [892] = 790,
  [893] = 809,
  [894] = 815,
  [895] = 826,
  [896] = 834,
  [897] = 835,
  [898] = 837,
  [899] = 899,
  [900] = 873,
  [901] = 891,
  [902] = 899,
  [903] = 872,
  [904] = 758,
  [905] = 767,
  [906] = 906,
  [907] = 907,
  [908] = 838,
  [909] = 909,
  [910] = 877,
  [911] = 838,
  [912] = 878,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 774,
  [920] = 778,
  [921] = 801,
  [922] = 906,
  [923] = 907,
  [924] = 772,
  [925] = 925,
  [926] = 787,
  [927] = 927,
  [928] = 928,
  [929] = 779,
  [930] = 802,
  [931] = 931,
  [932] = 779,
  [933] = 779,
  [934] = 879,
  [935] = 935,
  [936] = 936,
  [937] = 937,
  [938] = 213,
  [939] = 939,
  [940] = 940,
  [941] = 210,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 945,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 953,
  [954] = 954,
  [955] = 944,
  [956] = 956,
  [957] = 957,
  [958] = 958,
  [959] = 959,
  [960] = 960,
  [961] = 961,
  [962] = 962,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 936,
  [968] = 968,
  [969] = 956,
  [970] = 936,
  [971] = 956,
  [972] = 972,
  [973] = 936,
  [974] = 956,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 936,
  [979] = 956,
  [980] = 936,
  [981] = 956,
  [982] = 982,
  [983] = 983,
  [984] = 782,
  [985] = 936,
  [986] = 956,
  [987] = 936,
  [988] = 956,
  [989] = 989,
  [990] = 936,
  [991] = 956,
  [992] = 992,
  [993] = 993,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 943,
  [998] = 957,
  [999] = 999,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 936,
  [1003] = 954,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 964,
  [1007] = 1001,
  [1008] = 1008,
  [1009] = 996,
  [1010] = 951,
  [1011] = 334,
  [1012] = 1012,
  [1013] = 937,
  [1014] = 336,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 992,
  [1018] = 1018,
  [1019] = 992,
  [1020] = 992,
  [1021] = 992,
  [1022] = 992,
  [1023] = 992,
  [1024] = 992,
  [1025] = 992,
  [1026] = 992,
  [1027] = 1027,
  [1028] = 995,
  [1029] = 1029,
  [1030] = 956,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 1033,
  [1034] = 1034,
  [1035] = 1035,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 1032,
  [1039] = 1039,
  [1040] = 1036,
  [1041] = 1035,
  [1042] = 1032,
  [1043] = 1031,
  [1044] = 1044,
  [1045] = 1045,
  [1046] = 1031,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 1044,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1035,
  [1053] = 1032,
  [1054] = 1031,
  [1055] = 1044,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1033,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 1035,
  [1064] = 1032,
  [1065] = 1031,
  [1066] = 1044,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1035,
  [1071] = 1032,
  [1072] = 1072,
  [1073] = 1044,
  [1074] = 1074,
  [1075] = 1035,
  [1076] = 1076,
  [1077] = 1035,
  [1078] = 1032,
  [1079] = 1031,
  [1080] = 1044,
  [1081] = 1081,
  [1082] = 1082,
  [1083] = 1083,
  [1084] = 1035,
  [1085] = 1032,
  [1086] = 1031,
  [1087] = 1044,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1035,
  [1092] = 1032,
  [1093] = 1031,
  [1094] = 1044,
  [1095] = 1095,
  [1096] = 607,
  [1097] = 1097,
  [1098] = 1035,
  [1099] = 1032,
  [1100] = 1031,
  [1101] = 1044,
  [1102] = 1044,
  [1103] = 1044,
  [1104] = 1044,
  [1105] = 1105,
  [1106] = 1037,
  [1107] = 1107,
  [1108] = 1031,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1112,
  [1113] = 1034,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1116,
  [1117] = 1117,
  [1118] = 1115,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1125,
  [1126] = 1114,
  [1127] = 1050,
  [1128] = 1121,
  [1129] = 1129,
  [1130] = 1045,
  [1131] = 1044,
  [1132] = 1132,
  [1133] = 1133,
  [1134] = 1134,
  [1135] = 1072,
  [1136] = 1136,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1095,
  [1140] = 1140,
  [1141] = 1039,
  [1142] = 1142,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1122,
  [1147] = 1147,
  [1148] = 1148,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1088,
  [1152] = 1149,
  [1153] = 1153,
  [1154] = 1154,
  [1155] = 1132,
  [1156] = 1133,
  [1157] = 1134,
  [1158] = 1137,
  [1159] = 1143,
  [1160] = 1160,
  [1161] = 1161,
  [1162] = 1162,
  [1163] = 1163,
  [1164] = 1116,
  [1165] = 1165,
  [1166] = 1047,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1112,
  [1170] = 1170,
  [1171] = 1061,
  [1172] = 1172,
  [1173] = 1173,
  [1174] = 1174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(344);
      ADVANCE_MAP(
        '#', 345,
        '(', 653,
        ')', 654,
        '*', 578,
        '+', 353,
        ',', 655,
        '-', 352,
        '0', 550,
        '1', 551,
        ':', 652,
        '=', 650,
        '?', 649,
        '@', 504,
        'B', 668,
        'J', 671,
        'N', 673,
        'P', 657,
        'T', 660,
        '[', 354,
        '_', 351,
        'a', 428,
        'b', 489,
        'c', 355,
        'd', 396,
        'e', 356,
        'f', 357,
        'g', 363,
        'h', 366,
        'i', 419,
        'k', 409,
        'l', 362,
        'm', 361,
        'n', 412,
        'p', 359,
        'r', 368,
        's', 382,
        't', 360,
        'u', 469,
        'w', 433,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(549);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 345,
        '(', 653,
        ')', 654,
        '*', 578,
        ',', 655,
        '-', 25,
        '0', 553,
        '1', 552,
        ':', 652,
        '=', 650,
        '?', 649,
        '@', 257,
        'B', 668,
        'J', 671,
        'N', 673,
        'P', 657,
        'T', 660,
        '[', 26,
        '_', 351,
        'a', 141,
        'b', 234,
        'c', 27,
        'd', 99,
        'e', 28,
        'f', 30,
        'g', 37,
        'h', 40,
        'i', 128,
        'k', 107,
        'l', 36,
        'm', 35,
        'n', 120,
        'p', 31,
        'r', 41,
        's', 61,
        't', 32,
        'u', 211,
        'w', 150,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(675);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 345,
        '-', 25,
        ':', 652,
        'b', 334,
        'f', 152,
        'i', 127,
        'l', 50,
        'p', 276,
        's', 125,
        'u', 289,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'u') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '1') ADVANCE(552);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'w') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(690);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '[') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '=') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(549);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 345,
        'a', 769,
        'd', 765,
        'g', 719,
        'k', 723,
        'm', 703,
        'r', 720,
        's', 725,
        '\t', 693,
        ' ', 693,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 345,
        'a', 770,
        'd', 765,
        'k', 723,
        'r', 728,
        's', 726,
        '\t', 694,
        ' ', 694,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(738);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(653);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '+', 24,
        '-', 24,
        '=', 559,
        'a', 140,
        'c', 144,
        'd', 108,
        'f', 187,
        'i', 231,
        'l', 52,
        'p', 275,
        's', 118,
        't', 44,
        'w', 163,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(675);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(571);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(559);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(651);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(350);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'f') ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(330);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(593);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'k') ADVANCE(605);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 63:
      ADVANCE_MAP(
        'c', 253,
        'h', 53,
        'i', 231,
        'l', 52,
        'm', 247,
        'p', 277,
        'r', 113,
        's', 126,
        't', 245,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(646);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(677);
      if (lookahead == 'n') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'k') ADVANCE(169);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 129:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'f') ADVANCE(283);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(282);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(629);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(45);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(645);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(581);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 171:
      if (lookahead == 'k') ADVANCE(616);
      END_STATE();
    case 172:
      if (lookahead == 'k') ADVANCE(604);
      END_STATE();
    case 173:
      if (lookahead == 'k') ADVANCE(594);
      END_STATE();
    case 174:
      if (lookahead == 'k') ADVANCE(638);
      END_STATE();
    case 175:
      if (lookahead == 'k') ADVANCE(640);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(642);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(641);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(586);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(656);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(619);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(346);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(637);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(259);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(261);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 231:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 232:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(308);
      if (lookahead == 'y') ADVANCE(623);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(636);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 248:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 249:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 250:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 251:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 252:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 253:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(612);
      END_STATE();
    case 255:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 256:
      if (lookahead == 'p') ADVANCE(613);
      END_STATE();
    case 257:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 258:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 259:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 260:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 261:
      if (lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(609);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(324);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 281:
      if (lookahead == 's') ADVANCE(597);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(557);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(556);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(603);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(590);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 320:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 321:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 322:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 323:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 324:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 325:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 326:
      if (lookahead == 'v') ADVANCE(166);
      END_STATE();
    case 327:
      if (lookahead == 'v') ADVANCE(168);
      END_STATE();
    case 328:
      if (lookahead == 'v') ADVANCE(170);
      END_STATE();
    case 329:
      if (lookahead == 'w') ADVANCE(596);
      END_STATE();
    case 330:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 331:
      if (lookahead == 'w') ADVANCE(159);
      END_STATE();
    case 332:
      if (lookahead == 'x') ADVANCE(302);
      END_STATE();
    case 333:
      if (lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 334:
      if (lookahead == 'y') ADVANCE(623);
      END_STATE();
    case 335:
      if (lookahead == 'y') ADVANCE(72);
      END_STATE();
    case 336:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 337:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 338:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 339:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 340:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(348);
      END_STATE();
    case 341:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 342:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(342);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 343:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__doc_space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_builtin_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(559);
      if (lookahead == '>') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'h') ADVANCE(497);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'x') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead == 'i') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(494);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(435);
      if (lookahead == 'h') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'e') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(605);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == 'y') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(375);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(639);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 's') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead == 's') ADVANCE(381);
      if (lookahead == 'w') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == 'y') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'v') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'x') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(550);
      if (lookahead == '1') ADVANCE(551);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '1') ADVANCE(552);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__query_directive_key);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__route_directive_key);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_directive_key);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_directive_operator);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_recall_source);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_role);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_role);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_async_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_await_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(558);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_assign_operator);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'b') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'e') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'l') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'm') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'o') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 's') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'u') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_type_name);
      if (lookahead == 'x') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_type_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'a') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'e') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'e') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'f') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'l') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'n') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'o') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 't') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (lookahead == 'u') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'u') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '-') ADVANCE(701);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(689);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '1') ADVANCE(552);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == 'w') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(690);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '[') ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == ':') ADVANCE(652);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__text_line);
      ADVANCE_MAP(
        '#', 345,
        'a', 769,
        'd', 765,
        'g', 719,
        'k', 723,
        'm', 703,
        'r', 720,
        's', 725,
        '\t', 693,
        ' ', 693,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__text_line);
      ADVANCE_MAP(
        '#', 345,
        'a', 770,
        'd', 765,
        'k', 723,
        'r', 728,
        's', 726,
        '\t', 694,
        ' ', 694,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'f') ADVANCE(738);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 'l') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(699);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(787);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '>') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == ']') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'd') ADVANCE(783);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'd') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'd') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'p') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(764);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'f') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'g') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'g') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'g') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'g') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'k') ADVANCE(605);
      if (lookahead == 'y') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'k') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'k') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'o') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'p') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'p') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'p') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'r') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'r') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'r') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == 'w') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 's') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'u') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'w') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == 'w') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(787);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 11, .external_lex_state = 4},
  [6] = {.lex_state = 11, .external_lex_state = 4},
  [7] = {.lex_state = 12, .external_lex_state = 5},
  [8] = {.lex_state = 12, .external_lex_state = 5},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 5, .external_lex_state = 6},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5, .external_lex_state = 6},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 14, .external_lex_state = 6},
  [15] = {.lex_state = 14, .external_lex_state = 6},
  [16] = {.lex_state = 14, .external_lex_state = 6},
  [17] = {.lex_state = 14, .external_lex_state = 6},
  [18] = {.lex_state = 3, .external_lex_state = 6},
  [19] = {.lex_state = 3, .external_lex_state = 6},
  [20] = {.lex_state = 6, .external_lex_state = 6},
  [21] = {.lex_state = 6, .external_lex_state = 6},
  [22] = {.lex_state = 6, .external_lex_state = 6},
  [23] = {.lex_state = 6, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 7},
  [25] = {.lex_state = 0, .external_lex_state = 7},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 7},
  [29] = {.lex_state = 0, .external_lex_state = 7},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 7},
  [32] = {.lex_state = 4, .external_lex_state = 6},
  [33] = {.lex_state = 4, .external_lex_state = 6},
  [34] = {.lex_state = 0, .external_lex_state = 7},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 7, .external_lex_state = 6},
  [38] = {.lex_state = 0, .external_lex_state = 7},
  [39] = {.lex_state = 0, .external_lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7, .external_lex_state = 6},
  [42] = {.lex_state = 0, .external_lex_state = 7},
  [43] = {.lex_state = 6, .external_lex_state = 6},
  [44] = {.lex_state = 0, .external_lex_state = 8},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 9},
  [48] = {.lex_state = 0, .external_lex_state = 9},
  [49] = {.lex_state = 0, .external_lex_state = 9},
  [50] = {.lex_state = 0, .external_lex_state = 9},
  [51] = {.lex_state = 6, .external_lex_state = 6},
  [52] = {.lex_state = 6, .external_lex_state = 6},
  [53] = {.lex_state = 6, .external_lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 6, .external_lex_state = 6},
  [57] = {.lex_state = 1, .external_lex_state = 10},
  [58] = {.lex_state = 0, .external_lex_state = 11},
  [59] = {.lex_state = 0, .external_lex_state = 12},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 6, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 13},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 13},
  [65] = {.lex_state = 0, .external_lex_state = 12},
  [66] = {.lex_state = 0, .external_lex_state = 11},
  [67] = {.lex_state = 0, .external_lex_state = 13},
  [68] = {.lex_state = 0, .external_lex_state = 11},
  [69] = {.lex_state = 0, .external_lex_state = 12},
  [70] = {.lex_state = 0, .external_lex_state = 11},
  [71] = {.lex_state = 0, .external_lex_state = 11},
  [72] = {.lex_state = 0, .external_lex_state = 11},
  [73] = {.lex_state = 0, .external_lex_state = 11},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 11},
  [76] = {.lex_state = 1, .external_lex_state = 10},
  [77] = {.lex_state = 0, .external_lex_state = 14},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 16, .external_lex_state = 6},
  [80] = {.lex_state = 0, .external_lex_state = 15},
  [81] = {.lex_state = 0, .external_lex_state = 16},
  [82] = {.lex_state = 0, .external_lex_state = 17},
  [83] = {.lex_state = 0, .external_lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 11},
  [85] = {.lex_state = 0, .external_lex_state = 11},
  [86] = {.lex_state = 0, .external_lex_state = 18},
  [87] = {.lex_state = 16, .external_lex_state = 6},
  [88] = {.lex_state = 1, .external_lex_state = 6},
  [89] = {.lex_state = 16, .external_lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 11},
  [91] = {.lex_state = 0, .external_lex_state = 17},
  [92] = {.lex_state = 16, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 19},
  [94] = {.lex_state = 0, .external_lex_state = 20},
  [95] = {.lex_state = 1, .external_lex_state = 6},
  [96] = {.lex_state = 16, .external_lex_state = 6},
  [97] = {.lex_state = 0, .external_lex_state = 11},
  [98] = {.lex_state = 16, .external_lex_state = 6},
  [99] = {.lex_state = 16, .external_lex_state = 6},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 16, .external_lex_state = 6},
  [102] = {.lex_state = 0, .external_lex_state = 20},
  [103] = {.lex_state = 16, .external_lex_state = 6},
  [104] = {.lex_state = 0, .external_lex_state = 18},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 20},
  [108] = {.lex_state = 16, .external_lex_state = 6},
  [109] = {.lex_state = 16, .external_lex_state = 6},
  [110] = {.lex_state = 16, .external_lex_state = 6},
  [111] = {.lex_state = 0, .external_lex_state = 11},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 20},
  [114] = {.lex_state = 0, .external_lex_state = 21},
  [115] = {.lex_state = 0, .external_lex_state = 15},
  [116] = {.lex_state = 0, .external_lex_state = 21},
  [117] = {.lex_state = 0, .external_lex_state = 21},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 0, .external_lex_state = 15},
  [121] = {.lex_state = 0, .external_lex_state = 11},
  [122] = {.lex_state = 0, .external_lex_state = 11},
  [123] = {.lex_state = 0, .external_lex_state = 11},
  [124] = {.lex_state = 0, .external_lex_state = 15},
  [125] = {.lex_state = 0, .external_lex_state = 14},
  [126] = {.lex_state = 0, .external_lex_state = 19},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 17},
  [129] = {.lex_state = 0, .external_lex_state = 15},
  [130] = {.lex_state = 0, .external_lex_state = 11},
  [131] = {.lex_state = 16, .external_lex_state = 6},
  [132] = {.lex_state = 0, .external_lex_state = 11},
  [133] = {.lex_state = 0, .external_lex_state = 11},
  [134] = {.lex_state = 16, .external_lex_state = 6},
  [135] = {.lex_state = 0, .external_lex_state = 16},
  [136] = {.lex_state = 16, .external_lex_state = 6},
  [137] = {.lex_state = 1, .external_lex_state = 6},
  [138] = {.lex_state = 16, .external_lex_state = 6},
  [139] = {.lex_state = 16, .external_lex_state = 6},
  [140] = {.lex_state = 0, .external_lex_state = 18},
  [141] = {.lex_state = 1, .external_lex_state = 6},
  [142] = {.lex_state = 16, .external_lex_state = 6},
  [143] = {.lex_state = 0, .external_lex_state = 11},
  [144] = {.lex_state = 16, .external_lex_state = 6},
  [145] = {.lex_state = 16, .external_lex_state = 6},
  [146] = {.lex_state = 16, .external_lex_state = 6},
  [147] = {.lex_state = 0, .external_lex_state = 11},
  [148] = {.lex_state = 16, .external_lex_state = 6},
  [149] = {.lex_state = 0, .external_lex_state = 14},
  [150] = {.lex_state = 0, .external_lex_state = 14},
  [151] = {.lex_state = 0, .external_lex_state = 14},
  [152] = {.lex_state = 0, .external_lex_state = 14},
  [153] = {.lex_state = 0, .external_lex_state = 14},
  [154] = {.lex_state = 0, .external_lex_state = 14},
  [155] = {.lex_state = 0, .external_lex_state = 14},
  [156] = {.lex_state = 0, .external_lex_state = 14},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 19},
  [162] = {.lex_state = 0, .external_lex_state = 19},
  [163] = {.lex_state = 9, .external_lex_state = 6},
  [164] = {.lex_state = 0, .external_lex_state = 22},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 17},
  [167] = {.lex_state = 0, .external_lex_state = 22},
  [168] = {.lex_state = 0, .external_lex_state = 22},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 22},
  [171] = {.lex_state = 0, .external_lex_state = 22},
  [172] = {.lex_state = 0, .external_lex_state = 22},
  [173] = {.lex_state = 0, .external_lex_state = 22},
  [174] = {.lex_state = 0, .external_lex_state = 22},
  [175] = {.lex_state = 16, .external_lex_state = 6},
  [176] = {.lex_state = 0, .external_lex_state = 18},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 0, .external_lex_state = 22},
  [180] = {.lex_state = 0, .external_lex_state = 22},
  [181] = {.lex_state = 9, .external_lex_state = 6},
  [182] = {.lex_state = 0, .external_lex_state = 8},
  [183] = {.lex_state = 0, .external_lex_state = 18},
  [184] = {.lex_state = 0, .external_lex_state = 17},
  [185] = {.lex_state = 0, .external_lex_state = 8},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 16, .external_lex_state = 6},
  [188] = {.lex_state = 0, .external_lex_state = 22},
  [189] = {.lex_state = 0, .external_lex_state = 22},
  [190] = {.lex_state = 13, .external_lex_state = 6},
  [191] = {.lex_state = 0, .external_lex_state = 22},
  [192] = {.lex_state = 0, .external_lex_state = 8},
  [193] = {.lex_state = 0, .external_lex_state = 22},
  [194] = {.lex_state = 0, .external_lex_state = 22},
  [195] = {.lex_state = 16, .external_lex_state = 6},
  [196] = {.lex_state = 9, .external_lex_state = 6},
  [197] = {.lex_state = 0, .external_lex_state = 22},
  [198] = {.lex_state = 0, .external_lex_state = 22},
  [199] = {.lex_state = 0, .external_lex_state = 22},
  [200] = {.lex_state = 19},
  [201] = {.lex_state = 0, .external_lex_state = 22},
  [202] = {.lex_state = 0, .external_lex_state = 22},
  [203] = {.lex_state = 0, .external_lex_state = 22},
  [204] = {.lex_state = 9, .external_lex_state = 6},
  [205] = {.lex_state = 16, .external_lex_state = 6},
  [206] = {.lex_state = 8, .external_lex_state = 6},
  [207] = {.lex_state = 8, .external_lex_state = 6},
  [208] = {.lex_state = 8, .external_lex_state = 6},
  [209] = {.lex_state = 0, .external_lex_state = 11},
  [210] = {.lex_state = 0, .external_lex_state = 9},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 13, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 9},
  [214] = {.lex_state = 0, .external_lex_state = 22},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 22},
  [217] = {.lex_state = 0, .external_lex_state = 22},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 63},
  [220] = {.lex_state = 0, .external_lex_state = 22},
  [221] = {.lex_state = 16, .external_lex_state = 23},
  [222] = {.lex_state = 0, .external_lex_state = 13},
  [223] = {.lex_state = 16, .external_lex_state = 6},
  [224] = {.lex_state = 0, .external_lex_state = 17},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 0, .external_lex_state = 13},
  [227] = {.lex_state = 0, .external_lex_state = 13},
  [228] = {.lex_state = 0, .external_lex_state = 13},
  [229] = {.lex_state = 0, .external_lex_state = 13},
  [230] = {.lex_state = 0, .external_lex_state = 13},
  [231] = {.lex_state = 0, .external_lex_state = 13},
  [232] = {.lex_state = 0, .external_lex_state = 13},
  [233] = {.lex_state = 0, .external_lex_state = 13},
  [234] = {.lex_state = 0, .external_lex_state = 13},
  [235] = {.lex_state = 0, .external_lex_state = 13},
  [236] = {.lex_state = 0, .external_lex_state = 13},
  [237] = {.lex_state = 0, .external_lex_state = 13},
  [238] = {.lex_state = 0, .external_lex_state = 13},
  [239] = {.lex_state = 0, .external_lex_state = 13},
  [240] = {.lex_state = 0, .external_lex_state = 13},
  [241] = {.lex_state = 0, .external_lex_state = 13},
  [242] = {.lex_state = 0, .external_lex_state = 13},
  [243] = {.lex_state = 0, .external_lex_state = 13},
  [244] = {.lex_state = 0, .external_lex_state = 13},
  [245] = {.lex_state = 0, .external_lex_state = 13},
  [246] = {.lex_state = 0, .external_lex_state = 13},
  [247] = {.lex_state = 0, .external_lex_state = 13},
  [248] = {.lex_state = 0, .external_lex_state = 13},
  [249] = {.lex_state = 0, .external_lex_state = 13},
  [250] = {.lex_state = 0, .external_lex_state = 13},
  [251] = {.lex_state = 0, .external_lex_state = 7},
  [252] = {.lex_state = 0, .external_lex_state = 12},
  [253] = {.lex_state = 0, .external_lex_state = 12},
  [254] = {.lex_state = 0, .external_lex_state = 13},
  [255] = {.lex_state = 0, .external_lex_state = 13},
  [256] = {.lex_state = 0, .external_lex_state = 13},
  [257] = {.lex_state = 0, .external_lex_state = 13},
  [258] = {.lex_state = 0, .external_lex_state = 13},
  [259] = {.lex_state = 0, .external_lex_state = 13},
  [260] = {.lex_state = 0, .external_lex_state = 13},
  [261] = {.lex_state = 0, .external_lex_state = 13},
  [262] = {.lex_state = 0, .external_lex_state = 13},
  [263] = {.lex_state = 0, .external_lex_state = 13},
  [264] = {.lex_state = 0, .external_lex_state = 13},
  [265] = {.lex_state = 0, .external_lex_state = 13},
  [266] = {.lex_state = 0, .external_lex_state = 13},
  [267] = {.lex_state = 0, .external_lex_state = 13},
  [268] = {.lex_state = 0, .external_lex_state = 13},
  [269] = {.lex_state = 0, .external_lex_state = 13},
  [270] = {.lex_state = 0, .external_lex_state = 13},
  [271] = {.lex_state = 0, .external_lex_state = 13},
  [272] = {.lex_state = 0, .external_lex_state = 13},
  [273] = {.lex_state = 0, .external_lex_state = 24},
  [274] = {.lex_state = 0, .external_lex_state = 13},
  [275] = {.lex_state = 0, .external_lex_state = 13},
  [276] = {.lex_state = 0, .external_lex_state = 13},
  [277] = {.lex_state = 0, .external_lex_state = 13},
  [278] = {.lex_state = 0, .external_lex_state = 13},
  [279] = {.lex_state = 0, .external_lex_state = 13},
  [280] = {.lex_state = 0, .external_lex_state = 13},
  [281] = {.lex_state = 0, .external_lex_state = 13},
  [282] = {.lex_state = 0, .external_lex_state = 13},
  [283] = {.lex_state = 16, .external_lex_state = 23},
  [284] = {.lex_state = 0, .external_lex_state = 13},
  [285] = {.lex_state = 0, .external_lex_state = 13},
  [286] = {.lex_state = 0, .external_lex_state = 13},
  [287] = {.lex_state = 0, .external_lex_state = 13},
  [288] = {.lex_state = 0, .external_lex_state = 22},
  [289] = {.lex_state = 0, .external_lex_state = 13},
  [290] = {.lex_state = 0, .external_lex_state = 13},
  [291] = {.lex_state = 0, .external_lex_state = 13},
  [292] = {.lex_state = 0, .external_lex_state = 13},
  [293] = {.lex_state = 0, .external_lex_state = 13},
  [294] = {.lex_state = 0, .external_lex_state = 13},
  [295] = {.lex_state = 0, .external_lex_state = 24},
  [296] = {.lex_state = 0, .external_lex_state = 13},
  [297] = {.lex_state = 0, .external_lex_state = 13},
  [298] = {.lex_state = 0, .external_lex_state = 25},
  [299] = {.lex_state = 0, .external_lex_state = 13},
  [300] = {.lex_state = 0, .external_lex_state = 13},
  [301] = {.lex_state = 0, .external_lex_state = 13},
  [302] = {.lex_state = 0, .external_lex_state = 13},
  [303] = {.lex_state = 0, .external_lex_state = 13},
  [304] = {.lex_state = 0, .external_lex_state = 13},
  [305] = {.lex_state = 0, .external_lex_state = 13},
  [306] = {.lex_state = 0, .external_lex_state = 13},
  [307] = {.lex_state = 0, .external_lex_state = 26},
  [308] = {.lex_state = 0, .external_lex_state = 13},
  [309] = {.lex_state = 0, .external_lex_state = 13},
  [310] = {.lex_state = 0, .external_lex_state = 13},
  [311] = {.lex_state = 0, .external_lex_state = 13},
  [312] = {.lex_state = 0, .external_lex_state = 22},
  [313] = {.lex_state = 0, .external_lex_state = 13},
  [314] = {.lex_state = 0, .external_lex_state = 13},
  [315] = {.lex_state = 0, .external_lex_state = 13},
  [316] = {.lex_state = 0, .external_lex_state = 13},
  [317] = {.lex_state = 0, .external_lex_state = 13},
  [318] = {.lex_state = 0, .external_lex_state = 13},
  [319] = {.lex_state = 0, .external_lex_state = 13},
  [320] = {.lex_state = 0, .external_lex_state = 13},
  [321] = {.lex_state = 0, .external_lex_state = 13},
  [322] = {.lex_state = 0, .external_lex_state = 13},
  [323] = {.lex_state = 0, .external_lex_state = 13},
  [324] = {.lex_state = 0, .external_lex_state = 13},
  [325] = {.lex_state = 0, .external_lex_state = 13},
  [326] = {.lex_state = 0, .external_lex_state = 13},
  [327] = {.lex_state = 0, .external_lex_state = 13},
  [328] = {.lex_state = 0, .external_lex_state = 15},
  [329] = {.lex_state = 0, .external_lex_state = 15},
  [330] = {.lex_state = 0, .external_lex_state = 15},
  [331] = {.lex_state = 0, .external_lex_state = 15},
  [332] = {.lex_state = 0, .external_lex_state = 15},
  [333] = {.lex_state = 0, .external_lex_state = 15},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 8, .external_lex_state = 6},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 27},
  [338] = {.lex_state = 0, .external_lex_state = 26},
  [339] = {.lex_state = 0, .external_lex_state = 7},
  [340] = {.lex_state = 0, .external_lex_state = 7},
  [341] = {.lex_state = 0, .external_lex_state = 7},
  [342] = {.lex_state = 0, .external_lex_state = 7},
  [343] = {.lex_state = 0, .external_lex_state = 7},
  [344] = {.lex_state = 0, .external_lex_state = 7},
  [345] = {.lex_state = 0, .external_lex_state = 15},
  [346] = {.lex_state = 0, .external_lex_state = 13},
  [347] = {.lex_state = 0, .external_lex_state = 15},
  [348] = {.lex_state = 0, .external_lex_state = 13},
  [349] = {.lex_state = 0, .external_lex_state = 13},
  [350] = {.lex_state = 0, .external_lex_state = 25},
  [351] = {.lex_state = 0, .external_lex_state = 13},
  [352] = {.lex_state = 0, .external_lex_state = 13},
  [353] = {.lex_state = 0, .external_lex_state = 12},
  [354] = {.lex_state = 0, .external_lex_state = 12},
  [355] = {.lex_state = 0, .external_lex_state = 12},
  [356] = {.lex_state = 0, .external_lex_state = 12},
  [357] = {.lex_state = 0, .external_lex_state = 12},
  [358] = {.lex_state = 0, .external_lex_state = 12},
  [359] = {.lex_state = 0, .external_lex_state = 2},
  [360] = {.lex_state = 0, .external_lex_state = 22},
  [361] = {.lex_state = 0, .external_lex_state = 12},
  [362] = {.lex_state = 0, .external_lex_state = 12},
  [363] = {.lex_state = 0, .external_lex_state = 20},
  [364] = {.lex_state = 0, .external_lex_state = 20},
  [365] = {.lex_state = 0, .external_lex_state = 13},
  [366] = {.lex_state = 0, .external_lex_state = 13},
  [367] = {.lex_state = 0, .external_lex_state = 13},
  [368] = {.lex_state = 0, .external_lex_state = 13},
  [369] = {.lex_state = 0, .external_lex_state = 13},
  [370] = {.lex_state = 0, .external_lex_state = 13},
  [371] = {.lex_state = 0, .external_lex_state = 7},
  [372] = {.lex_state = 0, .external_lex_state = 7},
  [373] = {.lex_state = 0, .external_lex_state = 13},
  [374] = {.lex_state = 0, .external_lex_state = 13},
  [375] = {.lex_state = 10, .external_lex_state = 6},
  [376] = {.lex_state = 19},
  [377] = {.lex_state = 0, .external_lex_state = 24},
  [378] = {.lex_state = 0, .external_lex_state = 24},
  [379] = {.lex_state = 0, .external_lex_state = 24},
  [380] = {.lex_state = 0, .external_lex_state = 24},
  [381] = {.lex_state = 17, .external_lex_state = 6},
  [382] = {.lex_state = 0, .external_lex_state = 18},
  [383] = {.lex_state = 16, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 7},
  [385] = {.lex_state = 16, .external_lex_state = 6},
  [386] = {.lex_state = 16, .external_lex_state = 6},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 16, .external_lex_state = 6},
  [389] = {.lex_state = 16, .external_lex_state = 6},
  [390] = {.lex_state = 16, .external_lex_state = 6},
  [391] = {.lex_state = 19},
  [392] = {.lex_state = 19},
  [393] = {.lex_state = 0, .external_lex_state = 25},
  [394] = {.lex_state = 19},
  [395] = {.lex_state = 0, .external_lex_state = 22},
  [396] = {.lex_state = 2, .external_lex_state = 6},
  [397] = {.lex_state = 10, .external_lex_state = 6},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 0, .external_lex_state = 27},
  [401] = {.lex_state = 0, .external_lex_state = 26},
  [402] = {.lex_state = 16, .external_lex_state = 6},
  [403] = {.lex_state = 1},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 2, .external_lex_state = 6},
  [406] = {.lex_state = 0, .external_lex_state = 17},
  [407] = {.lex_state = 0, .external_lex_state = 18},
  [408] = {.lex_state = 16, .external_lex_state = 6},
  [409] = {.lex_state = 16, .external_lex_state = 6},
  [410] = {.lex_state = 0, .external_lex_state = 25},
  [411] = {.lex_state = 0, .external_lex_state = 26},
  [412] = {.lex_state = 0, .external_lex_state = 26},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 2, .external_lex_state = 6},
  [415] = {.lex_state = 0, .external_lex_state = 24},
  [416] = {.lex_state = 0, .external_lex_state = 26},
  [417] = {.lex_state = 0, .external_lex_state = 13},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 16, .external_lex_state = 6},
  [420] = {.lex_state = 82},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 26},
  [424] = {.lex_state = 0, .external_lex_state = 26},
  [425] = {.lex_state = 0, .external_lex_state = 18},
  [426] = {.lex_state = 0, .external_lex_state = 26},
  [427] = {.lex_state = 0, .external_lex_state = 26},
  [428] = {.lex_state = 0, .external_lex_state = 22},
  [429] = {.lex_state = 1, .external_lex_state = 28},
  [430] = {.lex_state = 16, .external_lex_state = 6},
  [431] = {.lex_state = 16, .external_lex_state = 6},
  [432] = {.lex_state = 16, .external_lex_state = 6},
  [433] = {.lex_state = 16, .external_lex_state = 6},
  [434] = {.lex_state = 16, .external_lex_state = 6},
  [435] = {.lex_state = 16, .external_lex_state = 6},
  [436] = {.lex_state = 16, .external_lex_state = 6},
  [437] = {.lex_state = 0, .external_lex_state = 22},
  [438] = {.lex_state = 0, .external_lex_state = 25},
  [439] = {.lex_state = 0, .external_lex_state = 26},
  [440] = {.lex_state = 0, .external_lex_state = 26},
  [441] = {.lex_state = 0, .external_lex_state = 26},
  [442] = {.lex_state = 0, .external_lex_state = 26},
  [443] = {.lex_state = 0, .external_lex_state = 26},
  [444] = {.lex_state = 0, .external_lex_state = 26},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 2, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 26},
  [448] = {.lex_state = 16, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 13},
  [450] = {.lex_state = 0, .external_lex_state = 24},
  [451] = {.lex_state = 0, .external_lex_state = 24},
  [452] = {.lex_state = 0, .external_lex_state = 13},
  [453] = {.lex_state = 0, .external_lex_state = 24},
  [454] = {.lex_state = 0, .external_lex_state = 24},
  [455] = {.lex_state = 0, .external_lex_state = 13},
  [456] = {.lex_state = 0, .external_lex_state = 13},
  [457] = {.lex_state = 0, .external_lex_state = 13},
  [458] = {.lex_state = 0, .external_lex_state = 17},
  [459] = {.lex_state = 0, .external_lex_state = 22},
  [460] = {.lex_state = 19},
  [461] = {.lex_state = 0, .external_lex_state = 13},
  [462] = {.lex_state = 17, .external_lex_state = 6},
  [463] = {.lex_state = 0, .external_lex_state = 13},
  [464] = {.lex_state = 82},
  [465] = {.lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 27},
  [467] = {.lex_state = 0, .external_lex_state = 13},
  [468] = {.lex_state = 0, .external_lex_state = 27},
  [469] = {.lex_state = 0, .external_lex_state = 13},
  [470] = {.lex_state = 0, .external_lex_state = 13},
  [471] = {.lex_state = 0, .external_lex_state = 13},
  [472] = {.lex_state = 0, .external_lex_state = 13},
  [473] = {.lex_state = 0, .external_lex_state = 13},
  [474] = {.lex_state = 0, .external_lex_state = 22},
  [475] = {.lex_state = 0, .external_lex_state = 22},
  [476] = {.lex_state = 0, .external_lex_state = 22},
  [477] = {.lex_state = 0, .external_lex_state = 13},
  [478] = {.lex_state = 0, .external_lex_state = 13},
  [479] = {.lex_state = 2, .external_lex_state = 6},
  [480] = {.lex_state = 0, .external_lex_state = 11},
  [481] = {.lex_state = 0, .external_lex_state = 11},
  [482] = {.lex_state = 0, .external_lex_state = 29},
  [483] = {.lex_state = 0, .external_lex_state = 11},
  [484] = {.lex_state = 0, .external_lex_state = 11},
  [485] = {.lex_state = 0, .external_lex_state = 11},
  [486] = {.lex_state = 0, .external_lex_state = 11},
  [487] = {.lex_state = 0, .external_lex_state = 11},
  [488] = {.lex_state = 0, .external_lex_state = 11},
  [489] = {.lex_state = 0, .external_lex_state = 11},
  [490] = {.lex_state = 0, .external_lex_state = 30},
  [491] = {.lex_state = 0, .external_lex_state = 11},
  [492] = {.lex_state = 0, .external_lex_state = 11},
  [493] = {.lex_state = 0, .external_lex_state = 11},
  [494] = {.lex_state = 0, .external_lex_state = 11},
  [495] = {.lex_state = 0, .external_lex_state = 11},
  [496] = {.lex_state = 0, .external_lex_state = 11},
  [497] = {.lex_state = 0, .external_lex_state = 11},
  [498] = {.lex_state = 0, .external_lex_state = 11},
  [499] = {.lex_state = 1},
  [500] = {.lex_state = 0, .external_lex_state = 11},
  [501] = {.lex_state = 0, .external_lex_state = 11},
  [502] = {.lex_state = 1, .external_lex_state = 6},
  [503] = {.lex_state = 1, .external_lex_state = 6},
  [504] = {.lex_state = 0, .external_lex_state = 11},
  [505] = {.lex_state = 0, .external_lex_state = 11},
  [506] = {.lex_state = 0, .external_lex_state = 11},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 0, .external_lex_state = 11},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 11},
  [511] = {.lex_state = 0, .external_lex_state = 29},
  [512] = {.lex_state = 0, .external_lex_state = 16},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0, .external_lex_state = 11},
  [515] = {.lex_state = 0, .external_lex_state = 11},
  [516] = {.lex_state = 0, .external_lex_state = 11},
  [517] = {.lex_state = 0, .external_lex_state = 11},
  [518] = {.lex_state = 0, .external_lex_state = 11},
  [519] = {.lex_state = 0, .external_lex_state = 11},
  [520] = {.lex_state = 0, .external_lex_state = 11},
  [521] = {.lex_state = 0, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 11},
  [523] = {.lex_state = 0, .external_lex_state = 11},
  [524] = {.lex_state = 0, .external_lex_state = 11},
  [525] = {.lex_state = 0, .external_lex_state = 11},
  [526] = {.lex_state = 0, .external_lex_state = 11},
  [527] = {.lex_state = 0, .external_lex_state = 11},
  [528] = {.lex_state = 0, .external_lex_state = 11},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 0, .external_lex_state = 16},
  [531] = {.lex_state = 19},
  [532] = {.lex_state = 1},
  [533] = {.lex_state = 0, .external_lex_state = 11},
  [534] = {.lex_state = 0, .external_lex_state = 11},
  [535] = {.lex_state = 0, .external_lex_state = 2},
  [536] = {.lex_state = 0, .external_lex_state = 11},
  [537] = {.lex_state = 0, .external_lex_state = 11},
  [538] = {.lex_state = 0, .external_lex_state = 11},
  [539] = {.lex_state = 0, .external_lex_state = 11},
  [540] = {.lex_state = 0, .external_lex_state = 11},
  [541] = {.lex_state = 0, .external_lex_state = 11},
  [542] = {.lex_state = 0, .external_lex_state = 11},
  [543] = {.lex_state = 0, .external_lex_state = 16},
  [544] = {.lex_state = 0, .external_lex_state = 16},
  [545] = {.lex_state = 0, .external_lex_state = 11},
  [546] = {.lex_state = 0, .external_lex_state = 29},
  [547] = {.lex_state = 0, .external_lex_state = 11},
  [548] = {.lex_state = 1},
  [549] = {.lex_state = 0, .external_lex_state = 11},
  [550] = {.lex_state = 0, .external_lex_state = 11},
  [551] = {.lex_state = 0, .external_lex_state = 2},
  [552] = {.lex_state = 0, .external_lex_state = 11},
  [553] = {.lex_state = 0, .external_lex_state = 11},
  [554] = {.lex_state = 0, .external_lex_state = 16},
  [555] = {.lex_state = 0, .external_lex_state = 11},
  [556] = {.lex_state = 0, .external_lex_state = 11},
  [557] = {.lex_state = 0, .external_lex_state = 11},
  [558] = {.lex_state = 0, .external_lex_state = 11},
  [559] = {.lex_state = 0, .external_lex_state = 11},
  [560] = {.lex_state = 0, .external_lex_state = 11},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 11},
  [563] = {.lex_state = 0, .external_lex_state = 11},
  [564] = {.lex_state = 0, .external_lex_state = 11},
  [565] = {.lex_state = 0, .external_lex_state = 11},
  [566] = {.lex_state = 0, .external_lex_state = 11},
  [567] = {.lex_state = 0, .external_lex_state = 11},
  [568] = {.lex_state = 0, .external_lex_state = 11},
  [569] = {.lex_state = 0, .external_lex_state = 11},
  [570] = {.lex_state = 0, .external_lex_state = 11},
  [571] = {.lex_state = 1, .external_lex_state = 6},
  [572] = {.lex_state = 0, .external_lex_state = 11},
  [573] = {.lex_state = 0, .external_lex_state = 11},
  [574] = {.lex_state = 1, .external_lex_state = 6},
  [575] = {.lex_state = 1, .external_lex_state = 6},
  [576] = {.lex_state = 9, .external_lex_state = 6},
  [577] = {.lex_state = 16, .external_lex_state = 6},
  [578] = {.lex_state = 0, .external_lex_state = 11},
  [579] = {.lex_state = 0, .external_lex_state = 11},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 0, .external_lex_state = 11},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 30},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 6},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 6},
  [592] = {.lex_state = 15, .external_lex_state = 6},
  [593] = {.lex_state = 0, .external_lex_state = 6},
  [594] = {.lex_state = 0, .external_lex_state = 6},
  [595] = {.lex_state = 0, .external_lex_state = 31},
  [596] = {.lex_state = 9, .external_lex_state = 6},
  [597] = {.lex_state = 18, .external_lex_state = 6},
  [598] = {.lex_state = 0, .external_lex_state = 2},
  [599] = {.lex_state = 0, .external_lex_state = 2},
  [600] = {.lex_state = 0, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 11},
  [602] = {.lex_state = 0, .external_lex_state = 11},
  [603] = {.lex_state = 0, .external_lex_state = 11},
  [604] = {.lex_state = 0, .external_lex_state = 11},
  [605] = {.lex_state = 0, .external_lex_state = 11},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 1},
  [608] = {.lex_state = 0, .external_lex_state = 21},
  [609] = {.lex_state = 0, .external_lex_state = 21},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 1},
  [613] = {.lex_state = 1},
  [614] = {.lex_state = 0, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 1},
  [617] = {.lex_state = 0, .external_lex_state = 2},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 6},
  [620] = {.lex_state = 0, .external_lex_state = 6},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 0, .external_lex_state = 11},
  [623] = {.lex_state = 20},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 0, .external_lex_state = 2},
  [626] = {.lex_state = 0, .external_lex_state = 2},
  [627] = {.lex_state = 0, .external_lex_state = 2},
  [628] = {.lex_state = 0, .external_lex_state = 2},
  [629] = {.lex_state = 0, .external_lex_state = 11},
  [630] = {.lex_state = 0, .external_lex_state = 2},
  [631] = {.lex_state = 0, .external_lex_state = 11},
  [632] = {.lex_state = 0, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 11},
  [634] = {.lex_state = 10, .external_lex_state = 6},
  [635] = {.lex_state = 0, .external_lex_state = 11},
  [636] = {.lex_state = 0, .external_lex_state = 11},
  [637] = {.lex_state = 0, .external_lex_state = 11},
  [638] = {.lex_state = 0, .external_lex_state = 2},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 11},
  [641] = {.lex_state = 0, .external_lex_state = 11},
  [642] = {.lex_state = 0, .external_lex_state = 2},
  [643] = {.lex_state = 0, .external_lex_state = 29},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 11},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 2},
  [649] = {.lex_state = 1},
  [650] = {.lex_state = 1},
  [651] = {.lex_state = 0, .external_lex_state = 11},
  [652] = {.lex_state = 0, .external_lex_state = 2},
  [653] = {.lex_state = 0, .external_lex_state = 2},
  [654] = {.lex_state = 1, .external_lex_state = 6},
  [655] = {.lex_state = 0, .external_lex_state = 11},
  [656] = {.lex_state = 0, .external_lex_state = 11},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 11},
  [659] = {.lex_state = 0, .external_lex_state = 11},
  [660] = {.lex_state = 0, .external_lex_state = 11},
  [661] = {.lex_state = 1, .external_lex_state = 28},
  [662] = {.lex_state = 0, .external_lex_state = 11},
  [663] = {.lex_state = 0, .external_lex_state = 11},
  [664] = {.lex_state = 0, .external_lex_state = 11},
  [665] = {.lex_state = 0, .external_lex_state = 11},
  [666] = {.lex_state = 0, .external_lex_state = 11},
  [667] = {.lex_state = 0, .external_lex_state = 11},
  [668] = {.lex_state = 0, .external_lex_state = 11},
  [669] = {.lex_state = 0, .external_lex_state = 11},
  [670] = {.lex_state = 0, .external_lex_state = 11},
  [671] = {.lex_state = 0, .external_lex_state = 21},
  [672] = {.lex_state = 0, .external_lex_state = 21},
  [673] = {.lex_state = 0, .external_lex_state = 21},
  [674] = {.lex_state = 0, .external_lex_state = 21},
  [675] = {.lex_state = 0, .external_lex_state = 21},
  [676] = {.lex_state = 0, .external_lex_state = 21},
  [677] = {.lex_state = 1},
  [678] = {.lex_state = 0, .external_lex_state = 11},
  [679] = {.lex_state = 0, .external_lex_state = 2},
  [680] = {.lex_state = 0, .external_lex_state = 2},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 21},
  [684] = {.lex_state = 0, .external_lex_state = 21},
  [685] = {.lex_state = 1},
  [686] = {.lex_state = 0, .external_lex_state = 2},
  [687] = {.lex_state = 0, .external_lex_state = 2},
  [688] = {.lex_state = 0, .external_lex_state = 31},
  [689] = {.lex_state = 0, .external_lex_state = 2},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 11},
  [693] = {.lex_state = 1},
  [694] = {.lex_state = 0, .external_lex_state = 2},
  [695] = {.lex_state = 0, .external_lex_state = 11},
  [696] = {.lex_state = 1, .external_lex_state = 6},
  [697] = {.lex_state = 1, .external_lex_state = 6},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 0, .external_lex_state = 2},
  [701] = {.lex_state = 0, .external_lex_state = 11},
  [702] = {.lex_state = 0, .external_lex_state = 11},
  [703] = {.lex_state = 1, .external_lex_state = 6},
  [704] = {.lex_state = 0, .external_lex_state = 11},
  [705] = {.lex_state = 0, .external_lex_state = 11},
  [706] = {.lex_state = 0, .external_lex_state = 11},
  [707] = {.lex_state = 0, .external_lex_state = 2},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 11},
  [710] = {.lex_state = 0, .external_lex_state = 11},
  [711] = {.lex_state = 0, .external_lex_state = 11},
  [712] = {.lex_state = 0, .external_lex_state = 11},
  [713] = {.lex_state = 0, .external_lex_state = 2},
  [714] = {.lex_state = 0, .external_lex_state = 11},
  [715] = {.lex_state = 0, .external_lex_state = 11},
  [716] = {.lex_state = 0, .external_lex_state = 11},
  [717] = {.lex_state = 0, .external_lex_state = 11},
  [718] = {.lex_state = 0, .external_lex_state = 11},
  [719] = {.lex_state = 0, .external_lex_state = 11},
  [720] = {.lex_state = 0, .external_lex_state = 11},
  [721] = {.lex_state = 0, .external_lex_state = 11},
  [722] = {.lex_state = 0, .external_lex_state = 11},
  [723] = {.lex_state = 0, .external_lex_state = 11},
  [724] = {.lex_state = 19},
  [725] = {.lex_state = 0, .external_lex_state = 2},
  [726] = {.lex_state = 0, .external_lex_state = 11},
  [727] = {.lex_state = 0, .external_lex_state = 11},
  [728] = {.lex_state = 0, .external_lex_state = 31},
  [729] = {.lex_state = 1},
  [730] = {.lex_state = 0, .external_lex_state = 31},
  [731] = {.lex_state = 0, .external_lex_state = 11},
  [732] = {.lex_state = 0, .external_lex_state = 11},
  [733] = {.lex_state = 0, .external_lex_state = 11},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 29},
  [736] = {.lex_state = 0, .external_lex_state = 29},
  [737] = {.lex_state = 0, .external_lex_state = 11},
  [738] = {.lex_state = 9, .external_lex_state = 6},
  [739] = {.lex_state = 18, .external_lex_state = 6},
  [740] = {.lex_state = 0, .external_lex_state = 2},
  [741] = {.lex_state = 20},
  [742] = {.lex_state = 0, .external_lex_state = 2},
  [743] = {.lex_state = 1},
  [744] = {.lex_state = 0, .external_lex_state = 2},
  [745] = {.lex_state = 0, .external_lex_state = 2},
  [746] = {.lex_state = 0, .external_lex_state = 29},
  [747] = {.lex_state = 0, .external_lex_state = 29},
  [748] = {.lex_state = 0, .external_lex_state = 29},
  [749] = {.lex_state = 0, .external_lex_state = 29},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 1, .external_lex_state = 6},
  [752] = {.lex_state = 1},
  [753] = {.lex_state = 1, .external_lex_state = 6},
  [754] = {.lex_state = 0, .external_lex_state = 2},
  [755] = {.lex_state = 1},
  [756] = {.lex_state = 0, .external_lex_state = 6},
  [757] = {.lex_state = 0, .external_lex_state = 2},
  [758] = {.lex_state = 0, .external_lex_state = 6},
  [759] = {.lex_state = 0, .external_lex_state = 6},
  [760] = {.lex_state = 0, .external_lex_state = 6},
  [761] = {.lex_state = 0, .external_lex_state = 6},
  [762] = {.lex_state = 0, .external_lex_state = 6},
  [763] = {.lex_state = 0, .external_lex_state = 6},
  [764] = {.lex_state = 0, .external_lex_state = 24},
  [765] = {.lex_state = 19},
  [766] = {.lex_state = 0, .external_lex_state = 6},
  [767] = {.lex_state = 0, .external_lex_state = 6},
  [768] = {.lex_state = 0, .external_lex_state = 6},
  [769] = {.lex_state = 0, .external_lex_state = 6},
  [770] = {.lex_state = 0, .external_lex_state = 6},
  [771] = {.lex_state = 0, .external_lex_state = 6},
  [772] = {.lex_state = 1},
  [773] = {.lex_state = 0, .external_lex_state = 6},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 0, .external_lex_state = 2},
  [776] = {.lex_state = 0, .external_lex_state = 2},
  [777] = {.lex_state = 0, .external_lex_state = 32},
  [778] = {.lex_state = 1},
  [779] = {.lex_state = 0, .external_lex_state = 31},
  [780] = {.lex_state = 19},
  [781] = {.lex_state = 1},
  [782] = {.lex_state = 1},
  [783] = {.lex_state = 0, .external_lex_state = 6},
  [784] = {.lex_state = 16, .external_lex_state = 6},
  [785] = {.lex_state = 0, .external_lex_state = 33},
  [786] = {.lex_state = 0, .external_lex_state = 26},
  [787] = {.lex_state = 0, .external_lex_state = 6},
  [788] = {.lex_state = 0, .external_lex_state = 26},
  [789] = {.lex_state = 0, .external_lex_state = 26},
  [790] = {.lex_state = 0, .external_lex_state = 6},
  [791] = {.lex_state = 0, .external_lex_state = 6},
  [792] = {.lex_state = 0, .external_lex_state = 26},
  [793] = {.lex_state = 0, .external_lex_state = 26},
  [794] = {.lex_state = 0, .external_lex_state = 6},
  [795] = {.lex_state = 0, .external_lex_state = 22},
  [796] = {.lex_state = 0, .external_lex_state = 22},
  [797] = {.lex_state = 1},
  [798] = {.lex_state = 0, .external_lex_state = 6},
  [799] = {.lex_state = 0, .external_lex_state = 22},
  [800] = {.lex_state = 0, .external_lex_state = 6},
  [801] = {.lex_state = 0, .external_lex_state = 6},
  [802] = {.lex_state = 1},
  [803] = {.lex_state = 0, .external_lex_state = 26},
  [804] = {.lex_state = 0, .external_lex_state = 26},
  [805] = {.lex_state = 0, .external_lex_state = 22},
  [806] = {.lex_state = 0, .external_lex_state = 22},
  [807] = {.lex_state = 0, .external_lex_state = 22},
  [808] = {.lex_state = 0, .external_lex_state = 22},
  [809] = {.lex_state = 0, .external_lex_state = 6},
  [810] = {.lex_state = 0, .external_lex_state = 22},
  [811] = {.lex_state = 1},
  [812] = {.lex_state = 0, .external_lex_state = 6},
  [813] = {.lex_state = 1, .external_lex_state = 6},
  [814] = {.lex_state = 1},
  [815] = {.lex_state = 0, .external_lex_state = 6},
  [816] = {.lex_state = 0, .external_lex_state = 31},
  [817] = {.lex_state = 0, .external_lex_state = 25},
  [818] = {.lex_state = 0, .external_lex_state = 25},
  [819] = {.lex_state = 0, .external_lex_state = 26},
  [820] = {.lex_state = 0, .external_lex_state = 26},
  [821] = {.lex_state = 0, .external_lex_state = 26},
  [822] = {.lex_state = 0, .external_lex_state = 26},
  [823] = {.lex_state = 0, .external_lex_state = 26},
  [824] = {.lex_state = 0, .external_lex_state = 26},
  [825] = {.lex_state = 1},
  [826] = {.lex_state = 0, .external_lex_state = 6},
  [827] = {.lex_state = 0, .external_lex_state = 25},
  [828] = {.lex_state = 0, .external_lex_state = 25},
  [829] = {.lex_state = 0, .external_lex_state = 25},
  [830] = {.lex_state = 0, .external_lex_state = 25},
  [831] = {.lex_state = 0, .external_lex_state = 25},
  [832] = {.lex_state = 0, .external_lex_state = 25},
  [833] = {.lex_state = 0, .external_lex_state = 6},
  [834] = {.lex_state = 0, .external_lex_state = 6},
  [835] = {.lex_state = 0, .external_lex_state = 6},
  [836] = {.lex_state = 0, .external_lex_state = 6},
  [837] = {.lex_state = 0, .external_lex_state = 6},
  [838] = {.lex_state = 0, .external_lex_state = 6},
  [839] = {.lex_state = 1, .external_lex_state = 28},
  [840] = {.lex_state = 0, .external_lex_state = 6},
  [841] = {.lex_state = 0, .external_lex_state = 6},
  [842] = {.lex_state = 0, .external_lex_state = 6},
  [843] = {.lex_state = 0, .external_lex_state = 6},
  [844] = {.lex_state = 0, .external_lex_state = 6},
  [845] = {.lex_state = 0, .external_lex_state = 6},
  [846] = {.lex_state = 0, .external_lex_state = 6},
  [847] = {.lex_state = 0, .external_lex_state = 6},
  [848] = {.lex_state = 0, .external_lex_state = 6},
  [849] = {.lex_state = 0, .external_lex_state = 6},
  [850] = {.lex_state = 0, .external_lex_state = 6},
  [851] = {.lex_state = 0, .external_lex_state = 26},
  [852] = {.lex_state = 0, .external_lex_state = 6},
  [853] = {.lex_state = 0, .external_lex_state = 6},
  [854] = {.lex_state = 0, .external_lex_state = 6},
  [855] = {.lex_state = 0, .external_lex_state = 6},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 0, .external_lex_state = 6},
  [858] = {.lex_state = 0, .external_lex_state = 6},
  [859] = {.lex_state = 0, .external_lex_state = 6},
  [860] = {.lex_state = 0, .external_lex_state = 6},
  [861] = {.lex_state = 0, .external_lex_state = 6},
  [862] = {.lex_state = 0, .external_lex_state = 6},
  [863] = {.lex_state = 0, .external_lex_state = 6},
  [864] = {.lex_state = 1, .external_lex_state = 6},
  [865] = {.lex_state = 0, .external_lex_state = 6},
  [866] = {.lex_state = 0, .external_lex_state = 6},
  [867] = {.lex_state = 0, .external_lex_state = 6},
  [868] = {.lex_state = 0, .external_lex_state = 6},
  [869] = {.lex_state = 0, .external_lex_state = 6},
  [870] = {.lex_state = 0, .external_lex_state = 6},
  [871] = {.lex_state = 0, .external_lex_state = 6},
  [872] = {.lex_state = 1},
  [873] = {.lex_state = 0, .external_lex_state = 32},
  [874] = {.lex_state = 0, .external_lex_state = 6},
  [875] = {.lex_state = 0, .external_lex_state = 6},
  [876] = {.lex_state = 0, .external_lex_state = 6},
  [877] = {.lex_state = 0, .external_lex_state = 6},
  [878] = {.lex_state = 1},
  [879] = {.lex_state = 0, .external_lex_state = 6},
  [880] = {.lex_state = 0, .external_lex_state = 6},
  [881] = {.lex_state = 0, .external_lex_state = 6},
  [882] = {.lex_state = 0, .external_lex_state = 6},
  [883] = {.lex_state = 0, .external_lex_state = 6},
  [884] = {.lex_state = 0, .external_lex_state = 6},
  [885] = {.lex_state = 0, .external_lex_state = 6},
  [886] = {.lex_state = 2, .external_lex_state = 6},
  [887] = {.lex_state = 1, .external_lex_state = 6},
  [888] = {.lex_state = 0, .external_lex_state = 6},
  [889] = {.lex_state = 0, .external_lex_state = 32},
  [890] = {.lex_state = 0, .external_lex_state = 6},
  [891] = {.lex_state = 0, .external_lex_state = 6},
  [892] = {.lex_state = 0, .external_lex_state = 6},
  [893] = {.lex_state = 0, .external_lex_state = 6},
  [894] = {.lex_state = 0, .external_lex_state = 6},
  [895] = {.lex_state = 0, .external_lex_state = 6},
  [896] = {.lex_state = 0, .external_lex_state = 6},
  [897] = {.lex_state = 0, .external_lex_state = 6},
  [898] = {.lex_state = 0, .external_lex_state = 6},
  [899] = {.lex_state = 0, .external_lex_state = 6},
  [900] = {.lex_state = 0, .external_lex_state = 32},
  [901] = {.lex_state = 0, .external_lex_state = 6},
  [902] = {.lex_state = 0, .external_lex_state = 6},
  [903] = {.lex_state = 1},
  [904] = {.lex_state = 0, .external_lex_state = 6},
  [905] = {.lex_state = 0, .external_lex_state = 6},
  [906] = {.lex_state = 0, .external_lex_state = 6},
  [907] = {.lex_state = 0, .external_lex_state = 6},
  [908] = {.lex_state = 0, .external_lex_state = 6},
  [909] = {.lex_state = 0, .external_lex_state = 6},
  [910] = {.lex_state = 0, .external_lex_state = 6},
  [911] = {.lex_state = 0, .external_lex_state = 6},
  [912] = {.lex_state = 1},
  [913] = {.lex_state = 1, .external_lex_state = 6},
  [914] = {.lex_state = 0, .external_lex_state = 33},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 0, .external_lex_state = 6},
  [917] = {.lex_state = 0, .external_lex_state = 6},
  [918] = {.lex_state = 2, .external_lex_state = 6},
  [919] = {.lex_state = 1},
  [920] = {.lex_state = 1},
  [921] = {.lex_state = 0, .external_lex_state = 6},
  [922] = {.lex_state = 0, .external_lex_state = 6},
  [923] = {.lex_state = 0, .external_lex_state = 6},
  [924] = {.lex_state = 1},
  [925] = {.lex_state = 0, .external_lex_state = 6},
  [926] = {.lex_state = 0, .external_lex_state = 6},
  [927] = {.lex_state = 0, .external_lex_state = 6},
  [928] = {.lex_state = 0, .external_lex_state = 6},
  [929] = {.lex_state = 0, .external_lex_state = 31},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 0, .external_lex_state = 6},
  [932] = {.lex_state = 0, .external_lex_state = 31},
  [933] = {.lex_state = 0, .external_lex_state = 31},
  [934] = {.lex_state = 0, .external_lex_state = 6},
  [935] = {.lex_state = 19},
  [936] = {.lex_state = 340, .external_lex_state = 34},
  [937] = {.lex_state = 0, .external_lex_state = 35},
  [938] = {.lex_state = 0, .external_lex_state = 31},
  [939] = {.lex_state = 1},
  [940] = {.lex_state = 1},
  [941] = {.lex_state = 0, .external_lex_state = 31},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 341},
  [944] = {.lex_state = 21},
  [945] = {.lex_state = 339},
  [946] = {.lex_state = 342},
  [947] = {.lex_state = 19},
  [948] = {.lex_state = 19},
  [949] = {.lex_state = 1},
  [950] = {.lex_state = 0, .external_lex_state = 33},
  [951] = {.lex_state = 0, .external_lex_state = 35},
  [952] = {.lex_state = 0, .external_lex_state = 36},
  [953] = {.lex_state = 1},
  [954] = {.lex_state = 1},
  [955] = {.lex_state = 21},
  [956] = {.lex_state = 340, .external_lex_state = 34},
  [957] = {.lex_state = 0, .external_lex_state = 3},
  [958] = {.lex_state = 342},
  [959] = {.lex_state = 0, .external_lex_state = 6},
  [960] = {.lex_state = 342},
  [961] = {.lex_state = 1},
  [962] = {.lex_state = 0, .external_lex_state = 36},
  [963] = {.lex_state = 19},
  [964] = {.lex_state = 1},
  [965] = {.lex_state = 343},
  [966] = {.lex_state = 342},
  [967] = {.lex_state = 340, .external_lex_state = 34},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 340, .external_lex_state = 34},
  [970] = {.lex_state = 340, .external_lex_state = 34},
  [971] = {.lex_state = 340, .external_lex_state = 34},
  [972] = {.lex_state = 342},
  [973] = {.lex_state = 340, .external_lex_state = 34},
  [974] = {.lex_state = 340, .external_lex_state = 34},
  [975] = {.lex_state = 342},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 0, .external_lex_state = 36},
  [978] = {.lex_state = 340, .external_lex_state = 34},
  [979] = {.lex_state = 340, .external_lex_state = 34},
  [980] = {.lex_state = 340, .external_lex_state = 34},
  [981] = {.lex_state = 340, .external_lex_state = 34},
  [982] = {.lex_state = 0, .external_lex_state = 33},
  [983] = {.lex_state = 0, .external_lex_state = 6},
  [984] = {.lex_state = 0, .external_lex_state = 6},
  [985] = {.lex_state = 340, .external_lex_state = 34},
  [986] = {.lex_state = 340, .external_lex_state = 34},
  [987] = {.lex_state = 340, .external_lex_state = 34},
  [988] = {.lex_state = 340, .external_lex_state = 34},
  [989] = {.lex_state = 339},
  [990] = {.lex_state = 340, .external_lex_state = 34},
  [991] = {.lex_state = 340, .external_lex_state = 34},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 1},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 0, .external_lex_state = 28},
  [996] = {.lex_state = 21},
  [997] = {.lex_state = 341},
  [998] = {.lex_state = 0, .external_lex_state = 3},
  [999] = {.lex_state = 0, .external_lex_state = 36},
  [1000] = {.lex_state = 339},
  [1001] = {.lex_state = 19},
  [1002] = {.lex_state = 340, .external_lex_state = 34},
  [1003] = {.lex_state = 1},
  [1004] = {.lex_state = 1},
  [1005] = {.lex_state = 0, .external_lex_state = 6},
  [1006] = {.lex_state = 1},
  [1007] = {.lex_state = 19},
  [1008] = {.lex_state = 0, .external_lex_state = 6},
  [1009] = {.lex_state = 21},
  [1010] = {.lex_state = 0, .external_lex_state = 35},
  [1011] = {.lex_state = 0, .external_lex_state = 6},
  [1012] = {.lex_state = 2},
  [1013] = {.lex_state = 0, .external_lex_state = 35},
  [1014] = {.lex_state = 0, .external_lex_state = 6},
  [1015] = {.lex_state = 0, .external_lex_state = 10},
  [1016] = {.lex_state = 343},
  [1017] = {.lex_state = 1},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 1},
  [1021] = {.lex_state = 1},
  [1022] = {.lex_state = 1},
  [1023] = {.lex_state = 1},
  [1024] = {.lex_state = 1},
  [1025] = {.lex_state = 1},
  [1026] = {.lex_state = 1},
  [1027] = {.lex_state = 0, .external_lex_state = 6},
  [1028] = {.lex_state = 0, .external_lex_state = 28},
  [1029] = {.lex_state = 0, .external_lex_state = 6},
  [1030] = {.lex_state = 340, .external_lex_state = 34},
  [1031] = {.lex_state = 0, .external_lex_state = 34},
  [1032] = {.lex_state = 0, .external_lex_state = 34},
  [1033] = {.lex_state = 0, .external_lex_state = 37},
  [1034] = {.lex_state = 0, .external_lex_state = 37},
  [1035] = {.lex_state = 0, .external_lex_state = 34},
  [1036] = {.lex_state = 0, .external_lex_state = 37},
  [1037] = {.lex_state = 0, .external_lex_state = 37},
  [1038] = {.lex_state = 0, .external_lex_state = 34},
  [1039] = {.lex_state = 0, .external_lex_state = 37},
  [1040] = {.lex_state = 0, .external_lex_state = 37},
  [1041] = {.lex_state = 0, .external_lex_state = 34},
  [1042] = {.lex_state = 0, .external_lex_state = 34},
  [1043] = {.lex_state = 0, .external_lex_state = 34},
  [1044] = {.lex_state = 0, .external_lex_state = 6},
  [1045] = {.lex_state = 1},
  [1046] = {.lex_state = 0, .external_lex_state = 34},
  [1047] = {.lex_state = 1},
  [1048] = {.lex_state = 0, .external_lex_state = 37},
  [1049] = {.lex_state = 0, .external_lex_state = 6},
  [1050] = {.lex_state = 1},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 0, .external_lex_state = 34},
  [1053] = {.lex_state = 0, .external_lex_state = 34},
  [1054] = {.lex_state = 0, .external_lex_state = 34},
  [1055] = {.lex_state = 0, .external_lex_state = 6},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 0, .external_lex_state = 37},
  [1059] = {.lex_state = 0, .external_lex_state = 37},
  [1060] = {.lex_state = 340},
  [1061] = {.lex_state = 0, .external_lex_state = 37},
  [1062] = {.lex_state = 0, .external_lex_state = 34},
  [1063] = {.lex_state = 0, .external_lex_state = 34},
  [1064] = {.lex_state = 0, .external_lex_state = 34},
  [1065] = {.lex_state = 0, .external_lex_state = 34},
  [1066] = {.lex_state = 0, .external_lex_state = 6},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 0, .external_lex_state = 34},
  [1071] = {.lex_state = 0, .external_lex_state = 34},
  [1072] = {.lex_state = 1},
  [1073] = {.lex_state = 0, .external_lex_state = 6},
  [1074] = {.lex_state = 0, .external_lex_state = 37},
  [1075] = {.lex_state = 0, .external_lex_state = 34},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 0, .external_lex_state = 34},
  [1078] = {.lex_state = 0, .external_lex_state = 34},
  [1079] = {.lex_state = 0, .external_lex_state = 34},
  [1080] = {.lex_state = 0, .external_lex_state = 6},
  [1081] = {.lex_state = 1},
  [1082] = {.lex_state = 1},
  [1083] = {.lex_state = 0, .external_lex_state = 37},
  [1084] = {.lex_state = 0, .external_lex_state = 34},
  [1085] = {.lex_state = 0, .external_lex_state = 34},
  [1086] = {.lex_state = 0, .external_lex_state = 34},
  [1087] = {.lex_state = 0, .external_lex_state = 6},
  [1088] = {.lex_state = 0, .external_lex_state = 6},
  [1089] = {.lex_state = 0, .external_lex_state = 37},
  [1090] = {.lex_state = 1},
  [1091] = {.lex_state = 0, .external_lex_state = 34},
  [1092] = {.lex_state = 0, .external_lex_state = 34},
  [1093] = {.lex_state = 0, .external_lex_state = 34},
  [1094] = {.lex_state = 0, .external_lex_state = 6},
  [1095] = {.lex_state = 2},
  [1096] = {.lex_state = 339},
  [1097] = {.lex_state = 0, .external_lex_state = 37},
  [1098] = {.lex_state = 0, .external_lex_state = 34},
  [1099] = {.lex_state = 0, .external_lex_state = 34},
  [1100] = {.lex_state = 0, .external_lex_state = 34},
  [1101] = {.lex_state = 0, .external_lex_state = 6},
  [1102] = {.lex_state = 0, .external_lex_state = 6},
  [1103] = {.lex_state = 0, .external_lex_state = 6},
  [1104] = {.lex_state = 0, .external_lex_state = 6},
  [1105] = {.lex_state = 21},
  [1106] = {.lex_state = 0, .external_lex_state = 37},
  [1107] = {.lex_state = 0, .external_lex_state = 6},
  [1108] = {.lex_state = 0, .external_lex_state = 34},
  [1109] = {.lex_state = 0, .external_lex_state = 37},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 0, .external_lex_state = 37},
  [1113] = {.lex_state = 0, .external_lex_state = 37},
  [1114] = {.lex_state = 1},
  [1115] = {.lex_state = 1},
  [1116] = {.lex_state = 1},
  [1117] = {.lex_state = 1},
  [1118] = {.lex_state = 1},
  [1119] = {.lex_state = 1},
  [1120] = {.lex_state = 1},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 21},
  [1123] = {.lex_state = 1},
  [1124] = {.lex_state = 1},
  [1125] = {.lex_state = 0, .external_lex_state = 37},
  [1126] = {.lex_state = 1},
  [1127] = {.lex_state = 1},
  [1128] = {.lex_state = 1},
  [1129] = {.lex_state = 1},
  [1130] = {.lex_state = 1},
  [1131] = {.lex_state = 0, .external_lex_state = 6},
  [1132] = {.lex_state = 1},
  [1133] = {.lex_state = 21},
  [1134] = {.lex_state = 1},
  [1135] = {.lex_state = 1},
  [1136] = {.lex_state = 1},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 0, .external_lex_state = 37},
  [1139] = {.lex_state = 2},
  [1140] = {.lex_state = 21},
  [1141] = {.lex_state = 0, .external_lex_state = 37},
  [1142] = {.lex_state = 1},
  [1143] = {.lex_state = 1},
  [1144] = {.lex_state = 1},
  [1145] = {.lex_state = 1},
  [1146] = {.lex_state = 21},
  [1147] = {.lex_state = 0, .external_lex_state = 37},
  [1148] = {.lex_state = 1},
  [1149] = {.lex_state = 0, .external_lex_state = 37},
  [1150] = {.lex_state = 0, .external_lex_state = 37},
  [1151] = {.lex_state = 0, .external_lex_state = 6},
  [1152] = {.lex_state = 0, .external_lex_state = 37},
  [1153] = {.lex_state = 2},
  [1154] = {.lex_state = 21},
  [1155] = {.lex_state = 1},
  [1156] = {.lex_state = 21},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 1},
  [1159] = {.lex_state = 1},
  [1160] = {.lex_state = 33},
  [1161] = {.lex_state = 1},
  [1162] = {.lex_state = 0, .external_lex_state = 37},
  [1163] = {.lex_state = 0, .external_lex_state = 37},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 0, .external_lex_state = 6},
  [1168] = {.lex_state = 1},
  [1169] = {.lex_state = 0, .external_lex_state = 37},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 0, .external_lex_state = 37},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 21},
  [1174] = {.lex_state = 0, .external_lex_state = 37},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__inline_comment] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [sym_builtin_type] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym__invalid_named_binding_token1] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym__one_integer_literal] = ACTIONS(1),
    [sym__other_integer_literal] = ACTIONS(1),
    [sym__route_directive_key] = ACTIONS(1),
    [sym_directive_operator] = ACTIONS(1),
    [sym_recall_source] = ACTIONS(1),
    [sym_default_keyword] = ACTIONS(1),
    [sym_none_keyword] = ACTIONS(1),
    [sym_all_keyword] = ACTIONS(1),
    [sym_role] = ACTIONS(1),
    [sym_with_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [sym_psyche_keyword] = ACTIONS(1),
    [sym_skill_keyword] = ACTIONS(1),
    [sym_service_keyword] = ACTIONS(1),
    [sym_prompt_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_agic_keyword] = ACTIONS(1),
    [sym_task_keyword] = ACTIONS(1),
    [sym_chore_keyword] = ACTIONS(1),
    [sym_flow_keyword] = ACTIONS(1),
    [sym_pass_keyword] = ACTIONS(1),
    [sym_flow_run_keyword] = ACTIONS(1),
    [sym_flow_async_keyword] = ACTIONS(1),
    [sym_flow_await_keyword] = ACTIONS(1),
    [sym_flow_exec_keyword] = ACTIONS(1),
    [sym_flow_spawn_keyword] = ACTIONS(1),
    [sym_flow_let_keyword] = ACTIONS(1),
    [sym_flow_seek_keyword] = ACTIONS(1),
    [sym_flow_ask_keyword] = ACTIONS(1),
    [sym_flow_scatter_keyword] = ACTIONS(1),
    [sym_flow_storm_keyword] = ACTIONS(1),
    [sym_flow_generate_keyword] = ACTIONS(1),
    [sym_flow_gather_keyword] = ACTIONS(1),
    [sym_flow_settle_keyword] = ACTIONS(1),
    [sym_flow_reduce_keyword] = ACTIONS(1),
    [sym_flow_map_keyword] = ACTIONS(1),
    [sym_flow_keep_keyword] = ACTIONS(1),
    [sym_flow_drop_keyword] = ACTIONS(1),
    [sym_flow_sort_keyword] = ACTIONS(1),
    [sym_flow_rank_keyword] = ACTIONS(1),
    [sym_flow_repeat_keyword] = ACTIONS(1),
    [sym_flow_until_keyword] = ACTIONS(1),
    [sym_flow_from_keyword] = ACTIONS(1),
    [sym_flow_windowing_keyword] = ACTIONS(1),
    [sym_flow_using_keyword] = ACTIONS(1),
    [sym_flow_if_keyword] = ACTIONS(1),
    [sym_flow_by_keyword] = ACTIONS(1),
    [sym_flow_in_keyword] = ACTIONS(1),
    [sym_flow_lane_keyword] = ACTIONS(1),
    [sym_flow_ascending_keyword] = ACTIONS(1),
    [sym_flow_descending_keyword] = ACTIONS(1),
    [sym_flow_time_keyword] = ACTIONS(1),
    [sym_flow_times_keyword] = ACTIONS(1),
    [sym_flow_par_keyword] = ACTIONS(1),
    [sym_flow_first_keyword] = ACTIONS(1),
    [sym_flow_last_keyword] = ACTIONS(1),
    [sym_flow_top_keyword] = ACTIONS(1),
    [sym_flow_bottom_keyword] = ACTIONS(1),
    [sym_flow_think_keyword] = ACTIONS(1),
    [sym_flow_use_keyword] = ACTIONS(1),
    [sym_thunk_keyword] = ACTIONS(1),
    [sym_recall_keyword] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_unfold] = ACTIONS(1),
    [anon_sym_each] = ACTIONS(1),
    [anon_sym_fold] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_tail] = ACTIONS(1),
    [sym_optional_marker] = ACTIONS(1),
    [sym_assign_operator] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_cap_kind] = ACTIONS(1),
    [sym_type_name] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym__comment_start] = ACTIONS(1),
    [sym_plain_comment] = ACTIONS(1),
    [sym_shebang_comment] = ACTIONS(1),
    [sym__module_doc_start] = ACTIONS(1),
    [sym__item_doc_start] = ACTIONS(1),
    [sym__param_item_doc_start] = ACTIONS(1),
    [sym__comment_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__directive_start] = ACTIONS(1),
    [sym__until_start] = ACTIONS(1),
    [sym__from_start] = ACTIONS(1),
    [sym__reduce_indent] = ACTIONS(1),
    [sym__reduce_text_start] = ACTIONS(1),
    [sym__text_indent] = ACTIONS(1),
    [sym__cap_text_start] = ACTIONS(1),
    [sym_indented_raw_text] = ACTIONS(1),
    [sym__flow_raw_text] = ACTIONS(1),
    [sym__agic_raw_text] = ACTIONS(1),
    [sym__error_line] = ACTIONS(1),
    [sym__exec_binding_start] = ACTIONS(1),
    [sym__collection_binding_start] = ACTIONS(1),
    [sym__spawn_binding_start] = ACTIONS(1),
    [sym__reserved_binding_start] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
    [sym__async_await_binding_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1068),
    [sym__item] = STATE(127),
    [sym__trivia] = STATE(127),
    [aux_sym_source_file_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(601),
    [sym__collection_operation] = STATE(601),
    [sym_let_statement] = STATE(601),
    [sym_exec_statement] = STATE(601),
    [sym_spawn_statement] = STATE(601),
    [sym__invalid_exec_binding] = STATE(602),
    [sym__invalid_reserved_binding] = STATE(603),
    [sym__invalid_named_binding] = STATE(604),
    [sym_run_statement] = STATE(601),
    [sym__async_modifier] = STATE(964),
    [sym__run] = STATE(605),
    [sym_await_statement] = STATE(601),
    [sym_implicit_run_statement] = STATE(601),
    [sym__implicit_run_line] = STATE(128),
    [sym_seek_statement] = STATE(601),
    [sym_ask_statement] = STATE(601),
    [sym_generate_statement] = STATE(601),
    [sym_reduce_statement] = STATE(601),
    [sym_map_statement] = STATE(601),
    [sym_keep_statement] = STATE(601),
    [sym_drop_statement] = STATE(601),
    [sym_sort_statement] = STATE(601),
    [sym_repeat_statement] = STATE(601),
    [sym_invalid_flow_reserved_statement] = STATE(601),
    [sym__flow_reserved_word] = STATE(448),
    [sym__collection_binding_word] = STATE(448),
    [sym__async_await_binding_word] = STATE(448),
    [sym__reserved_binding_word] = STATE(448),
    [sym__agic_reserved_word] = STATE(448),
    [anon_sym__] = ACTIONS(11),
    [sym_directive_key] = ACTIONS(11),
    [sym_role] = ACTIONS(13),
    [sym_with_keyword] = ACTIONS(11),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(13),
    [sym_skill_keyword] = ACTIONS(13),
    [sym_service_keyword] = ACTIONS(13),
    [sym_prompt_keyword] = ACTIONS(13),
    [sym_agic_keyword] = ACTIONS(11),
    [sym_task_keyword] = ACTIONS(11),
    [sym_chore_keyword] = ACTIONS(11),
    [sym_flow_keyword] = ACTIONS(11),
    [sym_pass_keyword] = ACTIONS(15),
    [sym_flow_run_keyword] = ACTIONS(17),
    [sym_flow_async_keyword] = ACTIONS(19),
    [sym_flow_await_keyword] = ACTIONS(21),
    [sym_flow_exec_keyword] = ACTIONS(23),
    [sym_flow_spawn_keyword] = ACTIONS(25),
    [sym_flow_let_keyword] = ACTIONS(27),
    [sym_flow_seek_keyword] = ACTIONS(29),
    [sym_flow_ask_keyword] = ACTIONS(31),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(33),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(35),
    [sym_flow_map_keyword] = ACTIONS(37),
    [sym_flow_keep_keyword] = ACTIONS(39),
    [sym_flow_drop_keyword] = ACTIONS(41),
    [sym_flow_sort_keyword] = ACTIONS(43),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(45),
    [sym_flow_until_keyword] = ACTIONS(11),
    [sym_flow_from_keyword] = ACTIONS(11),
    [sym_flow_windowing_keyword] = ACTIONS(11),
    [sym_flow_using_keyword] = ACTIONS(11),
    [sym_flow_if_keyword] = ACTIONS(11),
    [sym_flow_by_keyword] = ACTIONS(11),
    [sym_flow_in_keyword] = ACTIONS(13),
    [sym_flow_lane_keyword] = ACTIONS(13),
    [sym_flow_ascending_keyword] = ACTIONS(11),
    [sym_flow_descending_keyword] = ACTIONS(11),
    [sym_flow_time_keyword] = ACTIONS(13),
    [sym_flow_times_keyword] = ACTIONS(11),
    [sym_flow_par_keyword] = ACTIONS(11),
    [sym_flow_first_keyword] = ACTIONS(11),
    [sym_flow_last_keyword] = ACTIONS(11),
    [sym_flow_top_keyword] = ACTIONS(11),
    [sym_flow_bottom_keyword] = ACTIONS(11),
    [sym_flow_think_keyword] = ACTIONS(11),
    [sym_flow_use_keyword] = ACTIONS(13),
    [sym_thunk_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_unfold] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(11),
    [anon_sym_fold] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(11),
    [anon_sym_tail] = ACTIONS(11),
    [sym__flow_raw_text] = ACTIONS(47),
  },
  [3] = {
    [sym__flow_operation] = STATE(601),
    [sym__collection_operation] = STATE(601),
    [sym_let_statement] = STATE(601),
    [sym_exec_statement] = STATE(601),
    [sym_spawn_statement] = STATE(601),
    [sym__invalid_exec_binding] = STATE(602),
    [sym__invalid_reserved_binding] = STATE(603),
    [sym__invalid_named_binding] = STATE(604),
    [sym_run_statement] = STATE(601),
    [sym__async_modifier] = STATE(964),
    [sym__run] = STATE(605),
    [sym_await_statement] = STATE(601),
    [sym_implicit_run_statement] = STATE(601),
    [sym__implicit_run_line] = STATE(128),
    [sym_seek_statement] = STATE(601),
    [sym_ask_statement] = STATE(601),
    [sym_generate_statement] = STATE(601),
    [sym_reduce_statement] = STATE(601),
    [sym_map_statement] = STATE(601),
    [sym_keep_statement] = STATE(601),
    [sym_drop_statement] = STATE(601),
    [sym_sort_statement] = STATE(601),
    [sym_repeat_statement] = STATE(601),
    [sym_invalid_flow_reserved_statement] = STATE(601),
    [sym__flow_reserved_word] = STATE(448),
    [sym__collection_binding_word] = STATE(448),
    [sym__async_await_binding_word] = STATE(448),
    [sym__reserved_binding_word] = STATE(448),
    [sym__agic_reserved_word] = STATE(448),
    [anon_sym__] = ACTIONS(11),
    [sym_directive_key] = ACTIONS(11),
    [sym_role] = ACTIONS(13),
    [sym_with_keyword] = ACTIONS(11),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(13),
    [sym_skill_keyword] = ACTIONS(13),
    [sym_service_keyword] = ACTIONS(13),
    [sym_prompt_keyword] = ACTIONS(13),
    [sym_agic_keyword] = ACTIONS(11),
    [sym_task_keyword] = ACTIONS(11),
    [sym_chore_keyword] = ACTIONS(11),
    [sym_flow_keyword] = ACTIONS(11),
    [sym_pass_keyword] = ACTIONS(11),
    [sym_flow_run_keyword] = ACTIONS(17),
    [sym_flow_async_keyword] = ACTIONS(19),
    [sym_flow_await_keyword] = ACTIONS(21),
    [sym_flow_exec_keyword] = ACTIONS(23),
    [sym_flow_spawn_keyword] = ACTIONS(25),
    [sym_flow_let_keyword] = ACTIONS(27),
    [sym_flow_seek_keyword] = ACTIONS(29),
    [sym_flow_ask_keyword] = ACTIONS(31),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(33),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(35),
    [sym_flow_map_keyword] = ACTIONS(37),
    [sym_flow_keep_keyword] = ACTIONS(39),
    [sym_flow_drop_keyword] = ACTIONS(41),
    [sym_flow_sort_keyword] = ACTIONS(43),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(45),
    [sym_flow_until_keyword] = ACTIONS(11),
    [sym_flow_from_keyword] = ACTIONS(11),
    [sym_flow_windowing_keyword] = ACTIONS(11),
    [sym_flow_using_keyword] = ACTIONS(11),
    [sym_flow_if_keyword] = ACTIONS(11),
    [sym_flow_by_keyword] = ACTIONS(11),
    [sym_flow_in_keyword] = ACTIONS(13),
    [sym_flow_lane_keyword] = ACTIONS(13),
    [sym_flow_ascending_keyword] = ACTIONS(11),
    [sym_flow_descending_keyword] = ACTIONS(11),
    [sym_flow_time_keyword] = ACTIONS(13),
    [sym_flow_times_keyword] = ACTIONS(11),
    [sym_flow_par_keyword] = ACTIONS(11),
    [sym_flow_first_keyword] = ACTIONS(11),
    [sym_flow_last_keyword] = ACTIONS(11),
    [sym_flow_top_keyword] = ACTIONS(11),
    [sym_flow_bottom_keyword] = ACTIONS(11),
    [sym_flow_think_keyword] = ACTIONS(11),
    [sym_flow_use_keyword] = ACTIONS(13),
    [sym_thunk_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_unfold] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(11),
    [anon_sym_fold] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(11),
    [anon_sym_tail] = ACTIONS(11),
    [sym__flow_raw_text] = ACTIONS(47),
  },
  [4] = {
    [sym__flow_operation] = STATE(449),
    [sym__collection_operation] = STATE(449),
    [sym_let_statement] = STATE(449),
    [sym_exec_statement] = STATE(449),
    [sym_spawn_statement] = STATE(449),
    [sym__invalid_exec_binding] = STATE(452),
    [sym__invalid_reserved_binding] = STATE(455),
    [sym__invalid_named_binding] = STATE(456),
    [sym_run_statement] = STATE(449),
    [sym__async_modifier] = STATE(1006),
    [sym__run] = STATE(457),
    [sym_await_statement] = STATE(449),
    [sym_implicit_run_statement] = STATE(449),
    [sym__implicit_run_line] = STATE(44),
    [sym_seek_statement] = STATE(449),
    [sym_ask_statement] = STATE(449),
    [sym_generate_statement] = STATE(449),
    [sym_reduce_statement] = STATE(449),
    [sym_map_statement] = STATE(449),
    [sym_keep_statement] = STATE(449),
    [sym_drop_statement] = STATE(449),
    [sym_sort_statement] = STATE(449),
    [sym_repeat_statement] = STATE(449),
    [sym_invalid_flow_reserved_statement] = STATE(449),
    [sym__flow_reserved_word] = STATE(388),
    [sym__collection_binding_word] = STATE(388),
    [sym__async_await_binding_word] = STATE(388),
    [sym__reserved_binding_word] = STATE(388),
    [sym__agic_reserved_word] = STATE(388),
    [anon_sym__] = ACTIONS(49),
    [sym_directive_key] = ACTIONS(49),
    [sym_role] = ACTIONS(51),
    [sym_with_keyword] = ACTIONS(49),
    [sym_struct_keyword] = ACTIONS(49),
    [sym_psyche_keyword] = ACTIONS(51),
    [sym_skill_keyword] = ACTIONS(51),
    [sym_service_keyword] = ACTIONS(51),
    [sym_prompt_keyword] = ACTIONS(51),
    [sym_agic_keyword] = ACTIONS(49),
    [sym_task_keyword] = ACTIONS(49),
    [sym_chore_keyword] = ACTIONS(49),
    [sym_flow_keyword] = ACTIONS(49),
    [sym_pass_keyword] = ACTIONS(49),
    [sym_flow_run_keyword] = ACTIONS(53),
    [sym_flow_async_keyword] = ACTIONS(19),
    [sym_flow_await_keyword] = ACTIONS(55),
    [sym_flow_exec_keyword] = ACTIONS(57),
    [sym_flow_spawn_keyword] = ACTIONS(59),
    [sym_flow_let_keyword] = ACTIONS(61),
    [sym_flow_seek_keyword] = ACTIONS(63),
    [sym_flow_ask_keyword] = ACTIONS(65),
    [sym_flow_scatter_keyword] = ACTIONS(49),
    [sym_flow_storm_keyword] = ACTIONS(49),
    [sym_flow_generate_keyword] = ACTIONS(67),
    [sym_flow_gather_keyword] = ACTIONS(49),
    [sym_flow_settle_keyword] = ACTIONS(49),
    [sym_flow_reduce_keyword] = ACTIONS(69),
    [sym_flow_map_keyword] = ACTIONS(71),
    [sym_flow_keep_keyword] = ACTIONS(73),
    [sym_flow_drop_keyword] = ACTIONS(75),
    [sym_flow_sort_keyword] = ACTIONS(77),
    [sym_flow_rank_keyword] = ACTIONS(49),
    [sym_flow_repeat_keyword] = ACTIONS(79),
    [sym_flow_until_keyword] = ACTIONS(49),
    [sym_flow_from_keyword] = ACTIONS(49),
    [sym_flow_windowing_keyword] = ACTIONS(49),
    [sym_flow_using_keyword] = ACTIONS(49),
    [sym_flow_if_keyword] = ACTIONS(49),
    [sym_flow_by_keyword] = ACTIONS(49),
    [sym_flow_in_keyword] = ACTIONS(51),
    [sym_flow_lane_keyword] = ACTIONS(51),
    [sym_flow_ascending_keyword] = ACTIONS(49),
    [sym_flow_descending_keyword] = ACTIONS(49),
    [sym_flow_time_keyword] = ACTIONS(51),
    [sym_flow_times_keyword] = ACTIONS(49),
    [sym_flow_par_keyword] = ACTIONS(49),
    [sym_flow_first_keyword] = ACTIONS(49),
    [sym_flow_last_keyword] = ACTIONS(49),
    [sym_flow_top_keyword] = ACTIONS(49),
    [sym_flow_bottom_keyword] = ACTIONS(49),
    [sym_flow_think_keyword] = ACTIONS(49),
    [sym_flow_use_keyword] = ACTIONS(51),
    [sym_thunk_keyword] = ACTIONS(49),
    [anon_sym_call] = ACTIONS(49),
    [anon_sym_do] = ACTIONS(49),
    [anon_sym_unfold] = ACTIONS(49),
    [anon_sym_each] = ACTIONS(49),
    [anon_sym_fold] = ACTIONS(49),
    [anon_sym_head] = ACTIONS(49),
    [anon_sym_tail] = ACTIONS(49),
    [sym__flow_raw_text] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(85), 1,
      sym_flow_run_keyword,
    ACTIONS(87), 1,
      sym_flow_async_keyword,
    ACTIONS(89), 1,
      sym_flow_await_keyword,
    ACTIONS(91), 1,
      sym_flow_spawn_keyword,
    ACTIONS(93), 1,
      sym_flow_seek_keyword,
    ACTIONS(95), 1,
      sym_flow_ask_keyword,
    ACTIONS(97), 1,
      sym_flow_generate_keyword,
    ACTIONS(99), 1,
      sym_flow_reduce_keyword,
    ACTIONS(101), 1,
      sym_flow_map_keyword,
    ACTIONS(103), 1,
      sym_flow_keep_keyword,
    ACTIONS(105), 1,
      sym_flow_drop_keyword,
    ACTIONS(107), 1,
      sym_flow_sort_keyword,
    ACTIONS(109), 1,
      sym_flow_repeat_keyword,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(113), 1,
      sym__exec_binding_start,
    ACTIONS(115), 1,
      sym__reserved_binding_start,
    ACTIONS(117), 1,
      sym__variable_name,
    STATE(375), 1,
      sym_local_name,
    STATE(605), 1,
      sym__run,
    STATE(964), 1,
      sym__async_modifier,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    STATE(645), 14,
      sym__flow_operation,
      sym__collection_operation,
      sym_spawn_statement,
      sym_run_statement,
      sym_await_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [81] = 22,
    ACTIONS(87), 1,
      sym_flow_async_keyword,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(117), 1,
      sym__variable_name,
    ACTIONS(119), 1,
      sym_flow_run_keyword,
    ACTIONS(121), 1,
      sym_flow_await_keyword,
    ACTIONS(123), 1,
      sym_flow_spawn_keyword,
    ACTIONS(125), 1,
      sym_flow_seek_keyword,
    ACTIONS(127), 1,
      sym_flow_ask_keyword,
    ACTIONS(129), 1,
      sym_flow_generate_keyword,
    ACTIONS(131), 1,
      sym_flow_reduce_keyword,
    ACTIONS(133), 1,
      sym_flow_map_keyword,
    ACTIONS(135), 1,
      sym_flow_keep_keyword,
    ACTIONS(137), 1,
      sym_flow_drop_keyword,
    ACTIONS(139), 1,
      sym_flow_sort_keyword,
    ACTIONS(141), 1,
      sym_flow_repeat_keyword,
    ACTIONS(143), 1,
      sym__exec_binding_start,
    ACTIONS(145), 1,
      sym__reserved_binding_start,
    STATE(397), 1,
      sym_local_name,
    STATE(457), 1,
      sym__run,
    STATE(1006), 1,
      sym__async_modifier,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    STATE(469), 14,
      sym__flow_operation,
      sym__collection_operation,
      sym_spawn_statement,
      sym_run_statement,
      sym_await_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [162] = 21,
    ACTIONS(85), 1,
      sym_flow_run_keyword,
    ACTIONS(93), 1,
      sym_flow_seek_keyword,
    ACTIONS(95), 1,
      sym_flow_ask_keyword,
    ACTIONS(103), 1,
      sym_flow_keep_keyword,
    ACTIONS(105), 1,
      sym_flow_drop_keyword,
    ACTIONS(107), 1,
      sym_flow_sort_keyword,
    ACTIONS(109), 1,
      sym_flow_repeat_keyword,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    ACTIONS(153), 1,
      sym__exec_binding_start,
    ACTIONS(155), 1,
      sym__collection_binding_start,
    ACTIONS(157), 1,
      sym__spawn_binding_start,
    ACTIONS(159), 1,
      sym__reserved_binding_start,
    ACTIONS(161), 1,
      sym__async_await_binding_start,
    STATE(483), 1,
      sym_text_inline,
    STATE(485), 1,
      sym__run,
    STATE(570), 1,
      sym_text_block,
    STATE(688), 1,
      sym_line_end,
    STATE(838), 1,
      sym_text_line,
    STATE(484), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [232] = 21,
    ACTIONS(119), 1,
      sym_flow_run_keyword,
    ACTIONS(125), 1,
      sym_flow_seek_keyword,
    ACTIONS(127), 1,
      sym_flow_ask_keyword,
    ACTIONS(135), 1,
      sym_flow_keep_keyword,
    ACTIONS(137), 1,
      sym_flow_drop_keyword,
    ACTIONS(139), 1,
      sym_flow_sort_keyword,
    ACTIONS(141), 1,
      sym_flow_repeat_keyword,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    ACTIONS(163), 1,
      sym__exec_binding_start,
    ACTIONS(165), 1,
      sym__collection_binding_start,
    ACTIONS(167), 1,
      sym__spawn_binding_start,
    ACTIONS(169), 1,
      sym__reserved_binding_start,
    ACTIONS(171), 1,
      sym__async_await_binding_start,
    STATE(258), 1,
      sym_text_inline,
    STATE(260), 1,
      sym__run,
    STATE(346), 1,
      sym_text_block,
    STATE(730), 1,
      sym_line_end,
    STATE(911), 1,
      sym_text_line,
    STATE(259), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [302] = 13,
    ACTIONS(173), 1,
      sym_with_keyword,
    ACTIONS(175), 1,
      sym_struct_keyword,
    ACTIONS(177), 1,
      sym_psyche_keyword,
    ACTIONS(179), 1,
      sym_skill_keyword,
    ACTIONS(181), 1,
      sym_service_keyword,
    ACTIONS(183), 1,
      sym_prompt_keyword,
    ACTIONS(185), 1,
      sym_context_keyword,
    ACTIONS(187), 1,
      sym_instruct_keyword,
    ACTIONS(189), 1,
      sym_agic_keyword,
    ACTIONS(191), 1,
      sym_task_keyword,
    ACTIONS(193), 1,
      sym_chore_keyword,
    ACTIONS(195), 1,
      sym_flow_keyword,
    STATE(687), 12,
      sym_with,
      sym_struct,
      sym_psyche,
      sym_skill,
      sym_service,
      sym_prompt,
      sym_task,
      sym_chore,
      sym_instruct,
      sym_context,
      sym_agic,
      sym_flow,
  [353] = 13,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(199), 1,
      aux_sym__doc_space_token1,
    ACTIONS(201), 1,
      sym_arrow,
    ACTIONS(203), 1,
      sym_colon,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_newline,
    STATE(20), 1,
      sym__required_space,
    STATE(223), 1,
      sym_runnable_name,
    STATE(731), 1,
      sym_line_end,
    STATE(732), 1,
      sym__invalid_modified_run_tail,
    STATE(733), 1,
      sym_inline_agic,
    STATE(756), 1,
      sym_text_line,
  [393] = 6,
    ACTIONS(33), 1,
      sym_flow_generate_keyword,
    ACTIONS(35), 1,
      sym_flow_reduce_keyword,
    ACTIONS(37), 1,
      sym_flow_map_keyword,
    STATE(386), 1,
      sym__collection_binding_word,
    ACTIONS(209), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(508), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [419] = 13,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(213), 1,
      aux_sym__doc_space_token1,
    ACTIONS(215), 1,
      sym_arrow,
    ACTIONS(217), 1,
      sym_colon,
    ACTIONS(219), 1,
      sym_newline,
    STATE(22), 1,
      sym__required_space,
    STATE(248), 1,
      sym_line_end,
    STATE(249), 1,
      sym__invalid_modified_run_tail,
    STATE(250), 1,
      sym_inline_agic,
    STATE(419), 1,
      sym_runnable_name,
    STATE(875), 1,
      sym_text_line,
  [459] = 6,
    ACTIONS(67), 1,
      sym_flow_generate_keyword,
    ACTIONS(69), 1,
      sym_flow_reduce_keyword,
    ACTIONS(71), 1,
      sym_flow_map_keyword,
    STATE(432), 1,
      sym__collection_binding_word,
    ACTIONS(221), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(278), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [485] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(223), 1,
      sym_flow_if_keyword,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    STATE(396), 1,
      sym__named_if_complement,
    STATE(658), 1,
      sym__inline_if_complement,
    STATE(660), 1,
      sym__if_complements,
    STATE(797), 1,
      sym__lanes_complement,
    STATE(800), 1,
      sym_position,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(227), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [518] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(223), 1,
      sym_flow_if_keyword,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    STATE(396), 1,
      sym__named_if_complement,
    STATE(658), 1,
      sym__inline_if_complement,
    STATE(659), 1,
      sym__if_complements,
    STATE(797), 1,
      sym__lanes_complement,
    STATE(798), 1,
      sym_position,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(227), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [551] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    ACTIONS(229), 1,
      sym_flow_if_keyword,
    STATE(405), 1,
      sym__named_if_complement,
    STATE(473), 1,
      sym__inline_if_complement,
    STATE(477), 1,
      sym__if_complements,
    STATE(856), 1,
      sym__lanes_complement,
    STATE(857), 1,
      sym_position,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(227), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [584] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    ACTIONS(229), 1,
      sym_flow_if_keyword,
    STATE(365), 1,
      sym__if_complements,
    STATE(405), 1,
      sym__named_if_complement,
    STATE(473), 1,
      sym__inline_if_complement,
    STATE(856), 1,
      sym__lanes_complement,
    STATE(858), 1,
      sym_position,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(227), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [617] = 10,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    ACTIONS(233), 1,
      sym_flow_using_keyword,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(239), 1,
      sym_newline,
    STATE(387), 1,
      sym__lanes_complement,
    STATE(655), 1,
      sym__runnable_complements,
    STATE(656), 1,
      sym_inline_agic,
    STATE(791), 1,
      sym__named_using_complement,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [649] = 10,
    ACTIONS(225), 1,
      sym_flow_in_keyword,
    ACTIONS(233), 1,
      sym_flow_using_keyword,
    ACTIONS(239), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    STATE(403), 1,
      sym__lanes_complement,
    STATE(471), 1,
      sym__runnable_complements,
    STATE(472), 1,
      sym_inline_agic,
    STATE(853), 1,
      sym__named_using_complement,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [681] = 10,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(245), 1,
      sym_arrow,
    ACTIONS(247), 1,
      sym_colon,
    STATE(383), 1,
      sym_runnable_name,
    STATE(498), 1,
      sym_line_end,
    STATE(500), 1,
      sym_inline_agic,
    STATE(836), 1,
      sym_text_line,
  [712] = 10,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(526), 1,
      sym_line_end,
    STATE(637), 1,
      sym_inline_agic,
    STATE(773), 1,
      sym_runnable_name,
    STATE(834), 1,
      sym_text_line,
  [743] = 10,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    STATE(272), 1,
      sym_line_end,
    STATE(274), 1,
      sym_inline_agic,
    STATE(430), 1,
      sym_runnable_name,
    STATE(885), 1,
      sym_text_line,
  [774] = 10,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(292), 1,
      sym_line_end,
    STATE(467), 1,
      sym_inline_agic,
    STATE(847), 1,
      sym_runnable_name,
    STATE(896), 1,
      sym_text_line,
  [805] = 8,
    ACTIONS(255), 1,
      sym_blank_line,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(259), 1,
      sym__dedent,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    STATE(251), 1,
      sym_property,
    STATE(1163), 1,
      sym__cap_text_body,
    STATE(39), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [831] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(265), 1,
      sym_blank_line,
    ACTIONS(267), 1,
      sym__dedent,
    STATE(1083), 1,
      sym__cap_text_body,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [855] = 8,
    ACTIONS(269), 1,
      sym_flow_if_keyword,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    STATE(396), 1,
      sym__named_if_complement,
    STATE(658), 1,
      sym__inline_if_complement,
    STATE(659), 1,
      sym__if_complements,
    STATE(797), 1,
      sym__lanes_complement,
    STATE(798), 1,
      sym_position,
    ACTIONS(273), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [881] = 8,
    ACTIONS(269), 1,
      sym_flow_if_keyword,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    STATE(396), 1,
      sym__named_if_complement,
    STATE(658), 1,
      sym__inline_if_complement,
    STATE(660), 1,
      sym__if_complements,
    STATE(797), 1,
      sym__lanes_complement,
    STATE(800), 1,
      sym_position,
    ACTIONS(273), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [907] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(265), 1,
      sym_blank_line,
    ACTIONS(275), 1,
      sym__dedent,
    STATE(1074), 1,
      sym__cap_text_body,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [931] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(275), 1,
      sym__dedent,
    ACTIONS(277), 1,
      sym_blank_line,
    STATE(1074), 1,
      sym__cap_text_body,
    STATE(25), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [955] = 7,
    ACTIONS(19), 1,
      sym_flow_async_keyword,
    ACTIONS(21), 1,
      sym_flow_await_keyword,
    ACTIONS(279), 1,
      sym_flow_run_keyword,
    STATE(390), 1,
      sym__async_await_binding_word,
    STATE(605), 1,
      sym__run,
    STATE(964), 1,
      sym__async_modifier,
    STATE(508), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [979] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(281), 1,
      sym_blank_line,
    ACTIONS(283), 1,
      sym__dedent,
    STATE(1048), 1,
      sym__cap_text_body,
    STATE(28), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1003] = 8,
    ACTIONS(233), 1,
      sym_flow_using_keyword,
    ACTIONS(239), 1,
      sym_newline,
    ACTIONS(285), 1,
      sym_arrow,
    ACTIONS(287), 1,
      sym_colon,
    STATE(135), 1,
      sym__reduce_inline_block,
    STATE(470), 1,
      sym__reduce_inline_line,
    STATE(703), 1,
      sym__named_using_complement,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [1029] = 8,
    ACTIONS(233), 1,
      sym_flow_using_keyword,
    ACTIONS(239), 1,
      sym_newline,
    ACTIONS(289), 1,
      sym_arrow,
    ACTIONS(291), 1,
      sym_colon,
    STATE(81), 1,
      sym__reduce_inline_block,
    STATE(651), 1,
      sym__reduce_inline_line,
    STATE(654), 1,
      sym__named_using_complement,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [1055] = 8,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(293), 1,
      sym_blank_line,
    ACTIONS(295), 1,
      sym__dedent,
    STATE(251), 1,
      sym_property,
    STATE(1147), 1,
      sym__cap_text_body,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1081] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(297), 1,
      sym_flow_if_keyword,
    STATE(405), 1,
      sym__named_if_complement,
    STATE(473), 1,
      sym__inline_if_complement,
    STATE(477), 1,
      sym__if_complements,
    STATE(856), 1,
      sym__lanes_complement,
    STATE(857), 1,
      sym_position,
    ACTIONS(273), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1107] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(297), 1,
      sym_flow_if_keyword,
    STATE(365), 1,
      sym__if_complements,
    STATE(405), 1,
      sym__named_if_complement,
    STATE(473), 1,
      sym__inline_if_complement,
    STATE(856), 1,
      sym__lanes_complement,
    STATE(858), 1,
      sym_position,
    ACTIONS(273), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1133] = 8,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(305), 1,
      sym_colon,
    STATE(802), 1,
      sym__repeat_count_complement,
    STATE(1116), 1,
      sym__window_complement,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1159] = 8,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(307), 1,
      sym_blank_line,
    ACTIONS(309), 1,
      sym__dedent,
    STATE(251), 1,
      sym_property,
    STATE(1162), 1,
      sym__cap_text_body,
    STATE(34), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1185] = 8,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(293), 1,
      sym_blank_line,
    ACTIONS(311), 1,
      sym__dedent,
    STATE(251), 1,
      sym_property,
    STATE(1109), 1,
      sym__cap_text_body,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1211] = 7,
    ACTIONS(19), 1,
      sym_flow_async_keyword,
    ACTIONS(55), 1,
      sym_flow_await_keyword,
    ACTIONS(313), 1,
      sym_flow_run_keyword,
    STATE(435), 1,
      sym__async_await_binding_word,
    STATE(457), 1,
      sym__run,
    STATE(1006), 1,
      sym__async_modifier,
    STATE(278), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1235] = 8,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(315), 1,
      sym_colon,
    STATE(930), 1,
      sym__repeat_count_complement,
    STATE(1164), 1,
      sym__window_complement,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1261] = 6,
    ACTIONS(317), 1,
      sym_blank_line,
    ACTIONS(320), 1,
      sym__comment_start,
    ACTIONS(325), 1,
      sym__line_start,
    STATE(251), 1,
      sym_property,
    ACTIONS(323), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1282] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(637), 1,
      sym_inline_agic,
    STATE(773), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1305] = 5,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    ACTIONS(328), 1,
      sym_blank_line,
    STATE(45), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(330), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1324] = 5,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    ACTIONS(332), 1,
      sym_blank_line,
    STATE(46), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(334), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1343] = 5,
    ACTIONS(336), 1,
      sym_blank_line,
    ACTIONS(341), 1,
      sym__flow_raw_text,
    STATE(46), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(339), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1362] = 5,
    ACTIONS(344), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym__text_indent,
    STATE(348), 1,
      sym_text_body,
    STATE(933), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(346), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1381] = 5,
    ACTIONS(344), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym__text_indent,
    STATE(348), 1,
      sym_text_body,
    STATE(933), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(350), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1400] = 5,
    ACTIONS(344), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym__text_indent,
    STATE(348), 1,
      sym_text_body,
    STATE(933), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(352), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1419] = 5,
    ACTIONS(344), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym__text_indent,
    STATE(348), 1,
      sym_text_body,
    STATE(933), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(354), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1438] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(461), 1,
      sym_inline_agic,
    STATE(844), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1461] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(463), 1,
      sym_inline_agic,
    STATE(846), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1484] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(467), 1,
      sym_inline_agic,
    STATE(847), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1507] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    STATE(387), 1,
      sym__lanes_complement,
    STATE(655), 1,
      sym__runnable_complements,
    STATE(656), 1,
      sym_inline_agic,
    STATE(791), 1,
      sym__named_using_complement,
  [1532] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    STATE(387), 1,
      sym__lanes_complement,
    STATE(656), 1,
      sym_inline_agic,
    STATE(712), 1,
      sym__runnable_complements,
    STATE(791), 1,
      sym__named_using_complement,
  [1557] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(633), 1,
      sym_inline_agic,
    STATE(768), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1580] = 7,
    ACTIONS(15), 1,
      sym_pass_keyword,
    ACTIONS(362), 1,
      sym_directive_key,
    ACTIONS(364), 1,
      sym_role,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    STATE(104), 1,
      sym__unroled_message_line,
    STATE(402), 1,
      sym__agic_reserved_word,
    STATE(579), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
  [1603] = 7,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(372), 1,
      sym__dedent,
    ACTIONS(374), 1,
      sym__line_start,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1106), 1,
      sym__repeat_statements,
    STATE(209), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1626] = 5,
    ACTIONS(376), 1,
      sym_blank_line,
    ACTIONS(378), 1,
      sym__comment_start,
    ACTIONS(382), 1,
      sym__directive_start,
    ACTIONS(380), 2,
      sym__dedent,
      sym__line_start,
    STATE(65), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1645] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    STATE(403), 1,
      sym__lanes_complement,
    STATE(471), 1,
      sym__runnable_complements,
    STATE(472), 1,
      sym_inline_agic,
    STATE(853), 1,
      sym__named_using_complement,
  [1670] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(235), 1,
      sym_arrow,
    ACTIONS(237), 1,
      sym_colon,
    ACTIONS(249), 1,
      sym__identifier,
    STATE(635), 1,
      sym_inline_agic,
    STATE(771), 1,
      sym_runnable_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [1693] = 6,
    ACTIONS(388), 1,
      sym_blank_line,
    ACTIONS(390), 1,
      sym__comment_start,
    ACTIONS(394), 1,
      sym__line_start,
    STATE(417), 1,
      sym__flow_statement,
    ACTIONS(392), 2,
      sym__dedent,
      sym__until_start,
    STATE(64), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1714] = 8,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    STATE(235), 1,
      sym__runnable_complements,
    STATE(403), 1,
      sym__lanes_complement,
    STATE(472), 1,
      sym_inline_agic,
    STATE(853), 1,
      sym__named_using_complement,
  [1739] = 6,
    ACTIONS(390), 1,
      sym__comment_start,
    ACTIONS(394), 1,
      sym__line_start,
    ACTIONS(396), 1,
      sym_blank_line,
    STATE(417), 1,
      sym__flow_statement,
    ACTIONS(398), 2,
      sym__dedent,
      sym__until_start,
    STATE(67), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1760] = 5,
    ACTIONS(378), 1,
      sym__comment_start,
    ACTIONS(382), 1,
      sym__directive_start,
    ACTIONS(400), 1,
      sym_blank_line,
    ACTIONS(402), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1779] = 7,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(406), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1149), 1,
      sym__repeat_statements,
    STATE(68), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1802] = 6,
    ACTIONS(408), 1,
      sym_blank_line,
    ACTIONS(411), 1,
      sym__comment_start,
    ACTIONS(416), 1,
      sym__line_start,
    STATE(417), 1,
      sym__flow_statement,
    ACTIONS(414), 2,
      sym__dedent,
      sym__until_start,
    STATE(67), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1823] = 7,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(419), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1059), 1,
      sym__repeat_statements,
    STATE(209), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1846] = 5,
    ACTIONS(421), 1,
      sym_blank_line,
    ACTIONS(424), 1,
      sym__comment_start,
    ACTIONS(429), 1,
      sym__directive_start,
    ACTIONS(427), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1865] = 7,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(432), 1,
      sym_blank_line,
    ACTIONS(434), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1152), 1,
      sym__repeat_statements,
    STATE(71), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1888] = 7,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(436), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1033), 1,
      sym__repeat_statements,
    STATE(209), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1911] = 7,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(440), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1034), 1,
      sym__repeat_statements,
    STATE(73), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1934] = 7,
    ACTIONS(368), 1,
      sym_blank_line,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(442), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1037), 1,
      sym__repeat_statements,
    STATE(209), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1957] = 5,
    ACTIONS(444), 1,
      sym_blank_line,
    ACTIONS(447), 1,
      sym__comment_start,
    ACTIONS(452), 1,
      sym__line_start,
    ACTIONS(450), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1976] = 7,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(455), 1,
      sym_blank_line,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1113), 1,
      sym__repeat_statements,
    STATE(58), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1999] = 6,
    ACTIONS(364), 1,
      sym_role,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    STATE(104), 1,
      sym__unroled_message_line,
    STATE(402), 1,
      sym__agic_reserved_word,
    ACTIONS(362), 2,
      sym_directive_key,
      sym_pass_keyword,
    STATE(579), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
  [2020] = 5,
    ACTIONS(461), 1,
      sym__module_doc_start,
    ACTIONS(463), 1,
      sym__item_doc_start,
    ACTIONS(465), 1,
      sym__param_item_doc_start,
    ACTIONS(459), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(827), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2038] = 5,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
    ACTIONS(469), 1,
      sym_blank_line,
    ACTIONS(472), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym__line_start,
    STATE(78), 3,
      sym__item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2056] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(570), 1,
      sym_text_block,
    STATE(688), 1,
      sym_line_end,
    STATE(711), 1,
      sym_text_inline,
    STATE(838), 1,
      sym_text_line,
  [2078] = 5,
    ACTIONS(480), 1,
      sym_blank_line,
    ACTIONS(482), 1,
      sym__comment_start,
    ACTIONS(484), 1,
      sym__indent,
    ACTIONS(478), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(115), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2096] = 6,
    ACTIONS(486), 1,
      sym_blank_line,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(490), 1,
      sym__dedent,
    ACTIONS(492), 1,
      sym__from_start,
    STATE(441), 1,
      sym__from_complement,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2116] = 5,
    ACTIONS(47), 1,
      sym__flow_raw_text,
    ACTIONS(494), 1,
      sym_blank_line,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(406), 1,
      sym__implicit_run_line,
    ACTIONS(334), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2134] = 5,
    ACTIONS(496), 1,
      sym_blank_line,
    ACTIONS(499), 1,
      sym__comment_start,
    ACTIONS(502), 1,
      sym__dedent,
    ACTIONS(504), 1,
      sym__line_start,
    STATE(83), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2152] = 5,
    ACTIONS(507), 1,
      sym_blank_line,
    ACTIONS(510), 1,
      sym__comment_start,
    ACTIONS(513), 1,
      sym__dedent,
    ACTIONS(515), 1,
      sym__line_start,
    STATE(84), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2170] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(518), 1,
      sym_blank_line,
    ACTIONS(520), 1,
      sym__dedent,
    ACTIONS(522), 1,
      sym__line_start,
    STATE(84), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2188] = 5,
    ACTIONS(524), 1,
      sym_blank_line,
    ACTIONS(529), 1,
      sym__agic_raw_text,
    STATE(86), 1,
      aux_sym_unroled_message_repeat1,
    STATE(407), 1,
      sym__unroled_message_line,
    ACTIONS(527), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2206] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
    STATE(598), 1,
      sym_text_inline,
    STATE(599), 1,
      sym_text_block,
    STATE(882), 1,
      sym_text_line,
  [2228] = 6,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(204), 1,
      sym_type,
    STATE(206), 1,
      sym__base_type,
    STATE(498), 1,
      sym_line_end,
    ACTIONS(534), 2,
      sym_builtin_type,
      sym_type_name,
  [2248] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(536), 1,
      sym__inline_comment,
    ACTIONS(538), 1,
      sym_newline,
    STATE(94), 1,
      sym_line_end,
    STATE(570), 1,
      sym_text_block,
    STATE(701), 1,
      sym_text_inline,
    STATE(812), 1,
      sym_text_line,
  [2270] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(540), 1,
      sym_blank_line,
    ACTIONS(542), 1,
      sym__dedent,
    STATE(130), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2288] = 5,
    ACTIONS(544), 1,
      sym_blank_line,
    ACTIONS(547), 1,
      sym__flow_raw_text,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(406), 1,
      sym__implicit_run_line,
    ACTIONS(339), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2306] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(504), 1,
      sym_text_inline,
    STATE(570), 1,
      sym_text_block,
    STATE(688), 1,
      sym_line_end,
    STATE(838), 1,
      sym_text_line,
  [2328] = 6,
    ACTIONS(550), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    STATE(90), 1,
      sym__flow_statement,
    STATE(114), 1,
      sym_directive,
    STATE(914), 1,
      sym__directives,
    STATE(1058), 2,
      sym_statements,
      sym__pass_statement,
  [2348] = 5,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(346), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2366] = 6,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(181), 1,
      sym_type,
    STATE(206), 1,
      sym__base_type,
    STATE(519), 1,
      sym_line_end,
    ACTIONS(534), 2,
      sym_builtin_type,
      sym_type_name,
  [2386] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(536), 1,
      sym__inline_comment,
    ACTIONS(538), 1,
      sym_newline,
    STATE(102), 1,
      sym_line_end,
    STATE(570), 1,
      sym_text_block,
    STATE(701), 1,
      sym_text_inline,
    STATE(809), 1,
      sym_text_line,
  [2408] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(522), 1,
      sym__line_start,
    ACTIONS(558), 1,
      sym_blank_line,
    ACTIONS(560), 1,
      sym__dedent,
    STATE(132), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2426] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(728), 1,
      sym_line_end,
    STATE(786), 1,
      sym_text_block,
    STATE(851), 1,
      sym_text_inline,
    STATE(908), 1,
      sym_text_line,
  [2448] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
    STATE(599), 1,
      sym_text_block,
    STATE(600), 1,
      sym_text_inline,
    STATE(882), 1,
      sym_text_line,
  [2470] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(562), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1039), 1,
      sym__repeat_statements,
    STATE(105), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2490] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(536), 1,
      sym__inline_comment,
    ACTIONS(538), 1,
      sym_newline,
    STATE(107), 1,
      sym_line_end,
    STATE(504), 1,
      sym_text_inline,
    STATE(570), 1,
      sym_text_block,
    STATE(891), 1,
      sym_text_line,
  [2512] = 5,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(350), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2530] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
    STATE(599), 1,
      sym_text_block,
    STATE(647), 1,
      sym_text_inline,
    STATE(882), 1,
      sym_text_line,
  [2552] = 5,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    ACTIONS(564), 1,
      sym_blank_line,
    STATE(140), 1,
      aux_sym_unroled_message_repeat1,
    STATE(407), 1,
      sym__unroled_message_line,
    ACTIONS(566), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2570] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(568), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1112), 1,
      sym__repeat_statements,
    STATE(359), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2590] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(570), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1061), 1,
      sym__repeat_statements,
    STATE(112), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2610] = 5,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(352), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2628] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(536), 1,
      sym__inline_comment,
    ACTIONS(538), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(504), 1,
      sym_text_inline,
    STATE(570), 1,
      sym_text_block,
    STATE(767), 1,
      sym_text_line,
  [2650] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
    STATE(599), 1,
      sym_text_block,
    STATE(775), 1,
      sym_text_inline,
    STATE(882), 1,
      sym_text_line,
  [2672] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
    STATE(599), 1,
      sym_text_block,
    STATE(648), 1,
      sym_text_inline,
    STATE(882), 1,
      sym_text_line,
  [2694] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(572), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym__dedent,
    ACTIONS(576), 1,
      sym__line_start,
    STATE(143), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2712] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(568), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1040), 1,
      sym__repeat_statements,
    STATE(359), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2732] = 5,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(354), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2750] = 5,
    ACTIONS(380), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    ACTIONS(578), 1,
      sym_blank_line,
    ACTIONS(580), 1,
      sym__comment_start,
    STATE(116), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2768] = 4,
    ACTIONS(584), 1,
      sym_blank_line,
    ACTIONS(587), 1,
      sym__comment_start,
    STATE(115), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(582), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2784] = 5,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    ACTIONS(580), 1,
      sym__comment_start,
    ACTIONS(590), 1,
      sym_blank_line,
    STATE(117), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2802] = 5,
    ACTIONS(427), 1,
      sym__line_start,
    ACTIONS(592), 1,
      sym_blank_line,
    ACTIONS(595), 1,
      sym__comment_start,
    ACTIONS(598), 1,
      sym__directive_start,
    STATE(117), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2820] = 3,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(192), 1,
      sym__implicit_run_line,
    ACTIONS(334), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2834] = 3,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(192), 1,
      sym__implicit_run_line,
    ACTIONS(601), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2848] = 5,
    ACTIONS(482), 1,
      sym__comment_start,
    ACTIONS(605), 1,
      sym_blank_line,
    ACTIONS(607), 1,
      sym__indent,
    ACTIONS(603), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(129), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2866] = 6,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(392), 1,
      sym__dedent,
    ACTIONS(609), 1,
      sym_blank_line,
    STATE(629), 1,
      sym__flow_statement,
    STATE(122), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2886] = 6,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(398), 1,
      sym__dedent,
    ACTIONS(611), 1,
      sym_blank_line,
    STATE(629), 1,
      sym__flow_statement,
    STATE(123), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2906] = 6,
    ACTIONS(414), 1,
      sym__dedent,
    ACTIONS(613), 1,
      sym_blank_line,
    ACTIONS(616), 1,
      sym__comment_start,
    ACTIONS(619), 1,
      sym__line_start,
    STATE(629), 1,
      sym__flow_statement,
    STATE(123), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2926] = 5,
    ACTIONS(482), 1,
      sym__comment_start,
    ACTIONS(624), 1,
      sym_blank_line,
    ACTIONS(626), 1,
      sym__indent,
    ACTIONS(622), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(80), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2944] = 5,
    ACTIONS(630), 1,
      sym__module_doc_start,
    ACTIONS(632), 1,
      sym__item_doc_start,
    ACTIONS(634), 1,
      sym__param_item_doc_start,
    ACTIONS(628), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(795), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2962] = 6,
    ACTIONS(550), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym__directive_start,
    STATE(90), 1,
      sym__flow_statement,
    STATE(114), 1,
      sym_directive,
    STATE(785), 1,
      sym__directives,
    STATE(1097), 2,
      sym_statements,
      sym__pass_statement,
  [2982] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(636), 1,
      ts_builtin_sym_end,
    ACTIONS(638), 1,
      sym_blank_line,
    STATE(78), 3,
      sym__item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3000] = 5,
    ACTIONS(47), 1,
      sym__flow_raw_text,
    ACTIONS(640), 1,
      sym_blank_line,
    STATE(82), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(406), 1,
      sym__implicit_run_line,
    ACTIONS(330), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3018] = 5,
    ACTIONS(480), 1,
      sym_blank_line,
    ACTIONS(482), 1,
      sym__comment_start,
    ACTIONS(644), 1,
      sym__indent,
    ACTIONS(642), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(115), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3036] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(646), 1,
      sym_blank_line,
    ACTIONS(648), 1,
      sym__dedent,
    STATE(83), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3054] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(227), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(730), 1,
      sym_line_end,
    STATE(911), 1,
      sym_text_line,
  [3076] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(518), 1,
      sym_blank_line,
    ACTIONS(522), 1,
      sym__line_start,
    ACTIONS(650), 1,
      sym__dedent,
    STATE(84), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3094] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(522), 1,
      sym__line_start,
    ACTIONS(650), 1,
      sym__dedent,
    ACTIONS(652), 1,
      sym_blank_line,
    STATE(85), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3112] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(234), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(730), 1,
      sym_line_end,
    STATE(911), 1,
      sym_text_line,
  [3134] = 6,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(492), 1,
      sym__from_start,
    ACTIONS(654), 1,
      sym_blank_line,
    ACTIONS(656), 1,
      sym__dedent,
    STATE(411), 1,
      sym__from_complement,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3154] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(570), 1,
      sym_text_block,
    STATE(688), 1,
      sym_line_end,
    STATE(692), 1,
      sym_text_inline,
    STATE(838), 1,
      sym_text_line,
  [3176] = 6,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(163), 1,
      sym_type,
    STATE(206), 1,
      sym__base_type,
    STATE(272), 1,
      sym_line_end,
    ACTIONS(534), 2,
      sym_builtin_type,
      sym_type_name,
  [3196] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(660), 1,
      sym__inline_comment,
    ACTIONS(662), 1,
      sym_newline,
    STATE(47), 1,
      sym_line_end,
    STATE(227), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(883), 1,
      sym_text_line,
  [3218] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(275), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(730), 1,
      sym_line_end,
    STATE(911), 1,
      sym_text_line,
  [3240] = 5,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    ACTIONS(664), 1,
      sym_blank_line,
    STATE(86), 1,
      aux_sym_unroled_message_repeat1,
    STATE(407), 1,
      sym__unroled_message_line,
    ACTIONS(666), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3258] = 6,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(196), 1,
      sym_type,
    STATE(206), 1,
      sym__base_type,
    STATE(286), 1,
      sym_line_end,
    ACTIONS(534), 2,
      sym_builtin_type,
      sym_type_name,
  [3278] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(660), 1,
      sym__inline_comment,
    ACTIONS(662), 1,
      sym_newline,
    STATE(48), 1,
      sym_line_end,
    STATE(227), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(893), 1,
      sym_text_line,
  [3300] = 5,
    ACTIONS(668), 1,
      sym_blank_line,
    ACTIONS(671), 1,
      sym__comment_start,
    ACTIONS(674), 1,
      sym__dedent,
    ACTIONS(676), 1,
      sym__line_start,
    STATE(143), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3318] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(660), 1,
      sym__inline_comment,
    ACTIONS(662), 1,
      sym_newline,
    STATE(49), 1,
      sym_line_end,
    STATE(275), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(901), 1,
      sym_text_line,
  [3340] = 7,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(660), 1,
      sym__inline_comment,
    ACTIONS(662), 1,
      sym_newline,
    STATE(50), 1,
      sym_line_end,
    STATE(275), 1,
      sym_text_inline,
    STATE(346), 1,
      sym_text_block,
    STATE(905), 1,
      sym_text_line,
  [3362] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(570), 1,
      sym_text_block,
    STATE(640), 1,
      sym_text_inline,
    STATE(688), 1,
      sym_line_end,
    STATE(838), 1,
      sym_text_line,
  [3384] = 5,
    ACTIONS(370), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__line_start,
    ACTIONS(679), 1,
      sym_blank_line,
    ACTIONS(681), 1,
      sym__dedent,
    STATE(111), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3402] = 7,
    ACTIONS(147), 1,
      sym__inline_comment,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(151), 1,
      sym_newline,
    STATE(570), 1,
      sym_text_block,
    STATE(688), 1,
      sym_line_end,
    STATE(701), 1,
      sym_text_inline,
    STATE(838), 1,
      sym_text_line,
  [3424] = 5,
    ACTIONS(685), 1,
      sym__module_doc_start,
    ACTIONS(687), 1,
      sym__item_doc_start,
    ACTIONS(689), 1,
      sym__param_item_doc_start,
    ACTIONS(683), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(328), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3442] = 5,
    ACTIONS(693), 1,
      sym__module_doc_start,
    ACTIONS(695), 1,
      sym__item_doc_start,
    ACTIONS(697), 1,
      sym__param_item_doc_start,
    ACTIONS(691), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(339), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3460] = 5,
    ACTIONS(701), 1,
      sym__module_doc_start,
    ACTIONS(703), 1,
      sym__item_doc_start,
    ACTIONS(705), 1,
      sym__param_item_doc_start,
    ACTIONS(699), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(353), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3478] = 5,
    ACTIONS(709), 1,
      sym__module_doc_start,
    ACTIONS(711), 1,
      sym__item_doc_start,
    ACTIONS(713), 1,
      sym__param_item_doc_start,
    ACTIONS(707), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(663), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3496] = 5,
    ACTIONS(717), 1,
      sym__module_doc_start,
    ACTIONS(719), 1,
      sym__item_doc_start,
    ACTIONS(721), 1,
      sym__param_item_doc_start,
    ACTIONS(715), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(671), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3514] = 5,
    ACTIONS(725), 1,
      sym__module_doc_start,
    ACTIONS(727), 1,
      sym__item_doc_start,
    ACTIONS(729), 1,
      sym__param_item_doc_start,
    ACTIONS(723), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(819), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3532] = 5,
    ACTIONS(733), 1,
      sym__module_doc_start,
    ACTIONS(735), 1,
      sym__item_doc_start,
    ACTIONS(737), 1,
      sym__param_item_doc_start,
    ACTIONS(731), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(682), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3550] = 5,
    ACTIONS(741), 1,
      sym__module_doc_start,
    ACTIONS(743), 1,
      sym__item_doc_start,
    ACTIONS(745), 1,
      sym__param_item_doc_start,
    ACTIONS(739), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(478), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3568] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(747), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1141), 1,
      sym__repeat_statements,
    STATE(158), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3588] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(568), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1169), 1,
      sym__repeat_statements,
    STATE(359), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3608] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(749), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1171), 1,
      sym__repeat_statements,
    STATE(160), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3628] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(374), 1,
      sym__line_start,
    ACTIONS(568), 1,
      sym_blank_line,
    STATE(121), 1,
      sym__flow_statement,
    STATE(1036), 1,
      sym__repeat_statements,
    STATE(359), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3648] = 6,
    ACTIONS(382), 1,
      sym__directive_start,
    ACTIONS(751), 1,
      sym__line_start,
    STATE(59), 1,
      sym_directive,
    STATE(147), 1,
      sym_message,
    STATE(586), 1,
      sym__directives,
    STATE(1174), 2,
      sym_messages,
      sym__pass_statement,
  [3668] = 6,
    ACTIONS(382), 1,
      sym__directive_start,
    ACTIONS(751), 1,
      sym__line_start,
    STATE(59), 1,
      sym_directive,
    STATE(147), 1,
      sym_message,
    STATE(490), 1,
      sym__directives,
    STATE(1138), 2,
      sym_messages,
      sym__pass_statement,
  [3688] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(753), 1,
      sym_colon,
    STATE(286), 1,
      sym_line_end,
    STATE(892), 1,
      sym_text_line,
  [3707] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(742), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3724] = 6,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(761), 1,
      sym_flow_by_keyword,
    STATE(446), 1,
      sym__named_by_complement,
    STATE(726), 1,
      sym__inline_by_complement,
    STATE(727), 1,
      sym__by_complements,
    STATE(903), 1,
      sym__lanes_complement,
  [3743] = 3,
    ACTIONS(47), 1,
      sym__flow_raw_text,
    STATE(224), 1,
      sym__implicit_run_line,
    ACTIONS(601), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3756] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(680), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3773] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(626), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3790] = 6,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(767), 1,
      sym_arrow,
    ACTIONS(769), 1,
      sym_colon,
    STATE(135), 1,
      sym__reduce_inline_block,
    STATE(470), 1,
      sym__reduce_inline_line,
    STATE(703), 1,
      sym__named_using_complement,
  [3809] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(681), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3826] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(627), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3843] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(590), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3860] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(534), 1,
      sym_repeat_body,
    STATE(360), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3877] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(561), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3894] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(775), 1,
      sym__inline_comment,
    ACTIONS(777), 1,
      sym_newline,
    STATE(236), 1,
      sym__reduce_line,
    STATE(438), 1,
      sym_line_end,
    STATE(867), 1,
      sym_text_line,
  [3913] = 3,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    STATE(425), 1,
      sym__unroled_message_line,
    ACTIONS(779), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3926] = 6,
    ACTIONS(271), 1,
      sym_flow_in_keyword,
    ACTIONS(781), 1,
      sym_flow_by_keyword,
    STATE(246), 1,
      sym__inline_by_complement,
    STATE(247), 1,
      sym__by_complements,
    STATE(414), 1,
      sym__named_by_complement,
    STATE(872), 1,
      sym__lanes_complement,
  [3945] = 6,
    ACTIONS(783), 1,
      sym_arrow,
    ACTIONS(785), 1,
      sym_colon,
    ACTIONS(787), 1,
      sym_lparen,
    ACTIONS(789), 1,
      sym__identifier,
    STATE(532), 1,
      sym_runnable_name,
    STATE(949), 1,
      sym_params,
  [3964] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(713), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3981] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(791), 1,
      sym_blank_line,
    ACTIONS(793), 1,
      sym__indent,
    STATE(271), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3998] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(795), 1,
      sym_colon,
    STATE(536), 1,
      sym_line_end,
    STATE(899), 1,
      sym_text_line,
  [4017] = 1,
    ACTIONS(797), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4026] = 3,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    STATE(425), 1,
      sym__unroled_message_line,
    ACTIONS(666), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4039] = 3,
    ACTIONS(47), 1,
      sym__flow_raw_text,
    STATE(224), 1,
      sym__implicit_run_line,
    ACTIONS(334), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4052] = 1,
    ACTIONS(799), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4061] = 5,
    ACTIONS(801), 1,
      anon_sym_lanes,
    ACTIONS(803), 1,
      sym__query_directive_key,
    ACTIONS(805), 1,
      sym__route_directive_key,
    ACTIONS(809), 1,
      sym_recall_keyword,
    ACTIONS(807), 2,
      sym_context_keyword,
      sym_instruct_keyword,
  [4078] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(775), 1,
      sym__inline_comment,
    ACTIONS(777), 1,
      sym_newline,
    STATE(279), 1,
      sym__reduce_line,
    STATE(393), 1,
      sym_line_end,
    STATE(867), 1,
      sym_text_line,
  [4097] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(791), 1,
      sym_blank_line,
    ACTIONS(793), 1,
      sym__indent,
    STATE(284), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4114] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(791), 1,
      sym_blank_line,
    ACTIONS(793), 1,
      sym__indent,
    STATE(285), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4131] = 4,
    ACTIONS(111), 1,
      sym_newline,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(811), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4146] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(657), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4163] = 1,
    ACTIONS(813), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4172] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(610), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4189] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(791), 1,
      sym_blank_line,
    ACTIONS(793), 1,
      sym__indent,
    STATE(297), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4206] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(775), 1,
      sym__inline_comment,
    ACTIONS(777), 1,
      sym_newline,
    STATE(393), 1,
      sym_line_end,
    STATE(510), 1,
      sym__reduce_line,
    STATE(874), 1,
      sym_text_line,
  [4225] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(815), 1,
      sym_colon,
    STATE(299), 1,
      sym_line_end,
    STATE(902), 1,
      sym_text_line,
  [4244] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(699), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4261] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(587), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4278] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(517), 1,
      sym_repeat_body,
    STATE(360), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4295] = 6,
    ACTIONS(787), 1,
      sym_lparen,
    ACTIONS(789), 1,
      sym__identifier,
    ACTIONS(817), 1,
      sym_arrow,
    ACTIONS(819), 1,
      sym_colon,
    STATE(580), 1,
      sym_runnable_name,
    STATE(976), 1,
      sym_params,
  [4314] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(507), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4331] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(518), 1,
      sym_repeat_body,
    STATE(360), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4348] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(763), 1,
      sym_blank_line,
    ACTIONS(765), 1,
      sym__indent,
    STATE(509), 1,
      sym_agic_body,
    STATE(437), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4365] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(821), 1,
      sym_colon,
    STATE(519), 1,
      sym_line_end,
    STATE(790), 1,
      sym_text_line,
  [4384] = 6,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(775), 1,
      sym__inline_comment,
    ACTIONS(777), 1,
      sym_newline,
    STATE(438), 1,
      sym_line_end,
    STATE(714), 1,
      sym__reduce_line,
    STATE(874), 1,
      sym_text_line,
  [4403] = 4,
    ACTIONS(825), 1,
      sym_array_suffix,
    ACTIONS(827), 1,
      sym_newline,
    STATE(207), 1,
      aux_sym_type_repeat1,
    ACTIONS(823), 3,
      sym__inline_comment,
      sym_colon,
      sym__text_line,
  [4418] = 4,
    ACTIONS(825), 1,
      sym_array_suffix,
    ACTIONS(831), 1,
      sym_newline,
    STATE(208), 1,
      aux_sym_type_repeat1,
    ACTIONS(829), 3,
      sym__inline_comment,
      sym_colon,
      sym__text_line,
  [4433] = 4,
    ACTIONS(835), 1,
      sym_array_suffix,
    ACTIONS(838), 1,
      sym_newline,
    STATE(208), 1,
      aux_sym_type_repeat1,
    ACTIONS(833), 3,
      sym__inline_comment,
      sym_colon,
      sym__text_line,
  [4448] = 4,
    ACTIONS(840), 1,
      sym_blank_line,
    ACTIONS(843), 1,
      sym__comment_start,
    ACTIONS(582), 2,
      sym__dedent,
      sym__line_start,
    STATE(209), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4463] = 1,
    ACTIONS(846), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4472] = 6,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(848), 1,
      sym_arrow,
    ACTIONS(850), 1,
      sym_colon,
    STATE(81), 1,
      sym__reduce_inline_block,
    STATE(651), 1,
      sym__reduce_inline_line,
    STATE(654), 1,
      sym__named_using_complement,
  [4491] = 4,
    ACTIONS(111), 1,
      sym_newline,
    STATE(177), 1,
      sym__order_complement,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
    ACTIONS(811), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4506] = 1,
    ACTIONS(852), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4515] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(497), 1,
      sym_repeat_body,
    STATE(360), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4532] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(854), 1,
      sym__other_integer_literal,
    ACTIONS(856), 1,
      sym_flow_windowing_keyword,
    ACTIONS(858), 1,
      sym_colon,
    STATE(802), 1,
      sym__repeat_count_complement,
    STATE(1116), 1,
      sym__window_complement,
  [4551] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(521), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4568] = 5,
    ACTIONS(755), 1,
      sym_blank_line,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(759), 1,
      sym__indent,
    STATE(529), 1,
      sym_flow_body,
    STATE(288), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4585] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(854), 1,
      sym__other_integer_literal,
    ACTIONS(856), 1,
      sym_flow_windowing_keyword,
    ACTIONS(860), 1,
      sym_colon,
    STATE(930), 1,
      sym__repeat_count_complement,
    STATE(1164), 1,
      sym__window_complement,
  [4604] = 5,
    ACTIONS(862), 1,
      anon_sym_lanes,
    ACTIONS(864), 1,
      sym__query_directive_key,
    ACTIONS(866), 1,
      sym__route_directive_key,
    ACTIONS(870), 1,
      sym_recall_keyword,
    ACTIONS(868), 2,
      sym_context_keyword,
      sym_instruct_keyword,
  [4621] = 5,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(872), 1,
      sym_blank_line,
    ACTIONS(874), 1,
      sym__indent,
    STATE(734), 1,
      sym_struct_body,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4638] = 4,
    ACTIONS(117), 1,
      sym__variable_name,
    ACTIONS(878), 1,
      sym_newline,
    STATE(845), 1,
      sym_local_name,
    ACTIONS(876), 2,
      sym__inline_comment,
      sym__text_line,
  [4652] = 1,
    ACTIONS(880), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4660] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(498), 1,
      sym_line_end,
    STATE(836), 1,
      sym_text_line,
  [4676] = 1,
    ACTIONS(813), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [4684] = 5,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(637), 1,
      sym_inline_agic,
    STATE(773), 1,
      sym_runnable_name,
  [4700] = 1,
    ACTIONS(884), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4708] = 1,
    ACTIONS(886), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4716] = 1,
    ACTIONS(888), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4724] = 1,
    ACTIONS(890), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4732] = 1,
    ACTIONS(892), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4740] = 1,
    ACTIONS(894), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4748] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4756] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4764] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4772] = 1,
    ACTIONS(902), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4780] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4788] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4796] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4804] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4812] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4820] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4828] = 1,
    ACTIONS(916), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4836] = 1,
    ACTIONS(918), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4844] = 1,
    ACTIONS(920), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4852] = 1,
    ACTIONS(922), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4860] = 1,
    ACTIONS(924), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4868] = 1,
    ACTIONS(926), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4876] = 1,
    ACTIONS(928), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4884] = 1,
    ACTIONS(930), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4892] = 1,
    ACTIONS(932), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4900] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [4908] = 1,
    ACTIONS(936), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [4916] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [4924] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4932] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4940] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4948] = 1,
    ACTIONS(946), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4956] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4964] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4972] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4980] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4988] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4996] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5004] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5012] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5020] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5028] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5036] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5044] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5052] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5060] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5068] = 1,
    ACTIONS(346), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5076] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(978), 1,
      sym__dedent,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5090] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5098] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5106] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5114] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5122] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5130] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5138] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5146] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5154] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5162] = 4,
    ACTIONS(117), 1,
      sym__variable_name,
    ACTIONS(878), 1,
      sym_newline,
    STATE(769), 1,
      sym_local_name,
    ACTIONS(876), 2,
      sym__inline_comment,
      sym__text_line,
  [5176] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 1,
    ACTIONS(350), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5200] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5208] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1008), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5222] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5230] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5238] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5246] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5254] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5262] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5270] = 4,
    ACTIONS(1022), 1,
      sym_blank_line,
    ACTIONS(1025), 1,
      sym__dedent,
    ACTIONS(1027), 1,
      sym_indented_raw_text,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5284] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5292] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5300] = 4,
    ACTIONS(1034), 1,
      sym_blank_line,
    ACTIONS(1036), 1,
      sym__comment_start,
    ACTIONS(1038), 1,
      sym__reduce_indent,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5314] = 1,
    ACTIONS(352), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5322] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5330] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5338] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5346] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5354] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5362] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5370] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5378] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1054), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5392] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5400] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5408] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5416] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5424] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1064), 1,
      sym__indent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5438] = 1,
    ACTIONS(354), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5494] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5502] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5526] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5534] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5542] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5550] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5558] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5566] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5574] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5582] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5590] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5598] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5606] = 1,
    ACTIONS(1104), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5614] = 2,
    ACTIONS(1108), 1,
      sym_newline,
    ACTIONS(1106), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym__text_line,
  [5624] = 1,
    ACTIONS(1110), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5632] = 5,
    ACTIONS(394), 1,
      sym__line_start,
    ACTIONS(1112), 1,
      sym__until_start,
    STATE(62), 1,
      sym__flow_statement,
    STATE(100), 1,
      sym_until_clause,
    STATE(777), 1,
      sym__repeat_statements,
  [5648] = 4,
    ACTIONS(582), 1,
      sym__dedent,
    ACTIONS(1114), 1,
      sym_blank_line,
    ACTIONS(1117), 1,
      sym__comment_start,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5662] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5670] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5678] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5686] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5694] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5702] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5710] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5718] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5726] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5734] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5742] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5750] = 4,
    ACTIONS(582), 1,
      sym__reduce_indent,
    ACTIONS(1124), 1,
      sym_blank_line,
    ACTIONS(1127), 1,
      sym__comment_start,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5764] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5772] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5780] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5788] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5796] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5804] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5812] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5820] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5828] = 4,
    ACTIONS(582), 1,
      sym__line_start,
    ACTIONS(1134), 1,
      sym_blank_line,
    ACTIONS(1137), 1,
      sym__comment_start,
    STATE(359), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5842] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1140), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5856] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5864] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5872] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [5880] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [5888] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5896] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5904] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5912] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5920] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5928] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5936] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5944] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5952] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5960] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5968] = 5,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    ACTIONS(1144), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1146), 1,
      sym_assign_operator,
    STATE(709), 1,
      sym_line_end,
  [5984] = 5,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(710), 1,
      sym_inline_agic,
    STATE(868), 1,
      sym_runnable_name,
  [6000] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1148), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6014] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1150), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6028] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1152), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6042] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1154), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6056] = 4,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1156), 1,
      sym__identifier,
    STATE(376), 1,
      sym_agent_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [6070] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6078] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(522), 1,
      sym_line_end,
    STATE(790), 1,
      sym_text_line,
  [6094] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6102] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(524), 1,
      sym_line_end,
    STATE(815), 1,
      sym_text_line,
  [6118] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(525), 1,
      sym_line_end,
    STATE(826), 1,
      sym_text_line,
  [6134] = 5,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    STATE(718), 1,
      sym_inline_agic,
    STATE(884), 1,
      sym__named_using_complement,
  [6150] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(226), 1,
      sym_line_end,
    STATE(860), 1,
      sym_text_line,
  [6166] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(527), 1,
      sym_line_end,
    STATE(835), 1,
      sym_text_line,
  [6182] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(528), 1,
      sym_line_end,
    STATE(837), 1,
      sym_text_line,
  [6198] = 5,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(461), 1,
      sym_inline_agic,
    STATE(844), 1,
      sym_runnable_name,
  [6214] = 5,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(467), 1,
      sym_inline_agic,
    STATE(847), 1,
      sym_runnable_name,
  [6230] = 4,
    ACTIONS(1036), 1,
      sym__comment_start,
    ACTIONS(1162), 1,
      sym_blank_line,
    ACTIONS(1164), 1,
      sym__reduce_indent,
    STATE(410), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6244] = 5,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(719), 1,
      sym_inline_agic,
    STATE(886), 1,
      sym_runnable_name,
  [6260] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1166), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6274] = 5,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    ACTIONS(1168), 1,
      sym_flow_in_keyword,
    STATE(720), 1,
      sym_line_end,
    STATE(888), 1,
      sym__lanes_complement,
  [6290] = 5,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    ACTIONS(1170), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1172), 1,
      sym_assign_operator,
    STATE(232), 1,
      sym_line_end,
  [6306] = 5,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(233), 1,
      sym_inline_agic,
    STATE(866), 1,
      sym_runnable_name,
  [6322] = 3,
    ACTIONS(1174), 1,
      sym_array_suffix,
    STATE(399), 1,
      aux_sym_type_repeat1,
    ACTIONS(838), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [6334] = 5,
    ACTIONS(394), 1,
      sym__line_start,
    ACTIONS(1112), 1,
      sym__until_start,
    STATE(62), 1,
      sym__flow_statement,
    STATE(106), 1,
      sym_until_clause,
    STATE(873), 1,
      sym__repeat_statements,
  [6350] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1177), 1,
      sym_blank_line,
    ACTIONS(1179), 1,
      sym__dedent,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6364] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(622), 1,
      sym_line_end,
    STATE(759), 1,
      sym_text_line,
  [6380] = 5,
    ACTIONS(356), 1,
      sym_flow_using_keyword,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    STATE(240), 1,
      sym_inline_agic,
    STATE(869), 1,
      sym__named_using_complement,
  [6396] = 5,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(241), 1,
      sym_inline_agic,
    STATE(886), 1,
      sym_runnable_name,
  [6412] = 5,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    ACTIONS(1168), 1,
      sym_flow_in_keyword,
    STATE(242), 1,
      sym_line_end,
    STATE(870), 1,
      sym__lanes_complement,
  [6428] = 1,
    ACTIONS(799), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6436] = 1,
    ACTIONS(1181), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6444] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(255), 1,
      sym_line_end,
    STATE(876), 1,
      sym_text_line,
  [6460] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
    STATE(877), 1,
      sym_text_line,
  [6476] = 4,
    ACTIONS(1034), 1,
      sym_blank_line,
    ACTIONS(1036), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym__reduce_indent,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6490] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1185), 1,
      sym_blank_line,
    ACTIONS(1187), 1,
      sym__dedent,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6504] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1189), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6518] = 5,
    ACTIONS(384), 1,
      sym_arrow,
    ACTIONS(386), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(268), 1,
      sym_inline_agic,
    STATE(918), 1,
      sym_runnable_name,
  [6534] = 5,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    ACTIONS(1168), 1,
      sym_flow_in_keyword,
    STATE(269), 1,
      sym_line_end,
    STATE(880), 1,
      sym__lanes_complement,
  [6550] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1191), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6564] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1193), 1,
      sym_blank_line,
    ACTIONS(1195), 1,
      sym__dedent,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6578] = 1,
    ACTIONS(1197), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6586] = 3,
    ACTIONS(1199), 1,
      sym_array_suffix,
    STATE(422), 1,
      aux_sym_type_repeat1,
    ACTIONS(827), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [6598] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(272), 1,
      sym_line_end,
    STATE(885), 1,
      sym_text_line,
  [6614] = 4,
    ACTIONS(1203), 1,
      sym__identifier,
    STATE(848), 1,
      sym_text_ref,
    STATE(1029), 1,
      sym_identifier,
    ACTIONS(1201), 2,
      sym_default_keyword,
      sym_none_keyword,
  [6628] = 3,
    ACTIONS(1205), 1,
      sym_recall_source,
    STATE(848), 1,
      sym_recall_value,
    ACTIONS(1207), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6640] = 3,
    ACTIONS(1199), 1,
      sym_array_suffix,
    STATE(399), 1,
      aux_sym_type_repeat1,
    ACTIONS(831), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [6652] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1209), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6666] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6680] = 1,
    ACTIONS(1213), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6688] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1215), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6702] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1217), 1,
      sym_blank_line,
    ACTIONS(1219), 1,
      sym__dedent,
    STATE(440), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6716] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1221), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6730] = 4,
    ACTIONS(1225), 1,
      sym_rparen,
    STATE(612), 1,
      sym__param_name,
    STATE(915), 1,
      sym_param,
    ACTIONS(1223), 2,
      sym__variable_name,
      anon_sym__,
  [6744] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(289), 1,
      sym_line_end,
    STATE(892), 1,
      sym_text_line,
  [6760] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(290), 1,
      sym_line_end,
    STATE(894), 1,
      sym_text_line,
  [6776] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(291), 1,
      sym_line_end,
    STATE(895), 1,
      sym_text_line,
  [6792] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(631), 1,
      sym_line_end,
    STATE(854), 1,
      sym_text_line,
  [6808] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
    STATE(897), 1,
      sym_text_line,
  [6824] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(211), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_newline,
    STATE(294), 1,
      sym_line_end,
    STATE(898), 1,
      sym_text_line,
  [6840] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(480), 1,
      sym_line_end,
    STATE(910), 1,
      sym_text_line,
  [6856] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1227), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6870] = 4,
    ACTIONS(1036), 1,
      sym__comment_start,
    ACTIONS(1229), 1,
      sym_blank_line,
    ACTIONS(1231), 1,
      sym__reduce_indent,
    STATE(298), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6884] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1233), 1,
      sym_blank_line,
    ACTIONS(1235), 1,
      sym__dedent,
    STATE(442), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6898] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1237), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6912] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1239), 1,
      sym_blank_line,
    ACTIONS(1241), 1,
      sym__dedent,
    STATE(307), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6926] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1243), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6940] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1245), 1,
      sym_blank_line,
    ACTIONS(1247), 1,
      sym__dedent,
    STATE(447), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6954] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1249), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6968] = 5,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(494), 1,
      sym_inline_agic,
    STATE(918), 1,
      sym_runnable_name,
  [6984] = 5,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    ACTIONS(1168), 1,
      sym_flow_in_keyword,
    STATE(495), 1,
      sym_line_end,
    STATE(761), 1,
      sym__lanes_complement,
  [7000] = 4,
    ACTIONS(488), 1,
      sym__comment_start,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1251), 1,
      sym__dedent,
    STATE(338), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7014] = 5,
    ACTIONS(149), 1,
      sym__text_line,
    ACTIONS(197), 1,
      sym__inline_comment,
    ACTIONS(207), 1,
      sym_newline,
    STATE(678), 1,
      sym_line_end,
    STATE(833), 1,
      sym_text_line,
  [7030] = 1,
    ACTIONS(1253), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7038] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1255), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7052] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1257), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7066] = 1,
    ACTIONS(1259), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7074] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1261), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7088] = 4,
    ACTIONS(976), 1,
      sym_blank_line,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1263), 1,
      sym__dedent,
    STATE(295), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7102] = 1,
    ACTIONS(1259), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7110] = 1,
    ACTIONS(1259), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7118] = 1,
    ACTIONS(1265), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7126] = 1,
    ACTIONS(797), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7134] = 4,
    ACTIONS(582), 1,
      sym__indent,
    ACTIONS(1267), 1,
      sym_blank_line,
    ACTIONS(1270), 1,
      sym__comment_start,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7148] = 5,
    ACTIONS(358), 1,
      sym_arrow,
    ACTIONS(360), 1,
      sym_colon,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(633), 1,
      sym_inline_agic,
    STATE(768), 1,
      sym_runnable_name,
  [7164] = 1,
    ACTIONS(1273), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7172] = 4,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1156), 1,
      sym__identifier,
    STATE(398), 1,
      sym_agent_name,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [7186] = 1,
    ACTIONS(1275), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7194] = 4,
    ACTIONS(1203), 1,
      sym__identifier,
    STATE(862), 1,
      sym_text_ref,
    STATE(1029), 1,
      sym_identifier,
    ACTIONS(1201), 2,
      sym_default_keyword,
      sym_none_keyword,
  [7208] = 3,
    ACTIONS(1205), 1,
      sym_recall_source,
    STATE(862), 1,
      sym_recall_value,
    ACTIONS(1207), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [7220] = 5,
    ACTIONS(394), 1,
      sym__line_start,
    ACTIONS(1112), 1,
      sym__until_start,
    STATE(62), 1,
      sym__flow_statement,
    STATE(157), 1,
      sym_until_clause,
    STATE(889), 1,
      sym__repeat_statements,
  [7236] = 1,
    ACTIONS(1277), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7244] = 5,
    ACTIONS(394), 1,
      sym__line_start,
    ACTIONS(1112), 1,
      sym__until_start,
    STATE(62), 1,
      sym__flow_statement,
    STATE(159), 1,
      sym_until_clause,
    STATE(900), 1,
      sym__repeat_statements,
  [7260] = 1,
    ACTIONS(1279), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7268] = 1,
    ACTIONS(1281), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7276] = 1,
    ACTIONS(1283), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7284] = 1,
    ACTIONS(1285), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7292] = 1,
    ACTIONS(1287), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7300] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1289), 1,
      sym_blank_line,
    ACTIONS(1291), 1,
      sym__indent,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7314] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1293), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7328] = 4,
    ACTIONS(757), 1,
      sym__comment_start,
    ACTIONS(1006), 1,
      sym_blank_line,
    ACTIONS(1295), 1,
      sym__indent,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7342] = 1,
    ACTIONS(1297), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7350] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7358] = 1,
    ACTIONS(1299), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [7365] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7372] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7379] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1301), 1,
      sym_blank_line,
    STATE(380), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7390] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7397] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7404] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7411] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7418] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7425] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7432] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7439] = 4,
    ACTIONS(576), 1,
      sym__line_start,
    ACTIONS(1303), 1,
      sym__dedent,
    STATE(147), 1,
      sym_message,
    STATE(1174), 1,
      sym_messages,
  [7452] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7459] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7466] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7473] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7480] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7487] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7494] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7501] = 1,
    ACTIONS(346), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7508] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1004), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [7519] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7526] = 1,
    ACTIONS(1307), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7533] = 3,
    ACTIONS(1311), 1,
      sym_comma,
    STATE(502), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1309), 2,
      sym_newline,
      sym__inline_comment,
  [7544] = 3,
    ACTIONS(1316), 1,
      sym_comma,
    STATE(503), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1314), 2,
      sym_newline,
      sym__inline_comment,
  [7555] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7562] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7569] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7576] = 1,
    ACTIONS(1319), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7583] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7590] = 1,
    ACTIONS(1321), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7597] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7604] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1323), 1,
      sym_blank_line,
    STATE(415), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7615] = 1,
    ACTIONS(1325), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7622] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1148), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [7633] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7640] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7647] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7654] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7661] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7668] = 1,
    ACTIONS(350), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7675] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7682] = 1,
    ACTIONS(1327), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7689] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7696] = 1,
    ACTIONS(1329), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7703] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7710] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7717] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7724] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7731] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7738] = 1,
    ACTIONS(1331), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7745] = 1,
    ACTIONS(1333), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7752] = 4,
    ACTIONS(882), 1,
      sym__identifier,
    ACTIONS(1335), 1,
      sym_colon,
    STATE(757), 1,
      sym_inline_agic_body,
    STATE(758), 1,
      sym_runnable_name,
  [7765] = 4,
    ACTIONS(787), 1,
      sym_lparen,
    ACTIONS(1337), 1,
      sym_arrow,
    ACTIONS(1339), 1,
      sym_colon,
    STATE(942), 1,
      sym_params,
  [7778] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7785] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7792] = 1,
    ACTIONS(1341), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7799] = 1,
    ACTIONS(352), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7806] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7813] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7820] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7827] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7834] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7841] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7848] = 1,
    ACTIONS(1343), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7855] = 1,
    ACTIONS(1345), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7862] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7869] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1347), 1,
      sym_blank_line,
    STATE(377), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7880] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7887] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1082), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [7898] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7905] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7912] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7919] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7926] = 1,
    ACTIONS(354), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7933] = 1,
    ACTIONS(1349), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7940] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7947] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7954] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7961] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7968] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7975] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7982] = 1,
    ACTIONS(1351), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7989] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7996] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8003] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8010] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8017] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8024] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8031] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8038] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8045] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8052] = 3,
    ACTIONS(1353), 1,
      sym_array_suffix,
    STATE(574), 1,
      aux_sym_type_repeat1,
    ACTIONS(827), 2,
      sym_newline,
      sym__inline_comment,
  [8063] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8070] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8077] = 3,
    ACTIONS(1353), 1,
      sym_array_suffix,
    STATE(575), 1,
      aux_sym_type_repeat1,
    ACTIONS(831), 2,
      sym_newline,
      sym__inline_comment,
  [8088] = 3,
    ACTIONS(1355), 1,
      sym_array_suffix,
    STATE(575), 1,
      aux_sym_type_repeat1,
    ACTIONS(838), 2,
      sym_newline,
      sym__inline_comment,
  [8099] = 3,
    ACTIONS(1360), 1,
      sym_colon,
    ACTIONS(1362), 1,
      sym_newline,
    ACTIONS(1358), 2,
      sym__inline_comment,
      sym__text_line,
  [8110] = 4,
    ACTIONS(1358), 1,
      sym__text_line,
    ACTIONS(1364), 1,
      sym__inline_comment,
    ACTIONS(1366), 1,
      sym_newline,
    STATE(401), 1,
      sym_line_end,
  [8123] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8130] = 1,
    ACTIONS(1368), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8137] = 4,
    ACTIONS(787), 1,
      sym_lparen,
    ACTIONS(1370), 1,
      sym_arrow,
    ACTIONS(1372), 1,
      sym_colon,
    STATE(953), 1,
      sym_params,
  [8150] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8157] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8164] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8171] = 1,
    ACTIONS(1374), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8178] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8185] = 4,
    ACTIONS(576), 1,
      sym__line_start,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(147), 1,
      sym_message,
    STATE(1089), 1,
      sym_messages,
  [8198] = 1,
    ACTIONS(1378), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8205] = 1,
    ACTIONS(1380), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8212] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(632), 1,
      sym__cap_definition,
  [8225] = 1,
    ACTIONS(1386), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8232] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(638), 1,
      sym__cap_definition,
  [8245] = 3,
    ACTIONS(878), 1,
      sym_newline,
    ACTIONS(1388), 1,
      sym_flow_run_keyword,
    ACTIONS(876), 2,
      sym__inline_comment,
      sym__text_line,
  [8256] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(639), 1,
      sym__cap_definition,
  [8269] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(120), 1,
      sym_line_end,
    STATE(642), 1,
      sym__cap_definition,
  [8282] = 4,
    ACTIONS(1390), 1,
      sym_blank_line,
    ACTIONS(1392), 1,
      sym__text_indent,
    STATE(644), 1,
      sym_text_body,
    STATE(779), 1,
      aux_sym_text_body_repeat1,
  [8295] = 3,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1394), 1,
      sym_colon,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [8306] = 3,
    ACTIONS(239), 1,
      sym_newline,
    ACTIONS(1396), 1,
      sym_integer_literal,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [8317] = 1,
    ACTIONS(1398), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8324] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8331] = 1,
    ACTIONS(1400), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8338] = 1,
    ACTIONS(1253), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8345] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8352] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8359] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8366] = 1,
    ACTIONS(1265), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8373] = 1,
    ACTIONS(1402), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8380] = 1,
    ACTIONS(1404), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8387] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8394] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8401] = 1,
    ACTIONS(1406), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8408] = 1,
    ACTIONS(1408), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8415] = 3,
    ACTIONS(1410), 1,
      sym_optional_marker,
    ACTIONS(1412), 1,
      sym_colon,
    ACTIONS(1414), 2,
      sym_rparen,
      sym_comma,
  [8426] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1123), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8437] = 1,
    ACTIONS(1416), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8444] = 1,
    ACTIONS(1418), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8451] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1142), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8462] = 1,
    ACTIONS(1420), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8469] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8476] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(124), 1,
      sym_line_end,
    STATE(694), 1,
      sym_job_body,
  [8489] = 4,
    ACTIONS(1382), 1,
      sym__inline_comment,
    ACTIONS(1384), 1,
      sym_newline,
    STATE(124), 1,
      sym_line_end,
    STATE(707), 1,
      sym_job_body,
  [8502] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1076), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8513] = 1,
    ACTIONS(1422), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8520] = 4,
    ACTIONS(1424), 1,
      sym_runnable_ref,
    ACTIONS(1426), 1,
      sym_none_keyword,
    ACTIONS(1428), 1,
      sym_all_keyword,
    STATE(842), 1,
      sym_route_value,
  [8533] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1145), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8544] = 1,
    ACTIONS(1430), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8551] = 1,
    ACTIONS(1432), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8558] = 1,
    ACTIONS(1434), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8565] = 1,
    ACTIONS(1436), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8572] = 1,
    ACTIONS(1197), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8579] = 1,
    ACTIONS(1438), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8586] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8593] = 1,
    ACTIONS(1440), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8600] = 1,
    ACTIONS(1273), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8607] = 2,
    ACTIONS(1444), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1442), 3,
      sym_newline,
      sym__inline_comment,
      sym_assign_operator,
  [8616] = 1,
    ACTIONS(1275), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8623] = 1,
    ACTIONS(1446), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8630] = 1,
    ACTIONS(1277), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8637] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8644] = 1,
    ACTIONS(1450), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8651] = 1,
    ACTIONS(1452), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8658] = 1,
    ACTIONS(1454), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8665] = 1,
    ACTIONS(1456), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8672] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1458), 1,
      sym_blank_line,
    STATE(273), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8683] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8690] = 1,
    ACTIONS(1279), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8697] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8704] = 1,
    ACTIONS(1460), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8711] = 1,
    ACTIONS(1462), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8718] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1050), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8729] = 1,
    ACTIONS(1108), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8736] = 1,
    ACTIONS(1281), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8743] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8750] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8757] = 4,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    ACTIONS(1464), 1,
      sym_colon,
    STATE(716), 1,
      sym_line_end,
  [8770] = 1,
    ACTIONS(1283), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8777] = 1,
    ACTIONS(1285), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8784] = 1,
    ACTIONS(1466), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8791] = 1,
    ACTIONS(1287), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8798] = 1,
    ACTIONS(1297), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8805] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8812] = 3,
    STATE(612), 1,
      sym__param_name,
    STATE(939), 1,
      sym_param,
    ACTIONS(1223), 2,
      sym__variable_name,
      anon_sym__,
  [8823] = 1,
    ACTIONS(880), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8830] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8837] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8844] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8851] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8858] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8865] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8872] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8879] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8886] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8893] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8900] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8907] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8914] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8921] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8928] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(961), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [8939] = 1,
    ACTIONS(884), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8946] = 1,
    ACTIONS(1468), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8953] = 1,
    ACTIONS(1470), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8960] = 1,
    ACTIONS(1472), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8967] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8974] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8981] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8988] = 3,
    STATE(571), 1,
      sym__base_type,
    STATE(925), 1,
      sym_type,
    ACTIONS(1474), 2,
      sym_builtin_type,
      sym_type_name,
  [8999] = 1,
    ACTIONS(1476), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9006] = 1,
    ACTIONS(1478), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9013] = 4,
    ACTIONS(554), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(929), 1,
      aux_sym_text_body_repeat1,
  [9026] = 1,
    ACTIONS(1480), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9033] = 1,
    ACTIONS(1482), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9040] = 1,
    ACTIONS(1484), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9047] = 1,
    ACTIONS(1486), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9054] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1144), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [9065] = 1,
    ACTIONS(1488), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9072] = 1,
    ACTIONS(1490), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9079] = 3,
    ACTIONS(1494), 1,
      sym_comma,
    STATE(751), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1492), 2,
      sym_newline,
      sym__inline_comment,
  [9090] = 3,
    ACTIONS(1498), 1,
      sym_comma,
    STATE(753), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1496), 2,
      sym_newline,
      sym__inline_comment,
  [9101] = 1,
    ACTIONS(1500), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9108] = 1,
    ACTIONS(1502), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9115] = 1,
    ACTIONS(1504), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9122] = 1,
    ACTIONS(886), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9129] = 1,
    ACTIONS(888), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9136] = 4,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    ACTIONS(1506), 1,
      sym_colon,
    STATE(238), 1,
      sym_line_end,
  [9149] = 1,
    ACTIONS(890), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9156] = 1,
    ACTIONS(892), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9163] = 1,
    ACTIONS(894), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9170] = 1,
    ACTIONS(1508), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9177] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9184] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9191] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9198] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9205] = 1,
    ACTIONS(902), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9212] = 1,
    ACTIONS(1510), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9219] = 1,
    ACTIONS(904), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9226] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9233] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9240] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9247] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9254] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9261] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9268] = 1,
    ACTIONS(918), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9275] = 1,
    ACTIONS(920), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9282] = 1,
    ACTIONS(922), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9289] = 4,
    ACTIONS(882), 1,
      sym__identifier,
    ACTIONS(1512), 1,
      sym_colon,
    STATE(636), 1,
      sym_inline_agic_body,
    STATE(904), 1,
      sym_runnable_name,
  [9302] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9309] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9316] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9323] = 4,
    ACTIONS(1514), 1,
      sym_blank_line,
    ACTIONS(1516), 1,
      sym__text_indent,
    STATE(788), 1,
      sym_text_body,
    STATE(932), 1,
      aux_sym_text_body_repeat1,
  [9336] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1120), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [9347] = 4,
    ACTIONS(344), 1,
      sym_blank_line,
    ACTIONS(348), 1,
      sym__text_indent,
    STATE(348), 1,
      sym_text_body,
    STATE(933), 1,
      aux_sym_text_body_repeat1,
  [9360] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9367] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9374] = 1,
    ACTIONS(932), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9381] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9388] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1520), 1,
      sym_blank_line,
    STATE(378), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9399] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1522), 1,
      sym_blank_line,
    STATE(379), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9410] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9417] = 3,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1524), 1,
      sym_colon,
    ACTIONS(83), 2,
      sym__inline_comment,
      sym__text_line,
  [9428] = 3,
    ACTIONS(239), 1,
      sym_newline,
    ACTIONS(1526), 1,
      sym_integer_literal,
    ACTIONS(231), 2,
      sym__inline_comment,
      sym__text_line,
  [9439] = 1,
    ACTIONS(1528), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9446] = 4,
    ACTIONS(1424), 1,
      sym_runnable_ref,
    ACTIONS(1426), 1,
      sym_none_keyword,
    ACTIONS(1428), 1,
      sym_all_keyword,
    STATE(861), 1,
      sym_route_value,
  [9459] = 1,
    ACTIONS(1530), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9466] = 3,
    STATE(571), 1,
      sym__base_type,
    STATE(850), 1,
      sym_type,
    ACTIONS(1474), 2,
      sym_builtin_type,
      sym_type_name,
  [9477] = 1,
    ACTIONS(1532), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9484] = 1,
    ACTIONS(1534), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9491] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1536), 1,
      sym_blank_line,
    STATE(450), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9502] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1538), 1,
      sym_blank_line,
    STATE(451), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9513] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1540), 1,
      sym_blank_line,
    STATE(453), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9524] = 3,
    ACTIONS(980), 1,
      sym_indented_raw_text,
    ACTIONS(1542), 1,
      sym_blank_line,
    STATE(454), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9535] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1126), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [9546] = 3,
    ACTIONS(1494), 1,
      sym_comma,
    STATE(502), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1544), 2,
      sym_newline,
      sym__inline_comment,
  [9557] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1127), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [9568] = 3,
    ACTIONS(1498), 1,
      sym_comma,
    STATE(503), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1546), 2,
      sym_newline,
      sym__inline_comment,
  [9579] = 1,
    ACTIONS(1548), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9586] = 3,
    STATE(418), 1,
      sym__base_type,
    STATE(1114), 1,
      sym_type,
    ACTIONS(1305), 2,
      sym_builtin_type,
      sym_type_name,
  [9597] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(498), 1,
      sym_line_end,
  [9607] = 1,
    ACTIONS(1446), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9613] = 3,
    ACTIONS(1550), 1,
      sym__inline_comment,
    ACTIONS(1552), 1,
      sym_newline,
    STATE(776), 1,
      sym_line_end,
  [9623] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(695), 1,
      sym_line_end,
  [9633] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(216), 1,
      sym_line_end,
  [9643] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(515), 1,
      sym_line_end,
  [9653] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [9663] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(516), 1,
      sym_line_end,
  [9673] = 1,
    ACTIONS(1558), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [9679] = 3,
    ACTIONS(1560), 1,
      sym_colon,
    ACTIONS(1562), 1,
      sym__identifier,
    STATE(1161), 1,
      sym_identifier,
  [9689] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [9699] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(563), 1,
      sym_line_end,
  [9709] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(702), 1,
      sym_line_end,
  [9719] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(704), 1,
      sym_line_end,
  [9729] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(191), 1,
      sym_line_end,
  [9739] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(705), 1,
      sym_line_end,
  [9749] = 2,
    STATE(389), 1,
      sym__reserved_binding_word,
    ACTIONS(1564), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [9757] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(706), 1,
      sym_line_end,
  [9767] = 2,
    STATE(436), 1,
      sym__reserved_binding_word,
    ACTIONS(1566), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [9775] = 1,
    ACTIONS(1452), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9781] = 1,
    ACTIONS(1454), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9787] = 3,
    ACTIONS(1568), 1,
      sym__dedent,
    ACTIONS(1570), 1,
      sym__until_start,
    STATE(66), 1,
      sym_until_clause,
  [9797] = 2,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(1572), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [9805] = 3,
    ACTIONS(1574), 1,
      sym_blank_line,
    ACTIONS(1576), 1,
      sym__text_indent,
    STATE(816), 1,
      aux_sym_text_body_repeat1,
  [9815] = 1,
    ACTIONS(1578), 3,
      sym_arrow,
      sym_colon,
      sym__identifier,
  [9821] = 1,
    ACTIONS(1299), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9827] = 1,
    ACTIONS(1580), 3,
      sym_optional_marker,
      sym_assign_operator,
      sym_colon,
  [9833] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [9843] = 2,
    ACTIONS(1299), 1,
      sym_newline,
    ACTIONS(1582), 2,
      sym__inline_comment,
      sym__text_line,
  [9851] = 3,
    ACTIONS(374), 1,
      sym__line_start,
    STATE(90), 1,
      sym__flow_statement,
    STATE(1058), 1,
      sym_statements,
  [9861] = 1,
    ACTIONS(1120), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9867] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [9877] = 1,
    ACTIONS(1122), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9883] = 1,
    ACTIONS(1004), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9889] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(536), 1,
      sym_line_end,
  [9899] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(717), 1,
      sym_line_end,
  [9909] = 1,
    ACTIONS(1130), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9915] = 1,
    ACTIONS(1132), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9921] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(167), 1,
      sym_line_end,
  [9931] = 1,
    ACTIONS(1092), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9937] = 1,
    ACTIONS(1094), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9943] = 3,
    ACTIONS(269), 1,
      sym_flow_if_keyword,
    STATE(721), 1,
      sym__inline_if_complement,
    STATE(890), 1,
      sym__named_if_complement,
  [9953] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(722), 1,
      sym_line_end,
  [9963] = 1,
    ACTIONS(1096), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9969] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(723), 1,
      sym_line_end,
  [9979] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(214), 1,
      sym_line_end,
  [9989] = 3,
    ACTIONS(856), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1584), 1,
      sym_colon,
    STATE(1047), 1,
      sym__window_complement,
  [9999] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10005] = 1,
    ACTIONS(852), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10011] = 1,
    ACTIONS(1098), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10017] = 1,
    ACTIONS(1100), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10023] = 1,
    ACTIONS(1102), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10029] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10035] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(537), 1,
      sym_line_end,
  [10045] = 1,
    ACTIONS(852), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10051] = 3,
    ACTIONS(1586), 1,
      sym_rparen,
    ACTIONS(1588), 1,
      sym_comma,
    STATE(814), 1,
      aux_sym_params_repeat1,
  [10061] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(520), 1,
      sym_line_end,
  [10071] = 1,
    ACTIONS(1108), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10077] = 3,
    ACTIONS(1590), 1,
      sym_rparen,
    ACTIONS(1592), 1,
      sym_comma,
    STATE(814), 1,
      aux_sym_params_repeat1,
  [10087] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(538), 1,
      sym_line_end,
  [10097] = 3,
    ACTIONS(1595), 1,
      sym_blank_line,
    ACTIONS(1598), 1,
      sym__text_indent,
    STATE(816), 1,
      aux_sym_text_body_repeat1,
  [10107] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10113] = 1,
    ACTIONS(852), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10119] = 1,
    ACTIONS(1092), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10125] = 1,
    ACTIONS(1094), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10131] = 1,
    ACTIONS(1096), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10137] = 1,
    ACTIONS(1098), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10143] = 1,
    ACTIONS(1100), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10149] = 1,
    ACTIONS(1102), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10155] = 2,
    ACTIONS(1600), 1,
      sym_colon,
    ACTIONS(1602), 2,
      sym_rparen,
      sym_comma,
  [10163] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(539), 1,
      sym_line_end,
  [10173] = 1,
    ACTIONS(1092), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10179] = 1,
    ACTIONS(1094), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10185] = 1,
    ACTIONS(1096), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10191] = 1,
    ACTIONS(1098), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10197] = 1,
    ACTIONS(1100), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10203] = 1,
    ACTIONS(1102), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10209] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(737), 1,
      sym_line_end,
  [10219] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(540), 1,
      sym_line_end,
  [10229] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(541), 1,
      sym_line_end,
  [10239] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(519), 1,
      sym_line_end,
  [10249] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(542), 1,
      sym_line_end,
  [10259] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(573), 1,
      sym_line_end,
  [10269] = 2,
    STATE(1000), 1,
      sym__param_name,
    ACTIONS(1604), 2,
      sym__variable_name,
      anon_sym__,
  [10277] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [10287] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [10297] = 3,
    ACTIONS(1606), 1,
      sym__inline_comment,
    ACTIONS(1608), 1,
      sym_newline,
    STATE(252), 1,
      sym_line_end,
  [10307] = 3,
    ACTIONS(1550), 1,
      sym__inline_comment,
    ACTIONS(1552), 1,
      sym_newline,
    STATE(630), 1,
      sym_line_end,
  [10317] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(228), 1,
      sym_line_end,
  [10327] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(229), 1,
      sym_line_end,
  [10337] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(230), 1,
      sym_line_end,
  [10347] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(231), 1,
      sym_line_end,
  [10357] = 3,
    ACTIONS(1606), 1,
      sym__inline_comment,
    ACTIONS(1608), 1,
      sym_newline,
    STATE(253), 1,
      sym_line_end,
  [10367] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [10377] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(523), 1,
      sym_line_end,
  [10387] = 1,
    ACTIONS(1610), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10393] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [10403] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(239), 1,
      sym_line_end,
  [10413] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(505), 1,
      sym_line_end,
  [10423] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(168), 1,
      sym_line_end,
  [10433] = 3,
    ACTIONS(297), 1,
      sym_flow_if_keyword,
    STATE(243), 1,
      sym__inline_if_complement,
    STATE(871), 1,
      sym__named_if_complement,
  [10443] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(244), 1,
      sym_line_end,
  [10453] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(245), 1,
      sym_line_end,
  [10463] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [10473] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(254), 1,
      sym_line_end,
  [10483] = 3,
    ACTIONS(1612), 1,
      sym__inline_comment,
    ACTIONS(1614), 1,
      sym_newline,
    STATE(608), 1,
      sym_line_end,
  [10493] = 3,
    ACTIONS(1612), 1,
      sym__inline_comment,
    ACTIONS(1614), 1,
      sym_newline,
    STATE(609), 1,
      sym_line_end,
  [10503] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(481), 1,
      sym_line_end,
  [10513] = 1,
    ACTIONS(1309), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10519] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(257), 1,
      sym_line_end,
  [10529] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(261), 1,
      sym_line_end,
  [10539] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(262), 1,
      sym_line_end,
  [10549] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(486), 1,
      sym_line_end,
  [10559] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(265), 1,
      sym_line_end,
  [10569] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(266), 1,
      sym_line_end,
  [10579] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(267), 1,
      sym_line_end,
  [10589] = 3,
    ACTIONS(781), 1,
      sym_flow_by_keyword,
    STATE(270), 1,
      sym__inline_by_complement,
    STATE(881), 1,
      sym__named_by_complement,
  [10599] = 3,
    ACTIONS(1570), 1,
      sym__until_start,
    ACTIONS(1616), 1,
      sym__dedent,
    STATE(75), 1,
      sym_until_clause,
  [10609] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(487), 1,
      sym_line_end,
  [10619] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(272), 1,
      sym_line_end,
  [10629] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(276), 1,
      sym_line_end,
  [10639] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(277), 1,
      sym_line_end,
  [10649] = 2,
    ACTIONS(1618), 1,
      sym_flow_spawn_keyword,
    STATE(278), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10657] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(312), 1,
      sym_line_end,
  [10667] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(281), 1,
      sym_line_end,
  [10677] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(282), 1,
      sym_line_end,
  [10687] = 3,
    ACTIONS(1550), 1,
      sym__inline_comment,
    ACTIONS(1552), 1,
      sym_newline,
    STATE(646), 1,
      sym_line_end,
  [10697] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(287), 1,
      sym_line_end,
  [10707] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(491), 1,
      sym_line_end,
  [10717] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(286), 1,
      sym_line_end,
  [10727] = 1,
    ACTIONS(1620), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10733] = 1,
    ACTIONS(1314), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10739] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(492), 1,
      sym_line_end,
  [10749] = 3,
    ACTIONS(1570), 1,
      sym__until_start,
    ACTIONS(1622), 1,
      sym__dedent,
    STATE(70), 1,
      sym_until_clause,
  [10759] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(493), 1,
      sym_line_end,
  [10769] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(552), 1,
      sym_line_end,
  [10779] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(299), 1,
      sym_line_end,
  [10789] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(300), 1,
      sym_line_end,
  [10799] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(301), 1,
      sym_line_end,
  [10809] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(302), 1,
      sym_line_end,
  [10819] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(303), 1,
      sym_line_end,
  [10829] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(304), 1,
      sym_line_end,
  [10839] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(305), 1,
      sym_line_end,
  [10849] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(553), 1,
      sym_line_end,
  [10859] = 3,
    ACTIONS(1570), 1,
      sym__until_start,
    ACTIONS(1624), 1,
      sym__dedent,
    STATE(72), 1,
      sym_until_clause,
  [10869] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(311), 1,
      sym_line_end,
  [10879] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(313), 1,
      sym_line_end,
  [10889] = 3,
    ACTIONS(761), 1,
      sym_flow_by_keyword,
    STATE(496), 1,
      sym__inline_by_complement,
    STATE(763), 1,
      sym__named_by_complement,
  [10899] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(641), 1,
      sym_line_end,
  [10909] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(321), 1,
      sym_line_end,
  [10919] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(199), 1,
      sym_line_end,
  [10929] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [10939] = 3,
    ACTIONS(1366), 1,
      sym_newline,
    ACTIONS(1626), 1,
      sym__inline_comment,
    STATE(789), 1,
      sym_line_end,
  [10949] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(193), 1,
      sym_line_end,
  [10959] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(506), 1,
      sym_line_end,
  [10969] = 3,
    ACTIONS(219), 1,
      sym_newline,
    ACTIONS(658), 1,
      sym__inline_comment,
    STATE(349), 1,
      sym_line_end,
  [10979] = 2,
    ACTIONS(1628), 1,
      sym_flow_spawn_keyword,
    STATE(508), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10987] = 1,
    ACTIONS(1630), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [10993] = 3,
    ACTIONS(374), 1,
      sym__line_start,
    STATE(90), 1,
      sym__flow_statement,
    STATE(1125), 1,
      sym_statements,
  [11003] = 3,
    ACTIONS(1588), 1,
      sym_comma,
    ACTIONS(1632), 1,
      sym_rparen,
    STATE(811), 1,
      aux_sym_params_repeat1,
  [11013] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(164), 1,
      sym_line_end,
  [11023] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(171), 1,
      sym_line_end,
  [11033] = 1,
    ACTIONS(1634), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11039] = 2,
    STATE(409), 1,
      sym__reserved_binding_word,
    ACTIONS(1636), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11047] = 2,
    STATE(177), 1,
      sym__order_complement,
    ACTIONS(1572), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11055] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [11065] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(188), 1,
      sym_line_end,
  [11075] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(189), 1,
      sym_line_end,
  [11085] = 2,
    STATE(434), 1,
      sym__reserved_binding_word,
    ACTIONS(1638), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11093] = 3,
    ACTIONS(207), 1,
      sym_newline,
    ACTIONS(532), 1,
      sym__inline_comment,
    STATE(501), 1,
      sym_line_end,
  [11103] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(194), 1,
      sym_line_end,
  [11113] = 3,
    ACTIONS(1640), 1,
      sym__inline_comment,
    ACTIONS(1642), 1,
      sym_newline,
    STATE(384), 1,
      sym_line_end,
  [11123] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(201), 1,
      sym_line_end,
  [11133] = 3,
    ACTIONS(1574), 1,
      sym_blank_line,
    ACTIONS(1644), 1,
      sym__text_indent,
    STATE(816), 1,
      aux_sym_text_body_repeat1,
  [11143] = 3,
    ACTIONS(856), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1646), 1,
      sym_colon,
    STATE(1166), 1,
      sym__window_complement,
  [11153] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [11163] = 3,
    ACTIONS(1574), 1,
      sym_blank_line,
    ACTIONS(1648), 1,
      sym__text_indent,
    STATE(816), 1,
      aux_sym_text_body_repeat1,
  [11173] = 3,
    ACTIONS(1574), 1,
      sym_blank_line,
    ACTIONS(1650), 1,
      sym__text_indent,
    STATE(816), 1,
      aux_sym_text_body_repeat1,
  [11183] = 3,
    ACTIONS(1554), 1,
      sym__inline_comment,
    ACTIONS(1556), 1,
      sym_newline,
    STATE(474), 1,
      sym_line_end,
  [11193] = 3,
    ACTIONS(1562), 1,
      sym__identifier,
    ACTIONS(1652), 1,
      sym_colon,
    STATE(1056), 1,
      sym_identifier,
  [11203] = 2,
    ACTIONS(1654), 1,
      sym_comment_text,
    ACTIONS(1656), 1,
      sym__comment_end,
  [11210] = 2,
    ACTIONS(492), 1,
      sym__from_start,
    STATE(427), 1,
      sym__from_complement,
  [11217] = 1,
    ACTIONS(852), 2,
      sym_blank_line,
      sym__text_indent,
  [11222] = 1,
    ACTIONS(1658), 2,
      sym_rparen,
      sym_comma,
  [11227] = 1,
    ACTIONS(1660), 2,
      sym_arrow,
      sym_colon,
  [11232] = 1,
    ACTIONS(846), 2,
      sym_blank_line,
      sym__text_indent,
  [11237] = 2,
    ACTIONS(1662), 1,
      sym_arrow,
    ACTIONS(1664), 1,
      sym_colon,
  [11244] = 2,
    ACTIONS(1666), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(842), 1,
      sym_directive_value,
  [11251] = 2,
    ACTIONS(1668), 1,
      anon_sym_lanes,
    STATE(1011), 1,
      sym_flow_lanes_keyword,
  [11258] = 2,
    ACTIONS(1670), 1,
      aux_sym__doc_space_token1,
    STATE(948), 1,
      sym__required_space,
  [11265] = 2,
    ACTIONS(1672), 1,
      sym__snake_kebab_name,
    STATE(1129), 1,
      sym_cap_name,
  [11272] = 2,
    ACTIONS(1562), 1,
      sym__identifier,
    STATE(994), 1,
      sym_identifier,
  [11279] = 2,
    ACTIONS(882), 1,
      sym__identifier,
    STATE(913), 1,
      sym_runnable_name,
  [11286] = 2,
    ACTIONS(1674), 1,
      sym_arrow,
    ACTIONS(1676), 1,
      sym_colon,
  [11293] = 2,
    ACTIONS(522), 1,
      sym__line_start,
    STATE(133), 1,
      sym_field,
  [11300] = 2,
    ACTIONS(492), 1,
      sym__from_start,
    STATE(416), 1,
      sym__from_complement,
  [11307] = 2,
    ACTIONS(1678), 1,
      sym__reduce_text_start,
    STATE(512), 1,
      sym__reduce_text_body,
  [11314] = 2,
    ACTIONS(1680), 1,
      sym_arrow,
    ACTIONS(1682), 1,
      sym_colon,
  [11321] = 2,
    ACTIONS(1684), 1,
      sym__one_integer_literal,
    ACTIONS(1686), 1,
      sym__other_integer_literal,
  [11328] = 2,
    ACTIONS(1688), 1,
      anon_sym_lanes,
    STATE(334), 1,
      sym_flow_lanes_keyword,
  [11335] = 2,
    ACTIONS(1690), 1,
      sym_comment_text,
    ACTIONS(1692), 1,
      sym__comment_end,
  [11342] = 2,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(192), 1,
      sym__implicit_run_line,
  [11349] = 2,
    ACTIONS(1672), 1,
      sym__snake_kebab_name,
    STATE(1090), 1,
      sym_cap_name,
  [11356] = 1,
    ACTIONS(1694), 2,
      sym_newline,
      sym__inline_comment,
  [11361] = 2,
    ACTIONS(1696), 1,
      sym__snake_kebab_name,
    STATE(1172), 1,
      sym_job_name,
  [11368] = 1,
    ACTIONS(1698), 2,
      sym_rparen,
      sym_comma,
  [11373] = 2,
    ACTIONS(1678), 1,
      sym__reduce_text_start,
    STATE(530), 1,
      sym__reduce_text_body,
  [11380] = 2,
    ACTIONS(1562), 1,
      sym__identifier,
    STATE(1117), 1,
      sym_identifier,
  [11387] = 2,
    ACTIONS(1700), 1,
      sym_flow_run_keyword,
    STATE(662), 1,
      sym__run_after_modifier,
  [11394] = 2,
    ACTIONS(1702), 1,
      sym__text_line,
    STATE(927), 1,
      sym_text_line,
  [11401] = 2,
    ACTIONS(1672), 1,
      sym__snake_kebab_name,
    STATE(1119), 1,
      sym_cap_name,
  [11408] = 2,
    ACTIONS(1704), 1,
      sym_comment_text,
    ACTIONS(1706), 1,
      sym__comment_end,
  [11415] = 1,
    ACTIONS(1708), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [11420] = 2,
    ACTIONS(1710), 1,
      sym_comment_text,
    ACTIONS(1712), 1,
      sym__comment_end,
  [11427] = 2,
    ACTIONS(1714), 1,
      sym_comment_text,
    ACTIONS(1716), 1,
      sym__comment_end,
  [11434] = 2,
    ACTIONS(1718), 1,
      sym_comment_text,
    ACTIONS(1720), 1,
      sym__comment_end,
  [11441] = 2,
    ACTIONS(1672), 1,
      sym__snake_kebab_name,
    STATE(1111), 1,
      sym_cap_name,
  [11448] = 2,
    ACTIONS(1722), 1,
      sym_comment_text,
    ACTIONS(1724), 1,
      sym__comment_end,
  [11455] = 2,
    ACTIONS(1726), 1,
      sym_comment_text,
    ACTIONS(1728), 1,
      sym__comment_end,
  [11462] = 2,
    ACTIONS(1696), 1,
      sym__snake_kebab_name,
    STATE(1057), 1,
      sym_job_name,
  [11469] = 2,
    ACTIONS(1730), 1,
      sym_arrow,
    ACTIONS(1732), 1,
      sym_colon,
  [11476] = 2,
    ACTIONS(1678), 1,
      sym__reduce_text_start,
    STATE(543), 1,
      sym__reduce_text_body,
  [11483] = 2,
    ACTIONS(1734), 1,
      sym_comment_text,
    ACTIONS(1736), 1,
      sym__comment_end,
  [11490] = 2,
    ACTIONS(1738), 1,
      sym_comment_text,
    ACTIONS(1740), 1,
      sym__comment_end,
  [11497] = 2,
    ACTIONS(1742), 1,
      sym_comment_text,
    ACTIONS(1744), 1,
      sym__comment_end,
  [11504] = 2,
    ACTIONS(1746), 1,
      sym_comment_text,
    ACTIONS(1748), 1,
      sym__comment_end,
  [11511] = 2,
    ACTIONS(522), 1,
      sym__line_start,
    STATE(97), 1,
      sym_field,
  [11518] = 1,
    ACTIONS(1496), 2,
      sym_newline,
      sym__inline_comment,
  [11523] = 1,
    ACTIONS(1580), 2,
      sym_newline,
      sym__inline_comment,
  [11528] = 2,
    ACTIONS(1750), 1,
      sym_comment_text,
    ACTIONS(1752), 1,
      sym__comment_end,
  [11535] = 2,
    ACTIONS(1754), 1,
      sym_comment_text,
    ACTIONS(1756), 1,
      sym__comment_end,
  [11542] = 2,
    ACTIONS(1758), 1,
      sym_comment_text,
    ACTIONS(1760), 1,
      sym__comment_end,
  [11549] = 2,
    ACTIONS(1762), 1,
      sym_comment_text,
    ACTIONS(1764), 1,
      sym__comment_end,
  [11556] = 2,
    ACTIONS(1766), 1,
      aux_sym__doc_space_token1,
    STATE(839), 1,
      sym__doc_space,
  [11563] = 2,
    ACTIONS(1768), 1,
      sym_comment_text,
    ACTIONS(1770), 1,
      sym__comment_end,
  [11570] = 2,
    ACTIONS(1772), 1,
      sym_comment_text,
    ACTIONS(1774), 1,
      sym__comment_end,
  [11577] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1046), 1,
      sym_param_doc_tag,
  [11584] = 1,
    ACTIONS(1778), 2,
      sym_arrow,
      sym_colon,
  [11589] = 2,
    ACTIONS(1780), 1,
      sym_optional_marker,
    ACTIONS(1782), 1,
      sym_colon,
  [11596] = 2,
    ACTIONS(117), 1,
      sym__variable_name,
    STATE(769), 1,
      sym_local_name,
  [11603] = 1,
    ACTIONS(1784), 2,
      sym_integer_literal,
      sym_default_keyword,
  [11608] = 2,
    ACTIONS(1666), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(861), 1,
      sym_directive_value,
  [11615] = 2,
    ACTIONS(47), 1,
      sym__flow_raw_text,
    STATE(224), 1,
      sym__implicit_run_line,
  [11622] = 2,
    ACTIONS(1678), 1,
      sym__reduce_text_start,
    STATE(554), 1,
      sym__reduce_text_body,
  [11629] = 2,
    ACTIONS(1786), 1,
      aux_sym__doc_space_token1,
    STATE(1060), 1,
      sym__doc_space,
  [11636] = 2,
    ACTIONS(1788), 1,
      sym__identifier,
    STATE(398), 1,
      sym_agent_name,
  [11643] = 2,
    ACTIONS(1790), 1,
      sym_comment_text,
    ACTIONS(1792), 1,
      sym__comment_end,
  [11650] = 2,
    ACTIONS(1794), 1,
      sym__one_integer_literal,
    ACTIONS(1796), 1,
      sym__other_integer_literal,
  [11657] = 1,
    ACTIONS(1798), 2,
      sym_rparen,
      sym_comma,
  [11662] = 1,
    ACTIONS(1800), 2,
      sym_newline,
      sym__inline_comment,
  [11667] = 2,
    ACTIONS(1802), 1,
      sym_flow_run_keyword,
    STATE(222), 1,
      sym__run_after_modifier,
  [11674] = 2,
    ACTIONS(1788), 1,
      sym__identifier,
    STATE(376), 1,
      sym_agent_name,
  [11681] = 1,
    ACTIONS(1804), 2,
      sym_newline,
      sym__inline_comment,
  [11686] = 1,
    ACTIONS(1806), 2,
      sym_integer_literal,
      sym_default_keyword,
  [11691] = 2,
    ACTIONS(492), 1,
      sym__from_start,
    STATE(439), 1,
      sym__from_complement,
  [11698] = 1,
    ACTIONS(1104), 2,
      sym_newline,
      sym__inline_comment,
  [11703] = 1,
    ACTIONS(1808), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11708] = 2,
    ACTIONS(492), 1,
      sym__from_start,
    STATE(443), 1,
      sym__from_complement,
  [11715] = 1,
    ACTIONS(1110), 2,
      sym_newline,
      sym__inline_comment,
  [11720] = 2,
    ACTIONS(366), 1,
      sym__agic_raw_text,
    STATE(425), 1,
      sym__unroled_message_line,
  [11727] = 2,
    ACTIONS(1702), 1,
      sym__text_line,
    STATE(843), 1,
      sym_text_line,
  [11734] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1043), 1,
      sym_param_doc_tag,
  [11741] = 1,
    ACTIONS(1810), 2,
      sym_arrow,
      sym_colon,
  [11746] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1054), 1,
      sym_param_doc_tag,
  [11753] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1108), 1,
      sym_param_doc_tag,
  [11760] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1065), 1,
      sym_param_doc_tag,
  [11767] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1031), 1,
      sym_param_doc_tag,
  [11774] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1079), 1,
      sym_param_doc_tag,
  [11781] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1086), 1,
      sym_param_doc_tag,
  [11788] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1093), 1,
      sym_param_doc_tag,
  [11795] = 2,
    ACTIONS(1776), 1,
      anon_sym_ATparam,
    STATE(1100), 1,
      sym_param_doc_tag,
  [11802] = 1,
    ACTIONS(1492), 2,
      sym_newline,
      sym__inline_comment,
  [11807] = 2,
    ACTIONS(117), 1,
      sym__variable_name,
    STATE(845), 1,
      sym_local_name,
  [11814] = 1,
    ACTIONS(1812), 2,
      sym_newline,
      sym__inline_comment,
  [11819] = 2,
    ACTIONS(1814), 1,
      sym_comment_text,
    ACTIONS(1816), 1,
      sym__comment_end,
  [11826] = 1,
    ACTIONS(1818), 1,
      sym__comment_end,
  [11830] = 1,
    ACTIONS(1820), 1,
      sym__comment_end,
  [11834] = 1,
    ACTIONS(1822), 1,
      sym__dedent,
  [11838] = 1,
    ACTIONS(1824), 1,
      sym__dedent,
  [11842] = 1,
    ACTIONS(1826), 1,
      sym__comment_end,
  [11846] = 1,
    ACTIONS(1828), 1,
      sym__dedent,
  [11850] = 1,
    ACTIONS(1830), 1,
      sym__dedent,
  [11854] = 1,
    ACTIONS(1832), 1,
      sym__comment_end,
  [11858] = 1,
    ACTIONS(1834), 1,
      sym__dedent,
  [11862] = 1,
    ACTIONS(1836), 1,
      sym__dedent,
  [11866] = 1,
    ACTIONS(1838), 1,
      sym__comment_end,
  [11870] = 1,
    ACTIONS(1840), 1,
      sym__comment_end,
  [11874] = 1,
    ACTIONS(1842), 1,
      sym__comment_end,
  [11878] = 1,
    ACTIONS(1844), 1,
      sym_newline,
  [11882] = 1,
    ACTIONS(1846), 1,
      sym_flow_exec_keyword,
  [11886] = 1,
    ACTIONS(1848), 1,
      sym__comment_end,
  [11890] = 1,
    ACTIONS(1850), 1,
      sym_colon,
  [11894] = 1,
    ACTIONS(275), 1,
      sym__dedent,
  [11898] = 1,
    ACTIONS(1852), 1,
      sym_newline,
  [11902] = 1,
    ACTIONS(1854), 1,
      sym_colon,
  [11906] = 1,
    ACTIONS(1856), 1,
      sym_colon,
  [11910] = 1,
    ACTIONS(1858), 1,
      sym__comment_end,
  [11914] = 1,
    ACTIONS(1860), 1,
      sym__comment_end,
  [11918] = 1,
    ACTIONS(1862), 1,
      sym__comment_end,
  [11922] = 1,
    ACTIONS(1864), 1,
      sym_newline,
  [11926] = 1,
    ACTIONS(1866), 1,
      sym_colon,
  [11930] = 1,
    ACTIONS(1868), 1,
      sym_colon,
  [11934] = 1,
    ACTIONS(1870), 1,
      sym__dedent,
  [11938] = 1,
    ACTIONS(1872), 1,
      sym__dedent,
  [11942] = 1,
    ACTIONS(1874), 1,
      sym_comment_text,
  [11946] = 1,
    ACTIONS(1876), 1,
      sym__dedent,
  [11950] = 1,
    ACTIONS(1878), 1,
      sym__comment_end,
  [11954] = 1,
    ACTIONS(1880), 1,
      sym__comment_end,
  [11958] = 1,
    ACTIONS(1882), 1,
      sym__comment_end,
  [11962] = 1,
    ACTIONS(1884), 1,
      sym__comment_end,
  [11966] = 1,
    ACTIONS(1886), 1,
      sym_newline,
  [11970] = 1,
    ACTIONS(1888), 1,
      sym_flow_run_keyword,
  [11974] = 1,
    ACTIONS(1890), 1,
      ts_builtin_sym_end,
  [11978] = 1,
    ACTIONS(1892), 1,
      sym_flow_from_keyword,
  [11982] = 1,
    ACTIONS(1894), 1,
      sym__comment_end,
  [11986] = 1,
    ACTIONS(1896), 1,
      sym__comment_end,
  [11990] = 1,
    ACTIONS(1898), 1,
      sym_flow_until_keyword,
  [11994] = 1,
    ACTIONS(1900), 1,
      sym_newline,
  [11998] = 1,
    ACTIONS(267), 1,
      sym__dedent,
  [12002] = 1,
    ACTIONS(1902), 1,
      sym__comment_end,
  [12006] = 1,
    ACTIONS(1904), 1,
      sym_colon,
  [12010] = 1,
    ACTIONS(1906), 1,
      sym__comment_end,
  [12014] = 1,
    ACTIONS(1908), 1,
      sym__comment_end,
  [12018] = 1,
    ACTIONS(1910), 1,
      sym__comment_end,
  [12022] = 1,
    ACTIONS(1912), 1,
      sym_newline,
  [12026] = 1,
    ACTIONS(1914), 1,
      sym_colon,
  [12030] = 1,
    ACTIONS(1916), 1,
      sym_colon,
  [12034] = 1,
    ACTIONS(1918), 1,
      sym__dedent,
  [12038] = 1,
    ACTIONS(1920), 1,
      sym__comment_end,
  [12042] = 1,
    ACTIONS(1922), 1,
      sym__comment_end,
  [12046] = 1,
    ACTIONS(1924), 1,
      sym__comment_end,
  [12050] = 1,
    ACTIONS(1926), 1,
      sym_newline,
  [12054] = 1,
    ACTIONS(1928), 1,
      sym_newline,
  [12058] = 1,
    ACTIONS(1930), 1,
      sym__dedent,
  [12062] = 1,
    ACTIONS(1932), 1,
      sym_colon,
  [12066] = 1,
    ACTIONS(1934), 1,
      sym__comment_end,
  [12070] = 1,
    ACTIONS(1936), 1,
      sym__comment_end,
  [12074] = 1,
    ACTIONS(1938), 1,
      sym__comment_end,
  [12078] = 1,
    ACTIONS(1940), 1,
      sym_newline,
  [12082] = 1,
    ACTIONS(1942), 1,
      sym_flow_lane_keyword,
  [12086] = 1,
    ACTIONS(1404), 1,
      aux_sym__doc_space_token1,
  [12090] = 1,
    ACTIONS(1944), 1,
      sym__dedent,
  [12094] = 1,
    ACTIONS(1946), 1,
      sym__comment_end,
  [12098] = 1,
    ACTIONS(1948), 1,
      sym__comment_end,
  [12102] = 1,
    ACTIONS(1950), 1,
      sym__comment_end,
  [12106] = 1,
    ACTIONS(1952), 1,
      sym_newline,
  [12110] = 1,
    ACTIONS(1954), 1,
      sym_newline,
  [12114] = 1,
    ACTIONS(1956), 1,
      sym_newline,
  [12118] = 1,
    ACTIONS(1958), 1,
      sym_newline,
  [12122] = 1,
    ACTIONS(1960), 1,
      sym_type_name,
  [12126] = 1,
    ACTIONS(1962), 1,
      sym__dedent,
  [12130] = 1,
    ACTIONS(1964), 1,
      sym_newline,
  [12134] = 1,
    ACTIONS(1966), 1,
      sym__comment_end,
  [12138] = 1,
    ACTIONS(1968), 1,
      sym__dedent,
  [12142] = 1,
    ACTIONS(1970), 1,
      sym_colon,
  [12146] = 1,
    ACTIONS(1972), 1,
      sym_colon,
  [12150] = 1,
    ACTIONS(1974), 1,
      sym__dedent,
  [12154] = 1,
    ACTIONS(1976), 1,
      sym__dedent,
  [12158] = 1,
    ACTIONS(1978), 1,
      sym_colon,
  [12162] = 1,
    ACTIONS(1980), 1,
      sym_flow_exec_keyword,
  [12166] = 1,
    ACTIONS(1982), 1,
      sym_colon,
  [12170] = 1,
    ACTIONS(1984), 1,
      sym_assign_operator,
  [12174] = 1,
    ACTIONS(1986), 1,
      sym_flow_exec_keyword,
  [12178] = 1,
    ACTIONS(1988), 1,
      sym_colon,
  [12182] = 1,
    ACTIONS(1990), 1,
      sym_colon,
  [12186] = 1,
    ACTIONS(1992), 1,
      sym_colon,
  [12190] = 1,
    ACTIONS(1994), 1,
      sym_integer_literal,
  [12194] = 1,
    ACTIONS(1996), 1,
      sym_colon,
  [12198] = 1,
    ACTIONS(1998), 1,
      sym_colon,
  [12202] = 1,
    ACTIONS(2000), 1,
      sym__dedent,
  [12206] = 1,
    ACTIONS(2002), 1,
      sym_colon,
  [12210] = 1,
    ACTIONS(2004), 1,
      sym_colon,
  [12214] = 1,
    ACTIONS(2006), 1,
      sym_colon,
  [12218] = 1,
    ACTIONS(2008), 1,
      sym_colon,
  [12222] = 1,
    ACTIONS(2010), 1,
      sym_flow_exec_keyword,
  [12226] = 1,
    ACTIONS(2012), 1,
      sym_newline,
  [12230] = 1,
    ACTIONS(2014), 1,
      sym_assign_operator,
  [12234] = 1,
    ACTIONS(2016), 1,
      sym_directive_operator,
  [12238] = 1,
    ACTIONS(2018), 1,
      sym_assign_operator,
  [12242] = 1,
    ACTIONS(2020), 1,
      sym_flow_until_keyword,
  [12246] = 1,
    ACTIONS(2022), 1,
      sym_colon,
  [12250] = 1,
    ACTIONS(2024), 1,
      sym_assign_operator,
  [12254] = 1,
    ACTIONS(1303), 1,
      sym__dedent,
  [12258] = 1,
    ACTIONS(2026), 1,
      sym_flow_lane_keyword,
  [12262] = 1,
    ACTIONS(2028), 1,
      sym_integer_literal,
  [12266] = 1,
    ACTIONS(2030), 1,
      sym__dedent,
  [12270] = 1,
    ACTIONS(2032), 1,
      sym_colon,
  [12274] = 1,
    ACTIONS(2034), 1,
      sym_assign_operator,
  [12278] = 1,
    ACTIONS(2036), 1,
      sym_colon,
  [12282] = 1,
    ACTIONS(2038), 1,
      sym_colon,
  [12286] = 1,
    ACTIONS(2040), 1,
      sym_integer_literal,
  [12290] = 1,
    ACTIONS(2042), 1,
      sym__dedent,
  [12294] = 1,
    ACTIONS(2044), 1,
      sym_colon,
  [12298] = 1,
    ACTIONS(2046), 1,
      sym__dedent,
  [12302] = 1,
    ACTIONS(2048), 1,
      sym__dedent,
  [12306] = 1,
    ACTIONS(2050), 1,
      sym_newline,
  [12310] = 1,
    ACTIONS(2052), 1,
      sym__dedent,
  [12314] = 1,
    ACTIONS(2054), 1,
      sym_cap_kind,
  [12318] = 1,
    ACTIONS(2056), 1,
      sym_flow_time_keyword,
  [12322] = 1,
    ACTIONS(2058), 1,
      sym_assign_operator,
  [12326] = 1,
    ACTIONS(2060), 1,
      sym_directive_operator,
  [12330] = 1,
    ACTIONS(2062), 1,
      sym_assign_operator,
  [12334] = 1,
    ACTIONS(2064), 1,
      sym_assign_operator,
  [12338] = 1,
    ACTIONS(2066), 1,
      sym_assign_operator,
  [12342] = 1,
    ACTIONS(2068), 1,
      sym_runnable_ref,
  [12346] = 1,
    ACTIONS(2070), 1,
      sym_colon,
  [12350] = 1,
    ACTIONS(2072), 1,
      sym__dedent,
  [12354] = 1,
    ACTIONS(2074), 1,
      sym__dedent,
  [12358] = 1,
    ACTIONS(2076), 1,
      sym_colon,
  [12362] = 1,
    ACTIONS(2056), 1,
      sym_flow_times_keyword,
  [12366] = 1,
    ACTIONS(2078), 1,
      sym_colon,
  [12370] = 1,
    ACTIONS(2080), 1,
      sym_newline,
  [12374] = 1,
    ACTIONS(2082), 1,
      sym_recall_source,
  [12378] = 1,
    ACTIONS(2084), 1,
      sym__dedent,
  [12382] = 1,
    ACTIONS(2086), 1,
      sym_colon,
  [12386] = 1,
    ACTIONS(2088), 1,
      sym__dedent,
  [12390] = 1,
    ACTIONS(2090), 1,
      sym_colon,
  [12394] = 1,
    ACTIONS(2092), 1,
      sym_integer_literal,
  [12398] = 1,
    ACTIONS(1376), 1,
      sym__dedent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 353,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 419,
  [SMALL_STATE(13)] = 459,
  [SMALL_STATE(14)] = 485,
  [SMALL_STATE(15)] = 518,
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 584,
  [SMALL_STATE(18)] = 617,
  [SMALL_STATE(19)] = 649,
  [SMALL_STATE(20)] = 681,
  [SMALL_STATE(21)] = 712,
  [SMALL_STATE(22)] = 743,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 805,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 855,
  [SMALL_STATE(27)] = 881,
  [SMALL_STATE(28)] = 907,
  [SMALL_STATE(29)] = 931,
  [SMALL_STATE(30)] = 955,
  [SMALL_STATE(31)] = 979,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1029,
  [SMALL_STATE(34)] = 1055,
  [SMALL_STATE(35)] = 1081,
  [SMALL_STATE(36)] = 1107,
  [SMALL_STATE(37)] = 1133,
  [SMALL_STATE(38)] = 1159,
  [SMALL_STATE(39)] = 1185,
  [SMALL_STATE(40)] = 1211,
  [SMALL_STATE(41)] = 1235,
  [SMALL_STATE(42)] = 1261,
  [SMALL_STATE(43)] = 1282,
  [SMALL_STATE(44)] = 1305,
  [SMALL_STATE(45)] = 1324,
  [SMALL_STATE(46)] = 1343,
  [SMALL_STATE(47)] = 1362,
  [SMALL_STATE(48)] = 1381,
  [SMALL_STATE(49)] = 1400,
  [SMALL_STATE(50)] = 1419,
  [SMALL_STATE(51)] = 1438,
  [SMALL_STATE(52)] = 1461,
  [SMALL_STATE(53)] = 1484,
  [SMALL_STATE(54)] = 1507,
  [SMALL_STATE(55)] = 1532,
  [SMALL_STATE(56)] = 1557,
  [SMALL_STATE(57)] = 1580,
  [SMALL_STATE(58)] = 1603,
  [SMALL_STATE(59)] = 1626,
  [SMALL_STATE(60)] = 1645,
  [SMALL_STATE(61)] = 1670,
  [SMALL_STATE(62)] = 1693,
  [SMALL_STATE(63)] = 1714,
  [SMALL_STATE(64)] = 1739,
  [SMALL_STATE(65)] = 1760,
  [SMALL_STATE(66)] = 1779,
  [SMALL_STATE(67)] = 1802,
  [SMALL_STATE(68)] = 1823,
  [SMALL_STATE(69)] = 1846,
  [SMALL_STATE(70)] = 1865,
  [SMALL_STATE(71)] = 1888,
  [SMALL_STATE(72)] = 1911,
  [SMALL_STATE(73)] = 1934,
  [SMALL_STATE(74)] = 1957,
  [SMALL_STATE(75)] = 1976,
  [SMALL_STATE(76)] = 1999,
  [SMALL_STATE(77)] = 2020,
  [SMALL_STATE(78)] = 2038,
  [SMALL_STATE(79)] = 2056,
  [SMALL_STATE(80)] = 2078,
  [SMALL_STATE(81)] = 2096,
  [SMALL_STATE(82)] = 2116,
  [SMALL_STATE(83)] = 2134,
  [SMALL_STATE(84)] = 2152,
  [SMALL_STATE(85)] = 2170,
  [SMALL_STATE(86)] = 2188,
  [SMALL_STATE(87)] = 2206,
  [SMALL_STATE(88)] = 2228,
  [SMALL_STATE(89)] = 2248,
  [SMALL_STATE(90)] = 2270,
  [SMALL_STATE(91)] = 2288,
  [SMALL_STATE(92)] = 2306,
  [SMALL_STATE(93)] = 2328,
  [SMALL_STATE(94)] = 2348,
  [SMALL_STATE(95)] = 2366,
  [SMALL_STATE(96)] = 2386,
  [SMALL_STATE(97)] = 2408,
  [SMALL_STATE(98)] = 2426,
  [SMALL_STATE(99)] = 2448,
  [SMALL_STATE(100)] = 2470,
  [SMALL_STATE(101)] = 2490,
  [SMALL_STATE(102)] = 2512,
  [SMALL_STATE(103)] = 2530,
  [SMALL_STATE(104)] = 2552,
  [SMALL_STATE(105)] = 2570,
  [SMALL_STATE(106)] = 2590,
  [SMALL_STATE(107)] = 2610,
  [SMALL_STATE(108)] = 2628,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2672,
  [SMALL_STATE(111)] = 2694,
  [SMALL_STATE(112)] = 2712,
  [SMALL_STATE(113)] = 2732,
  [SMALL_STATE(114)] = 2750,
  [SMALL_STATE(115)] = 2768,
  [SMALL_STATE(116)] = 2784,
  [SMALL_STATE(117)] = 2802,
  [SMALL_STATE(118)] = 2820,
  [SMALL_STATE(119)] = 2834,
  [SMALL_STATE(120)] = 2848,
  [SMALL_STATE(121)] = 2866,
  [SMALL_STATE(122)] = 2886,
  [SMALL_STATE(123)] = 2906,
  [SMALL_STATE(124)] = 2926,
  [SMALL_STATE(125)] = 2944,
  [SMALL_STATE(126)] = 2962,
  [SMALL_STATE(127)] = 2982,
  [SMALL_STATE(128)] = 3000,
  [SMALL_STATE(129)] = 3018,
  [SMALL_STATE(130)] = 3036,
  [SMALL_STATE(131)] = 3054,
  [SMALL_STATE(132)] = 3076,
  [SMALL_STATE(133)] = 3094,
  [SMALL_STATE(134)] = 3112,
  [SMALL_STATE(135)] = 3134,
  [SMALL_STATE(136)] = 3154,
  [SMALL_STATE(137)] = 3176,
  [SMALL_STATE(138)] = 3196,
  [SMALL_STATE(139)] = 3218,
  [SMALL_STATE(140)] = 3240,
  [SMALL_STATE(141)] = 3258,
  [SMALL_STATE(142)] = 3278,
  [SMALL_STATE(143)] = 3300,
  [SMALL_STATE(144)] = 3318,
  [SMALL_STATE(145)] = 3340,
  [SMALL_STATE(146)] = 3362,
  [SMALL_STATE(147)] = 3384,
  [SMALL_STATE(148)] = 3402,
  [SMALL_STATE(149)] = 3424,
  [SMALL_STATE(150)] = 3442,
  [SMALL_STATE(151)] = 3460,
  [SMALL_STATE(152)] = 3478,
  [SMALL_STATE(153)] = 3496,
  [SMALL_STATE(154)] = 3514,
  [SMALL_STATE(155)] = 3532,
  [SMALL_STATE(156)] = 3550,
  [SMALL_STATE(157)] = 3568,
  [SMALL_STATE(158)] = 3588,
  [SMALL_STATE(159)] = 3608,
  [SMALL_STATE(160)] = 3628,
  [SMALL_STATE(161)] = 3648,
  [SMALL_STATE(162)] = 3668,
  [SMALL_STATE(163)] = 3688,
  [SMALL_STATE(164)] = 3707,
  [SMALL_STATE(165)] = 3724,
  [SMALL_STATE(166)] = 3743,
  [SMALL_STATE(167)] = 3756,
  [SMALL_STATE(168)] = 3773,
  [SMALL_STATE(169)] = 3790,
  [SMALL_STATE(170)] = 3809,
  [SMALL_STATE(171)] = 3826,
  [SMALL_STATE(172)] = 3843,
  [SMALL_STATE(173)] = 3860,
  [SMALL_STATE(174)] = 3877,
  [SMALL_STATE(175)] = 3894,
  [SMALL_STATE(176)] = 3913,
  [SMALL_STATE(177)] = 3926,
  [SMALL_STATE(178)] = 3945,
  [SMALL_STATE(179)] = 3964,
  [SMALL_STATE(180)] = 3981,
  [SMALL_STATE(181)] = 3998,
  [SMALL_STATE(182)] = 4017,
  [SMALL_STATE(183)] = 4026,
  [SMALL_STATE(184)] = 4039,
  [SMALL_STATE(185)] = 4052,
  [SMALL_STATE(186)] = 4061,
  [SMALL_STATE(187)] = 4078,
  [SMALL_STATE(188)] = 4097,
  [SMALL_STATE(189)] = 4114,
  [SMALL_STATE(190)] = 4131,
  [SMALL_STATE(191)] = 4146,
  [SMALL_STATE(192)] = 4163,
  [SMALL_STATE(193)] = 4172,
  [SMALL_STATE(194)] = 4189,
  [SMALL_STATE(195)] = 4206,
  [SMALL_STATE(196)] = 4225,
  [SMALL_STATE(197)] = 4244,
  [SMALL_STATE(198)] = 4261,
  [SMALL_STATE(199)] = 4278,
  [SMALL_STATE(200)] = 4295,
  [SMALL_STATE(201)] = 4314,
  [SMALL_STATE(202)] = 4331,
  [SMALL_STATE(203)] = 4348,
  [SMALL_STATE(204)] = 4365,
  [SMALL_STATE(205)] = 4384,
  [SMALL_STATE(206)] = 4403,
  [SMALL_STATE(207)] = 4418,
  [SMALL_STATE(208)] = 4433,
  [SMALL_STATE(209)] = 4448,
  [SMALL_STATE(210)] = 4463,
  [SMALL_STATE(211)] = 4472,
  [SMALL_STATE(212)] = 4491,
  [SMALL_STATE(213)] = 4506,
  [SMALL_STATE(214)] = 4515,
  [SMALL_STATE(215)] = 4532,
  [SMALL_STATE(216)] = 4551,
  [SMALL_STATE(217)] = 4568,
  [SMALL_STATE(218)] = 4585,
  [SMALL_STATE(219)] = 4604,
  [SMALL_STATE(220)] = 4621,
  [SMALL_STATE(221)] = 4638,
  [SMALL_STATE(222)] = 4652,
  [SMALL_STATE(223)] = 4660,
  [SMALL_STATE(224)] = 4676,
  [SMALL_STATE(225)] = 4684,
  [SMALL_STATE(226)] = 4700,
  [SMALL_STATE(227)] = 4708,
  [SMALL_STATE(228)] = 4716,
  [SMALL_STATE(229)] = 4724,
  [SMALL_STATE(230)] = 4732,
  [SMALL_STATE(231)] = 4740,
  [SMALL_STATE(232)] = 4748,
  [SMALL_STATE(233)] = 4756,
  [SMALL_STATE(234)] = 4764,
  [SMALL_STATE(235)] = 4772,
  [SMALL_STATE(236)] = 4780,
  [SMALL_STATE(237)] = 4788,
  [SMALL_STATE(238)] = 4796,
  [SMALL_STATE(239)] = 4804,
  [SMALL_STATE(240)] = 4812,
  [SMALL_STATE(241)] = 4820,
  [SMALL_STATE(242)] = 4828,
  [SMALL_STATE(243)] = 4836,
  [SMALL_STATE(244)] = 4844,
  [SMALL_STATE(245)] = 4852,
  [SMALL_STATE(246)] = 4860,
  [SMALL_STATE(247)] = 4868,
  [SMALL_STATE(248)] = 4876,
  [SMALL_STATE(249)] = 4884,
  [SMALL_STATE(250)] = 4892,
  [SMALL_STATE(251)] = 4900,
  [SMALL_STATE(252)] = 4908,
  [SMALL_STATE(253)] = 4916,
  [SMALL_STATE(254)] = 4924,
  [SMALL_STATE(255)] = 4932,
  [SMALL_STATE(256)] = 4940,
  [SMALL_STATE(257)] = 4948,
  [SMALL_STATE(258)] = 4956,
  [SMALL_STATE(259)] = 4964,
  [SMALL_STATE(260)] = 4972,
  [SMALL_STATE(261)] = 4980,
  [SMALL_STATE(262)] = 4988,
  [SMALL_STATE(263)] = 4996,
  [SMALL_STATE(264)] = 5004,
  [SMALL_STATE(265)] = 5012,
  [SMALL_STATE(266)] = 5020,
  [SMALL_STATE(267)] = 5028,
  [SMALL_STATE(268)] = 5036,
  [SMALL_STATE(269)] = 5044,
  [SMALL_STATE(270)] = 5052,
  [SMALL_STATE(271)] = 5060,
  [SMALL_STATE(272)] = 5068,
  [SMALL_STATE(273)] = 5076,
  [SMALL_STATE(274)] = 5090,
  [SMALL_STATE(275)] = 5098,
  [SMALL_STATE(276)] = 5106,
  [SMALL_STATE(277)] = 5114,
  [SMALL_STATE(278)] = 5122,
  [SMALL_STATE(279)] = 5130,
  [SMALL_STATE(280)] = 5138,
  [SMALL_STATE(281)] = 5146,
  [SMALL_STATE(282)] = 5154,
  [SMALL_STATE(283)] = 5162,
  [SMALL_STATE(284)] = 5176,
  [SMALL_STATE(285)] = 5184,
  [SMALL_STATE(286)] = 5192,
  [SMALL_STATE(287)] = 5200,
  [SMALL_STATE(288)] = 5208,
  [SMALL_STATE(289)] = 5222,
  [SMALL_STATE(290)] = 5230,
  [SMALL_STATE(291)] = 5238,
  [SMALL_STATE(292)] = 5246,
  [SMALL_STATE(293)] = 5254,
  [SMALL_STATE(294)] = 5262,
  [SMALL_STATE(295)] = 5270,
  [SMALL_STATE(296)] = 5284,
  [SMALL_STATE(297)] = 5292,
  [SMALL_STATE(298)] = 5300,
  [SMALL_STATE(299)] = 5314,
  [SMALL_STATE(300)] = 5322,
  [SMALL_STATE(301)] = 5330,
  [SMALL_STATE(302)] = 5338,
  [SMALL_STATE(303)] = 5346,
  [SMALL_STATE(304)] = 5354,
  [SMALL_STATE(305)] = 5362,
  [SMALL_STATE(306)] = 5370,
  [SMALL_STATE(307)] = 5378,
  [SMALL_STATE(308)] = 5392,
  [SMALL_STATE(309)] = 5400,
  [SMALL_STATE(310)] = 5408,
  [SMALL_STATE(311)] = 5416,
  [SMALL_STATE(312)] = 5424,
  [SMALL_STATE(313)] = 5438,
  [SMALL_STATE(314)] = 5446,
  [SMALL_STATE(315)] = 5454,
  [SMALL_STATE(316)] = 5462,
  [SMALL_STATE(317)] = 5470,
  [SMALL_STATE(318)] = 5478,
  [SMALL_STATE(319)] = 5486,
  [SMALL_STATE(320)] = 5494,
  [SMALL_STATE(321)] = 5502,
  [SMALL_STATE(322)] = 5510,
  [SMALL_STATE(323)] = 5518,
  [SMALL_STATE(324)] = 5526,
  [SMALL_STATE(325)] = 5534,
  [SMALL_STATE(326)] = 5542,
  [SMALL_STATE(327)] = 5550,
  [SMALL_STATE(328)] = 5558,
  [SMALL_STATE(329)] = 5566,
  [SMALL_STATE(330)] = 5574,
  [SMALL_STATE(331)] = 5582,
  [SMALL_STATE(332)] = 5590,
  [SMALL_STATE(333)] = 5598,
  [SMALL_STATE(334)] = 5606,
  [SMALL_STATE(335)] = 5614,
  [SMALL_STATE(336)] = 5624,
  [SMALL_STATE(337)] = 5632,
  [SMALL_STATE(338)] = 5648,
  [SMALL_STATE(339)] = 5662,
  [SMALL_STATE(340)] = 5670,
  [SMALL_STATE(341)] = 5678,
  [SMALL_STATE(342)] = 5686,
  [SMALL_STATE(343)] = 5694,
  [SMALL_STATE(344)] = 5702,
  [SMALL_STATE(345)] = 5710,
  [SMALL_STATE(346)] = 5718,
  [SMALL_STATE(347)] = 5726,
  [SMALL_STATE(348)] = 5734,
  [SMALL_STATE(349)] = 5742,
  [SMALL_STATE(350)] = 5750,
  [SMALL_STATE(351)] = 5764,
  [SMALL_STATE(352)] = 5772,
  [SMALL_STATE(353)] = 5780,
  [SMALL_STATE(354)] = 5788,
  [SMALL_STATE(355)] = 5796,
  [SMALL_STATE(356)] = 5804,
  [SMALL_STATE(357)] = 5812,
  [SMALL_STATE(358)] = 5820,
  [SMALL_STATE(359)] = 5828,
  [SMALL_STATE(360)] = 5842,
  [SMALL_STATE(361)] = 5856,
  [SMALL_STATE(362)] = 5864,
  [SMALL_STATE(363)] = 5872,
  [SMALL_STATE(364)] = 5880,
  [SMALL_STATE(365)] = 5888,
  [SMALL_STATE(366)] = 5896,
  [SMALL_STATE(367)] = 5904,
  [SMALL_STATE(368)] = 5912,
  [SMALL_STATE(369)] = 5920,
  [SMALL_STATE(370)] = 5928,
  [SMALL_STATE(371)] = 5936,
  [SMALL_STATE(372)] = 5944,
  [SMALL_STATE(373)] = 5952,
  [SMALL_STATE(374)] = 5960,
  [SMALL_STATE(375)] = 5968,
  [SMALL_STATE(376)] = 5984,
  [SMALL_STATE(377)] = 6000,
  [SMALL_STATE(378)] = 6014,
  [SMALL_STATE(379)] = 6028,
  [SMALL_STATE(380)] = 6042,
  [SMALL_STATE(381)] = 6056,
  [SMALL_STATE(382)] = 6070,
  [SMALL_STATE(383)] = 6078,
  [SMALL_STATE(384)] = 6094,
  [SMALL_STATE(385)] = 6102,
  [SMALL_STATE(386)] = 6118,
  [SMALL_STATE(387)] = 6134,
  [SMALL_STATE(388)] = 6150,
  [SMALL_STATE(389)] = 6166,
  [SMALL_STATE(390)] = 6182,
  [SMALL_STATE(391)] = 6198,
  [SMALL_STATE(392)] = 6214,
  [SMALL_STATE(393)] = 6230,
  [SMALL_STATE(394)] = 6244,
  [SMALL_STATE(395)] = 6260,
  [SMALL_STATE(396)] = 6274,
  [SMALL_STATE(397)] = 6290,
  [SMALL_STATE(398)] = 6306,
  [SMALL_STATE(399)] = 6322,
  [SMALL_STATE(400)] = 6334,
  [SMALL_STATE(401)] = 6350,
  [SMALL_STATE(402)] = 6364,
  [SMALL_STATE(403)] = 6380,
  [SMALL_STATE(404)] = 6396,
  [SMALL_STATE(405)] = 6412,
  [SMALL_STATE(406)] = 6428,
  [SMALL_STATE(407)] = 6436,
  [SMALL_STATE(408)] = 6444,
  [SMALL_STATE(409)] = 6460,
  [SMALL_STATE(410)] = 6476,
  [SMALL_STATE(411)] = 6490,
  [SMALL_STATE(412)] = 6504,
  [SMALL_STATE(413)] = 6518,
  [SMALL_STATE(414)] = 6534,
  [SMALL_STATE(415)] = 6550,
  [SMALL_STATE(416)] = 6564,
  [SMALL_STATE(417)] = 6578,
  [SMALL_STATE(418)] = 6586,
  [SMALL_STATE(419)] = 6598,
  [SMALL_STATE(420)] = 6614,
  [SMALL_STATE(421)] = 6628,
  [SMALL_STATE(422)] = 6640,
  [SMALL_STATE(423)] = 6652,
  [SMALL_STATE(424)] = 6666,
  [SMALL_STATE(425)] = 6680,
  [SMALL_STATE(426)] = 6688,
  [SMALL_STATE(427)] = 6702,
  [SMALL_STATE(428)] = 6716,
  [SMALL_STATE(429)] = 6730,
  [SMALL_STATE(430)] = 6744,
  [SMALL_STATE(431)] = 6760,
  [SMALL_STATE(432)] = 6776,
  [SMALL_STATE(433)] = 6792,
  [SMALL_STATE(434)] = 6808,
  [SMALL_STATE(435)] = 6824,
  [SMALL_STATE(436)] = 6840,
  [SMALL_STATE(437)] = 6856,
  [SMALL_STATE(438)] = 6870,
  [SMALL_STATE(439)] = 6884,
  [SMALL_STATE(440)] = 6898,
  [SMALL_STATE(441)] = 6912,
  [SMALL_STATE(442)] = 6926,
  [SMALL_STATE(443)] = 6940,
  [SMALL_STATE(444)] = 6954,
  [SMALL_STATE(445)] = 6968,
  [SMALL_STATE(446)] = 6984,
  [SMALL_STATE(447)] = 7000,
  [SMALL_STATE(448)] = 7014,
  [SMALL_STATE(449)] = 7030,
  [SMALL_STATE(450)] = 7038,
  [SMALL_STATE(451)] = 7052,
  [SMALL_STATE(452)] = 7066,
  [SMALL_STATE(453)] = 7074,
  [SMALL_STATE(454)] = 7088,
  [SMALL_STATE(455)] = 7102,
  [SMALL_STATE(456)] = 7110,
  [SMALL_STATE(457)] = 7118,
  [SMALL_STATE(458)] = 7126,
  [SMALL_STATE(459)] = 7134,
  [SMALL_STATE(460)] = 7148,
  [SMALL_STATE(461)] = 7164,
  [SMALL_STATE(462)] = 7172,
  [SMALL_STATE(463)] = 7186,
  [SMALL_STATE(464)] = 7194,
  [SMALL_STATE(465)] = 7208,
  [SMALL_STATE(466)] = 7220,
  [SMALL_STATE(467)] = 7236,
  [SMALL_STATE(468)] = 7244,
  [SMALL_STATE(469)] = 7260,
  [SMALL_STATE(470)] = 7268,
  [SMALL_STATE(471)] = 7276,
  [SMALL_STATE(472)] = 7284,
  [SMALL_STATE(473)] = 7292,
  [SMALL_STATE(474)] = 7300,
  [SMALL_STATE(475)] = 7314,
  [SMALL_STATE(476)] = 7328,
  [SMALL_STATE(477)] = 7342,
  [SMALL_STATE(478)] = 7350,
  [SMALL_STATE(479)] = 7358,
  [SMALL_STATE(480)] = 7365,
  [SMALL_STATE(481)] = 7372,
  [SMALL_STATE(482)] = 7379,
  [SMALL_STATE(483)] = 7390,
  [SMALL_STATE(484)] = 7397,
  [SMALL_STATE(485)] = 7404,
  [SMALL_STATE(486)] = 7411,
  [SMALL_STATE(487)] = 7418,
  [SMALL_STATE(488)] = 7425,
  [SMALL_STATE(489)] = 7432,
  [SMALL_STATE(490)] = 7439,
  [SMALL_STATE(491)] = 7452,
  [SMALL_STATE(492)] = 7459,
  [SMALL_STATE(493)] = 7466,
  [SMALL_STATE(494)] = 7473,
  [SMALL_STATE(495)] = 7480,
  [SMALL_STATE(496)] = 7487,
  [SMALL_STATE(497)] = 7494,
  [SMALL_STATE(498)] = 7501,
  [SMALL_STATE(499)] = 7508,
  [SMALL_STATE(500)] = 7519,
  [SMALL_STATE(501)] = 7526,
  [SMALL_STATE(502)] = 7533,
  [SMALL_STATE(503)] = 7544,
  [SMALL_STATE(504)] = 7555,
  [SMALL_STATE(505)] = 7562,
  [SMALL_STATE(506)] = 7569,
  [SMALL_STATE(507)] = 7576,
  [SMALL_STATE(508)] = 7583,
  [SMALL_STATE(509)] = 7590,
  [SMALL_STATE(510)] = 7597,
  [SMALL_STATE(511)] = 7604,
  [SMALL_STATE(512)] = 7615,
  [SMALL_STATE(513)] = 7622,
  [SMALL_STATE(514)] = 7633,
  [SMALL_STATE(515)] = 7640,
  [SMALL_STATE(516)] = 7647,
  [SMALL_STATE(517)] = 7654,
  [SMALL_STATE(518)] = 7661,
  [SMALL_STATE(519)] = 7668,
  [SMALL_STATE(520)] = 7675,
  [SMALL_STATE(521)] = 7682,
  [SMALL_STATE(522)] = 7689,
  [SMALL_STATE(523)] = 7696,
  [SMALL_STATE(524)] = 7703,
  [SMALL_STATE(525)] = 7710,
  [SMALL_STATE(526)] = 7717,
  [SMALL_STATE(527)] = 7724,
  [SMALL_STATE(528)] = 7731,
  [SMALL_STATE(529)] = 7738,
  [SMALL_STATE(530)] = 7745,
  [SMALL_STATE(531)] = 7752,
  [SMALL_STATE(532)] = 7765,
  [SMALL_STATE(533)] = 7778,
  [SMALL_STATE(534)] = 7785,
  [SMALL_STATE(535)] = 7792,
  [SMALL_STATE(536)] = 7799,
  [SMALL_STATE(537)] = 7806,
  [SMALL_STATE(538)] = 7813,
  [SMALL_STATE(539)] = 7820,
  [SMALL_STATE(540)] = 7827,
  [SMALL_STATE(541)] = 7834,
  [SMALL_STATE(542)] = 7841,
  [SMALL_STATE(543)] = 7848,
  [SMALL_STATE(544)] = 7855,
  [SMALL_STATE(545)] = 7862,
  [SMALL_STATE(546)] = 7869,
  [SMALL_STATE(547)] = 7880,
  [SMALL_STATE(548)] = 7887,
  [SMALL_STATE(549)] = 7898,
  [SMALL_STATE(550)] = 7905,
  [SMALL_STATE(551)] = 7912,
  [SMALL_STATE(552)] = 7919,
  [SMALL_STATE(553)] = 7926,
  [SMALL_STATE(554)] = 7933,
  [SMALL_STATE(555)] = 7940,
  [SMALL_STATE(556)] = 7947,
  [SMALL_STATE(557)] = 7954,
  [SMALL_STATE(558)] = 7961,
  [SMALL_STATE(559)] = 7968,
  [SMALL_STATE(560)] = 7975,
  [SMALL_STATE(561)] = 7982,
  [SMALL_STATE(562)] = 7989,
  [SMALL_STATE(563)] = 7996,
  [SMALL_STATE(564)] = 8003,
  [SMALL_STATE(565)] = 8010,
  [SMALL_STATE(566)] = 8017,
  [SMALL_STATE(567)] = 8024,
  [SMALL_STATE(568)] = 8031,
  [SMALL_STATE(569)] = 8038,
  [SMALL_STATE(570)] = 8045,
  [SMALL_STATE(571)] = 8052,
  [SMALL_STATE(572)] = 8063,
  [SMALL_STATE(573)] = 8070,
  [SMALL_STATE(574)] = 8077,
  [SMALL_STATE(575)] = 8088,
  [SMALL_STATE(576)] = 8099,
  [SMALL_STATE(577)] = 8110,
  [SMALL_STATE(578)] = 8123,
  [SMALL_STATE(579)] = 8130,
  [SMALL_STATE(580)] = 8137,
  [SMALL_STATE(581)] = 8150,
  [SMALL_STATE(582)] = 8157,
  [SMALL_STATE(583)] = 8164,
  [SMALL_STATE(584)] = 8171,
  [SMALL_STATE(585)] = 8178,
  [SMALL_STATE(586)] = 8185,
  [SMALL_STATE(587)] = 8198,
  [SMALL_STATE(588)] = 8205,
  [SMALL_STATE(589)] = 8212,
  [SMALL_STATE(590)] = 8225,
  [SMALL_STATE(591)] = 8232,
  [SMALL_STATE(592)] = 8245,
  [SMALL_STATE(593)] = 8256,
  [SMALL_STATE(594)] = 8269,
  [SMALL_STATE(595)] = 8282,
  [SMALL_STATE(596)] = 8295,
  [SMALL_STATE(597)] = 8306,
  [SMALL_STATE(598)] = 8317,
  [SMALL_STATE(599)] = 8324,
  [SMALL_STATE(600)] = 8331,
  [SMALL_STATE(601)] = 8338,
  [SMALL_STATE(602)] = 8345,
  [SMALL_STATE(603)] = 8352,
  [SMALL_STATE(604)] = 8359,
  [SMALL_STATE(605)] = 8366,
  [SMALL_STATE(606)] = 8373,
  [SMALL_STATE(607)] = 8380,
  [SMALL_STATE(608)] = 8387,
  [SMALL_STATE(609)] = 8394,
  [SMALL_STATE(610)] = 8401,
  [SMALL_STATE(611)] = 8408,
  [SMALL_STATE(612)] = 8415,
  [SMALL_STATE(613)] = 8426,
  [SMALL_STATE(614)] = 8437,
  [SMALL_STATE(615)] = 8444,
  [SMALL_STATE(616)] = 8451,
  [SMALL_STATE(617)] = 8462,
  [SMALL_STATE(618)] = 8469,
  [SMALL_STATE(619)] = 8476,
  [SMALL_STATE(620)] = 8489,
  [SMALL_STATE(621)] = 8502,
  [SMALL_STATE(622)] = 8513,
  [SMALL_STATE(623)] = 8520,
  [SMALL_STATE(624)] = 8533,
  [SMALL_STATE(625)] = 8544,
  [SMALL_STATE(626)] = 8551,
  [SMALL_STATE(627)] = 8558,
  [SMALL_STATE(628)] = 8565,
  [SMALL_STATE(629)] = 8572,
  [SMALL_STATE(630)] = 8579,
  [SMALL_STATE(631)] = 8586,
  [SMALL_STATE(632)] = 8593,
  [SMALL_STATE(633)] = 8600,
  [SMALL_STATE(634)] = 8607,
  [SMALL_STATE(635)] = 8616,
  [SMALL_STATE(636)] = 8623,
  [SMALL_STATE(637)] = 8630,
  [SMALL_STATE(638)] = 8637,
  [SMALL_STATE(639)] = 8644,
  [SMALL_STATE(640)] = 8651,
  [SMALL_STATE(641)] = 8658,
  [SMALL_STATE(642)] = 8665,
  [SMALL_STATE(643)] = 8672,
  [SMALL_STATE(644)] = 8683,
  [SMALL_STATE(645)] = 8690,
  [SMALL_STATE(646)] = 8697,
  [SMALL_STATE(647)] = 8704,
  [SMALL_STATE(648)] = 8711,
  [SMALL_STATE(649)] = 8718,
  [SMALL_STATE(650)] = 8729,
  [SMALL_STATE(651)] = 8736,
  [SMALL_STATE(652)] = 8743,
  [SMALL_STATE(653)] = 8750,
  [SMALL_STATE(654)] = 8757,
  [SMALL_STATE(655)] = 8770,
  [SMALL_STATE(656)] = 8777,
  [SMALL_STATE(657)] = 8784,
  [SMALL_STATE(658)] = 8791,
  [SMALL_STATE(659)] = 8798,
  [SMALL_STATE(660)] = 8805,
  [SMALL_STATE(661)] = 8812,
  [SMALL_STATE(662)] = 8823,
  [SMALL_STATE(663)] = 8830,
  [SMALL_STATE(664)] = 8837,
  [SMALL_STATE(665)] = 8844,
  [SMALL_STATE(666)] = 8851,
  [SMALL_STATE(667)] = 8858,
  [SMALL_STATE(668)] = 8865,
  [SMALL_STATE(669)] = 8872,
  [SMALL_STATE(670)] = 8879,
  [SMALL_STATE(671)] = 8886,
  [SMALL_STATE(672)] = 8893,
  [SMALL_STATE(673)] = 8900,
  [SMALL_STATE(674)] = 8907,
  [SMALL_STATE(675)] = 8914,
  [SMALL_STATE(676)] = 8921,
  [SMALL_STATE(677)] = 8928,
  [SMALL_STATE(678)] = 8939,
  [SMALL_STATE(679)] = 8946,
  [SMALL_STATE(680)] = 8953,
  [SMALL_STATE(681)] = 8960,
  [SMALL_STATE(682)] = 8967,
  [SMALL_STATE(683)] = 8974,
  [SMALL_STATE(684)] = 8981,
  [SMALL_STATE(685)] = 8988,
  [SMALL_STATE(686)] = 8999,
  [SMALL_STATE(687)] = 9006,
  [SMALL_STATE(688)] = 9013,
  [SMALL_STATE(689)] = 9026,
  [SMALL_STATE(690)] = 9033,
  [SMALL_STATE(691)] = 9040,
  [SMALL_STATE(692)] = 9047,
  [SMALL_STATE(693)] = 9054,
  [SMALL_STATE(694)] = 9065,
  [SMALL_STATE(695)] = 9072,
  [SMALL_STATE(696)] = 9079,
  [SMALL_STATE(697)] = 9090,
  [SMALL_STATE(698)] = 9101,
  [SMALL_STATE(699)] = 9108,
  [SMALL_STATE(700)] = 9115,
  [SMALL_STATE(701)] = 9122,
  [SMALL_STATE(702)] = 9129,
  [SMALL_STATE(703)] = 9136,
  [SMALL_STATE(704)] = 9149,
  [SMALL_STATE(705)] = 9156,
  [SMALL_STATE(706)] = 9163,
  [SMALL_STATE(707)] = 9170,
  [SMALL_STATE(708)] = 9177,
  [SMALL_STATE(709)] = 9184,
  [SMALL_STATE(710)] = 9191,
  [SMALL_STATE(711)] = 9198,
  [SMALL_STATE(712)] = 9205,
  [SMALL_STATE(713)] = 9212,
  [SMALL_STATE(714)] = 9219,
  [SMALL_STATE(715)] = 9226,
  [SMALL_STATE(716)] = 9233,
  [SMALL_STATE(717)] = 9240,
  [SMALL_STATE(718)] = 9247,
  [SMALL_STATE(719)] = 9254,
  [SMALL_STATE(720)] = 9261,
  [SMALL_STATE(721)] = 9268,
  [SMALL_STATE(722)] = 9275,
  [SMALL_STATE(723)] = 9282,
  [SMALL_STATE(724)] = 9289,
  [SMALL_STATE(725)] = 9302,
  [SMALL_STATE(726)] = 9309,
  [SMALL_STATE(727)] = 9316,
  [SMALL_STATE(728)] = 9323,
  [SMALL_STATE(729)] = 9336,
  [SMALL_STATE(730)] = 9347,
  [SMALL_STATE(731)] = 9360,
  [SMALL_STATE(732)] = 9367,
  [SMALL_STATE(733)] = 9374,
  [SMALL_STATE(734)] = 9381,
  [SMALL_STATE(735)] = 9388,
  [SMALL_STATE(736)] = 9399,
  [SMALL_STATE(737)] = 9410,
  [SMALL_STATE(738)] = 9417,
  [SMALL_STATE(739)] = 9428,
  [SMALL_STATE(740)] = 9439,
  [SMALL_STATE(741)] = 9446,
  [SMALL_STATE(742)] = 9459,
  [SMALL_STATE(743)] = 9466,
  [SMALL_STATE(744)] = 9477,
  [SMALL_STATE(745)] = 9484,
  [SMALL_STATE(746)] = 9491,
  [SMALL_STATE(747)] = 9502,
  [SMALL_STATE(748)] = 9513,
  [SMALL_STATE(749)] = 9524,
  [SMALL_STATE(750)] = 9535,
  [SMALL_STATE(751)] = 9546,
  [SMALL_STATE(752)] = 9557,
  [SMALL_STATE(753)] = 9568,
  [SMALL_STATE(754)] = 9579,
  [SMALL_STATE(755)] = 9586,
  [SMALL_STATE(756)] = 9597,
  [SMALL_STATE(757)] = 9607,
  [SMALL_STATE(758)] = 9613,
  [SMALL_STATE(759)] = 9623,
  [SMALL_STATE(760)] = 9633,
  [SMALL_STATE(761)] = 9643,
  [SMALL_STATE(762)] = 9653,
  [SMALL_STATE(763)] = 9663,
  [SMALL_STATE(764)] = 9673,
  [SMALL_STATE(765)] = 9679,
  [SMALL_STATE(766)] = 9689,
  [SMALL_STATE(767)] = 9699,
  [SMALL_STATE(768)] = 9709,
  [SMALL_STATE(769)] = 9719,
  [SMALL_STATE(770)] = 9729,
  [SMALL_STATE(771)] = 9739,
  [SMALL_STATE(772)] = 9749,
  [SMALL_STATE(773)] = 9757,
  [SMALL_STATE(774)] = 9767,
  [SMALL_STATE(775)] = 9775,
  [SMALL_STATE(776)] = 9781,
  [SMALL_STATE(777)] = 9787,
  [SMALL_STATE(778)] = 9797,
  [SMALL_STATE(779)] = 9805,
  [SMALL_STATE(780)] = 9815,
  [SMALL_STATE(781)] = 9821,
  [SMALL_STATE(782)] = 9827,
  [SMALL_STATE(783)] = 9833,
  [SMALL_STATE(784)] = 9843,
  [SMALL_STATE(785)] = 9851,
  [SMALL_STATE(786)] = 9861,
  [SMALL_STATE(787)] = 9867,
  [SMALL_STATE(788)] = 9877,
  [SMALL_STATE(789)] = 9883,
  [SMALL_STATE(790)] = 9889,
  [SMALL_STATE(791)] = 9899,
  [SMALL_STATE(792)] = 9909,
  [SMALL_STATE(793)] = 9915,
  [SMALL_STATE(794)] = 9921,
  [SMALL_STATE(795)] = 9931,
  [SMALL_STATE(796)] = 9937,
  [SMALL_STATE(797)] = 9943,
  [SMALL_STATE(798)] = 9953,
  [SMALL_STATE(799)] = 9963,
  [SMALL_STATE(800)] = 9969,
  [SMALL_STATE(801)] = 9979,
  [SMALL_STATE(802)] = 9989,
  [SMALL_STATE(803)] = 9999,
  [SMALL_STATE(804)] = 10005,
  [SMALL_STATE(805)] = 10011,
  [SMALL_STATE(806)] = 10017,
  [SMALL_STATE(807)] = 10023,
  [SMALL_STATE(808)] = 10029,
  [SMALL_STATE(809)] = 10035,
  [SMALL_STATE(810)] = 10045,
  [SMALL_STATE(811)] = 10051,
  [SMALL_STATE(812)] = 10061,
  [SMALL_STATE(813)] = 10071,
  [SMALL_STATE(814)] = 10077,
  [SMALL_STATE(815)] = 10087,
  [SMALL_STATE(816)] = 10097,
  [SMALL_STATE(817)] = 10107,
  [SMALL_STATE(818)] = 10113,
  [SMALL_STATE(819)] = 10119,
  [SMALL_STATE(820)] = 10125,
  [SMALL_STATE(821)] = 10131,
  [SMALL_STATE(822)] = 10137,
  [SMALL_STATE(823)] = 10143,
  [SMALL_STATE(824)] = 10149,
  [SMALL_STATE(825)] = 10155,
  [SMALL_STATE(826)] = 10163,
  [SMALL_STATE(827)] = 10173,
  [SMALL_STATE(828)] = 10179,
  [SMALL_STATE(829)] = 10185,
  [SMALL_STATE(830)] = 10191,
  [SMALL_STATE(831)] = 10197,
  [SMALL_STATE(832)] = 10203,
  [SMALL_STATE(833)] = 10209,
  [SMALL_STATE(834)] = 10219,
  [SMALL_STATE(835)] = 10229,
  [SMALL_STATE(836)] = 10239,
  [SMALL_STATE(837)] = 10249,
  [SMALL_STATE(838)] = 10259,
  [SMALL_STATE(839)] = 10269,
  [SMALL_STATE(840)] = 10277,
  [SMALL_STATE(841)] = 10287,
  [SMALL_STATE(842)] = 10297,
  [SMALL_STATE(843)] = 10307,
  [SMALL_STATE(844)] = 10317,
  [SMALL_STATE(845)] = 10327,
  [SMALL_STATE(846)] = 10337,
  [SMALL_STATE(847)] = 10347,
  [SMALL_STATE(848)] = 10357,
  [SMALL_STATE(849)] = 10367,
  [SMALL_STATE(850)] = 10377,
  [SMALL_STATE(851)] = 10387,
  [SMALL_STATE(852)] = 10393,
  [SMALL_STATE(853)] = 10403,
  [SMALL_STATE(854)] = 10413,
  [SMALL_STATE(855)] = 10423,
  [SMALL_STATE(856)] = 10433,
  [SMALL_STATE(857)] = 10443,
  [SMALL_STATE(858)] = 10453,
  [SMALL_STATE(859)] = 10463,
  [SMALL_STATE(860)] = 10473,
  [SMALL_STATE(861)] = 10483,
  [SMALL_STATE(862)] = 10493,
  [SMALL_STATE(863)] = 10503,
  [SMALL_STATE(864)] = 10513,
  [SMALL_STATE(865)] = 10519,
  [SMALL_STATE(866)] = 10529,
  [SMALL_STATE(867)] = 10539,
  [SMALL_STATE(868)] = 10549,
  [SMALL_STATE(869)] = 10559,
  [SMALL_STATE(870)] = 10569,
  [SMALL_STATE(871)] = 10579,
  [SMALL_STATE(872)] = 10589,
  [SMALL_STATE(873)] = 10599,
  [SMALL_STATE(874)] = 10609,
  [SMALL_STATE(875)] = 10619,
  [SMALL_STATE(876)] = 10629,
  [SMALL_STATE(877)] = 10639,
  [SMALL_STATE(878)] = 10649,
  [SMALL_STATE(879)] = 10657,
  [SMALL_STATE(880)] = 10667,
  [SMALL_STATE(881)] = 10677,
  [SMALL_STATE(882)] = 10687,
  [SMALL_STATE(883)] = 10697,
  [SMALL_STATE(884)] = 10707,
  [SMALL_STATE(885)] = 10717,
  [SMALL_STATE(886)] = 10727,
  [SMALL_STATE(887)] = 10733,
  [SMALL_STATE(888)] = 10739,
  [SMALL_STATE(889)] = 10749,
  [SMALL_STATE(890)] = 10759,
  [SMALL_STATE(891)] = 10769,
  [SMALL_STATE(892)] = 10779,
  [SMALL_STATE(893)] = 10789,
  [SMALL_STATE(894)] = 10799,
  [SMALL_STATE(895)] = 10809,
  [SMALL_STATE(896)] = 10819,
  [SMALL_STATE(897)] = 10829,
  [SMALL_STATE(898)] = 10839,
  [SMALL_STATE(899)] = 10849,
  [SMALL_STATE(900)] = 10859,
  [SMALL_STATE(901)] = 10869,
  [SMALL_STATE(902)] = 10879,
  [SMALL_STATE(903)] = 10889,
  [SMALL_STATE(904)] = 10899,
  [SMALL_STATE(905)] = 10909,
  [SMALL_STATE(906)] = 10919,
  [SMALL_STATE(907)] = 10929,
  [SMALL_STATE(908)] = 10939,
  [SMALL_STATE(909)] = 10949,
  [SMALL_STATE(910)] = 10959,
  [SMALL_STATE(911)] = 10969,
  [SMALL_STATE(912)] = 10979,
  [SMALL_STATE(913)] = 10987,
  [SMALL_STATE(914)] = 10993,
  [SMALL_STATE(915)] = 11003,
  [SMALL_STATE(916)] = 11013,
  [SMALL_STATE(917)] = 11023,
  [SMALL_STATE(918)] = 11033,
  [SMALL_STATE(919)] = 11039,
  [SMALL_STATE(920)] = 11047,
  [SMALL_STATE(921)] = 11055,
  [SMALL_STATE(922)] = 11065,
  [SMALL_STATE(923)] = 11075,
  [SMALL_STATE(924)] = 11085,
  [SMALL_STATE(925)] = 11093,
  [SMALL_STATE(926)] = 11103,
  [SMALL_STATE(927)] = 11113,
  [SMALL_STATE(928)] = 11123,
  [SMALL_STATE(929)] = 11133,
  [SMALL_STATE(930)] = 11143,
  [SMALL_STATE(931)] = 11153,
  [SMALL_STATE(932)] = 11163,
  [SMALL_STATE(933)] = 11173,
  [SMALL_STATE(934)] = 11183,
  [SMALL_STATE(935)] = 11193,
  [SMALL_STATE(936)] = 11203,
  [SMALL_STATE(937)] = 11210,
  [SMALL_STATE(938)] = 11217,
  [SMALL_STATE(939)] = 11222,
  [SMALL_STATE(940)] = 11227,
  [SMALL_STATE(941)] = 11232,
  [SMALL_STATE(942)] = 11237,
  [SMALL_STATE(943)] = 11244,
  [SMALL_STATE(944)] = 11251,
  [SMALL_STATE(945)] = 11258,
  [SMALL_STATE(946)] = 11265,
  [SMALL_STATE(947)] = 11272,
  [SMALL_STATE(948)] = 11279,
  [SMALL_STATE(949)] = 11286,
  [SMALL_STATE(950)] = 11293,
  [SMALL_STATE(951)] = 11300,
  [SMALL_STATE(952)] = 11307,
  [SMALL_STATE(953)] = 11314,
  [SMALL_STATE(954)] = 11321,
  [SMALL_STATE(955)] = 11328,
  [SMALL_STATE(956)] = 11335,
  [SMALL_STATE(957)] = 11342,
  [SMALL_STATE(958)] = 11349,
  [SMALL_STATE(959)] = 11356,
  [SMALL_STATE(960)] = 11361,
  [SMALL_STATE(961)] = 11368,
  [SMALL_STATE(962)] = 11373,
  [SMALL_STATE(963)] = 11380,
  [SMALL_STATE(964)] = 11387,
  [SMALL_STATE(965)] = 11394,
  [SMALL_STATE(966)] = 11401,
  [SMALL_STATE(967)] = 11408,
  [SMALL_STATE(968)] = 11415,
  [SMALL_STATE(969)] = 11420,
  [SMALL_STATE(970)] = 11427,
  [SMALL_STATE(971)] = 11434,
  [SMALL_STATE(972)] = 11441,
  [SMALL_STATE(973)] = 11448,
  [SMALL_STATE(974)] = 11455,
  [SMALL_STATE(975)] = 11462,
  [SMALL_STATE(976)] = 11469,
  [SMALL_STATE(977)] = 11476,
  [SMALL_STATE(978)] = 11483,
  [SMALL_STATE(979)] = 11490,
  [SMALL_STATE(980)] = 11497,
  [SMALL_STATE(981)] = 11504,
  [SMALL_STATE(982)] = 11511,
  [SMALL_STATE(983)] = 11518,
  [SMALL_STATE(984)] = 11523,
  [SMALL_STATE(985)] = 11528,
  [SMALL_STATE(986)] = 11535,
  [SMALL_STATE(987)] = 11542,
  [SMALL_STATE(988)] = 11549,
  [SMALL_STATE(989)] = 11556,
  [SMALL_STATE(990)] = 11563,
  [SMALL_STATE(991)] = 11570,
  [SMALL_STATE(992)] = 11577,
  [SMALL_STATE(993)] = 11584,
  [SMALL_STATE(994)] = 11589,
  [SMALL_STATE(995)] = 11596,
  [SMALL_STATE(996)] = 11603,
  [SMALL_STATE(997)] = 11608,
  [SMALL_STATE(998)] = 11615,
  [SMALL_STATE(999)] = 11622,
  [SMALL_STATE(1000)] = 11629,
  [SMALL_STATE(1001)] = 11636,
  [SMALL_STATE(1002)] = 11643,
  [SMALL_STATE(1003)] = 11650,
  [SMALL_STATE(1004)] = 11657,
  [SMALL_STATE(1005)] = 11662,
  [SMALL_STATE(1006)] = 11667,
  [SMALL_STATE(1007)] = 11674,
  [SMALL_STATE(1008)] = 11681,
  [SMALL_STATE(1009)] = 11686,
  [SMALL_STATE(1010)] = 11691,
  [SMALL_STATE(1011)] = 11698,
  [SMALL_STATE(1012)] = 11703,
  [SMALL_STATE(1013)] = 11708,
  [SMALL_STATE(1014)] = 11715,
  [SMALL_STATE(1015)] = 11720,
  [SMALL_STATE(1016)] = 11727,
  [SMALL_STATE(1017)] = 11734,
  [SMALL_STATE(1018)] = 11741,
  [SMALL_STATE(1019)] = 11746,
  [SMALL_STATE(1020)] = 11753,
  [SMALL_STATE(1021)] = 11760,
  [SMALL_STATE(1022)] = 11767,
  [SMALL_STATE(1023)] = 11774,
  [SMALL_STATE(1024)] = 11781,
  [SMALL_STATE(1025)] = 11788,
  [SMALL_STATE(1026)] = 11795,
  [SMALL_STATE(1027)] = 11802,
  [SMALL_STATE(1028)] = 11807,
  [SMALL_STATE(1029)] = 11814,
  [SMALL_STATE(1030)] = 11819,
  [SMALL_STATE(1031)] = 11826,
  [SMALL_STATE(1032)] = 11830,
  [SMALL_STATE(1033)] = 11834,
  [SMALL_STATE(1034)] = 11838,
  [SMALL_STATE(1035)] = 11842,
  [SMALL_STATE(1036)] = 11846,
  [SMALL_STATE(1037)] = 11850,
  [SMALL_STATE(1038)] = 11854,
  [SMALL_STATE(1039)] = 11858,
  [SMALL_STATE(1040)] = 11862,
  [SMALL_STATE(1041)] = 11866,
  [SMALL_STATE(1042)] = 11870,
  [SMALL_STATE(1043)] = 11874,
  [SMALL_STATE(1044)] = 11878,
  [SMALL_STATE(1045)] = 11882,
  [SMALL_STATE(1046)] = 11886,
  [SMALL_STATE(1047)] = 11890,
  [SMALL_STATE(1048)] = 11894,
  [SMALL_STATE(1049)] = 11898,
  [SMALL_STATE(1050)] = 11902,
  [SMALL_STATE(1051)] = 11906,
  [SMALL_STATE(1052)] = 11910,
  [SMALL_STATE(1053)] = 11914,
  [SMALL_STATE(1054)] = 11918,
  [SMALL_STATE(1055)] = 11922,
  [SMALL_STATE(1056)] = 11926,
  [SMALL_STATE(1057)] = 11930,
  [SMALL_STATE(1058)] = 11934,
  [SMALL_STATE(1059)] = 11938,
  [SMALL_STATE(1060)] = 11942,
  [SMALL_STATE(1061)] = 11946,
  [SMALL_STATE(1062)] = 11950,
  [SMALL_STATE(1063)] = 11954,
  [SMALL_STATE(1064)] = 11958,
  [SMALL_STATE(1065)] = 11962,
  [SMALL_STATE(1066)] = 11966,
  [SMALL_STATE(1067)] = 11970,
  [SMALL_STATE(1068)] = 11974,
  [SMALL_STATE(1069)] = 11978,
  [SMALL_STATE(1070)] = 11982,
  [SMALL_STATE(1071)] = 11986,
  [SMALL_STATE(1072)] = 11990,
  [SMALL_STATE(1073)] = 11994,
  [SMALL_STATE(1074)] = 11998,
  [SMALL_STATE(1075)] = 12002,
  [SMALL_STATE(1076)] = 12006,
  [SMALL_STATE(1077)] = 12010,
  [SMALL_STATE(1078)] = 12014,
  [SMALL_STATE(1079)] = 12018,
  [SMALL_STATE(1080)] = 12022,
  [SMALL_STATE(1081)] = 12026,
  [SMALL_STATE(1082)] = 12030,
  [SMALL_STATE(1083)] = 12034,
  [SMALL_STATE(1084)] = 12038,
  [SMALL_STATE(1085)] = 12042,
  [SMALL_STATE(1086)] = 12046,
  [SMALL_STATE(1087)] = 12050,
  [SMALL_STATE(1088)] = 12054,
  [SMALL_STATE(1089)] = 12058,
  [SMALL_STATE(1090)] = 12062,
  [SMALL_STATE(1091)] = 12066,
  [SMALL_STATE(1092)] = 12070,
  [SMALL_STATE(1093)] = 12074,
  [SMALL_STATE(1094)] = 12078,
  [SMALL_STATE(1095)] = 12082,
  [SMALL_STATE(1096)] = 12086,
  [SMALL_STATE(1097)] = 12090,
  [SMALL_STATE(1098)] = 12094,
  [SMALL_STATE(1099)] = 12098,
  [SMALL_STATE(1100)] = 12102,
  [SMALL_STATE(1101)] = 12106,
  [SMALL_STATE(1102)] = 12110,
  [SMALL_STATE(1103)] = 12114,
  [SMALL_STATE(1104)] = 12118,
  [SMALL_STATE(1105)] = 12122,
  [SMALL_STATE(1106)] = 12126,
  [SMALL_STATE(1107)] = 12130,
  [SMALL_STATE(1108)] = 12134,
  [SMALL_STATE(1109)] = 12138,
  [SMALL_STATE(1110)] = 12142,
  [SMALL_STATE(1111)] = 12146,
  [SMALL_STATE(1112)] = 12150,
  [SMALL_STATE(1113)] = 12154,
  [SMALL_STATE(1114)] = 12158,
  [SMALL_STATE(1115)] = 12162,
  [SMALL_STATE(1116)] = 12166,
  [SMALL_STATE(1117)] = 12170,
  [SMALL_STATE(1118)] = 12174,
  [SMALL_STATE(1119)] = 12178,
  [SMALL_STATE(1120)] = 12182,
  [SMALL_STATE(1121)] = 12186,
  [SMALL_STATE(1122)] = 12190,
  [SMALL_STATE(1123)] = 12194,
  [SMALL_STATE(1124)] = 12198,
  [SMALL_STATE(1125)] = 12202,
  [SMALL_STATE(1126)] = 12206,
  [SMALL_STATE(1127)] = 12210,
  [SMALL_STATE(1128)] = 12214,
  [SMALL_STATE(1129)] = 12218,
  [SMALL_STATE(1130)] = 12222,
  [SMALL_STATE(1131)] = 12226,
  [SMALL_STATE(1132)] = 12230,
  [SMALL_STATE(1133)] = 12234,
  [SMALL_STATE(1134)] = 12238,
  [SMALL_STATE(1135)] = 12242,
  [SMALL_STATE(1136)] = 12246,
  [SMALL_STATE(1137)] = 12250,
  [SMALL_STATE(1138)] = 12254,
  [SMALL_STATE(1139)] = 12258,
  [SMALL_STATE(1140)] = 12262,
  [SMALL_STATE(1141)] = 12266,
  [SMALL_STATE(1142)] = 12270,
  [SMALL_STATE(1143)] = 12274,
  [SMALL_STATE(1144)] = 12278,
  [SMALL_STATE(1145)] = 12282,
  [SMALL_STATE(1146)] = 12286,
  [SMALL_STATE(1147)] = 12290,
  [SMALL_STATE(1148)] = 12294,
  [SMALL_STATE(1149)] = 12298,
  [SMALL_STATE(1150)] = 12302,
  [SMALL_STATE(1151)] = 12306,
  [SMALL_STATE(1152)] = 12310,
  [SMALL_STATE(1153)] = 12314,
  [SMALL_STATE(1154)] = 12318,
  [SMALL_STATE(1155)] = 12322,
  [SMALL_STATE(1156)] = 12326,
  [SMALL_STATE(1157)] = 12330,
  [SMALL_STATE(1158)] = 12334,
  [SMALL_STATE(1159)] = 12338,
  [SMALL_STATE(1160)] = 12342,
  [SMALL_STATE(1161)] = 12346,
  [SMALL_STATE(1162)] = 12350,
  [SMALL_STATE(1163)] = 12354,
  [SMALL_STATE(1164)] = 12358,
  [SMALL_STATE(1165)] = 12362,
  [SMALL_STATE(1166)] = 12366,
  [SMALL_STATE(1167)] = 12370,
  [SMALL_STATE(1168)] = 12374,
  [SMALL_STATE(1169)] = 12378,
  [SMALL_STATE(1170)] = 12382,
  [SMALL_STATE(1171)] = 12386,
  [SMALL_STATE(1172)] = 12390,
  [SMALL_STATE(1173)] = 12394,
  [SMALL_STATE(1174)] = 12398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1067),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(995),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1128),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1146),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1028),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1121),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1131),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1005),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1073),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1140),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1165),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(801),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(42),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(150),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(963),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 26),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 26),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(957),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1088),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 80),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 86),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(67),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(156),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(4),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(963),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(84),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(152),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(947),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1015),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1107),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(998),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1151),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 26),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 26),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(123),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(152),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1104),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 26),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1080),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 26),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 24),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 26),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 49),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 11),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 11),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(335),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 45),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 51),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 52),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 53),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 38),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 38),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 3, -2, 54),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 55),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 32),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 56),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 51),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 40),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 57),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 43),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 58),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 52),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 43),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 60),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 61),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 61),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 43),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 62),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 37),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 23),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 66),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 67),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 4, 0, 0),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 4, -2, 68),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 69),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 70),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 71),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 72),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 74),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 40),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 60),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 76),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 60),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 52),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 43),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 60),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 47),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 77),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 79),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 5, 0, 0),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 79),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 74),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 76),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 60),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 81),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 82),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 73),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 54),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 6, 0, 54),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(295),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1027] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1167),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 87),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 88),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 54),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 7, 0, 54),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 90),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 94),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 95),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 90),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 97),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 93),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 100),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 101),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 97),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 103),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 104),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 105),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 75),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 10),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 10),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(350),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [1137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 41),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 24),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 67),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(650),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 26),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 80),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1029),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 49),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 30),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 31),
  [1267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [1270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 37),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 38),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 38),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 39),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 40),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 41),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 42),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 43),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 41),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable_name, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 78),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1160),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1168),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 21),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 16),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 47),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 21),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 83),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 16),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 84),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 89),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 96),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 25),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(813),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1066),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 28),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 25),
  [1388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 29),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__param_name, 1, 0, 5),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 28),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 6),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 33),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 36),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 7),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 8),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name, 1, 0, 0),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 91),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 8),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 8),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 51),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 91),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 8),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 9),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 9),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 12),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 36),
  [1474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 2, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 48),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 15),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 50),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 15),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 12),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 16),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 50),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 65),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 24),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_name, 1, 0, 0),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable_name, 1, 0, 0),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 19),
  [1592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 19), SHIFT_REPEAT(661),
  [1595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(816),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 14),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 85),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 52),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 73),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 52),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [1660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 18),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1095),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 59),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 20),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 63),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1139),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 27),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_line, 1, 0, 0),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 44),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 13),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 22),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 29),
  [1890] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 64),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_newline = 0,
  ts_external_token_blank_line = 1,
  ts_external_token__comment_start = 2,
  ts_external_token_plain_comment = 3,
  ts_external_token_shebang_comment = 4,
  ts_external_token__module_doc_start = 5,
  ts_external_token__item_doc_start = 6,
  ts_external_token__param_item_doc_start = 7,
  ts_external_token__comment_end = 8,
  ts_external_token__indent = 9,
  ts_external_token__dedent = 10,
  ts_external_token__line_start = 11,
  ts_external_token__directive_start = 12,
  ts_external_token__until_start = 13,
  ts_external_token__from_start = 14,
  ts_external_token__reduce_indent = 15,
  ts_external_token__reduce_text_start = 16,
  ts_external_token__text_indent = 17,
  ts_external_token__cap_text_start = 18,
  ts_external_token_indented_raw_text = 19,
  ts_external_token__flow_raw_text = 20,
  ts_external_token__agic_raw_text = 21,
  ts_external_token__error_line = 22,
  ts_external_token__exec_binding_start = 23,
  ts_external_token__collection_binding_start = 24,
  ts_external_token__spawn_binding_start = 25,
  ts_external_token__reserved_binding_start = 26,
  ts_external_token__variable_name = 27,
  ts_external_token__async_await_binding_start = 28,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_newline] = sym_newline,
  [ts_external_token_blank_line] = sym_blank_line,
  [ts_external_token__comment_start] = sym__comment_start,
  [ts_external_token_plain_comment] = sym_plain_comment,
  [ts_external_token_shebang_comment] = sym_shebang_comment,
  [ts_external_token__module_doc_start] = sym__module_doc_start,
  [ts_external_token__item_doc_start] = sym__item_doc_start,
  [ts_external_token__param_item_doc_start] = sym__param_item_doc_start,
  [ts_external_token__comment_end] = sym__comment_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__directive_start] = sym__directive_start,
  [ts_external_token__until_start] = sym__until_start,
  [ts_external_token__from_start] = sym__from_start,
  [ts_external_token__reduce_indent] = sym__reduce_indent,
  [ts_external_token__reduce_text_start] = sym__reduce_text_start,
  [ts_external_token__text_indent] = sym__text_indent,
  [ts_external_token__cap_text_start] = sym__cap_text_start,
  [ts_external_token_indented_raw_text] = sym_indented_raw_text,
  [ts_external_token__flow_raw_text] = sym__flow_raw_text,
  [ts_external_token__agic_raw_text] = sym__agic_raw_text,
  [ts_external_token__error_line] = sym__error_line,
  [ts_external_token__exec_binding_start] = sym__exec_binding_start,
  [ts_external_token__collection_binding_start] = sym__collection_binding_start,
  [ts_external_token__spawn_binding_start] = sym__spawn_binding_start,
  [ts_external_token__reserved_binding_start] = sym__reserved_binding_start,
  [ts_external_token__variable_name] = sym__variable_name,
  [ts_external_token__async_await_binding_start] = sym__async_await_binding_start,
};

static const bool ts_external_scanner_states[38][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_newline] = true,
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
    [ts_external_token__comment_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__from_start] = true,
    [ts_external_token__reduce_indent] = true,
    [ts_external_token__reduce_text_start] = true,
    [ts_external_token__text_indent] = true,
    [ts_external_token__cap_text_start] = true,
    [ts_external_token_indented_raw_text] = true,
    [ts_external_token__flow_raw_text] = true,
    [ts_external_token__agic_raw_text] = true,
    [ts_external_token__error_line] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__collection_binding_start] = true,
    [ts_external_token__spawn_binding_start] = true,
    [ts_external_token__reserved_binding_start] = true,
    [ts_external_token__variable_name] = true,
    [ts_external_token__async_await_binding_start] = true,
  },
  [2] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
  },
  [3] = {
    [ts_external_token__flow_raw_text] = true,
  },
  [4] = {
    [ts_external_token_newline] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__reserved_binding_start] = true,
    [ts_external_token__variable_name] = true,
  },
  [5] = {
    [ts_external_token_newline] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__collection_binding_start] = true,
    [ts_external_token__spawn_binding_start] = true,
    [ts_external_token__reserved_binding_start] = true,
    [ts_external_token__async_await_binding_start] = true,
  },
  [6] = {
    [ts_external_token_newline] = true,
  },
  [7] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__cap_text_start] = true,
  },
  [8] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [9] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__text_indent] = true,
  },
  [10] = {
    [ts_external_token__agic_raw_text] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [12] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [13] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [14] = {
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [15] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__line_start] = true,
  },
  [16] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [17] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
  },
  [19] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__text_indent] = true,
  },
  [21] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [22] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [23] = {
    [ts_external_token_newline] = true,
    [ts_external_token__variable_name] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [27] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [28] = {
    [ts_external_token__variable_name] = true,
  },
  [29] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [30] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [31] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
  },
  [32] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [33] = {
    [ts_external_token__line_start] = true,
  },
  [34] = {
    [ts_external_token__comment_end] = true,
  },
  [35] = {
    [ts_external_token__from_start] = true,
  },
  [36] = {
    [ts_external_token__reduce_text_start] = true,
  },
  [37] = {
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_toolang_external_scanner_create(void);
void tree_sitter_toolang_external_scanner_destroy(void *);
bool tree_sitter_toolang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toolang_external_scanner_serialize(void *, char *);
void tree_sitter_toolang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_toolang(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_toolang_external_scanner_create,
      tree_sitter_toolang_external_scanner_destroy,
      tree_sitter_toolang_external_scanner_scan,
      tree_sitter_toolang_external_scanner_serialize,
      tree_sitter_toolang_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
