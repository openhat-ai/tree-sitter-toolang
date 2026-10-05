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
#define STATE_COUNT 1122
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 290
#define ALIAS_COUNT 0
#define TOKEN_COUNT 138
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 103

enum ts_symbol_identifiers {
  sym__inline_comment = 1,
  anon_sym_ATparam = 2,
  aux_sym__doc_space_token1 = 3,
  sym_comment_text = 4,
  anon_sym_Text = 5,
  anon_sym_Number = 6,
  anon_sym_Boolean = 7,
  anon_sym_Json = 8,
  anon_sym_Part = 9,
  sym_array_suffix = 10,
  anon_sym__ = 11,
  sym_integer_literal = 12,
  sym__one_integer_literal = 13,
  sym__other_integer_literal = 14,
  anon_sym_lanes = 15,
  anon_sym_models = 16,
  anon_sym_tools = 17,
  anon_sym_skills = 18,
  anon_sym_services = 19,
  anon_sym_psyches = 20,
  anon_sym_prompts = 21,
  anon_sym_hands = 22,
  anon_sym_handoffs = 23,
  anon_sym_EQ = 24,
  anon_sym_PLUS_EQ = 25,
  anon_sym_DASH_EQ = 26,
  sym_directive_value = 27,
  sym_runnable_ref = 28,
  anon_sym_far = 29,
  anon_sym_near = 30,
  sym_default_keyword = 31,
  sym_none_keyword = 32,
  sym_all_keyword = 33,
  anon_sym_user = 34,
  anon_sym_assistant = 35,
  anon_sym_tool = 36,
  sym_with_keyword = 37,
  sym_struct_keyword = 38,
  sym_psyche_keyword = 39,
  sym_skill_keyword = 40,
  sym_service_keyword = 41,
  sym_prompt_keyword = 42,
  sym_context_keyword = 43,
  sym_instruct_keyword = 44,
  sym_agic_keyword = 45,
  sym_task_keyword = 46,
  sym_chore_keyword = 47,
  sym_flow_keyword = 48,
  sym_pass_keyword = 49,
  sym_flow_run_keyword = 50,
  sym_flow_async_keyword = 51,
  sym_flow_await_keyword = 52,
  sym_flow_exec_keyword = 53,
  sym_flow_spawn_keyword = 54,
  sym_flow_let_keyword = 55,
  sym_flow_seek_keyword = 56,
  sym_flow_ask_keyword = 57,
  sym_flow_scatter_keyword = 58,
  sym_flow_storm_keyword = 59,
  sym_flow_generate_keyword = 60,
  sym_flow_gather_keyword = 61,
  sym_flow_settle_keyword = 62,
  sym_flow_reduce_keyword = 63,
  sym_flow_map_keyword = 64,
  sym_flow_keep_keyword = 65,
  sym_flow_drop_keyword = 66,
  sym_flow_sort_keyword = 67,
  sym_flow_rank_keyword = 68,
  sym_flow_repeat_keyword = 69,
  sym_flow_until_keyword = 70,
  sym_flow_from_keyword = 71,
  sym_flow_windowing_keyword = 72,
  sym_flow_using_keyword = 73,
  sym_flow_if_keyword = 74,
  sym_flow_by_keyword = 75,
  sym_flow_in_keyword = 76,
  sym_flow_lane_keyword = 77,
  sym_flow_ascending_keyword = 78,
  sym_flow_descending_keyword = 79,
  sym_flow_time_keyword = 80,
  sym_flow_times_keyword = 81,
  sym_flow_par_keyword = 82,
  sym_flow_first_keyword = 83,
  sym_flow_last_keyword = 84,
  sym_flow_top_keyword = 85,
  sym_flow_bottom_keyword = 86,
  sym_flow_think_keyword = 87,
  sym_flow_use_keyword = 88,
  sym_thunk_keyword = 89,
  sym_recall_keyword = 90,
  anon_sym_call = 91,
  anon_sym_do = 92,
  anon_sym_unfold = 93,
  anon_sym_each = 94,
  anon_sym_fold = 95,
  anon_sym_head = 96,
  anon_sym_tail = 97,
  sym_optional_marker = 98,
  sym_arrow = 99,
  sym_colon = 100,
  sym_lparen = 101,
  sym_rparen = 102,
  sym_comma = 103,
  sym_cap_kind = 104,
  sym_pascal_name = 105,
  sym_snake_name = 106,
  sym__snake_kebab_name = 107,
  sym_text_line = 108,
  sym_newline = 109,
  sym_blank_line = 110,
  sym__comment_start = 111,
  sym_plain_comment = 112,
  sym_shebang_comment = 113,
  sym__module_doc_start = 114,
  sym__item_doc_start = 115,
  sym__param_item_doc_start = 116,
  sym__comment_end = 117,
  sym__indent = 118,
  sym__dedent = 119,
  sym__line_start = 120,
  sym__directive_start = 121,
  sym__until_start = 122,
  sym__from_start = 123,
  sym__reduce_indent = 124,
  sym__reduce_text_start = 125,
  sym__text_indent = 126,
  sym__cap_text_start = 127,
  sym_indented_raw_text = 128,
  sym__flow_raw_text = 129,
  sym__agic_raw_text = 130,
  sym__error_line = 131,
  sym__exec_binding_start = 132,
  sym__collection_binding_start = 133,
  sym__spawn_binding_start = 134,
  sym__until_binding_start = 135,
  sym__variable_name = 136,
  sym__async_await_binding_start = 137,
  sym_source_file = 138,
  sym_item = 139,
  sym_line_end = 140,
  sym_module_doc_comment = 141,
  sym_item_doc_comment = 142,
  sym_param_doc_tag = 143,
  sym__doc_space = 144,
  sym__trivia = 145,
  sym_with = 146,
  sym_type = 147,
  sym_base_type = 148,
  sym_builtin_type = 149,
  sym_user_type = 150,
  sym_type_suffix = 151,
  sym_struct = 152,
  sym_struct_name = 153,
  sym_struct_body = 154,
  sym_field = 155,
  sym_field_name = 156,
  sym_psyche = 157,
  sym_skill = 158,
  sym_service = 159,
  sym_prompt = 160,
  sym__cap_definition = 161,
  sym_cap_body = 162,
  sym__cap_text_body = 163,
  sym_task = 164,
  sym_chore = 165,
  sym_cap_name = 166,
  sym_cap_ref = 167,
  sym_job_name = 168,
  sym_job_body = 169,
  sym_property = 170,
  sym_property_key = 171,
  sym_property_value = 172,
  sym_instruct = 173,
  sym_instruct_name = 174,
  sym_instruct_body = 175,
  sym_context = 176,
  sym_context_name = 177,
  sym_context_body = 178,
  sym_text_inline = 179,
  sym_text_block = 180,
  sym_text_body = 181,
  sym_text_body_line = 182,
  sym_agic = 183,
  sym_agic_name = 184,
  sym_agic_body = 185,
  sym_params = 186,
  sym_param = 187,
  sym_param_name = 188,
  sym_flow = 189,
  sym_flow_name = 190,
  sym_flow_body = 191,
  sym_statements = 192,
  sym__flow_statement = 193,
  sym__flow_operation = 194,
  sym__collection_operation = 195,
  sym__async_await_operation = 196,
  sym__bound_operation = 197,
  sym__invalid_collection_operation = 198,
  sym__invalid_spawn_operation = 199,
  sym__invalid_async_await_operation = 200,
  sym_let_statement = 201,
  sym_exec_statement = 202,
  sym_spawn_statement = 203,
  sym__invalid_exec_binding = 204,
  sym__invalid_until_binding = 205,
  sym_run_statement = 206,
  sym__async_run_statement = 207,
  sym_await_statement = 208,
  sym_implicit_run_statement = 209,
  sym__implicit_run_line = 210,
  sym_seek_statement = 211,
  sym_ask_statement = 212,
  sym_generate_statement = 213,
  sym_reduce_statement = 214,
  sym__reduce_inline_line = 215,
  sym__reduce_line = 216,
  sym__reduce_inline_block = 217,
  sym__reduce_text_body = 218,
  sym__from_complement = 219,
  sym_map_statement = 220,
  sym_keep_statement = 221,
  sym_drop_statement = 222,
  sym_sort_statement = 223,
  sym__named_using_complement = 224,
  sym__required_space = 225,
  sym__named_if_complement = 226,
  sym__inline_if_complement = 227,
  sym__named_by_complement = 228,
  sym__inline_by_complement = 229,
  sym__runnable_complements = 230,
  sym__if_complements = 231,
  sym__by_complements = 232,
  sym__lanes_complement = 233,
  sym__order_complement = 234,
  sym_repeat_statement = 235,
  sym_repeat_body = 236,
  sym__repeat_statements = 237,
  sym__window_complement = 238,
  sym__repeat_count_complement = 239,
  sym_until_clause = 240,
  sym_invalid_flow_reserved_statement = 241,
  sym_inline_agic = 242,
  sym_inline_agic_body = 243,
  sym_position = 244,
  sym_runnable = 245,
  sym_agent = 246,
  sym_local_name = 247,
  sym_local_reference = 248,
  sym_directive = 249,
  sym__query_directive_key = 250,
  sym__route_directive_key = 251,
  sym_directive_key = 252,
  sym_directive_op = 253,
  sym_route_value = 254,
  sym_recall_value = 255,
  sym_recall_source = 256,
  sym__directives = 257,
  sym_text_ref = 258,
  sym_messages = 259,
  sym_message = 260,
  sym_unroled_message = 261,
  sym__unroled_message_line = 262,
  sym_invalid_agic_reserved_message = 263,
  sym_role = 264,
  sym__pass_statement = 265,
  sym_flow_lanes_keyword = 266,
  sym__flow_reserved_word = 267,
  sym__collection_binding_word = 268,
  sym__async_await_binding_word = 269,
  sym__agic_reserved_word = 270,
  sym_assign_operator = 271,
  sym_type_name = 272,
  aux_sym_source_file_repeat1 = 273,
  aux_sym_type_repeat1 = 274,
  aux_sym_struct_body_repeat1 = 275,
  aux_sym_struct_body_repeat2 = 276,
  aux_sym__cap_definition_repeat1 = 277,
  aux_sym__cap_text_body_repeat1 = 278,
  aux_sym_job_body_repeat1 = 279,
  aux_sym_text_body_repeat1 = 280,
  aux_sym_params_repeat1 = 281,
  aux_sym_statements_repeat1 = 282,
  aux_sym_implicit_run_statement_repeat1 = 283,
  aux_sym__repeat_statements_repeat1 = 284,
  aux_sym_route_value_repeat1 = 285,
  aux_sym_recall_value_repeat1 = 286,
  aux_sym__directives_repeat1 = 287,
  aux_sym_messages_repeat1 = 288,
  aux_sym_unroled_message_repeat1 = 289,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__inline_comment] = "plain_comment",
  [anon_sym_ATparam] = "@param",
  [aux_sym__doc_space_token1] = "_doc_space_token1",
  [sym_comment_text] = "comment_text",
  [anon_sym_Text] = "Text",
  [anon_sym_Number] = "Number",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Json] = "Json",
  [anon_sym_Part] = "Part",
  [sym_array_suffix] = "array_suffix",
  [anon_sym__] = "_",
  [sym_integer_literal] = "integer_literal",
  [sym__one_integer_literal] = "integer_literal",
  [sym__other_integer_literal] = "integer_literal",
  [anon_sym_lanes] = "lanes",
  [anon_sym_models] = "models",
  [anon_sym_tools] = "tools",
  [anon_sym_skills] = "skills",
  [anon_sym_services] = "services",
  [anon_sym_psyches] = "psyches",
  [anon_sym_prompts] = "prompts",
  [anon_sym_hands] = "hands",
  [anon_sym_handoffs] = "handoffs",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [sym_directive_value] = "directive_value",
  [sym_runnable_ref] = "runnable_ref",
  [anon_sym_far] = "far",
  [anon_sym_near] = "near",
  [sym_default_keyword] = "default_keyword",
  [sym_none_keyword] = "none_keyword",
  [sym_all_keyword] = "all_keyword",
  [anon_sym_user] = "user",
  [anon_sym_assistant] = "assistant",
  [anon_sym_tool] = "tool",
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
  [sym_arrow] = "arrow",
  [sym_colon] = "colon",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [sym_comma] = "comma",
  [sym_cap_kind] = "cap_kind",
  [sym_pascal_name] = "pascal_name",
  [sym_snake_name] = "snake_name",
  [sym__snake_kebab_name] = "_snake_kebab_name",
  [sym_text_line] = "text_line",
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
  [sym__until_binding_start] = "_until_binding_start",
  [sym__variable_name] = "snake_name",
  [sym__async_await_binding_start] = "_async_await_binding_start",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_line_end] = "line_end",
  [sym_module_doc_comment] = "module_doc_comment",
  [sym_item_doc_comment] = "item_doc_comment",
  [sym_param_doc_tag] = "param_doc_tag",
  [sym__doc_space] = "_doc_space",
  [sym__trivia] = "_trivia",
  [sym_with] = "with",
  [sym_type] = "type",
  [sym_base_type] = "base_type",
  [sym_builtin_type] = "builtin_type",
  [sym_user_type] = "user_type",
  [sym_type_suffix] = "type_suffix",
  [sym_struct] = "struct",
  [sym_struct_name] = "struct_name",
  [sym_struct_body] = "struct_body",
  [sym_field] = "field",
  [sym_field_name] = "field_name",
  [sym_psyche] = "psyche",
  [sym_skill] = "skill",
  [sym_service] = "service",
  [sym_prompt] = "prompt",
  [sym__cap_definition] = "_cap_definition",
  [sym_cap_body] = "cap_body",
  [sym__cap_text_body] = "text_body",
  [sym_task] = "task",
  [sym_chore] = "chore",
  [sym_cap_name] = "cap_name",
  [sym_cap_ref] = "cap_ref",
  [sym_job_name] = "job_name",
  [sym_job_body] = "job_body",
  [sym_property] = "property",
  [sym_property_key] = "property_key",
  [sym_property_value] = "property_value",
  [sym_instruct] = "instruct",
  [sym_instruct_name] = "instruct_name",
  [sym_instruct_body] = "instruct_body",
  [sym_context] = "context",
  [sym_context_name] = "context_name",
  [sym_context_body] = "context_body",
  [sym_text_inline] = "text_inline",
  [sym_text_block] = "text_block",
  [sym_text_body] = "text_body",
  [sym_text_body_line] = "text_body_line",
  [sym_agic] = "agic",
  [sym_agic_name] = "agic_name",
  [sym_agic_body] = "agic_body",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym_param_name] = "param_name",
  [sym_flow] = "flow",
  [sym_flow_name] = "flow_name",
  [sym_flow_body] = "flow_body",
  [sym_statements] = "statements",
  [sym__flow_statement] = "_flow_statement",
  [sym__flow_operation] = "_flow_operation",
  [sym__collection_operation] = "_collection_operation",
  [sym__async_await_operation] = "_async_await_operation",
  [sym__bound_operation] = "_bound_operation",
  [sym__invalid_collection_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_spawn_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_async_await_operation] = "invalid_flow_reserved_statement",
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_spawn_statement] = "spawn_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
  [sym__invalid_until_binding] = "invalid_flow_reserved_statement",
  [sym_run_statement] = "run_statement",
  [sym__async_run_statement] = "run_statement",
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
  [sym_runnable] = "runnable",
  [sym_agent] = "agent",
  [sym_local_name] = "local_name",
  [sym_local_reference] = "local_reference",
  [sym_directive] = "directive",
  [sym__query_directive_key] = "_query_directive_key",
  [sym__route_directive_key] = "_route_directive_key",
  [sym_directive_key] = "directive_key",
  [sym_directive_op] = "directive_op",
  [sym_route_value] = "route_value",
  [sym_recall_value] = "recall_value",
  [sym_recall_source] = "recall_source",
  [sym__directives] = "_directives",
  [sym_text_ref] = "text_ref",
  [sym_messages] = "messages",
  [sym_message] = "message",
  [sym_unroled_message] = "unroled_message",
  [sym__unroled_message_line] = "text_body_line",
  [sym_invalid_agic_reserved_message] = "invalid_agic_reserved_message",
  [sym_role] = "role",
  [sym__pass_statement] = "_pass_statement",
  [sym_flow_lanes_keyword] = "flow_lanes_keyword",
  [sym__flow_reserved_word] = "_flow_reserved_word",
  [sym__collection_binding_word] = "_collection_binding_word",
  [sym__async_await_binding_word] = "_async_await_binding_word",
  [sym__agic_reserved_word] = "_agic_reserved_word",
  [sym_assign_operator] = "assign_operator",
  [sym_type_name] = "type_name",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__inline_comment] = sym_plain_comment,
  [anon_sym_ATparam] = anon_sym_ATparam,
  [aux_sym__doc_space_token1] = aux_sym__doc_space_token1,
  [sym_comment_text] = sym_comment_text,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Number] = anon_sym_Number,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Json] = anon_sym_Json,
  [anon_sym_Part] = anon_sym_Part,
  [sym_array_suffix] = sym_array_suffix,
  [anon_sym__] = anon_sym__,
  [sym_integer_literal] = sym_integer_literal,
  [sym__one_integer_literal] = sym_integer_literal,
  [sym__other_integer_literal] = sym_integer_literal,
  [anon_sym_lanes] = anon_sym_lanes,
  [anon_sym_models] = anon_sym_models,
  [anon_sym_tools] = anon_sym_tools,
  [anon_sym_skills] = anon_sym_skills,
  [anon_sym_services] = anon_sym_services,
  [anon_sym_psyches] = anon_sym_psyches,
  [anon_sym_prompts] = anon_sym_prompts,
  [anon_sym_hands] = anon_sym_hands,
  [anon_sym_handoffs] = anon_sym_handoffs,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [sym_directive_value] = sym_directive_value,
  [sym_runnable_ref] = sym_runnable_ref,
  [anon_sym_far] = anon_sym_far,
  [anon_sym_near] = anon_sym_near,
  [sym_default_keyword] = sym_default_keyword,
  [sym_none_keyword] = sym_none_keyword,
  [sym_all_keyword] = sym_all_keyword,
  [anon_sym_user] = anon_sym_user,
  [anon_sym_assistant] = anon_sym_assistant,
  [anon_sym_tool] = anon_sym_tool,
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
  [sym_arrow] = sym_arrow,
  [sym_colon] = sym_colon,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [sym_comma] = sym_comma,
  [sym_cap_kind] = sym_cap_kind,
  [sym_pascal_name] = sym_pascal_name,
  [sym_snake_name] = sym_snake_name,
  [sym__snake_kebab_name] = sym__snake_kebab_name,
  [sym_text_line] = sym_text_line,
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
  [sym__until_binding_start] = sym__until_binding_start,
  [sym__variable_name] = sym_snake_name,
  [sym__async_await_binding_start] = sym__async_await_binding_start,
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_line_end] = sym_line_end,
  [sym_module_doc_comment] = sym_module_doc_comment,
  [sym_item_doc_comment] = sym_item_doc_comment,
  [sym_param_doc_tag] = sym_param_doc_tag,
  [sym__doc_space] = sym__doc_space,
  [sym__trivia] = sym__trivia,
  [sym_with] = sym_with,
  [sym_type] = sym_type,
  [sym_base_type] = sym_base_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_user_type] = sym_user_type,
  [sym_type_suffix] = sym_type_suffix,
  [sym_struct] = sym_struct,
  [sym_struct_name] = sym_struct_name,
  [sym_struct_body] = sym_struct_body,
  [sym_field] = sym_field,
  [sym_field_name] = sym_field_name,
  [sym_psyche] = sym_psyche,
  [sym_skill] = sym_skill,
  [sym_service] = sym_service,
  [sym_prompt] = sym_prompt,
  [sym__cap_definition] = sym__cap_definition,
  [sym_cap_body] = sym_cap_body,
  [sym__cap_text_body] = sym_text_body,
  [sym_task] = sym_task,
  [sym_chore] = sym_chore,
  [sym_cap_name] = sym_cap_name,
  [sym_cap_ref] = sym_cap_ref,
  [sym_job_name] = sym_job_name,
  [sym_job_body] = sym_job_body,
  [sym_property] = sym_property,
  [sym_property_key] = sym_property_key,
  [sym_property_value] = sym_property_value,
  [sym_instruct] = sym_instruct,
  [sym_instruct_name] = sym_instruct_name,
  [sym_instruct_body] = sym_instruct_body,
  [sym_context] = sym_context,
  [sym_context_name] = sym_context_name,
  [sym_context_body] = sym_context_body,
  [sym_text_inline] = sym_text_inline,
  [sym_text_block] = sym_text_block,
  [sym_text_body] = sym_text_body,
  [sym_text_body_line] = sym_text_body_line,
  [sym_agic] = sym_agic,
  [sym_agic_name] = sym_agic_name,
  [sym_agic_body] = sym_agic_body,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym_param_name] = sym_param_name,
  [sym_flow] = sym_flow,
  [sym_flow_name] = sym_flow_name,
  [sym_flow_body] = sym_flow_body,
  [sym_statements] = sym_statements,
  [sym__flow_statement] = sym__flow_statement,
  [sym__flow_operation] = sym__flow_operation,
  [sym__collection_operation] = sym__collection_operation,
  [sym__async_await_operation] = sym__async_await_operation,
  [sym__bound_operation] = sym__bound_operation,
  [sym__invalid_collection_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_spawn_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_async_await_operation] = sym_invalid_flow_reserved_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_spawn_statement] = sym_spawn_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
  [sym__invalid_until_binding] = sym_invalid_flow_reserved_statement,
  [sym_run_statement] = sym_run_statement,
  [sym__async_run_statement] = sym_run_statement,
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
  [sym_runnable] = sym_runnable,
  [sym_agent] = sym_agent,
  [sym_local_name] = sym_local_name,
  [sym_local_reference] = sym_local_reference,
  [sym_directive] = sym_directive,
  [sym__query_directive_key] = sym__query_directive_key,
  [sym__route_directive_key] = sym__route_directive_key,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_op] = sym_directive_op,
  [sym_route_value] = sym_route_value,
  [sym_recall_value] = sym_recall_value,
  [sym_recall_source] = sym_recall_source,
  [sym__directives] = sym__directives,
  [sym_text_ref] = sym_text_ref,
  [sym_messages] = sym_messages,
  [sym_message] = sym_message,
  [sym_unroled_message] = sym_unroled_message,
  [sym__unroled_message_line] = sym_text_body_line,
  [sym_invalid_agic_reserved_message] = sym_invalid_agic_reserved_message,
  [sym_role] = sym_role,
  [sym__pass_statement] = sym__pass_statement,
  [sym_flow_lanes_keyword] = sym_flow_lanes_keyword,
  [sym__flow_reserved_word] = sym__flow_reserved_word,
  [sym__collection_binding_word] = sym__collection_binding_word,
  [sym__async_await_binding_word] = sym__async_await_binding_word,
  [sym__agic_reserved_word] = sym__agic_reserved_word,
  [sym_assign_operator] = sym_assign_operator,
  [sym_type_name] = sym_type_name,
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
  [anon_sym_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Part] = {
    .visible = true,
    .named = false,
  },
  [sym_array_suffix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
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
  [anon_sym_models] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tools] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skills] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_services] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psyches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hands] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handoffs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [sym_runnable_ref] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_far] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_near] = {
    .visible = true,
    .named = false,
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
  [anon_sym_user] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assistant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tool] = {
    .visible = true,
    .named = false,
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
  [sym_pascal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_snake_name] = {
    .visible = true,
    .named = true,
  },
  [sym__snake_kebab_name] = {
    .visible = false,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
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
  [sym__until_binding_start] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_name] = {
    .visible = true,
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
  [sym_item] = {
    .visible = true,
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
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_name] = {
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
  [sym_field_name] = {
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
  [sym_cap_body] = {
    .visible = true,
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
  [sym_cap_ref] = {
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
  [sym_property_key] = {
    .visible = true,
    .named = true,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_name] = {
    .visible = true,
    .named = true,
  },
  [sym_instruct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_context_name] = {
    .visible = true,
    .named = true,
  },
  [sym_context_body] = {
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
  [sym_agic_name] = {
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
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_flow_name] = {
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
  [sym__async_await_operation] = {
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
  [sym__invalid_until_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_run_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__async_run_statement] = {
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
  [sym_runnable] = {
    .visible = true,
    .named = true,
  },
  [sym_agent] = {
    .visible = true,
    .named = true,
  },
  [sym_local_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__query_directive_key] = {
    .visible = false,
    .named = true,
  },
  [sym__route_directive_key] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_key] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_op] = {
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
  [sym_recall_source] = {
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
  [sym_role] = {
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
  [sym__agic_reserved_word] = {
    .visible = false,
    .named = true,
  },
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
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
  field_key = 12,
  field_keyword = 13,
  field_kind = 14,
  field_lanes = 15,
  field_name = 16,
  field_operand = 17,
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
  [field_key] = "key",
  [field_keyword] = "keyword",
  [field_kind] = "kind",
  [field_lanes] = "lanes",
  [field_name] = "name",
  [field_operand] = "operand",
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
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 3},
  [7] = {.index = 10, .length = 5},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 1},
  [10] = {.index = 20, .length = 2},
  [11] = {.index = 22, .length = 3},
  [12] = {.index = 25, .length = 1},
  [13] = {.index = 26, .length = 2},
  [14] = {.index = 28, .length = 4},
  [15] = {.index = 32, .length = 4},
  [16] = {.index = 36, .length = 2},
  [17] = {.index = 38, .length = 2},
  [18] = {.index = 40, .length = 2},
  [19] = {.index = 42, .length = 3},
  [20] = {.index = 45, .length = 4},
  [21] = {.index = 49, .length = 2},
  [22] = {.index = 51, .length = 1},
  [23] = {.index = 52, .length = 1},
  [24] = {.index = 53, .length = 5},
  [25] = {.index = 58, .length = 1},
  [26] = {.index = 59, .length = 4},
  [27] = {.index = 63, .length = 5},
  [28] = {.index = 68, .length = 1},
  [29] = {.index = 69, .length = 3},
  [30] = {.index = 72, .length = 1},
  [31] = {.index = 73, .length = 1},
  [32] = {.index = 74, .length = 2},
  [33] = {.index = 76, .length = 6},
  [34] = {.index = 82, .length = 6},
  [35] = {.index = 88, .length = 1},
  [36] = {.index = 89, .length = 1},
  [37] = {.index = 90, .length = 1},
  [38] = {.index = 91, .length = 4},
  [39] = {.index = 95, .length = 2},
  [40] = {.index = 97, .length = 1},
  [41] = {.index = 98, .length = 1},
  [42] = {.index = 99, .length = 1},
  [43] = {.index = 100, .length = 2},
  [44] = {.index = 102, .length = 1},
  [45] = {.index = 103, .length = 1},
  [46] = {.index = 104, .length = 1},
  [47] = {.index = 105, .length = 7},
  [48] = {.index = 112, .length = 1},
  [49] = {.index = 113, .length = 1},
  [50] = {.index = 114, .length = 2},
  [51] = {.index = 116, .length = 1},
  [52] = {.index = 117, .length = 2},
  [53] = {.index = 119, .length = 3},
  [54] = {.index = 122, .length = 1},
  [55] = {.index = 123, .length = 2},
  [56] = {.index = 125, .length = 2},
  [57] = {.index = 127, .length = 2},
  [58] = {.index = 129, .length = 1},
  [59] = {.index = 130, .length = 3},
  [60] = {.index = 133, .length = 1},
  [61] = {.index = 134, .length = 1},
  [62] = {.index = 135, .length = 2},
  [63] = {.index = 137, .length = 3},
  [64] = {.index = 137, .length = 3},
  [65] = {.index = 140, .length = 2},
  [66] = {.index = 142, .length = 2},
  [67] = {.index = 144, .length = 2},
  [68] = {.index = 146, .length = 2},
  [69] = {.index = 148, .length = 1},
  [70] = {.index = 149, .length = 5},
  [71] = {.index = 154, .length = 1},
  [72] = {.index = 155, .length = 2},
  [73] = {.index = 157, .length = 3},
  [74] = {.index = 160, .length = 3},
  [75] = {.index = 163, .length = 2},
  [76] = {.index = 165, .length = 1},
  [77] = {.index = 166, .length = 2},
  [78] = {.index = 168, .length = 2},
  [79] = {.index = 170, .length = 4},
  [80] = {.index = 174, .length = 1},
  [81] = {.index = 175, .length = 1},
  [82] = {.index = 176, .length = 1},
  [83] = {.index = 177, .length = 2},
  [84] = {.index = 179, .length = 1},
  [85] = {.index = 180, .length = 3},
  [86] = {.index = 183, .length = 3},
  [87] = {.index = 186, .length = 2},
  [88] = {.index = 188, .length = 1},
  [89] = {.index = 189, .length = 2},
  [90] = {.index = 191, .length = 2},
  [91] = {.index = 193, .length = 2},
  [92] = {.index = 195, .length = 1},
  [93] = {.index = 196, .length = 3},
  [94] = {.index = 199, .length = 2},
  [95] = {.index = 201, .length = 3},
  [96] = {.index = 204, .length = 2},
  [97] = {.index = 206, .length = 2},
  [98] = {.index = 208, .length = 2},
  [99] = {.index = 210, .length = 3},
  [100] = {.index = 213, .length = 3},
  [101] = {.index = 216, .length = 2},
  [102] = {.index = 218, .length = 3},
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
    {field_name, 1, .inherited = true},
  [69] =
    {field_agic, 0, .inherited = true},
    {field_async, 0, .inherited = true},
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
    {field_name, 1},
    {field_return, 3},
  [82] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
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
    {field_body, 3},
    {field_property, 2, .inherited = true},
  [102] =
    {field_body, 3},
  [103] =
    {field_property, 3, .inherited = true},
  [104] =
    {field_content, 1, .inherited = true},
  [105] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [112] =
    {field_body, 1},
  [113] =
    {field_runnable, 1},
  [114] =
    {field_agic, 2},
    {field_async, 0},
  [116] =
    {field_operand, 1},
  [117] =
    {field_agent, 1},
    {field_agic, 2},
  [119] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [122] =
    {field_runnable, 1, .inherited = true},
  [123] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1},
  [125] =
    {field_count, 1},
    {field_side, 0},
  [127] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [129] =
    {field_selection, 1},
  [130] =
    {field_lanes, 2, .inherited = true},
    {field_order, 1, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [133] =
    {field_count, 0},
  [134] =
    {field_window, 1},
  [135] =
    {field_body, 4},
    {field_property, 3, .inherited = true},
  [137] =
    {field_key, 1},
    {field_operator, 2},
    {field_value, 3},
  [140] =
    {field_agic, 3},
    {field_async, 0},
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
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [160] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [163] =
    {field_async, 0},
    {field_runnable, 3},
  [165] =
    {field_statement, 0},
  [166] =
    {field_body, 4},
    {field_window, 1, .inherited = true},
  [168] =
    {field_body, 4},
    {field_count, 1, .inherited = true},
  [170] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [174] =
    {field_name, 1},
  [175] =
    {field_body, 4},
  [176] =
    {field_from, 3},
  [177] =
    {field_statement, 0},
    {field_statement, 1, .inherited = true},
  [179] =
    {field_statement, 1, .inherited = true},
  [180] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [183] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [186] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [188] =
    {field_target, 2},
  [189] =
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
  [191] =
    {field_statement, 1, .inherited = true},
    {field_until, 2},
  [193] =
    {field_statement, 2, .inherited = true},
    {field_until, 1},
  [195] =
    {field_statement, 2, .inherited = true},
  [196] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [199] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [201] =
    {field_statement, 1, .inherited = true},
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [204] =
    {field_statement, 3, .inherited = true},
    {field_until, 1},
  [206] =
    {field_statement, 2, .inherited = true},
    {field_until, 3},
  [208] =
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [210] =
    {field_statement, 1, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [213] =
    {field_statement, 2, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 3},
  [216] =
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [218] =
    {field_statement, 2, .inherited = true},
    {field_statement, 5, .inherited = true},
    {field_until, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [63] = {
    [1] = sym_directive_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__query_directive_key, 2,
    sym__query_directive_key,
    sym_directive_key,
  sym__route_directive_key, 2,
    sym__route_directive_key,
    sym_directive_key,
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
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 24,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 27,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 52,
  [54] = 45,
  [55] = 55,
  [56] = 44,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 57,
  [76] = 76,
  [77] = 69,
  [78] = 72,
  [79] = 61,
  [80] = 80,
  [81] = 80,
  [82] = 73,
  [83] = 83,
  [84] = 84,
  [85] = 63,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 76,
  [96] = 96,
  [97] = 74,
  [98] = 98,
  [99] = 64,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 66,
  [105] = 67,
  [106] = 71,
  [107] = 107,
  [108] = 86,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 84,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 59,
  [128] = 128,
  [129] = 129,
  [130] = 125,
  [131] = 86,
  [132] = 86,
  [133] = 133,
  [134] = 86,
  [135] = 86,
  [136] = 86,
  [137] = 86,
  [138] = 86,
  [139] = 139,
  [140] = 101,
  [141] = 141,
  [142] = 87,
  [143] = 88,
  [144] = 92,
  [145] = 141,
  [146] = 86,
  [147] = 83,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 96,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 102,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 155,
  [174] = 159,
  [175] = 175,
  [176] = 176,
  [177] = 162,
  [178] = 178,
  [179] = 179,
  [180] = 150,
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 163,
  [185] = 164,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 168,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 172,
  [195] = 171,
  [196] = 192,
  [197] = 197,
  [198] = 100,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 189,
  [205] = 205,
  [206] = 206,
  [207] = 165,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 201,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
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
  [283] = 283,
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
  [308] = 96,
  [309] = 302,
  [310] = 303,
  [311] = 304,
  [312] = 305,
  [313] = 306,
  [314] = 307,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 96,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 302,
  [325] = 303,
  [326] = 304,
  [327] = 305,
  [328] = 328,
  [329] = 307,
  [330] = 96,
  [331] = 12,
  [332] = 208,
  [333] = 315,
  [334] = 317,
  [335] = 302,
  [336] = 303,
  [337] = 304,
  [338] = 305,
  [339] = 306,
  [340] = 307,
  [341] = 315,
  [342] = 317,
  [343] = 315,
  [344] = 317,
  [345] = 345,
  [346] = 285,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 241,
  [366] = 366,
  [367] = 367,
  [368] = 355,
  [369] = 369,
  [370] = 361,
  [371] = 363,
  [372] = 366,
  [373] = 96,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 214,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 199,
  [384] = 345,
  [385] = 349,
  [386] = 386,
  [387] = 197,
  [388] = 388,
  [389] = 389,
  [390] = 381,
  [391] = 391,
  [392] = 389,
  [393] = 391,
  [394] = 347,
  [395] = 358,
  [396] = 359,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 285,
  [401] = 347,
  [402] = 397,
  [403] = 285,
  [404] = 347,
  [405] = 360,
  [406] = 406,
  [407] = 205,
  [408] = 186,
  [409] = 193,
  [410] = 374,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 353,
  [416] = 416,
  [417] = 369,
  [418] = 418,
  [419] = 376,
  [420] = 377,
  [421] = 378,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 350,
  [426] = 354,
  [427] = 364,
  [428] = 428,
  [429] = 306,
  [430] = 291,
  [431] = 225,
  [432] = 226,
  [433] = 227,
  [434] = 228,
  [435] = 435,
  [436] = 229,
  [437] = 230,
  [438] = 231,
  [439] = 232,
  [440] = 233,
  [441] = 234,
  [442] = 235,
  [443] = 236,
  [444] = 237,
  [445] = 238,
  [446] = 242,
  [447] = 447,
  [448] = 448,
  [449] = 224,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 243,
  [457] = 244,
  [458] = 245,
  [459] = 246,
  [460] = 247,
  [461] = 248,
  [462] = 249,
  [463] = 250,
  [464] = 251,
  [465] = 465,
  [466] = 252,
  [467] = 253,
  [468] = 254,
  [469] = 255,
  [470] = 256,
  [471] = 257,
  [472] = 258,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 259,
  [478] = 260,
  [479] = 261,
  [480] = 262,
  [481] = 481,
  [482] = 263,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 264,
  [487] = 487,
  [488] = 488,
  [489] = 265,
  [490] = 266,
  [491] = 267,
  [492] = 269,
  [493] = 270,
  [494] = 494,
  [495] = 495,
  [496] = 271,
  [497] = 272,
  [498] = 273,
  [499] = 274,
  [500] = 275,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 277,
  [505] = 505,
  [506] = 278,
  [507] = 279,
  [508] = 280,
  [509] = 281,
  [510] = 282,
  [511] = 283,
  [512] = 512,
  [513] = 513,
  [514] = 284,
  [515] = 286,
  [516] = 287,
  [517] = 288,
  [518] = 518,
  [519] = 289,
  [520] = 290,
  [521] = 521,
  [522] = 292,
  [523] = 293,
  [524] = 294,
  [525] = 295,
  [526] = 296,
  [527] = 297,
  [528] = 298,
  [529] = 299,
  [530] = 300,
  [531] = 301,
  [532] = 316,
  [533] = 533,
  [534] = 318,
  [535] = 319,
  [536] = 321,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 322,
  [541] = 305,
  [542] = 306,
  [543] = 321,
  [544] = 307,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 268,
  [562] = 276,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 316,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 413,
  [574] = 414,
  [575] = 416,
  [576] = 418,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 382,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 322,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 12,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 302,
  [601] = 315,
  [602] = 317,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 422,
  [610] = 610,
  [611] = 423,
  [612] = 424,
  [613] = 613,
  [614] = 302,
  [615] = 303,
  [616] = 304,
  [617] = 305,
  [618] = 306,
  [619] = 307,
  [620] = 315,
  [621] = 317,
  [622] = 302,
  [623] = 303,
  [624] = 304,
  [625] = 305,
  [626] = 306,
  [627] = 307,
  [628] = 628,
  [629] = 315,
  [630] = 317,
  [631] = 631,
  [632] = 318,
  [633] = 633,
  [634] = 319,
  [635] = 428,
  [636] = 564,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 328,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 209,
  [645] = 303,
  [646] = 210,
  [647] = 647,
  [648] = 211,
  [649] = 212,
  [650] = 213,
  [651] = 642,
  [652] = 304,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 217,
  [657] = 657,
  [658] = 658,
  [659] = 659,
  [660] = 481,
  [661] = 483,
  [662] = 484,
  [663] = 485,
  [664] = 503,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 564,
  [670] = 564,
  [671] = 671,
  [672] = 672,
  [673] = 673,
  [674] = 633,
  [675] = 465,
  [676] = 563,
  [677] = 677,
  [678] = 678,
  [679] = 568,
  [680] = 569,
  [681] = 597,
  [682] = 682,
  [683] = 598,
  [684] = 684,
  [685] = 685,
  [686] = 218,
  [687] = 219,
  [688] = 633,
  [689] = 465,
  [690] = 633,
  [691] = 465,
  [692] = 551,
  [693] = 693,
  [694] = 220,
  [695] = 221,
  [696] = 222,
  [697] = 223,
  [698] = 653,
  [699] = 654,
  [700] = 643,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 725,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 316,
  [738] = 318,
  [739] = 319,
  [740] = 321,
  [741] = 322,
  [742] = 742,
  [743] = 743,
  [744] = 588,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 315,
  [751] = 317,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 591,
  [760] = 592,
  [761] = 761,
  [762] = 315,
  [763] = 317,
  [764] = 302,
  [765] = 303,
  [766] = 304,
  [767] = 305,
  [768] = 306,
  [769] = 307,
  [770] = 770,
  [771] = 302,
  [772] = 303,
  [773] = 304,
  [774] = 305,
  [775] = 306,
  [776] = 307,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 711,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 302,
  [786] = 303,
  [787] = 787,
  [788] = 746,
  [789] = 304,
  [790] = 747,
  [791] = 748,
  [792] = 749,
  [793] = 671,
  [794] = 770,
  [795] = 305,
  [796] = 306,
  [797] = 307,
  [798] = 315,
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 572,
  [804] = 787,
  [805] = 805,
  [806] = 799,
  [807] = 800,
  [808] = 802,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 577,
  [813] = 580,
  [814] = 814,
  [815] = 815,
  [816] = 705,
  [817] = 817,
  [818] = 805,
  [819] = 819,
  [820] = 703,
  [821] = 735,
  [822] = 822,
  [823] = 809,
  [824] = 709,
  [825] = 713,
  [826] = 715,
  [827] = 317,
  [828] = 719,
  [829] = 829,
  [830] = 761,
  [831] = 777,
  [832] = 832,
  [833] = 639,
  [834] = 641,
  [835] = 710,
  [836] = 716,
  [837] = 717,
  [838] = 718,
  [839] = 720,
  [840] = 721,
  [841] = 841,
  [842] = 733,
  [843] = 745,
  [844] = 844,
  [845] = 546,
  [846] = 711,
  [847] = 847,
  [848] = 848,
  [849] = 711,
  [850] = 850,
  [851] = 810,
  [852] = 811,
  [853] = 853,
  [854] = 12,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 779,
  [859] = 814,
  [860] = 753,
  [861] = 754,
  [862] = 784,
  [863] = 863,
  [864] = 844,
  [865] = 865,
  [866] = 866,
  [867] = 782,
  [868] = 868,
  [869] = 869,
  [870] = 817,
  [871] = 819,
  [872] = 782,
  [873] = 782,
  [874] = 708,
  [875] = 815,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 893,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 315,
  [904] = 880,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 908,
  [909] = 909,
  [910] = 897,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 891,
  [915] = 876,
  [916] = 351,
  [917] = 917,
  [918] = 918,
  [919] = 891,
  [920] = 876,
  [921] = 352,
  [922] = 922,
  [923] = 923,
  [924] = 891,
  [925] = 876,
  [926] = 891,
  [927] = 927,
  [928] = 928,
  [929] = 891,
  [930] = 876,
  [931] = 891,
  [932] = 876,
  [933] = 891,
  [934] = 876,
  [935] = 935,
  [936] = 891,
  [937] = 876,
  [938] = 938,
  [939] = 939,
  [940] = 876,
  [941] = 941,
  [942] = 942,
  [943] = 877,
  [944] = 944,
  [945] = 945,
  [946] = 946,
  [947] = 881,
  [948] = 945,
  [949] = 949,
  [950] = 898,
  [951] = 951,
  [952] = 907,
  [953] = 317,
  [954] = 938,
  [955] = 955,
  [956] = 938,
  [957] = 938,
  [958] = 958,
  [959] = 938,
  [960] = 938,
  [961] = 938,
  [962] = 938,
  [963] = 938,
  [964] = 938,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 927,
  [969] = 969,
  [970] = 946,
  [971] = 965,
  [972] = 891,
  [973] = 966,
  [974] = 967,
  [975] = 876,
  [976] = 976,
  [977] = 977,
  [978] = 978,
  [979] = 865,
  [980] = 977,
  [981] = 981,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 989,
  [990] = 990,
  [991] = 991,
  [992] = 992,
  [993] = 993,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 997,
  [998] = 998,
  [999] = 988,
  [1000] = 989,
  [1001] = 990,
  [1002] = 991,
  [1003] = 1003,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 991,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 988,
  [1011] = 989,
  [1012] = 990,
  [1013] = 991,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 988,
  [1018] = 989,
  [1019] = 990,
  [1020] = 991,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 1023,
  [1024] = 988,
  [1025] = 989,
  [1026] = 990,
  [1027] = 991,
  [1028] = 1028,
  [1029] = 1029,
  [1030] = 984,
  [1031] = 988,
  [1032] = 989,
  [1033] = 990,
  [1034] = 991,
  [1035] = 1035,
  [1036] = 1036,
  [1037] = 1037,
  [1038] = 988,
  [1039] = 989,
  [1040] = 990,
  [1041] = 991,
  [1042] = 581,
  [1043] = 1043,
  [1044] = 988,
  [1045] = 988,
  [1046] = 989,
  [1047] = 990,
  [1048] = 991,
  [1049] = 991,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1052,
  [1053] = 1053,
  [1054] = 1054,
  [1055] = 1055,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1037,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 1063,
  [1064] = 1036,
  [1065] = 1043,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 978,
  [1072] = 1022,
  [1073] = 1073,
  [1074] = 1066,
  [1075] = 1067,
  [1076] = 1068,
  [1077] = 1028,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 981,
  [1081] = 1081,
  [1082] = 1055,
  [1083] = 1083,
  [1084] = 1084,
  [1085] = 1023,
  [1086] = 1073,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 989,
  [1090] = 1078,
  [1091] = 1091,
  [1092] = 12,
  [1093] = 1093,
  [1094] = 1094,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 983,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1035,
  [1105] = 1105,
  [1106] = 1106,
  [1107] = 1107,
  [1108] = 990,
  [1109] = 1109,
  [1110] = 1062,
  [1111] = 1016,
  [1112] = 1112,
  [1113] = 1079,
  [1114] = 1029,
  [1115] = 1115,
  [1116] = 1058,
  [1117] = 988,
  [1118] = 989,
  [1119] = 991,
  [1120] = 990,
  [1121] = 1121,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(297);
      ADVANCE_MAP(
        '#', 298,
        '(', 629,
        ')', 630,
        '*', 553,
        '+', 326,
        ',', 631,
        '-', 327,
        '0', 309,
        '1', 310,
        ':', 628,
        '=', 323,
        '?', 626,
        '@', 479,
        'B', 645,
        'J', 648,
        'N', 651,
        'P', 633,
        'T', 636,
        '[', 328,
        '_', 308,
        'a', 405,
        'b', 467,
        'c', 329,
        'd', 372,
        'e', 330,
        'f', 331,
        'g', 336,
        'h', 339,
        'i', 396,
        'k', 385,
        'l', 335,
        'm', 334,
        'n', 392,
        'p', 332,
        'r', 340,
        's', 356,
        't', 333,
        'u', 447,
        'w', 410,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(533);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 298,
        '(', 629,
        ')', 630,
        '*', 553,
        '+', 22,
        ',', 631,
        '-', 23,
        '0', 312,
        '1', 311,
        ':', 628,
        '=', 323,
        '?', 626,
        '@', 223,
        'B', 645,
        'J', 648,
        'N', 651,
        'P', 633,
        'T', 636,
        '[', 25,
        '_', 308,
        'a', 124,
        'b', 206,
        'c', 26,
        'd', 90,
        'e', 27,
        'f', 28,
        'g', 35,
        'h', 38,
        'i', 113,
        'k', 98,
        'l', 34,
        'm', 33,
        'n', 107,
        'p', 29,
        'r', 39,
        's', 59,
        't', 30,
        'u', 186,
        'w', 132,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(653);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 298,
        '-', 24,
        ':', 628,
        'b', 289,
        'f', 134,
        'i', 112,
        'l', 53,
        'p', 241,
        's', 111,
        'u', 252,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '1') ADVANCE(311);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'w') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 298,
        'a', 746,
        'd', 742,
        'g', 696,
        'k', 700,
        'm', 680,
        'r', 697,
        's', 702,
        '\t', 671,
        ' ', 671,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 298,
        'a', 747,
        'd', 742,
        'k', 700,
        'r', 705,
        's', 703,
        '\t', 672,
        ' ', 672,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(715);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(629);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(553);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(538);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(324);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(627);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(627);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(307);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(286);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        'a', 123,
        'c', 127,
        'd', 99,
        'f', 166,
        'i', 204,
        'l', 51,
        'p', 240,
        's', 106,
        't', 44,
        'w', 145,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(653);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'k') ADVANCE(581);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'k') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(621);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(246);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(217);
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(605);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(596);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(606);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(133);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(622);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(557);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 151:
      if (lookahead == 'k') ADVANCE(592);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(580);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(570);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(615);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(617);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(619);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(594);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(595);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(614);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(613);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 220:
      if (lookahead == 'p') ADVANCE(588);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(547);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(322);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(254);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(257);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(612);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(591);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 282:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 285:
      if (lookahead == 'w') ADVANCE(572);
      END_STATE();
    case 286:
      if (lookahead == 'w') ADVANCE(185);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 288:
      if (lookahead == 'x') ADVANCE(261);
      END_STATE();
    case 289:
      if (lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 293:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(301);
      END_STATE();
    case 294:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(294);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 295:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 296:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__doc_space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(309);
      if (lookahead == '1') ADVANCE(310);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '1') ADVANCE(311);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'h') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'x') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead == 'u') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'k') ADVANCE(581);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead == 'y') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(620);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(338);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(411);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'w') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead == 'u') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead == 'y') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead == 'p') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'g') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_async_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_await_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'f') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'l') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'n') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 't') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (lookahead == 'u') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '-') ADVANCE(679);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '1') ADVANCE(311);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == 'w') ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '_') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 298,
        'a', 746,
        'd', 742,
        'g', 696,
        'k', 700,
        'm', 680,
        'r', 697,
        's', 702,
        '\t', 671,
        ' ', 671,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 298,
        'a', 747,
        'd', 742,
        'k', 700,
        'r', 705,
        's', 703,
        '\t', 672,
        ' ', 672,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'a') ADVANCE(749);
      if (lookahead == 'd') ADVANCE(708);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'f') ADVANCE(715);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(764);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(760);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(741);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'n') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(581);
      if (lookahead == 'y') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 'w') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(764);
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
  [5] = {.lex_state = 9, .external_lex_state = 4},
  [6] = {.lex_state = 9, .external_lex_state = 4},
  [7] = {.lex_state = 10, .external_lex_state = 5},
  [8] = {.lex_state = 10, .external_lex_state = 5},
  [9] = {.lex_state = 1, .external_lex_state = 6},
  [10] = {.lex_state = 1, .external_lex_state = 6},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 10, .external_lex_state = 5},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 12, .external_lex_state = 7},
  [18] = {.lex_state = 12, .external_lex_state = 7},
  [19] = {.lex_state = 12, .external_lex_state = 7},
  [20] = {.lex_state = 12, .external_lex_state = 7},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2, .external_lex_state = 7},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2, .external_lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 8},
  [40] = {.lex_state = 0, .external_lex_state = 8},
  [41] = {.lex_state = 0, .external_lex_state = 8},
  [42] = {.lex_state = 0, .external_lex_state = 8},
  [43] = {.lex_state = 0, .external_lex_state = 8},
  [44] = {.lex_state = 6, .external_lex_state = 7},
  [45] = {.lex_state = 4, .external_lex_state = 7},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 3, .external_lex_state = 7},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 3, .external_lex_state = 7},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 4, .external_lex_state = 7},
  [55] = {.lex_state = 0, .external_lex_state = 8},
  [56] = {.lex_state = 6, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 9},
  [58] = {.lex_state = 0, .external_lex_state = 8},
  [59] = {.lex_state = 0, .external_lex_state = 10},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 4, .external_lex_state = 7},
  [62] = {.lex_state = 4, .external_lex_state = 7},
  [63] = {.lex_state = 4, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 11},
  [65] = {.lex_state = 4, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 12},
  [67] = {.lex_state = 0, .external_lex_state = 12},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0, .external_lex_state = 9},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0, .external_lex_state = 12},
  [72] = {.lex_state = 0, .external_lex_state = 9},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0, .external_lex_state = 11},
  [75] = {.lex_state = 0, .external_lex_state = 9},
  [76] = {.lex_state = 0, .external_lex_state = 11},
  [77] = {.lex_state = 0, .external_lex_state = 9},
  [78] = {.lex_state = 0, .external_lex_state = 9},
  [79] = {.lex_state = 4, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 9},
  [81] = {.lex_state = 0, .external_lex_state = 9},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 10},
  [84] = {.lex_state = 0, .external_lex_state = 10},
  [85] = {.lex_state = 4, .external_lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 13},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 9},
  [91] = {.lex_state = 0, .external_lex_state = 9},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 14},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 15},
  [96] = {.lex_state = 0, .external_lex_state = 16},
  [97] = {.lex_state = 0, .external_lex_state = 15},
  [98] = {.lex_state = 0, .external_lex_state = 17},
  [99] = {.lex_state = 0, .external_lex_state = 15},
  [100] = {.lex_state = 0, .external_lex_state = 10},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 10},
  [103] = {.lex_state = 0, .external_lex_state = 17},
  [104] = {.lex_state = 0, .external_lex_state = 9},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 9},
  [108] = {.lex_state = 0, .external_lex_state = 13},
  [109] = {.lex_state = 14, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 16},
  [111] = {.lex_state = 0, .external_lex_state = 9},
  [112] = {.lex_state = 14, .external_lex_state = 7},
  [113] = {.lex_state = 0, .external_lex_state = 16},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 9},
  [116] = {.lex_state = 0, .external_lex_state = 14},
  [117] = {.lex_state = 0, .external_lex_state = 18},
  [118] = {.lex_state = 0, .external_lex_state = 19},
  [119] = {.lex_state = 0, .external_lex_state = 9},
  [120] = {.lex_state = 14, .external_lex_state = 7},
  [121] = {.lex_state = 0, .external_lex_state = 9},
  [122] = {.lex_state = 0, .external_lex_state = 18},
  [123] = {.lex_state = 0, .external_lex_state = 9},
  [124] = {.lex_state = 0, .external_lex_state = 17},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 14, .external_lex_state = 7},
  [127] = {.lex_state = 0, .external_lex_state = 19},
  [128] = {.lex_state = 0, .external_lex_state = 16},
  [129] = {.lex_state = 0, .external_lex_state = 16},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 13},
  [132] = {.lex_state = 0, .external_lex_state = 13},
  [133] = {.lex_state = 0, .external_lex_state = 9},
  [134] = {.lex_state = 0, .external_lex_state = 13},
  [135] = {.lex_state = 0, .external_lex_state = 13},
  [136] = {.lex_state = 0, .external_lex_state = 13},
  [137] = {.lex_state = 0, .external_lex_state = 13},
  [138] = {.lex_state = 0, .external_lex_state = 13},
  [139] = {.lex_state = 0, .external_lex_state = 14},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 13},
  [147] = {.lex_state = 0, .external_lex_state = 19},
  [148] = {.lex_state = 0, .external_lex_state = 9},
  [149] = {.lex_state = 0, .external_lex_state = 14},
  [150] = {.lex_state = 0, .external_lex_state = 20},
  [151] = {.lex_state = 0, .external_lex_state = 17},
  [152] = {.lex_state = 0, .external_lex_state = 9},
  [153] = {.lex_state = 0, .external_lex_state = 20},
  [154] = {.lex_state = 0, .external_lex_state = 20},
  [155] = {.lex_state = 0, .external_lex_state = 20},
  [156] = {.lex_state = 0, .external_lex_state = 19},
  [157] = {.lex_state = 0, .external_lex_state = 20},
  [158] = {.lex_state = 0, .external_lex_state = 20},
  [159] = {.lex_state = 14, .external_lex_state = 7},
  [160] = {.lex_state = 0, .external_lex_state = 17},
  [161] = {.lex_state = 0, .external_lex_state = 20},
  [162] = {.lex_state = 0, .external_lex_state = 20},
  [163] = {.lex_state = 14, .external_lex_state = 7},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 20},
  [166] = {.lex_state = 14, .external_lex_state = 7},
  [167] = {.lex_state = 14, .external_lex_state = 7},
  [168] = {.lex_state = 14, .external_lex_state = 7},
  [169] = {.lex_state = 0, .external_lex_state = 20},
  [170] = {.lex_state = 0, .external_lex_state = 20},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 8, .external_lex_state = 7},
  [173] = {.lex_state = 0, .external_lex_state = 20},
  [174] = {.lex_state = 14, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 20},
  [176] = {.lex_state = 0, .external_lex_state = 20},
  [177] = {.lex_state = 0, .external_lex_state = 20},
  [178] = {.lex_state = 0, .external_lex_state = 20},
  [179] = {.lex_state = 0, .external_lex_state = 20},
  [180] = {.lex_state = 0, .external_lex_state = 20},
  [181] = {.lex_state = 17},
  [182] = {.lex_state = 14, .external_lex_state = 7},
  [183] = {.lex_state = 14, .external_lex_state = 7},
  [184] = {.lex_state = 14, .external_lex_state = 7},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 17},
  [188] = {.lex_state = 0, .external_lex_state = 20},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 14, .external_lex_state = 7},
  [191] = {.lex_state = 0, .external_lex_state = 20},
  [192] = {.lex_state = 11, .external_lex_state = 7},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 8, .external_lex_state = 7},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 11, .external_lex_state = 7},
  [197] = {.lex_state = 0, .external_lex_state = 10},
  [198] = {.lex_state = 0, .external_lex_state = 19},
  [199] = {.lex_state = 0, .external_lex_state = 10},
  [200] = {.lex_state = 0, .external_lex_state = 20},
  [201] = {.lex_state = 0, .external_lex_state = 10},
  [202] = {.lex_state = 0, .external_lex_state = 20},
  [203] = {.lex_state = 0, .external_lex_state = 20},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 20},
  [207] = {.lex_state = 0, .external_lex_state = 20},
  [208] = {.lex_state = 15, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 12},
  [210] = {.lex_state = 0, .external_lex_state = 12},
  [211] = {.lex_state = 0, .external_lex_state = 12},
  [212] = {.lex_state = 0, .external_lex_state = 12},
  [213] = {.lex_state = 0, .external_lex_state = 12},
  [214] = {.lex_state = 5, .external_lex_state = 7},
  [215] = {.lex_state = 1, .external_lex_state = 21},
  [216] = {.lex_state = 0, .external_lex_state = 19},
  [217] = {.lex_state = 0, .external_lex_state = 12},
  [218] = {.lex_state = 0, .external_lex_state = 12},
  [219] = {.lex_state = 0, .external_lex_state = 12},
  [220] = {.lex_state = 0, .external_lex_state = 12},
  [221] = {.lex_state = 0, .external_lex_state = 12},
  [222] = {.lex_state = 0, .external_lex_state = 12},
  [223] = {.lex_state = 0, .external_lex_state = 12},
  [224] = {.lex_state = 0, .external_lex_state = 12},
  [225] = {.lex_state = 0, .external_lex_state = 12},
  [226] = {.lex_state = 0, .external_lex_state = 12},
  [227] = {.lex_state = 0, .external_lex_state = 12},
  [228] = {.lex_state = 0, .external_lex_state = 12},
  [229] = {.lex_state = 0, .external_lex_state = 12},
  [230] = {.lex_state = 0, .external_lex_state = 12},
  [231] = {.lex_state = 0, .external_lex_state = 12},
  [232] = {.lex_state = 0, .external_lex_state = 12},
  [233] = {.lex_state = 0, .external_lex_state = 12},
  [234] = {.lex_state = 0, .external_lex_state = 12},
  [235] = {.lex_state = 0, .external_lex_state = 12},
  [236] = {.lex_state = 0, .external_lex_state = 12},
  [237] = {.lex_state = 0, .external_lex_state = 12},
  [238] = {.lex_state = 0, .external_lex_state = 12},
  [239] = {.lex_state = 0, .external_lex_state = 17},
  [240] = {.lex_state = 0, .external_lex_state = 20},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 0, .external_lex_state = 12},
  [243] = {.lex_state = 0, .external_lex_state = 12},
  [244] = {.lex_state = 0, .external_lex_state = 12},
  [245] = {.lex_state = 0, .external_lex_state = 12},
  [246] = {.lex_state = 0, .external_lex_state = 12},
  [247] = {.lex_state = 0, .external_lex_state = 12},
  [248] = {.lex_state = 0, .external_lex_state = 12},
  [249] = {.lex_state = 0, .external_lex_state = 12},
  [250] = {.lex_state = 0, .external_lex_state = 12},
  [251] = {.lex_state = 0, .external_lex_state = 12},
  [252] = {.lex_state = 0, .external_lex_state = 12},
  [253] = {.lex_state = 0, .external_lex_state = 12},
  [254] = {.lex_state = 0, .external_lex_state = 12},
  [255] = {.lex_state = 0, .external_lex_state = 12},
  [256] = {.lex_state = 0, .external_lex_state = 12},
  [257] = {.lex_state = 0, .external_lex_state = 12},
  [258] = {.lex_state = 0, .external_lex_state = 12},
  [259] = {.lex_state = 0, .external_lex_state = 12},
  [260] = {.lex_state = 0, .external_lex_state = 12},
  [261] = {.lex_state = 0, .external_lex_state = 12},
  [262] = {.lex_state = 0, .external_lex_state = 12},
  [263] = {.lex_state = 0, .external_lex_state = 12},
  [264] = {.lex_state = 0, .external_lex_state = 12},
  [265] = {.lex_state = 0, .external_lex_state = 12},
  [266] = {.lex_state = 0, .external_lex_state = 12},
  [267] = {.lex_state = 0, .external_lex_state = 12},
  [268] = {.lex_state = 0, .external_lex_state = 11},
  [269] = {.lex_state = 0, .external_lex_state = 12},
  [270] = {.lex_state = 0, .external_lex_state = 12},
  [271] = {.lex_state = 0, .external_lex_state = 12},
  [272] = {.lex_state = 0, .external_lex_state = 12},
  [273] = {.lex_state = 0, .external_lex_state = 12},
  [274] = {.lex_state = 0, .external_lex_state = 12},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 0, .external_lex_state = 11},
  [277] = {.lex_state = 0, .external_lex_state = 12},
  [278] = {.lex_state = 0, .external_lex_state = 12},
  [279] = {.lex_state = 0, .external_lex_state = 12},
  [280] = {.lex_state = 0, .external_lex_state = 12},
  [281] = {.lex_state = 0, .external_lex_state = 12},
  [282] = {.lex_state = 0, .external_lex_state = 12},
  [283] = {.lex_state = 0, .external_lex_state = 12},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 0, .external_lex_state = 22},
  [286] = {.lex_state = 0, .external_lex_state = 12},
  [287] = {.lex_state = 0, .external_lex_state = 12},
  [288] = {.lex_state = 0, .external_lex_state = 12},
  [289] = {.lex_state = 0, .external_lex_state = 12},
  [290] = {.lex_state = 0, .external_lex_state = 12},
  [291] = {.lex_state = 0, .external_lex_state = 12},
  [292] = {.lex_state = 0, .external_lex_state = 12},
  [293] = {.lex_state = 0, .external_lex_state = 12},
  [294] = {.lex_state = 0, .external_lex_state = 12},
  [295] = {.lex_state = 0, .external_lex_state = 12},
  [296] = {.lex_state = 0, .external_lex_state = 12},
  [297] = {.lex_state = 0, .external_lex_state = 12},
  [298] = {.lex_state = 0, .external_lex_state = 12},
  [299] = {.lex_state = 0, .external_lex_state = 12},
  [300] = {.lex_state = 0, .external_lex_state = 12},
  [301] = {.lex_state = 0, .external_lex_state = 12},
  [302] = {.lex_state = 0, .external_lex_state = 16},
  [303] = {.lex_state = 0, .external_lex_state = 16},
  [304] = {.lex_state = 0, .external_lex_state = 16},
  [305] = {.lex_state = 0, .external_lex_state = 16},
  [306] = {.lex_state = 0, .external_lex_state = 16},
  [307] = {.lex_state = 0, .external_lex_state = 16},
  [308] = {.lex_state = 0, .external_lex_state = 23},
  [309] = {.lex_state = 0, .external_lex_state = 8},
  [310] = {.lex_state = 0, .external_lex_state = 8},
  [311] = {.lex_state = 0, .external_lex_state = 8},
  [312] = {.lex_state = 0, .external_lex_state = 8},
  [313] = {.lex_state = 0, .external_lex_state = 8},
  [314] = {.lex_state = 0, .external_lex_state = 8},
  [315] = {.lex_state = 0, .external_lex_state = 16},
  [316] = {.lex_state = 0, .external_lex_state = 12},
  [317] = {.lex_state = 0, .external_lex_state = 16},
  [318] = {.lex_state = 0, .external_lex_state = 12},
  [319] = {.lex_state = 0, .external_lex_state = 12},
  [320] = {.lex_state = 0, .external_lex_state = 24},
  [321] = {.lex_state = 0, .external_lex_state = 12},
  [322] = {.lex_state = 0, .external_lex_state = 12},
  [323] = {.lex_state = 0, .external_lex_state = 20},
  [324] = {.lex_state = 0, .external_lex_state = 11},
  [325] = {.lex_state = 0, .external_lex_state = 11},
  [326] = {.lex_state = 0, .external_lex_state = 11},
  [327] = {.lex_state = 0, .external_lex_state = 11},
  [328] = {.lex_state = 0, .external_lex_state = 12},
  [329] = {.lex_state = 0, .external_lex_state = 11},
  [330] = {.lex_state = 0, .external_lex_state = 2},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 15, .external_lex_state = 7},
  [333] = {.lex_state = 0, .external_lex_state = 11},
  [334] = {.lex_state = 0, .external_lex_state = 11},
  [335] = {.lex_state = 0, .external_lex_state = 12},
  [336] = {.lex_state = 0, .external_lex_state = 12},
  [337] = {.lex_state = 0, .external_lex_state = 12},
  [338] = {.lex_state = 0, .external_lex_state = 12},
  [339] = {.lex_state = 0, .external_lex_state = 12},
  [340] = {.lex_state = 0, .external_lex_state = 12},
  [341] = {.lex_state = 0, .external_lex_state = 8},
  [342] = {.lex_state = 0, .external_lex_state = 8},
  [343] = {.lex_state = 0, .external_lex_state = 12},
  [344] = {.lex_state = 0, .external_lex_state = 12},
  [345] = {.lex_state = 14, .external_lex_state = 7},
  [346] = {.lex_state = 0, .external_lex_state = 22},
  [347] = {.lex_state = 0, .external_lex_state = 22},
  [348] = {.lex_state = 0, .external_lex_state = 24},
  [349] = {.lex_state = 0, .external_lex_state = 23},
  [350] = {.lex_state = 0, .external_lex_state = 20},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 25},
  [354] = {.lex_state = 0, .external_lex_state = 20},
  [355] = {.lex_state = 14, .external_lex_state = 7},
  [356] = {.lex_state = 0, .external_lex_state = 8},
  [357] = {.lex_state = 0, .external_lex_state = 8},
  [358] = {.lex_state = 19},
  [359] = {.lex_state = 17},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 24},
  [363] = {.lex_state = 17},
  [364] = {.lex_state = 0, .external_lex_state = 20},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 5, .external_lex_state = 7},
  [367] = {.lex_state = 0, .external_lex_state = 20},
  [368] = {.lex_state = 14, .external_lex_state = 7},
  [369] = {.lex_state = 0, .external_lex_state = 25},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 5, .external_lex_state = 7},
  [373] = {.lex_state = 0, .external_lex_state = 20},
  [374] = {.lex_state = 17},
  [375] = {.lex_state = 0, .external_lex_state = 24},
  [376] = {.lex_state = 0, .external_lex_state = 23},
  [377] = {.lex_state = 0, .external_lex_state = 23},
  [378] = {.lex_state = 17},
  [379] = {.lex_state = 5, .external_lex_state = 7},
  [380] = {.lex_state = 0, .external_lex_state = 22},
  [381] = {.lex_state = 0, .external_lex_state = 23},
  [382] = {.lex_state = 0, .external_lex_state = 12},
  [383] = {.lex_state = 0, .external_lex_state = 19},
  [384] = {.lex_state = 14, .external_lex_state = 7},
  [385] = {.lex_state = 0, .external_lex_state = 23},
  [386] = {.lex_state = 0, .external_lex_state = 22},
  [387] = {.lex_state = 0, .external_lex_state = 19},
  [388] = {.lex_state = 0, .external_lex_state = 22},
  [389] = {.lex_state = 0, .external_lex_state = 23},
  [390] = {.lex_state = 0, .external_lex_state = 23},
  [391] = {.lex_state = 0, .external_lex_state = 23},
  [392] = {.lex_state = 0, .external_lex_state = 23},
  [393] = {.lex_state = 0, .external_lex_state = 23},
  [394] = {.lex_state = 0, .external_lex_state = 22},
  [395] = {.lex_state = 19},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 0, .external_lex_state = 23},
  [398] = {.lex_state = 0, .external_lex_state = 23},
  [399] = {.lex_state = 0, .external_lex_state = 17},
  [400] = {.lex_state = 0, .external_lex_state = 22},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 0, .external_lex_state = 23},
  [403] = {.lex_state = 0, .external_lex_state = 22},
  [404] = {.lex_state = 0, .external_lex_state = 22},
  [405] = {.lex_state = 17},
  [406] = {.lex_state = 0, .external_lex_state = 17},
  [407] = {.lex_state = 1, .external_lex_state = 7},
  [408] = {.lex_state = 1, .external_lex_state = 7},
  [409] = {.lex_state = 1, .external_lex_state = 7},
  [410] = {.lex_state = 17},
  [411] = {.lex_state = 0, .external_lex_state = 23},
  [412] = {.lex_state = 0, .external_lex_state = 24},
  [413] = {.lex_state = 0, .external_lex_state = 12},
  [414] = {.lex_state = 0, .external_lex_state = 12},
  [415] = {.lex_state = 0, .external_lex_state = 25},
  [416] = {.lex_state = 0, .external_lex_state = 12},
  [417] = {.lex_state = 0, .external_lex_state = 25},
  [418] = {.lex_state = 0, .external_lex_state = 12},
  [419] = {.lex_state = 0, .external_lex_state = 23},
  [420] = {.lex_state = 0, .external_lex_state = 23},
  [421] = {.lex_state = 17},
  [422] = {.lex_state = 0, .external_lex_state = 12},
  [423] = {.lex_state = 0, .external_lex_state = 12},
  [424] = {.lex_state = 0, .external_lex_state = 12},
  [425] = {.lex_state = 0, .external_lex_state = 20},
  [426] = {.lex_state = 0, .external_lex_state = 20},
  [427] = {.lex_state = 0, .external_lex_state = 20},
  [428] = {.lex_state = 0, .external_lex_state = 12},
  [429] = {.lex_state = 0, .external_lex_state = 11},
  [430] = {.lex_state = 0, .external_lex_state = 9},
  [431] = {.lex_state = 0, .external_lex_state = 9},
  [432] = {.lex_state = 0, .external_lex_state = 9},
  [433] = {.lex_state = 0, .external_lex_state = 9},
  [434] = {.lex_state = 0, .external_lex_state = 9},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 9},
  [437] = {.lex_state = 0, .external_lex_state = 9},
  [438] = {.lex_state = 0, .external_lex_state = 9},
  [439] = {.lex_state = 0, .external_lex_state = 9},
  [440] = {.lex_state = 0, .external_lex_state = 9},
  [441] = {.lex_state = 0, .external_lex_state = 9},
  [442] = {.lex_state = 0, .external_lex_state = 9},
  [443] = {.lex_state = 0, .external_lex_state = 9},
  [444] = {.lex_state = 0, .external_lex_state = 9},
  [445] = {.lex_state = 0, .external_lex_state = 9},
  [446] = {.lex_state = 0, .external_lex_state = 9},
  [447] = {.lex_state = 0, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 9},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 1, .external_lex_state = 7},
  [453] = {.lex_state = 1, .external_lex_state = 7},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 9},
  [457] = {.lex_state = 0, .external_lex_state = 9},
  [458] = {.lex_state = 0, .external_lex_state = 9},
  [459] = {.lex_state = 0, .external_lex_state = 9},
  [460] = {.lex_state = 0, .external_lex_state = 9},
  [461] = {.lex_state = 0, .external_lex_state = 9},
  [462] = {.lex_state = 0, .external_lex_state = 9},
  [463] = {.lex_state = 0, .external_lex_state = 9},
  [464] = {.lex_state = 0, .external_lex_state = 9},
  [465] = {.lex_state = 0, .external_lex_state = 26},
  [466] = {.lex_state = 0, .external_lex_state = 9},
  [467] = {.lex_state = 0, .external_lex_state = 9},
  [468] = {.lex_state = 0, .external_lex_state = 9},
  [469] = {.lex_state = 0, .external_lex_state = 9},
  [470] = {.lex_state = 0, .external_lex_state = 9},
  [471] = {.lex_state = 0, .external_lex_state = 9},
  [472] = {.lex_state = 0, .external_lex_state = 9},
  [473] = {.lex_state = 0, .external_lex_state = 9},
  [474] = {.lex_state = 0, .external_lex_state = 27},
  [475] = {.lex_state = 1, .external_lex_state = 7},
  [476] = {.lex_state = 1, .external_lex_state = 7},
  [477] = {.lex_state = 0, .external_lex_state = 9},
  [478] = {.lex_state = 0, .external_lex_state = 9},
  [479] = {.lex_state = 0, .external_lex_state = 9},
  [480] = {.lex_state = 0, .external_lex_state = 9},
  [481] = {.lex_state = 14, .external_lex_state = 7},
  [482] = {.lex_state = 0, .external_lex_state = 9},
  [483] = {.lex_state = 14, .external_lex_state = 7},
  [484] = {.lex_state = 14, .external_lex_state = 7},
  [485] = {.lex_state = 14, .external_lex_state = 7},
  [486] = {.lex_state = 0, .external_lex_state = 9},
  [487] = {.lex_state = 0, .external_lex_state = 26},
  [488] = {.lex_state = 0, .external_lex_state = 18},
  [489] = {.lex_state = 0, .external_lex_state = 9},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 0, .external_lex_state = 9},
  [493] = {.lex_state = 0, .external_lex_state = 9},
  [494] = {.lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 9},
  [496] = {.lex_state = 0, .external_lex_state = 9},
  [497] = {.lex_state = 0, .external_lex_state = 9},
  [498] = {.lex_state = 0, .external_lex_state = 9},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 9},
  [501] = {.lex_state = 0, .external_lex_state = 18},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 17},
  [504] = {.lex_state = 0, .external_lex_state = 9},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 9},
  [507] = {.lex_state = 0, .external_lex_state = 9},
  [508] = {.lex_state = 0, .external_lex_state = 9},
  [509] = {.lex_state = 0, .external_lex_state = 9},
  [510] = {.lex_state = 0, .external_lex_state = 9},
  [511] = {.lex_state = 0, .external_lex_state = 9},
  [512] = {.lex_state = 0, .external_lex_state = 18},
  [513] = {.lex_state = 0, .external_lex_state = 18},
  [514] = {.lex_state = 0, .external_lex_state = 9},
  [515] = {.lex_state = 0, .external_lex_state = 9},
  [516] = {.lex_state = 0, .external_lex_state = 9},
  [517] = {.lex_state = 0, .external_lex_state = 9},
  [518] = {.lex_state = 0, .external_lex_state = 18},
  [519] = {.lex_state = 0, .external_lex_state = 9},
  [520] = {.lex_state = 0, .external_lex_state = 9},
  [521] = {.lex_state = 0, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 9},
  [523] = {.lex_state = 0, .external_lex_state = 9},
  [524] = {.lex_state = 0, .external_lex_state = 9},
  [525] = {.lex_state = 0, .external_lex_state = 9},
  [526] = {.lex_state = 0, .external_lex_state = 9},
  [527] = {.lex_state = 0, .external_lex_state = 9},
  [528] = {.lex_state = 0, .external_lex_state = 9},
  [529] = {.lex_state = 0, .external_lex_state = 9},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 0, .external_lex_state = 9},
  [532] = {.lex_state = 0, .external_lex_state = 9},
  [533] = {.lex_state = 0, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 9},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 9},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 26},
  [540] = {.lex_state = 0, .external_lex_state = 9},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 2},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 2},
  [546] = {.lex_state = 7, .external_lex_state = 7},
  [547] = {.lex_state = 14, .external_lex_state = 7},
  [548] = {.lex_state = 0, .external_lex_state = 9},
  [549] = {.lex_state = 7, .external_lex_state = 7},
  [550] = {.lex_state = 14, .external_lex_state = 7},
  [551] = {.lex_state = 1},
  [552] = {.lex_state = 0, .external_lex_state = 2},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 0, .external_lex_state = 7},
  [555] = {.lex_state = 0, .external_lex_state = 27},
  [556] = {.lex_state = 0, .external_lex_state = 7},
  [557] = {.lex_state = 0, .external_lex_state = 2},
  [558] = {.lex_state = 0, .external_lex_state = 7},
  [559] = {.lex_state = 0, .external_lex_state = 2},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 15},
  [562] = {.lex_state = 0, .external_lex_state = 15},
  [563] = {.lex_state = 13, .external_lex_state = 7},
  [564] = {.lex_state = 0, .external_lex_state = 28},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 2},
  [568] = {.lex_state = 7, .external_lex_state = 7},
  [569] = {.lex_state = 16, .external_lex_state = 7},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 0, .external_lex_state = 2},
  [572] = {.lex_state = 1},
  [573] = {.lex_state = 0, .external_lex_state = 9},
  [574] = {.lex_state = 0, .external_lex_state = 9},
  [575] = {.lex_state = 0, .external_lex_state = 9},
  [576] = {.lex_state = 0, .external_lex_state = 9},
  [577] = {.lex_state = 1},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 2},
  [580] = {.lex_state = 1},
  [581] = {.lex_state = 1},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 9},
  [585] = {.lex_state = 1},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 9},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 9},
  [592] = {.lex_state = 0, .external_lex_state = 9},
  [593] = {.lex_state = 0, .external_lex_state = 7},
  [594] = {.lex_state = 0, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 9},
  [596] = {.lex_state = 75},
  [597] = {.lex_state = 75},
  [598] = {.lex_state = 18},
  [599] = {.lex_state = 0, .external_lex_state = 2},
  [600] = {.lex_state = 0, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 0, .external_lex_state = 2},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 5, .external_lex_state = 7},
  [609] = {.lex_state = 0, .external_lex_state = 9},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 0, .external_lex_state = 9},
  [612] = {.lex_state = 0, .external_lex_state = 9},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 0, .external_lex_state = 9},
  [615] = {.lex_state = 0, .external_lex_state = 9},
  [616] = {.lex_state = 0, .external_lex_state = 9},
  [617] = {.lex_state = 0, .external_lex_state = 9},
  [618] = {.lex_state = 0, .external_lex_state = 9},
  [619] = {.lex_state = 0, .external_lex_state = 9},
  [620] = {.lex_state = 0, .external_lex_state = 9},
  [621] = {.lex_state = 0, .external_lex_state = 9},
  [622] = {.lex_state = 0, .external_lex_state = 15},
  [623] = {.lex_state = 0, .external_lex_state = 15},
  [624] = {.lex_state = 0, .external_lex_state = 15},
  [625] = {.lex_state = 0, .external_lex_state = 15},
  [626] = {.lex_state = 0, .external_lex_state = 15},
  [627] = {.lex_state = 0, .external_lex_state = 15},
  [628] = {.lex_state = 0, .external_lex_state = 2},
  [629] = {.lex_state = 0, .external_lex_state = 15},
  [630] = {.lex_state = 0, .external_lex_state = 15},
  [631] = {.lex_state = 0, .external_lex_state = 2},
  [632] = {.lex_state = 0, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 26},
  [634] = {.lex_state = 0, .external_lex_state = 2},
  [635] = {.lex_state = 0, .external_lex_state = 9},
  [636] = {.lex_state = 0, .external_lex_state = 28},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 2},
  [639] = {.lex_state = 1},
  [640] = {.lex_state = 0, .external_lex_state = 9},
  [641] = {.lex_state = 1},
  [642] = {.lex_state = 1, .external_lex_state = 7},
  [643] = {.lex_state = 14, .external_lex_state = 7},
  [644] = {.lex_state = 0, .external_lex_state = 9},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 9},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 9},
  [649] = {.lex_state = 0, .external_lex_state = 9},
  [650] = {.lex_state = 0, .external_lex_state = 9},
  [651] = {.lex_state = 1, .external_lex_state = 7},
  [652] = {.lex_state = 0, .external_lex_state = 2},
  [653] = {.lex_state = 14, .external_lex_state = 7},
  [654] = {.lex_state = 14, .external_lex_state = 7},
  [655] = {.lex_state = 1, .external_lex_state = 21},
  [656] = {.lex_state = 0, .external_lex_state = 9},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 14, .external_lex_state = 7},
  [661] = {.lex_state = 14, .external_lex_state = 7},
  [662] = {.lex_state = 14, .external_lex_state = 7},
  [663] = {.lex_state = 14, .external_lex_state = 7},
  [664] = {.lex_state = 17},
  [665] = {.lex_state = 0, .external_lex_state = 2},
  [666] = {.lex_state = 0, .external_lex_state = 2},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 28},
  [670] = {.lex_state = 0, .external_lex_state = 28},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 9},
  [673] = {.lex_state = 0, .external_lex_state = 9},
  [674] = {.lex_state = 0, .external_lex_state = 26},
  [675] = {.lex_state = 0, .external_lex_state = 26},
  [676] = {.lex_state = 13, .external_lex_state = 7},
  [677] = {.lex_state = 1, .external_lex_state = 7},
  [678] = {.lex_state = 1, .external_lex_state = 7},
  [679] = {.lex_state = 7, .external_lex_state = 7},
  [680] = {.lex_state = 16, .external_lex_state = 7},
  [681] = {.lex_state = 75},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 18},
  [684] = {.lex_state = 0, .external_lex_state = 2},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 9},
  [687] = {.lex_state = 0, .external_lex_state = 9},
  [688] = {.lex_state = 0, .external_lex_state = 26},
  [689] = {.lex_state = 0, .external_lex_state = 26},
  [690] = {.lex_state = 0, .external_lex_state = 26},
  [691] = {.lex_state = 0, .external_lex_state = 26},
  [692] = {.lex_state = 1},
  [693] = {.lex_state = 0, .external_lex_state = 2},
  [694] = {.lex_state = 0, .external_lex_state = 9},
  [695] = {.lex_state = 0, .external_lex_state = 9},
  [696] = {.lex_state = 0, .external_lex_state = 9},
  [697] = {.lex_state = 0, .external_lex_state = 9},
  [698] = {.lex_state = 14, .external_lex_state = 7},
  [699] = {.lex_state = 14, .external_lex_state = 7},
  [700] = {.lex_state = 14, .external_lex_state = 7},
  [701] = {.lex_state = 0, .external_lex_state = 7},
  [702] = {.lex_state = 0, .external_lex_state = 7},
  [703] = {.lex_state = 0, .external_lex_state = 7},
  [704] = {.lex_state = 45},
  [705] = {.lex_state = 0, .external_lex_state = 7},
  [706] = {.lex_state = 0, .external_lex_state = 7},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 7},
  [709] = {.lex_state = 0, .external_lex_state = 7},
  [710] = {.lex_state = 0, .external_lex_state = 29},
  [711] = {.lex_state = 0, .external_lex_state = 7},
  [712] = {.lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 7},
  [714] = {.lex_state = 0, .external_lex_state = 7},
  [715] = {.lex_state = 0, .external_lex_state = 7},
  [716] = {.lex_state = 0, .external_lex_state = 7},
  [717] = {.lex_state = 0, .external_lex_state = 7},
  [718] = {.lex_state = 0, .external_lex_state = 7},
  [719] = {.lex_state = 1},
  [720] = {.lex_state = 0, .external_lex_state = 7},
  [721] = {.lex_state = 0, .external_lex_state = 7},
  [722] = {.lex_state = 17},
  [723] = {.lex_state = 0, .external_lex_state = 30},
  [724] = {.lex_state = 0, .external_lex_state = 7},
  [725] = {.lex_state = 0, .external_lex_state = 7},
  [726] = {.lex_state = 0, .external_lex_state = 23},
  [727] = {.lex_state = 1},
  [728] = {.lex_state = 17},
  [729] = {.lex_state = 0, .external_lex_state = 7},
  [730] = {.lex_state = 1, .external_lex_state = 7},
  [731] = {.lex_state = 0, .external_lex_state = 7},
  [732] = {.lex_state = 0, .external_lex_state = 7},
  [733] = {.lex_state = 0, .external_lex_state = 29},
  [734] = {.lex_state = 0, .external_lex_state = 7},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 0, .external_lex_state = 7},
  [737] = {.lex_state = 0, .external_lex_state = 23},
  [738] = {.lex_state = 0, .external_lex_state = 23},
  [739] = {.lex_state = 0, .external_lex_state = 23},
  [740] = {.lex_state = 0, .external_lex_state = 23},
  [741] = {.lex_state = 0, .external_lex_state = 23},
  [742] = {.lex_state = 0, .external_lex_state = 7},
  [743] = {.lex_state = 0, .external_lex_state = 28},
  [744] = {.lex_state = 0, .external_lex_state = 2},
  [745] = {.lex_state = 0, .external_lex_state = 7},
  [746] = {.lex_state = 0, .external_lex_state = 7},
  [747] = {.lex_state = 0, .external_lex_state = 7},
  [748] = {.lex_state = 0, .external_lex_state = 7},
  [749] = {.lex_state = 0, .external_lex_state = 7},
  [750] = {.lex_state = 0, .external_lex_state = 23},
  [751] = {.lex_state = 0, .external_lex_state = 23},
  [752] = {.lex_state = 0, .external_lex_state = 7},
  [753] = {.lex_state = 0, .external_lex_state = 7},
  [754] = {.lex_state = 0, .external_lex_state = 7},
  [755] = {.lex_state = 0, .external_lex_state = 30},
  [756] = {.lex_state = 1},
  [757] = {.lex_state = 5, .external_lex_state = 7},
  [758] = {.lex_state = 0, .external_lex_state = 7},
  [759] = {.lex_state = 0, .external_lex_state = 2},
  [760] = {.lex_state = 0, .external_lex_state = 2},
  [761] = {.lex_state = 0, .external_lex_state = 7},
  [762] = {.lex_state = 0, .external_lex_state = 24},
  [763] = {.lex_state = 0, .external_lex_state = 24},
  [764] = {.lex_state = 0, .external_lex_state = 23},
  [765] = {.lex_state = 0, .external_lex_state = 23},
  [766] = {.lex_state = 0, .external_lex_state = 23},
  [767] = {.lex_state = 0, .external_lex_state = 23},
  [768] = {.lex_state = 0, .external_lex_state = 23},
  [769] = {.lex_state = 0, .external_lex_state = 23},
  [770] = {.lex_state = 17},
  [771] = {.lex_state = 0, .external_lex_state = 24},
  [772] = {.lex_state = 0, .external_lex_state = 24},
  [773] = {.lex_state = 0, .external_lex_state = 24},
  [774] = {.lex_state = 0, .external_lex_state = 24},
  [775] = {.lex_state = 0, .external_lex_state = 24},
  [776] = {.lex_state = 0, .external_lex_state = 24},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 0, .external_lex_state = 7},
  [779] = {.lex_state = 1},
  [780] = {.lex_state = 0, .external_lex_state = 7},
  [781] = {.lex_state = 17},
  [782] = {.lex_state = 0, .external_lex_state = 28},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 20},
  [786] = {.lex_state = 0, .external_lex_state = 20},
  [787] = {.lex_state = 0, .external_lex_state = 7},
  [788] = {.lex_state = 0, .external_lex_state = 7},
  [789] = {.lex_state = 0, .external_lex_state = 20},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 1, .external_lex_state = 7},
  [794] = {.lex_state = 17},
  [795] = {.lex_state = 0, .external_lex_state = 20},
  [796] = {.lex_state = 0, .external_lex_state = 20},
  [797] = {.lex_state = 0, .external_lex_state = 20},
  [798] = {.lex_state = 0, .external_lex_state = 20},
  [799] = {.lex_state = 1},
  [800] = {.lex_state = 0, .external_lex_state = 7},
  [801] = {.lex_state = 0, .external_lex_state = 7},
  [802] = {.lex_state = 0, .external_lex_state = 7},
  [803] = {.lex_state = 1, .external_lex_state = 7},
  [804] = {.lex_state = 0, .external_lex_state = 7},
  [805] = {.lex_state = 0, .external_lex_state = 7},
  [806] = {.lex_state = 1},
  [807] = {.lex_state = 0, .external_lex_state = 7},
  [808] = {.lex_state = 0, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 7},
  [810] = {.lex_state = 0, .external_lex_state = 7},
  [811] = {.lex_state = 0, .external_lex_state = 7},
  [812] = {.lex_state = 1, .external_lex_state = 7},
  [813] = {.lex_state = 1, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 7},
  [815] = {.lex_state = 0, .external_lex_state = 7},
  [816] = {.lex_state = 0, .external_lex_state = 7},
  [817] = {.lex_state = 1},
  [818] = {.lex_state = 0, .external_lex_state = 7},
  [819] = {.lex_state = 0, .external_lex_state = 7},
  [820] = {.lex_state = 0, .external_lex_state = 7},
  [821] = {.lex_state = 1},
  [822] = {.lex_state = 1},
  [823] = {.lex_state = 0, .external_lex_state = 7},
  [824] = {.lex_state = 0, .external_lex_state = 7},
  [825] = {.lex_state = 0, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 7},
  [827] = {.lex_state = 0, .external_lex_state = 20},
  [828] = {.lex_state = 1},
  [829] = {.lex_state = 1},
  [830] = {.lex_state = 0, .external_lex_state = 7},
  [831] = {.lex_state = 0, .external_lex_state = 7},
  [832] = {.lex_state = 1, .external_lex_state = 7},
  [833] = {.lex_state = 1, .external_lex_state = 7},
  [834] = {.lex_state = 1, .external_lex_state = 7},
  [835] = {.lex_state = 0, .external_lex_state = 29},
  [836] = {.lex_state = 0, .external_lex_state = 7},
  [837] = {.lex_state = 0, .external_lex_state = 7},
  [838] = {.lex_state = 0, .external_lex_state = 7},
  [839] = {.lex_state = 0, .external_lex_state = 7},
  [840] = {.lex_state = 0, .external_lex_state = 7},
  [841] = {.lex_state = 0, .external_lex_state = 7},
  [842] = {.lex_state = 0, .external_lex_state = 29},
  [843] = {.lex_state = 0, .external_lex_state = 7},
  [844] = {.lex_state = 1},
  [845] = {.lex_state = 14, .external_lex_state = 7},
  [846] = {.lex_state = 0, .external_lex_state = 7},
  [847] = {.lex_state = 1, .external_lex_state = 7},
  [848] = {.lex_state = 0, .external_lex_state = 7},
  [849] = {.lex_state = 0, .external_lex_state = 7},
  [850] = {.lex_state = 5, .external_lex_state = 7},
  [851] = {.lex_state = 0, .external_lex_state = 7},
  [852] = {.lex_state = 0, .external_lex_state = 7},
  [853] = {.lex_state = 1, .external_lex_state = 7},
  [854] = {.lex_state = 18},
  [855] = {.lex_state = 0, .external_lex_state = 7},
  [856] = {.lex_state = 1, .external_lex_state = 21},
  [857] = {.lex_state = 0, .external_lex_state = 22},
  [858] = {.lex_state = 1},
  [859] = {.lex_state = 0, .external_lex_state = 7},
  [860] = {.lex_state = 0, .external_lex_state = 7},
  [861] = {.lex_state = 0, .external_lex_state = 7},
  [862] = {.lex_state = 0, .external_lex_state = 7},
  [863] = {.lex_state = 14, .external_lex_state = 7},
  [864] = {.lex_state = 14, .external_lex_state = 7},
  [865] = {.lex_state = 14, .external_lex_state = 7},
  [866] = {.lex_state = 1},
  [867] = {.lex_state = 0, .external_lex_state = 28},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 0, .external_lex_state = 7},
  [870] = {.lex_state = 1},
  [871] = {.lex_state = 0, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 28},
  [873] = {.lex_state = 0, .external_lex_state = 28},
  [874] = {.lex_state = 0, .external_lex_state = 7},
  [875] = {.lex_state = 0, .external_lex_state = 7},
  [876] = {.lex_state = 293, .external_lex_state = 31},
  [877] = {.lex_state = 45},
  [878] = {.lex_state = 19},
  [879] = {.lex_state = 294},
  [880] = {.lex_state = 0, .external_lex_state = 3},
  [881] = {.lex_state = 1},
  [882] = {.lex_state = 1},
  [883] = {.lex_state = 294},
  [884] = {.lex_state = 0, .external_lex_state = 32},
  [885] = {.lex_state = 1},
  [886] = {.lex_state = 0, .external_lex_state = 32},
  [887] = {.lex_state = 5},
  [888] = {.lex_state = 1},
  [889] = {.lex_state = 19},
  [890] = {.lex_state = 294},
  [891] = {.lex_state = 293, .external_lex_state = 31},
  [892] = {.lex_state = 0, .external_lex_state = 32},
  [893] = {.lex_state = 1},
  [894] = {.lex_state = 1},
  [895] = {.lex_state = 0, .external_lex_state = 7},
  [896] = {.lex_state = 1},
  [897] = {.lex_state = 1},
  [898] = {.lex_state = 0, .external_lex_state = 33},
  [899] = {.lex_state = 1},
  [900] = {.lex_state = 1},
  [901] = {.lex_state = 1},
  [902] = {.lex_state = 1},
  [903] = {.lex_state = 0, .external_lex_state = 28},
  [904] = {.lex_state = 0, .external_lex_state = 3},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 294},
  [907] = {.lex_state = 0, .external_lex_state = 33},
  [908] = {.lex_state = 1},
  [909] = {.lex_state = 17},
  [910] = {.lex_state = 1},
  [911] = {.lex_state = 19},
  [912] = {.lex_state = 295},
  [913] = {.lex_state = 1},
  [914] = {.lex_state = 293, .external_lex_state = 31},
  [915] = {.lex_state = 293, .external_lex_state = 31},
  [916] = {.lex_state = 0, .external_lex_state = 7},
  [917] = {.lex_state = 1},
  [918] = {.lex_state = 295},
  [919] = {.lex_state = 293, .external_lex_state = 31},
  [920] = {.lex_state = 293, .external_lex_state = 31},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 0, .external_lex_state = 30},
  [923] = {.lex_state = 17},
  [924] = {.lex_state = 293, .external_lex_state = 31},
  [925] = {.lex_state = 293, .external_lex_state = 31},
  [926] = {.lex_state = 293, .external_lex_state = 31},
  [927] = {.lex_state = 1},
  [928] = {.lex_state = 0, .external_lex_state = 32},
  [929] = {.lex_state = 293, .external_lex_state = 31},
  [930] = {.lex_state = 293, .external_lex_state = 31},
  [931] = {.lex_state = 293, .external_lex_state = 31},
  [932] = {.lex_state = 293, .external_lex_state = 31},
  [933] = {.lex_state = 293, .external_lex_state = 31},
  [934] = {.lex_state = 293, .external_lex_state = 31},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 293, .external_lex_state = 31},
  [937] = {.lex_state = 293, .external_lex_state = 31},
  [938] = {.lex_state = 1},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 293, .external_lex_state = 31},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 0, .external_lex_state = 7},
  [943] = {.lex_state = 45},
  [944] = {.lex_state = 0, .external_lex_state = 6},
  [945] = {.lex_state = 17},
  [946] = {.lex_state = 1},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 17},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 0, .external_lex_state = 33},
  [951] = {.lex_state = 0, .external_lex_state = 30},
  [952] = {.lex_state = 0, .external_lex_state = 33},
  [953] = {.lex_state = 0, .external_lex_state = 28},
  [954] = {.lex_state = 1},
  [955] = {.lex_state = 294},
  [956] = {.lex_state = 1},
  [957] = {.lex_state = 1},
  [958] = {.lex_state = 294},
  [959] = {.lex_state = 1},
  [960] = {.lex_state = 1},
  [961] = {.lex_state = 1},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 1},
  [964] = {.lex_state = 1},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 1},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 17},
  [970] = {.lex_state = 1},
  [971] = {.lex_state = 1},
  [972] = {.lex_state = 293, .external_lex_state = 31},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 293, .external_lex_state = 31},
  [976] = {.lex_state = 0, .external_lex_state = 7},
  [977] = {.lex_state = 0, .external_lex_state = 34},
  [978] = {.lex_state = 0, .external_lex_state = 34},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 0, .external_lex_state = 34},
  [981] = {.lex_state = 0, .external_lex_state = 34},
  [982] = {.lex_state = 45},
  [983] = {.lex_state = 0, .external_lex_state = 34},
  [984] = {.lex_state = 0, .external_lex_state = 34},
  [985] = {.lex_state = 0, .external_lex_state = 34},
  [986] = {.lex_state = 5},
  [987] = {.lex_state = 1},
  [988] = {.lex_state = 0, .external_lex_state = 31},
  [989] = {.lex_state = 0, .external_lex_state = 31},
  [990] = {.lex_state = 0, .external_lex_state = 31},
  [991] = {.lex_state = 0, .external_lex_state = 7},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 0, .external_lex_state = 34},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 1},
  [996] = {.lex_state = 1},
  [997] = {.lex_state = 1},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 0, .external_lex_state = 31},
  [1000] = {.lex_state = 0, .external_lex_state = 31},
  [1001] = {.lex_state = 0, .external_lex_state = 31},
  [1002] = {.lex_state = 0, .external_lex_state = 7},
  [1003] = {.lex_state = 45},
  [1004] = {.lex_state = 0, .external_lex_state = 34},
  [1005] = {.lex_state = 1},
  [1006] = {.lex_state = 0, .external_lex_state = 34},
  [1007] = {.lex_state = 0, .external_lex_state = 7},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 0, .external_lex_state = 34},
  [1010] = {.lex_state = 0, .external_lex_state = 31},
  [1011] = {.lex_state = 0, .external_lex_state = 31},
  [1012] = {.lex_state = 0, .external_lex_state = 31},
  [1013] = {.lex_state = 0, .external_lex_state = 7},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 1},
  [1016] = {.lex_state = 1},
  [1017] = {.lex_state = 0, .external_lex_state = 31},
  [1018] = {.lex_state = 0, .external_lex_state = 31},
  [1019] = {.lex_state = 0, .external_lex_state = 31},
  [1020] = {.lex_state = 0, .external_lex_state = 7},
  [1021] = {.lex_state = 0, .external_lex_state = 7},
  [1022] = {.lex_state = 45},
  [1023] = {.lex_state = 1},
  [1024] = {.lex_state = 0, .external_lex_state = 31},
  [1025] = {.lex_state = 0, .external_lex_state = 31},
  [1026] = {.lex_state = 0, .external_lex_state = 31},
  [1027] = {.lex_state = 0, .external_lex_state = 7},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 0, .external_lex_state = 34},
  [1030] = {.lex_state = 0, .external_lex_state = 34},
  [1031] = {.lex_state = 0, .external_lex_state = 31},
  [1032] = {.lex_state = 0, .external_lex_state = 31},
  [1033] = {.lex_state = 0, .external_lex_state = 31},
  [1034] = {.lex_state = 0, .external_lex_state = 7},
  [1035] = {.lex_state = 0, .external_lex_state = 34},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 0, .external_lex_state = 7},
  [1038] = {.lex_state = 0, .external_lex_state = 31},
  [1039] = {.lex_state = 0, .external_lex_state = 31},
  [1040] = {.lex_state = 0, .external_lex_state = 31},
  [1041] = {.lex_state = 0, .external_lex_state = 7},
  [1042] = {.lex_state = 19},
  [1043] = {.lex_state = 1},
  [1044] = {.lex_state = 0, .external_lex_state = 31},
  [1045] = {.lex_state = 0, .external_lex_state = 31},
  [1046] = {.lex_state = 0, .external_lex_state = 31},
  [1047] = {.lex_state = 0, .external_lex_state = 31},
  [1048] = {.lex_state = 0, .external_lex_state = 7},
  [1049] = {.lex_state = 0, .external_lex_state = 7},
  [1050] = {.lex_state = 0, .external_lex_state = 34},
  [1051] = {.lex_state = 0, .external_lex_state = 34},
  [1052] = {.lex_state = 1},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 0, .external_lex_state = 34},
  [1055] = {.lex_state = 1},
  [1056] = {.lex_state = 45},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 0, .external_lex_state = 34},
  [1059] = {.lex_state = 0, .external_lex_state = 7},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 296},
  [1063] = {.lex_state = 293},
  [1064] = {.lex_state = 1},
  [1065] = {.lex_state = 1},
  [1066] = {.lex_state = 1},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 45},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 0, .external_lex_state = 34},
  [1071] = {.lex_state = 0, .external_lex_state = 34},
  [1072] = {.lex_state = 45},
  [1073] = {.lex_state = 1},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 1},
  [1076] = {.lex_state = 45},
  [1077] = {.lex_state = 1},
  [1078] = {.lex_state = 1},
  [1079] = {.lex_state = 1},
  [1080] = {.lex_state = 0, .external_lex_state = 34},
  [1081] = {.lex_state = 1},
  [1082] = {.lex_state = 1},
  [1083] = {.lex_state = 1},
  [1084] = {.lex_state = 0, .external_lex_state = 34},
  [1085] = {.lex_state = 1},
  [1086] = {.lex_state = 1},
  [1087] = {.lex_state = 0, .external_lex_state = 7},
  [1088] = {.lex_state = 1},
  [1089] = {.lex_state = 0, .external_lex_state = 31},
  [1090] = {.lex_state = 1},
  [1091] = {.lex_state = 0, .external_lex_state = 31},
  [1092] = {.lex_state = 295},
  [1093] = {.lex_state = 0, .external_lex_state = 34},
  [1094] = {.lex_state = 1},
  [1095] = {.lex_state = 0, .external_lex_state = 34},
  [1096] = {.lex_state = 1},
  [1097] = {.lex_state = 1},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 1},
  [1100] = {.lex_state = 1},
  [1101] = {.lex_state = 0, .external_lex_state = 34},
  [1102] = {.lex_state = 1},
  [1103] = {.lex_state = 0, .external_lex_state = 34},
  [1104] = {.lex_state = 0, .external_lex_state = 34},
  [1105] = {.lex_state = 1},
  [1106] = {.lex_state = 1},
  [1107] = {.lex_state = 296},
  [1108] = {.lex_state = 0, .external_lex_state = 31},
  [1109] = {.lex_state = 31},
  [1110] = {.lex_state = 296},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 0, .external_lex_state = 34},
  [1113] = {.lex_state = 1},
  [1114] = {.lex_state = 0, .external_lex_state = 34},
  [1115] = {.lex_state = 0, .external_lex_state = 34},
  [1116] = {.lex_state = 0, .external_lex_state = 34},
  [1117] = {.lex_state = 0, .external_lex_state = 31},
  [1118] = {.lex_state = 0, .external_lex_state = 31},
  [1119] = {.lex_state = 0, .external_lex_state = 7},
  [1120] = {.lex_state = 0, .external_lex_state = 31},
  [1121] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__inline_comment] = ACTIONS(1),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Number] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Json] = ACTIONS(1),
    [anon_sym_Part] = ACTIONS(1),
    [sym_array_suffix] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym__one_integer_literal] = ACTIONS(1),
    [sym__other_integer_literal] = ACTIONS(1),
    [anon_sym_lanes] = ACTIONS(1),
    [anon_sym_models] = ACTIONS(1),
    [anon_sym_tools] = ACTIONS(1),
    [anon_sym_hands] = ACTIONS(1),
    [anon_sym_handoffs] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [sym_directive_value] = ACTIONS(1),
    [anon_sym_far] = ACTIONS(1),
    [anon_sym_near] = ACTIONS(1),
    [sym_default_keyword] = ACTIONS(1),
    [sym_none_keyword] = ACTIONS(1),
    [sym_all_keyword] = ACTIONS(1),
    [anon_sym_user] = ACTIONS(1),
    [anon_sym_assistant] = ACTIONS(1),
    [anon_sym_tool] = ACTIONS(1),
    [sym_with_keyword] = ACTIONS(1),
    [sym_struct_keyword] = ACTIONS(1),
    [sym_psyche_keyword] = ACTIONS(1),
    [sym_skill_keyword] = ACTIONS(1),
    [sym_service_keyword] = ACTIONS(1),
    [sym_prompt_keyword] = ACTIONS(1),
    [sym_context_keyword] = ACTIONS(1),
    [sym_instruct_keyword] = ACTIONS(1),
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
    [sym_arrow] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym_cap_kind] = ACTIONS(1),
    [sym_pascal_name] = ACTIONS(1),
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
    [sym__until_binding_start] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
    [sym__async_await_binding_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1014),
    [sym_item] = STATE(114),
    [sym__trivia] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(114),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(573),
    [sym__collection_operation] = STATE(573),
    [sym__async_await_operation] = STATE(573),
    [sym_let_statement] = STATE(573),
    [sym_exec_statement] = STATE(573),
    [sym_spawn_statement] = STATE(573),
    [sym__invalid_exec_binding] = STATE(574),
    [sym__invalid_until_binding] = STATE(575),
    [sym_run_statement] = STATE(573),
    [sym__async_run_statement] = STATE(576),
    [sym_await_statement] = STATE(573),
    [sym_implicit_run_statement] = STATE(573),
    [sym__implicit_run_line] = STATE(147),
    [sym_seek_statement] = STATE(573),
    [sym_ask_statement] = STATE(573),
    [sym_generate_statement] = STATE(573),
    [sym_reduce_statement] = STATE(573),
    [sym_map_statement] = STATE(573),
    [sym_keep_statement] = STATE(573),
    [sym_drop_statement] = STATE(573),
    [sym_sort_statement] = STATE(573),
    [sym_repeat_statement] = STATE(573),
    [sym_invalid_flow_reserved_statement] = STATE(573),
    [sym__query_directive_key] = STATE(863),
    [sym__route_directive_key] = STATE(863),
    [sym_directive_key] = STATE(700),
    [sym_role] = STATE(700),
    [sym__flow_reserved_word] = STATE(700),
    [sym__collection_binding_word] = STATE(700),
    [sym__async_await_binding_word] = STATE(700),
    [sym__agic_reserved_word] = STATE(700),
    [anon_sym_lanes] = ACTIONS(11),
    [anon_sym_models] = ACTIONS(13),
    [anon_sym_tools] = ACTIONS(13),
    [anon_sym_skills] = ACTIONS(13),
    [anon_sym_services] = ACTIONS(13),
    [anon_sym_psyches] = ACTIONS(13),
    [anon_sym_prompts] = ACTIONS(13),
    [anon_sym_hands] = ACTIONS(15),
    [anon_sym_handoffs] = ACTIONS(15),
    [anon_sym_user] = ACTIONS(17),
    [anon_sym_assistant] = ACTIONS(17),
    [anon_sym_tool] = ACTIONS(19),
    [sym_with_keyword] = ACTIONS(21),
    [sym_struct_keyword] = ACTIONS(21),
    [sym_psyche_keyword] = ACTIONS(23),
    [sym_skill_keyword] = ACTIONS(23),
    [sym_service_keyword] = ACTIONS(23),
    [sym_prompt_keyword] = ACTIONS(23),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(21),
    [sym_task_keyword] = ACTIONS(21),
    [sym_chore_keyword] = ACTIONS(21),
    [sym_flow_keyword] = ACTIONS(21),
    [sym_pass_keyword] = ACTIONS(25),
    [sym_flow_run_keyword] = ACTIONS(27),
    [sym_flow_async_keyword] = ACTIONS(29),
    [sym_flow_await_keyword] = ACTIONS(31),
    [sym_flow_exec_keyword] = ACTIONS(33),
    [sym_flow_spawn_keyword] = ACTIONS(35),
    [sym_flow_let_keyword] = ACTIONS(37),
    [sym_flow_seek_keyword] = ACTIONS(39),
    [sym_flow_ask_keyword] = ACTIONS(41),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(43),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(45),
    [sym_flow_map_keyword] = ACTIONS(47),
    [sym_flow_keep_keyword] = ACTIONS(49),
    [sym_flow_drop_keyword] = ACTIONS(51),
    [sym_flow_sort_keyword] = ACTIONS(53),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(55),
    [sym_flow_until_keyword] = ACTIONS(21),
    [sym_flow_from_keyword] = ACTIONS(21),
    [sym_flow_windowing_keyword] = ACTIONS(21),
    [sym_flow_using_keyword] = ACTIONS(21),
    [sym_flow_if_keyword] = ACTIONS(21),
    [sym_flow_by_keyword] = ACTIONS(21),
    [sym_flow_in_keyword] = ACTIONS(23),
    [sym_flow_lane_keyword] = ACTIONS(23),
    [sym_flow_ascending_keyword] = ACTIONS(21),
    [sym_flow_descending_keyword] = ACTIONS(21),
    [sym_flow_time_keyword] = ACTIONS(23),
    [sym_flow_times_keyword] = ACTIONS(21),
    [sym_flow_par_keyword] = ACTIONS(21),
    [sym_flow_first_keyword] = ACTIONS(21),
    [sym_flow_last_keyword] = ACTIONS(21),
    [sym_flow_top_keyword] = ACTIONS(21),
    [sym_flow_bottom_keyword] = ACTIONS(21),
    [sym_flow_think_keyword] = ACTIONS(21),
    [sym_flow_use_keyword] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(21),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_unfold] = ACTIONS(21),
    [anon_sym_each] = ACTIONS(21),
    [anon_sym_fold] = ACTIONS(21),
    [anon_sym_head] = ACTIONS(21),
    [anon_sym_tail] = ACTIONS(21),
    [sym__flow_raw_text] = ACTIONS(57),
  },
  [3] = {
    [sym__flow_operation] = STATE(573),
    [sym__collection_operation] = STATE(573),
    [sym__async_await_operation] = STATE(573),
    [sym_let_statement] = STATE(573),
    [sym_exec_statement] = STATE(573),
    [sym_spawn_statement] = STATE(573),
    [sym__invalid_exec_binding] = STATE(574),
    [sym__invalid_until_binding] = STATE(575),
    [sym_run_statement] = STATE(573),
    [sym__async_run_statement] = STATE(576),
    [sym_await_statement] = STATE(573),
    [sym_implicit_run_statement] = STATE(573),
    [sym__implicit_run_line] = STATE(147),
    [sym_seek_statement] = STATE(573),
    [sym_ask_statement] = STATE(573),
    [sym_generate_statement] = STATE(573),
    [sym_reduce_statement] = STATE(573),
    [sym_map_statement] = STATE(573),
    [sym_keep_statement] = STATE(573),
    [sym_drop_statement] = STATE(573),
    [sym_sort_statement] = STATE(573),
    [sym_repeat_statement] = STATE(573),
    [sym_invalid_flow_reserved_statement] = STATE(573),
    [sym__query_directive_key] = STATE(863),
    [sym__route_directive_key] = STATE(863),
    [sym_directive_key] = STATE(700),
    [sym_role] = STATE(700),
    [sym__flow_reserved_word] = STATE(700),
    [sym__collection_binding_word] = STATE(700),
    [sym__async_await_binding_word] = STATE(700),
    [sym__agic_reserved_word] = STATE(700),
    [anon_sym_lanes] = ACTIONS(11),
    [anon_sym_models] = ACTIONS(13),
    [anon_sym_tools] = ACTIONS(13),
    [anon_sym_skills] = ACTIONS(13),
    [anon_sym_services] = ACTIONS(13),
    [anon_sym_psyches] = ACTIONS(13),
    [anon_sym_prompts] = ACTIONS(13),
    [anon_sym_hands] = ACTIONS(15),
    [anon_sym_handoffs] = ACTIONS(15),
    [anon_sym_user] = ACTIONS(17),
    [anon_sym_assistant] = ACTIONS(17),
    [anon_sym_tool] = ACTIONS(19),
    [sym_with_keyword] = ACTIONS(21),
    [sym_struct_keyword] = ACTIONS(21),
    [sym_psyche_keyword] = ACTIONS(23),
    [sym_skill_keyword] = ACTIONS(23),
    [sym_service_keyword] = ACTIONS(23),
    [sym_prompt_keyword] = ACTIONS(23),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(21),
    [sym_task_keyword] = ACTIONS(21),
    [sym_chore_keyword] = ACTIONS(21),
    [sym_flow_keyword] = ACTIONS(21),
    [sym_pass_keyword] = ACTIONS(21),
    [sym_flow_run_keyword] = ACTIONS(27),
    [sym_flow_async_keyword] = ACTIONS(29),
    [sym_flow_await_keyword] = ACTIONS(31),
    [sym_flow_exec_keyword] = ACTIONS(33),
    [sym_flow_spawn_keyword] = ACTIONS(35),
    [sym_flow_let_keyword] = ACTIONS(37),
    [sym_flow_seek_keyword] = ACTIONS(39),
    [sym_flow_ask_keyword] = ACTIONS(41),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(43),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(45),
    [sym_flow_map_keyword] = ACTIONS(47),
    [sym_flow_keep_keyword] = ACTIONS(49),
    [sym_flow_drop_keyword] = ACTIONS(51),
    [sym_flow_sort_keyword] = ACTIONS(53),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(55),
    [sym_flow_until_keyword] = ACTIONS(21),
    [sym_flow_from_keyword] = ACTIONS(21),
    [sym_flow_windowing_keyword] = ACTIONS(21),
    [sym_flow_using_keyword] = ACTIONS(21),
    [sym_flow_if_keyword] = ACTIONS(21),
    [sym_flow_by_keyword] = ACTIONS(21),
    [sym_flow_in_keyword] = ACTIONS(23),
    [sym_flow_lane_keyword] = ACTIONS(23),
    [sym_flow_ascending_keyword] = ACTIONS(21),
    [sym_flow_descending_keyword] = ACTIONS(21),
    [sym_flow_time_keyword] = ACTIONS(23),
    [sym_flow_times_keyword] = ACTIONS(21),
    [sym_flow_par_keyword] = ACTIONS(21),
    [sym_flow_first_keyword] = ACTIONS(21),
    [sym_flow_last_keyword] = ACTIONS(21),
    [sym_flow_top_keyword] = ACTIONS(21),
    [sym_flow_bottom_keyword] = ACTIONS(21),
    [sym_flow_think_keyword] = ACTIONS(21),
    [sym_flow_use_keyword] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(21),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(21),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_unfold] = ACTIONS(21),
    [anon_sym_each] = ACTIONS(21),
    [anon_sym_fold] = ACTIONS(21),
    [anon_sym_head] = ACTIONS(21),
    [anon_sym_tail] = ACTIONS(21),
    [sym__flow_raw_text] = ACTIONS(57),
  },
  [4] = {
    [sym__flow_operation] = STATE(413),
    [sym__collection_operation] = STATE(413),
    [sym__async_await_operation] = STATE(413),
    [sym_let_statement] = STATE(413),
    [sym_exec_statement] = STATE(413),
    [sym_spawn_statement] = STATE(413),
    [sym__invalid_exec_binding] = STATE(414),
    [sym__invalid_until_binding] = STATE(416),
    [sym_run_statement] = STATE(413),
    [sym__async_run_statement] = STATE(418),
    [sym_await_statement] = STATE(413),
    [sym_implicit_run_statement] = STATE(413),
    [sym__implicit_run_line] = STATE(83),
    [sym_seek_statement] = STATE(413),
    [sym_ask_statement] = STATE(413),
    [sym_generate_statement] = STATE(413),
    [sym_reduce_statement] = STATE(413),
    [sym_map_statement] = STATE(413),
    [sym_keep_statement] = STATE(413),
    [sym_drop_statement] = STATE(413),
    [sym_sort_statement] = STATE(413),
    [sym_repeat_statement] = STATE(413),
    [sym_invalid_flow_reserved_statement] = STATE(413),
    [sym__query_directive_key] = STATE(863),
    [sym__route_directive_key] = STATE(863),
    [sym_directive_key] = STATE(643),
    [sym_role] = STATE(643),
    [sym__flow_reserved_word] = STATE(643),
    [sym__collection_binding_word] = STATE(643),
    [sym__async_await_binding_word] = STATE(643),
    [sym__agic_reserved_word] = STATE(643),
    [anon_sym_lanes] = ACTIONS(11),
    [anon_sym_models] = ACTIONS(13),
    [anon_sym_tools] = ACTIONS(13),
    [anon_sym_skills] = ACTIONS(13),
    [anon_sym_services] = ACTIONS(13),
    [anon_sym_psyches] = ACTIONS(13),
    [anon_sym_prompts] = ACTIONS(13),
    [anon_sym_hands] = ACTIONS(15),
    [anon_sym_handoffs] = ACTIONS(15),
    [anon_sym_user] = ACTIONS(17),
    [anon_sym_assistant] = ACTIONS(17),
    [anon_sym_tool] = ACTIONS(19),
    [sym_with_keyword] = ACTIONS(59),
    [sym_struct_keyword] = ACTIONS(59),
    [sym_psyche_keyword] = ACTIONS(61),
    [sym_skill_keyword] = ACTIONS(61),
    [sym_service_keyword] = ACTIONS(61),
    [sym_prompt_keyword] = ACTIONS(61),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(59),
    [sym_task_keyword] = ACTIONS(59),
    [sym_chore_keyword] = ACTIONS(59),
    [sym_flow_keyword] = ACTIONS(59),
    [sym_pass_keyword] = ACTIONS(59),
    [sym_flow_run_keyword] = ACTIONS(63),
    [sym_flow_async_keyword] = ACTIONS(65),
    [sym_flow_await_keyword] = ACTIONS(67),
    [sym_flow_exec_keyword] = ACTIONS(69),
    [sym_flow_spawn_keyword] = ACTIONS(71),
    [sym_flow_let_keyword] = ACTIONS(73),
    [sym_flow_seek_keyword] = ACTIONS(75),
    [sym_flow_ask_keyword] = ACTIONS(77),
    [sym_flow_scatter_keyword] = ACTIONS(59),
    [sym_flow_storm_keyword] = ACTIONS(59),
    [sym_flow_generate_keyword] = ACTIONS(79),
    [sym_flow_gather_keyword] = ACTIONS(59),
    [sym_flow_settle_keyword] = ACTIONS(59),
    [sym_flow_reduce_keyword] = ACTIONS(81),
    [sym_flow_map_keyword] = ACTIONS(83),
    [sym_flow_keep_keyword] = ACTIONS(85),
    [sym_flow_drop_keyword] = ACTIONS(87),
    [sym_flow_sort_keyword] = ACTIONS(89),
    [sym_flow_rank_keyword] = ACTIONS(59),
    [sym_flow_repeat_keyword] = ACTIONS(91),
    [sym_flow_until_keyword] = ACTIONS(59),
    [sym_flow_from_keyword] = ACTIONS(59),
    [sym_flow_windowing_keyword] = ACTIONS(59),
    [sym_flow_using_keyword] = ACTIONS(59),
    [sym_flow_if_keyword] = ACTIONS(59),
    [sym_flow_by_keyword] = ACTIONS(59),
    [sym_flow_in_keyword] = ACTIONS(61),
    [sym_flow_lane_keyword] = ACTIONS(61),
    [sym_flow_ascending_keyword] = ACTIONS(59),
    [sym_flow_descending_keyword] = ACTIONS(59),
    [sym_flow_time_keyword] = ACTIONS(61),
    [sym_flow_times_keyword] = ACTIONS(59),
    [sym_flow_par_keyword] = ACTIONS(59),
    [sym_flow_first_keyword] = ACTIONS(59),
    [sym_flow_last_keyword] = ACTIONS(59),
    [sym_flow_top_keyword] = ACTIONS(59),
    [sym_flow_bottom_keyword] = ACTIONS(59),
    [sym_flow_think_keyword] = ACTIONS(59),
    [sym_flow_use_keyword] = ACTIONS(61),
    [sym_thunk_keyword] = ACTIONS(59),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_unfold] = ACTIONS(59),
    [anon_sym_each] = ACTIONS(59),
    [anon_sym_fold] = ACTIONS(59),
    [anon_sym_head] = ACTIONS(59),
    [anon_sym_tail] = ACTIONS(59),
    [sym__flow_raw_text] = ACTIONS(93),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(97), 1,
      sym_flow_run_keyword,
    ACTIONS(99), 1,
      sym_flow_async_keyword,
    ACTIONS(101), 1,
      sym_flow_await_keyword,
    ACTIONS(103), 1,
      sym_flow_spawn_keyword,
    ACTIONS(105), 1,
      sym_flow_seek_keyword,
    ACTIONS(107), 1,
      sym_flow_ask_keyword,
    ACTIONS(109), 1,
      sym_flow_generate_keyword,
    ACTIONS(111), 1,
      sym_flow_reduce_keyword,
    ACTIONS(113), 1,
      sym_flow_map_keyword,
    ACTIONS(115), 1,
      sym_flow_keep_keyword,
    ACTIONS(117), 1,
      sym_flow_drop_keyword,
    ACTIONS(119), 1,
      sym_flow_sort_keyword,
    ACTIONS(121), 1,
      sym_flow_repeat_keyword,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(125), 1,
      sym__exec_binding_start,
    ACTIONS(127), 1,
      sym__until_binding_start,
    ACTIONS(129), 1,
      sym__variable_name,
    STATE(576), 1,
      sym__async_run_statement,
    STATE(970), 1,
      sym_local_name,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(635), 15,
      sym__flow_operation,
      sym__collection_operation,
      sym__async_await_operation,
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
  [79] = 21,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(129), 1,
      sym__variable_name,
    ACTIONS(131), 1,
      sym_flow_run_keyword,
    ACTIONS(133), 1,
      sym_flow_async_keyword,
    ACTIONS(135), 1,
      sym_flow_await_keyword,
    ACTIONS(137), 1,
      sym_flow_spawn_keyword,
    ACTIONS(139), 1,
      sym_flow_seek_keyword,
    ACTIONS(141), 1,
      sym_flow_ask_keyword,
    ACTIONS(143), 1,
      sym_flow_generate_keyword,
    ACTIONS(145), 1,
      sym_flow_reduce_keyword,
    ACTIONS(147), 1,
      sym_flow_map_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_sort_keyword,
    ACTIONS(155), 1,
      sym_flow_repeat_keyword,
    ACTIONS(157), 1,
      sym__exec_binding_start,
    ACTIONS(159), 1,
      sym__until_binding_start,
    STATE(418), 1,
      sym__async_run_statement,
    STATE(946), 1,
      sym_local_name,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(428), 15,
      sym__flow_operation,
      sym__collection_operation,
      sym__async_await_operation,
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
  [158] = 19,
    ACTIONS(131), 1,
      sym_flow_run_keyword,
    ACTIONS(139), 1,
      sym_flow_seek_keyword,
    ACTIONS(141), 1,
      sym_flow_ask_keyword,
    ACTIONS(149), 1,
      sym_flow_keep_keyword,
    ACTIONS(151), 1,
      sym_flow_drop_keyword,
    ACTIONS(153), 1,
      sym_flow_sort_keyword,
    ACTIONS(155), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(163), 1,
      sym_text_line,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym__exec_binding_start,
    ACTIONS(169), 1,
      sym__collection_binding_start,
    ACTIONS(171), 1,
      sym__spawn_binding_start,
    ACTIONS(173), 1,
      sym__until_binding_start,
    ACTIONS(175), 1,
      sym__async_await_binding_start,
    STATE(246), 1,
      sym_text_inline,
    STATE(316), 1,
      sym_text_block,
    STATE(670), 1,
      sym_line_end,
    STATE(247), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [223] = 19,
    ACTIONS(97), 1,
      sym_flow_run_keyword,
    ACTIONS(105), 1,
      sym_flow_seek_keyword,
    ACTIONS(107), 1,
      sym_flow_ask_keyword,
    ACTIONS(115), 1,
      sym_flow_keep_keyword,
    ACTIONS(117), 1,
      sym_flow_drop_keyword,
    ACTIONS(119), 1,
      sym_flow_sort_keyword,
    ACTIONS(121), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    ACTIONS(179), 1,
      sym__exec_binding_start,
    ACTIONS(181), 1,
      sym__collection_binding_start,
    ACTIONS(183), 1,
      sym__spawn_binding_start,
    ACTIONS(185), 1,
      sym__until_binding_start,
    ACTIONS(187), 1,
      sym__async_await_binding_start,
    STATE(459), 1,
      sym_text_inline,
    STATE(532), 1,
      sym_text_block,
    STATE(636), 1,
      sym_line_end,
    STATE(460), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [288] = 12,
    ACTIONS(191), 1,
      anon_sym_tool,
    ACTIONS(193), 1,
      sym_pass_keyword,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    STATE(103), 1,
      sym__unroled_message_line,
    STATE(549), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(189), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(548), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(550), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(863), 2,
      sym__query_directive_key,
      sym__route_directive_key,
    ACTIONS(11), 4,
      anon_sym_lanes,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_recall_keyword,
    ACTIONS(13), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [338] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(191), 1,
      anon_sym_tool,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    STATE(103), 1,
      sym__unroled_message_line,
    STATE(549), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(189), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(548), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(550), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(863), 2,
      sym__query_directive_key,
      sym__route_directive_key,
    ACTIONS(11), 4,
      anon_sym_lanes,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_recall_keyword,
    ACTIONS(13), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [388] = 13,
    ACTIONS(197), 1,
      sym_with_keyword,
    ACTIONS(199), 1,
      sym_struct_keyword,
    ACTIONS(201), 1,
      sym_psyche_keyword,
    ACTIONS(203), 1,
      sym_skill_keyword,
    ACTIONS(205), 1,
      sym_service_keyword,
    ACTIONS(207), 1,
      sym_prompt_keyword,
    ACTIONS(209), 1,
      sym_context_keyword,
    ACTIONS(211), 1,
      sym_instruct_keyword,
    ACTIONS(213), 1,
      sym_agic_keyword,
    ACTIONS(215), 1,
      sym_task_keyword,
    ACTIONS(217), 1,
      sym_chore_keyword,
    ACTIONS(219), 1,
      sym_flow_keyword,
    STATE(607), 12,
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
  [439] = 2,
    ACTIONS(223), 6,
      sym_newline,
      sym__exec_binding_start,
      sym__collection_binding_start,
      sym__spawn_binding_start,
      sym__until_binding_start,
      sym__async_await_binding_start,
    ACTIONS(221), 9,
      sym__inline_comment,
      sym_flow_run_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_sort_keyword,
      sym_flow_repeat_keyword,
      sym_text_line,
  [459] = 7,
    ACTIONS(225), 1,
      anon_sym_lanes,
    ACTIONS(233), 1,
      sym_recall_keyword,
    STATE(692), 1,
      sym__query_directive_key,
    STATE(968), 1,
      sym__route_directive_key,
    ACTIONS(229), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(231), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(227), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [488] = 7,
    ACTIONS(235), 1,
      anon_sym_lanes,
    ACTIONS(239), 1,
      sym_recall_keyword,
    STATE(551), 1,
      sym__query_directive_key,
    STATE(927), 1,
      sym__route_directive_key,
    ACTIONS(229), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(237), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(227), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [517] = 6,
    ACTIONS(43), 1,
      sym_flow_generate_keyword,
    ACTIONS(45), 1,
      sym_flow_reduce_keyword,
    ACTIONS(47), 1,
      sym_flow_map_keyword,
    STATE(483), 1,
      sym__collection_binding_word,
    ACTIONS(241), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(482), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [543] = 6,
    ACTIONS(79), 1,
      sym_flow_generate_keyword,
    ACTIONS(81), 1,
      sym_flow_reduce_keyword,
    ACTIONS(83), 1,
      sym_flow_map_keyword,
    STATE(661), 1,
      sym__collection_binding_word,
    ACTIONS(243), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(263), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [569] = 10,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(245), 1,
      sym_flow_if_keyword,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    STATE(366), 1,
      sym__named_if_complement,
    STATE(648), 1,
      sym__inline_if_complement,
    STATE(649), 1,
      sym__if_complements,
    STATE(799), 1,
      sym__lanes_complement,
    STATE(800), 1,
      sym_position,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(249), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [602] = 10,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(245), 1,
      sym_flow_if_keyword,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    STATE(366), 1,
      sym__named_if_complement,
    STATE(648), 1,
      sym__inline_if_complement,
    STATE(650), 1,
      sym__if_complements,
    STATE(799), 1,
      sym__lanes_complement,
    STATE(802), 1,
      sym_position,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(249), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [635] = 10,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    ACTIONS(251), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(212), 1,
      sym__if_complements,
    STATE(372), 1,
      sym__named_if_complement,
    STATE(806), 1,
      sym__lanes_complement,
    STATE(807), 1,
      sym_position,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(249), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [668] = 10,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    ACTIONS(251), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(213), 1,
      sym__if_complements,
    STATE(372), 1,
      sym__named_if_complement,
    STATE(806), 1,
      sym__lanes_complement,
    STATE(808), 1,
      sym_position,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(249), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [701] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(893), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [725] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1074), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [749] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1060), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [773] = 10,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(265), 1,
      sym_newline,
    STATE(361), 1,
      sym__lanes_complement,
    STATE(644), 1,
      sym__runnable_complements,
    STATE(646), 1,
      sym_inline_agic,
    STATE(787), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [805] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1106), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [829] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1088), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [853] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1086), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [877] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1066), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [901] = 6,
    ACTIONS(269), 1,
      sym_pascal_name,
    STATE(407), 1,
      sym_base_type,
    STATE(701), 1,
      sym_type,
    STATE(813), 1,
      sym_type_name,
    STATE(812), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(267), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [925] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1100), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [949] = 6,
    ACTIONS(269), 1,
      sym_pascal_name,
    STATE(407), 1,
      sym_base_type,
    STATE(801), 1,
      sym_type,
    STATE(813), 1,
      sym_type_name,
    STATE(812), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(267), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [973] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(995), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [997] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(896), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1021] = 10,
    ACTIONS(247), 1,
      sym_flow_in_keyword,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    STATE(209), 1,
      sym__runnable_complements,
    STATE(210), 1,
      sym_inline_agic,
    STATE(370), 1,
      sym__lanes_complement,
    STATE(804), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1053] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1053), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1077] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1081), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1101] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(996), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1125] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(580), 1,
      sym_type_name,
    STATE(1073), 1,
      sym_type,
    STATE(577), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1149] = 9,
    ACTIONS(275), 1,
      sym_blank_line,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(279), 1,
      sym__dedent,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    STATE(356), 1,
      sym_property,
    STATE(1051), 1,
      sym_cap_body,
    STATE(1054), 1,
      sym__cap_text_body,
    STATE(41), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1178] = 9,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(285), 1,
      sym_blank_line,
    ACTIONS(287), 1,
      sym__dedent,
    STATE(356), 1,
      sym_property,
    STATE(985), 1,
      sym_cap_body,
    STATE(1054), 1,
      sym__cap_text_body,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1207] = 9,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(285), 1,
      sym_blank_line,
    ACTIONS(289), 1,
      sym__dedent,
    STATE(356), 1,
      sym_property,
    STATE(1054), 1,
      sym__cap_text_body,
    STATE(1112), 1,
      sym_cap_body,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1236] = 9,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(291), 1,
      sym_blank_line,
    ACTIONS(293), 1,
      sym__dedent,
    STATE(356), 1,
      sym_property,
    STATE(993), 1,
      sym_cap_body,
    STATE(1054), 1,
      sym__cap_text_body,
    STATE(40), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1265] = 7,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(295), 1,
      sym_blank_line,
    ACTIONS(297), 1,
      sym__dedent,
    STATE(1103), 1,
      sym__cap_text_body,
    STATE(48), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1289] = 8,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(305), 1,
      sym_colon,
    STATE(817), 1,
      sym__repeat_count_complement,
    STATE(1016), 1,
      sym__window_complement,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1315] = 9,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_snake_name,
    ACTIONS(311), 1,
      sym_text_line,
    ACTIONS(313), 1,
      sym_newline,
    STATE(498), 1,
      sym_line_end,
    STATE(612), 1,
      sym_inline_agic,
    STATE(749), 1,
      sym_runnable,
  [1343] = 7,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(1050), 1,
      sym__cap_text_body,
    STATE(55), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1367] = 8,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(319), 1,
      sym_arrow,
    ACTIONS(321), 1,
      sym_colon,
    STATE(122), 1,
      sym__reduce_inline_block,
    STATE(328), 1,
      sym__reduce_inline_line,
    STATE(651), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1393] = 7,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(323), 1,
      sym_blank_line,
    ACTIONS(325), 1,
      sym__dedent,
    STATE(1084), 1,
      sym__cap_text_body,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1417] = 8,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(327), 1,
      sym_arrow,
    ACTIONS(329), 1,
      sym_colon,
    STATE(117), 1,
      sym__reduce_inline_block,
    STATE(640), 1,
      sym__reduce_inline_line,
    STATE(642), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1443] = 8,
    ACTIONS(331), 1,
      sym_flow_if_keyword,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    STATE(366), 1,
      sym__named_if_complement,
    STATE(648), 1,
      sym__inline_if_complement,
    STATE(649), 1,
      sym__if_complements,
    STATE(799), 1,
      sym__lanes_complement,
    STATE(800), 1,
      sym_position,
    ACTIONS(335), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1469] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(212), 1,
      sym__if_complements,
    STATE(372), 1,
      sym__named_if_complement,
    STATE(806), 1,
      sym__lanes_complement,
    STATE(807), 1,
      sym_position,
    ACTIONS(335), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1495] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(213), 1,
      sym__if_complements,
    STATE(372), 1,
      sym__named_if_complement,
    STATE(806), 1,
      sym__lanes_complement,
    STATE(808), 1,
      sym_position,
    ACTIONS(335), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1521] = 8,
    ACTIONS(331), 1,
      sym_flow_if_keyword,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    STATE(366), 1,
      sym__named_if_complement,
    STATE(648), 1,
      sym__inline_if_complement,
    STATE(650), 1,
      sym__if_complements,
    STATE(799), 1,
      sym__lanes_complement,
    STATE(802), 1,
      sym_position,
    ACTIONS(335), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1547] = 9,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_text_line,
    ACTIONS(343), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
    STATE(424), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [1575] = 7,
    ACTIONS(277), 1,
      sym__comment_start,
    ACTIONS(281), 1,
      sym__line_start,
    ACTIONS(283), 1,
      sym__cap_text_start,
    ACTIONS(297), 1,
      sym__dedent,
    ACTIONS(323), 1,
      sym_blank_line,
    STATE(1103), 1,
      sym__cap_text_body,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1599] = 8,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(301), 1,
      sym__other_integer_literal,
    ACTIONS(303), 1,
      sym_flow_windowing_keyword,
    ACTIONS(345), 1,
      sym_colon,
    STATE(870), 1,
      sym__repeat_count_complement,
    STATE(1111), 1,
      sym__window_complement,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1625] = 7,
    ACTIONS(347), 1,
      sym_blank_line,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(351), 1,
      sym__dedent,
    ACTIONS(353), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(981), 1,
      sym__repeat_statements,
    STATE(80), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1648] = 6,
    ACTIONS(355), 1,
      sym_blank_line,
    ACTIONS(358), 1,
      sym__comment_start,
    ACTIONS(363), 1,
      sym__line_start,
    STATE(356), 1,
      sym_property,
    ACTIONS(361), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1669] = 5,
    ACTIONS(366), 1,
      sym_blank_line,
    ACTIONS(371), 1,
      sym__flow_raw_text,
    STATE(59), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(369), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1688] = 5,
    ACTIONS(374), 1,
      sym_blank_line,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(380), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1707] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(422), 1,
      sym_inline_agic,
    STATE(788), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1730] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(423), 1,
      sym_inline_agic,
    STATE(791), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1753] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1776] = 5,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(388), 1,
      sym__comment_start,
    ACTIONS(393), 1,
      sym__directive_start,
    ACTIONS(391), 2,
      sym__dedent,
      sym__line_start,
    STATE(64), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1795] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(611), 1,
      sym_inline_agic,
    STATE(748), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [1818] = 6,
    ACTIONS(396), 1,
      sym_blank_line,
    ACTIONS(398), 1,
      sym__comment_start,
    ACTIONS(402), 1,
      sym__line_start,
    STATE(382), 1,
      sym__flow_statement,
    ACTIONS(400), 2,
      sym__dedent,
      sym__until_start,
    STATE(67), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1839] = 6,
    ACTIONS(398), 1,
      sym__comment_start,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(404), 1,
      sym_blank_line,
    STATE(382), 1,
      sym__flow_statement,
    ACTIONS(406), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1860] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    STATE(361), 1,
      sym__lanes_complement,
    STATE(644), 1,
      sym__runnable_complements,
    STATE(646), 1,
      sym_inline_agic,
    STATE(787), 1,
      sym__named_using_complement,
  [1885] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(414), 1,
      sym_blank_line,
    ACTIONS(416), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1029), 1,
      sym__repeat_statements,
    STATE(72), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1908] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(209), 1,
      sym__runnable_complements,
    STATE(210), 1,
      sym_inline_agic,
    STATE(370), 1,
      sym__lanes_complement,
    STATE(804), 1,
      sym__named_using_complement,
  [1933] = 6,
    ACTIONS(422), 1,
      sym_blank_line,
    ACTIONS(425), 1,
      sym__comment_start,
    ACTIONS(430), 1,
      sym__line_start,
    STATE(382), 1,
      sym__flow_statement,
    ACTIONS(428), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1954] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(435), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(977), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1977] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(210), 1,
      sym_inline_agic,
    STATE(226), 1,
      sym__runnable_complements,
    STATE(370), 1,
      sym__lanes_complement,
    STATE(804), 1,
      sym__named_using_complement,
  [2002] = 5,
    ACTIONS(437), 1,
      sym_blank_line,
    ACTIONS(439), 1,
      sym__comment_start,
    ACTIONS(443), 1,
      sym__directive_start,
    ACTIONS(441), 2,
      sym__dedent,
      sym__line_start,
    STATE(64), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2021] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(445), 1,
      sym_blank_line,
    ACTIONS(447), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1080), 1,
      sym__repeat_statements,
    STATE(81), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2044] = 5,
    ACTIONS(439), 1,
      sym__comment_start,
    ACTIONS(443), 1,
      sym__directive_start,
    ACTIONS(449), 1,
      sym_blank_line,
    ACTIONS(451), 2,
      sym__dedent,
      sym__line_start,
    STATE(74), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2063] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(453), 1,
      sym_blank_line,
    ACTIONS(455), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1114), 1,
      sym__repeat_statements,
    STATE(78), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2086] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(980), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2109] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(609), 1,
      sym_inline_agic,
    STATE(746), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [2132] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(459), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(984), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2155] = 7,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(461), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1030), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2178] = 8,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    STATE(361), 1,
      sym__lanes_complement,
    STATE(432), 1,
      sym__runnable_complements,
    STATE(646), 1,
      sym_inline_agic,
    STATE(787), 1,
      sym__named_using_complement,
  [2203] = 5,
    ACTIONS(93), 1,
      sym__flow_raw_text,
    ACTIONS(463), 1,
      sym_blank_line,
    STATE(84), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(465), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2222] = 5,
    ACTIONS(93), 1,
      sym__flow_raw_text,
    ACTIONS(467), 1,
      sym_blank_line,
    STATE(59), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(469), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2241] = 7,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(309), 1,
      sym_snake_name,
    STATE(612), 1,
      sym_inline_agic,
    STATE(749), 1,
      sym_runnable,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [2264] = 5,
    ACTIONS(473), 1,
      sym__module_doc_start,
    ACTIONS(475), 1,
      sym__item_doc_start,
    ACTIONS(477), 1,
      sym__param_item_doc_start,
    ACTIONS(471), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(324), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2282] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1058), 1,
      sym__repeat_statements,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2302] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(481), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1071), 1,
      sym__repeat_statements,
    STATE(92), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2322] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(483), 1,
      sym_blank_line,
    ACTIONS(485), 1,
      sym__dedent,
    STATE(119), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2340] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(487), 1,
      sym_blank_line,
    ACTIONS(489), 1,
      sym__dedent,
    ACTIONS(491), 1,
      sym__line_start,
    STATE(121), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2358] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(489), 1,
      sym__dedent,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(493), 1,
      sym_blank_line,
    STATE(123), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2376] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1101), 1,
      sym__repeat_statements,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2396] = 6,
    ACTIONS(495), 1,
      sym__line_start,
    ACTIONS(497), 1,
      sym__directive_start,
    STATE(95), 1,
      sym_directive,
    STATE(133), 1,
      sym__flow_statement,
    STATE(755), 1,
      sym__directives,
    STATE(1006), 2,
      sym_statements,
      sym__pass_statement,
  [2416] = 5,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 1,
      sym_blank_line,
    ACTIONS(504), 1,
      sym__comment_start,
    ACTIONS(507), 1,
      sym__line_start,
    STATE(94), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2434] = 5,
    ACTIONS(451), 1,
      sym__line_start,
    ACTIONS(497), 1,
      sym__directive_start,
    ACTIONS(510), 1,
      sym_blank_line,
    ACTIONS(512), 1,
      sym__comment_start,
    STATE(97), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2452] = 4,
    ACTIONS(516), 1,
      sym_blank_line,
    ACTIONS(519), 1,
      sym__comment_start,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(514), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2468] = 5,
    ACTIONS(441), 1,
      sym__line_start,
    ACTIONS(497), 1,
      sym__directive_start,
    ACTIONS(512), 1,
      sym__comment_start,
    ACTIONS(522), 1,
      sym_blank_line,
    STATE(99), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2486] = 5,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    ACTIONS(524), 1,
      sym_blank_line,
    STATE(124), 1,
      aux_sym_unroled_message_repeat1,
    STATE(239), 1,
      sym__unroled_message_line,
    ACTIONS(526), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2504] = 5,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(528), 1,
      sym_blank_line,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(534), 1,
      sym__directive_start,
    STATE(99), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2522] = 3,
    ACTIONS(93), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(469), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2536] = 4,
    STATE(677), 1,
      sym_recall_source,
    STATE(852), 1,
      sym_recall_value,
    ACTIONS(537), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(539), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2552] = 3,
    ACTIONS(93), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(541), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2566] = 5,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    ACTIONS(543), 1,
      sym_blank_line,
    STATE(98), 1,
      aux_sym_unroled_message_repeat1,
    STATE(239), 1,
      sym__unroled_message_line,
    ACTIONS(545), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2584] = 6,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(400), 1,
      sym__dedent,
    ACTIONS(547), 1,
      sym_blank_line,
    STATE(584), 1,
      sym__flow_statement,
    STATE(105), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2604] = 6,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(406), 1,
      sym__dedent,
    ACTIONS(549), 1,
      sym_blank_line,
    STATE(584), 1,
      sym__flow_statement,
    STATE(106), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2624] = 6,
    ACTIONS(428), 1,
      sym__dedent,
    ACTIONS(551), 1,
      sym_blank_line,
    ACTIONS(554), 1,
      sym__comment_start,
    ACTIONS(557), 1,
      sym__line_start,
    STATE(584), 1,
      sym__flow_statement,
    STATE(106), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2644] = 5,
    ACTIONS(560), 1,
      sym_blank_line,
    ACTIONS(563), 1,
      sym__comment_start,
    ACTIONS(566), 1,
      sym__dedent,
    ACTIONS(568), 1,
      sym__line_start,
    STATE(107), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2662] = 5,
    ACTIONS(573), 1,
      sym__module_doc_start,
    ACTIONS(575), 1,
      sym__item_doc_start,
    ACTIONS(577), 1,
      sym__param_item_doc_start,
    ACTIONS(571), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(785), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2680] = 7,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(579), 1,
      sym_text_line,
    STATE(564), 1,
      sym_line_end,
    STATE(565), 1,
      sym_context_body,
    STATE(566), 1,
      sym_text_inline,
    STATE(567), 1,
      sym_text_block,
  [2702] = 5,
    ACTIONS(583), 1,
      sym_blank_line,
    ACTIONS(585), 1,
      sym__comment_start,
    ACTIONS(587), 1,
      sym__indent,
    ACTIONS(581), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2720] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(589), 1,
      sym_blank_line,
    ACTIONS(591), 1,
      sym__dedent,
    ACTIONS(593), 1,
      sym__line_start,
    STATE(107), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2738] = 7,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(579), 1,
      sym_text_line,
    STATE(564), 1,
      sym_line_end,
    STATE(566), 1,
      sym_text_inline,
    STATE(567), 1,
      sym_text_block,
    STATE(637), 1,
      sym_context_body,
  [2760] = 5,
    ACTIONS(585), 1,
      sym__comment_start,
    ACTIONS(597), 1,
      sym_blank_line,
    ACTIONS(599), 1,
      sym__indent,
    ACTIONS(595), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(110), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2778] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(601), 1,
      ts_builtin_sym_end,
    ACTIONS(603), 1,
      sym_blank_line,
    STATE(94), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2796] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(593), 1,
      sym__line_start,
    ACTIONS(605), 1,
      sym_blank_line,
    ACTIONS(607), 1,
      sym__dedent,
    STATE(111), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2814] = 6,
    ACTIONS(443), 1,
      sym__directive_start,
    ACTIONS(609), 1,
      sym__line_start,
    STATE(76), 1,
      sym_directive,
    STATE(115), 1,
      sym_message,
    STATE(555), 1,
      sym__directives,
    STATE(1095), 2,
      sym_messages,
      sym__pass_statement,
  [2834] = 6,
    ACTIONS(611), 1,
      sym_blank_line,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(615), 1,
      sym__dedent,
    ACTIONS(617), 1,
      sym__from_start,
    STATE(419), 1,
      sym__from_complement,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2854] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(619), 1,
      sym_blank_line,
    STATE(127), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(383), 1,
      sym__implicit_run_line,
    ACTIONS(469), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2872] = 5,
    ACTIONS(621), 1,
      sym_blank_line,
    ACTIONS(624), 1,
      sym__comment_start,
    ACTIONS(627), 1,
      sym__dedent,
    ACTIONS(629), 1,
      sym__line_start,
    STATE(119), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2890] = 7,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(579), 1,
      sym_text_line,
    STATE(564), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_block,
    STATE(571), 1,
      sym_text_inline,
    STATE(638), 1,
      sym_instruct_body,
  [2912] = 5,
    ACTIONS(632), 1,
      sym_blank_line,
    ACTIONS(635), 1,
      sym__comment_start,
    ACTIONS(638), 1,
      sym__dedent,
    ACTIONS(640), 1,
      sym__line_start,
    STATE(121), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2930] = 6,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(617), 1,
      sym__from_start,
    ACTIONS(643), 1,
      sym_blank_line,
    ACTIONS(645), 1,
      sym__dedent,
    STATE(376), 1,
      sym__from_complement,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2950] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(487), 1,
      sym_blank_line,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(647), 1,
      sym__dedent,
    STATE(121), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2968] = 5,
    ACTIONS(649), 1,
      sym_blank_line,
    ACTIONS(654), 1,
      sym__agic_raw_text,
    STATE(124), 1,
      aux_sym_unroled_message_repeat1,
    STATE(239), 1,
      sym__unroled_message_line,
    ACTIONS(652), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2986] = 5,
    ACTIONS(65), 1,
      sym_flow_async_keyword,
    ACTIONS(67), 1,
      sym_flow_await_keyword,
    STATE(418), 1,
      sym__async_run_statement,
    STATE(663), 1,
      sym__async_await_binding_word,
    STATE(263), 3,
      sym__async_await_operation,
      sym__invalid_async_await_operation,
      sym_await_statement,
  [3004] = 7,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(579), 1,
      sym_text_line,
    STATE(564), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_block,
    STATE(570), 1,
      sym_instruct_body,
    STATE(571), 1,
      sym_text_inline,
  [3026] = 5,
    ACTIONS(657), 1,
      sym_blank_line,
    ACTIONS(660), 1,
      sym__flow_raw_text,
    STATE(127), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(383), 1,
      sym__implicit_run_line,
    ACTIONS(369), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3044] = 5,
    ACTIONS(583), 1,
      sym_blank_line,
    ACTIONS(585), 1,
      sym__comment_start,
    ACTIONS(665), 1,
      sym__indent,
    ACTIONS(663), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3062] = 5,
    ACTIONS(585), 1,
      sym__comment_start,
    ACTIONS(669), 1,
      sym_blank_line,
    ACTIONS(671), 1,
      sym__indent,
    ACTIONS(667), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3080] = 5,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(31), 1,
      sym_flow_await_keyword,
    STATE(485), 1,
      sym__async_await_binding_word,
    STATE(576), 1,
      sym__async_run_statement,
    STATE(482), 3,
      sym__async_await_operation,
      sym__invalid_async_await_operation,
      sym_await_statement,
  [3098] = 5,
    ACTIONS(675), 1,
      sym__module_doc_start,
    ACTIONS(677), 1,
      sym__item_doc_start,
    ACTIONS(679), 1,
      sym__param_item_doc_start,
    ACTIONS(673), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(302), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3116] = 5,
    ACTIONS(683), 1,
      sym__module_doc_start,
    ACTIONS(685), 1,
      sym__item_doc_start,
    ACTIONS(687), 1,
      sym__param_item_doc_start,
    ACTIONS(681), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(309), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3134] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(689), 1,
      sym_blank_line,
    ACTIONS(691), 1,
      sym__dedent,
    STATE(89), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3152] = 5,
    ACTIONS(695), 1,
      sym__module_doc_start,
    ACTIONS(697), 1,
      sym__item_doc_start,
    ACTIONS(699), 1,
      sym__param_item_doc_start,
    ACTIONS(693), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(614), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3170] = 5,
    ACTIONS(703), 1,
      sym__module_doc_start,
    ACTIONS(705), 1,
      sym__item_doc_start,
    ACTIONS(707), 1,
      sym__param_item_doc_start,
    ACTIONS(701), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(622), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3188] = 5,
    ACTIONS(711), 1,
      sym__module_doc_start,
    ACTIONS(713), 1,
      sym__item_doc_start,
    ACTIONS(715), 1,
      sym__param_item_doc_start,
    ACTIONS(709), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(764), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3206] = 5,
    ACTIONS(719), 1,
      sym__module_doc_start,
    ACTIONS(721), 1,
      sym__item_doc_start,
    ACTIONS(723), 1,
      sym__param_item_doc_start,
    ACTIONS(717), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(771), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3224] = 5,
    ACTIONS(727), 1,
      sym__module_doc_start,
    ACTIONS(729), 1,
      sym__item_doc_start,
    ACTIONS(731), 1,
      sym__param_item_doc_start,
    ACTIONS(725), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(335), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3242] = 6,
    ACTIONS(495), 1,
      sym__line_start,
    ACTIONS(497), 1,
      sym__directive_start,
    STATE(95), 1,
      sym_directive,
    STATE(133), 1,
      sym__flow_statement,
    STATE(723), 1,
      sym__directives,
    STATE(1009), 2,
      sym_statements,
      sym__pass_statement,
  [3262] = 4,
    STATE(677), 1,
      sym_recall_source,
    STATE(811), 1,
      sym_recall_value,
    ACTIONS(537), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(539), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3278] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(733), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1104), 1,
      sym__repeat_statements,
    STATE(142), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3298] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1116), 1,
      sym__repeat_statements,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3318] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(735), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(978), 1,
      sym__repeat_statements,
    STATE(144), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3338] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(983), 1,
      sym__repeat_statements,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3358] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(353), 1,
      sym__line_start,
    ACTIONS(737), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1035), 1,
      sym__repeat_statements,
    STATE(87), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3378] = 5,
    ACTIONS(741), 1,
      sym__module_doc_start,
    ACTIONS(743), 1,
      sym__item_doc_start,
    ACTIONS(745), 1,
      sym__param_item_doc_start,
    ACTIONS(739), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(600), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3396] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(747), 1,
      sym_blank_line,
    STATE(118), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(383), 1,
      sym__implicit_run_line,
    ACTIONS(465), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3414] = 5,
    ACTIONS(349), 1,
      sym__comment_start,
    ACTIONS(491), 1,
      sym__line_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__dedent,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3432] = 6,
    ACTIONS(443), 1,
      sym__directive_start,
    ACTIONS(609), 1,
      sym__line_start,
    STATE(76), 1,
      sym_directive,
    STATE(115), 1,
      sym_message,
    STATE(474), 1,
      sym__directives,
    STATE(1093), 2,
      sym_messages,
      sym__pass_statement,
  [3452] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(506), 1,
      sym_repeat_body,
    STATE(354), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3469] = 3,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    STATE(399), 1,
      sym__unroled_message_line,
    ACTIONS(759), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3482] = 4,
    ACTIONS(761), 1,
      sym_blank_line,
    ACTIONS(764), 1,
      sym__comment_start,
    ACTIONS(514), 2,
      sym__dedent,
      sym__line_start,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3497] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(505), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3514] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(647), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3531] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(472), 1,
      sym_repeat_body,
    STATE(354), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3548] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(216), 1,
      sym__implicit_run_line,
    ACTIONS(541), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3561] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(603), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3578] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(604), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3595] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    STATE(477), 1,
      sym_text_inline,
    STATE(532), 1,
      sym_text_block,
    STATE(636), 1,
      sym_line_end,
  [3614] = 3,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    STATE(399), 1,
      sym__unroled_message_line,
    ACTIONS(526), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3627] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(455), 1,
      sym_struct_body,
    STATE(367), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3644] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(492), 1,
      sym_repeat_body,
    STATE(354), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3661] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(163), 1,
      sym_text_line,
    ACTIONS(165), 1,
      sym_newline,
    STATE(218), 1,
      sym_text_inline,
    STATE(316), 1,
      sym_text_block,
    STATE(670), 1,
      sym_line_end,
  [3680] = 6,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(775), 1,
      sym_arrow,
    ACTIONS(777), 1,
      sym_colon,
    STATE(122), 1,
      sym__reduce_inline_block,
    STATE(328), 1,
      sym__reduce_inline_line,
    STATE(651), 1,
      sym__named_using_complement,
  [3699] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(493), 1,
      sym_repeat_body,
    STATE(354), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3716] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    STATE(532), 1,
      sym_text_block,
    STATE(636), 1,
      sym_line_end,
    STATE(672), 1,
      sym_text_inline,
  [3735] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(779), 1,
      sym_text_line,
    STATE(669), 1,
      sym_line_end,
    STATE(726), 1,
      sym_text_inline,
    STATE(737), 1,
      sym_text_block,
  [3754] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(163), 1,
      sym_text_line,
    ACTIONS(165), 1,
      sym_newline,
    STATE(225), 1,
      sym_text_inline,
    STATE(316), 1,
      sym_text_block,
    STATE(670), 1,
      sym_line_end,
  [3773] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(557), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3790] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(521), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3807] = 6,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(785), 1,
      sym_flow_by_keyword,
    STATE(237), 1,
      sym__inline_by_complement,
    STATE(238), 1,
      sym__by_complements,
    STATE(379), 1,
      sym__named_by_complement,
    STATE(821), 1,
      sym__lanes_complement,
  [3826] = 4,
    ACTIONS(791), 1,
      sym_newline,
    STATE(747), 1,
      sym_local_reference,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(789), 2,
      anon_sym__,
      sym_snake_name,
  [3841] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(258), 1,
      sym_repeat_body,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3858] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(163), 1,
      sym_text_line,
    ACTIONS(165), 1,
      sym_newline,
    STATE(259), 1,
      sym_text_inline,
    STATE(316), 1,
      sym_text_block,
    STATE(670), 1,
      sym_line_end,
  [3877] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(684), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3894] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(533), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3911] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(269), 1,
      sym_repeat_body,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3928] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(659), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3945] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(560), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3962] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(278), 1,
      sym_repeat_body,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3979] = 6,
    ACTIONS(797), 1,
      sym_arrow,
    ACTIONS(799), 1,
      sym_colon,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(803), 1,
      sym_snake_name,
    STATE(537), 1,
      sym_flow_name,
    STATE(905), 1,
      sym_params,
  [3998] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    STATE(532), 1,
      sym_text_block,
    STATE(591), 1,
      sym_text_inline,
    STATE(636), 1,
      sym_line_end,
  [4017] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(579), 1,
      sym_text_line,
    STATE(564), 1,
      sym_line_end,
    STATE(567), 1,
      sym_text_block,
    STATE(759), 1,
      sym_text_inline,
  [4036] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    STATE(532), 1,
      sym_text_block,
    STATE(636), 1,
      sym_line_end,
    STATE(686), 1,
      sym_text_inline,
  [4055] = 6,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(805), 1,
      sym_arrow,
    ACTIONS(807), 1,
      sym_colon,
    STATE(117), 1,
      sym__reduce_inline_block,
    STATE(640), 1,
      sym__reduce_inline_line,
    STATE(642), 1,
      sym__named_using_complement,
  [4074] = 4,
    ACTIONS(809), 1,
      sym_array_suffix,
    STATE(193), 1,
      aux_sym_type_repeat1,
    STATE(641), 1,
      sym_type_suffix,
    ACTIONS(811), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4089] = 6,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(813), 1,
      sym_arrow,
    ACTIONS(815), 1,
      sym_colon,
    ACTIONS(817), 1,
      sym_snake_name,
    STATE(494), 1,
      sym_agic_name,
    STATE(913), 1,
      sym_params,
  [4108] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(582), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4125] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(819), 1,
      sym__other_integer_literal,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(823), 1,
      sym_colon,
    STATE(817), 1,
      sym__repeat_count_complement,
    STATE(1016), 1,
      sym__window_complement,
  [4144] = 6,
    ACTIONS(161), 1,
      sym__inline_comment,
    ACTIONS(165), 1,
      sym_newline,
    ACTIONS(177), 1,
      sym_text_line,
    STATE(431), 1,
      sym_text_inline,
    STATE(532), 1,
      sym_text_block,
    STATE(636), 1,
      sym_line_end,
  [4163] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(545), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4180] = 4,
    ACTIONS(123), 1,
      sym_newline,
    STATE(195), 1,
      sym__order_complement,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(825), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4195] = 4,
    ACTIONS(827), 1,
      sym_array_suffix,
    STATE(193), 1,
      aux_sym_type_repeat1,
    STATE(641), 1,
      sym_type_suffix,
    ACTIONS(830), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4210] = 4,
    ACTIONS(791), 1,
      sym_newline,
    STATE(790), 1,
      sym_local_reference,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(789), 2,
      anon_sym__,
      sym_snake_name,
  [4225] = 6,
    ACTIONS(333), 1,
      sym_flow_in_keyword,
    ACTIONS(832), 1,
      sym_flow_by_keyword,
    STATE(214), 1,
      sym__named_by_complement,
    STATE(444), 1,
      sym__inline_by_complement,
    STATE(445), 1,
      sym__by_complements,
    STATE(735), 1,
      sym__lanes_complement,
  [4244] = 4,
    ACTIONS(123), 1,
      sym_newline,
    STATE(171), 1,
      sym__order_complement,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(825), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4259] = 1,
    ACTIONS(834), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4268] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(216), 1,
      sym__implicit_run_line,
    ACTIONS(469), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4281] = 1,
    ACTIONS(836), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4290] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(435), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4307] = 1,
    ACTIONS(838), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4316] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(502), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4333] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(448), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4350] = 6,
    ACTIONS(299), 1,
      sym__one_integer_literal,
    ACTIONS(819), 1,
      sym__other_integer_literal,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(840), 1,
      sym_colon,
    STATE(870), 1,
      sym__repeat_count_complement,
    STATE(1111), 1,
      sym__window_complement,
  [4369] = 4,
    ACTIONS(809), 1,
      sym_array_suffix,
    STATE(186), 1,
      aux_sym_type_repeat1,
    STATE(641), 1,
      sym_type_suffix,
    ACTIONS(842), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4384] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(658), 1,
      sym_flow_body,
    STATE(323), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4401] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(270), 1,
      sym_repeat_body,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4418] = 4,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(844), 1,
      sym_snake_name,
    STATE(365), 1,
      sym_agent,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [4432] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4440] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4448] = 1,
    ACTIONS(850), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4456] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4464] = 1,
    ACTIONS(854), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4472] = 5,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    ACTIONS(858), 1,
      sym_flow_in_keyword,
    STATE(470), 1,
      sym_line_end,
    STATE(761), 1,
      sym__lanes_complement,
  [4488] = 4,
    ACTIONS(862), 1,
      sym_rparen,
    STATE(585), 1,
      sym_param_name,
    STATE(727), 1,
      sym_param,
    ACTIONS(860), 2,
      sym__variable_name,
      anon_sym__,
  [4502] = 1,
    ACTIONS(838), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [4510] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4518] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4526] = 1,
    ACTIONS(868), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4534] = 1,
    ACTIONS(870), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4542] = 1,
    ACTIONS(872), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4550] = 1,
    ACTIONS(874), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4558] = 1,
    ACTIONS(876), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4566] = 1,
    ACTIONS(878), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4574] = 1,
    ACTIONS(880), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4582] = 1,
    ACTIONS(882), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4590] = 1,
    ACTIONS(884), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4598] = 1,
    ACTIONS(886), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4606] = 1,
    ACTIONS(888), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4614] = 1,
    ACTIONS(890), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4622] = 1,
    ACTIONS(892), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4630] = 1,
    ACTIONS(894), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4638] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4646] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4654] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4662] = 1,
    ACTIONS(902), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4670] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4678] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4686] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [4694] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(912), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4708] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(449), 1,
      sym_inline_agic,
    STATE(875), 1,
      sym_runnable,
  [4724] = 1,
    ACTIONS(916), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4732] = 1,
    ACTIONS(918), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4740] = 1,
    ACTIONS(920), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4748] = 1,
    ACTIONS(922), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4756] = 1,
    ACTIONS(924), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4764] = 1,
    ACTIONS(926), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4772] = 1,
    ACTIONS(928), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4780] = 1,
    ACTIONS(930), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4788] = 1,
    ACTIONS(932), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4796] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4804] = 1,
    ACTIONS(936), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4812] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4820] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4828] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4836] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4844] = 1,
    ACTIONS(946), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4852] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4860] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4868] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4876] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4884] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4892] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4900] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4908] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4916] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4924] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4932] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [4940] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4948] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4956] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4964] = 1,
    ACTIONS(976), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4972] = 1,
    ACTIONS(978), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4980] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4988] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4996] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5004] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5012] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5020] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5028] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5036] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5044] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5052] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5060] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5068] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1004), 1,
      sym__dedent,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5082] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5090] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5098] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5106] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5114] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5122] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5130] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5138] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5146] = 1,
    ACTIONS(1024), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5154] = 1,
    ACTIONS(1026), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5162] = 1,
    ACTIONS(1028), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5170] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5178] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5186] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5194] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5202] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5210] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5218] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5226] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5234] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5242] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5250] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5258] = 4,
    ACTIONS(514), 1,
      sym__dedent,
    ACTIONS(1052), 1,
      sym_blank_line,
    ACTIONS(1055), 1,
      sym__comment_start,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5272] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5280] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5288] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5296] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5304] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5312] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5320] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5328] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5336] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5344] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5352] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5360] = 4,
    ACTIONS(514), 1,
      sym__reduce_indent,
    ACTIONS(1068), 1,
      sym_blank_line,
    ACTIONS(1071), 1,
      sym__comment_start,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5374] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1078), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5404] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5412] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5420] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5428] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5436] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5444] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5452] = 4,
    ACTIONS(514), 1,
      sym__line_start,
    ACTIONS(1082), 1,
      sym_blank_line,
    ACTIONS(1085), 1,
      sym__comment_start,
    STATE(330), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5466] = 1,
    ACTIONS(223), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5474] = 4,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(844), 1,
      sym_snake_name,
    STATE(241), 1,
      sym_agent,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [5488] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5496] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5504] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5512] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5520] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5528] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5536] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5544] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5552] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5560] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5568] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5576] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5584] = 5,
    ACTIONS(1088), 1,
      sym__inline_comment,
    ACTIONS(1090), 1,
      sym_text_line,
    ACTIONS(1092), 1,
      sym_newline,
    STATE(362), 1,
      sym_line_end,
    STATE(486), 1,
      sym__reduce_line,
  [5600] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1094), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5614] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1096), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5628] = 4,
    ACTIONS(1098), 1,
      sym_blank_line,
    ACTIONS(1100), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym__reduce_indent,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5642] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1106), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5656] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(1108), 1,
      sym_blank_line,
    ACTIONS(1110), 1,
      sym__indent,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5670] = 1,
    ACTIONS(1112), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5678] = 1,
    ACTIONS(1114), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5686] = 5,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(1116), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(145), 1,
      sym_until_clause,
    STATE(710), 1,
      sym__repeat_statements,
  [5702] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1118), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5716] = 5,
    ACTIONS(1088), 1,
      sym__inline_comment,
    ACTIONS(1090), 1,
      sym_text_line,
    ACTIONS(1092), 1,
      sym_newline,
    STATE(412), 1,
      sym_line_end,
    STATE(433), 1,
      sym__reduce_line,
  [5732] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5740] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5748] = 5,
    ACTIONS(271), 1,
      sym_arrow,
    ACTIONS(273), 1,
      sym_colon,
    ACTIONS(1124), 1,
      aux_sym__doc_space_token1,
    STATE(220), 1,
      sym_inline_agic,
    STATE(374), 1,
      sym__required_space,
  [5764] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(422), 1,
      sym_inline_agic,
    STATE(788), 1,
      sym_runnable,
  [5780] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [5796] = 5,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    STATE(438), 1,
      sym_inline_agic,
    STATE(805), 1,
      sym__named_using_complement,
  [5812] = 4,
    ACTIONS(1100), 1,
      sym__comment_start,
    ACTIONS(1126), 1,
      sym_blank_line,
    ACTIONS(1128), 1,
      sym__reduce_indent,
    STATE(375), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5826] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(439), 1,
      sym_inline_agic,
    STATE(850), 1,
      sym_runnable,
  [5842] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1130), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5856] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(224), 1,
      sym_inline_agic,
    STATE(815), 1,
      sym_runnable,
  [5872] = 5,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    ACTIONS(858), 1,
      sym_flow_in_keyword,
    STATE(440), 1,
      sym_line_end,
    STATE(871), 1,
      sym__lanes_complement,
  [5888] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1132), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5902] = 5,
    ACTIONS(1088), 1,
      sym__inline_comment,
    ACTIONS(1092), 1,
      sym_newline,
    ACTIONS(1134), 1,
      sym_text_line,
    STATE(227), 1,
      sym__reduce_line,
    STATE(412), 1,
      sym_line_end,
  [5918] = 5,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(1116), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(88), 1,
      sym_until_clause,
    STATE(733), 1,
      sym__repeat_statements,
  [5934] = 5,
    ACTIONS(408), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(231), 1,
      sym_inline_agic,
    STATE(818), 1,
      sym__named_using_complement,
  [5950] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(232), 1,
      sym_inline_agic,
    STATE(850), 1,
      sym_runnable,
  [5966] = 5,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(858), 1,
      sym_flow_in_keyword,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(233), 1,
      sym_line_end,
    STATE(819), 1,
      sym__lanes_complement,
  [5982] = 4,
    ACTIONS(514), 1,
      sym__indent,
    ACTIONS(1138), 1,
      sym_blank_line,
    ACTIONS(1141), 1,
      sym__comment_start,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5996] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(243), 1,
      sym_inline_agic,
    STATE(824), 1,
      sym_runnable,
  [6012] = 4,
    ACTIONS(1098), 1,
      sym_blank_line,
    ACTIONS(1100), 1,
      sym__comment_start,
    ACTIONS(1144), 1,
      sym__reduce_indent,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6026] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1146), 1,
      sym_blank_line,
    ACTIONS(1148), 1,
      sym__dedent,
    STATE(385), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6040] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1150), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6054] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(255), 1,
      sym_inline_agic,
    STATE(757), 1,
      sym_runnable,
  [6070] = 5,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(858), 1,
      sym_flow_in_keyword,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(256), 1,
      sym_line_end,
    STATE(830), 1,
      sym__lanes_complement,
  [6086] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1152), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6100] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1154), 1,
      sym_blank_line,
    ACTIONS(1156), 1,
      sym__dedent,
    STATE(389), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6114] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6122] = 1,
    ACTIONS(836), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6130] = 5,
    ACTIONS(1088), 1,
      sym__inline_comment,
    ACTIONS(1092), 1,
      sym_newline,
    ACTIONS(1134), 1,
      sym_text_line,
    STATE(264), 1,
      sym__reduce_line,
    STATE(362), 1,
      sym_line_end,
  [6146] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1160), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6160] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1162), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6174] = 1,
    ACTIONS(834), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6182] = 4,
    ACTIONS(1164), 1,
      sym_blank_line,
    ACTIONS(1167), 1,
      sym__dedent,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6196] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1172), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6210] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1174), 1,
      sym_blank_line,
    ACTIONS(1176), 1,
      sym__dedent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6224] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1178), 1,
      sym_blank_line,
    ACTIONS(1180), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6238] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1182), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6252] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1184), 1,
      sym_blank_line,
    ACTIONS(1186), 1,
      sym__dedent,
    STATE(397), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6266] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1188), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6280] = 5,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(1190), 1,
      aux_sym__doc_space_token1,
    STATE(410), 1,
      sym__required_space,
    STATE(694), 1,
      sym_inline_agic,
  [6296] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(609), 1,
      sym_inline_agic,
    STATE(746), 1,
      sym_runnable,
  [6312] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6326] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1194), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6340] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6348] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1198), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6362] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1200), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6376] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1202), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6390] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1204), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6404] = 4,
    ACTIONS(1002), 1,
      sym_blank_line,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1206), 1,
      sym__dedent,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6418] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(612), 1,
      sym_inline_agic,
    STATE(749), 1,
      sym_runnable,
  [6434] = 1,
    ACTIONS(1208), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6442] = 4,
    ACTIONS(1210), 1,
      sym_array_suffix,
    STATE(408), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(842), 2,
      sym_newline,
      sym__inline_comment,
  [6456] = 4,
    ACTIONS(1210), 1,
      sym_array_suffix,
    STATE(409), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(811), 2,
      sym_newline,
      sym__inline_comment,
  [6470] = 4,
    ACTIONS(1212), 1,
      sym_array_suffix,
    STATE(409), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(830), 2,
      sym_newline,
      sym__inline_comment,
  [6484] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(456), 1,
      sym_inline_agic,
    STATE(709), 1,
      sym_runnable,
  [6500] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1215), 1,
      sym_blank_line,
    ACTIONS(1217), 1,
      sym__dedent,
    STATE(398), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6514] = 4,
    ACTIONS(1100), 1,
      sym__comment_start,
    ACTIONS(1219), 1,
      sym_blank_line,
    ACTIONS(1221), 1,
      sym__reduce_indent,
    STATE(348), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6528] = 1,
    ACTIONS(1223), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6536] = 1,
    ACTIONS(1225), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6544] = 5,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(1116), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(141), 1,
      sym_until_clause,
    STATE(835), 1,
      sym__repeat_statements,
  [6560] = 1,
    ACTIONS(1225), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6568] = 5,
    ACTIONS(402), 1,
      sym__line_start,
    ACTIONS(1116), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(143), 1,
      sym_until_clause,
    STATE(842), 1,
      sym__repeat_statements,
  [6584] = 1,
    ACTIONS(1227), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6592] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1229), 1,
      sym_blank_line,
    ACTIONS(1231), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6606] = 4,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(1104), 1,
      sym_blank_line,
    ACTIONS(1233), 1,
      sym__dedent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6620] = 5,
    ACTIONS(410), 1,
      sym_arrow,
    ACTIONS(412), 1,
      sym_colon,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(469), 1,
      sym_inline_agic,
    STATE(757), 1,
      sym_runnable,
  [6636] = 1,
    ACTIONS(1235), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6644] = 1,
    ACTIONS(1237), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6652] = 1,
    ACTIONS(1239), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6660] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(1241), 1,
      sym_blank_line,
    ACTIONS(1243), 1,
      sym__indent,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6674] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1245), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6688] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(1247), 1,
      sym__indent,
    STATE(373), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6702] = 1,
    ACTIONS(1249), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6710] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6718] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6725] = 1,
    ACTIONS(880), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6732] = 1,
    ACTIONS(882), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6739] = 1,
    ACTIONS(884), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6746] = 1,
    ACTIONS(886), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6753] = 1,
    ACTIONS(1251), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6760] = 1,
    ACTIONS(888), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6767] = 1,
    ACTIONS(890), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6774] = 1,
    ACTIONS(892), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6781] = 1,
    ACTIONS(894), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6788] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6795] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6802] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6809] = 1,
    ACTIONS(902), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6816] = 1,
    ACTIONS(904), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6823] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6830] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6837] = 1,
    ACTIONS(1253), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6844] = 1,
    ACTIONS(1255), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6851] = 1,
    ACTIONS(878), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6858] = 1,
    ACTIONS(1257), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6865] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6872] = 3,
    ACTIONS(1263), 1,
      sym_comma,
    STATE(475), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1261), 2,
      sym_newline,
      sym__inline_comment,
  [6883] = 3,
    ACTIONS(1267), 1,
      sym_comma,
    STATE(476), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1265), 2,
      sym_newline,
      sym__inline_comment,
  [6894] = 1,
    ACTIONS(1269), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6901] = 1,
    ACTIONS(1271), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6908] = 1,
    ACTIONS(918), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6915] = 1,
    ACTIONS(920), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6922] = 1,
    ACTIONS(922), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6929] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6936] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6943] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6950] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6957] = 1,
    ACTIONS(932), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6964] = 1,
    ACTIONS(934), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6971] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1273), 1,
      sym_blank_line,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6982] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6989] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6996] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7003] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7010] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7017] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7024] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7031] = 1,
    ACTIONS(1275), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7038] = 4,
    ACTIONS(593), 1,
      sym__line_start,
    ACTIONS(1277), 1,
      sym__dedent,
    STATE(115), 1,
      sym_message,
    STATE(1095), 1,
      sym_messages,
  [7051] = 3,
    ACTIONS(1281), 1,
      sym_comma,
    STATE(475), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1279), 2,
      sym_newline,
      sym__inline_comment,
  [7062] = 3,
    ACTIONS(1286), 1,
      sym_comma,
    STATE(476), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1284), 2,
      sym_newline,
      sym__inline_comment,
  [7073] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7080] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7087] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7094] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7101] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1289), 1,
      sym_text_line,
    STATE(496), 1,
      sym_line_end,
  [7114] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7121] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1291), 1,
      sym_text_line,
    STATE(497), 1,
      sym_line_end,
  [7134] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1293), 1,
      sym_text_line,
    STATE(499), 1,
      sym_line_end,
  [7147] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1295), 1,
      sym_text_line,
    STATE(500), 1,
      sym_line_end,
  [7160] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7167] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1297), 1,
      sym_blank_line,
    STATE(380), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7178] = 1,
    ACTIONS(1299), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7185] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7192] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7199] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7206] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7213] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7220] = 4,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(1301), 1,
      sym_arrow,
    ACTIONS(1303), 1,
      sym_colon,
    STATE(917), 1,
      sym_params,
  [7233] = 1,
    ACTIONS(1305), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7240] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7247] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7254] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7261] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7268] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7275] = 1,
    ACTIONS(1307), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7282] = 1,
    ACTIONS(1309), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7289] = 4,
    ACTIONS(914), 1,
      sym_snake_name,
    ACTIONS(1311), 1,
      sym_colon,
    STATE(744), 1,
      sym_inline_agic_body,
    STATE(745), 1,
      sym_runnable,
  [7302] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7309] = 1,
    ACTIONS(1313), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7316] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7323] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7330] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7337] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7344] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7351] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7358] = 1,
    ACTIONS(1315), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7365] = 1,
    ACTIONS(1317), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7372] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7379] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7386] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7393] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7400] = 1,
    ACTIONS(1319), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7407] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7414] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7421] = 1,
    ACTIONS(1321), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7428] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7435] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7442] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7449] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7456] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7463] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7470] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7477] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7484] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7491] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7498] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7505] = 1,
    ACTIONS(1323), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7512] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7519] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7526] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7533] = 4,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(1325), 1,
      sym_arrow,
    ACTIONS(1327), 1,
      sym_colon,
    STATE(888), 1,
      sym_params,
  [7546] = 1,
    ACTIONS(1329), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7553] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1331), 1,
      sym_blank_line,
    STATE(386), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7564] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7571] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7578] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7585] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7592] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7599] = 1,
    ACTIONS(1333), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7606] = 2,
    ACTIONS(1337), 1,
      sym_newline,
    ACTIONS(1335), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [7615] = 4,
    ACTIONS(1339), 1,
      sym__inline_comment,
    ACTIONS(1341), 1,
      sym_text_line,
    ACTIONS(1343), 1,
      sym_newline,
    STATE(411), 1,
      sym_line_end,
  [7628] = 1,
    ACTIONS(1345), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7635] = 3,
    ACTIONS(1347), 1,
      sym_colon,
    ACTIONS(1349), 1,
      sym_newline,
    ACTIONS(1341), 2,
      sym__inline_comment,
      sym_text_line,
  [7646] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1351), 1,
      sym_text_line,
    STATE(595), 1,
      sym_line_end,
  [7659] = 2,
    STATE(1110), 1,
      sym_directive_op,
    ACTIONS(1353), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [7668] = 1,
    ACTIONS(1355), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7675] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(610), 1,
      sym__cap_definition,
  [7688] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(613), 1,
      sym__cap_definition,
  [7701] = 4,
    ACTIONS(593), 1,
      sym__line_start,
    ACTIONS(1361), 1,
      sym__dedent,
    STATE(115), 1,
      sym_message,
    STATE(1004), 1,
      sym_messages,
  [7714] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(628), 1,
      sym__cap_definition,
  [7727] = 1,
    ACTIONS(1363), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7734] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(631), 1,
      sym__cap_definition,
  [7747] = 1,
    ACTIONS(1365), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7754] = 1,
    ACTIONS(1367), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7761] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7768] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7775] = 3,
    ACTIONS(791), 1,
      sym_newline,
    ACTIONS(1369), 1,
      sym_flow_run_keyword,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
  [7786] = 4,
    ACTIONS(1371), 1,
      sym_blank_line,
    ACTIONS(1373), 1,
      sym__text_indent,
    STATE(634), 1,
      sym_text_body,
    STATE(782), 1,
      aux_sym_text_body_repeat1,
  [7799] = 1,
    ACTIONS(1375), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7806] = 1,
    ACTIONS(1377), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7813] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7820] = 3,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(1379), 1,
      sym_colon,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [7831] = 3,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(1381), 1,
      sym_integer_literal,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [7842] = 1,
    ACTIONS(1383), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7849] = 1,
    ACTIONS(1385), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7856] = 1,
    ACTIONS(1387), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7863] = 1,
    ACTIONS(1223), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7870] = 1,
    ACTIONS(1225), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7877] = 1,
    ACTIONS(1225), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7884] = 1,
    ACTIONS(1227), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7891] = 1,
    ACTIONS(1389), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7898] = 1,
    ACTIONS(1391), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7905] = 1,
    ACTIONS(1393), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7912] = 1,
    ACTIONS(1395), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7919] = 1,
    ACTIONS(1397), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7926] = 1,
    ACTIONS(1399), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7933] = 1,
    ACTIONS(1401), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7940] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7947] = 3,
    ACTIONS(1403), 1,
      sym_optional_marker,
    ACTIONS(1405), 1,
      sym_colon,
    ACTIONS(1407), 2,
      sym_rparen,
      sym_comma,
  [7958] = 1,
    ACTIONS(1409), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7965] = 1,
    ACTIONS(1411), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7972] = 1,
    ACTIONS(1413), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7979] = 1,
    ACTIONS(1415), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7986] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7993] = 1,
    ACTIONS(1417), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8000] = 1,
    ACTIONS(1419), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8007] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(129), 1,
      sym_line_end,
    STATE(693), 1,
      sym_job_body,
  [8020] = 4,
    ACTIONS(1357), 1,
      sym__inline_comment,
    ACTIONS(1359), 1,
      sym_newline,
    STATE(129), 1,
      sym_line_end,
    STATE(578), 1,
      sym_job_body,
  [8033] = 1,
    ACTIONS(1421), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8040] = 2,
    ACTIONS(223), 1,
      sym_integer_literal,
    ACTIONS(221), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8049] = 2,
    STATE(852), 1,
      sym_text_ref,
    ACTIONS(1423), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8058] = 4,
    ACTIONS(1425), 1,
      sym_runnable_ref,
    ACTIONS(1427), 1,
      sym_none_keyword,
    ACTIONS(1429), 1,
      sym_all_keyword,
    STATE(851), 1,
      sym_route_value,
  [8071] = 1,
    ACTIONS(1431), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8078] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8085] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8092] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8099] = 1,
    ACTIONS(1433), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8106] = 1,
    ACTIONS(1435), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8113] = 1,
    ACTIONS(1437), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8120] = 1,
    ACTIONS(1439), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8127] = 1,
    ACTIONS(1441), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8134] = 1,
    ACTIONS(1443), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8141] = 1,
    ACTIONS(1235), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8148] = 1,
    ACTIONS(1445), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8155] = 1,
    ACTIONS(1237), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8162] = 1,
    ACTIONS(1239), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8169] = 1,
    ACTIONS(1447), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8176] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8183] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8190] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8197] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8204] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8211] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8218] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8225] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8232] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8239] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8246] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8253] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8260] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8267] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8274] = 1,
    ACTIONS(1449), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8281] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8288] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8295] = 1,
    ACTIONS(1451), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8302] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8309] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1453), 1,
      sym_blank_line,
    STATE(285), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8320] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8327] = 1,
    ACTIONS(1249), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8334] = 4,
    ACTIONS(1455), 1,
      sym_blank_line,
    ACTIONS(1457), 1,
      sym__text_indent,
    STATE(535), 1,
      sym_text_body,
    STATE(867), 1,
      aux_sym_text_body_repeat1,
  [8347] = 1,
    ACTIONS(1459), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8354] = 1,
    ACTIONS(1461), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8361] = 1,
    ACTIONS(1463), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8368] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8375] = 1,
    ACTIONS(1465), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8382] = 4,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    ACTIONS(1467), 1,
      sym_colon,
    STATE(436), 1,
      sym_line_end,
  [8395] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1469), 1,
      sym_text_line,
    STATE(217), 1,
      sym_line_end,
  [8408] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8415] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8422] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8429] = 1,
    ACTIONS(1471), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8436] = 1,
    ACTIONS(850), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8443] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8450] = 1,
    ACTIONS(854), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8457] = 4,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    ACTIONS(1473), 1,
      sym_colon,
    STATE(229), 1,
      sym_line_end,
  [8470] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8477] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1475), 1,
      sym_text_line,
    STATE(244), 1,
      sym_line_end,
  [8490] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1477), 1,
      sym_text_line,
    STATE(245), 1,
      sym_line_end,
  [8503] = 3,
    STATE(585), 1,
      sym_param_name,
    STATE(885), 1,
      sym_param,
    ACTIONS(860), 2,
      sym__variable_name,
      anon_sym__,
  [8514] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8521] = 1,
    ACTIONS(1479), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8528] = 1,
    ACTIONS(1481), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8535] = 1,
    ACTIONS(1483), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8542] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1485), 1,
      sym_text_line,
    STATE(271), 1,
      sym_line_end,
  [8555] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1487), 1,
      sym_text_line,
    STATE(272), 1,
      sym_line_end,
  [8568] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1489), 1,
      sym_text_line,
    STATE(274), 1,
      sym_line_end,
  [8581] = 4,
    ACTIONS(339), 1,
      sym__inline_comment,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1491), 1,
      sym_text_line,
    STATE(275), 1,
      sym_line_end,
  [8594] = 4,
    ACTIONS(914), 1,
      sym_snake_name,
    ACTIONS(1493), 1,
      sym_colon,
    STATE(588), 1,
      sym_inline_agic_body,
    STATE(843), 1,
      sym_runnable,
  [8607] = 1,
    ACTIONS(1495), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8614] = 1,
    ACTIONS(1497), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8621] = 1,
    ACTIONS(1499), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8628] = 1,
    ACTIONS(1501), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8635] = 4,
    ACTIONS(1503), 1,
      sym_blank_line,
    ACTIONS(1505), 1,
      sym__text_indent,
    STATE(739), 1,
      sym_text_body,
    STATE(872), 1,
      aux_sym_text_body_repeat1,
  [8648] = 4,
    ACTIONS(1507), 1,
      sym_blank_line,
    ACTIONS(1509), 1,
      sym__text_indent,
    STATE(319), 1,
      sym_text_body,
    STATE(873), 1,
      aux_sym_text_body_repeat1,
  [8661] = 1,
    ACTIONS(1511), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8668] = 1,
    ACTIONS(1513), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8675] = 1,
    ACTIONS(1515), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8682] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1517), 1,
      sym_blank_line,
    STATE(346), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8693] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1519), 1,
      sym_blank_line,
    STATE(347), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8704] = 3,
    ACTIONS(791), 1,
      sym_newline,
    ACTIONS(1521), 1,
      sym_flow_run_keyword,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
  [8715] = 3,
    ACTIONS(1263), 1,
      sym_comma,
    STATE(452), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1523), 2,
      sym_newline,
      sym__inline_comment,
  [8726] = 3,
    ACTIONS(1267), 1,
      sym_comma,
    STATE(453), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1525), 2,
      sym_newline,
      sym__inline_comment,
  [8737] = 3,
    ACTIONS(123), 1,
      sym_newline,
    ACTIONS(1527), 1,
      sym_colon,
    ACTIONS(95), 2,
      sym__inline_comment,
      sym_text_line,
  [8748] = 3,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(1529), 1,
      sym_integer_literal,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [8759] = 2,
    STATE(811), 1,
      sym_text_ref,
    ACTIONS(1423), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8768] = 1,
    ACTIONS(1531), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8775] = 4,
    ACTIONS(1425), 1,
      sym_runnable_ref,
    ACTIONS(1427), 1,
      sym_none_keyword,
    ACTIONS(1429), 1,
      sym_all_keyword,
    STATE(810), 1,
      sym_route_value,
  [8788] = 1,
    ACTIONS(1533), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8795] = 1,
    ACTIONS(1535), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8802] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8809] = 1,
    ACTIONS(868), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8816] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1537), 1,
      sym_blank_line,
    STATE(400), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8827] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1539), 1,
      sym_blank_line,
    STATE(401), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8838] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1541), 1,
      sym_blank_line,
    STATE(403), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8849] = 3,
    ACTIONS(1006), 1,
      sym_indented_raw_text,
    ACTIONS(1543), 1,
      sym_blank_line,
    STATE(404), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8860] = 2,
    STATE(1062), 1,
      sym_directive_op,
    ACTIONS(1353), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8869] = 1,
    ACTIONS(1545), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8876] = 1,
    ACTIONS(870), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8883] = 1,
    ACTIONS(872), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8890] = 1,
    ACTIONS(874), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8897] = 1,
    ACTIONS(876), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8904] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1547), 1,
      sym_text_line,
    STATE(457), 1,
      sym_line_end,
  [8917] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1549), 1,
      sym_text_line,
    STATE(458), 1,
      sym_line_end,
  [8930] = 4,
    ACTIONS(307), 1,
      sym__inline_comment,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(1551), 1,
      sym_text_line,
    STATE(656), 1,
      sym_line_end,
  [8943] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(473), 1,
      sym_line_end,
  [8953] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(161), 1,
      sym_line_end,
  [8963] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(468), 1,
      sym_line_end,
  [8973] = 3,
    ACTIONS(1557), 1,
      sym_pascal_name,
    STATE(1099), 1,
      sym_type_name,
    STATE(1105), 1,
      sym_struct_name,
  [8983] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(462), 1,
      sym_line_end,
  [8993] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [9003] = 1,
    ACTIONS(1559), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9009] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(350), 1,
      sym_line_end,
  [9019] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(478), 1,
      sym_line_end,
  [9029] = 3,
    ACTIONS(1561), 1,
      sym__dedent,
    ACTIONS(1563), 1,
      sym__until_start,
    STATE(69), 1,
      sym_until_clause,
  [9039] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(632), 1,
      sym_line_end,
  [9049] = 3,
    ACTIONS(1569), 1,
      sym_rparen,
    ACTIONS(1571), 1,
      sym_comma,
    STATE(712), 1,
      aux_sym_params_repeat1,
  [9059] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(479), 1,
      sym_line_end,
  [9069] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [9079] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(480), 1,
      sym_line_end,
  [9089] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(507), 1,
      sym_line_end,
  [9099] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(508), 1,
      sym_line_end,
  [9109] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(509), 1,
      sym_line_end,
  [9119] = 2,
    ACTIONS(1574), 1,
      sym_flow_spawn_keyword,
    STATE(482), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [9127] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(510), 1,
      sym_line_end,
  [9137] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(511), 1,
      sym_line_end,
  [9147] = 3,
    ACTIONS(1576), 1,
      sym_colon,
    ACTIONS(1578), 1,
      sym_snake_name,
    STATE(1015), 1,
      sym_context_name,
  [9157] = 3,
    ACTIONS(353), 1,
      sym__line_start,
    STATE(133), 1,
      sym__flow_statement,
    STATE(1070), 1,
      sym_statements,
  [9167] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(157), 1,
      sym_line_end,
  [9177] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [9187] = 1,
    ACTIONS(1580), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9193] = 3,
    ACTIONS(1582), 1,
      sym_rparen,
    ACTIONS(1584), 1,
      sym_comma,
    STATE(822), 1,
      aux_sym_params_repeat1,
  [9203] = 3,
    ACTIONS(1586), 1,
      sym_colon,
    ACTIONS(1588), 1,
      sym_snake_name,
    STATE(1083), 1,
      sym_instruct_name,
  [9213] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [9223] = 1,
    ACTIONS(1590), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [9229] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(158), 1,
      sym_line_end,
  [9239] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(153), 1,
      sym_line_end,
  [9249] = 3,
    ACTIONS(1563), 1,
      sym__until_start,
    ACTIONS(1592), 1,
      sym__dedent,
    STATE(75), 1,
      sym_until_clause,
  [9259] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(673), 1,
      sym_line_end,
  [9269] = 3,
    ACTIONS(832), 1,
      sym_flow_by_keyword,
    STATE(471), 1,
      sym__inline_by_complement,
    STATE(777), 1,
      sym__named_by_complement,
  [9279] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [9289] = 1,
    ACTIONS(1060), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9295] = 1,
    ACTIONS(1064), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9301] = 1,
    ACTIONS(1066), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9307] = 1,
    ACTIONS(1074), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9313] = 1,
    ACTIONS(1076), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9319] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(176), 1,
      sym_line_end,
  [9329] = 3,
    ACTIONS(1594), 1,
      sym_blank_line,
    ACTIONS(1597), 1,
      sym__text_indent,
    STATE(743), 1,
      aux_sym_text_body_repeat1,
  [9339] = 1,
    ACTIONS(1413), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9345] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(760), 1,
      sym_line_end,
  [9355] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(687), 1,
      sym_line_end,
  [9365] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(695), 1,
      sym_line_end,
  [9375] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(696), 1,
      sym_line_end,
  [9385] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(697), 1,
      sym_line_end,
  [9395] = 1,
    ACTIONS(1058), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9401] = 1,
    ACTIONS(1062), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9407] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [9417] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(162), 1,
      sym_line_end,
  [9427] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(165), 1,
      sym_line_end,
  [9437] = 3,
    ACTIONS(353), 1,
      sym__line_start,
    STATE(133), 1,
      sym__flow_statement,
    STATE(1009), 1,
      sym_statements,
  [9447] = 1,
    ACTIONS(1599), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9453] = 1,
    ACTIONS(1601), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [9459] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(206), 1,
      sym_line_end,
  [9469] = 1,
    ACTIONS(1417), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9475] = 1,
    ACTIONS(1419), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9481] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(490), 1,
      sym_line_end,
  [9491] = 1,
    ACTIONS(1058), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9497] = 1,
    ACTIONS(1062), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9503] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9509] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9515] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9521] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9527] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9533] = 1,
    ACTIONS(1050), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9539] = 2,
    STATE(747), 1,
      sym_local_reference,
    ACTIONS(1603), 2,
      anon_sym__,
      sym_snake_name,
  [9547] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9553] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9559] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9565] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9571] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9577] = 1,
    ACTIONS(1050), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9583] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(491), 1,
      sym_line_end,
  [9593] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(178), 1,
      sym_line_end,
  [9603] = 2,
    STATE(195), 1,
      sym__order_complement,
    ACTIONS(1605), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [9611] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(534), 1,
      sym_line_end,
  [9621] = 1,
    ACTIONS(1607), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [9627] = 3,
    ACTIONS(1609), 1,
      sym_blank_line,
    ACTIONS(1611), 1,
      sym__text_indent,
    STATE(743), 1,
      aux_sym_text_body_repeat1,
  [9637] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(191), 1,
      sym_line_end,
  [9647] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(150), 1,
      sym_line_end,
  [9657] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9663] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9669] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(437), 1,
      sym_line_end,
  [9679] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(219), 1,
      sym_line_end,
  [9689] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9695] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(221), 1,
      sym_line_end,
  [9705] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(222), 1,
      sym_line_end,
  [9715] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(223), 1,
      sym_line_end,
  [9725] = 1,
    ACTIONS(1511), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9731] = 2,
    STATE(790), 1,
      sym_local_reference,
    ACTIONS(1603), 2,
      anon_sym__,
      sym_snake_name,
  [9739] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9745] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9751] = 1,
    ACTIONS(1050), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9757] = 1,
    ACTIONS(1058), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9763] = 3,
    ACTIONS(331), 1,
      sym_flow_if_keyword,
    STATE(441), 1,
      sym__inline_if_complement,
    STATE(703), 1,
      sym__named_if_complement,
  [9773] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(442), 1,
      sym_line_end,
  [9783] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(495), 1,
      sym_line_end,
  [9793] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(443), 1,
      sym_line_end,
  [9803] = 1,
    ACTIONS(1387), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9809] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(230), 1,
      sym_line_end,
  [9819] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(466), 1,
      sym_line_end,
  [9829] = 3,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(820), 1,
      sym__named_if_complement,
  [9839] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(235), 1,
      sym_line_end,
  [9849] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(236), 1,
      sym_line_end,
  [9859] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(242), 1,
      sym_line_end,
  [9869] = 3,
    ACTIONS(1613), 1,
      sym__inline_comment,
    ACTIONS(1615), 1,
      sym_newline,
    STATE(561), 1,
      sym_line_end,
  [9879] = 3,
    ACTIONS(1613), 1,
      sym__inline_comment,
    ACTIONS(1615), 1,
      sym_newline,
    STATE(562), 1,
      sym_line_end,
  [9889] = 1,
    ACTIONS(1389), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9895] = 1,
    ACTIONS(1395), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9901] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(155), 1,
      sym_line_end,
  [9911] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(248), 1,
      sym_line_end,
  [9921] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(249), 1,
      sym_line_end,
  [9931] = 3,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1617), 1,
      sym_colon,
    STATE(1079), 1,
      sym__window_complement,
  [9941] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(252), 1,
      sym_line_end,
  [9951] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(253), 1,
      sym_line_end,
  [9961] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(254), 1,
      sym_line_end,
  [9971] = 3,
    ACTIONS(785), 1,
      sym_flow_by_keyword,
    STATE(257), 1,
      sym__inline_by_complement,
    STATE(831), 1,
      sym__named_by_complement,
  [9981] = 3,
    ACTIONS(1584), 1,
      sym_comma,
    ACTIONS(1619), 1,
      sym_rparen,
    STATE(712), 1,
      aux_sym_params_repeat1,
  [9991] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(446), 1,
      sym_line_end,
  [10001] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(260), 1,
      sym_line_end,
  [10011] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(261), 1,
      sym_line_end,
  [10021] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(262), 1,
      sym_line_end,
  [10031] = 1,
    ACTIONS(1062), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10037] = 2,
    ACTIONS(1621), 1,
      sym_flow_spawn_keyword,
    STATE(263), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10045] = 2,
    ACTIONS(1623), 1,
      sym_colon,
    ACTIONS(1625), 2,
      sym_rparen,
      sym_comma,
  [10053] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(266), 1,
      sym_line_end,
  [10063] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(267), 1,
      sym_line_end,
  [10073] = 1,
    ACTIONS(1279), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10079] = 1,
    ACTIONS(1463), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10085] = 1,
    ACTIONS(1465), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10091] = 3,
    ACTIONS(1563), 1,
      sym__until_start,
    ACTIONS(1627), 1,
      sym__dedent,
    STATE(77), 1,
      sym_until_clause,
  [10101] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(279), 1,
      sym_line_end,
  [10111] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(280), 1,
      sym_line_end,
  [10121] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(281), 1,
      sym_line_end,
  [10131] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(282), 1,
      sym_line_end,
  [10141] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(283), 1,
      sym_line_end,
  [10151] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(188), 1,
      sym_line_end,
  [10161] = 3,
    ACTIONS(1563), 1,
      sym__until_start,
    ACTIONS(1629), 1,
      sym__dedent,
    STATE(57), 1,
      sym_until_clause,
  [10171] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(592), 1,
      sym_line_end,
  [10181] = 1,
    ACTIONS(1631), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10187] = 2,
    ACTIONS(1337), 1,
      sym_newline,
    ACTIONS(1335), 2,
      sym__inline_comment,
      sym_text_line,
  [10195] = 3,
    ACTIONS(1343), 1,
      sym_newline,
    ACTIONS(1633), 1,
      sym__inline_comment,
    STATE(738), 1,
      sym_line_end,
  [10205] = 1,
    ACTIONS(1284), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10211] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(169), 1,
      sym_line_end,
  [10221] = 3,
    ACTIONS(343), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(318), 1,
      sym_line_end,
  [10231] = 1,
    ACTIONS(1635), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10237] = 3,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [10247] = 3,
    ACTIONS(1637), 1,
      sym__inline_comment,
    ACTIONS(1639), 1,
      sym_newline,
    STATE(276), 1,
      sym_line_end,
  [10257] = 1,
    ACTIONS(1641), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10263] = 2,
    ACTIONS(223), 1,
      sym_all_keyword,
    ACTIONS(221), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10271] = 3,
    ACTIONS(1643), 1,
      sym__inline_comment,
    ACTIONS(1645), 1,
      sym_newline,
    STATE(357), 1,
      sym_line_end,
  [10281] = 2,
    STATE(889), 1,
      sym_param_name,
    ACTIONS(1647), 2,
      sym__variable_name,
      anon_sym__,
  [10289] = 1,
    ACTIONS(1649), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10295] = 2,
    STATE(171), 1,
      sym__order_complement,
    ACTIONS(1605), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10303] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [10313] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(177), 1,
      sym_line_end,
  [10323] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(207), 1,
      sym_line_end,
  [10333] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [10343] = 2,
    ACTIONS(1653), 1,
      sym_newline,
    ACTIONS(1651), 2,
      sym__inline_comment,
      sym_text_line,
  [10351] = 2,
    ACTIONS(1631), 1,
      sym_newline,
    ACTIONS(1655), 2,
      sym__inline_comment,
      sym_text_line,
  [10359] = 2,
    ACTIONS(1659), 1,
      sym_newline,
    ACTIONS(1657), 2,
      sym__inline_comment,
      sym_text_line,
  [10367] = 2,
    STATE(832), 1,
      sym_recall_source,
    ACTIONS(537), 2,
      anon_sym_far,
      anon_sym_near,
  [10375] = 3,
    ACTIONS(1609), 1,
      sym_blank_line,
    ACTIONS(1661), 1,
      sym__text_indent,
    STATE(743), 1,
      aux_sym_text_body_repeat1,
  [10385] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(606), 1,
      sym_line_end,
  [10395] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(154), 1,
      sym_line_end,
  [10405] = 3,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1663), 1,
      sym_colon,
    STATE(1113), 1,
      sym__window_complement,
  [10415] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(467), 1,
      sym_line_end,
  [10425] = 3,
    ACTIONS(1609), 1,
      sym_blank_line,
    ACTIONS(1665), 1,
      sym__text_indent,
    STATE(743), 1,
      aux_sym_text_body_repeat1,
  [10435] = 3,
    ACTIONS(1609), 1,
      sym_blank_line,
    ACTIONS(1667), 1,
      sym__text_indent,
    STATE(743), 1,
      aux_sym_text_body_repeat1,
  [10445] = 3,
    ACTIONS(1553), 1,
      sym__inline_comment,
    ACTIONS(1555), 1,
      sym_newline,
    STATE(425), 1,
      sym_line_end,
  [10455] = 3,
    ACTIONS(313), 1,
      sym_newline,
    ACTIONS(856), 1,
      sym__inline_comment,
    STATE(461), 1,
      sym_line_end,
  [10465] = 2,
    ACTIONS(1669), 1,
      sym_comment_text,
    ACTIONS(1671), 1,
      sym__comment_end,
  [10472] = 1,
    ACTIONS(1673), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10477] = 2,
    ACTIONS(1675), 1,
      aux_sym__doc_space_token1,
    STATE(969), 1,
      sym__required_space,
  [10484] = 2,
    ACTIONS(1677), 1,
      sym__snake_kebab_name,
    STATE(987), 1,
      sym_job_name,
  [10491] = 2,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(216), 1,
      sym__implicit_run_line,
  [10498] = 2,
    ACTIONS(1679), 1,
      sym__one_integer_literal,
    ACTIONS(1681), 1,
      sym__other_integer_literal,
  [10505] = 1,
    ACTIONS(1683), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [10510] = 2,
    ACTIONS(1685), 1,
      sym__snake_kebab_name,
    STATE(1097), 1,
      sym_cap_name,
  [10517] = 2,
    ACTIONS(1687), 1,
      sym__reduce_text_start,
    STATE(518), 1,
      sym__reduce_text_body,
  [10524] = 1,
    ACTIONS(1689), 2,
      sym_rparen,
      sym_comma,
  [10529] = 2,
    ACTIONS(1687), 1,
      sym__reduce_text_start,
    STATE(501), 1,
      sym__reduce_text_body,
  [10536] = 1,
    ACTIONS(1691), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [10541] = 2,
    ACTIONS(1693), 1,
      sym_arrow,
    ACTIONS(1695), 1,
      sym_colon,
  [10548] = 2,
    ACTIONS(1697), 1,
      aux_sym__doc_space_token1,
    STATE(1063), 1,
      sym__doc_space,
  [10555] = 2,
    ACTIONS(1685), 1,
      sym__snake_kebab_name,
    STATE(1098), 1,
      sym_cap_name,
  [10562] = 2,
    ACTIONS(1699), 1,
      sym_comment_text,
    ACTIONS(1701), 1,
      sym__comment_end,
  [10569] = 2,
    ACTIONS(1687), 1,
      sym__reduce_text_start,
    STATE(512), 1,
      sym__reduce_text_body,
  [10576] = 1,
    ACTIONS(1703), 2,
      sym_rparen,
      sym_comma,
  [10581] = 1,
    ACTIONS(1705), 2,
      sym_arrow,
      sym_colon,
  [10586] = 1,
    ACTIONS(1707), 2,
      sym_newline,
      sym__inline_comment,
  [10591] = 1,
    ACTIONS(1709), 2,
      sym_rparen,
      sym_comma,
  [10596] = 2,
    ACTIONS(1711), 1,
      anon_sym_lanes,
    STATE(916), 1,
      sym_flow_lanes_keyword,
  [10603] = 2,
    ACTIONS(617), 1,
      sym__from_start,
    STATE(381), 1,
      sym__from_complement,
  [10610] = 1,
    ACTIONS(1713), 2,
      sym_arrow,
      sym_colon,
  [10615] = 1,
    ACTIONS(1715), 2,
      sym_arrow,
      sym_colon,
  [10620] = 1,
    ACTIONS(1717), 2,
      sym_optional_marker,
      sym_colon,
  [10625] = 2,
    ACTIONS(1719), 1,
      sym_optional_marker,
    ACTIONS(1721), 1,
      sym_colon,
  [10632] = 1,
    ACTIONS(1058), 2,
      sym_blank_line,
      sym__text_indent,
  [10637] = 2,
    ACTIONS(93), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
  [10644] = 2,
    ACTIONS(1723), 1,
      sym_arrow,
    ACTIONS(1725), 1,
      sym_colon,
  [10651] = 2,
    ACTIONS(1685), 1,
      sym__snake_kebab_name,
    STATE(1069), 1,
      sym_cap_name,
  [10658] = 2,
    ACTIONS(617), 1,
      sym__from_start,
    STATE(391), 1,
      sym__from_complement,
  [10665] = 2,
    ACTIONS(1727), 1,
      anon_sym_EQ,
    STATE(912), 1,
      sym_assign_operator,
  [10672] = 2,
    ACTIONS(1729), 1,
      sym_snake_name,
    STATE(902), 1,
      sym_field_name,
  [10679] = 2,
    ACTIONS(1731), 1,
      anon_sym_lanes,
    STATE(351), 1,
      sym_flow_lanes_keyword,
  [10686] = 2,
    ACTIONS(1733), 1,
      aux_sym__doc_space_token1,
    STATE(856), 1,
      sym__doc_space,
  [10693] = 2,
    ACTIONS(1735), 1,
      sym_text_line,
    STATE(855), 1,
      sym_property_value,
  [10700] = 2,
    ACTIONS(1737), 1,
      sym_arrow,
    ACTIONS(1739), 1,
      sym_colon,
  [10707] = 2,
    ACTIONS(1741), 1,
      sym_comment_text,
    ACTIONS(1743), 1,
      sym__comment_end,
  [10714] = 2,
    ACTIONS(1745), 1,
      sym_comment_text,
    ACTIONS(1747), 1,
      sym__comment_end,
  [10721] = 1,
    ACTIONS(1112), 2,
      sym_newline,
      sym__inline_comment,
  [10726] = 2,
    ACTIONS(1749), 1,
      sym_arrow,
    ACTIONS(1751), 1,
      sym_colon,
  [10733] = 2,
    ACTIONS(1753), 1,
      sym_text_line,
    STATE(868), 1,
      sym_cap_ref,
  [10740] = 2,
    ACTIONS(1755), 1,
      sym_comment_text,
    ACTIONS(1757), 1,
      sym__comment_end,
  [10747] = 2,
    ACTIONS(1759), 1,
      sym_comment_text,
    ACTIONS(1761), 1,
      sym__comment_end,
  [10754] = 1,
    ACTIONS(1114), 2,
      sym_newline,
      sym__inline_comment,
  [10759] = 2,
    ACTIONS(491), 1,
      sym__line_start,
    STATE(91), 1,
      sym_field,
  [10766] = 2,
    ACTIONS(1763), 1,
      sym_snake_name,
    STATE(908), 1,
      sym_property_key,
  [10773] = 2,
    ACTIONS(1765), 1,
      sym_comment_text,
    ACTIONS(1767), 1,
      sym__comment_end,
  [10780] = 2,
    ACTIONS(1769), 1,
      sym_comment_text,
    ACTIONS(1771), 1,
      sym__comment_end,
  [10787] = 2,
    ACTIONS(1773), 1,
      sym_comment_text,
    ACTIONS(1775), 1,
      sym__comment_end,
  [10794] = 2,
    ACTIONS(1777), 1,
      anon_sym_EQ,
    STATE(598), 1,
      sym_assign_operator,
  [10801] = 2,
    ACTIONS(1687), 1,
      sym__reduce_text_start,
    STATE(488), 1,
      sym__reduce_text_body,
  [10808] = 2,
    ACTIONS(1779), 1,
      sym_comment_text,
    ACTIONS(1781), 1,
      sym__comment_end,
  [10815] = 2,
    ACTIONS(1783), 1,
      sym_comment_text,
    ACTIONS(1785), 1,
      sym__comment_end,
  [10822] = 2,
    ACTIONS(1787), 1,
      sym_comment_text,
    ACTIONS(1789), 1,
      sym__comment_end,
  [10829] = 2,
    ACTIONS(1791), 1,
      sym_comment_text,
    ACTIONS(1793), 1,
      sym__comment_end,
  [10836] = 2,
    ACTIONS(1795), 1,
      sym_comment_text,
    ACTIONS(1797), 1,
      sym__comment_end,
  [10843] = 2,
    ACTIONS(1799), 1,
      sym_comment_text,
    ACTIONS(1801), 1,
      sym__comment_end,
  [10850] = 1,
    ACTIONS(1523), 2,
      sym_newline,
      sym__inline_comment,
  [10855] = 2,
    ACTIONS(1803), 1,
      sym_comment_text,
    ACTIONS(1805), 1,
      sym__comment_end,
  [10862] = 2,
    ACTIONS(1807), 1,
      sym_comment_text,
    ACTIONS(1809), 1,
      sym__comment_end,
  [10869] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1120), 1,
      sym_param_doc_tag,
  [10876] = 1,
    ACTIONS(1813), 2,
      sym_newline,
      sym__inline_comment,
  [10881] = 2,
    ACTIONS(1815), 1,
      sym_comment_text,
    ACTIONS(1817), 1,
      sym__comment_end,
  [10888] = 1,
    ACTIONS(1819), 2,
      sym_newline,
      sym__inline_comment,
  [10893] = 1,
    ACTIONS(1525), 2,
      sym_newline,
      sym__inline_comment,
  [10898] = 1,
    ACTIONS(1821), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10903] = 2,
    ACTIONS(195), 1,
      sym__agic_raw_text,
    STATE(399), 1,
      sym__unroled_message_line,
  [10910] = 2,
    ACTIONS(1823), 1,
      sym_snake_name,
    STATE(365), 1,
      sym_agent,
  [10917] = 2,
    ACTIONS(1825), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [10924] = 2,
    ACTIONS(1827), 1,
      sym__one_integer_literal,
    ACTIONS(1829), 1,
      sym__other_integer_literal,
  [10931] = 2,
    ACTIONS(1823), 1,
      sym_snake_name,
    STATE(241), 1,
      sym_agent,
  [10938] = 1,
    ACTIONS(1831), 2,
      sym_newline,
      sym__inline_comment,
  [10943] = 2,
    ACTIONS(617), 1,
      sym__from_start,
    STATE(390), 1,
      sym__from_complement,
  [10950] = 2,
    ACTIONS(491), 1,
      sym__line_start,
    STATE(148), 1,
      sym_field,
  [10957] = 2,
    ACTIONS(617), 1,
      sym__from_start,
    STATE(393), 1,
      sym__from_complement,
  [10964] = 1,
    ACTIONS(1062), 2,
      sym_blank_line,
      sym__text_indent,
  [10969] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(990), 1,
      sym_param_doc_tag,
  [10976] = 2,
    ACTIONS(1677), 1,
      sym__snake_kebab_name,
    STATE(1102), 1,
      sym_job_name,
  [10983] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1108), 1,
      sym_param_doc_tag,
  [10990] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1001), 1,
      sym_param_doc_tag,
  [10997] = 2,
    ACTIONS(1685), 1,
      sym__snake_kebab_name,
    STATE(1057), 1,
      sym_cap_name,
  [11004] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1012), 1,
      sym_param_doc_tag,
  [11011] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1019), 1,
      sym_param_doc_tag,
  [11018] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1026), 1,
      sym_param_doc_tag,
  [11025] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1033), 1,
      sym_param_doc_tag,
  [11032] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1040), 1,
      sym_param_doc_tag,
  [11039] = 2,
    ACTIONS(1811), 1,
      anon_sym_ATparam,
    STATE(1047), 1,
      sym_param_doc_tag,
  [11046] = 2,
    ACTIONS(1833), 1,
      anon_sym_EQ,
    STATE(943), 1,
      sym_assign_operator,
  [11053] = 2,
    ACTIONS(1833), 1,
      anon_sym_EQ,
    STATE(681), 1,
      sym_assign_operator,
  [11060] = 2,
    ACTIONS(1835), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_assign_operator,
  [11067] = 2,
    ACTIONS(1777), 1,
      anon_sym_EQ,
    STATE(683), 1,
      sym_assign_operator,
  [11074] = 2,
    ACTIONS(914), 1,
      sym_snake_name,
    STATE(730), 1,
      sym_runnable,
  [11081] = 2,
    ACTIONS(1825), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [11088] = 2,
    ACTIONS(1833), 1,
      anon_sym_EQ,
    STATE(877), 1,
      sym_assign_operator,
  [11095] = 2,
    ACTIONS(1837), 1,
      sym_comment_text,
    ACTIONS(1839), 1,
      sym__comment_end,
  [11102] = 2,
    ACTIONS(1833), 1,
      anon_sym_EQ,
    STATE(597), 1,
      sym_assign_operator,
  [11109] = 2,
    ACTIONS(1835), 1,
      anon_sym_EQ,
    STATE(101), 1,
      sym_assign_operator,
  [11116] = 2,
    ACTIONS(1841), 1,
      sym_comment_text,
    ACTIONS(1843), 1,
      sym__comment_end,
  [11123] = 1,
    ACTIONS(1845), 2,
      sym_newline,
      sym__inline_comment,
  [11128] = 1,
    ACTIONS(1847), 1,
      sym__dedent,
  [11132] = 1,
    ACTIONS(1849), 1,
      sym__dedent,
  [11136] = 1,
    ACTIONS(1659), 1,
      anon_sym_EQ,
  [11140] = 1,
    ACTIONS(1851), 1,
      sym__dedent,
  [11144] = 1,
    ACTIONS(1853), 1,
      sym__dedent,
  [11148] = 1,
    ACTIONS(1855), 1,
      sym_flow_time_keyword,
  [11152] = 1,
    ACTIONS(1857), 1,
      sym__dedent,
  [11156] = 1,
    ACTIONS(1859), 1,
      sym__dedent,
  [11160] = 1,
    ACTIONS(1861), 1,
      sym__dedent,
  [11164] = 1,
    ACTIONS(1863), 1,
      sym_cap_kind,
  [11168] = 1,
    ACTIONS(1865), 1,
      sym_colon,
  [11172] = 1,
    ACTIONS(1867), 1,
      sym__comment_end,
  [11176] = 1,
    ACTIONS(1869), 1,
      sym__comment_end,
  [11180] = 1,
    ACTIONS(1871), 1,
      sym__comment_end,
  [11184] = 1,
    ACTIONS(1873), 1,
      sym_newline,
  [11188] = 1,
    ACTIONS(1875), 1,
      sym_colon,
  [11192] = 1,
    ACTIONS(1877), 1,
      sym__dedent,
  [11196] = 1,
    ACTIONS(1855), 1,
      sym_flow_times_keyword,
  [11200] = 1,
    ACTIONS(1879), 1,
      sym_colon,
  [11204] = 1,
    ACTIONS(1881), 1,
      sym_colon,
  [11208] = 1,
    ACTIONS(1883), 1,
      sym_colon,
  [11212] = 1,
    ACTIONS(1885), 1,
      sym_colon,
  [11216] = 1,
    ACTIONS(1887), 1,
      sym__comment_end,
  [11220] = 1,
    ACTIONS(1889), 1,
      sym__comment_end,
  [11224] = 1,
    ACTIONS(1891), 1,
      sym__comment_end,
  [11228] = 1,
    ACTIONS(1893), 1,
      sym_newline,
  [11232] = 1,
    ACTIONS(1895), 1,
      sym_integer_literal,
  [11236] = 1,
    ACTIONS(1897), 1,
      sym__dedent,
  [11240] = 1,
    ACTIONS(1899), 1,
      sym_flow_from_keyword,
  [11244] = 1,
    ACTIONS(1901), 1,
      sym__dedent,
  [11248] = 1,
    ACTIONS(1903), 1,
      sym_newline,
  [11252] = 1,
    ACTIONS(1905), 1,
      sym_colon,
  [11256] = 1,
    ACTIONS(1907), 1,
      sym__dedent,
  [11260] = 1,
    ACTIONS(1909), 1,
      sym__comment_end,
  [11264] = 1,
    ACTIONS(1911), 1,
      sym__comment_end,
  [11268] = 1,
    ACTIONS(1913), 1,
      sym__comment_end,
  [11272] = 1,
    ACTIONS(1915), 1,
      sym_newline,
  [11276] = 1,
    ACTIONS(1917), 1,
      ts_builtin_sym_end,
  [11280] = 1,
    ACTIONS(1919), 1,
      sym_colon,
  [11284] = 1,
    ACTIONS(1921), 1,
      sym_colon,
  [11288] = 1,
    ACTIONS(1923), 1,
      sym__comment_end,
  [11292] = 1,
    ACTIONS(1925), 1,
      sym__comment_end,
  [11296] = 1,
    ACTIONS(1927), 1,
      sym__comment_end,
  [11300] = 1,
    ACTIONS(1929), 1,
      sym_newline,
  [11304] = 1,
    ACTIONS(1931), 1,
      sym_newline,
  [11308] = 1,
    ACTIONS(1933), 1,
      sym_flow_lane_keyword,
  [11312] = 1,
    ACTIONS(1935), 1,
      sym_flow_run_keyword,
  [11316] = 1,
    ACTIONS(1937), 1,
      sym__comment_end,
  [11320] = 1,
    ACTIONS(1939), 1,
      sym__comment_end,
  [11324] = 1,
    ACTIONS(1941), 1,
      sym__comment_end,
  [11328] = 1,
    ACTIONS(1943), 1,
      sym_newline,
  [11332] = 1,
    ACTIONS(1945), 1,
      sym_flow_exec_keyword,
  [11336] = 1,
    ACTIONS(1947), 1,
      sym__dedent,
  [11340] = 1,
    ACTIONS(1949), 1,
      sym__dedent,
  [11344] = 1,
    ACTIONS(1951), 1,
      sym__comment_end,
  [11348] = 1,
    ACTIONS(1953), 1,
      sym__comment_end,
  [11352] = 1,
    ACTIONS(1955), 1,
      sym__comment_end,
  [11356] = 1,
    ACTIONS(1957), 1,
      sym_newline,
  [11360] = 1,
    ACTIONS(1959), 1,
      sym__dedent,
  [11364] = 1,
    ACTIONS(1961), 1,
      sym_flow_exec_keyword,
  [11368] = 1,
    ACTIONS(1963), 1,
      sym_newline,
  [11372] = 1,
    ACTIONS(1965), 1,
      sym__comment_end,
  [11376] = 1,
    ACTIONS(1967), 1,
      sym__comment_end,
  [11380] = 1,
    ACTIONS(1969), 1,
      sym__comment_end,
  [11384] = 1,
    ACTIONS(1971), 1,
      sym_newline,
  [11388] = 1,
    ACTIONS(1397), 1,
      aux_sym__doc_space_token1,
  [11392] = 1,
    ACTIONS(1973), 1,
      sym_flow_until_keyword,
  [11396] = 1,
    ACTIONS(1975), 1,
      sym__comment_end,
  [11400] = 1,
    ACTIONS(1977), 1,
      sym__comment_end,
  [11404] = 1,
    ACTIONS(1979), 1,
      sym__comment_end,
  [11408] = 1,
    ACTIONS(1981), 1,
      sym__comment_end,
  [11412] = 1,
    ACTIONS(1983), 1,
      sym_newline,
  [11416] = 1,
    ACTIONS(1985), 1,
      sym_newline,
  [11420] = 1,
    ACTIONS(297), 1,
      sym__dedent,
  [11424] = 1,
    ACTIONS(1987), 1,
      sym__dedent,
  [11428] = 1,
    ACTIONS(1989), 1,
      anon_sym_EQ,
  [11432] = 1,
    ACTIONS(1991), 1,
      sym_colon,
  [11436] = 1,
    ACTIONS(1993), 1,
      sym__dedent,
  [11440] = 1,
    ACTIONS(1995), 1,
      sym_flow_until_keyword,
  [11444] = 1,
    ACTIONS(1997), 1,
      sym_integer_literal,
  [11448] = 1,
    ACTIONS(1999), 1,
      sym_colon,
  [11452] = 1,
    ACTIONS(2001), 1,
      sym__dedent,
  [11456] = 1,
    ACTIONS(2003), 1,
      sym_newline,
  [11460] = 1,
    ACTIONS(2005), 1,
      sym_colon,
  [11464] = 1,
    ACTIONS(2007), 1,
      sym_colon,
  [11468] = 1,
    ACTIONS(1821), 1,
      sym_directive_value,
  [11472] = 1,
    ACTIONS(2009), 1,
      sym_comment_text,
  [11476] = 1,
    ACTIONS(2011), 1,
      sym_flow_exec_keyword,
  [11480] = 1,
    ACTIONS(2013), 1,
      sym_flow_until_keyword,
  [11484] = 1,
    ACTIONS(2015), 1,
      sym_colon,
  [11488] = 1,
    ACTIONS(2017), 1,
      sym_colon,
  [11492] = 1,
    ACTIONS(2019), 1,
      sym_integer_literal,
  [11496] = 1,
    ACTIONS(2021), 1,
      sym_colon,
  [11500] = 1,
    ACTIONS(2023), 1,
      sym__dedent,
  [11504] = 1,
    ACTIONS(2025), 1,
      sym__dedent,
  [11508] = 1,
    ACTIONS(2027), 1,
      sym_flow_lane_keyword,
  [11512] = 1,
    ACTIONS(2029), 1,
      sym_colon,
  [11516] = 1,
    ACTIONS(2031), 1,
      sym_colon,
  [11520] = 1,
    ACTIONS(2033), 1,
      sym_colon,
  [11524] = 1,
    ACTIONS(2035), 1,
      sym_integer_literal,
  [11528] = 1,
    ACTIONS(2037), 1,
      sym_flow_exec_keyword,
  [11532] = 1,
    ACTIONS(2039), 1,
      sym_flow_until_keyword,
  [11536] = 1,
    ACTIONS(2041), 1,
      sym_colon,
  [11540] = 1,
    ACTIONS(2043), 1,
      sym__dedent,
  [11544] = 1,
    ACTIONS(2045), 1,
      sym_colon,
  [11548] = 1,
    ACTIONS(2047), 1,
      sym_flow_until_keyword,
  [11552] = 1,
    ACTIONS(2049), 1,
      sym_colon,
  [11556] = 1,
    ACTIONS(2051), 1,
      sym__dedent,
  [11560] = 1,
    ACTIONS(2053), 1,
      sym_flow_run_keyword,
  [11564] = 1,
    ACTIONS(2055), 1,
      sym_colon,
  [11568] = 1,
    ACTIONS(2057), 1,
      sym_newline,
  [11572] = 1,
    ACTIONS(2059), 1,
      sym_colon,
  [11576] = 1,
    ACTIONS(2061), 1,
      sym__comment_end,
  [11580] = 1,
    ACTIONS(2063), 1,
      sym_flow_until_keyword,
  [11584] = 1,
    ACTIONS(2065), 1,
      sym__comment_end,
  [11588] = 1,
    ACTIONS(223), 1,
      sym_text_line,
  [11592] = 1,
    ACTIONS(1277), 1,
      sym__dedent,
  [11596] = 1,
    ACTIONS(2067), 1,
      sym_colon,
  [11600] = 1,
    ACTIONS(1361), 1,
      sym__dedent,
  [11604] = 1,
    ACTIONS(2069), 1,
      anon_sym_EQ,
  [11608] = 1,
    ACTIONS(2071), 1,
      sym_colon,
  [11612] = 1,
    ACTIONS(2073), 1,
      sym_colon,
  [11616] = 1,
    ACTIONS(2075), 1,
      sym_colon,
  [11620] = 1,
    ACTIONS(2077), 1,
      sym_colon,
  [11624] = 1,
    ACTIONS(2079), 1,
      sym__dedent,
  [11628] = 1,
    ACTIONS(2081), 1,
      sym_colon,
  [11632] = 1,
    ACTIONS(325), 1,
      sym__dedent,
  [11636] = 1,
    ACTIONS(2083), 1,
      sym__dedent,
  [11640] = 1,
    ACTIONS(2085), 1,
      sym_colon,
  [11644] = 1,
    ACTIONS(2087), 1,
      sym_colon,
  [11648] = 1,
    ACTIONS(2089), 1,
      sym_directive_value,
  [11652] = 1,
    ACTIONS(2091), 1,
      sym__comment_end,
  [11656] = 1,
    ACTIONS(2093), 1,
      sym_runnable_ref,
  [11660] = 1,
    ACTIONS(1673), 1,
      sym_directive_value,
  [11664] = 1,
    ACTIONS(2095), 1,
      sym_colon,
  [11668] = 1,
    ACTIONS(2097), 1,
      sym__dedent,
  [11672] = 1,
    ACTIONS(2099), 1,
      sym_colon,
  [11676] = 1,
    ACTIONS(2101), 1,
      sym__dedent,
  [11680] = 1,
    ACTIONS(2103), 1,
      sym__dedent,
  [11684] = 1,
    ACTIONS(2105), 1,
      sym__dedent,
  [11688] = 1,
    ACTIONS(2107), 1,
      sym__comment_end,
  [11692] = 1,
    ACTIONS(2109), 1,
      sym__comment_end,
  [11696] = 1,
    ACTIONS(2111), 1,
      sym_newline,
  [11700] = 1,
    ACTIONS(2113), 1,
      sym__comment_end,
  [11704] = 1,
    ACTIONS(2115), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 288,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 388,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 459,
  [SMALL_STATE(14)] = 488,
  [SMALL_STATE(15)] = 517,
  [SMALL_STATE(16)] = 543,
  [SMALL_STATE(17)] = 569,
  [SMALL_STATE(18)] = 602,
  [SMALL_STATE(19)] = 635,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 725,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 773,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 853,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 901,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 949,
  [SMALL_STATE(32)] = 973,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1053,
  [SMALL_STATE(36)] = 1077,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1149,
  [SMALL_STATE(40)] = 1178,
  [SMALL_STATE(41)] = 1207,
  [SMALL_STATE(42)] = 1236,
  [SMALL_STATE(43)] = 1265,
  [SMALL_STATE(44)] = 1289,
  [SMALL_STATE(45)] = 1315,
  [SMALL_STATE(46)] = 1343,
  [SMALL_STATE(47)] = 1367,
  [SMALL_STATE(48)] = 1393,
  [SMALL_STATE(49)] = 1417,
  [SMALL_STATE(50)] = 1443,
  [SMALL_STATE(51)] = 1469,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1521,
  [SMALL_STATE(54)] = 1547,
  [SMALL_STATE(55)] = 1575,
  [SMALL_STATE(56)] = 1599,
  [SMALL_STATE(57)] = 1625,
  [SMALL_STATE(58)] = 1648,
  [SMALL_STATE(59)] = 1669,
  [SMALL_STATE(60)] = 1688,
  [SMALL_STATE(61)] = 1707,
  [SMALL_STATE(62)] = 1730,
  [SMALL_STATE(63)] = 1753,
  [SMALL_STATE(64)] = 1776,
  [SMALL_STATE(65)] = 1795,
  [SMALL_STATE(66)] = 1818,
  [SMALL_STATE(67)] = 1839,
  [SMALL_STATE(68)] = 1860,
  [SMALL_STATE(69)] = 1885,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1933,
  [SMALL_STATE(72)] = 1954,
  [SMALL_STATE(73)] = 1977,
  [SMALL_STATE(74)] = 2002,
  [SMALL_STATE(75)] = 2021,
  [SMALL_STATE(76)] = 2044,
  [SMALL_STATE(77)] = 2063,
  [SMALL_STATE(78)] = 2086,
  [SMALL_STATE(79)] = 2109,
  [SMALL_STATE(80)] = 2132,
  [SMALL_STATE(81)] = 2155,
  [SMALL_STATE(82)] = 2178,
  [SMALL_STATE(83)] = 2203,
  [SMALL_STATE(84)] = 2222,
  [SMALL_STATE(85)] = 2241,
  [SMALL_STATE(86)] = 2264,
  [SMALL_STATE(87)] = 2282,
  [SMALL_STATE(88)] = 2302,
  [SMALL_STATE(89)] = 2322,
  [SMALL_STATE(90)] = 2340,
  [SMALL_STATE(91)] = 2358,
  [SMALL_STATE(92)] = 2376,
  [SMALL_STATE(93)] = 2396,
  [SMALL_STATE(94)] = 2416,
  [SMALL_STATE(95)] = 2434,
  [SMALL_STATE(96)] = 2452,
  [SMALL_STATE(97)] = 2468,
  [SMALL_STATE(98)] = 2486,
  [SMALL_STATE(99)] = 2504,
  [SMALL_STATE(100)] = 2522,
  [SMALL_STATE(101)] = 2536,
  [SMALL_STATE(102)] = 2552,
  [SMALL_STATE(103)] = 2566,
  [SMALL_STATE(104)] = 2584,
  [SMALL_STATE(105)] = 2604,
  [SMALL_STATE(106)] = 2624,
  [SMALL_STATE(107)] = 2644,
  [SMALL_STATE(108)] = 2662,
  [SMALL_STATE(109)] = 2680,
  [SMALL_STATE(110)] = 2702,
  [SMALL_STATE(111)] = 2720,
  [SMALL_STATE(112)] = 2738,
  [SMALL_STATE(113)] = 2760,
  [SMALL_STATE(114)] = 2778,
  [SMALL_STATE(115)] = 2796,
  [SMALL_STATE(116)] = 2814,
  [SMALL_STATE(117)] = 2834,
  [SMALL_STATE(118)] = 2854,
  [SMALL_STATE(119)] = 2872,
  [SMALL_STATE(120)] = 2890,
  [SMALL_STATE(121)] = 2912,
  [SMALL_STATE(122)] = 2930,
  [SMALL_STATE(123)] = 2950,
  [SMALL_STATE(124)] = 2968,
  [SMALL_STATE(125)] = 2986,
  [SMALL_STATE(126)] = 3004,
  [SMALL_STATE(127)] = 3026,
  [SMALL_STATE(128)] = 3044,
  [SMALL_STATE(129)] = 3062,
  [SMALL_STATE(130)] = 3080,
  [SMALL_STATE(131)] = 3098,
  [SMALL_STATE(132)] = 3116,
  [SMALL_STATE(133)] = 3134,
  [SMALL_STATE(134)] = 3152,
  [SMALL_STATE(135)] = 3170,
  [SMALL_STATE(136)] = 3188,
  [SMALL_STATE(137)] = 3206,
  [SMALL_STATE(138)] = 3224,
  [SMALL_STATE(139)] = 3242,
  [SMALL_STATE(140)] = 3262,
  [SMALL_STATE(141)] = 3278,
  [SMALL_STATE(142)] = 3298,
  [SMALL_STATE(143)] = 3318,
  [SMALL_STATE(144)] = 3338,
  [SMALL_STATE(145)] = 3358,
  [SMALL_STATE(146)] = 3378,
  [SMALL_STATE(147)] = 3396,
  [SMALL_STATE(148)] = 3414,
  [SMALL_STATE(149)] = 3432,
  [SMALL_STATE(150)] = 3452,
  [SMALL_STATE(151)] = 3469,
  [SMALL_STATE(152)] = 3482,
  [SMALL_STATE(153)] = 3497,
  [SMALL_STATE(154)] = 3514,
  [SMALL_STATE(155)] = 3531,
  [SMALL_STATE(156)] = 3548,
  [SMALL_STATE(157)] = 3561,
  [SMALL_STATE(158)] = 3578,
  [SMALL_STATE(159)] = 3595,
  [SMALL_STATE(160)] = 3614,
  [SMALL_STATE(161)] = 3627,
  [SMALL_STATE(162)] = 3644,
  [SMALL_STATE(163)] = 3661,
  [SMALL_STATE(164)] = 3680,
  [SMALL_STATE(165)] = 3699,
  [SMALL_STATE(166)] = 3716,
  [SMALL_STATE(167)] = 3735,
  [SMALL_STATE(168)] = 3754,
  [SMALL_STATE(169)] = 3773,
  [SMALL_STATE(170)] = 3790,
  [SMALL_STATE(171)] = 3807,
  [SMALL_STATE(172)] = 3826,
  [SMALL_STATE(173)] = 3841,
  [SMALL_STATE(174)] = 3858,
  [SMALL_STATE(175)] = 3877,
  [SMALL_STATE(176)] = 3894,
  [SMALL_STATE(177)] = 3911,
  [SMALL_STATE(178)] = 3928,
  [SMALL_STATE(179)] = 3945,
  [SMALL_STATE(180)] = 3962,
  [SMALL_STATE(181)] = 3979,
  [SMALL_STATE(182)] = 3998,
  [SMALL_STATE(183)] = 4017,
  [SMALL_STATE(184)] = 4036,
  [SMALL_STATE(185)] = 4055,
  [SMALL_STATE(186)] = 4074,
  [SMALL_STATE(187)] = 4089,
  [SMALL_STATE(188)] = 4108,
  [SMALL_STATE(189)] = 4125,
  [SMALL_STATE(190)] = 4144,
  [SMALL_STATE(191)] = 4163,
  [SMALL_STATE(192)] = 4180,
  [SMALL_STATE(193)] = 4195,
  [SMALL_STATE(194)] = 4210,
  [SMALL_STATE(195)] = 4225,
  [SMALL_STATE(196)] = 4244,
  [SMALL_STATE(197)] = 4259,
  [SMALL_STATE(198)] = 4268,
  [SMALL_STATE(199)] = 4281,
  [SMALL_STATE(200)] = 4290,
  [SMALL_STATE(201)] = 4307,
  [SMALL_STATE(202)] = 4316,
  [SMALL_STATE(203)] = 4333,
  [SMALL_STATE(204)] = 4350,
  [SMALL_STATE(205)] = 4369,
  [SMALL_STATE(206)] = 4384,
  [SMALL_STATE(207)] = 4401,
  [SMALL_STATE(208)] = 4418,
  [SMALL_STATE(209)] = 4432,
  [SMALL_STATE(210)] = 4440,
  [SMALL_STATE(211)] = 4448,
  [SMALL_STATE(212)] = 4456,
  [SMALL_STATE(213)] = 4464,
  [SMALL_STATE(214)] = 4472,
  [SMALL_STATE(215)] = 4488,
  [SMALL_STATE(216)] = 4502,
  [SMALL_STATE(217)] = 4510,
  [SMALL_STATE(218)] = 4518,
  [SMALL_STATE(219)] = 4526,
  [SMALL_STATE(220)] = 4534,
  [SMALL_STATE(221)] = 4542,
  [SMALL_STATE(222)] = 4550,
  [SMALL_STATE(223)] = 4558,
  [SMALL_STATE(224)] = 4566,
  [SMALL_STATE(225)] = 4574,
  [SMALL_STATE(226)] = 4582,
  [SMALL_STATE(227)] = 4590,
  [SMALL_STATE(228)] = 4598,
  [SMALL_STATE(229)] = 4606,
  [SMALL_STATE(230)] = 4614,
  [SMALL_STATE(231)] = 4622,
  [SMALL_STATE(232)] = 4630,
  [SMALL_STATE(233)] = 4638,
  [SMALL_STATE(234)] = 4646,
  [SMALL_STATE(235)] = 4654,
  [SMALL_STATE(236)] = 4662,
  [SMALL_STATE(237)] = 4670,
  [SMALL_STATE(238)] = 4678,
  [SMALL_STATE(239)] = 4686,
  [SMALL_STATE(240)] = 4694,
  [SMALL_STATE(241)] = 4708,
  [SMALL_STATE(242)] = 4724,
  [SMALL_STATE(243)] = 4732,
  [SMALL_STATE(244)] = 4740,
  [SMALL_STATE(245)] = 4748,
  [SMALL_STATE(246)] = 4756,
  [SMALL_STATE(247)] = 4764,
  [SMALL_STATE(248)] = 4772,
  [SMALL_STATE(249)] = 4780,
  [SMALL_STATE(250)] = 4788,
  [SMALL_STATE(251)] = 4796,
  [SMALL_STATE(252)] = 4804,
  [SMALL_STATE(253)] = 4812,
  [SMALL_STATE(254)] = 4820,
  [SMALL_STATE(255)] = 4828,
  [SMALL_STATE(256)] = 4836,
  [SMALL_STATE(257)] = 4844,
  [SMALL_STATE(258)] = 4852,
  [SMALL_STATE(259)] = 4860,
  [SMALL_STATE(260)] = 4868,
  [SMALL_STATE(261)] = 4876,
  [SMALL_STATE(262)] = 4884,
  [SMALL_STATE(263)] = 4892,
  [SMALL_STATE(264)] = 4900,
  [SMALL_STATE(265)] = 4908,
  [SMALL_STATE(266)] = 4916,
  [SMALL_STATE(267)] = 4924,
  [SMALL_STATE(268)] = 4932,
  [SMALL_STATE(269)] = 4940,
  [SMALL_STATE(270)] = 4948,
  [SMALL_STATE(271)] = 4956,
  [SMALL_STATE(272)] = 4964,
  [SMALL_STATE(273)] = 4972,
  [SMALL_STATE(274)] = 4980,
  [SMALL_STATE(275)] = 4988,
  [SMALL_STATE(276)] = 4996,
  [SMALL_STATE(277)] = 5004,
  [SMALL_STATE(278)] = 5012,
  [SMALL_STATE(279)] = 5020,
  [SMALL_STATE(280)] = 5028,
  [SMALL_STATE(281)] = 5036,
  [SMALL_STATE(282)] = 5044,
  [SMALL_STATE(283)] = 5052,
  [SMALL_STATE(284)] = 5060,
  [SMALL_STATE(285)] = 5068,
  [SMALL_STATE(286)] = 5082,
  [SMALL_STATE(287)] = 5090,
  [SMALL_STATE(288)] = 5098,
  [SMALL_STATE(289)] = 5106,
  [SMALL_STATE(290)] = 5114,
  [SMALL_STATE(291)] = 5122,
  [SMALL_STATE(292)] = 5130,
  [SMALL_STATE(293)] = 5138,
  [SMALL_STATE(294)] = 5146,
  [SMALL_STATE(295)] = 5154,
  [SMALL_STATE(296)] = 5162,
  [SMALL_STATE(297)] = 5170,
  [SMALL_STATE(298)] = 5178,
  [SMALL_STATE(299)] = 5186,
  [SMALL_STATE(300)] = 5194,
  [SMALL_STATE(301)] = 5202,
  [SMALL_STATE(302)] = 5210,
  [SMALL_STATE(303)] = 5218,
  [SMALL_STATE(304)] = 5226,
  [SMALL_STATE(305)] = 5234,
  [SMALL_STATE(306)] = 5242,
  [SMALL_STATE(307)] = 5250,
  [SMALL_STATE(308)] = 5258,
  [SMALL_STATE(309)] = 5272,
  [SMALL_STATE(310)] = 5280,
  [SMALL_STATE(311)] = 5288,
  [SMALL_STATE(312)] = 5296,
  [SMALL_STATE(313)] = 5304,
  [SMALL_STATE(314)] = 5312,
  [SMALL_STATE(315)] = 5320,
  [SMALL_STATE(316)] = 5328,
  [SMALL_STATE(317)] = 5336,
  [SMALL_STATE(318)] = 5344,
  [SMALL_STATE(319)] = 5352,
  [SMALL_STATE(320)] = 5360,
  [SMALL_STATE(321)] = 5374,
  [SMALL_STATE(322)] = 5382,
  [SMALL_STATE(323)] = 5390,
  [SMALL_STATE(324)] = 5404,
  [SMALL_STATE(325)] = 5412,
  [SMALL_STATE(326)] = 5420,
  [SMALL_STATE(327)] = 5428,
  [SMALL_STATE(328)] = 5436,
  [SMALL_STATE(329)] = 5444,
  [SMALL_STATE(330)] = 5452,
  [SMALL_STATE(331)] = 5466,
  [SMALL_STATE(332)] = 5474,
  [SMALL_STATE(333)] = 5488,
  [SMALL_STATE(334)] = 5496,
  [SMALL_STATE(335)] = 5504,
  [SMALL_STATE(336)] = 5512,
  [SMALL_STATE(337)] = 5520,
  [SMALL_STATE(338)] = 5528,
  [SMALL_STATE(339)] = 5536,
  [SMALL_STATE(340)] = 5544,
  [SMALL_STATE(341)] = 5552,
  [SMALL_STATE(342)] = 5560,
  [SMALL_STATE(343)] = 5568,
  [SMALL_STATE(344)] = 5576,
  [SMALL_STATE(345)] = 5584,
  [SMALL_STATE(346)] = 5600,
  [SMALL_STATE(347)] = 5614,
  [SMALL_STATE(348)] = 5628,
  [SMALL_STATE(349)] = 5642,
  [SMALL_STATE(350)] = 5656,
  [SMALL_STATE(351)] = 5670,
  [SMALL_STATE(352)] = 5678,
  [SMALL_STATE(353)] = 5686,
  [SMALL_STATE(354)] = 5702,
  [SMALL_STATE(355)] = 5716,
  [SMALL_STATE(356)] = 5732,
  [SMALL_STATE(357)] = 5740,
  [SMALL_STATE(358)] = 5748,
  [SMALL_STATE(359)] = 5764,
  [SMALL_STATE(360)] = 5780,
  [SMALL_STATE(361)] = 5796,
  [SMALL_STATE(362)] = 5812,
  [SMALL_STATE(363)] = 5826,
  [SMALL_STATE(364)] = 5842,
  [SMALL_STATE(365)] = 5856,
  [SMALL_STATE(366)] = 5872,
  [SMALL_STATE(367)] = 5888,
  [SMALL_STATE(368)] = 5902,
  [SMALL_STATE(369)] = 5918,
  [SMALL_STATE(370)] = 5934,
  [SMALL_STATE(371)] = 5950,
  [SMALL_STATE(372)] = 5966,
  [SMALL_STATE(373)] = 5982,
  [SMALL_STATE(374)] = 5996,
  [SMALL_STATE(375)] = 6012,
  [SMALL_STATE(376)] = 6026,
  [SMALL_STATE(377)] = 6040,
  [SMALL_STATE(378)] = 6054,
  [SMALL_STATE(379)] = 6070,
  [SMALL_STATE(380)] = 6086,
  [SMALL_STATE(381)] = 6100,
  [SMALL_STATE(382)] = 6114,
  [SMALL_STATE(383)] = 6122,
  [SMALL_STATE(384)] = 6130,
  [SMALL_STATE(385)] = 6146,
  [SMALL_STATE(386)] = 6160,
  [SMALL_STATE(387)] = 6174,
  [SMALL_STATE(388)] = 6182,
  [SMALL_STATE(389)] = 6196,
  [SMALL_STATE(390)] = 6210,
  [SMALL_STATE(391)] = 6224,
  [SMALL_STATE(392)] = 6238,
  [SMALL_STATE(393)] = 6252,
  [SMALL_STATE(394)] = 6266,
  [SMALL_STATE(395)] = 6280,
  [SMALL_STATE(396)] = 6296,
  [SMALL_STATE(397)] = 6312,
  [SMALL_STATE(398)] = 6326,
  [SMALL_STATE(399)] = 6340,
  [SMALL_STATE(400)] = 6348,
  [SMALL_STATE(401)] = 6362,
  [SMALL_STATE(402)] = 6376,
  [SMALL_STATE(403)] = 6390,
  [SMALL_STATE(404)] = 6404,
  [SMALL_STATE(405)] = 6418,
  [SMALL_STATE(406)] = 6434,
  [SMALL_STATE(407)] = 6442,
  [SMALL_STATE(408)] = 6456,
  [SMALL_STATE(409)] = 6470,
  [SMALL_STATE(410)] = 6484,
  [SMALL_STATE(411)] = 6500,
  [SMALL_STATE(412)] = 6514,
  [SMALL_STATE(413)] = 6528,
  [SMALL_STATE(414)] = 6536,
  [SMALL_STATE(415)] = 6544,
  [SMALL_STATE(416)] = 6560,
  [SMALL_STATE(417)] = 6568,
  [SMALL_STATE(418)] = 6584,
  [SMALL_STATE(419)] = 6592,
  [SMALL_STATE(420)] = 6606,
  [SMALL_STATE(421)] = 6620,
  [SMALL_STATE(422)] = 6636,
  [SMALL_STATE(423)] = 6644,
  [SMALL_STATE(424)] = 6652,
  [SMALL_STATE(425)] = 6660,
  [SMALL_STATE(426)] = 6674,
  [SMALL_STATE(427)] = 6688,
  [SMALL_STATE(428)] = 6702,
  [SMALL_STATE(429)] = 6710,
  [SMALL_STATE(430)] = 6718,
  [SMALL_STATE(431)] = 6725,
  [SMALL_STATE(432)] = 6732,
  [SMALL_STATE(433)] = 6739,
  [SMALL_STATE(434)] = 6746,
  [SMALL_STATE(435)] = 6753,
  [SMALL_STATE(436)] = 6760,
  [SMALL_STATE(437)] = 6767,
  [SMALL_STATE(438)] = 6774,
  [SMALL_STATE(439)] = 6781,
  [SMALL_STATE(440)] = 6788,
  [SMALL_STATE(441)] = 6795,
  [SMALL_STATE(442)] = 6802,
  [SMALL_STATE(443)] = 6809,
  [SMALL_STATE(444)] = 6816,
  [SMALL_STATE(445)] = 6823,
  [SMALL_STATE(446)] = 6830,
  [SMALL_STATE(447)] = 6837,
  [SMALL_STATE(448)] = 6844,
  [SMALL_STATE(449)] = 6851,
  [SMALL_STATE(450)] = 6858,
  [SMALL_STATE(451)] = 6865,
  [SMALL_STATE(452)] = 6872,
  [SMALL_STATE(453)] = 6883,
  [SMALL_STATE(454)] = 6894,
  [SMALL_STATE(455)] = 6901,
  [SMALL_STATE(456)] = 6908,
  [SMALL_STATE(457)] = 6915,
  [SMALL_STATE(458)] = 6922,
  [SMALL_STATE(459)] = 6929,
  [SMALL_STATE(460)] = 6936,
  [SMALL_STATE(461)] = 6943,
  [SMALL_STATE(462)] = 6950,
  [SMALL_STATE(463)] = 6957,
  [SMALL_STATE(464)] = 6964,
  [SMALL_STATE(465)] = 6971,
  [SMALL_STATE(466)] = 6982,
  [SMALL_STATE(467)] = 6989,
  [SMALL_STATE(468)] = 6996,
  [SMALL_STATE(469)] = 7003,
  [SMALL_STATE(470)] = 7010,
  [SMALL_STATE(471)] = 7017,
  [SMALL_STATE(472)] = 7024,
  [SMALL_STATE(473)] = 7031,
  [SMALL_STATE(474)] = 7038,
  [SMALL_STATE(475)] = 7051,
  [SMALL_STATE(476)] = 7062,
  [SMALL_STATE(477)] = 7073,
  [SMALL_STATE(478)] = 7080,
  [SMALL_STATE(479)] = 7087,
  [SMALL_STATE(480)] = 7094,
  [SMALL_STATE(481)] = 7101,
  [SMALL_STATE(482)] = 7114,
  [SMALL_STATE(483)] = 7121,
  [SMALL_STATE(484)] = 7134,
  [SMALL_STATE(485)] = 7147,
  [SMALL_STATE(486)] = 7160,
  [SMALL_STATE(487)] = 7167,
  [SMALL_STATE(488)] = 7178,
  [SMALL_STATE(489)] = 7185,
  [SMALL_STATE(490)] = 7192,
  [SMALL_STATE(491)] = 7199,
  [SMALL_STATE(492)] = 7206,
  [SMALL_STATE(493)] = 7213,
  [SMALL_STATE(494)] = 7220,
  [SMALL_STATE(495)] = 7233,
  [SMALL_STATE(496)] = 7240,
  [SMALL_STATE(497)] = 7247,
  [SMALL_STATE(498)] = 7254,
  [SMALL_STATE(499)] = 7261,
  [SMALL_STATE(500)] = 7268,
  [SMALL_STATE(501)] = 7275,
  [SMALL_STATE(502)] = 7282,
  [SMALL_STATE(503)] = 7289,
  [SMALL_STATE(504)] = 7302,
  [SMALL_STATE(505)] = 7309,
  [SMALL_STATE(506)] = 7316,
  [SMALL_STATE(507)] = 7323,
  [SMALL_STATE(508)] = 7330,
  [SMALL_STATE(509)] = 7337,
  [SMALL_STATE(510)] = 7344,
  [SMALL_STATE(511)] = 7351,
  [SMALL_STATE(512)] = 7358,
  [SMALL_STATE(513)] = 7365,
  [SMALL_STATE(514)] = 7372,
  [SMALL_STATE(515)] = 7379,
  [SMALL_STATE(516)] = 7386,
  [SMALL_STATE(517)] = 7393,
  [SMALL_STATE(518)] = 7400,
  [SMALL_STATE(519)] = 7407,
  [SMALL_STATE(520)] = 7414,
  [SMALL_STATE(521)] = 7421,
  [SMALL_STATE(522)] = 7428,
  [SMALL_STATE(523)] = 7435,
  [SMALL_STATE(524)] = 7442,
  [SMALL_STATE(525)] = 7449,
  [SMALL_STATE(526)] = 7456,
  [SMALL_STATE(527)] = 7463,
  [SMALL_STATE(528)] = 7470,
  [SMALL_STATE(529)] = 7477,
  [SMALL_STATE(530)] = 7484,
  [SMALL_STATE(531)] = 7491,
  [SMALL_STATE(532)] = 7498,
  [SMALL_STATE(533)] = 7505,
  [SMALL_STATE(534)] = 7512,
  [SMALL_STATE(535)] = 7519,
  [SMALL_STATE(536)] = 7526,
  [SMALL_STATE(537)] = 7533,
  [SMALL_STATE(538)] = 7546,
  [SMALL_STATE(539)] = 7553,
  [SMALL_STATE(540)] = 7564,
  [SMALL_STATE(541)] = 7571,
  [SMALL_STATE(542)] = 7578,
  [SMALL_STATE(543)] = 7585,
  [SMALL_STATE(544)] = 7592,
  [SMALL_STATE(545)] = 7599,
  [SMALL_STATE(546)] = 7606,
  [SMALL_STATE(547)] = 7615,
  [SMALL_STATE(548)] = 7628,
  [SMALL_STATE(549)] = 7635,
  [SMALL_STATE(550)] = 7646,
  [SMALL_STATE(551)] = 7659,
  [SMALL_STATE(552)] = 7668,
  [SMALL_STATE(553)] = 7675,
  [SMALL_STATE(554)] = 7688,
  [SMALL_STATE(555)] = 7701,
  [SMALL_STATE(556)] = 7714,
  [SMALL_STATE(557)] = 7727,
  [SMALL_STATE(558)] = 7734,
  [SMALL_STATE(559)] = 7747,
  [SMALL_STATE(560)] = 7754,
  [SMALL_STATE(561)] = 7761,
  [SMALL_STATE(562)] = 7768,
  [SMALL_STATE(563)] = 7775,
  [SMALL_STATE(564)] = 7786,
  [SMALL_STATE(565)] = 7799,
  [SMALL_STATE(566)] = 7806,
  [SMALL_STATE(567)] = 7813,
  [SMALL_STATE(568)] = 7820,
  [SMALL_STATE(569)] = 7831,
  [SMALL_STATE(570)] = 7842,
  [SMALL_STATE(571)] = 7849,
  [SMALL_STATE(572)] = 7856,
  [SMALL_STATE(573)] = 7863,
  [SMALL_STATE(574)] = 7870,
  [SMALL_STATE(575)] = 7877,
  [SMALL_STATE(576)] = 7884,
  [SMALL_STATE(577)] = 7891,
  [SMALL_STATE(578)] = 7898,
  [SMALL_STATE(579)] = 7905,
  [SMALL_STATE(580)] = 7912,
  [SMALL_STATE(581)] = 7919,
  [SMALL_STATE(582)] = 7926,
  [SMALL_STATE(583)] = 7933,
  [SMALL_STATE(584)] = 7940,
  [SMALL_STATE(585)] = 7947,
  [SMALL_STATE(586)] = 7958,
  [SMALL_STATE(587)] = 7965,
  [SMALL_STATE(588)] = 7972,
  [SMALL_STATE(589)] = 7979,
  [SMALL_STATE(590)] = 7986,
  [SMALL_STATE(591)] = 7993,
  [SMALL_STATE(592)] = 8000,
  [SMALL_STATE(593)] = 8007,
  [SMALL_STATE(594)] = 8020,
  [SMALL_STATE(595)] = 8033,
  [SMALL_STATE(596)] = 8040,
  [SMALL_STATE(597)] = 8049,
  [SMALL_STATE(598)] = 8058,
  [SMALL_STATE(599)] = 8071,
  [SMALL_STATE(600)] = 8078,
  [SMALL_STATE(601)] = 8085,
  [SMALL_STATE(602)] = 8092,
  [SMALL_STATE(603)] = 8099,
  [SMALL_STATE(604)] = 8106,
  [SMALL_STATE(605)] = 8113,
  [SMALL_STATE(606)] = 8120,
  [SMALL_STATE(607)] = 8127,
  [SMALL_STATE(608)] = 8134,
  [SMALL_STATE(609)] = 8141,
  [SMALL_STATE(610)] = 8148,
  [SMALL_STATE(611)] = 8155,
  [SMALL_STATE(612)] = 8162,
  [SMALL_STATE(613)] = 8169,
  [SMALL_STATE(614)] = 8176,
  [SMALL_STATE(615)] = 8183,
  [SMALL_STATE(616)] = 8190,
  [SMALL_STATE(617)] = 8197,
  [SMALL_STATE(618)] = 8204,
  [SMALL_STATE(619)] = 8211,
  [SMALL_STATE(620)] = 8218,
  [SMALL_STATE(621)] = 8225,
  [SMALL_STATE(622)] = 8232,
  [SMALL_STATE(623)] = 8239,
  [SMALL_STATE(624)] = 8246,
  [SMALL_STATE(625)] = 8253,
  [SMALL_STATE(626)] = 8260,
  [SMALL_STATE(627)] = 8267,
  [SMALL_STATE(628)] = 8274,
  [SMALL_STATE(629)] = 8281,
  [SMALL_STATE(630)] = 8288,
  [SMALL_STATE(631)] = 8295,
  [SMALL_STATE(632)] = 8302,
  [SMALL_STATE(633)] = 8309,
  [SMALL_STATE(634)] = 8320,
  [SMALL_STATE(635)] = 8327,
  [SMALL_STATE(636)] = 8334,
  [SMALL_STATE(637)] = 8347,
  [SMALL_STATE(638)] = 8354,
  [SMALL_STATE(639)] = 8361,
  [SMALL_STATE(640)] = 8368,
  [SMALL_STATE(641)] = 8375,
  [SMALL_STATE(642)] = 8382,
  [SMALL_STATE(643)] = 8395,
  [SMALL_STATE(644)] = 8408,
  [SMALL_STATE(645)] = 8415,
  [SMALL_STATE(646)] = 8422,
  [SMALL_STATE(647)] = 8429,
  [SMALL_STATE(648)] = 8436,
  [SMALL_STATE(649)] = 8443,
  [SMALL_STATE(650)] = 8450,
  [SMALL_STATE(651)] = 8457,
  [SMALL_STATE(652)] = 8470,
  [SMALL_STATE(653)] = 8477,
  [SMALL_STATE(654)] = 8490,
  [SMALL_STATE(655)] = 8503,
  [SMALL_STATE(656)] = 8514,
  [SMALL_STATE(657)] = 8521,
  [SMALL_STATE(658)] = 8528,
  [SMALL_STATE(659)] = 8535,
  [SMALL_STATE(660)] = 8542,
  [SMALL_STATE(661)] = 8555,
  [SMALL_STATE(662)] = 8568,
  [SMALL_STATE(663)] = 8581,
  [SMALL_STATE(664)] = 8594,
  [SMALL_STATE(665)] = 8607,
  [SMALL_STATE(666)] = 8614,
  [SMALL_STATE(667)] = 8621,
  [SMALL_STATE(668)] = 8628,
  [SMALL_STATE(669)] = 8635,
  [SMALL_STATE(670)] = 8648,
  [SMALL_STATE(671)] = 8661,
  [SMALL_STATE(672)] = 8668,
  [SMALL_STATE(673)] = 8675,
  [SMALL_STATE(674)] = 8682,
  [SMALL_STATE(675)] = 8693,
  [SMALL_STATE(676)] = 8704,
  [SMALL_STATE(677)] = 8715,
  [SMALL_STATE(678)] = 8726,
  [SMALL_STATE(679)] = 8737,
  [SMALL_STATE(680)] = 8748,
  [SMALL_STATE(681)] = 8759,
  [SMALL_STATE(682)] = 8768,
  [SMALL_STATE(683)] = 8775,
  [SMALL_STATE(684)] = 8788,
  [SMALL_STATE(685)] = 8795,
  [SMALL_STATE(686)] = 8802,
  [SMALL_STATE(687)] = 8809,
  [SMALL_STATE(688)] = 8816,
  [SMALL_STATE(689)] = 8827,
  [SMALL_STATE(690)] = 8838,
  [SMALL_STATE(691)] = 8849,
  [SMALL_STATE(692)] = 8860,
  [SMALL_STATE(693)] = 8869,
  [SMALL_STATE(694)] = 8876,
  [SMALL_STATE(695)] = 8883,
  [SMALL_STATE(696)] = 8890,
  [SMALL_STATE(697)] = 8897,
  [SMALL_STATE(698)] = 8904,
  [SMALL_STATE(699)] = 8917,
  [SMALL_STATE(700)] = 8930,
  [SMALL_STATE(701)] = 8943,
  [SMALL_STATE(702)] = 8953,
  [SMALL_STATE(703)] = 8963,
  [SMALL_STATE(704)] = 8973,
  [SMALL_STATE(705)] = 8983,
  [SMALL_STATE(706)] = 8993,
  [SMALL_STATE(707)] = 9003,
  [SMALL_STATE(708)] = 9009,
  [SMALL_STATE(709)] = 9019,
  [SMALL_STATE(710)] = 9029,
  [SMALL_STATE(711)] = 9039,
  [SMALL_STATE(712)] = 9049,
  [SMALL_STATE(713)] = 9059,
  [SMALL_STATE(714)] = 9069,
  [SMALL_STATE(715)] = 9079,
  [SMALL_STATE(716)] = 9089,
  [SMALL_STATE(717)] = 9099,
  [SMALL_STATE(718)] = 9109,
  [SMALL_STATE(719)] = 9119,
  [SMALL_STATE(720)] = 9127,
  [SMALL_STATE(721)] = 9137,
  [SMALL_STATE(722)] = 9147,
  [SMALL_STATE(723)] = 9157,
  [SMALL_STATE(724)] = 9167,
  [SMALL_STATE(725)] = 9177,
  [SMALL_STATE(726)] = 9187,
  [SMALL_STATE(727)] = 9193,
  [SMALL_STATE(728)] = 9203,
  [SMALL_STATE(729)] = 9213,
  [SMALL_STATE(730)] = 9223,
  [SMALL_STATE(731)] = 9229,
  [SMALL_STATE(732)] = 9239,
  [SMALL_STATE(733)] = 9249,
  [SMALL_STATE(734)] = 9259,
  [SMALL_STATE(735)] = 9269,
  [SMALL_STATE(736)] = 9279,
  [SMALL_STATE(737)] = 9289,
  [SMALL_STATE(738)] = 9295,
  [SMALL_STATE(739)] = 9301,
  [SMALL_STATE(740)] = 9307,
  [SMALL_STATE(741)] = 9313,
  [SMALL_STATE(742)] = 9319,
  [SMALL_STATE(743)] = 9329,
  [SMALL_STATE(744)] = 9339,
  [SMALL_STATE(745)] = 9345,
  [SMALL_STATE(746)] = 9355,
  [SMALL_STATE(747)] = 9365,
  [SMALL_STATE(748)] = 9375,
  [SMALL_STATE(749)] = 9385,
  [SMALL_STATE(750)] = 9395,
  [SMALL_STATE(751)] = 9401,
  [SMALL_STATE(752)] = 9407,
  [SMALL_STATE(753)] = 9417,
  [SMALL_STATE(754)] = 9427,
  [SMALL_STATE(755)] = 9437,
  [SMALL_STATE(756)] = 9447,
  [SMALL_STATE(757)] = 9453,
  [SMALL_STATE(758)] = 9459,
  [SMALL_STATE(759)] = 9469,
  [SMALL_STATE(760)] = 9475,
  [SMALL_STATE(761)] = 9481,
  [SMALL_STATE(762)] = 9491,
  [SMALL_STATE(763)] = 9497,
  [SMALL_STATE(764)] = 9503,
  [SMALL_STATE(765)] = 9509,
  [SMALL_STATE(766)] = 9515,
  [SMALL_STATE(767)] = 9521,
  [SMALL_STATE(768)] = 9527,
  [SMALL_STATE(769)] = 9533,
  [SMALL_STATE(770)] = 9539,
  [SMALL_STATE(771)] = 9547,
  [SMALL_STATE(772)] = 9553,
  [SMALL_STATE(773)] = 9559,
  [SMALL_STATE(774)] = 9565,
  [SMALL_STATE(775)] = 9571,
  [SMALL_STATE(776)] = 9577,
  [SMALL_STATE(777)] = 9583,
  [SMALL_STATE(778)] = 9593,
  [SMALL_STATE(779)] = 9603,
  [SMALL_STATE(780)] = 9611,
  [SMALL_STATE(781)] = 9621,
  [SMALL_STATE(782)] = 9627,
  [SMALL_STATE(783)] = 9637,
  [SMALL_STATE(784)] = 9647,
  [SMALL_STATE(785)] = 9657,
  [SMALL_STATE(786)] = 9663,
  [SMALL_STATE(787)] = 9669,
  [SMALL_STATE(788)] = 9679,
  [SMALL_STATE(789)] = 9689,
  [SMALL_STATE(790)] = 9695,
  [SMALL_STATE(791)] = 9705,
  [SMALL_STATE(792)] = 9715,
  [SMALL_STATE(793)] = 9725,
  [SMALL_STATE(794)] = 9731,
  [SMALL_STATE(795)] = 9739,
  [SMALL_STATE(796)] = 9745,
  [SMALL_STATE(797)] = 9751,
  [SMALL_STATE(798)] = 9757,
  [SMALL_STATE(799)] = 9763,
  [SMALL_STATE(800)] = 9773,
  [SMALL_STATE(801)] = 9783,
  [SMALL_STATE(802)] = 9793,
  [SMALL_STATE(803)] = 9803,
  [SMALL_STATE(804)] = 9809,
  [SMALL_STATE(805)] = 9819,
  [SMALL_STATE(806)] = 9829,
  [SMALL_STATE(807)] = 9839,
  [SMALL_STATE(808)] = 9849,
  [SMALL_STATE(809)] = 9859,
  [SMALL_STATE(810)] = 9869,
  [SMALL_STATE(811)] = 9879,
  [SMALL_STATE(812)] = 9889,
  [SMALL_STATE(813)] = 9895,
  [SMALL_STATE(814)] = 9901,
  [SMALL_STATE(815)] = 9911,
  [SMALL_STATE(816)] = 9921,
  [SMALL_STATE(817)] = 9931,
  [SMALL_STATE(818)] = 9941,
  [SMALL_STATE(819)] = 9951,
  [SMALL_STATE(820)] = 9961,
  [SMALL_STATE(821)] = 9971,
  [SMALL_STATE(822)] = 9981,
  [SMALL_STATE(823)] = 9991,
  [SMALL_STATE(824)] = 10001,
  [SMALL_STATE(825)] = 10011,
  [SMALL_STATE(826)] = 10021,
  [SMALL_STATE(827)] = 10031,
  [SMALL_STATE(828)] = 10037,
  [SMALL_STATE(829)] = 10045,
  [SMALL_STATE(830)] = 10053,
  [SMALL_STATE(831)] = 10063,
  [SMALL_STATE(832)] = 10073,
  [SMALL_STATE(833)] = 10079,
  [SMALL_STATE(834)] = 10085,
  [SMALL_STATE(835)] = 10091,
  [SMALL_STATE(836)] = 10101,
  [SMALL_STATE(837)] = 10111,
  [SMALL_STATE(838)] = 10121,
  [SMALL_STATE(839)] = 10131,
  [SMALL_STATE(840)] = 10141,
  [SMALL_STATE(841)] = 10151,
  [SMALL_STATE(842)] = 10161,
  [SMALL_STATE(843)] = 10171,
  [SMALL_STATE(844)] = 10181,
  [SMALL_STATE(845)] = 10187,
  [SMALL_STATE(846)] = 10195,
  [SMALL_STATE(847)] = 10205,
  [SMALL_STATE(848)] = 10211,
  [SMALL_STATE(849)] = 10221,
  [SMALL_STATE(850)] = 10231,
  [SMALL_STATE(851)] = 10237,
  [SMALL_STATE(852)] = 10247,
  [SMALL_STATE(853)] = 10257,
  [SMALL_STATE(854)] = 10263,
  [SMALL_STATE(855)] = 10271,
  [SMALL_STATE(856)] = 10281,
  [SMALL_STATE(857)] = 10289,
  [SMALL_STATE(858)] = 10295,
  [SMALL_STATE(859)] = 10303,
  [SMALL_STATE(860)] = 10313,
  [SMALL_STATE(861)] = 10323,
  [SMALL_STATE(862)] = 10333,
  [SMALL_STATE(863)] = 10343,
  [SMALL_STATE(864)] = 10351,
  [SMALL_STATE(865)] = 10359,
  [SMALL_STATE(866)] = 10367,
  [SMALL_STATE(867)] = 10375,
  [SMALL_STATE(868)] = 10385,
  [SMALL_STATE(869)] = 10395,
  [SMALL_STATE(870)] = 10405,
  [SMALL_STATE(871)] = 10415,
  [SMALL_STATE(872)] = 10425,
  [SMALL_STATE(873)] = 10435,
  [SMALL_STATE(874)] = 10445,
  [SMALL_STATE(875)] = 10455,
  [SMALL_STATE(876)] = 10465,
  [SMALL_STATE(877)] = 10472,
  [SMALL_STATE(878)] = 10477,
  [SMALL_STATE(879)] = 10484,
  [SMALL_STATE(880)] = 10491,
  [SMALL_STATE(881)] = 10498,
  [SMALL_STATE(882)] = 10505,
  [SMALL_STATE(883)] = 10510,
  [SMALL_STATE(884)] = 10517,
  [SMALL_STATE(885)] = 10524,
  [SMALL_STATE(886)] = 10529,
  [SMALL_STATE(887)] = 10536,
  [SMALL_STATE(888)] = 10541,
  [SMALL_STATE(889)] = 10548,
  [SMALL_STATE(890)] = 10555,
  [SMALL_STATE(891)] = 10562,
  [SMALL_STATE(892)] = 10569,
  [SMALL_STATE(893)] = 10576,
  [SMALL_STATE(894)] = 10581,
  [SMALL_STATE(895)] = 10586,
  [SMALL_STATE(896)] = 10591,
  [SMALL_STATE(897)] = 10596,
  [SMALL_STATE(898)] = 10603,
  [SMALL_STATE(899)] = 10610,
  [SMALL_STATE(900)] = 10615,
  [SMALL_STATE(901)] = 10620,
  [SMALL_STATE(902)] = 10625,
  [SMALL_STATE(903)] = 10632,
  [SMALL_STATE(904)] = 10637,
  [SMALL_STATE(905)] = 10644,
  [SMALL_STATE(906)] = 10651,
  [SMALL_STATE(907)] = 10658,
  [SMALL_STATE(908)] = 10665,
  [SMALL_STATE(909)] = 10672,
  [SMALL_STATE(910)] = 10679,
  [SMALL_STATE(911)] = 10686,
  [SMALL_STATE(912)] = 10693,
  [SMALL_STATE(913)] = 10700,
  [SMALL_STATE(914)] = 10707,
  [SMALL_STATE(915)] = 10714,
  [SMALL_STATE(916)] = 10721,
  [SMALL_STATE(917)] = 10726,
  [SMALL_STATE(918)] = 10733,
  [SMALL_STATE(919)] = 10740,
  [SMALL_STATE(920)] = 10747,
  [SMALL_STATE(921)] = 10754,
  [SMALL_STATE(922)] = 10759,
  [SMALL_STATE(923)] = 10766,
  [SMALL_STATE(924)] = 10773,
  [SMALL_STATE(925)] = 10780,
  [SMALL_STATE(926)] = 10787,
  [SMALL_STATE(927)] = 10794,
  [SMALL_STATE(928)] = 10801,
  [SMALL_STATE(929)] = 10808,
  [SMALL_STATE(930)] = 10815,
  [SMALL_STATE(931)] = 10822,
  [SMALL_STATE(932)] = 10829,
  [SMALL_STATE(933)] = 10836,
  [SMALL_STATE(934)] = 10843,
  [SMALL_STATE(935)] = 10850,
  [SMALL_STATE(936)] = 10855,
  [SMALL_STATE(937)] = 10862,
  [SMALL_STATE(938)] = 10869,
  [SMALL_STATE(939)] = 10876,
  [SMALL_STATE(940)] = 10881,
  [SMALL_STATE(941)] = 10888,
  [SMALL_STATE(942)] = 10893,
  [SMALL_STATE(943)] = 10898,
  [SMALL_STATE(944)] = 10903,
  [SMALL_STATE(945)] = 10910,
  [SMALL_STATE(946)] = 10917,
  [SMALL_STATE(947)] = 10924,
  [SMALL_STATE(948)] = 10931,
  [SMALL_STATE(949)] = 10938,
  [SMALL_STATE(950)] = 10943,
  [SMALL_STATE(951)] = 10950,
  [SMALL_STATE(952)] = 10957,
  [SMALL_STATE(953)] = 10964,
  [SMALL_STATE(954)] = 10969,
  [SMALL_STATE(955)] = 10976,
  [SMALL_STATE(956)] = 10983,
  [SMALL_STATE(957)] = 10990,
  [SMALL_STATE(958)] = 10997,
  [SMALL_STATE(959)] = 11004,
  [SMALL_STATE(960)] = 11011,
  [SMALL_STATE(961)] = 11018,
  [SMALL_STATE(962)] = 11025,
  [SMALL_STATE(963)] = 11032,
  [SMALL_STATE(964)] = 11039,
  [SMALL_STATE(965)] = 11046,
  [SMALL_STATE(966)] = 11053,
  [SMALL_STATE(967)] = 11060,
  [SMALL_STATE(968)] = 11067,
  [SMALL_STATE(969)] = 11074,
  [SMALL_STATE(970)] = 11081,
  [SMALL_STATE(971)] = 11088,
  [SMALL_STATE(972)] = 11095,
  [SMALL_STATE(973)] = 11102,
  [SMALL_STATE(974)] = 11109,
  [SMALL_STATE(975)] = 11116,
  [SMALL_STATE(976)] = 11123,
  [SMALL_STATE(977)] = 11128,
  [SMALL_STATE(978)] = 11132,
  [SMALL_STATE(979)] = 11136,
  [SMALL_STATE(980)] = 11140,
  [SMALL_STATE(981)] = 11144,
  [SMALL_STATE(982)] = 11148,
  [SMALL_STATE(983)] = 11152,
  [SMALL_STATE(984)] = 11156,
  [SMALL_STATE(985)] = 11160,
  [SMALL_STATE(986)] = 11164,
  [SMALL_STATE(987)] = 11168,
  [SMALL_STATE(988)] = 11172,
  [SMALL_STATE(989)] = 11176,
  [SMALL_STATE(990)] = 11180,
  [SMALL_STATE(991)] = 11184,
  [SMALL_STATE(992)] = 11188,
  [SMALL_STATE(993)] = 11192,
  [SMALL_STATE(994)] = 11196,
  [SMALL_STATE(995)] = 11200,
  [SMALL_STATE(996)] = 11204,
  [SMALL_STATE(997)] = 11208,
  [SMALL_STATE(998)] = 11212,
  [SMALL_STATE(999)] = 11216,
  [SMALL_STATE(1000)] = 11220,
  [SMALL_STATE(1001)] = 11224,
  [SMALL_STATE(1002)] = 11228,
  [SMALL_STATE(1003)] = 11232,
  [SMALL_STATE(1004)] = 11236,
  [SMALL_STATE(1005)] = 11240,
  [SMALL_STATE(1006)] = 11244,
  [SMALL_STATE(1007)] = 11248,
  [SMALL_STATE(1008)] = 11252,
  [SMALL_STATE(1009)] = 11256,
  [SMALL_STATE(1010)] = 11260,
  [SMALL_STATE(1011)] = 11264,
  [SMALL_STATE(1012)] = 11268,
  [SMALL_STATE(1013)] = 11272,
  [SMALL_STATE(1014)] = 11276,
  [SMALL_STATE(1015)] = 11280,
  [SMALL_STATE(1016)] = 11284,
  [SMALL_STATE(1017)] = 11288,
  [SMALL_STATE(1018)] = 11292,
  [SMALL_STATE(1019)] = 11296,
  [SMALL_STATE(1020)] = 11300,
  [SMALL_STATE(1021)] = 11304,
  [SMALL_STATE(1022)] = 11308,
  [SMALL_STATE(1023)] = 11312,
  [SMALL_STATE(1024)] = 11316,
  [SMALL_STATE(1025)] = 11320,
  [SMALL_STATE(1026)] = 11324,
  [SMALL_STATE(1027)] = 11328,
  [SMALL_STATE(1028)] = 11332,
  [SMALL_STATE(1029)] = 11336,
  [SMALL_STATE(1030)] = 11340,
  [SMALL_STATE(1031)] = 11344,
  [SMALL_STATE(1032)] = 11348,
  [SMALL_STATE(1033)] = 11352,
  [SMALL_STATE(1034)] = 11356,
  [SMALL_STATE(1035)] = 11360,
  [SMALL_STATE(1036)] = 11364,
  [SMALL_STATE(1037)] = 11368,
  [SMALL_STATE(1038)] = 11372,
  [SMALL_STATE(1039)] = 11376,
  [SMALL_STATE(1040)] = 11380,
  [SMALL_STATE(1041)] = 11384,
  [SMALL_STATE(1042)] = 11388,
  [SMALL_STATE(1043)] = 11392,
  [SMALL_STATE(1044)] = 11396,
  [SMALL_STATE(1045)] = 11400,
  [SMALL_STATE(1046)] = 11404,
  [SMALL_STATE(1047)] = 11408,
  [SMALL_STATE(1048)] = 11412,
  [SMALL_STATE(1049)] = 11416,
  [SMALL_STATE(1050)] = 11420,
  [SMALL_STATE(1051)] = 11424,
  [SMALL_STATE(1052)] = 11428,
  [SMALL_STATE(1053)] = 11432,
  [SMALL_STATE(1054)] = 11436,
  [SMALL_STATE(1055)] = 11440,
  [SMALL_STATE(1056)] = 11444,
  [SMALL_STATE(1057)] = 11448,
  [SMALL_STATE(1058)] = 11452,
  [SMALL_STATE(1059)] = 11456,
  [SMALL_STATE(1060)] = 11460,
  [SMALL_STATE(1061)] = 11464,
  [SMALL_STATE(1062)] = 11468,
  [SMALL_STATE(1063)] = 11472,
  [SMALL_STATE(1064)] = 11476,
  [SMALL_STATE(1065)] = 11480,
  [SMALL_STATE(1066)] = 11484,
  [SMALL_STATE(1067)] = 11488,
  [SMALL_STATE(1068)] = 11492,
  [SMALL_STATE(1069)] = 11496,
  [SMALL_STATE(1070)] = 11500,
  [SMALL_STATE(1071)] = 11504,
  [SMALL_STATE(1072)] = 11508,
  [SMALL_STATE(1073)] = 11512,
  [SMALL_STATE(1074)] = 11516,
  [SMALL_STATE(1075)] = 11520,
  [SMALL_STATE(1076)] = 11524,
  [SMALL_STATE(1077)] = 11528,
  [SMALL_STATE(1078)] = 11532,
  [SMALL_STATE(1079)] = 11536,
  [SMALL_STATE(1080)] = 11540,
  [SMALL_STATE(1081)] = 11544,
  [SMALL_STATE(1082)] = 11548,
  [SMALL_STATE(1083)] = 11552,
  [SMALL_STATE(1084)] = 11556,
  [SMALL_STATE(1085)] = 11560,
  [SMALL_STATE(1086)] = 11564,
  [SMALL_STATE(1087)] = 11568,
  [SMALL_STATE(1088)] = 11572,
  [SMALL_STATE(1089)] = 11576,
  [SMALL_STATE(1090)] = 11580,
  [SMALL_STATE(1091)] = 11584,
  [SMALL_STATE(1092)] = 11588,
  [SMALL_STATE(1093)] = 11592,
  [SMALL_STATE(1094)] = 11596,
  [SMALL_STATE(1095)] = 11600,
  [SMALL_STATE(1096)] = 11604,
  [SMALL_STATE(1097)] = 11608,
  [SMALL_STATE(1098)] = 11612,
  [SMALL_STATE(1099)] = 11616,
  [SMALL_STATE(1100)] = 11620,
  [SMALL_STATE(1101)] = 11624,
  [SMALL_STATE(1102)] = 11628,
  [SMALL_STATE(1103)] = 11632,
  [SMALL_STATE(1104)] = 11636,
  [SMALL_STATE(1105)] = 11640,
  [SMALL_STATE(1106)] = 11644,
  [SMALL_STATE(1107)] = 11648,
  [SMALL_STATE(1108)] = 11652,
  [SMALL_STATE(1109)] = 11656,
  [SMALL_STATE(1110)] = 11660,
  [SMALL_STATE(1111)] = 11664,
  [SMALL_STATE(1112)] = 11668,
  [SMALL_STATE(1113)] = 11672,
  [SMALL_STATE(1114)] = 11676,
  [SMALL_STATE(1115)] = 11680,
  [SMALL_STATE(1116)] = 11684,
  [SMALL_STATE(1117)] = 11688,
  [SMALL_STATE(1118)] = 11692,
  [SMALL_STATE(1119)] = 11696,
  [SMALL_STATE(1120)] = 11700,
  [SMALL_STATE(1121)] = 11704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(700),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1075),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1067),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1068),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1119),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(982),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1003),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 32), SHIFT_REPEAT(58),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 32), SHIFT_REPEAT(132),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 32),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 32), SHIFT_REPEAT(923),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(904),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1059),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(923),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 76),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 83),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(71),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(138),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(106),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(134),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 89), SHIFT_REPEAT(3),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(121),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(134),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(909),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(944),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1087),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(880),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1037),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(895),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(639),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 46),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 39),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 40),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 41),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 39),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 39),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 48),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 49),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_run_statement, 3, 0, 50),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 51),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 36),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 36),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 52),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 30),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 53),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 48),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 38),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 54),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 41),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 55),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 49),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 41),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 57),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 58),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 58),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 41),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 59),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_run_statement, 4, 0, 65),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 66),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 67),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 68),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 70),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 38),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 57),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 72),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 57),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 49),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 41),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 57),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 44),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 74),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_run_statement, 5, 0, 75),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 74),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 70),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 72),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 57),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 63),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 77),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 78),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 80),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 80),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 64),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 84),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 85),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 80),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 80),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 87),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 90),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 91),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 92),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 87),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 94),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 95),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 90),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 96),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 97),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 94),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 99),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 97),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 101),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 102),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [1055] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(320),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 38),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(330),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 71),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 64),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(373),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 76),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1021),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 46),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(833),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 28),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_operation, 1, 0, 29),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 35),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 36),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 36),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 37),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 47),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 62),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 73),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(866),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1109),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 44),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 79),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 81),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 86),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 93),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1013),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(734),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 30),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 88),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 48),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 88),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(976),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(942),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 33),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 33),
  [1485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [1487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 44),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 47),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(655),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 82),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 69),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(743),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 49),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 49),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 60),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 42),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_reference, 1, 0, 0),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [1813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 56),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [1885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 61),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1917] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [2075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [2103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [2115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
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
  ts_external_token__until_binding_start = 26,
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
  [ts_external_token__until_binding_start] = sym__until_binding_start,
  [ts_external_token__variable_name] = sym__variable_name,
  [ts_external_token__async_await_binding_start] = sym__async_await_binding_start,
};

static const bool ts_external_scanner_states[35][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__until_binding_start] = true,
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
    [ts_external_token__until_binding_start] = true,
    [ts_external_token__variable_name] = true,
  },
  [5] = {
    [ts_external_token_newline] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__collection_binding_start] = true,
    [ts_external_token__spawn_binding_start] = true,
    [ts_external_token__until_binding_start] = true,
    [ts_external_token__async_await_binding_start] = true,
  },
  [6] = {
    [ts_external_token__agic_raw_text] = true,
  },
  [7] = {
    [ts_external_token_newline] = true,
  },
  [8] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__cap_text_start] = true,
  },
  [9] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [10] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [12] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [13] = {
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [14] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [15] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [16] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__line_start] = true,
  },
  [17] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [19] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [21] = {
    [ts_external_token__variable_name] = true,
  },
  [22] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [25] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [27] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [28] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
  },
  [29] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [30] = {
    [ts_external_token__line_start] = true,
  },
  [31] = {
    [ts_external_token__comment_end] = true,
  },
  [32] = {
    [ts_external_token__reduce_text_start] = true,
  },
  [33] = {
    [ts_external_token__from_start] = true,
  },
  [34] = {
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
