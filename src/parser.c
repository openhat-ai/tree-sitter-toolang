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
#define STATE_COUNT 1214
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 294
#define ALIAS_COUNT 0
#define TOKEN_COUNT 138
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 106

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
  aux_sym__invalid_named_binding_token1 = 12,
  sym_integer_literal = 13,
  sym__one_integer_literal = 14,
  sym__other_integer_literal = 15,
  anon_sym_lanes = 16,
  anon_sym_models = 17,
  anon_sym_tools = 18,
  anon_sym_skills = 19,
  anon_sym_services = 20,
  anon_sym_psyches = 21,
  anon_sym_prompts = 22,
  anon_sym_hands = 23,
  anon_sym_handoffs = 24,
  anon_sym_EQ = 25,
  anon_sym_PLUS_EQ = 26,
  anon_sym_DASH_EQ = 27,
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
  sym__reserved_binding_start = 135,
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
  sym__bound_operation = 196,
  sym__invalid_collection_operation = 197,
  sym__invalid_spawn_operation = 198,
  sym__invalid_async_await_operation = 199,
  sym_let_statement = 200,
  sym_exec_statement = 201,
  sym_spawn_statement = 202,
  sym__invalid_exec_binding = 203,
  sym__invalid_reserved_binding = 204,
  sym__invalid_named_binding = 205,
  sym_run_statement = 206,
  sym__async_modifier = 207,
  sym__run = 208,
  sym__run_after_modifier = 209,
  sym__invalid_modified_run_tail = 210,
  sym_await_statement = 211,
  sym_implicit_run_statement = 212,
  sym__implicit_run_line = 213,
  sym_seek_statement = 214,
  sym_ask_statement = 215,
  sym_generate_statement = 216,
  sym_reduce_statement = 217,
  sym__reduce_inline_line = 218,
  sym__reduce_line = 219,
  sym__reduce_inline_block = 220,
  sym__reduce_text_body = 221,
  sym__from_complement = 222,
  sym_map_statement = 223,
  sym_keep_statement = 224,
  sym_drop_statement = 225,
  sym_sort_statement = 226,
  sym__named_using_complement = 227,
  sym__required_space = 228,
  sym__named_if_complement = 229,
  sym__inline_if_complement = 230,
  sym__named_by_complement = 231,
  sym__inline_by_complement = 232,
  sym__runnable_complements = 233,
  sym__if_complements = 234,
  sym__by_complements = 235,
  sym__lanes_complement = 236,
  sym__order_complement = 237,
  sym_repeat_statement = 238,
  sym_repeat_body = 239,
  sym__repeat_statements = 240,
  sym__window_complement = 241,
  sym__repeat_count_complement = 242,
  sym_until_clause = 243,
  sym_invalid_flow_reserved_statement = 244,
  sym_inline_agic = 245,
  sym_inline_agic_body = 246,
  sym_position = 247,
  sym_runnable = 248,
  sym_agent = 249,
  sym_local_name = 250,
  sym_directive = 251,
  sym__query_directive_key = 252,
  sym__route_directive_key = 253,
  sym_directive_key = 254,
  sym_directive_op = 255,
  sym_directive_value = 256,
  sym_route_value = 257,
  sym_recall_value = 258,
  sym_recall_source = 259,
  sym__directives = 260,
  sym_text_ref = 261,
  sym_messages = 262,
  sym_message = 263,
  sym_unroled_message = 264,
  sym__unroled_message_line = 265,
  sym_invalid_agic_reserved_message = 266,
  sym_role = 267,
  sym__pass_statement = 268,
  sym_flow_lanes_keyword = 269,
  sym__flow_reserved_word = 270,
  sym__collection_binding_word = 271,
  sym__async_await_binding_word = 272,
  sym__reserved_binding_word = 273,
  sym__agic_reserved_word = 274,
  sym_assign_operator = 275,
  sym_type_name = 276,
  aux_sym_source_file_repeat1 = 277,
  aux_sym_type_repeat1 = 278,
  aux_sym_struct_body_repeat1 = 279,
  aux_sym_struct_body_repeat2 = 280,
  aux_sym__cap_definition_repeat1 = 281,
  aux_sym__cap_text_body_repeat1 = 282,
  aux_sym_job_body_repeat1 = 283,
  aux_sym_text_body_repeat1 = 284,
  aux_sym_params_repeat1 = 285,
  aux_sym_statements_repeat1 = 286,
  aux_sym_implicit_run_statement_repeat1 = 287,
  aux_sym__repeat_statements_repeat1 = 288,
  aux_sym_route_value_repeat1 = 289,
  aux_sym_recall_value_repeat1 = 290,
  aux_sym__directives_repeat1 = 291,
  aux_sym_messages_repeat1 = 292,
  aux_sym_unroled_message_repeat1 = 293,
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
  [aux_sym__invalid_named_binding_token1] = "_invalid_named_binding_token1",
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
  [sym__reserved_binding_start] = "_reserved_binding_start",
  [sym__variable_name] = "_variable_name",
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
  [sym_runnable] = "runnable",
  [sym_agent] = "agent",
  [sym_local_name] = "local_name",
  [sym_directive] = "directive",
  [sym__query_directive_key] = "_query_directive_key",
  [sym__route_directive_key] = "_route_directive_key",
  [sym_directive_key] = "directive_key",
  [sym_directive_op] = "directive_op",
  [sym_directive_value] = "directive_value",
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
  [sym__reserved_binding_word] = "_reserved_binding_word",
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
  [aux_sym__invalid_named_binding_token1] = aux_sym__invalid_named_binding_token1,
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
  [sym__reserved_binding_start] = sym__reserved_binding_start,
  [sym__variable_name] = sym__variable_name,
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
  [sym_runnable] = sym_runnable,
  [sym_agent] = sym_agent,
  [sym_local_name] = sym_local_name,
  [sym_directive] = sym_directive,
  [sym__query_directive_key] = sym__query_directive_key,
  [sym__route_directive_key] = sym__route_directive_key,
  [sym_directive_key] = sym_directive_key,
  [sym_directive_op] = sym_directive_op,
  [sym_directive_value] = sym_directive_value,
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
  [sym__reserved_binding_word] = sym__reserved_binding_word,
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
  [sym__reserved_binding_word] = {
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
    [0] = sym_snake_name,
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 14,
  [18] = 15,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 24,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 27,
  [43] = 43,
  [44] = 32,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 49,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 50,
  [63] = 51,
  [64] = 53,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 70,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 74,
  [81] = 67,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 71,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 84,
  [94] = 85,
  [95] = 86,
  [96] = 96,
  [97] = 97,
  [98] = 72,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 89,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 91,
  [113] = 113,
  [114] = 114,
  [115] = 92,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 97,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 99,
  [124] = 124,
  [125] = 125,
  [126] = 69,
  [127] = 79,
  [128] = 128,
  [129] = 96,
  [130] = 130,
  [131] = 68,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 76,
  [137] = 77,
  [138] = 138,
  [139] = 82,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 138,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 87,
  [149] = 104,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 138,
  [155] = 138,
  [156] = 138,
  [157] = 138,
  [158] = 138,
  [159] = 138,
  [160] = 138,
  [161] = 138,
  [162] = 118,
  [163] = 121,
  [164] = 122,
  [165] = 125,
  [166] = 166,
  [167] = 100,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 132,
  [179] = 179,
  [180] = 180,
  [181] = 128,
  [182] = 182,
  [183] = 183,
  [184] = 143,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 141,
  [191] = 170,
  [192] = 176,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 175,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 142,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 171,
  [210] = 173,
  [211] = 177,
  [212] = 212,
  [213] = 185,
  [214] = 188,
  [215] = 208,
  [216] = 212,
  [217] = 217,
  [218] = 195,
  [219] = 219,
  [220] = 196,
  [221] = 202,
  [222] = 222,
  [223] = 169,
  [224] = 224,
  [225] = 168,
  [226] = 193,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 206,
  [232] = 232,
  [233] = 201,
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
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 230,
  [348] = 348,
  [349] = 128,
  [350] = 334,
  [351] = 335,
  [352] = 336,
  [353] = 338,
  [354] = 339,
  [355] = 340,
  [356] = 182,
  [357] = 357,
  [358] = 183,
  [359] = 359,
  [360] = 360,
  [361] = 128,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 334,
  [366] = 335,
  [367] = 336,
  [368] = 338,
  [369] = 369,
  [370] = 340,
  [371] = 128,
  [372] = 12,
  [373] = 373,
  [374] = 182,
  [375] = 183,
  [376] = 182,
  [377] = 183,
  [378] = 334,
  [379] = 335,
  [380] = 336,
  [381] = 338,
  [382] = 339,
  [383] = 340,
  [384] = 182,
  [385] = 183,
  [386] = 182,
  [387] = 183,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 348,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 234,
  [398] = 398,
  [399] = 399,
  [400] = 228,
  [401] = 128,
  [402] = 402,
  [403] = 258,
  [404] = 318,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 388,
  [414] = 414,
  [415] = 402,
  [416] = 411,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 279,
  [422] = 294,
  [423] = 304,
  [424] = 313,
  [425] = 392,
  [426] = 141,
  [427] = 142,
  [428] = 143,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 419,
  [433] = 430,
  [434] = 434,
  [435] = 435,
  [436] = 257,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 373,
  [443] = 393,
  [444] = 444,
  [445] = 445,
  [446] = 407,
  [447] = 408,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 420,
  [452] = 452,
  [453] = 453,
  [454] = 348,
  [455] = 392,
  [456] = 456,
  [457] = 348,
  [458] = 392,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 394,
  [466] = 398,
  [467] = 467,
  [468] = 468,
  [469] = 448,
  [470] = 470,
  [471] = 342,
  [472] = 472,
  [473] = 417,
  [474] = 410,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 431,
  [480] = 472,
  [481] = 308,
  [482] = 482,
  [483] = 339,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 261,
  [494] = 262,
  [495] = 263,
  [496] = 264,
  [497] = 265,
  [498] = 266,
  [499] = 267,
  [500] = 500,
  [501] = 268,
  [502] = 269,
  [503] = 270,
  [504] = 271,
  [505] = 272,
  [506] = 273,
  [507] = 274,
  [508] = 275,
  [509] = 276,
  [510] = 277,
  [511] = 511,
  [512] = 278,
  [513] = 513,
  [514] = 280,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 281,
  [520] = 282,
  [521] = 283,
  [522] = 522,
  [523] = 284,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 285,
  [528] = 528,
  [529] = 529,
  [530] = 286,
  [531] = 531,
  [532] = 287,
  [533] = 288,
  [534] = 290,
  [535] = 291,
  [536] = 536,
  [537] = 292,
  [538] = 293,
  [539] = 295,
  [540] = 540,
  [541] = 296,
  [542] = 297,
  [543] = 298,
  [544] = 299,
  [545] = 300,
  [546] = 546,
  [547] = 547,
  [548] = 302,
  [549] = 549,
  [550] = 303,
  [551] = 551,
  [552] = 305,
  [553] = 306,
  [554] = 307,
  [555] = 237,
  [556] = 309,
  [557] = 310,
  [558] = 311,
  [559] = 559,
  [560] = 560,
  [561] = 312,
  [562] = 562,
  [563] = 338,
  [564] = 314,
  [565] = 315,
  [566] = 316,
  [567] = 567,
  [568] = 317,
  [569] = 569,
  [570] = 319,
  [571] = 571,
  [572] = 320,
  [573] = 321,
  [574] = 322,
  [575] = 323,
  [576] = 324,
  [577] = 325,
  [578] = 326,
  [579] = 327,
  [580] = 328,
  [581] = 329,
  [582] = 330,
  [583] = 331,
  [584] = 332,
  [585] = 333,
  [586] = 357,
  [587] = 339,
  [588] = 359,
  [589] = 360,
  [590] = 340,
  [591] = 362,
  [592] = 362,
  [593] = 593,
  [594] = 363,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 357,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 341,
  [620] = 343,
  [621] = 434,
  [622] = 435,
  [623] = 405,
  [624] = 409,
  [625] = 438,
  [626] = 439,
  [627] = 440,
  [628] = 344,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 637,
  [638] = 638,
  [639] = 363,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 12,
  [644] = 260,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 334,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 657,
  [658] = 452,
  [659] = 659,
  [660] = 453,
  [661] = 456,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 665,
  [666] = 182,
  [667] = 359,
  [668] = 668,
  [669] = 183,
  [670] = 459,
  [671] = 360,
  [672] = 672,
  [673] = 673,
  [674] = 345,
  [675] = 460,
  [676] = 346,
  [677] = 677,
  [678] = 461,
  [679] = 335,
  [680] = 462,
  [681] = 681,
  [682] = 463,
  [683] = 464,
  [684] = 467,
  [685] = 336,
  [686] = 334,
  [687] = 335,
  [688] = 336,
  [689] = 338,
  [690] = 339,
  [691] = 340,
  [692] = 182,
  [693] = 183,
  [694] = 334,
  [695] = 335,
  [696] = 336,
  [697] = 338,
  [698] = 339,
  [699] = 340,
  [700] = 470,
  [701] = 701,
  [702] = 182,
  [703] = 183,
  [704] = 475,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 610,
  [709] = 709,
  [710] = 710,
  [711] = 711,
  [712] = 629,
  [713] = 713,
  [714] = 337,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 677,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 724,
  [725] = 476,
  [726] = 477,
  [727] = 478,
  [728] = 482,
  [729] = 369,
  [730] = 722,
  [731] = 731,
  [732] = 723,
  [733] = 238,
  [734] = 734,
  [735] = 239,
  [736] = 240,
  [737] = 241,
  [738] = 515,
  [739] = 522,
  [740] = 524,
  [741] = 525,
  [742] = 526,
  [743] = 242,
  [744] = 243,
  [745] = 547,
  [746] = 746,
  [747] = 244,
  [748] = 245,
  [749] = 246,
  [750] = 247,
  [751] = 610,
  [752] = 248,
  [753] = 610,
  [754] = 249,
  [755] = 250,
  [756] = 251,
  [757] = 252,
  [758] = 668,
  [759] = 500,
  [760] = 253,
  [761] = 616,
  [762] = 617,
  [763] = 645,
  [764] = 646,
  [765] = 668,
  [766] = 500,
  [767] = 668,
  [768] = 500,
  [769] = 600,
  [770] = 254,
  [771] = 255,
  [772] = 256,
  [773] = 731,
  [774] = 395,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 786,
  [787] = 650,
  [788] = 788,
  [789] = 789,
  [790] = 790,
  [791] = 791,
  [792] = 792,
  [793] = 793,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 797,
  [798] = 798,
  [799] = 656,
  [800] = 657,
  [801] = 801,
  [802] = 357,
  [803] = 803,
  [804] = 359,
  [805] = 360,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 362,
  [810] = 363,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 334,
  [816] = 335,
  [817] = 336,
  [818] = 818,
  [819] = 819,
  [820] = 337,
  [821] = 821,
  [822] = 182,
  [823] = 183,
  [824] = 338,
  [825] = 339,
  [826] = 340,
  [827] = 182,
  [828] = 828,
  [829] = 341,
  [830] = 830,
  [831] = 343,
  [832] = 344,
  [833] = 183,
  [834] = 834,
  [835] = 345,
  [836] = 182,
  [837] = 183,
  [838] = 334,
  [839] = 335,
  [840] = 336,
  [841] = 338,
  [842] = 339,
  [843] = 340,
  [844] = 334,
  [845] = 335,
  [846] = 336,
  [847] = 338,
  [848] = 339,
  [849] = 340,
  [850] = 850,
  [851] = 851,
  [852] = 346,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 595,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 794,
  [868] = 795,
  [869] = 796,
  [870] = 797,
  [871] = 860,
  [872] = 872,
  [873] = 873,
  [874] = 874,
  [875] = 875,
  [876] = 12,
  [877] = 813,
  [878] = 818,
  [879] = 819,
  [880] = 821,
  [881] = 655,
  [882] = 882,
  [883] = 883,
  [884] = 873,
  [885] = 874,
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
  [901] = 789,
  [902] = 793,
  [903] = 888,
  [904] = 830,
  [905] = 905,
  [906] = 906,
  [907] = 775,
  [908] = 828,
  [909] = 890,
  [910] = 910,
  [911] = 910,
  [912] = 912,
  [913] = 913,
  [914] = 891,
  [915] = 915,
  [916] = 812,
  [917] = 917,
  [918] = 834,
  [919] = 861,
  [920] = 865,
  [921] = 882,
  [922] = 889,
  [923] = 898,
  [924] = 900,
  [925] = 906,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 883,
  [930] = 788,
  [931] = 931,
  [932] = 792,
  [933] = 892,
  [934] = 934,
  [935] = 861,
  [936] = 936,
  [937] = 861,
  [938] = 938,
  [939] = 893,
  [940] = 894,
  [941] = 941,
  [942] = 895,
  [943] = 912,
  [944] = 926,
  [945] = 945,
  [946] = 798,
  [947] = 803,
  [948] = 850,
  [949] = 949,
  [950] = 950,
  [951] = 859,
  [952] = 896,
  [953] = 949,
  [954] = 950,
  [955] = 927,
  [956] = 956,
  [957] = 808,
  [958] = 958,
  [959] = 897,
  [960] = 928,
  [961] = 961,
  [962] = 851,
  [963] = 963,
  [964] = 964,
  [965] = 965,
  [966] = 808,
  [967] = 808,
  [968] = 858,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 978,
  [979] = 979,
  [980] = 980,
  [981] = 445,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 989,
  [990] = 969,
  [991] = 991,
  [992] = 992,
  [993] = 993,
  [994] = 994,
  [995] = 995,
  [996] = 996,
  [997] = 997,
  [998] = 998,
  [999] = 999,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 1003,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 182,
  [1007] = 971,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 986,
  [1015] = 183,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 995,
  [1019] = 1010,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 1023,
  [1024] = 995,
  [1025] = 1010,
  [1026] = 441,
  [1027] = 1027,
  [1028] = 995,
  [1029] = 1010,
  [1030] = 1030,
  [1031] = 995,
  [1032] = 1010,
  [1033] = 995,
  [1034] = 1010,
  [1035] = 995,
  [1036] = 1010,
  [1037] = 995,
  [1038] = 1010,
  [1039] = 1039,
  [1040] = 995,
  [1041] = 1010,
  [1042] = 1042,
  [1043] = 1043,
  [1044] = 995,
  [1045] = 1010,
  [1046] = 1046,
  [1047] = 1047,
  [1048] = 977,
  [1049] = 1009,
  [1050] = 976,
  [1051] = 1016,
  [1052] = 1052,
  [1053] = 1053,
  [1054] = 1017,
  [1055] = 1042,
  [1056] = 1042,
  [1057] = 1004,
  [1058] = 1058,
  [1059] = 1042,
  [1060] = 1042,
  [1061] = 1042,
  [1062] = 1042,
  [1063] = 1042,
  [1064] = 1042,
  [1065] = 1065,
  [1066] = 989,
  [1067] = 992,
  [1068] = 994,
  [1069] = 1069,
  [1070] = 1058,
  [1071] = 1047,
  [1072] = 1042,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1082,
  [1083] = 1083,
  [1084] = 1084,
  [1085] = 1085,
  [1086] = 631,
  [1087] = 632,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1080,
  [1092] = 1081,
  [1093] = 1082,
  [1094] = 1083,
  [1095] = 1081,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1080,
  [1103] = 1081,
  [1104] = 1082,
  [1105] = 1083,
  [1106] = 1106,
  [1107] = 1107,
  [1108] = 1108,
  [1109] = 1080,
  [1110] = 1081,
  [1111] = 1082,
  [1112] = 1083,
  [1113] = 872,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1080,
  [1117] = 1081,
  [1118] = 1082,
  [1119] = 1083,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1080,
  [1124] = 1081,
  [1125] = 1082,
  [1126] = 1083,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1080,
  [1131] = 1081,
  [1132] = 1082,
  [1133] = 1083,
  [1134] = 1134,
  [1135] = 1135,
  [1136] = 1136,
  [1137] = 1080,
  [1138] = 1081,
  [1139] = 1082,
  [1140] = 1083,
  [1141] = 1083,
  [1142] = 1083,
  [1143] = 1083,
  [1144] = 1144,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1083,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1151,
  [1152] = 1152,
  [1153] = 1081,
  [1154] = 1154,
  [1155] = 1076,
  [1156] = 1156,
  [1157] = 1134,
  [1158] = 1082,
  [1159] = 1159,
  [1160] = 1160,
  [1161] = 1161,
  [1162] = 1083,
  [1163] = 1160,
  [1164] = 1164,
  [1165] = 1121,
  [1166] = 1114,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1150,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1172,
  [1173] = 1161,
  [1174] = 1100,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1181,
  [1182] = 1082,
  [1183] = 1183,
  [1184] = 1145,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1172,
  [1188] = 1080,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1122,
  [1192] = 1192,
  [1193] = 1159,
  [1194] = 1194,
  [1195] = 1195,
  [1196] = 1078,
  [1197] = 1197,
  [1198] = 1198,
  [1199] = 1106,
  [1200] = 1075,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1185,
  [1204] = 1204,
  [1205] = 1178,
  [1206] = 1206,
  [1207] = 1207,
  [1208] = 1189,
  [1209] = 12,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1084,
  [1213] = 1080,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(299);
      ADVANCE_MAP(
        '#', 300,
        '(', 631,
        ')', 632,
        '*', 555,
        '+', 311,
        ',', 633,
        '-', 312,
        '0', 519,
        '1', 520,
        ':', 630,
        '=', 533,
        '?', 628,
        '@', 464,
        'B', 647,
        'J', 650,
        'N', 653,
        'P', 635,
        'T', 638,
        '[', 313,
        '_', 310,
        'a', 390,
        'b', 452,
        'c', 314,
        'd', 357,
        'e', 315,
        'f', 316,
        'g', 321,
        'h', 324,
        'i', 381,
        'k', 370,
        'l', 320,
        'm', 319,
        'n', 377,
        'p', 317,
        'r', 325,
        's', 341,
        't', 318,
        'u', 432,
        'w', 395,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(518);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 300,
        '(', 631,
        ')', 632,
        '*', 555,
        '+', 23,
        ',', 633,
        '-', 24,
        '0', 522,
        '1', 521,
        ':', 630,
        '=', 533,
        '?', 628,
        '@', 224,
        'B', 647,
        'J', 650,
        'N', 653,
        'P', 635,
        'T', 638,
        '[', 26,
        '_', 310,
        'a', 125,
        'b', 207,
        'c', 27,
        'd', 91,
        'e', 28,
        'f', 29,
        'g', 36,
        'h', 39,
        'i', 114,
        'k', 99,
        'l', 35,
        'm', 34,
        'n', 108,
        'p', 30,
        'r', 40,
        's', 60,
        't', 31,
        'u', 187,
        'w', 133,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(655);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == 'u') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 300,
        '-', 25,
        ':', 630,
        'b', 290,
        'f', 135,
        'i', 113,
        'l', 54,
        'p', 242,
        's', 112,
        'u', 253,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '0') ADVANCE(522);
      if (lookahead == '1') ADVANCE(521);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'w') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '[') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '=') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(518);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 300,
        'a', 749,
        'd', 745,
        'g', 699,
        'k', 703,
        'm', 683,
        'r', 700,
        's', 705,
        '\t', 673,
        ' ', 673,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 300,
        'a', 750,
        'd', 745,
        'k', 703,
        'r', 708,
        's', 706,
        '\t', 674,
        ' ', 674,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(718);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(631);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(534);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(535);
      if (lookahead == '>') ADVANCE(629);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(629);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        'a', 124,
        'c', 128,
        'd', 100,
        'f', 167,
        'i', 205,
        'l', 52,
        'p', 241,
        's', 107,
        't', 45,
        'w', 146,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(655);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(230);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(571);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(579);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(264);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(625);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(657);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'k') ADVANCE(148);
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(247);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(598);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(134);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(624);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(559);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(269);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 152:
      if (lookahead == 'k') ADVANCE(594);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(582);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(572);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(617);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(619);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(627);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(620);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(634);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(597);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(616);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 221:
      if (lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(591);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(258);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(634);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 283:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 286:
      if (lookahead == 'w') ADVANCE(574);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(186);
      END_STATE();
    case 288:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 289:
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 290:
      if (lookahead == 'y') ADVANCE(601);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 294:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 295:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 296:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(296);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 297:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 298:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__doc_space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(535);
      if (lookahead == '>') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'i') ADVANCE(470);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == 'y') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'k') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'p') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == 't') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(323);
      if (lookahead == 's') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(396);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead == 'w') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 's') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 'y') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'v') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'x') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'y') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(519);
      if (lookahead == '1') ADVANCE(520);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(522);
      if (lookahead == '1') ADVANCE(521);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(529);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_async_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_await_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(611);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'f') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'l') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 't') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == 'u') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(751);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(681);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '0') ADVANCE(522);
      if (lookahead == '1') ADVANCE(521);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'w') ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '[') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 300,
        'a', 749,
        'd', 745,
        'g', 699,
        'k', 703,
        'm', 683,
        'r', 700,
        's', 705,
        '\t', 673,
        ' ', 673,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 300,
        'a', 750,
        'd', 745,
        'k', 703,
        'r', 708,
        's', 706,
        '\t', 674,
        ' ', 674,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(752);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(718);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(767);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(763);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead == 'p') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'y') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == 'w') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
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
  [9] = {.lex_state = 1, .external_lex_state = 6},
  [10] = {.lex_state = 1, .external_lex_state = 6},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 12, .external_lex_state = 5},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 7},
  [15] = {.lex_state = 1, .external_lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 7},
  [18] = {.lex_state = 1, .external_lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 7},
  [22] = {.lex_state = 14, .external_lex_state = 7},
  [23] = {.lex_state = 4, .external_lex_state = 7},
  [24] = {.lex_state = 14, .external_lex_state = 7},
  [25] = {.lex_state = 14, .external_lex_state = 7},
  [26] = {.lex_state = 14, .external_lex_state = 7},
  [27] = {.lex_state = 2, .external_lex_state = 7},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2, .external_lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 3, .external_lex_state = 7},
  [50] = {.lex_state = 5, .external_lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0, .external_lex_state = 8},
  [53] = {.lex_state = 5, .external_lex_state = 7},
  [54] = {.lex_state = 3, .external_lex_state = 7},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 7, .external_lex_state = 7},
  [62] = {.lex_state = 5, .external_lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 7, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 9},
  [68] = {.lex_state = 0, .external_lex_state = 10},
  [69] = {.lex_state = 0, .external_lex_state = 11},
  [70] = {.lex_state = 5, .external_lex_state = 7},
  [71] = {.lex_state = 5, .external_lex_state = 7},
  [72] = {.lex_state = 5, .external_lex_state = 7},
  [73] = {.lex_state = 5, .external_lex_state = 7},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 12},
  [77] = {.lex_state = 0, .external_lex_state = 12},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0, .external_lex_state = 10},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 9},
  [82] = {.lex_state = 0, .external_lex_state = 12},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 9},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 0, .external_lex_state = 9},
  [87] = {.lex_state = 0, .external_lex_state = 13},
  [88] = {.lex_state = 5, .external_lex_state = 7},
  [89] = {.lex_state = 0, .external_lex_state = 13},
  [90] = {.lex_state = 0, .external_lex_state = 8},
  [91] = {.lex_state = 0, .external_lex_state = 13},
  [92] = {.lex_state = 0, .external_lex_state = 11},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 9},
  [96] = {.lex_state = 0, .external_lex_state = 10},
  [97] = {.lex_state = 0, .external_lex_state = 11},
  [98] = {.lex_state = 5, .external_lex_state = 7},
  [99] = {.lex_state = 0, .external_lex_state = 11},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 16, .external_lex_state = 7},
  [102] = {.lex_state = 0, .external_lex_state = 14},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 15},
  [105] = {.lex_state = 0, .external_lex_state = 16},
  [106] = {.lex_state = 0, .external_lex_state = 17},
  [107] = {.lex_state = 0, .external_lex_state = 9},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 9},
  [110] = {.lex_state = 0, .external_lex_state = 18},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 17},
  [113] = {.lex_state = 0, .external_lex_state = 14},
  [114] = {.lex_state = 16, .external_lex_state = 7},
  [115] = {.lex_state = 0, .external_lex_state = 19},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 16},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 19},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 19},
  [124] = {.lex_state = 16, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 19},
  [127] = {.lex_state = 0, .external_lex_state = 20},
  [128] = {.lex_state = 0, .external_lex_state = 14},
  [129] = {.lex_state = 0, .external_lex_state = 20},
  [130] = {.lex_state = 0, .external_lex_state = 18},
  [131] = {.lex_state = 0, .external_lex_state = 20},
  [132] = {.lex_state = 0, .external_lex_state = 13},
  [133] = {.lex_state = 0, .external_lex_state = 14},
  [134] = {.lex_state = 0, .external_lex_state = 9},
  [135] = {.lex_state = 0, .external_lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 9},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 21},
  [139] = {.lex_state = 0, .external_lex_state = 9},
  [140] = {.lex_state = 0, .external_lex_state = 16},
  [141] = {.lex_state = 8, .external_lex_state = 7},
  [142] = {.lex_state = 8, .external_lex_state = 7},
  [143] = {.lex_state = 8, .external_lex_state = 7},
  [144] = {.lex_state = 0, .external_lex_state = 21},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 14},
  [147] = {.lex_state = 0, .external_lex_state = 16},
  [148] = {.lex_state = 0, .external_lex_state = 17},
  [149] = {.lex_state = 0, .external_lex_state = 15},
  [150] = {.lex_state = 0, .external_lex_state = 9},
  [151] = {.lex_state = 0, .external_lex_state = 9},
  [152] = {.lex_state = 0, .external_lex_state = 9},
  [153] = {.lex_state = 16, .external_lex_state = 7},
  [154] = {.lex_state = 0, .external_lex_state = 21},
  [155] = {.lex_state = 0, .external_lex_state = 21},
  [156] = {.lex_state = 0, .external_lex_state = 21},
  [157] = {.lex_state = 0, .external_lex_state = 21},
  [158] = {.lex_state = 0, .external_lex_state = 21},
  [159] = {.lex_state = 0, .external_lex_state = 21},
  [160] = {.lex_state = 0, .external_lex_state = 21},
  [161] = {.lex_state = 0, .external_lex_state = 21},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 18},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 13},
  [169] = {.lex_state = 16, .external_lex_state = 7},
  [170] = {.lex_state = 16, .external_lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 22},
  [172] = {.lex_state = 0, .external_lex_state = 22},
  [173] = {.lex_state = 0, .external_lex_state = 22},
  [174] = {.lex_state = 0, .external_lex_state = 22},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 16, .external_lex_state = 7},
  [178] = {.lex_state = 0, .external_lex_state = 17},
  [179] = {.lex_state = 16, .external_lex_state = 7},
  [180] = {.lex_state = 0, .external_lex_state = 22},
  [181] = {.lex_state = 0, .external_lex_state = 9},
  [182] = {.lex_state = 0, .external_lex_state = 11},
  [183] = {.lex_state = 0, .external_lex_state = 11},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 22},
  [186] = {.lex_state = 0, .external_lex_state = 22},
  [187] = {.lex_state = 0, .external_lex_state = 22},
  [188] = {.lex_state = 16, .external_lex_state = 7},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 16, .external_lex_state = 7},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 13, .external_lex_state = 7},
  [194] = {.lex_state = 0, .external_lex_state = 22},
  [195] = {.lex_state = 10, .external_lex_state = 7},
  [196] = {.lex_state = 16, .external_lex_state = 7},
  [197] = {.lex_state = 0, .external_lex_state = 22},
  [198] = {.lex_state = 0, .external_lex_state = 22},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 22},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 22},
  [203] = {.lex_state = 0, .external_lex_state = 22},
  [204] = {.lex_state = 0, .external_lex_state = 22},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 16, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 18},
  [208] = {.lex_state = 16, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 22},
  [210] = {.lex_state = 0, .external_lex_state = 22},
  [211] = {.lex_state = 16, .external_lex_state = 7},
  [212] = {.lex_state = 16, .external_lex_state = 7},
  [213] = {.lex_state = 0, .external_lex_state = 22},
  [214] = {.lex_state = 16, .external_lex_state = 7},
  [215] = {.lex_state = 16, .external_lex_state = 7},
  [216] = {.lex_state = 16, .external_lex_state = 7},
  [217] = {.lex_state = 0, .external_lex_state = 18},
  [218] = {.lex_state = 10, .external_lex_state = 7},
  [219] = {.lex_state = 0, .external_lex_state = 22},
  [220] = {.lex_state = 16, .external_lex_state = 7},
  [221] = {.lex_state = 0, .external_lex_state = 22},
  [222] = {.lex_state = 0, .external_lex_state = 22},
  [223] = {.lex_state = 16, .external_lex_state = 7},
  [224] = {.lex_state = 0, .external_lex_state = 22},
  [225] = {.lex_state = 0, .external_lex_state = 17},
  [226] = {.lex_state = 13, .external_lex_state = 7},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 0, .external_lex_state = 13},
  [229] = {.lex_state = 0, .external_lex_state = 22},
  [230] = {.lex_state = 0, .external_lex_state = 13},
  [231] = {.lex_state = 16, .external_lex_state = 7},
  [232] = {.lex_state = 16, .external_lex_state = 7},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 13},
  [235] = {.lex_state = 0, .external_lex_state = 22},
  [236] = {.lex_state = 0, .external_lex_state = 22},
  [237] = {.lex_state = 0, .external_lex_state = 12},
  [238] = {.lex_state = 0, .external_lex_state = 12},
  [239] = {.lex_state = 0, .external_lex_state = 12},
  [240] = {.lex_state = 0, .external_lex_state = 12},
  [241] = {.lex_state = 0, .external_lex_state = 12},
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
  [257] = {.lex_state = 9, .external_lex_state = 7},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 0, .external_lex_state = 23},
  [260] = {.lex_state = 0, .external_lex_state = 12},
  [261] = {.lex_state = 0, .external_lex_state = 12},
  [262] = {.lex_state = 0, .external_lex_state = 12},
  [263] = {.lex_state = 0, .external_lex_state = 12},
  [264] = {.lex_state = 0, .external_lex_state = 12},
  [265] = {.lex_state = 0, .external_lex_state = 12},
  [266] = {.lex_state = 0, .external_lex_state = 12},
  [267] = {.lex_state = 0, .external_lex_state = 12},
  [268] = {.lex_state = 0, .external_lex_state = 12},
  [269] = {.lex_state = 0, .external_lex_state = 12},
  [270] = {.lex_state = 0, .external_lex_state = 12},
  [271] = {.lex_state = 0, .external_lex_state = 12},
  [272] = {.lex_state = 0, .external_lex_state = 12},
  [273] = {.lex_state = 0, .external_lex_state = 12},
  [274] = {.lex_state = 0, .external_lex_state = 12},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 0, .external_lex_state = 12},
  [277] = {.lex_state = 0, .external_lex_state = 12},
  [278] = {.lex_state = 0, .external_lex_state = 12},
  [279] = {.lex_state = 0, .external_lex_state = 24},
  [280] = {.lex_state = 0, .external_lex_state = 12},
  [281] = {.lex_state = 0, .external_lex_state = 12},
  [282] = {.lex_state = 0, .external_lex_state = 12},
  [283] = {.lex_state = 0, .external_lex_state = 12},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 0, .external_lex_state = 12},
  [286] = {.lex_state = 0, .external_lex_state = 12},
  [287] = {.lex_state = 0, .external_lex_state = 12},
  [288] = {.lex_state = 0, .external_lex_state = 12},
  [289] = {.lex_state = 0, .external_lex_state = 8},
  [290] = {.lex_state = 0, .external_lex_state = 12},
  [291] = {.lex_state = 0, .external_lex_state = 12},
  [292] = {.lex_state = 0, .external_lex_state = 12},
  [293] = {.lex_state = 0, .external_lex_state = 12},
  [294] = {.lex_state = 0, .external_lex_state = 24},
  [295] = {.lex_state = 0, .external_lex_state = 12},
  [296] = {.lex_state = 0, .external_lex_state = 12},
  [297] = {.lex_state = 0, .external_lex_state = 12},
  [298] = {.lex_state = 0, .external_lex_state = 12},
  [299] = {.lex_state = 0, .external_lex_state = 12},
  [300] = {.lex_state = 0, .external_lex_state = 12},
  [301] = {.lex_state = 0, .external_lex_state = 23},
  [302] = {.lex_state = 0, .external_lex_state = 12},
  [303] = {.lex_state = 0, .external_lex_state = 12},
  [304] = {.lex_state = 19},
  [305] = {.lex_state = 0, .external_lex_state = 12},
  [306] = {.lex_state = 0, .external_lex_state = 12},
  [307] = {.lex_state = 0, .external_lex_state = 12},
  [308] = {.lex_state = 0, .external_lex_state = 22},
  [309] = {.lex_state = 0, .external_lex_state = 12},
  [310] = {.lex_state = 0, .external_lex_state = 12},
  [311] = {.lex_state = 0, .external_lex_state = 12},
  [312] = {.lex_state = 0, .external_lex_state = 12},
  [313] = {.lex_state = 6, .external_lex_state = 7},
  [314] = {.lex_state = 0, .external_lex_state = 12},
  [315] = {.lex_state = 0, .external_lex_state = 12},
  [316] = {.lex_state = 0, .external_lex_state = 12},
  [317] = {.lex_state = 0, .external_lex_state = 12},
  [318] = {.lex_state = 19},
  [319] = {.lex_state = 0, .external_lex_state = 12},
  [320] = {.lex_state = 0, .external_lex_state = 12},
  [321] = {.lex_state = 0, .external_lex_state = 12},
  [322] = {.lex_state = 0, .external_lex_state = 12},
  [323] = {.lex_state = 0, .external_lex_state = 12},
  [324] = {.lex_state = 0, .external_lex_state = 12},
  [325] = {.lex_state = 0, .external_lex_state = 12},
  [326] = {.lex_state = 0, .external_lex_state = 12},
  [327] = {.lex_state = 0, .external_lex_state = 12},
  [328] = {.lex_state = 0, .external_lex_state = 12},
  [329] = {.lex_state = 0, .external_lex_state = 12},
  [330] = {.lex_state = 0, .external_lex_state = 12},
  [331] = {.lex_state = 0, .external_lex_state = 12},
  [332] = {.lex_state = 0, .external_lex_state = 12},
  [333] = {.lex_state = 0, .external_lex_state = 12},
  [334] = {.lex_state = 0, .external_lex_state = 14},
  [335] = {.lex_state = 0, .external_lex_state = 14},
  [336] = {.lex_state = 0, .external_lex_state = 14},
  [337] = {.lex_state = 8, .external_lex_state = 7},
  [338] = {.lex_state = 0, .external_lex_state = 14},
  [339] = {.lex_state = 0, .external_lex_state = 14},
  [340] = {.lex_state = 0, .external_lex_state = 14},
  [341] = {.lex_state = 8, .external_lex_state = 7},
  [342] = {.lex_state = 0, .external_lex_state = 25},
  [343] = {.lex_state = 8, .external_lex_state = 7},
  [344] = {.lex_state = 8, .external_lex_state = 7},
  [345] = {.lex_state = 8, .external_lex_state = 7},
  [346] = {.lex_state = 8, .external_lex_state = 7},
  [347] = {.lex_state = 0, .external_lex_state = 17},
  [348] = {.lex_state = 0, .external_lex_state = 26},
  [349] = {.lex_state = 0, .external_lex_state = 24},
  [350] = {.lex_state = 0, .external_lex_state = 8},
  [351] = {.lex_state = 0, .external_lex_state = 8},
  [352] = {.lex_state = 0, .external_lex_state = 8},
  [353] = {.lex_state = 0, .external_lex_state = 8},
  [354] = {.lex_state = 0, .external_lex_state = 8},
  [355] = {.lex_state = 0, .external_lex_state = 8},
  [356] = {.lex_state = 0, .external_lex_state = 14},
  [357] = {.lex_state = 0, .external_lex_state = 12},
  [358] = {.lex_state = 0, .external_lex_state = 14},
  [359] = {.lex_state = 0, .external_lex_state = 12},
  [360] = {.lex_state = 0, .external_lex_state = 12},
  [361] = {.lex_state = 0, .external_lex_state = 23},
  [362] = {.lex_state = 0, .external_lex_state = 12},
  [363] = {.lex_state = 0, .external_lex_state = 12},
  [364] = {.lex_state = 0, .external_lex_state = 22},
  [365] = {.lex_state = 0, .external_lex_state = 10},
  [366] = {.lex_state = 0, .external_lex_state = 10},
  [367] = {.lex_state = 0, .external_lex_state = 10},
  [368] = {.lex_state = 0, .external_lex_state = 10},
  [369] = {.lex_state = 0, .external_lex_state = 12},
  [370] = {.lex_state = 0, .external_lex_state = 10},
  [371] = {.lex_state = 0, .external_lex_state = 2},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 9, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 10},
  [375] = {.lex_state = 0, .external_lex_state = 10},
  [376] = {.lex_state = 0, .external_lex_state = 19},
  [377] = {.lex_state = 0, .external_lex_state = 19},
  [378] = {.lex_state = 0, .external_lex_state = 12},
  [379] = {.lex_state = 0, .external_lex_state = 12},
  [380] = {.lex_state = 0, .external_lex_state = 12},
  [381] = {.lex_state = 0, .external_lex_state = 12},
  [382] = {.lex_state = 0, .external_lex_state = 12},
  [383] = {.lex_state = 0, .external_lex_state = 12},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 0, .external_lex_state = 12},
  [387] = {.lex_state = 0, .external_lex_state = 12},
  [388] = {.lex_state = 16, .external_lex_state = 7},
  [389] = {.lex_state = 0, .external_lex_state = 23},
  [390] = {.lex_state = 0, .external_lex_state = 26},
  [391] = {.lex_state = 0, .external_lex_state = 26},
  [392] = {.lex_state = 0, .external_lex_state = 26},
  [393] = {.lex_state = 0, .external_lex_state = 24},
  [394] = {.lex_state = 16, .external_lex_state = 27},
  [395] = {.lex_state = 0, .external_lex_state = 12},
  [396] = {.lex_state = 1, .external_lex_state = 28},
  [397] = {.lex_state = 0, .external_lex_state = 17},
  [398] = {.lex_state = 17, .external_lex_state = 7},
  [399] = {.lex_state = 0, .external_lex_state = 8},
  [400] = {.lex_state = 0, .external_lex_state = 17},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 19},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 0, .external_lex_state = 10},
  [406] = {.lex_state = 0, .external_lex_state = 22},
  [407] = {.lex_state = 0, .external_lex_state = 24},
  [408] = {.lex_state = 0, .external_lex_state = 24},
  [409] = {.lex_state = 0, .external_lex_state = 10},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 19},
  [412] = {.lex_state = 0, .external_lex_state = 24},
  [413] = {.lex_state = 16, .external_lex_state = 7},
  [414] = {.lex_state = 0, .external_lex_state = 26},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 6, .external_lex_state = 7},
  [418] = {.lex_state = 0, .external_lex_state = 18},
  [419] = {.lex_state = 16, .external_lex_state = 7},
  [420] = {.lex_state = 0, .external_lex_state = 24},
  [421] = {.lex_state = 0, .external_lex_state = 24},
  [422] = {.lex_state = 0, .external_lex_state = 24},
  [423] = {.lex_state = 19},
  [424] = {.lex_state = 6, .external_lex_state = 7},
  [425] = {.lex_state = 0, .external_lex_state = 26},
  [426] = {.lex_state = 1, .external_lex_state = 7},
  [427] = {.lex_state = 1, .external_lex_state = 7},
  [428] = {.lex_state = 1, .external_lex_state = 7},
  [429] = {.lex_state = 0, .external_lex_state = 23},
  [430] = {.lex_state = 0, .external_lex_state = 24},
  [431] = {.lex_state = 0, .external_lex_state = 22},
  [432] = {.lex_state = 16, .external_lex_state = 7},
  [433] = {.lex_state = 0, .external_lex_state = 24},
  [434] = {.lex_state = 0, .external_lex_state = 12},
  [435] = {.lex_state = 0, .external_lex_state = 12},
  [436] = {.lex_state = 9, .external_lex_state = 7},
  [437] = {.lex_state = 0, .external_lex_state = 26},
  [438] = {.lex_state = 0, .external_lex_state = 12},
  [439] = {.lex_state = 0, .external_lex_state = 12},
  [440] = {.lex_state = 0, .external_lex_state = 12},
  [441] = {.lex_state = 1},
  [442] = {.lex_state = 9, .external_lex_state = 7},
  [443] = {.lex_state = 0, .external_lex_state = 24},
  [444] = {.lex_state = 0, .external_lex_state = 22},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 24},
  [447] = {.lex_state = 0, .external_lex_state = 24},
  [448] = {.lex_state = 0, .external_lex_state = 25},
  [449] = {.lex_state = 0, .external_lex_state = 18},
  [450] = {.lex_state = 0, .external_lex_state = 24},
  [451] = {.lex_state = 0, .external_lex_state = 24},
  [452] = {.lex_state = 0, .external_lex_state = 12},
  [453] = {.lex_state = 0, .external_lex_state = 12},
  [454] = {.lex_state = 0, .external_lex_state = 26},
  [455] = {.lex_state = 0, .external_lex_state = 26},
  [456] = {.lex_state = 0, .external_lex_state = 12},
  [457] = {.lex_state = 0, .external_lex_state = 26},
  [458] = {.lex_state = 0, .external_lex_state = 26},
  [459] = {.lex_state = 0, .external_lex_state = 12},
  [460] = {.lex_state = 0, .external_lex_state = 12},
  [461] = {.lex_state = 0, .external_lex_state = 12},
  [462] = {.lex_state = 0, .external_lex_state = 12},
  [463] = {.lex_state = 0, .external_lex_state = 12},
  [464] = {.lex_state = 0, .external_lex_state = 12},
  [465] = {.lex_state = 16, .external_lex_state = 27},
  [466] = {.lex_state = 17, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 12},
  [468] = {.lex_state = 0, .external_lex_state = 18},
  [469] = {.lex_state = 0, .external_lex_state = 25},
  [470] = {.lex_state = 0, .external_lex_state = 12},
  [471] = {.lex_state = 0, .external_lex_state = 25},
  [472] = {.lex_state = 0, .external_lex_state = 22},
  [473] = {.lex_state = 6, .external_lex_state = 7},
  [474] = {.lex_state = 19},
  [475] = {.lex_state = 0, .external_lex_state = 12},
  [476] = {.lex_state = 0, .external_lex_state = 12},
  [477] = {.lex_state = 0, .external_lex_state = 12},
  [478] = {.lex_state = 0, .external_lex_state = 12},
  [479] = {.lex_state = 0, .external_lex_state = 22},
  [480] = {.lex_state = 0, .external_lex_state = 22},
  [481] = {.lex_state = 0, .external_lex_state = 22},
  [482] = {.lex_state = 0, .external_lex_state = 12},
  [483] = {.lex_state = 0, .external_lex_state = 10},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 1, .external_lex_state = 7},
  [491] = {.lex_state = 1, .external_lex_state = 7},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 9},
  [494] = {.lex_state = 0, .external_lex_state = 9},
  [495] = {.lex_state = 0, .external_lex_state = 9},
  [496] = {.lex_state = 0, .external_lex_state = 9},
  [497] = {.lex_state = 0, .external_lex_state = 9},
  [498] = {.lex_state = 0, .external_lex_state = 9},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 29},
  [501] = {.lex_state = 0, .external_lex_state = 9},
  [502] = {.lex_state = 0, .external_lex_state = 9},
  [503] = {.lex_state = 0, .external_lex_state = 9},
  [504] = {.lex_state = 0, .external_lex_state = 9},
  [505] = {.lex_state = 0, .external_lex_state = 9},
  [506] = {.lex_state = 0, .external_lex_state = 9},
  [507] = {.lex_state = 0, .external_lex_state = 9},
  [508] = {.lex_state = 0, .external_lex_state = 9},
  [509] = {.lex_state = 0, .external_lex_state = 9},
  [510] = {.lex_state = 0, .external_lex_state = 9},
  [511] = {.lex_state = 0, .external_lex_state = 30},
  [512] = {.lex_state = 0, .external_lex_state = 9},
  [513] = {.lex_state = 1},
  [514] = {.lex_state = 0, .external_lex_state = 9},
  [515] = {.lex_state = 16, .external_lex_state = 7},
  [516] = {.lex_state = 0, .external_lex_state = 9},
  [517] = {.lex_state = 1, .external_lex_state = 7},
  [518] = {.lex_state = 1, .external_lex_state = 7},
  [519] = {.lex_state = 0, .external_lex_state = 9},
  [520] = {.lex_state = 0, .external_lex_state = 9},
  [521] = {.lex_state = 0, .external_lex_state = 9},
  [522] = {.lex_state = 16, .external_lex_state = 7},
  [523] = {.lex_state = 0, .external_lex_state = 9},
  [524] = {.lex_state = 16, .external_lex_state = 7},
  [525] = {.lex_state = 16, .external_lex_state = 7},
  [526] = {.lex_state = 16, .external_lex_state = 7},
  [527] = {.lex_state = 0, .external_lex_state = 9},
  [528] = {.lex_state = 0, .external_lex_state = 29},
  [529] = {.lex_state = 0, .external_lex_state = 15},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 9},
  [533] = {.lex_state = 0, .external_lex_state = 9},
  [534] = {.lex_state = 0, .external_lex_state = 9},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 9},
  [538] = {.lex_state = 0, .external_lex_state = 9},
  [539] = {.lex_state = 0, .external_lex_state = 9},
  [540] = {.lex_state = 0, .external_lex_state = 9},
  [541] = {.lex_state = 0, .external_lex_state = 9},
  [542] = {.lex_state = 0, .external_lex_state = 9},
  [543] = {.lex_state = 0, .external_lex_state = 9},
  [544] = {.lex_state = 0, .external_lex_state = 9},
  [545] = {.lex_state = 0, .external_lex_state = 9},
  [546] = {.lex_state = 0, .external_lex_state = 15},
  [547] = {.lex_state = 19},
  [548] = {.lex_state = 0, .external_lex_state = 9},
  [549] = {.lex_state = 0, .external_lex_state = 2},
  [550] = {.lex_state = 0, .external_lex_state = 9},
  [551] = {.lex_state = 0, .external_lex_state = 2},
  [552] = {.lex_state = 0, .external_lex_state = 9},
  [553] = {.lex_state = 0, .external_lex_state = 9},
  [554] = {.lex_state = 0, .external_lex_state = 9},
  [555] = {.lex_state = 0, .external_lex_state = 9},
  [556] = {.lex_state = 0, .external_lex_state = 9},
  [557] = {.lex_state = 0, .external_lex_state = 9},
  [558] = {.lex_state = 0, .external_lex_state = 9},
  [559] = {.lex_state = 0, .external_lex_state = 15},
  [560] = {.lex_state = 0, .external_lex_state = 15},
  [561] = {.lex_state = 0, .external_lex_state = 9},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 9},
  [565] = {.lex_state = 0, .external_lex_state = 9},
  [566] = {.lex_state = 0, .external_lex_state = 9},
  [567] = {.lex_state = 0, .external_lex_state = 2},
  [568] = {.lex_state = 0, .external_lex_state = 9},
  [569] = {.lex_state = 0, .external_lex_state = 29},
  [570] = {.lex_state = 0, .external_lex_state = 9},
  [571] = {.lex_state = 0, .external_lex_state = 15},
  [572] = {.lex_state = 0, .external_lex_state = 9},
  [573] = {.lex_state = 0, .external_lex_state = 9},
  [574] = {.lex_state = 0, .external_lex_state = 9},
  [575] = {.lex_state = 0, .external_lex_state = 9},
  [576] = {.lex_state = 0, .external_lex_state = 9},
  [577] = {.lex_state = 0, .external_lex_state = 9},
  [578] = {.lex_state = 0, .external_lex_state = 9},
  [579] = {.lex_state = 0, .external_lex_state = 9},
  [580] = {.lex_state = 0, .external_lex_state = 9},
  [581] = {.lex_state = 0, .external_lex_state = 9},
  [582] = {.lex_state = 0, .external_lex_state = 9},
  [583] = {.lex_state = 0, .external_lex_state = 9},
  [584] = {.lex_state = 0, .external_lex_state = 9},
  [585] = {.lex_state = 0, .external_lex_state = 9},
  [586] = {.lex_state = 0, .external_lex_state = 9},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 9},
  [589] = {.lex_state = 0, .external_lex_state = 9},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 9},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 9},
  [595] = {.lex_state = 9, .external_lex_state = 7},
  [596] = {.lex_state = 16, .external_lex_state = 7},
  [597] = {.lex_state = 0, .external_lex_state = 9},
  [598] = {.lex_state = 9, .external_lex_state = 7},
  [599] = {.lex_state = 16, .external_lex_state = 7},
  [600] = {.lex_state = 1},
  [601] = {.lex_state = 0, .external_lex_state = 7},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 7},
  [604] = {.lex_state = 0, .external_lex_state = 7},
  [605] = {.lex_state = 0, .external_lex_state = 30},
  [606] = {.lex_state = 0, .external_lex_state = 7},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 2},
  [610] = {.lex_state = 0, .external_lex_state = 31},
  [611] = {.lex_state = 15, .external_lex_state = 7},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 0, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 9, .external_lex_state = 7},
  [617] = {.lex_state = 18, .external_lex_state = 7},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 1},
  [620] = {.lex_state = 1},
  [621] = {.lex_state = 0, .external_lex_state = 9},
  [622] = {.lex_state = 0, .external_lex_state = 9},
  [623] = {.lex_state = 0, .external_lex_state = 20},
  [624] = {.lex_state = 0, .external_lex_state = 20},
  [625] = {.lex_state = 0, .external_lex_state = 9},
  [626] = {.lex_state = 0, .external_lex_state = 9},
  [627] = {.lex_state = 0, .external_lex_state = 9},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 16, .external_lex_state = 7},
  [630] = {.lex_state = 0, .external_lex_state = 2},
  [631] = {.lex_state = 1},
  [632] = {.lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 2},
  [634] = {.lex_state = 0, .external_lex_state = 2},
  [635] = {.lex_state = 1},
  [636] = {.lex_state = 0, .external_lex_state = 2},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 0, .external_lex_state = 2},
  [639] = {.lex_state = 0, .external_lex_state = 2},
  [640] = {.lex_state = 0, .external_lex_state = 7},
  [641] = {.lex_state = 0, .external_lex_state = 7},
  [642] = {.lex_state = 0, .external_lex_state = 9},
  [643] = {.lex_state = 76},
  [644] = {.lex_state = 0, .external_lex_state = 9},
  [645] = {.lex_state = 76},
  [646] = {.lex_state = 20},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 2},
  [649] = {.lex_state = 0, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 9},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 2},
  [653] = {.lex_state = 0, .external_lex_state = 2},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 6, .external_lex_state = 7},
  [656] = {.lex_state = 0, .external_lex_state = 9},
  [657] = {.lex_state = 0, .external_lex_state = 9},
  [658] = {.lex_state = 0, .external_lex_state = 9},
  [659] = {.lex_state = 10, .external_lex_state = 7},
  [660] = {.lex_state = 0, .external_lex_state = 9},
  [661] = {.lex_state = 0, .external_lex_state = 9},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 2},
  [666] = {.lex_state = 0, .external_lex_state = 2},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 29},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 9},
  [671] = {.lex_state = 0, .external_lex_state = 2},
  [672] = {.lex_state = 0, .external_lex_state = 2},
  [673] = {.lex_state = 0, .external_lex_state = 2},
  [674] = {.lex_state = 1},
  [675] = {.lex_state = 0, .external_lex_state = 9},
  [676] = {.lex_state = 1},
  [677] = {.lex_state = 1, .external_lex_state = 7},
  [678] = {.lex_state = 0, .external_lex_state = 9},
  [679] = {.lex_state = 0, .external_lex_state = 2},
  [680] = {.lex_state = 0, .external_lex_state = 9},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 9},
  [683] = {.lex_state = 0, .external_lex_state = 9},
  [684] = {.lex_state = 0, .external_lex_state = 9},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 0, .external_lex_state = 9},
  [687] = {.lex_state = 0, .external_lex_state = 9},
  [688] = {.lex_state = 0, .external_lex_state = 9},
  [689] = {.lex_state = 0, .external_lex_state = 9},
  [690] = {.lex_state = 0, .external_lex_state = 9},
  [691] = {.lex_state = 0, .external_lex_state = 9},
  [692] = {.lex_state = 0, .external_lex_state = 9},
  [693] = {.lex_state = 0, .external_lex_state = 9},
  [694] = {.lex_state = 0, .external_lex_state = 20},
  [695] = {.lex_state = 0, .external_lex_state = 20},
  [696] = {.lex_state = 0, .external_lex_state = 20},
  [697] = {.lex_state = 0, .external_lex_state = 20},
  [698] = {.lex_state = 0, .external_lex_state = 20},
  [699] = {.lex_state = 0, .external_lex_state = 20},
  [700] = {.lex_state = 0, .external_lex_state = 9},
  [701] = {.lex_state = 1, .external_lex_state = 28},
  [702] = {.lex_state = 0, .external_lex_state = 20},
  [703] = {.lex_state = 0, .external_lex_state = 20},
  [704] = {.lex_state = 0, .external_lex_state = 9},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 0, .external_lex_state = 2},
  [707] = {.lex_state = 0, .external_lex_state = 2},
  [708] = {.lex_state = 0, .external_lex_state = 31},
  [709] = {.lex_state = 0, .external_lex_state = 2},
  [710] = {.lex_state = 0, .external_lex_state = 2},
  [711] = {.lex_state = 0, .external_lex_state = 2},
  [712] = {.lex_state = 16, .external_lex_state = 7},
  [713] = {.lex_state = 0, .external_lex_state = 2},
  [714] = {.lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 9},
  [716] = {.lex_state = 0, .external_lex_state = 9},
  [717] = {.lex_state = 1, .external_lex_state = 7},
  [718] = {.lex_state = 1, .external_lex_state = 7},
  [719] = {.lex_state = 1, .external_lex_state = 7},
  [720] = {.lex_state = 0, .external_lex_state = 2},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 16, .external_lex_state = 7},
  [723] = {.lex_state = 16, .external_lex_state = 7},
  [724] = {.lex_state = 0, .external_lex_state = 2},
  [725] = {.lex_state = 0, .external_lex_state = 9},
  [726] = {.lex_state = 0, .external_lex_state = 9},
  [727] = {.lex_state = 0, .external_lex_state = 9},
  [728] = {.lex_state = 0, .external_lex_state = 9},
  [729] = {.lex_state = 0, .external_lex_state = 9},
  [730] = {.lex_state = 16, .external_lex_state = 7},
  [731] = {.lex_state = 16, .external_lex_state = 7},
  [732] = {.lex_state = 16, .external_lex_state = 7},
  [733] = {.lex_state = 0, .external_lex_state = 9},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 9},
  [736] = {.lex_state = 0, .external_lex_state = 9},
  [737] = {.lex_state = 0, .external_lex_state = 9},
  [738] = {.lex_state = 16, .external_lex_state = 7},
  [739] = {.lex_state = 16, .external_lex_state = 7},
  [740] = {.lex_state = 16, .external_lex_state = 7},
  [741] = {.lex_state = 16, .external_lex_state = 7},
  [742] = {.lex_state = 16, .external_lex_state = 7},
  [743] = {.lex_state = 0, .external_lex_state = 9},
  [744] = {.lex_state = 0, .external_lex_state = 9},
  [745] = {.lex_state = 19},
  [746] = {.lex_state = 0, .external_lex_state = 2},
  [747] = {.lex_state = 0, .external_lex_state = 9},
  [748] = {.lex_state = 0, .external_lex_state = 9},
  [749] = {.lex_state = 0, .external_lex_state = 9},
  [750] = {.lex_state = 0, .external_lex_state = 9},
  [751] = {.lex_state = 0, .external_lex_state = 31},
  [752] = {.lex_state = 0, .external_lex_state = 9},
  [753] = {.lex_state = 0, .external_lex_state = 31},
  [754] = {.lex_state = 0, .external_lex_state = 9},
  [755] = {.lex_state = 0, .external_lex_state = 9},
  [756] = {.lex_state = 0, .external_lex_state = 9},
  [757] = {.lex_state = 0, .external_lex_state = 9},
  [758] = {.lex_state = 0, .external_lex_state = 29},
  [759] = {.lex_state = 0, .external_lex_state = 29},
  [760] = {.lex_state = 0, .external_lex_state = 9},
  [761] = {.lex_state = 9, .external_lex_state = 7},
  [762] = {.lex_state = 18, .external_lex_state = 7},
  [763] = {.lex_state = 76},
  [764] = {.lex_state = 20},
  [765] = {.lex_state = 0, .external_lex_state = 29},
  [766] = {.lex_state = 0, .external_lex_state = 29},
  [767] = {.lex_state = 0, .external_lex_state = 29},
  [768] = {.lex_state = 0, .external_lex_state = 29},
  [769] = {.lex_state = 1},
  [770] = {.lex_state = 0, .external_lex_state = 9},
  [771] = {.lex_state = 0, .external_lex_state = 9},
  [772] = {.lex_state = 0, .external_lex_state = 9},
  [773] = {.lex_state = 16, .external_lex_state = 7},
  [774] = {.lex_state = 0, .external_lex_state = 9},
  [775] = {.lex_state = 0, .external_lex_state = 7},
  [776] = {.lex_state = 0, .external_lex_state = 32},
  [777] = {.lex_state = 1, .external_lex_state = 7},
  [778] = {.lex_state = 0, .external_lex_state = 7},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 1, .external_lex_state = 7},
  [781] = {.lex_state = 1},
  [782] = {.lex_state = 19},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 31},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 0, .external_lex_state = 7},
  [787] = {.lex_state = 0, .external_lex_state = 2},
  [788] = {.lex_state = 0, .external_lex_state = 7},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 0, .external_lex_state = 7},
  [794] = {.lex_state = 0, .external_lex_state = 7},
  [795] = {.lex_state = 0, .external_lex_state = 7},
  [796] = {.lex_state = 0, .external_lex_state = 7},
  [797] = {.lex_state = 0, .external_lex_state = 7},
  [798] = {.lex_state = 1},
  [799] = {.lex_state = 0, .external_lex_state = 2},
  [800] = {.lex_state = 0, .external_lex_state = 2},
  [801] = {.lex_state = 0, .external_lex_state = 7},
  [802] = {.lex_state = 0, .external_lex_state = 24},
  [803] = {.lex_state = 1},
  [804] = {.lex_state = 0, .external_lex_state = 24},
  [805] = {.lex_state = 0, .external_lex_state = 24},
  [806] = {.lex_state = 6, .external_lex_state = 7},
  [807] = {.lex_state = 19},
  [808] = {.lex_state = 0, .external_lex_state = 31},
  [809] = {.lex_state = 0, .external_lex_state = 24},
  [810] = {.lex_state = 0, .external_lex_state = 24},
  [811] = {.lex_state = 0, .external_lex_state = 7},
  [812] = {.lex_state = 0, .external_lex_state = 33},
  [813] = {.lex_state = 0, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 7},
  [815] = {.lex_state = 0, .external_lex_state = 22},
  [816] = {.lex_state = 0, .external_lex_state = 22},
  [817] = {.lex_state = 0, .external_lex_state = 22},
  [818] = {.lex_state = 1},
  [819] = {.lex_state = 0, .external_lex_state = 7},
  [820] = {.lex_state = 1, .external_lex_state = 7},
  [821] = {.lex_state = 0, .external_lex_state = 7},
  [822] = {.lex_state = 0, .external_lex_state = 24},
  [823] = {.lex_state = 0, .external_lex_state = 24},
  [824] = {.lex_state = 0, .external_lex_state = 22},
  [825] = {.lex_state = 0, .external_lex_state = 22},
  [826] = {.lex_state = 0, .external_lex_state = 22},
  [827] = {.lex_state = 0, .external_lex_state = 22},
  [828] = {.lex_state = 0, .external_lex_state = 7},
  [829] = {.lex_state = 1, .external_lex_state = 7},
  [830] = {.lex_state = 1},
  [831] = {.lex_state = 1, .external_lex_state = 7},
  [832] = {.lex_state = 1, .external_lex_state = 7},
  [833] = {.lex_state = 0, .external_lex_state = 22},
  [834] = {.lex_state = 0, .external_lex_state = 7},
  [835] = {.lex_state = 1, .external_lex_state = 7},
  [836] = {.lex_state = 0, .external_lex_state = 23},
  [837] = {.lex_state = 0, .external_lex_state = 23},
  [838] = {.lex_state = 0, .external_lex_state = 24},
  [839] = {.lex_state = 0, .external_lex_state = 24},
  [840] = {.lex_state = 0, .external_lex_state = 24},
  [841] = {.lex_state = 0, .external_lex_state = 24},
  [842] = {.lex_state = 0, .external_lex_state = 24},
  [843] = {.lex_state = 0, .external_lex_state = 24},
  [844] = {.lex_state = 0, .external_lex_state = 23},
  [845] = {.lex_state = 0, .external_lex_state = 23},
  [846] = {.lex_state = 0, .external_lex_state = 23},
  [847] = {.lex_state = 0, .external_lex_state = 23},
  [848] = {.lex_state = 0, .external_lex_state = 23},
  [849] = {.lex_state = 0, .external_lex_state = 23},
  [850] = {.lex_state = 0, .external_lex_state = 7},
  [851] = {.lex_state = 1},
  [852] = {.lex_state = 1, .external_lex_state = 7},
  [853] = {.lex_state = 1, .external_lex_state = 28},
  [854] = {.lex_state = 1},
  [855] = {.lex_state = 1},
  [856] = {.lex_state = 0, .external_lex_state = 7},
  [857] = {.lex_state = 0, .external_lex_state = 26},
  [858] = {.lex_state = 0, .external_lex_state = 7},
  [859] = {.lex_state = 1},
  [860] = {.lex_state = 1},
  [861] = {.lex_state = 0, .external_lex_state = 7},
  [862] = {.lex_state = 16, .external_lex_state = 7},
  [863] = {.lex_state = 0, .external_lex_state = 7},
  [864] = {.lex_state = 0, .external_lex_state = 7},
  [865] = {.lex_state = 0, .external_lex_state = 7},
  [866] = {.lex_state = 16, .external_lex_state = 7},
  [867] = {.lex_state = 0, .external_lex_state = 7},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 0, .external_lex_state = 7},
  [870] = {.lex_state = 0, .external_lex_state = 7},
  [871] = {.lex_state = 16, .external_lex_state = 7},
  [872] = {.lex_state = 16, .external_lex_state = 7},
  [873] = {.lex_state = 0, .external_lex_state = 7},
  [874] = {.lex_state = 0, .external_lex_state = 7},
  [875] = {.lex_state = 1, .external_lex_state = 7},
  [876] = {.lex_state = 20},
  [877] = {.lex_state = 0, .external_lex_state = 7},
  [878] = {.lex_state = 1},
  [879] = {.lex_state = 0, .external_lex_state = 7},
  [880] = {.lex_state = 0, .external_lex_state = 7},
  [881] = {.lex_state = 16, .external_lex_state = 7},
  [882] = {.lex_state = 0, .external_lex_state = 7},
  [883] = {.lex_state = 0, .external_lex_state = 7},
  [884] = {.lex_state = 0, .external_lex_state = 7},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 0, .external_lex_state = 7},
  [887] = {.lex_state = 46},
  [888] = {.lex_state = 0, .external_lex_state = 7},
  [889] = {.lex_state = 0, .external_lex_state = 7},
  [890] = {.lex_state = 0, .external_lex_state = 7},
  [891] = {.lex_state = 0, .external_lex_state = 7},
  [892] = {.lex_state = 0, .external_lex_state = 7},
  [893] = {.lex_state = 0, .external_lex_state = 7},
  [894] = {.lex_state = 0, .external_lex_state = 7},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 0, .external_lex_state = 7},
  [897] = {.lex_state = 0, .external_lex_state = 7},
  [898] = {.lex_state = 0, .external_lex_state = 7},
  [899] = {.lex_state = 1},
  [900] = {.lex_state = 0, .external_lex_state = 7},
  [901] = {.lex_state = 0, .external_lex_state = 7},
  [902] = {.lex_state = 0, .external_lex_state = 7},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 1},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 0, .external_lex_state = 7},
  [907] = {.lex_state = 0, .external_lex_state = 7},
  [908] = {.lex_state = 0, .external_lex_state = 7},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 7},
  [911] = {.lex_state = 0, .external_lex_state = 7},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 0, .external_lex_state = 7},
  [916] = {.lex_state = 0, .external_lex_state = 33},
  [917] = {.lex_state = 0, .external_lex_state = 7},
  [918] = {.lex_state = 0, .external_lex_state = 7},
  [919] = {.lex_state = 0, .external_lex_state = 7},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 0, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 33},
  [927] = {.lex_state = 0, .external_lex_state = 7},
  [928] = {.lex_state = 0, .external_lex_state = 7},
  [929] = {.lex_state = 0, .external_lex_state = 7},
  [930] = {.lex_state = 0, .external_lex_state = 7},
  [931] = {.lex_state = 0, .external_lex_state = 24},
  [932] = {.lex_state = 0, .external_lex_state = 7},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 6, .external_lex_state = 7},
  [937] = {.lex_state = 0, .external_lex_state = 7},
  [938] = {.lex_state = 0, .external_lex_state = 32},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 7},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 0, .external_lex_state = 33},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 1},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 0, .external_lex_state = 7},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 0, .external_lex_state = 7},
  [951] = {.lex_state = 1},
  [952] = {.lex_state = 0, .external_lex_state = 7},
  [953] = {.lex_state = 0, .external_lex_state = 7},
  [954] = {.lex_state = 0, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 0, .external_lex_state = 31},
  [958] = {.lex_state = 1},
  [959] = {.lex_state = 0, .external_lex_state = 7},
  [960] = {.lex_state = 0, .external_lex_state = 7},
  [961] = {.lex_state = 0, .external_lex_state = 7},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 1, .external_lex_state = 7},
  [964] = {.lex_state = 19},
  [965] = {.lex_state = 0, .external_lex_state = 7},
  [966] = {.lex_state = 0, .external_lex_state = 31},
  [967] = {.lex_state = 0, .external_lex_state = 31},
  [968] = {.lex_state = 0, .external_lex_state = 7},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 294},
  [971] = {.lex_state = 0, .external_lex_state = 28},
  [972] = {.lex_state = 295},
  [973] = {.lex_state = 296},
  [974] = {.lex_state = 296},
  [975] = {.lex_state = 0, .external_lex_state = 7},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 297},
  [978] = {.lex_state = 0, .external_lex_state = 7},
  [979] = {.lex_state = 0, .external_lex_state = 7},
  [980] = {.lex_state = 0, .external_lex_state = 32},
  [981] = {.lex_state = 0, .external_lex_state = 7},
  [982] = {.lex_state = 0, .external_lex_state = 32},
  [983] = {.lex_state = 0, .external_lex_state = 6},
  [984] = {.lex_state = 0, .external_lex_state = 34},
  [985] = {.lex_state = 1},
  [986] = {.lex_state = 1},
  [987] = {.lex_state = 6},
  [988] = {.lex_state = 1},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 294},
  [992] = {.lex_state = 0},
  [993] = {.lex_state = 19},
  [994] = {.lex_state = 0},
  [995] = {.lex_state = 298, .external_lex_state = 35},
  [996] = {.lex_state = 0, .external_lex_state = 34},
  [997] = {.lex_state = 1},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 1},
  [1000] = {.lex_state = 1},
  [1001] = {.lex_state = 0, .external_lex_state = 34},
  [1002] = {.lex_state = 19},
  [1003] = {.lex_state = 1},
  [1004] = {.lex_state = 0, .external_lex_state = 3},
  [1005] = {.lex_state = 0, .external_lex_state = 34},
  [1006] = {.lex_state = 0, .external_lex_state = 31},
  [1007] = {.lex_state = 0, .external_lex_state = 28},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 19},
  [1010] = {.lex_state = 298, .external_lex_state = 35},
  [1011] = {.lex_state = 1},
  [1012] = {.lex_state = 0, .external_lex_state = 7},
  [1013] = {.lex_state = 19},
  [1014] = {.lex_state = 1},
  [1015] = {.lex_state = 0, .external_lex_state = 31},
  [1016] = {.lex_state = 0, .external_lex_state = 36},
  [1017] = {.lex_state = 0, .external_lex_state = 36},
  [1018] = {.lex_state = 298, .external_lex_state = 35},
  [1019] = {.lex_state = 298, .external_lex_state = 35},
  [1020] = {.lex_state = 1},
  [1021] = {.lex_state = 296},
  [1022] = {.lex_state = 0, .external_lex_state = 7},
  [1023] = {.lex_state = 296},
  [1024] = {.lex_state = 298, .external_lex_state = 35},
  [1025] = {.lex_state = 298, .external_lex_state = 35},
  [1026] = {.lex_state = 0, .external_lex_state = 7},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 298, .external_lex_state = 35},
  [1029] = {.lex_state = 298, .external_lex_state = 35},
  [1030] = {.lex_state = 1},
  [1031] = {.lex_state = 298, .external_lex_state = 35},
  [1032] = {.lex_state = 298, .external_lex_state = 35},
  [1033] = {.lex_state = 298, .external_lex_state = 35},
  [1034] = {.lex_state = 298, .external_lex_state = 35},
  [1035] = {.lex_state = 298, .external_lex_state = 35},
  [1036] = {.lex_state = 298, .external_lex_state = 35},
  [1037] = {.lex_state = 298, .external_lex_state = 35},
  [1038] = {.lex_state = 298, .external_lex_state = 35},
  [1039] = {.lex_state = 296},
  [1040] = {.lex_state = 298, .external_lex_state = 35},
  [1041] = {.lex_state = 298, .external_lex_state = 35},
  [1042] = {.lex_state = 1},
  [1043] = {.lex_state = 296},
  [1044] = {.lex_state = 298, .external_lex_state = 35},
  [1045] = {.lex_state = 298, .external_lex_state = 35},
  [1046] = {.lex_state = 1},
  [1047] = {.lex_state = 46},
  [1048] = {.lex_state = 297},
  [1049] = {.lex_state = 19},
  [1050] = {.lex_state = 1},
  [1051] = {.lex_state = 0, .external_lex_state = 36},
  [1052] = {.lex_state = 294},
  [1053] = {.lex_state = 0, .external_lex_state = 7},
  [1054] = {.lex_state = 0, .external_lex_state = 36},
  [1055] = {.lex_state = 1},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 0, .external_lex_state = 3},
  [1058] = {.lex_state = 1},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 1},
  [1063] = {.lex_state = 1},
  [1064] = {.lex_state = 1},
  [1065] = {.lex_state = 295},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 0},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 46},
  [1072] = {.lex_state = 1},
  [1073] = {.lex_state = 0, .external_lex_state = 7},
  [1074] = {.lex_state = 46},
  [1075] = {.lex_state = 0, .external_lex_state = 37},
  [1076] = {.lex_state = 0, .external_lex_state = 37},
  [1077] = {.lex_state = 0, .external_lex_state = 37},
  [1078] = {.lex_state = 0, .external_lex_state = 37},
  [1079] = {.lex_state = 6},
  [1080] = {.lex_state = 0, .external_lex_state = 35},
  [1081] = {.lex_state = 0, .external_lex_state = 35},
  [1082] = {.lex_state = 0, .external_lex_state = 35},
  [1083] = {.lex_state = 0, .external_lex_state = 7},
  [1084] = {.lex_state = 0, .external_lex_state = 37},
  [1085] = {.lex_state = 46},
  [1086] = {.lex_state = 294},
  [1087] = {.lex_state = 294},
  [1088] = {.lex_state = 0, .external_lex_state = 37},
  [1089] = {.lex_state = 0, .external_lex_state = 37},
  [1090] = {.lex_state = 1},
  [1091] = {.lex_state = 0, .external_lex_state = 35},
  [1092] = {.lex_state = 0, .external_lex_state = 35},
  [1093] = {.lex_state = 0, .external_lex_state = 35},
  [1094] = {.lex_state = 0, .external_lex_state = 7},
  [1095] = {.lex_state = 0, .external_lex_state = 35},
  [1096] = {.lex_state = 1},
  [1097] = {.lex_state = 0, .external_lex_state = 37},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 1},
  [1100] = {.lex_state = 1},
  [1101] = {.lex_state = 1},
  [1102] = {.lex_state = 0, .external_lex_state = 35},
  [1103] = {.lex_state = 0, .external_lex_state = 35},
  [1104] = {.lex_state = 0, .external_lex_state = 35},
  [1105] = {.lex_state = 0, .external_lex_state = 7},
  [1106] = {.lex_state = 0, .external_lex_state = 37},
  [1107] = {.lex_state = 0, .external_lex_state = 37},
  [1108] = {.lex_state = 0, .external_lex_state = 37},
  [1109] = {.lex_state = 0, .external_lex_state = 35},
  [1110] = {.lex_state = 0, .external_lex_state = 35},
  [1111] = {.lex_state = 0, .external_lex_state = 35},
  [1112] = {.lex_state = 0, .external_lex_state = 7},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 1},
  [1115] = {.lex_state = 0, .external_lex_state = 37},
  [1116] = {.lex_state = 0, .external_lex_state = 35},
  [1117] = {.lex_state = 0, .external_lex_state = 35},
  [1118] = {.lex_state = 0, .external_lex_state = 35},
  [1119] = {.lex_state = 0, .external_lex_state = 7},
  [1120] = {.lex_state = 1},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 46},
  [1123] = {.lex_state = 0, .external_lex_state = 35},
  [1124] = {.lex_state = 0, .external_lex_state = 35},
  [1125] = {.lex_state = 0, .external_lex_state = 35},
  [1126] = {.lex_state = 0, .external_lex_state = 7},
  [1127] = {.lex_state = 1},
  [1128] = {.lex_state = 0, .external_lex_state = 37},
  [1129] = {.lex_state = 297},
  [1130] = {.lex_state = 0, .external_lex_state = 35},
  [1131] = {.lex_state = 0, .external_lex_state = 35},
  [1132] = {.lex_state = 0, .external_lex_state = 35},
  [1133] = {.lex_state = 0, .external_lex_state = 7},
  [1134] = {.lex_state = 1},
  [1135] = {.lex_state = 1},
  [1136] = {.lex_state = 0, .external_lex_state = 37},
  [1137] = {.lex_state = 0, .external_lex_state = 35},
  [1138] = {.lex_state = 0, .external_lex_state = 35},
  [1139] = {.lex_state = 0, .external_lex_state = 35},
  [1140] = {.lex_state = 0, .external_lex_state = 7},
  [1141] = {.lex_state = 0, .external_lex_state = 7},
  [1142] = {.lex_state = 0, .external_lex_state = 7},
  [1143] = {.lex_state = 0, .external_lex_state = 7},
  [1144] = {.lex_state = 0},
  [1145] = {.lex_state = 0, .external_lex_state = 37},
  [1146] = {.lex_state = 1},
  [1147] = {.lex_state = 1},
  [1148] = {.lex_state = 0, .external_lex_state = 7},
  [1149] = {.lex_state = 1},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 1},
  [1152] = {.lex_state = 0, .external_lex_state = 37},
  [1153] = {.lex_state = 0, .external_lex_state = 35},
  [1154] = {.lex_state = 1},
  [1155] = {.lex_state = 0, .external_lex_state = 37},
  [1156] = {.lex_state = 32},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 0, .external_lex_state = 35},
  [1159] = {.lex_state = 0, .external_lex_state = 37},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 46},
  [1162] = {.lex_state = 0, .external_lex_state = 7},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 0, .external_lex_state = 37},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 1},
  [1169] = {.lex_state = 1},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 0, .external_lex_state = 7},
  [1173] = {.lex_state = 46},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 0, .external_lex_state = 35},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 0, .external_lex_state = 37},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 1},
  [1180] = {.lex_state = 1},
  [1181] = {.lex_state = 1},
  [1182] = {.lex_state = 0, .external_lex_state = 35},
  [1183] = {.lex_state = 0},
  [1184] = {.lex_state = 0, .external_lex_state = 37},
  [1185] = {.lex_state = 1},
  [1186] = {.lex_state = 1},
  [1187] = {.lex_state = 0, .external_lex_state = 7},
  [1188] = {.lex_state = 0, .external_lex_state = 35},
  [1189] = {.lex_state = 0, .external_lex_state = 37},
  [1190] = {.lex_state = 46},
  [1191] = {.lex_state = 46},
  [1192] = {.lex_state = 0, .external_lex_state = 37},
  [1193] = {.lex_state = 0, .external_lex_state = 37},
  [1194] = {.lex_state = 1},
  [1195] = {.lex_state = 0, .external_lex_state = 37},
  [1196] = {.lex_state = 0, .external_lex_state = 37},
  [1197] = {.lex_state = 1},
  [1198] = {.lex_state = 1},
  [1199] = {.lex_state = 0, .external_lex_state = 37},
  [1200] = {.lex_state = 0, .external_lex_state = 37},
  [1201] = {.lex_state = 1},
  [1202] = {.lex_state = 1},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 0, .external_lex_state = 7},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 1},
  [1207] = {.lex_state = 0, .external_lex_state = 37},
  [1208] = {.lex_state = 0, .external_lex_state = 37},
  [1209] = {.lex_state = 295},
  [1210] = {.lex_state = 0, .external_lex_state = 7},
  [1211] = {.lex_state = 298},
  [1212] = {.lex_state = 0, .external_lex_state = 37},
  [1213] = {.lex_state = 0, .external_lex_state = 35},
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
    [aux_sym__invalid_named_binding_token1] = ACTIONS(1),
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
    [sym__reserved_binding_start] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
    [sym__async_await_binding_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1144),
    [sym_item] = STATE(145),
    [sym__trivia] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(145),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(621),
    [sym__collection_operation] = STATE(621),
    [sym_let_statement] = STATE(621),
    [sym_exec_statement] = STATE(621),
    [sym_spawn_statement] = STATE(621),
    [sym__invalid_exec_binding] = STATE(622),
    [sym__invalid_reserved_binding] = STATE(625),
    [sym__invalid_named_binding] = STATE(626),
    [sym_run_statement] = STATE(621),
    [sym__async_modifier] = STATE(1058),
    [sym__run] = STATE(627),
    [sym_await_statement] = STATE(621),
    [sym_implicit_run_statement] = STATE(621),
    [sym__implicit_run_line] = STATE(148),
    [sym_seek_statement] = STATE(621),
    [sym_ask_statement] = STATE(621),
    [sym_generate_statement] = STATE(621),
    [sym_reduce_statement] = STATE(621),
    [sym_map_statement] = STATE(621),
    [sym_keep_statement] = STATE(621),
    [sym_drop_statement] = STATE(621),
    [sym_sort_statement] = STATE(621),
    [sym_repeat_statement] = STATE(621),
    [sym_invalid_flow_reserved_statement] = STATE(621),
    [sym__query_directive_key] = STATE(866),
    [sym__route_directive_key] = STATE(866),
    [sym_directive_key] = STATE(629),
    [sym_role] = STATE(629),
    [sym__flow_reserved_word] = STATE(629),
    [sym__collection_binding_word] = STATE(629),
    [sym__async_await_binding_word] = STATE(629),
    [sym__reserved_binding_word] = STATE(629),
    [sym__agic_reserved_word] = STATE(629),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_lanes] = ACTIONS(13),
    [anon_sym_models] = ACTIONS(15),
    [anon_sym_tools] = ACTIONS(15),
    [anon_sym_skills] = ACTIONS(15),
    [anon_sym_services] = ACTIONS(15),
    [anon_sym_psyches] = ACTIONS(15),
    [anon_sym_prompts] = ACTIONS(15),
    [anon_sym_hands] = ACTIONS(17),
    [anon_sym_handoffs] = ACTIONS(17),
    [anon_sym_user] = ACTIONS(19),
    [anon_sym_assistant] = ACTIONS(19),
    [anon_sym_tool] = ACTIONS(21),
    [sym_with_keyword] = ACTIONS(11),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(23),
    [sym_skill_keyword] = ACTIONS(23),
    [sym_service_keyword] = ACTIONS(23),
    [sym_prompt_keyword] = ACTIONS(23),
    [sym_context_keyword] = ACTIONS(13),
    [sym_instruct_keyword] = ACTIONS(13),
    [sym_agic_keyword] = ACTIONS(11),
    [sym_task_keyword] = ACTIONS(11),
    [sym_chore_keyword] = ACTIONS(11),
    [sym_flow_keyword] = ACTIONS(11),
    [sym_pass_keyword] = ACTIONS(11),
    [sym_flow_run_keyword] = ACTIONS(25),
    [sym_flow_async_keyword] = ACTIONS(27),
    [sym_flow_await_keyword] = ACTIONS(29),
    [sym_flow_exec_keyword] = ACTIONS(31),
    [sym_flow_spawn_keyword] = ACTIONS(33),
    [sym_flow_let_keyword] = ACTIONS(35),
    [sym_flow_seek_keyword] = ACTIONS(37),
    [sym_flow_ask_keyword] = ACTIONS(39),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(41),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(43),
    [sym_flow_map_keyword] = ACTIONS(45),
    [sym_flow_keep_keyword] = ACTIONS(47),
    [sym_flow_drop_keyword] = ACTIONS(49),
    [sym_flow_sort_keyword] = ACTIONS(51),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(53),
    [sym_flow_until_keyword] = ACTIONS(11),
    [sym_flow_from_keyword] = ACTIONS(11),
    [sym_flow_windowing_keyword] = ACTIONS(11),
    [sym_flow_using_keyword] = ACTIONS(11),
    [sym_flow_if_keyword] = ACTIONS(11),
    [sym_flow_by_keyword] = ACTIONS(11),
    [sym_flow_in_keyword] = ACTIONS(23),
    [sym_flow_lane_keyword] = ACTIONS(23),
    [sym_flow_ascending_keyword] = ACTIONS(11),
    [sym_flow_descending_keyword] = ACTIONS(11),
    [sym_flow_time_keyword] = ACTIONS(23),
    [sym_flow_times_keyword] = ACTIONS(11),
    [sym_flow_par_keyword] = ACTIONS(11),
    [sym_flow_first_keyword] = ACTIONS(11),
    [sym_flow_last_keyword] = ACTIONS(11),
    [sym_flow_top_keyword] = ACTIONS(11),
    [sym_flow_bottom_keyword] = ACTIONS(11),
    [sym_flow_think_keyword] = ACTIONS(11),
    [sym_flow_use_keyword] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(11),
    [sym_recall_keyword] = ACTIONS(13),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_unfold] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(11),
    [anon_sym_fold] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(11),
    [anon_sym_tail] = ACTIONS(11),
    [sym__flow_raw_text] = ACTIONS(55),
  },
  [3] = {
    [sym__flow_operation] = STATE(621),
    [sym__collection_operation] = STATE(621),
    [sym_let_statement] = STATE(621),
    [sym_exec_statement] = STATE(621),
    [sym_spawn_statement] = STATE(621),
    [sym__invalid_exec_binding] = STATE(622),
    [sym__invalid_reserved_binding] = STATE(625),
    [sym__invalid_named_binding] = STATE(626),
    [sym_run_statement] = STATE(621),
    [sym__async_modifier] = STATE(1058),
    [sym__run] = STATE(627),
    [sym_await_statement] = STATE(621),
    [sym_implicit_run_statement] = STATE(621),
    [sym__implicit_run_line] = STATE(148),
    [sym_seek_statement] = STATE(621),
    [sym_ask_statement] = STATE(621),
    [sym_generate_statement] = STATE(621),
    [sym_reduce_statement] = STATE(621),
    [sym_map_statement] = STATE(621),
    [sym_keep_statement] = STATE(621),
    [sym_drop_statement] = STATE(621),
    [sym_sort_statement] = STATE(621),
    [sym_repeat_statement] = STATE(621),
    [sym_invalid_flow_reserved_statement] = STATE(621),
    [sym__query_directive_key] = STATE(866),
    [sym__route_directive_key] = STATE(866),
    [sym_directive_key] = STATE(629),
    [sym_role] = STATE(629),
    [sym__flow_reserved_word] = STATE(629),
    [sym__collection_binding_word] = STATE(629),
    [sym__async_await_binding_word] = STATE(629),
    [sym__reserved_binding_word] = STATE(629),
    [sym__agic_reserved_word] = STATE(629),
    [anon_sym__] = ACTIONS(11),
    [anon_sym_lanes] = ACTIONS(13),
    [anon_sym_models] = ACTIONS(15),
    [anon_sym_tools] = ACTIONS(15),
    [anon_sym_skills] = ACTIONS(15),
    [anon_sym_services] = ACTIONS(15),
    [anon_sym_psyches] = ACTIONS(15),
    [anon_sym_prompts] = ACTIONS(15),
    [anon_sym_hands] = ACTIONS(17),
    [anon_sym_handoffs] = ACTIONS(17),
    [anon_sym_user] = ACTIONS(19),
    [anon_sym_assistant] = ACTIONS(19),
    [anon_sym_tool] = ACTIONS(21),
    [sym_with_keyword] = ACTIONS(11),
    [sym_struct_keyword] = ACTIONS(11),
    [sym_psyche_keyword] = ACTIONS(23),
    [sym_skill_keyword] = ACTIONS(23),
    [sym_service_keyword] = ACTIONS(23),
    [sym_prompt_keyword] = ACTIONS(23),
    [sym_context_keyword] = ACTIONS(13),
    [sym_instruct_keyword] = ACTIONS(13),
    [sym_agic_keyword] = ACTIONS(11),
    [sym_task_keyword] = ACTIONS(11),
    [sym_chore_keyword] = ACTIONS(11),
    [sym_flow_keyword] = ACTIONS(11),
    [sym_pass_keyword] = ACTIONS(57),
    [sym_flow_run_keyword] = ACTIONS(25),
    [sym_flow_async_keyword] = ACTIONS(27),
    [sym_flow_await_keyword] = ACTIONS(29),
    [sym_flow_exec_keyword] = ACTIONS(31),
    [sym_flow_spawn_keyword] = ACTIONS(33),
    [sym_flow_let_keyword] = ACTIONS(35),
    [sym_flow_seek_keyword] = ACTIONS(37),
    [sym_flow_ask_keyword] = ACTIONS(39),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(41),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(43),
    [sym_flow_map_keyword] = ACTIONS(45),
    [sym_flow_keep_keyword] = ACTIONS(47),
    [sym_flow_drop_keyword] = ACTIONS(49),
    [sym_flow_sort_keyword] = ACTIONS(51),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(53),
    [sym_flow_until_keyword] = ACTIONS(11),
    [sym_flow_from_keyword] = ACTIONS(11),
    [sym_flow_windowing_keyword] = ACTIONS(11),
    [sym_flow_using_keyword] = ACTIONS(11),
    [sym_flow_if_keyword] = ACTIONS(11),
    [sym_flow_by_keyword] = ACTIONS(11),
    [sym_flow_in_keyword] = ACTIONS(23),
    [sym_flow_lane_keyword] = ACTIONS(23),
    [sym_flow_ascending_keyword] = ACTIONS(11),
    [sym_flow_descending_keyword] = ACTIONS(11),
    [sym_flow_time_keyword] = ACTIONS(23),
    [sym_flow_times_keyword] = ACTIONS(11),
    [sym_flow_par_keyword] = ACTIONS(11),
    [sym_flow_first_keyword] = ACTIONS(11),
    [sym_flow_last_keyword] = ACTIONS(11),
    [sym_flow_top_keyword] = ACTIONS(11),
    [sym_flow_bottom_keyword] = ACTIONS(11),
    [sym_flow_think_keyword] = ACTIONS(11),
    [sym_flow_use_keyword] = ACTIONS(23),
    [sym_thunk_keyword] = ACTIONS(11),
    [sym_recall_keyword] = ACTIONS(13),
    [anon_sym_call] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_unfold] = ACTIONS(11),
    [anon_sym_each] = ACTIONS(11),
    [anon_sym_fold] = ACTIONS(11),
    [anon_sym_head] = ACTIONS(11),
    [anon_sym_tail] = ACTIONS(11),
    [sym__flow_raw_text] = ACTIONS(55),
  },
  [4] = {
    [sym__flow_operation] = STATE(434),
    [sym__collection_operation] = STATE(434),
    [sym_let_statement] = STATE(434),
    [sym_exec_statement] = STATE(434),
    [sym_spawn_statement] = STATE(434),
    [sym__invalid_exec_binding] = STATE(435),
    [sym__invalid_reserved_binding] = STATE(438),
    [sym__invalid_named_binding] = STATE(439),
    [sym_run_statement] = STATE(434),
    [sym__async_modifier] = STATE(1070),
    [sym__run] = STATE(440),
    [sym_await_statement] = STATE(434),
    [sym_implicit_run_statement] = STATE(434),
    [sym__implicit_run_line] = STATE(87),
    [sym_seek_statement] = STATE(434),
    [sym_ask_statement] = STATE(434),
    [sym_generate_statement] = STATE(434),
    [sym_reduce_statement] = STATE(434),
    [sym_map_statement] = STATE(434),
    [sym_keep_statement] = STATE(434),
    [sym_drop_statement] = STATE(434),
    [sym_sort_statement] = STATE(434),
    [sym_repeat_statement] = STATE(434),
    [sym_invalid_flow_reserved_statement] = STATE(434),
    [sym__query_directive_key] = STATE(866),
    [sym__route_directive_key] = STATE(866),
    [sym_directive_key] = STATE(712),
    [sym_role] = STATE(712),
    [sym__flow_reserved_word] = STATE(712),
    [sym__collection_binding_word] = STATE(712),
    [sym__async_await_binding_word] = STATE(712),
    [sym__reserved_binding_word] = STATE(712),
    [sym__agic_reserved_word] = STATE(712),
    [anon_sym__] = ACTIONS(59),
    [anon_sym_lanes] = ACTIONS(13),
    [anon_sym_models] = ACTIONS(15),
    [anon_sym_tools] = ACTIONS(15),
    [anon_sym_skills] = ACTIONS(15),
    [anon_sym_services] = ACTIONS(15),
    [anon_sym_psyches] = ACTIONS(15),
    [anon_sym_prompts] = ACTIONS(15),
    [anon_sym_hands] = ACTIONS(17),
    [anon_sym_handoffs] = ACTIONS(17),
    [anon_sym_user] = ACTIONS(19),
    [anon_sym_assistant] = ACTIONS(19),
    [anon_sym_tool] = ACTIONS(21),
    [sym_with_keyword] = ACTIONS(59),
    [sym_struct_keyword] = ACTIONS(59),
    [sym_psyche_keyword] = ACTIONS(61),
    [sym_skill_keyword] = ACTIONS(61),
    [sym_service_keyword] = ACTIONS(61),
    [sym_prompt_keyword] = ACTIONS(61),
    [sym_context_keyword] = ACTIONS(13),
    [sym_instruct_keyword] = ACTIONS(13),
    [sym_agic_keyword] = ACTIONS(59),
    [sym_task_keyword] = ACTIONS(59),
    [sym_chore_keyword] = ACTIONS(59),
    [sym_flow_keyword] = ACTIONS(59),
    [sym_pass_keyword] = ACTIONS(59),
    [sym_flow_run_keyword] = ACTIONS(63),
    [sym_flow_async_keyword] = ACTIONS(27),
    [sym_flow_await_keyword] = ACTIONS(65),
    [sym_flow_exec_keyword] = ACTIONS(67),
    [sym_flow_spawn_keyword] = ACTIONS(69),
    [sym_flow_let_keyword] = ACTIONS(71),
    [sym_flow_seek_keyword] = ACTIONS(73),
    [sym_flow_ask_keyword] = ACTIONS(75),
    [sym_flow_scatter_keyword] = ACTIONS(59),
    [sym_flow_storm_keyword] = ACTIONS(59),
    [sym_flow_generate_keyword] = ACTIONS(77),
    [sym_flow_gather_keyword] = ACTIONS(59),
    [sym_flow_settle_keyword] = ACTIONS(59),
    [sym_flow_reduce_keyword] = ACTIONS(79),
    [sym_flow_map_keyword] = ACTIONS(81),
    [sym_flow_keep_keyword] = ACTIONS(83),
    [sym_flow_drop_keyword] = ACTIONS(85),
    [sym_flow_sort_keyword] = ACTIONS(87),
    [sym_flow_rank_keyword] = ACTIONS(59),
    [sym_flow_repeat_keyword] = ACTIONS(89),
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
    [sym_recall_keyword] = ACTIONS(13),
    [anon_sym_call] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(59),
    [anon_sym_unfold] = ACTIONS(59),
    [anon_sym_each] = ACTIONS(59),
    [anon_sym_fold] = ACTIONS(59),
    [anon_sym_head] = ACTIONS(59),
    [anon_sym_tail] = ACTIONS(59),
    [sym__flow_raw_text] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(95), 1,
      sym_flow_run_keyword,
    ACTIONS(97), 1,
      sym_flow_async_keyword,
    ACTIONS(99), 1,
      sym_flow_await_keyword,
    ACTIONS(101), 1,
      sym_flow_spawn_keyword,
    ACTIONS(103), 1,
      sym_flow_seek_keyword,
    ACTIONS(105), 1,
      sym_flow_ask_keyword,
    ACTIONS(107), 1,
      sym_flow_generate_keyword,
    ACTIONS(109), 1,
      sym_flow_reduce_keyword,
    ACTIONS(111), 1,
      sym_flow_map_keyword,
    ACTIONS(113), 1,
      sym_flow_keep_keyword,
    ACTIONS(115), 1,
      sym_flow_drop_keyword,
    ACTIONS(117), 1,
      sym_flow_sort_keyword,
    ACTIONS(119), 1,
      sym_flow_repeat_keyword,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(123), 1,
      sym__exec_binding_start,
    ACTIONS(125), 1,
      sym__reserved_binding_start,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(218), 1,
      sym_local_name,
    STATE(627), 1,
      sym__run,
    STATE(1058), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(670), 14,
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
    ACTIONS(97), 1,
      sym_flow_async_keyword,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(129), 1,
      sym_flow_run_keyword,
    ACTIONS(131), 1,
      sym_flow_await_keyword,
    ACTIONS(133), 1,
      sym_flow_spawn_keyword,
    ACTIONS(135), 1,
      sym_flow_seek_keyword,
    ACTIONS(137), 1,
      sym_flow_ask_keyword,
    ACTIONS(139), 1,
      sym_flow_generate_keyword,
    ACTIONS(141), 1,
      sym_flow_reduce_keyword,
    ACTIONS(143), 1,
      sym_flow_map_keyword,
    ACTIONS(145), 1,
      sym_flow_keep_keyword,
    ACTIONS(147), 1,
      sym_flow_drop_keyword,
    ACTIONS(149), 1,
      sym_flow_sort_keyword,
    ACTIONS(151), 1,
      sym_flow_repeat_keyword,
    ACTIONS(153), 1,
      sym__exec_binding_start,
    ACTIONS(155), 1,
      sym__reserved_binding_start,
    STATE(195), 1,
      sym_local_name,
    STATE(440), 1,
      sym__run,
    STATE(1070), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(459), 14,
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
  [162] = 20,
    ACTIONS(95), 1,
      sym_flow_run_keyword,
    ACTIONS(103), 1,
      sym_flow_seek_keyword,
    ACTIONS(105), 1,
      sym_flow_ask_keyword,
    ACTIONS(113), 1,
      sym_flow_keep_keyword,
    ACTIONS(115), 1,
      sym_flow_drop_keyword,
    ACTIONS(117), 1,
      sym_flow_sort_keyword,
    ACTIONS(119), 1,
      sym_flow_repeat_keyword,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
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
    STATE(496), 1,
      sym_text_inline,
    STATE(498), 1,
      sym__run,
    STATE(586), 1,
      sym_text_block,
    STATE(708), 1,
      sym_line_end,
    STATE(497), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [229] = 20,
    ACTIONS(129), 1,
      sym_flow_run_keyword,
    ACTIONS(135), 1,
      sym_flow_seek_keyword,
    ACTIONS(137), 1,
      sym_flow_ask_keyword,
    ACTIONS(145), 1,
      sym_flow_keep_keyword,
    ACTIONS(147), 1,
      sym_flow_drop_keyword,
    ACTIONS(149), 1,
      sym_flow_sort_keyword,
    ACTIONS(151), 1,
      sym_flow_repeat_keyword,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    ACTIONS(175), 1,
      sym__exec_binding_start,
    ACTIONS(177), 1,
      sym__collection_binding_start,
    ACTIONS(179), 1,
      sym__spawn_binding_start,
    ACTIONS(181), 1,
      sym__reserved_binding_start,
    ACTIONS(183), 1,
      sym__async_await_binding_start,
    STATE(264), 1,
      sym_text_inline,
    STATE(266), 1,
      sym__run,
    STATE(357), 1,
      sym_text_block,
    STATE(753), 1,
      sym_line_end,
    STATE(265), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [296] = 12,
    ACTIONS(57), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(130), 1,
      sym__unroled_message_line,
    STATE(598), 1,
      sym_role,
    ACTIONS(17), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(597), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(599), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(866), 2,
      sym__query_directive_key,
      sym__route_directive_key,
    ACTIONS(13), 4,
      anon_sym_lanes,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_recall_keyword,
    ACTIONS(15), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [346] = 12,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(191), 1,
      sym_pass_keyword,
    STATE(130), 1,
      sym__unroled_message_line,
    STATE(598), 1,
      sym_role,
    ACTIONS(17), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(597), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(599), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(866), 2,
      sym__query_directive_key,
      sym__route_directive_key,
    ACTIONS(13), 4,
      anon_sym_lanes,
      sym_context_keyword,
      sym_instruct_keyword,
      sym_recall_keyword,
    ACTIONS(15), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [396] = 13,
    ACTIONS(193), 1,
      sym_with_keyword,
    ACTIONS(195), 1,
      sym_struct_keyword,
    ACTIONS(197), 1,
      sym_psyche_keyword,
    ACTIONS(199), 1,
      sym_skill_keyword,
    ACTIONS(201), 1,
      sym_service_keyword,
    ACTIONS(203), 1,
      sym_prompt_keyword,
    ACTIONS(205), 1,
      sym_context_keyword,
    ACTIONS(207), 1,
      sym_instruct_keyword,
    ACTIONS(209), 1,
      sym_agic_keyword,
    ACTIONS(211), 1,
      sym_task_keyword,
    ACTIONS(213), 1,
      sym_chore_keyword,
    ACTIONS(215), 1,
      sym_flow_keyword,
    STATE(654), 12,
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
  [447] = 2,
    ACTIONS(219), 6,
      sym_newline,
      sym__exec_binding_start,
      sym__collection_binding_start,
      sym__spawn_binding_start,
      sym__reserved_binding_start,
      sym__async_await_binding_start,
    ACTIONS(217), 9,
      sym__inline_comment,
      sym_flow_run_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_sort_keyword,
      sym_flow_repeat_keyword,
      sym_text_line,
  [467] = 7,
    ACTIONS(221), 1,
      anon_sym_lanes,
    ACTIONS(229), 1,
      sym_recall_keyword,
    STATE(600), 1,
      sym__query_directive_key,
    STATE(994), 1,
      sym__route_directive_key,
    ACTIONS(225), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(227), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(223), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [496] = 9,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(235), 1,
      sym_pascal_name,
    ACTIONS(237), 1,
      sym_newline,
    STATE(141), 1,
      sym_base_type,
    STATE(257), 1,
      sym_type,
    STATE(344), 1,
      sym_type_name,
    STATE(512), 1,
      sym_line_end,
    STATE(343), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [529] = 9,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(235), 1,
      sym_pascal_name,
    ACTIONS(237), 1,
      sym_newline,
    STATE(141), 1,
      sym_base_type,
    STATE(344), 1,
      sym_type_name,
    STATE(373), 1,
      sym_type,
    STATE(537), 1,
      sym_line_end,
    STATE(343), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [562] = 7,
    ACTIONS(239), 1,
      anon_sym_lanes,
    ACTIONS(243), 1,
      sym_recall_keyword,
    STATE(769), 1,
      sym__query_directive_key,
    STATE(1068), 1,
      sym__route_directive_key,
    ACTIONS(225), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(241), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(223), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [591] = 9,
    ACTIONS(235), 1,
      sym_pascal_name,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(141), 1,
      sym_base_type,
    STATE(278), 1,
      sym_line_end,
    STATE(344), 1,
      sym_type_name,
    STATE(436), 1,
      sym_type,
    STATE(343), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [624] = 9,
    ACTIONS(235), 1,
      sym_pascal_name,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(141), 1,
      sym_base_type,
    STATE(292), 1,
      sym_line_end,
    STATE(344), 1,
      sym_type_name,
    STATE(442), 1,
      sym_type,
    STATE(343), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [657] = 6,
    ACTIONS(41), 1,
      sym_flow_generate_keyword,
    ACTIONS(43), 1,
      sym_flow_reduce_keyword,
    ACTIONS(45), 1,
      sym_flow_map_keyword,
    STATE(524), 1,
      sym__collection_binding_word,
    ACTIONS(249), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(523), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [683] = 6,
    ACTIONS(77), 1,
      sym_flow_generate_keyword,
    ACTIONS(79), 1,
      sym_flow_reduce_keyword,
    ACTIONS(81), 1,
      sym_flow_map_keyword,
    STATE(740), 1,
      sym__collection_binding_word,
    ACTIONS(251), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(284), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [709] = 12,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(255), 1,
      aux_sym__doc_space_token1,
    ACTIONS(257), 1,
      sym_arrow,
    ACTIONS(259), 1,
      sym_colon,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(263), 1,
      sym_text_line,
    STATE(62), 1,
      sym__required_space,
    STATE(254), 1,
      sym_line_end,
    STATE(255), 1,
      sym__invalid_modified_run_tail,
    STATE(256), 1,
      sym_inline_agic,
    STATE(731), 1,
      sym_runnable,
  [746] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(473), 1,
      sym__named_if_complement,
    STATE(682), 1,
      sym__inline_if_complement,
    STATE(683), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(819), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [779] = 12,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(273), 1,
      aux_sym__doc_space_token1,
    ACTIONS(275), 1,
      sym_arrow,
    ACTIONS(277), 1,
      sym_colon,
    ACTIONS(279), 1,
      sym_text_line,
    STATE(50), 1,
      sym__required_space,
    STATE(770), 1,
      sym_line_end,
    STATE(771), 1,
      sym__invalid_modified_run_tail,
    STATE(772), 1,
      sym_inline_agic,
    STATE(773), 1,
      sym_runnable,
  [816] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(473), 1,
      sym__named_if_complement,
    STATE(682), 1,
      sym__inline_if_complement,
    STATE(684), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(821), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [849] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(463), 1,
      sym__inline_if_complement,
    STATE(467), 1,
      sym__if_complements,
    STATE(878), 1,
      sym__lanes_complement,
    STATE(880), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [882] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(463), 1,
      sym__inline_if_complement,
    STATE(464), 1,
      sym__if_complements,
    STATE(878), 1,
      sym__lanes_complement,
    STATE(879), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [915] = 10,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(291), 1,
      sym_newline,
    STATE(402), 1,
      sym__lanes_complement,
    STATE(678), 1,
      sym__runnable_complements,
    STATE(680), 1,
      sym_inline_agic,
    STATE(813), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [947] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1166), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [971] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1127), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [995] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(997), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1019] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1114), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1043] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1121), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1067] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1179), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1091] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1098), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1115] = 6,
    ACTIONS(299), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(779), 1,
      sym_type,
    STATE(832), 1,
      sym_type_name,
    STATE(831), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(297), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1139] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1146), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1163] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1197), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1187] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1206), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1211] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1168), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1235] = 6,
    ACTIONS(299), 1,
      sym_pascal_name,
    STATE(426), 1,
      sym_base_type,
    STATE(832), 1,
      sym_type_name,
    STATE(961), 1,
      sym_type,
    STATE(831), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(297), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1259] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1000), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1283] = 10,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(461), 1,
      sym__runnable_complements,
    STATE(462), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1315] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1149), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1339] = 6,
    ACTIONS(295), 1,
      sym_pascal_name,
    STATE(190), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1165), 1,
      sym_type,
    STATE(620), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(293), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1363] = 9,
    ACTIONS(305), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(309), 1,
      sym__dedent,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    STATE(399), 1,
      sym_property,
    STATE(1164), 1,
      sym__cap_text_body,
    STATE(1207), 1,
      sym_cap_body,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1392] = 9,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(399), 1,
      sym_property,
    STATE(1115), 1,
      sym_cap_body,
    STATE(1164), 1,
      sym__cap_text_body,
    STATE(47), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1421] = 9,
    ACTIONS(305), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(319), 1,
      sym__dedent,
    STATE(399), 1,
      sym_property,
    STATE(1089), 1,
      sym_cap_body,
    STATE(1164), 1,
      sym__cap_text_body,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1450] = 9,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(321), 1,
      sym_blank_line,
    ACTIONS(323), 1,
      sym__dedent,
    STATE(399), 1,
      sym_property,
    STATE(1107), 1,
      sym_cap_body,
    STATE(1164), 1,
      sym__cap_text_body,
    STATE(45), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1479] = 8,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(325), 1,
      sym_arrow,
    ACTIONS(327), 1,
      sym_colon,
    STATE(104), 1,
      sym__reduce_inline_block,
    STATE(675), 1,
      sym__reduce_inline_line,
    STATE(677), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1505] = 9,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(329), 1,
      sym_arrow,
    ACTIONS(331), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_text_line,
    STATE(512), 1,
      sym_line_end,
    STATE(514), 1,
      sym_inline_agic,
    STATE(515), 1,
      sym_runnable,
  [1533] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(29), 1,
      sym_flow_await_keyword,
    ACTIONS(335), 1,
      sym_flow_run_keyword,
    STATE(526), 1,
      sym__async_await_binding_word,
    STATE(627), 1,
      sym__run,
    STATE(1058), 1,
      sym__async_modifier,
    STATE(523), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1557] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(337), 1,
      sym_blank_line,
    ACTIONS(339), 1,
      sym__dedent,
    STATE(1108), 1,
      sym__cap_text_body,
    STATE(75), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1581] = 9,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    ACTIONS(343), 1,
      sym_text_line,
    STATE(543), 1,
      sym_line_end,
    STATE(661), 1,
      sym_inline_agic,
    STATE(797), 1,
      sym_runnable,
  [1609] = 8,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(345), 1,
      sym_arrow,
    ACTIONS(347), 1,
      sym_colon,
    STATE(149), 1,
      sym__reduce_inline_block,
    STATE(460), 1,
      sym__reduce_inline_line,
    STATE(718), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1635] = 8,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    STATE(473), 1,
      sym__named_if_complement,
    STATE(682), 1,
      sym__inline_if_complement,
    STATE(683), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(819), 1,
      sym_position,
    ACTIONS(353), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1661] = 8,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    STATE(473), 1,
      sym__named_if_complement,
    STATE(682), 1,
      sym__inline_if_complement,
    STATE(684), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(821), 1,
      sym_position,
    ACTIONS(353), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1687] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(355), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(463), 1,
      sym__inline_if_complement,
    STATE(464), 1,
      sym__if_complements,
    STATE(878), 1,
      sym__lanes_complement,
    STATE(879), 1,
      sym_position,
    ACTIONS(353), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1713] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(355), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(463), 1,
      sym__inline_if_complement,
    STATE(467), 1,
      sym__if_complements,
    STATE(878), 1,
      sym__lanes_complement,
    STATE(880), 1,
      sym_position,
    ACTIONS(353), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1739] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(357), 1,
      sym_blank_line,
    ACTIONS(359), 1,
      sym__dedent,
    STATE(1152), 1,
      sym__cap_text_body,
    STATE(52), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1763] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(361), 1,
      sym_blank_line,
    ACTIONS(363), 1,
      sym__dedent,
    STATE(1136), 1,
      sym__cap_text_body,
    STATE(65), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1787] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(367), 1,
      sym__other_integer_literal,
    ACTIONS(369), 1,
      sym_flow_windowing_keyword,
    ACTIONS(371), 1,
      sym_colon,
    STATE(851), 1,
      sym__repeat_count_complement,
    STATE(1185), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1813] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(373), 1,
      sym_arrow,
    ACTIONS(375), 1,
      sym_colon,
    ACTIONS(377), 1,
      sym_text_line,
    STATE(278), 1,
      sym_line_end,
    STATE(280), 1,
      sym_inline_agic,
    STATE(738), 1,
      sym_runnable,
  [1841] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(379), 1,
      sym_flow_run_keyword,
    STATE(440), 1,
      sym__run,
    STATE(742), 1,
      sym__async_await_binding_word,
    STATE(1070), 1,
      sym__async_modifier,
    STATE(284), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1865] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    ACTIONS(381), 1,
      sym_text_line,
    STATE(298), 1,
      sym_line_end,
    STATE(456), 1,
      sym_inline_agic,
    STATE(870), 1,
      sym_runnable,
  [1893] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(337), 1,
      sym_blank_line,
    ACTIONS(359), 1,
      sym__dedent,
    STATE(1152), 1,
      sym__cap_text_body,
    STATE(75), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1917] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(367), 1,
      sym__other_integer_literal,
    ACTIONS(369), 1,
      sym_flow_windowing_keyword,
    ACTIONS(383), 1,
      sym_colon,
    STATE(962), 1,
      sym__repeat_count_complement,
    STATE(1203), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1943] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(389), 1,
      sym__dedent,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1193), 1,
      sym__repeat_statements,
    STATE(93), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1966] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(396), 1,
      sym__comment_start,
    ACTIONS(401), 1,
      sym__directive_start,
    ACTIONS(399), 2,
      sym__dedent,
      sym__line_start,
    STATE(68), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1985] = 5,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(406), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2004] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(661), 1,
      sym_inline_agic,
    STATE(797), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2027] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(452), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2050] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(453), 1,
      sym_inline_agic,
    STATE(869), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2073] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(456), 1,
      sym_inline_agic,
    STATE(870), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2096] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(402), 1,
      sym__lanes_complement,
    STATE(678), 1,
      sym__runnable_complements,
    STATE(680), 1,
      sym_inline_agic,
    STATE(813), 1,
      sym__named_using_complement,
  [2121] = 5,
    ACTIONS(416), 1,
      sym_blank_line,
    ACTIONS(419), 1,
      sym__comment_start,
    ACTIONS(424), 1,
      sym__line_start,
    ACTIONS(422), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(75), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2140] = 6,
    ACTIONS(427), 1,
      sym_blank_line,
    ACTIONS(429), 1,
      sym__comment_start,
    ACTIONS(433), 1,
      sym__line_start,
    STATE(395), 1,
      sym__flow_statement,
    ACTIONS(431), 2,
      sym__dedent,
      sym__until_start,
    STATE(77), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2161] = 6,
    ACTIONS(429), 1,
      sym__comment_start,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(435), 1,
      sym_blank_line,
    STATE(395), 1,
      sym__flow_statement,
    ACTIONS(437), 2,
      sym__dedent,
      sym__until_start,
    STATE(82), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2182] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(402), 1,
      sym__lanes_complement,
    STATE(680), 1,
      sym_inline_agic,
    STATE(737), 1,
      sym__runnable_complements,
    STATE(813), 1,
      sym__named_using_complement,
  [2207] = 5,
    ACTIONS(439), 1,
      sym_blank_line,
    ACTIONS(441), 1,
      sym__comment_start,
    ACTIONS(445), 1,
      sym__directive_start,
    ACTIONS(443), 2,
      sym__dedent,
      sym__line_start,
    STATE(96), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2226] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(461), 1,
      sym__runnable_complements,
    STATE(462), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
  [2251] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(451), 1,
      sym_blank_line,
    ACTIONS(453), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1159), 1,
      sym__repeat_statements,
    STATE(84), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2274] = 6,
    ACTIONS(455), 1,
      sym_blank_line,
    ACTIONS(458), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym__line_start,
    STATE(395), 1,
      sym__flow_statement,
    ACTIONS(461), 2,
      sym__dedent,
      sym__until_start,
    STATE(82), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2295] = 8,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(241), 1,
      sym__runnable_complements,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(462), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
  [2320] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(468), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1189), 1,
      sym__repeat_statements,
    STATE(181), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2343] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(470), 1,
      sym_blank_line,
    ACTIONS(472), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1084), 1,
      sym__repeat_statements,
    STATE(86), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2366] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(474), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1155), 1,
      sym__repeat_statements,
    STATE(181), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2389] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(476), 1,
      sym_blank_line,
    STATE(89), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(230), 1,
      sym__implicit_run_line,
    ACTIONS(478), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2408] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(658), 1,
      sym_inline_agic,
    STATE(794), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2431] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(480), 1,
      sym_blank_line,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(230), 1,
      sym__implicit_run_line,
    ACTIONS(482), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2450] = 6,
    ACTIONS(484), 1,
      sym_blank_line,
    ACTIONS(487), 1,
      sym__comment_start,
    ACTIONS(492), 1,
      sym__line_start,
    STATE(399), 1,
      sym_property,
    ACTIONS(490), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(90), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2471] = 5,
    ACTIONS(495), 1,
      sym_blank_line,
    ACTIONS(500), 1,
      sym__flow_raw_text,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(230), 1,
      sym__implicit_run_line,
    ACTIONS(498), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2490] = 5,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(503), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2509] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(505), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1208), 1,
      sym__repeat_statements,
    STATE(181), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2532] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(507), 1,
      sym_blank_line,
    ACTIONS(509), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1212), 1,
      sym__repeat_statements,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2555] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__dedent,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1076), 1,
      sym__repeat_statements,
    STATE(181), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2578] = 5,
    ACTIONS(441), 1,
      sym__comment_start,
    ACTIONS(445), 1,
      sym__directive_start,
    ACTIONS(513), 1,
      sym_blank_line,
    ACTIONS(515), 2,
      sym__dedent,
      sym__line_start,
    STATE(68), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2597] = 5,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2616] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(341), 1,
      sym_snake_name,
    STATE(660), 1,
      sym_inline_agic,
    STATE(796), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2639] = 5,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2658] = 4,
    STATE(717), 1,
      sym_recall_source,
    STATE(885), 1,
      sym_recall_value,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(523), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2674] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(525), 1,
      sym_text_line,
    STATE(610), 1,
      sym_line_end,
    STATE(614), 1,
      sym_text_block,
    STATE(618), 1,
      sym_text_inline,
    STATE(673), 1,
      sym_instruct_body,
  [2696] = 5,
    ACTIONS(529), 1,
      sym_blank_line,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(533), 1,
      sym__indent,
    ACTIONS(527), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2714] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym_blank_line,
    ACTIONS(537), 1,
      sym__dedent,
    ACTIONS(539), 1,
      sym__line_start,
    STATE(135), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2732] = 6,
    ACTIONS(541), 1,
      sym_blank_line,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(545), 1,
      sym__dedent,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(279), 1,
      sym__from_complement,
    STATE(294), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2752] = 6,
    ACTIONS(445), 1,
      sym__directive_start,
    ACTIONS(549), 1,
      sym__line_start,
    STATE(79), 1,
      sym_directive,
    STATE(103), 1,
      sym_message,
    STATE(605), 1,
      sym__directives,
    STATE(1088), 2,
      sym_messages,
      sym__pass_statement,
  [2772] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(551), 1,
      sym_blank_line,
    STATE(112), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(347), 1,
      sym__implicit_run_line,
    ACTIONS(482), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2790] = 5,
    ACTIONS(553), 1,
      sym_blank_line,
    ACTIONS(556), 1,
      sym__comment_start,
    ACTIONS(559), 1,
      sym__dedent,
    ACTIONS(561), 1,
      sym__line_start,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2808] = 5,
    ACTIONS(564), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym__comment_start,
    ACTIONS(570), 1,
      sym__dedent,
    ACTIONS(572), 1,
      sym__line_start,
    STATE(108), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2826] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(575), 1,
      sym_blank_line,
    ACTIONS(577), 1,
      sym__dedent,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(108), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2844] = 5,
    ACTIONS(581), 1,
      sym_blank_line,
    ACTIONS(586), 1,
      sym__agic_raw_text,
    STATE(110), 1,
      aux_sym_unroled_message_repeat1,
    STATE(468), 1,
      sym__unroled_message_line,
    ACTIONS(584), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2862] = 5,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(591), 1,
      sym_blank_line,
    ACTIONS(594), 1,
      sym__comment_start,
    ACTIONS(597), 1,
      sym__line_start,
    STATE(111), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2880] = 5,
    ACTIONS(600), 1,
      sym_blank_line,
    ACTIONS(603), 1,
      sym__flow_raw_text,
    STATE(112), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(347), 1,
      sym__implicit_run_line,
    ACTIONS(498), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2898] = 5,
    ACTIONS(529), 1,
      sym_blank_line,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(608), 1,
      sym__indent,
    ACTIONS(606), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(128), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2916] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(525), 1,
      sym_text_line,
    STATE(610), 1,
      sym_line_end,
    STATE(612), 1,
      sym_context_body,
    STATE(613), 1,
      sym_text_inline,
    STATE(614), 1,
      sym_text_block,
  [2938] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(589), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(503), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2956] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(614), 1,
      sym_blank_line,
    ACTIONS(616), 1,
      sym__dedent,
    STATE(150), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2974] = 6,
    ACTIONS(618), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    STATE(116), 1,
      sym__flow_statement,
    STATE(127), 1,
      sym_directive,
    STATE(776), 1,
      sym__directives,
    STATE(1192), 2,
      sym_statements,
      sym__pass_statement,
  [2994] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(622), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1145), 1,
      sym__repeat_statements,
    STATE(121), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3014] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(589), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3032] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(624), 1,
      sym_blank_line,
    ACTIONS(626), 1,
      sym__dedent,
    STATE(151), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3050] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1078), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3070] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(630), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1106), 1,
      sym__repeat_statements,
    STATE(125), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3090] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(589), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3108] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(525), 1,
      sym_text_line,
    STATE(610), 1,
      sym_line_end,
    STATE(614), 1,
      sym_text_block,
    STATE(615), 1,
      sym_instruct_body,
    STATE(618), 1,
      sym_text_inline,
  [3130] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1200), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3150] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(589), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(406), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3168] = 5,
    ACTIONS(443), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    ACTIONS(632), 1,
      sym_blank_line,
    ACTIONS(634), 1,
      sym__comment_start,
    STATE(129), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3186] = 4,
    ACTIONS(638), 1,
      sym_blank_line,
    ACTIONS(641), 1,
      sym__comment_start,
    STATE(128), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(636), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [3202] = 5,
    ACTIONS(515), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    ACTIONS(634), 1,
      sym__comment_start,
    ACTIONS(644), 1,
      sym_blank_line,
    STATE(131), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3220] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(646), 1,
      sym_blank_line,
    STATE(166), 1,
      aux_sym_unroled_message_repeat1,
    STATE(468), 1,
      sym__unroled_message_line,
    ACTIONS(648), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3238] = 5,
    ACTIONS(399), 1,
      sym__line_start,
    ACTIONS(650), 1,
      sym_blank_line,
    ACTIONS(653), 1,
      sym__comment_start,
    ACTIONS(656), 1,
      sym__directive_start,
    STATE(131), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3256] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(234), 1,
      sym__implicit_run_line,
    ACTIONS(482), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3270] = 5,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(661), 1,
      sym_blank_line,
    ACTIONS(663), 1,
      sym__indent,
    ACTIONS(659), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3288] = 5,
    ACTIONS(665), 1,
      sym_blank_line,
    ACTIONS(668), 1,
      sym__comment_start,
    ACTIONS(671), 1,
      sym__dedent,
    ACTIONS(673), 1,
      sym__line_start,
    STATE(134), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3306] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(676), 1,
      sym_blank_line,
    ACTIONS(678), 1,
      sym__dedent,
    STATE(134), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3324] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(431), 1,
      sym__dedent,
    ACTIONS(680), 1,
      sym_blank_line,
    STATE(774), 1,
      sym__flow_statement,
    STATE(137), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3344] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(437), 1,
      sym__dedent,
    ACTIONS(682), 1,
      sym_blank_line,
    STATE(774), 1,
      sym__flow_statement,
    STATE(139), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3364] = 5,
    ACTIONS(686), 1,
      sym__module_doc_start,
    ACTIONS(688), 1,
      sym__item_doc_start,
    ACTIONS(690), 1,
      sym__param_item_doc_start,
    ACTIONS(684), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(648), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3382] = 6,
    ACTIONS(461), 1,
      sym__dedent,
    ACTIONS(692), 1,
      sym_blank_line,
    ACTIONS(695), 1,
      sym__comment_start,
    ACTIONS(698), 1,
      sym__line_start,
    STATE(774), 1,
      sym__flow_statement,
    STATE(139), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3402] = 6,
    ACTIONS(445), 1,
      sym__directive_start,
    ACTIONS(549), 1,
      sym__line_start,
    STATE(79), 1,
      sym_directive,
    STATE(103), 1,
      sym_message,
    STATE(511), 1,
      sym__directives,
    STATE(1128), 2,
      sym_messages,
      sym__pass_statement,
  [3422] = 5,
    ACTIONS(703), 1,
      sym_array_suffix,
    ACTIONS(705), 1,
      sym_newline,
    STATE(142), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(701), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3440] = 5,
    ACTIONS(703), 1,
      sym_array_suffix,
    ACTIONS(709), 1,
      sym_newline,
    STATE(143), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(707), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3458] = 5,
    ACTIONS(713), 1,
      sym_array_suffix,
    ACTIONS(716), 1,
      sym_newline,
    STATE(143), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(711), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3476] = 5,
    ACTIONS(720), 1,
      sym__module_doc_start,
    ACTIONS(722), 1,
      sym__item_doc_start,
    ACTIONS(724), 1,
      sym__param_item_doc_start,
    ACTIONS(718), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(815), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3494] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    ACTIONS(728), 1,
      sym_blank_line,
    STATE(111), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3512] = 5,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(732), 1,
      sym_blank_line,
    ACTIONS(734), 1,
      sym__indent,
    ACTIONS(730), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(113), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3530] = 6,
    ACTIONS(618), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    STATE(116), 1,
      sym__flow_statement,
    STATE(127), 1,
      sym_directive,
    STATE(938), 1,
      sym__directives,
    STATE(1177), 2,
      sym_statements,
      sym__pass_statement,
  [3550] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(736), 1,
      sym_blank_line,
    STATE(106), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(347), 1,
      sym__implicit_run_line,
    ACTIONS(478), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3568] = 6,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(547), 1,
      sym__from_start,
    ACTIONS(738), 1,
      sym_blank_line,
    ACTIONS(740), 1,
      sym__dedent,
    STATE(421), 1,
      sym__from_complement,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3588] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(742), 1,
      sym_blank_line,
    ACTIONS(744), 1,
      sym__dedent,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3606] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(575), 1,
      sym_blank_line,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(746), 1,
      sym__dedent,
    STATE(108), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3624] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(746), 1,
      sym__dedent,
    ACTIONS(748), 1,
      sym_blank_line,
    STATE(109), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3642] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(525), 1,
      sym_text_line,
    STATE(610), 1,
      sym_line_end,
    STATE(613), 1,
      sym_text_inline,
    STATE(614), 1,
      sym_text_block,
    STATE(672), 1,
      sym_context_body,
  [3664] = 5,
    ACTIONS(752), 1,
      sym__module_doc_start,
    ACTIONS(754), 1,
      sym__item_doc_start,
    ACTIONS(756), 1,
      sym__param_item_doc_start,
    ACTIONS(750), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(334), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3682] = 5,
    ACTIONS(760), 1,
      sym__module_doc_start,
    ACTIONS(762), 1,
      sym__item_doc_start,
    ACTIONS(764), 1,
      sym__param_item_doc_start,
    ACTIONS(758), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(350), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3700] = 5,
    ACTIONS(768), 1,
      sym__module_doc_start,
    ACTIONS(770), 1,
      sym__item_doc_start,
    ACTIONS(772), 1,
      sym__param_item_doc_start,
    ACTIONS(766), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(365), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3718] = 5,
    ACTIONS(776), 1,
      sym__module_doc_start,
    ACTIONS(778), 1,
      sym__item_doc_start,
    ACTIONS(780), 1,
      sym__param_item_doc_start,
    ACTIONS(774), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(686), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3736] = 5,
    ACTIONS(784), 1,
      sym__module_doc_start,
    ACTIONS(786), 1,
      sym__item_doc_start,
    ACTIONS(788), 1,
      sym__param_item_doc_start,
    ACTIONS(782), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(694), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3754] = 5,
    ACTIONS(792), 1,
      sym__module_doc_start,
    ACTIONS(794), 1,
      sym__item_doc_start,
    ACTIONS(796), 1,
      sym__param_item_doc_start,
    ACTIONS(790), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(838), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3772] = 5,
    ACTIONS(800), 1,
      sym__module_doc_start,
    ACTIONS(802), 1,
      sym__item_doc_start,
    ACTIONS(804), 1,
      sym__param_item_doc_start,
    ACTIONS(798), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(844), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3790] = 5,
    ACTIONS(808), 1,
      sym__module_doc_start,
    ACTIONS(810), 1,
      sym__item_doc_start,
    ACTIONS(812), 1,
      sym__param_item_doc_start,
    ACTIONS(806), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(378), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3808] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(814), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1184), 1,
      sym__repeat_statements,
    STATE(163), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3828] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1196), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3848] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(816), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1199), 1,
      sym__repeat_statements,
    STATE(165), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3868] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(136), 1,
      sym__flow_statement,
    STATE(1075), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3888] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(818), 1,
      sym_blank_line,
    STATE(110), 1,
      aux_sym_unroled_message_repeat1,
    STATE(468), 1,
      sym__unroled_message_line,
    ACTIONS(820), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3906] = 4,
    STATE(717), 1,
      sym_recall_source,
    STATE(874), 1,
      sym_recall_value,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(523), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3922] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(234), 1,
      sym__implicit_run_line,
    ACTIONS(822), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3936] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(826), 1,
      sym_text_line,
    ACTIONS(828), 1,
      sym_newline,
    STATE(92), 1,
      sym_line_end,
    STATE(357), 1,
      sym_text_block,
    STATE(476), 1,
      sym_text_inline,
  [3955] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(708), 1,
      sym_line_end,
    STATE(725), 1,
      sym_text_inline,
  [3974] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(534), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3991] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(649), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4008] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(535), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4025] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(651), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4042] = 6,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(840), 1,
      sym_flow_by_keyword,
    STATE(313), 1,
      sym__named_by_complement,
    STATE(757), 1,
      sym__inline_by_complement,
    STATE(760), 1,
      sym__by_complements,
    STATE(942), 1,
      sym__lanes_complement,
  [4061] = 6,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(842), 1,
      sym_arrow,
    ACTIONS(844), 1,
      sym_colon,
    STATE(104), 1,
      sym__reduce_inline_block,
    STATE(675), 1,
      sym__reduce_inline_line,
    STATE(677), 1,
      sym__named_using_complement,
  [4080] = 6,
    ACTIONS(846), 1,
      sym__inline_comment,
    ACTIONS(848), 1,
      sym_text_line,
    ACTIONS(850), 1,
      sym_newline,
    STATE(119), 1,
      sym_line_end,
    STATE(586), 1,
      sym_text_block,
    STATE(725), 1,
      sym_text_inline,
  [4099] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(397), 1,
      sym__implicit_run_line,
    ACTIONS(482), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4112] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(852), 1,
      sym_text_line,
    STATE(751), 1,
      sym_line_end,
    STATE(802), 1,
      sym_text_block,
    STATE(931), 1,
      sym_text_inline,
  [4131] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(633), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4148] = 4,
    ACTIONS(858), 1,
      sym_blank_line,
    ACTIONS(861), 1,
      sym__comment_start,
    ACTIONS(636), 2,
      sym__dedent,
      sym__line_start,
    STATE(181), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4163] = 1,
    ACTIONS(864), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4172] = 1,
    ACTIONS(866), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4181] = 4,
    ACTIONS(868), 1,
      sym_array_suffix,
    STATE(184), 1,
      aux_sym_type_repeat1,
    STATE(676), 1,
      sym_type_suffix,
    ACTIONS(716), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4196] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(550), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4213] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(531), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4230] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(536), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4247] = 6,
    ACTIONS(846), 1,
      sym__inline_comment,
    ACTIONS(850), 1,
      sym_newline,
    ACTIONS(871), 1,
      sym_text_line,
    STATE(123), 1,
      sym_line_end,
    STATE(519), 1,
      sym_text_inline,
    STATE(586), 1,
      sym_text_block,
  [4266] = 6,
    ACTIONS(873), 1,
      sym_arrow,
    ACTIONS(875), 1,
      sym_colon,
    ACTIONS(877), 1,
      sym_lparen,
    ACTIONS(879), 1,
      sym_snake_name,
    STATE(513), 1,
      sym_agic_name,
    STATE(985), 1,
      sym_params,
  [4285] = 4,
    ACTIONS(881), 1,
      sym_array_suffix,
    STATE(205), 1,
      aux_sym_type_repeat1,
    STATE(676), 1,
      sym_type_suffix,
    ACTIONS(705), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4300] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(357), 1,
      sym_text_block,
    STATE(476), 1,
      sym_text_inline,
    STATE(753), 1,
      sym_line_end,
  [4319] = 6,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(883), 1,
      sym_arrow,
    ACTIONS(885), 1,
      sym_colon,
    STATE(149), 1,
      sym__reduce_inline_block,
    STATE(460), 1,
      sym__reduce_inline_line,
    STATE(718), 1,
      sym__named_using_complement,
  [4338] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(175), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(887), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4353] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(549), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4370] = 6,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(889), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(891), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
    STATE(238), 1,
      sym_line_end,
  [4389] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(240), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
    STATE(753), 1,
      sym_line_end,
  [4408] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(486), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4425] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(681), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4442] = 6,
    ACTIONS(351), 1,
      sym_flow_in_keyword,
    ACTIONS(893), 1,
      sym_flow_by_keyword,
    STATE(252), 1,
      sym__inline_by_complement,
    STATE(253), 1,
      sym__by_complements,
    STATE(424), 1,
      sym__named_by_complement,
    STATE(895), 1,
      sym__lanes_complement,
  [4461] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(551), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4478] = 6,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(895), 1,
      sym__other_integer_literal,
    ACTIONS(897), 1,
      sym_flow_windowing_keyword,
    ACTIONS(899), 1,
      sym_colon,
    STATE(851), 1,
      sym__repeat_count_complement,
    STATE(1185), 1,
      sym__window_complement,
  [4497] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(901), 1,
      sym_blank_line,
    ACTIONS(903), 1,
      sym__indent,
    STATE(277), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4514] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(706), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4531] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(721), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4548] = 4,
    ACTIONS(881), 1,
      sym_array_suffix,
    STATE(184), 1,
      aux_sym_type_repeat1,
    STATE(676), 1,
      sym_type_suffix,
    ACTIONS(709), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4563] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(281), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
    STATE(753), 1,
      sym_line_end,
  [4582] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(418), 1,
      sym__unroled_message_line,
    ACTIONS(905), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4595] = 6,
    ACTIONS(846), 1,
      sym__inline_comment,
    ACTIONS(850), 1,
      sym_newline,
    ACTIONS(907), 1,
      sym_text_line,
    STATE(126), 1,
      sym_line_end,
    STATE(519), 1,
      sym_text_inline,
    STATE(586), 1,
      sym_text_block,
  [4614] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(901), 1,
      sym_blank_line,
    ACTIONS(903), 1,
      sym__indent,
    STATE(290), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4631] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(901), 1,
      sym_blank_line,
    ACTIONS(903), 1,
      sym__indent,
    STATE(291), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4648] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(909), 1,
      sym_text_line,
    STATE(97), 1,
      sym_line_end,
    STATE(357), 1,
      sym_text_block,
    STATE(476), 1,
      sym_text_inline,
  [4667] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(525), 1,
      sym_text_line,
    STATE(610), 1,
      sym_line_end,
    STATE(614), 1,
      sym_text_block,
    STATE(799), 1,
      sym_text_inline,
  [4686] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(901), 1,
      sym_blank_line,
    ACTIONS(903), 1,
      sym__indent,
    STATE(303), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4703] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(911), 1,
      sym_text_line,
    STATE(99), 1,
      sym_line_end,
    STATE(281), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
  [4722] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(913), 1,
      sym_text_line,
    STATE(69), 1,
      sym_line_end,
    STATE(281), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
  [4741] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(656), 1,
      sym_text_inline,
    STATE(708), 1,
      sym_line_end,
  [4760] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(418), 1,
      sym__unroled_message_line,
    ACTIONS(820), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4773] = 6,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(891), 1,
      anon_sym_EQ,
    ACTIONS(915), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(7), 1,
      sym_assign_operator,
    STATE(733), 1,
      sym_line_end,
  [4792] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(917), 1,
      sym_blank_line,
    ACTIONS(919), 1,
      sym__indent,
    STATE(487), 1,
      sym_struct_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4809] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(708), 1,
      sym_line_end,
    STATE(736), 1,
      sym_text_inline,
  [4828] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(510), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4845] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(607), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4862] = 6,
    ACTIONS(846), 1,
      sym__inline_comment,
    ACTIONS(850), 1,
      sym_newline,
    ACTIONS(921), 1,
      sym_text_line,
    STATE(115), 1,
      sym_line_end,
    STATE(586), 1,
      sym_text_block,
    STATE(725), 1,
      sym_text_inline,
  [4881] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(746), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4898] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(397), 1,
      sym__implicit_run_line,
    ACTIONS(822), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4911] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(199), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(887), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4926] = 6,
    ACTIONS(877), 1,
      sym_lparen,
    ACTIONS(923), 1,
      sym_arrow,
    ACTIONS(925), 1,
      sym_colon,
    ACTIONS(927), 1,
      sym_snake_name,
    STATE(562), 1,
      sym_flow_name,
    STATE(1027), 1,
      sym_params,
  [4945] = 1,
    ACTIONS(929), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4954] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(593), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4971] = 1,
    ACTIONS(931), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4980] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(519), 1,
      sym_text_inline,
    STATE(586), 1,
      sym_text_block,
    STATE(708), 1,
      sym_line_end,
  [4999] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(586), 1,
      sym_text_block,
    STATE(708), 1,
      sym_line_end,
    STATE(715), 1,
      sym_text_inline,
  [5018] = 6,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(895), 1,
      sym__other_integer_literal,
    ACTIONS(897), 1,
      sym_flow_windowing_keyword,
    ACTIONS(933), 1,
      sym_colon,
    STATE(962), 1,
      sym__repeat_count_complement,
    STATE(1203), 1,
      sym__window_complement,
  [5037] = 1,
    ACTIONS(935), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [5046] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(609), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5063] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(854), 1,
      sym_blank_line,
    ACTIONS(856), 1,
      sym__indent,
    STATE(707), 1,
      sym_flow_body,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5080] = 1,
    ACTIONS(937), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5088] = 1,
    ACTIONS(939), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5096] = 1,
    ACTIONS(941), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5104] = 1,
    ACTIONS(943), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5112] = 1,
    ACTIONS(945), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5120] = 1,
    ACTIONS(947), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(949), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(951), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(953), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(955), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 1,
    ACTIONS(957), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5168] = 1,
    ACTIONS(959), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5176] = 1,
    ACTIONS(961), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(963), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 1,
    ACTIONS(965), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5200] = 1,
    ACTIONS(967), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5208] = 1,
    ACTIONS(969), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5216] = 1,
    ACTIONS(971), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5224] = 1,
    ACTIONS(973), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5232] = 1,
    ACTIONS(975), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5240] = 5,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(977), 1,
      sym_colon,
    ACTIONS(979), 1,
      sym_text_line,
    STATE(537), 1,
      sym_line_end,
  [5256] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(658), 1,
      sym_inline_agic,
    STATE(794), 1,
      sym_runnable,
  [5272] = 4,
    ACTIONS(983), 1,
      sym_blank_line,
    ACTIONS(985), 1,
      sym__comment_start,
    ACTIONS(987), 1,
      sym__reduce_indent,
    STATE(429), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5286] = 1,
    ACTIONS(989), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5294] = 1,
    ACTIONS(991), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(993), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(995), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(997), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(999), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(1001), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1003), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1005), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1007), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(1009), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1011), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1013), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1015), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(1017), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1019), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5414] = 1,
    ACTIONS(1021), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(1023), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 1,
    ACTIONS(503), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1025), 1,
      sym_blank_line,
    ACTIONS(1027), 1,
      sym__dedent,
    STATE(430), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5452] = 1,
    ACTIONS(1029), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5460] = 1,
    ACTIONS(1031), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5468] = 1,
    ACTIONS(1033), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5476] = 1,
    ACTIONS(1035), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5484] = 1,
    ACTIONS(1037), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5492] = 1,
    ACTIONS(1039), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5500] = 1,
    ACTIONS(1041), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5508] = 1,
    ACTIONS(1043), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5516] = 1,
    ACTIONS(1045), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5524] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5532] = 1,
    ACTIONS(1049), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5540] = 1,
    ACTIONS(1051), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5548] = 1,
    ACTIONS(517), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5556] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5564] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1057), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5578] = 1,
    ACTIONS(1059), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5586] = 1,
    ACTIONS(1061), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5594] = 1,
    ACTIONS(1063), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5602] = 1,
    ACTIONS(1065), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5610] = 1,
    ACTIONS(1067), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5618] = 1,
    ACTIONS(1069), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5626] = 4,
    ACTIONS(985), 1,
      sym__comment_start,
    ACTIONS(1071), 1,
      sym_blank_line,
    ACTIONS(1073), 1,
      sym__reduce_indent,
    STATE(389), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5640] = 1,
    ACTIONS(1075), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5648] = 1,
    ACTIONS(1077), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5656] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(507), 1,
      sym_inline_agic,
    STATE(806), 1,
      sym_runnable,
  [5672] = 1,
    ACTIONS(519), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5680] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5688] = 1,
    ACTIONS(1079), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5696] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1083), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5710] = 1,
    ACTIONS(1085), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5718] = 1,
    ACTIONS(1087), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5726] = 1,
    ACTIONS(1089), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5734] = 1,
    ACTIONS(1091), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5742] = 5,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(1093), 1,
      sym_flow_in_keyword,
    STATE(508), 1,
      sym_line_end,
    STATE(775), 1,
      sym__lanes_complement,
  [5758] = 1,
    ACTIONS(1095), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5766] = 1,
    ACTIONS(1097), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5774] = 1,
    ACTIONS(1099), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5782] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5790] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(661), 1,
      sym_inline_agic,
    STATE(797), 1,
      sym_runnable,
  [5806] = 1,
    ACTIONS(406), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5814] = 1,
    ACTIONS(1101), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5822] = 1,
    ACTIONS(1103), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5830] = 1,
    ACTIONS(1105), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5838] = 1,
    ACTIONS(1107), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5846] = 1,
    ACTIONS(1109), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5854] = 1,
    ACTIONS(1111), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5862] = 1,
    ACTIONS(1113), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5870] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5878] = 1,
    ACTIONS(1115), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5886] = 1,
    ACTIONS(1117), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5894] = 1,
    ACTIONS(1119), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5902] = 1,
    ACTIONS(1121), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5910] = 1,
    ACTIONS(1123), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5918] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5926] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5934] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5942] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5950] = 2,
    ACTIONS(1135), 1,
      sym_newline,
    ACTIONS(1133), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5960] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5968] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5976] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5984] = 2,
    ACTIONS(1145), 1,
      sym_newline,
    ACTIONS(1143), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5994] = 5,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(1147), 1,
      sym__until_start,
    STATE(76), 1,
      sym__flow_statement,
    STATE(122), 1,
      sym_until_clause,
    STATE(944), 1,
      sym__repeat_statements,
  [6010] = 2,
    ACTIONS(1151), 1,
      sym_newline,
    ACTIONS(1149), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6020] = 2,
    ACTIONS(1155), 1,
      sym_newline,
    ACTIONS(1153), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6030] = 2,
    ACTIONS(1159), 1,
      sym_newline,
    ACTIONS(1157), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6040] = 2,
    ACTIONS(1163), 1,
      sym_newline,
    ACTIONS(1161), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6050] = 1,
    ACTIONS(931), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6058] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1167), 1,
      sym__dedent,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6072] = 4,
    ACTIONS(636), 1,
      sym__dedent,
    ACTIONS(1171), 1,
      sym_blank_line,
    ACTIONS(1174), 1,
      sym__comment_start,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6086] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6094] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6102] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6110] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6118] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6126] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6134] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6142] = 1,
    ACTIONS(1177), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6150] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6158] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6166] = 1,
    ACTIONS(1179), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6174] = 4,
    ACTIONS(636), 1,
      sym__reduce_indent,
    ACTIONS(1181), 1,
      sym_blank_line,
    ACTIONS(1184), 1,
      sym__comment_start,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6188] = 1,
    ACTIONS(1187), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6196] = 1,
    ACTIONS(1189), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6204] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1191), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6218] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6226] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6234] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6242] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6250] = 1,
    ACTIONS(1193), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6258] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6266] = 4,
    ACTIONS(636), 1,
      sym__line_start,
    ACTIONS(1195), 1,
      sym_blank_line,
    ACTIONS(1198), 1,
      sym__comment_start,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6280] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6288] = 5,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1201), 1,
      sym_colon,
    ACTIONS(1203), 1,
      sym_text_line,
    STATE(552), 1,
      sym_line_end,
  [6304] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6312] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6320] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6328] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6336] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6344] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6352] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6360] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6368] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6376] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6384] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6392] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6400] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6408] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6416] = 5,
    ACTIONS(1205), 1,
      sym__inline_comment,
    ACTIONS(1207), 1,
      sym_text_line,
    ACTIONS(1209), 1,
      sym_newline,
    STATE(259), 1,
      sym_line_end,
    STATE(743), 1,
      sym__reduce_line,
  [6432] = 4,
    ACTIONS(985), 1,
      sym__comment_start,
    ACTIONS(1211), 1,
      sym_blank_line,
    ACTIONS(1213), 1,
      sym__reduce_indent,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6446] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1215), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6460] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1217), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6474] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1219), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6488] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1221), 1,
      sym_blank_line,
    ACTIONS(1223), 1,
      sym__dedent,
    STATE(407), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6502] = 4,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1227), 1,
      sym_newline,
    STATE(795), 1,
      sym_local_name,
    ACTIONS(1225), 2,
      sym__inline_comment,
      sym_text_line,
  [6516] = 1,
    ACTIONS(1229), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6524] = 5,
    ACTIONS(1231), 1,
      anon_sym__,
    ACTIONS(1233), 1,
      sym_rparen,
    ACTIONS(1235), 1,
      sym__variable_name,
    STATE(635), 1,
      sym_param_name,
    STATE(781), 1,
      sym_param,
  [6540] = 1,
    ACTIONS(935), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6548] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1237), 1,
      sym_snake_name,
    STATE(474), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [6562] = 1,
    ACTIONS(1239), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6570] = 1,
    ACTIONS(929), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6578] = 4,
    ACTIONS(636), 1,
      sym__indent,
    ACTIONS(1241), 1,
      sym_blank_line,
    ACTIONS(1244), 1,
      sym__comment_start,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6592] = 5,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(749), 1,
      sym_inline_agic,
    STATE(933), 1,
      sym__named_using_complement,
  [6608] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(452), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym_runnable,
  [6624] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(456), 1,
      sym_inline_agic,
    STATE(870), 1,
      sym_runnable,
  [6640] = 1,
    ACTIONS(1247), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6648] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1249), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6662] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1251), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6676] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1253), 1,
      sym_blank_line,
    ACTIONS(1255), 1,
      sym__dedent,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6690] = 1,
    ACTIONS(1257), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6698] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(239), 1,
      sym_inline_agic,
    STATE(890), 1,
      sym_runnable,
  [6714] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(750), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
  [6730] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1259), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6744] = 5,
    ACTIONS(1205), 1,
      sym__inline_comment,
    ACTIONS(1209), 1,
      sym_newline,
    ACTIONS(1261), 1,
      sym_text_line,
    STATE(242), 1,
      sym__reduce_line,
    STATE(259), 1,
      sym_line_end,
  [6760] = 4,
    ACTIONS(1263), 1,
      sym_blank_line,
    ACTIONS(1266), 1,
      sym__dedent,
    ACTIONS(1268), 1,
      sym_indented_raw_text,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6774] = 5,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(246), 1,
      sym_inline_agic,
    STATE(892), 1,
      sym__named_using_complement,
  [6790] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(247), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
  [6806] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1093), 1,
      sym_flow_in_keyword,
    STATE(248), 1,
      sym_line_end,
    STATE(893), 1,
      sym__lanes_complement,
  [6822] = 1,
    ACTIONS(1271), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6830] = 5,
    ACTIONS(1205), 1,
      sym__inline_comment,
    ACTIONS(1207), 1,
      sym_text_line,
    ACTIONS(1209), 1,
      sym_newline,
    STATE(301), 1,
      sym_line_end,
    STATE(527), 1,
      sym__reduce_line,
  [6846] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1273), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6860] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1275), 1,
      sym_blank_line,
    ACTIONS(1277), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6874] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1279), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6888] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(274), 1,
      sym_inline_agic,
    STATE(806), 1,
      sym_runnable,
  [6904] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1093), 1,
      sym_flow_in_keyword,
    STATE(275), 1,
      sym_line_end,
    STATE(907), 1,
      sym__lanes_complement,
  [6920] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1281), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6934] = 4,
    ACTIONS(1283), 1,
      sym_array_suffix,
    STATE(427), 1,
      aux_sym_type_repeat1,
    STATE(852), 1,
      sym_type_suffix,
    ACTIONS(705), 2,
      sym_newline,
      sym__inline_comment,
  [6948] = 4,
    ACTIONS(1283), 1,
      sym_array_suffix,
    STATE(428), 1,
      aux_sym_type_repeat1,
    STATE(852), 1,
      sym_type_suffix,
    ACTIONS(709), 2,
      sym_newline,
      sym__inline_comment,
  [6962] = 4,
    ACTIONS(1285), 1,
      sym_array_suffix,
    STATE(428), 1,
      aux_sym_type_repeat1,
    STATE(852), 1,
      sym_type_suffix,
    ACTIONS(716), 2,
      sym_newline,
      sym__inline_comment,
  [6976] = 4,
    ACTIONS(985), 1,
      sym__comment_start,
    ACTIONS(1211), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__reduce_indent,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6990] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1290), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7004] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1292), 1,
      sym_blank_line,
    ACTIONS(1294), 1,
      sym__indent,
    STATE(308), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7018] = 5,
    ACTIONS(1205), 1,
      sym__inline_comment,
    ACTIONS(1209), 1,
      sym_newline,
    ACTIONS(1261), 1,
      sym_text_line,
    STATE(285), 1,
      sym__reduce_line,
    STATE(301), 1,
      sym_line_end,
  [7034] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7048] = 1,
    ACTIONS(1298), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7056] = 1,
    ACTIONS(1300), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7064] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1302), 1,
      sym_colon,
    ACTIONS(1304), 1,
      sym_text_line,
    STATE(292), 1,
      sym_line_end,
  [7080] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1306), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7094] = 1,
    ACTIONS(1300), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7102] = 1,
    ACTIONS(1300), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7110] = 1,
    ACTIONS(1308), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7118] = 1,
    ACTIONS(1310), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7126] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1312), 1,
      sym_colon,
    ACTIONS(1314), 1,
      sym_text_line,
    STATE(305), 1,
      sym_line_end,
  [7142] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1316), 1,
      sym_blank_line,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(446), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7156] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7170] = 1,
    ACTIONS(1322), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7178] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7192] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1326), 1,
      sym_blank_line,
    ACTIONS(1328), 1,
      sym__dedent,
    STATE(451), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7206] = 5,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(1147), 1,
      sym__until_start,
    STATE(76), 1,
      sym__flow_statement,
    STATE(118), 1,
      sym_until_clause,
    STATE(812), 1,
      sym__repeat_statements,
  [7222] = 1,
    ACTIONS(1330), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7230] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1332), 1,
      sym_blank_line,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7244] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1055), 1,
      sym_blank_line,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7258] = 1,
    ACTIONS(1338), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7266] = 1,
    ACTIONS(1340), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7274] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7288] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7302] = 1,
    ACTIONS(1346), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7310] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1348), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7324] = 4,
    ACTIONS(1165), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1350), 1,
      sym__dedent,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7338] = 1,
    ACTIONS(1352), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7346] = 1,
    ACTIONS(1354), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7354] = 1,
    ACTIONS(1356), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7362] = 1,
    ACTIONS(1358), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7370] = 1,
    ACTIONS(1360), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7378] = 1,
    ACTIONS(1362), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7386] = 4,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1227), 1,
      sym_newline,
    STATE(868), 1,
      sym_local_name,
    ACTIONS(1225), 2,
      sym__inline_comment,
      sym_text_line,
  [7400] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1237), 1,
      sym_snake_name,
    STATE(410), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7414] = 1,
    ACTIONS(1364), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7422] = 1,
    ACTIONS(1366), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7430] = 5,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(1147), 1,
      sym__until_start,
    STATE(76), 1,
      sym__flow_statement,
    STATE(162), 1,
      sym_until_clause,
    STATE(916), 1,
      sym__repeat_statements,
  [7446] = 1,
    ACTIONS(1368), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7454] = 5,
    ACTIONS(433), 1,
      sym__line_start,
    ACTIONS(1147), 1,
      sym__until_start,
    STATE(76), 1,
      sym__flow_statement,
    STATE(164), 1,
      sym_until_clause,
    STATE(926), 1,
      sym__repeat_statements,
  [7470] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1370), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7484] = 5,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(1093), 1,
      sym_flow_in_keyword,
    STATE(752), 1,
      sym_line_end,
    STATE(939), 1,
      sym__lanes_complement,
  [7500] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(735), 1,
      sym_inline_agic,
    STATE(909), 1,
      sym_runnable,
  [7516] = 1,
    ACTIONS(1372), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7524] = 1,
    ACTIONS(1374), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7532] = 1,
    ACTIONS(1376), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7540] = 1,
    ACTIONS(1378), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7548] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1380), 1,
      sym_blank_line,
    ACTIONS(1382), 1,
      sym__indent,
    STATE(481), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7562] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1384), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7576] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1386), 1,
      sym__indent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7590] = 1,
    ACTIONS(1388), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7598] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7606] = 1,
    ACTIONS(1390), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7613] = 1,
    ACTIONS(1392), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7620] = 1,
    ACTIONS(1394), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7627] = 1,
    ACTIONS(1396), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7634] = 1,
    ACTIONS(1398), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7641] = 1,
    ACTIONS(1400), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7648] = 3,
    ACTIONS(1404), 1,
      sym_comma,
    STATE(517), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1402), 2,
      sym_newline,
      sym__inline_comment,
  [7659] = 3,
    ACTIONS(1408), 1,
      sym_comma,
    STATE(518), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1406), 2,
      sym_newline,
      sym__inline_comment,
  [7670] = 1,
    ACTIONS(1410), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7677] = 1,
    ACTIONS(991), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7684] = 1,
    ACTIONS(993), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7691] = 1,
    ACTIONS(995), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7698] = 1,
    ACTIONS(997), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7705] = 1,
    ACTIONS(999), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7712] = 1,
    ACTIONS(1001), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7719] = 1,
    ACTIONS(1003), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7726] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1412), 1,
      sym_blank_line,
    STATE(425), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7737] = 1,
    ACTIONS(1005), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7744] = 1,
    ACTIONS(1007), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7751] = 1,
    ACTIONS(1009), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7758] = 1,
    ACTIONS(1011), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7765] = 1,
    ACTIONS(1013), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7772] = 1,
    ACTIONS(1015), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7779] = 1,
    ACTIONS(1017), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7786] = 1,
    ACTIONS(1019), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7793] = 1,
    ACTIONS(1021), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7800] = 1,
    ACTIONS(1023), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7807] = 4,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(1414), 1,
      sym__dedent,
    STATE(103), 1,
      sym_message,
    STATE(1088), 1,
      sym_messages,
  [7820] = 1,
    ACTIONS(503), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7827] = 4,
    ACTIONS(877), 1,
      sym_lparen,
    ACTIONS(1416), 1,
      sym_arrow,
    ACTIONS(1418), 1,
      sym_colon,
    STATE(1003), 1,
      sym_params,
  [7840] = 1,
    ACTIONS(1029), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7847] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(979), 1,
      sym_text_line,
    STATE(539), 1,
      sym_line_end,
  [7860] = 1,
    ACTIONS(1420), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7867] = 3,
    ACTIONS(1424), 1,
      sym_comma,
    STATE(517), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1422), 2,
      sym_newline,
      sym__inline_comment,
  [7878] = 3,
    ACTIONS(1429), 1,
      sym_comma,
    STATE(518), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1427), 2,
      sym_newline,
      sym__inline_comment,
  [7889] = 1,
    ACTIONS(1031), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7896] = 1,
    ACTIONS(1033), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7903] = 1,
    ACTIONS(1035), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7910] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1432), 1,
      sym_text_line,
    STATE(541), 1,
      sym_line_end,
  [7923] = 1,
    ACTIONS(1037), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7930] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1434), 1,
      sym_text_line,
    STATE(542), 1,
      sym_line_end,
  [7943] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1436), 1,
      sym_text_line,
    STATE(544), 1,
      sym_line_end,
  [7956] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1438), 1,
      sym_text_line,
    STATE(545), 1,
      sym_line_end,
  [7969] = 1,
    ACTIONS(1039), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7976] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1440), 1,
      sym_blank_line,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7987] = 1,
    ACTIONS(1442), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7994] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8001] = 1,
    ACTIONS(1444), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8008] = 1,
    ACTIONS(1043), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8015] = 1,
    ACTIONS(1045), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8022] = 1,
    ACTIONS(1049), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8029] = 1,
    ACTIONS(1051), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8036] = 1,
    ACTIONS(1446), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8043] = 1,
    ACTIONS(517), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8050] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8057] = 1,
    ACTIONS(1059), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8064] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8071] = 1,
    ACTIONS(1061), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8078] = 1,
    ACTIONS(1063), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8085] = 1,
    ACTIONS(1065), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8092] = 1,
    ACTIONS(1067), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8099] = 1,
    ACTIONS(1069), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8106] = 1,
    ACTIONS(1450), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8113] = 4,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(1452), 1,
      sym_colon,
    STATE(787), 1,
      sym_inline_agic_body,
    STATE(788), 1,
      sym_runnable,
  [8126] = 1,
    ACTIONS(1075), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8133] = 1,
    ACTIONS(1454), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8140] = 1,
    ACTIONS(1077), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8147] = 1,
    ACTIONS(1456), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8154] = 1,
    ACTIONS(519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8161] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8168] = 1,
    ACTIONS(1079), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8175] = 1,
    ACTIONS(937), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8182] = 1,
    ACTIONS(1085), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8189] = 1,
    ACTIONS(1087), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8196] = 1,
    ACTIONS(1089), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8203] = 1,
    ACTIONS(1458), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8210] = 1,
    ACTIONS(1460), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8217] = 1,
    ACTIONS(1091), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8224] = 4,
    ACTIONS(877), 1,
      sym_lparen,
    ACTIONS(1462), 1,
      sym_arrow,
    ACTIONS(1464), 1,
      sym_colon,
    STATE(988), 1,
      sym_params,
  [8237] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8244] = 1,
    ACTIONS(1095), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8251] = 1,
    ACTIONS(1097), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8258] = 1,
    ACTIONS(1099), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8265] = 1,
    ACTIONS(1466), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8272] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8279] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1468), 1,
      sym_blank_line,
    STATE(437), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8290] = 1,
    ACTIONS(406), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8297] = 1,
    ACTIONS(1470), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8304] = 1,
    ACTIONS(1101), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8311] = 1,
    ACTIONS(1103), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8318] = 1,
    ACTIONS(1105), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8325] = 1,
    ACTIONS(1107), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8332] = 1,
    ACTIONS(1109), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8339] = 1,
    ACTIONS(1111), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8346] = 1,
    ACTIONS(1113), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8353] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8360] = 1,
    ACTIONS(1115), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8367] = 1,
    ACTIONS(1117), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8374] = 1,
    ACTIONS(1119), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8381] = 1,
    ACTIONS(1121), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8388] = 1,
    ACTIONS(1123), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8395] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8402] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8409] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8416] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8423] = 1,
    ACTIONS(1179), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8430] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8437] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8444] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8451] = 1,
    ACTIONS(1472), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8458] = 1,
    ACTIONS(1189), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8465] = 2,
    ACTIONS(1476), 1,
      sym_newline,
    ACTIONS(1474), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [8474] = 4,
    ACTIONS(1478), 1,
      sym__inline_comment,
    ACTIONS(1480), 1,
      sym_text_line,
    ACTIONS(1482), 1,
      sym_newline,
    STATE(450), 1,
      sym_line_end,
  [8487] = 1,
    ACTIONS(1484), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8494] = 3,
    ACTIONS(1486), 1,
      sym_colon,
    ACTIONS(1488), 1,
      sym_newline,
    ACTIONS(1480), 2,
      sym__inline_comment,
      sym_text_line,
  [8505] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_text_line,
    STATE(642), 1,
      sym_line_end,
  [8518] = 2,
    STATE(977), 1,
      sym_directive_op,
    ACTIONS(1492), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8527] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(662), 1,
      sym__cap_definition,
  [8540] = 1,
    ACTIONS(1498), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8547] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(663), 1,
      sym__cap_definition,
  [8560] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(664), 1,
      sym__cap_definition,
  [8573] = 4,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(1500), 1,
      sym__dedent,
    STATE(103), 1,
      sym_message,
    STATE(1077), 1,
      sym_messages,
  [8586] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(665), 1,
      sym__cap_definition,
  [8599] = 1,
    ACTIONS(1502), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8606] = 1,
    ACTIONS(1504), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8613] = 1,
    ACTIONS(1506), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8620] = 4,
    ACTIONS(1508), 1,
      sym_blank_line,
    ACTIONS(1510), 1,
      sym__text_indent,
    STATE(671), 1,
      sym_text_body,
    STATE(808), 1,
      aux_sym_text_body_repeat1,
  [8633] = 3,
    ACTIONS(1227), 1,
      sym_newline,
    ACTIONS(1512), 1,
      sym_flow_run_keyword,
    ACTIONS(1225), 2,
      sym__inline_comment,
      sym_text_line,
  [8644] = 1,
    ACTIONS(1514), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8651] = 1,
    ACTIONS(1516), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8658] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8665] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8672] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1520), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8683] = 3,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(1522), 1,
      sym_integer_literal,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [8694] = 1,
    ACTIONS(1524), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8701] = 1,
    ACTIONS(1145), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8708] = 1,
    ACTIONS(1151), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8715] = 1,
    ACTIONS(1298), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8722] = 1,
    ACTIONS(1300), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8729] = 1,
    ACTIONS(1247), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8736] = 1,
    ACTIONS(1257), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8743] = 1,
    ACTIONS(1300), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8750] = 1,
    ACTIONS(1300), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8757] = 1,
    ACTIONS(1308), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8764] = 1,
    ACTIONS(1155), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8771] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1526), 1,
      sym_text_line,
    STATE(704), 1,
      sym_line_end,
  [8784] = 1,
    ACTIONS(1528), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8791] = 1,
    ACTIONS(1530), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8798] = 1,
    ACTIONS(1532), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8805] = 1,
    ACTIONS(1534), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8812] = 1,
    ACTIONS(1536), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8819] = 3,
    ACTIONS(1538), 1,
      sym_optional_marker,
    ACTIONS(1540), 1,
      sym_colon,
    ACTIONS(1542), 2,
      sym_rparen,
      sym_comma,
  [8830] = 1,
    ACTIONS(1544), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8837] = 1,
    ACTIONS(1546), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8844] = 1,
    ACTIONS(1548), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8851] = 1,
    ACTIONS(1189), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8858] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(146), 1,
      sym_line_end,
    STATE(484), 1,
      sym_job_body,
  [8871] = 4,
    ACTIONS(1494), 1,
      sym__inline_comment,
    ACTIONS(1496), 1,
      sym_newline,
    STATE(146), 1,
      sym_line_end,
    STATE(734), 1,
      sym_job_body,
  [8884] = 1,
    ACTIONS(1550), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8891] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8900] = 1,
    ACTIONS(989), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8907] = 2,
    STATE(874), 1,
      sym_text_ref,
    ACTIONS(1552), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8916] = 4,
    ACTIONS(1554), 1,
      sym_runnable_ref,
    ACTIONS(1556), 1,
      sym_none_keyword,
    ACTIONS(1558), 1,
      sym_all_keyword,
    STATE(873), 1,
      sym_route_value,
  [8929] = 1,
    ACTIONS(1560), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8936] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8943] = 1,
    ACTIONS(1562), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8950] = 1,
    ACTIONS(1564), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8957] = 1,
    ACTIONS(1566), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8964] = 1,
    ACTIONS(1568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8971] = 1,
    ACTIONS(1570), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8978] = 1,
    ACTIONS(1572), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8985] = 1,
    ACTIONS(1574), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8992] = 1,
    ACTIONS(1576), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8999] = 1,
    ACTIONS(1578), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9006] = 1,
    ACTIONS(1338), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9013] = 2,
    ACTIONS(1582), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1580), 3,
      sym_newline,
      sym__inline_comment,
      anon_sym_EQ,
  [9022] = 1,
    ACTIONS(1340), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9029] = 1,
    ACTIONS(1346), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9036] = 1,
    ACTIONS(1584), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9043] = 1,
    ACTIONS(1586), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9050] = 1,
    ACTIONS(1588), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9057] = 1,
    ACTIONS(1590), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9064] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9071] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9078] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1592), 1,
      sym_blank_line,
    STATE(348), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9089] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9096] = 1,
    ACTIONS(1352), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9103] = 1,
    ACTIONS(1179), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9110] = 1,
    ACTIONS(1594), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9117] = 1,
    ACTIONS(1596), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9124] = 1,
    ACTIONS(1159), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9131] = 1,
    ACTIONS(1354), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9138] = 1,
    ACTIONS(1163), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9145] = 4,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(1598), 1,
      sym_colon,
    STATE(747), 1,
      sym_line_end,
  [9158] = 1,
    ACTIONS(1356), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9165] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9172] = 1,
    ACTIONS(1358), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9179] = 1,
    ACTIONS(1600), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9186] = 1,
    ACTIONS(1360), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9193] = 1,
    ACTIONS(1362), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9200] = 1,
    ACTIONS(1364), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9207] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9214] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9221] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9228] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9235] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9242] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9249] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9256] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9263] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9270] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9277] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9284] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9291] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9298] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9305] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9312] = 1,
    ACTIONS(1368), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9319] = 4,
    ACTIONS(1231), 1,
      anon_sym__,
    ACTIONS(1235), 1,
      sym__variable_name,
    STATE(635), 1,
      sym_param_name,
    STATE(1020), 1,
      sym_param,
  [9332] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9339] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9346] = 1,
    ACTIONS(1372), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9353] = 1,
    ACTIONS(1602), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9360] = 1,
    ACTIONS(1604), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9367] = 1,
    ACTIONS(1606), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9374] = 4,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(589), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
  [9387] = 1,
    ACTIONS(1608), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9394] = 1,
    ACTIONS(1610), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9401] = 1,
    ACTIONS(1612), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9408] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1614), 1,
      sym_text_line,
    STATE(475), 1,
      sym_line_end,
  [9421] = 1,
    ACTIONS(1616), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9428] = 1,
    ACTIONS(1135), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9435] = 1,
    ACTIONS(1618), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9442] = 1,
    ACTIONS(1620), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9449] = 3,
    ACTIONS(1404), 1,
      sym_comma,
    STATE(490), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1622), 2,
      sym_newline,
      sym__inline_comment,
  [9460] = 4,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1624), 1,
      sym_colon,
    STATE(244), 1,
      sym_line_end,
  [9473] = 3,
    ACTIONS(1408), 1,
      sym_comma,
    STATE(491), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1626), 2,
      sym_newline,
      sym__inline_comment,
  [9484] = 1,
    ACTIONS(1628), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9491] = 1,
    ACTIONS(1630), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9498] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1632), 1,
      sym_text_line,
    STATE(261), 1,
      sym_line_end,
  [9511] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1634), 1,
      sym_text_line,
    STATE(262), 1,
      sym_line_end,
  [9524] = 1,
    ACTIONS(1636), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9531] = 1,
    ACTIONS(1374), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9538] = 1,
    ACTIONS(1376), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9545] = 1,
    ACTIONS(1378), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9552] = 1,
    ACTIONS(1388), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9559] = 1,
    ACTIONS(1193), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9566] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1638), 1,
      sym_text_line,
    STATE(493), 1,
      sym_line_end,
  [9579] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(377), 1,
      sym_text_line,
    STATE(278), 1,
      sym_line_end,
  [9592] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1640), 1,
      sym_text_line,
    STATE(494), 1,
      sym_line_end,
  [9605] = 1,
    ACTIONS(939), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9612] = 1,
    ACTIONS(1642), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9619] = 1,
    ACTIONS(941), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9626] = 1,
    ACTIONS(943), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9633] = 1,
    ACTIONS(945), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9640] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1304), 1,
      sym_text_line,
    STATE(295), 1,
      sym_line_end,
  [9653] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1644), 1,
      sym_text_line,
    STATE(296), 1,
      sym_line_end,
  [9666] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1646), 1,
      sym_text_line,
    STATE(297), 1,
      sym_line_end,
  [9679] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1648), 1,
      sym_text_line,
    STATE(299), 1,
      sym_line_end,
  [9692] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1650), 1,
      sym_text_line,
    STATE(300), 1,
      sym_line_end,
  [9705] = 1,
    ACTIONS(947), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9712] = 1,
    ACTIONS(949), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9719] = 4,
    ACTIONS(981), 1,
      sym_snake_name,
    ACTIONS(1652), 1,
      sym_colon,
    STATE(650), 1,
      sym_inline_agic_body,
    STATE(930), 1,
      sym_runnable,
  [9732] = 1,
    ACTIONS(1654), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9739] = 1,
    ACTIONS(951), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9746] = 1,
    ACTIONS(953), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9753] = 1,
    ACTIONS(955), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9760] = 1,
    ACTIONS(957), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9767] = 4,
    ACTIONS(1656), 1,
      sym_blank_line,
    ACTIONS(1658), 1,
      sym__text_indent,
    STATE(805), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
  [9780] = 1,
    ACTIONS(959), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9787] = 4,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
  [9800] = 1,
    ACTIONS(961), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9807] = 1,
    ACTIONS(963), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9814] = 1,
    ACTIONS(965), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9821] = 1,
    ACTIONS(967), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9828] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1660), 1,
      sym_blank_line,
    STATE(391), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9839] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1662), 1,
      sym_blank_line,
    STATE(392), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9850] = 1,
    ACTIONS(969), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9857] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1664), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [9868] = 3,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(1666), 1,
      sym_integer_literal,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [9879] = 2,
    STATE(885), 1,
      sym_text_ref,
    ACTIONS(1552), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9888] = 4,
    ACTIONS(1554), 1,
      sym_runnable_ref,
    ACTIONS(1556), 1,
      sym_none_keyword,
    ACTIONS(1558), 1,
      sym_all_keyword,
    STATE(884), 1,
      sym_route_value,
  [9901] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1668), 1,
      sym_blank_line,
    STATE(454), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9912] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1670), 1,
      sym_blank_line,
    STATE(455), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9923] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1672), 1,
      sym_blank_line,
    STATE(457), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9934] = 3,
    ACTIONS(1169), 1,
      sym_indented_raw_text,
    ACTIONS(1674), 1,
      sym_blank_line,
    STATE(458), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9945] = 2,
    STATE(1048), 1,
      sym_directive_op,
    ACTIONS(1492), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9954] = 1,
    ACTIONS(971), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9961] = 1,
    ACTIONS(973), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9968] = 1,
    ACTIONS(975), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9975] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(333), 1,
      sym_text_line,
    STATE(512), 1,
      sym_line_end,
  [9988] = 1,
    ACTIONS(1229), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9995] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(532), 1,
      sym_line_end,
  [10005] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(116), 1,
      sym__flow_statement,
    STATE(1097), 1,
      sym_statements,
  [10015] = 1,
    ACTIONS(1422), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10021] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [10031] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(516), 1,
      sym_line_end,
  [10041] = 1,
    ACTIONS(1427), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10047] = 3,
    ACTIONS(1680), 1,
      sym_rparen,
    ACTIONS(1682), 1,
      sym_comma,
    STATE(854), 1,
      aux_sym_params_repeat1,
  [10057] = 3,
    ACTIONS(1684), 1,
      sym_colon,
    ACTIONS(1686), 1,
      sym_snake_name,
    STATE(1198), 1,
      sym_instruct_name,
  [10067] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(186), 1,
      sym_line_end,
  [10077] = 3,
    ACTIONS(1688), 1,
      sym_blank_line,
    ACTIONS(1691), 1,
      sym__text_indent,
    STATE(784), 1,
      aux_sym_text_body_repeat1,
  [10087] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(187), 1,
      sym_line_end,
  [10097] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(716), 1,
      sym_line_end,
  [10107] = 1,
    ACTIONS(1564), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10113] = 3,
    ACTIONS(1693), 1,
      sym__inline_comment,
    ACTIONS(1695), 1,
      sym_newline,
    STATE(800), 1,
      sym_line_end,
  [10123] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(520), 1,
      sym_line_end,
  [10133] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(194), 1,
      sym_line_end,
  [10143] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [10153] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(579), 1,
      sym_line_end,
  [10163] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(521), 1,
      sym_line_end,
  [10173] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(726), 1,
      sym_line_end,
  [10183] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(727), 1,
      sym_line_end,
  [10193] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(728), 1,
      sym_line_end,
  [10203] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(729), 1,
      sym_line_end,
  [10213] = 2,
    STATE(732), 1,
      sym__reserved_binding_word,
    ACTIONS(1697), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [10221] = 1,
    ACTIONS(1576), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10227] = 1,
    ACTIONS(1578), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10233] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [10243] = 1,
    ACTIONS(1177), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10249] = 2,
    STATE(175), 1,
      sym__order_complement,
    ACTIONS(1699), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10257] = 1,
    ACTIONS(1053), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10263] = 1,
    ACTIONS(1179), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10269] = 1,
    ACTIONS(1701), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10275] = 1,
    ACTIONS(1703), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10281] = 3,
    ACTIONS(1705), 1,
      sym_blank_line,
    ACTIONS(1707), 1,
      sym__text_indent,
    STATE(784), 1,
      aux_sym_text_body_repeat1,
  [10291] = 1,
    ACTIONS(1187), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10297] = 1,
    ACTIONS(1189), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10303] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [10313] = 3,
    ACTIONS(1709), 1,
      sym__dedent,
    ACTIONS(1711), 1,
      sym__until_start,
    STATE(81), 1,
      sym_until_clause,
  [10323] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(748), 1,
      sym_line_end,
  [10333] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [10343] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10349] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10355] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10361] = 3,
    ACTIONS(349), 1,
      sym_flow_if_keyword,
    STATE(754), 1,
      sym__inline_if_complement,
    STATE(940), 1,
      sym__named_if_complement,
  [10371] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(755), 1,
      sym_line_end,
  [10381] = 1,
    ACTIONS(1135), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10387] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(756), 1,
      sym_line_end,
  [10397] = 1,
    ACTIONS(864), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10403] = 1,
    ACTIONS(866), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10409] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10415] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10421] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10427] = 1,
    ACTIONS(864), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10433] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(533), 1,
      sym_line_end,
  [10443] = 1,
    ACTIONS(1145), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10449] = 2,
    ACTIONS(1713), 1,
      sym_flow_spawn_keyword,
    STATE(523), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10457] = 1,
    ACTIONS(1151), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10463] = 1,
    ACTIONS(1155), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10469] = 1,
    ACTIONS(866), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10475] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(552), 1,
      sym_line_end,
  [10485] = 1,
    ACTIONS(1159), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10491] = 1,
    ACTIONS(864), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10497] = 1,
    ACTIONS(866), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10503] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10509] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10515] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10521] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10527] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10533] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10539] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10545] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10551] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10557] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10563] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10569] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10575] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(221), 1,
      sym_line_end,
  [10585] = 3,
    ACTIONS(897), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1715), 1,
      sym_colon,
    STATE(1178), 1,
      sym__window_complement,
  [10595] = 1,
    ACTIONS(1163), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10601] = 3,
    ACTIONS(1717), 1,
      anon_sym__,
    ACTIONS(1719), 1,
      sym__variable_name,
    STATE(991), 1,
      sym_param_name,
  [10611] = 3,
    ACTIONS(1682), 1,
      sym_comma,
    ACTIONS(1721), 1,
      sym_rparen,
    STATE(958), 1,
      aux_sym_params_repeat1,
  [10621] = 2,
    ACTIONS(1723), 1,
      sym_colon,
    ACTIONS(1725), 2,
      sym_rparen,
      sym_comma,
  [10629] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [10639] = 1,
    ACTIONS(1727), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10645] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(644), 1,
      sym_line_end,
  [10655] = 2,
    STATE(525), 1,
      sym__reserved_binding_word,
    ACTIONS(1729), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [10663] = 1,
    ACTIONS(1731), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10669] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(588), 1,
      sym_line_end,
  [10679] = 2,
    ACTIONS(1476), 1,
      sym_newline,
    ACTIONS(1474), 2,
      sym__inline_comment,
      sym_text_line,
  [10687] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(222), 1,
      sym_line_end,
  [10697] = 3,
    ACTIONS(1693), 1,
      sym__inline_comment,
    ACTIONS(1695), 1,
      sym_newline,
    STATE(653), 1,
      sym_line_end,
  [10707] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(553), 1,
      sym_line_end,
  [10717] = 2,
    ACTIONS(1735), 1,
      sym_newline,
    ACTIONS(1733), 2,
      sym__inline_comment,
      sym_text_line,
  [10725] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(477), 1,
      sym_line_end,
  [10735] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(478), 1,
      sym_line_end,
  [10745] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(482), 1,
      sym_line_end,
  [10755] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(369), 1,
      sym_line_end,
  [10765] = 2,
    ACTIONS(1731), 1,
      sym_newline,
    ACTIONS(1737), 2,
      sym__inline_comment,
      sym_text_line,
  [10773] = 2,
    ACTIONS(1741), 1,
      sym_newline,
    ACTIONS(1739), 2,
      sym__inline_comment,
      sym_text_line,
  [10781] = 3,
    ACTIONS(1743), 1,
      sym__inline_comment,
    ACTIONS(1745), 1,
      sym_newline,
    STATE(405), 1,
      sym_line_end,
  [10791] = 3,
    ACTIONS(1743), 1,
      sym__inline_comment,
    ACTIONS(1745), 1,
      sym_newline,
    STATE(409), 1,
      sym_line_end,
  [10801] = 1,
    ACTIONS(1747), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10807] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10815] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(245), 1,
      sym_line_end,
  [10825] = 3,
    ACTIONS(355), 1,
      sym_flow_if_keyword,
    STATE(249), 1,
      sym__inline_if_complement,
    STATE(894), 1,
      sym__named_if_complement,
  [10835] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(250), 1,
      sym_line_end,
  [10845] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(251), 1,
      sym_line_end,
  [10855] = 2,
    ACTIONS(1574), 1,
      sym_newline,
    ACTIONS(1749), 2,
      sym__inline_comment,
      sym_text_line,
  [10863] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(554), 1,
      sym_line_end,
  [10873] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(479), 1,
      sym_line_end,
  [10883] = 3,
    ACTIONS(1751), 1,
      sym__inline_comment,
    ACTIONS(1753), 1,
      sym_newline,
    STATE(623), 1,
      sym_line_end,
  [10893] = 3,
    ACTIONS(1751), 1,
      sym__inline_comment,
    ACTIONS(1753), 1,
      sym_newline,
    STATE(624), 1,
      sym_line_end,
  [10903] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(219), 1,
      sym_line_end,
  [10913] = 3,
    ACTIONS(1755), 1,
      sym_pascal_name,
    STATE(1181), 1,
      sym_type_name,
    STATE(1194), 1,
      sym_struct_name,
  [10923] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
  [10933] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(555), 1,
      sym_line_end,
  [10943] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
  [10953] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [10963] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(271), 1,
      sym_line_end,
  [10973] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(272), 1,
      sym_line_end,
  [10983] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
  [10993] = 3,
    ACTIONS(893), 1,
      sym_flow_by_keyword,
    STATE(276), 1,
      sym__inline_by_complement,
    STATE(908), 1,
      sym__named_by_complement,
  [11003] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(185), 1,
      sym_line_end,
  [11013] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [11023] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(556), 1,
      sym_line_end,
  [11033] = 2,
    STATE(777), 1,
      sym_recall_source,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
  [11041] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(557), 1,
      sym_line_end,
  [11051] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [11061] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [11071] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(495), 1,
      sym_line_end,
  [11081] = 2,
    ACTIONS(1757), 1,
      sym_flow_spawn_keyword,
    STATE(284), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11089] = 1,
    ACTIONS(1759), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11095] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(558), 1,
      sym_line_end,
  [11105] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(287), 1,
      sym_line_end,
  [11115] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(288), 1,
      sym_line_end,
  [11125] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(499), 1,
      sym_line_end,
  [11135] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(538), 1,
      sym_line_end,
  [11145] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
  [11155] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(292), 1,
      sym_line_end,
  [11165] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(204), 1,
      sym_line_end,
  [11175] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(501), 1,
      sym_line_end,
  [11185] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(224), 1,
      sym_line_end,
  [11195] = 3,
    ACTIONS(1711), 1,
      sym__until_start,
    ACTIONS(1761), 1,
      sym__dedent,
    STATE(67), 1,
      sym_until_clause,
  [11205] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(235), 1,
      sym_line_end,
  [11215] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(305), 1,
      sym_line_end,
  [11225] = 3,
    ACTIONS(1693), 1,
      sym__inline_comment,
    ACTIONS(1695), 1,
      sym_newline,
    STATE(667), 1,
      sym_line_end,
  [11235] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(306), 1,
      sym_line_end,
  [11245] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(307), 1,
      sym_line_end,
  [11255] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(237), 1,
      sym_line_end,
  [11265] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(309), 1,
      sym_line_end,
  [11275] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(310), 1,
      sym_line_end,
  [11285] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(311), 1,
      sym_line_end,
  [11295] = 3,
    ACTIONS(1711), 1,
      sym__until_start,
    ACTIONS(1763), 1,
      sym__dedent,
    STATE(94), 1,
      sym_until_clause,
  [11305] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(317), 1,
      sym_line_end,
  [11315] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(319), 1,
      sym_line_end,
  [11325] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(431), 1,
      sym_line_end,
  [11335] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(657), 1,
      sym_line_end,
  [11345] = 1,
    ACTIONS(1765), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11351] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(327), 1,
      sym_line_end,
  [11361] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(504), 1,
      sym_line_end,
  [11371] = 1,
    ACTIONS(1767), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11377] = 3,
    ACTIONS(1482), 1,
      sym_newline,
    ACTIONS(1769), 1,
      sym__inline_comment,
    STATE(804), 1,
      sym_line_end,
  [11387] = 1,
    ACTIONS(1771), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11393] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(359), 1,
      sym_line_end,
  [11403] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(116), 1,
      sym__flow_statement,
    STATE(1192), 1,
      sym_statements,
  [11413] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(505), 1,
      sym_line_end,
  [11423] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(506), 1,
      sym_line_end,
  [11433] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [11443] = 3,
    ACTIONS(840), 1,
      sym_flow_by_keyword,
    STATE(509), 1,
      sym__inline_by_complement,
    STATE(828), 1,
      sym__named_by_complement,
  [11453] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(537), 1,
      sym_line_end,
  [11463] = 3,
    ACTIONS(1711), 1,
      sym__until_start,
    ACTIONS(1773), 1,
      sym__dedent,
    STATE(85), 1,
      sym_until_clause,
  [11473] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(236), 1,
      sym_line_end,
  [11483] = 2,
    STATE(723), 1,
      sym__reserved_binding_word,
    ACTIONS(1775), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11491] = 2,
    STATE(199), 1,
      sym__order_complement,
    ACTIONS(1699), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11499] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [11509] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(209), 1,
      sym_line_end,
  [11519] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(210), 1,
      sym_line_end,
  [11529] = 2,
    STATE(741), 1,
      sym__reserved_binding_word,
    ACTIONS(1777), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11537] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(213), 1,
      sym_line_end,
  [11547] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(171), 1,
      sym_line_end,
  [11557] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [11567] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(568), 1,
      sym_line_end,
  [11577] = 3,
    ACTIONS(1779), 1,
      sym__inline_comment,
    ACTIONS(1781), 1,
      sym_newline,
    STATE(289), 1,
      sym_line_end,
  [11587] = 3,
    ACTIONS(1705), 1,
      sym_blank_line,
    ACTIONS(1783), 1,
      sym__text_indent,
    STATE(784), 1,
      aux_sym_text_body_repeat1,
  [11597] = 3,
    ACTIONS(1785), 1,
      sym_rparen,
    ACTIONS(1787), 1,
      sym_comma,
    STATE(958), 1,
      aux_sym_params_repeat1,
  [11607] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(512), 1,
      sym_line_end,
  [11617] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(570), 1,
      sym_line_end,
  [11627] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(540), 1,
      sym_line_end,
  [11637] = 3,
    ACTIONS(897), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1790), 1,
      sym_colon,
    STATE(1205), 1,
      sym__window_complement,
  [11647] = 1,
    ACTIONS(1792), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [11653] = 3,
    ACTIONS(1794), 1,
      sym_colon,
    ACTIONS(1796), 1,
      sym_snake_name,
    STATE(1201), 1,
      sym_context_name,
  [11663] = 3,
    ACTIONS(1676), 1,
      sym__inline_comment,
    ACTIONS(1678), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [11673] = 3,
    ACTIONS(1705), 1,
      sym_blank_line,
    ACTIONS(1798), 1,
      sym__text_indent,
    STATE(784), 1,
      aux_sym_text_body_repeat1,
  [11683] = 3,
    ACTIONS(1705), 1,
      sym_blank_line,
    ACTIONS(1800), 1,
      sym__text_indent,
    STATE(784), 1,
      aux_sym_text_body_repeat1,
  [11693] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(260), 1,
      sym_line_end,
  [11703] = 2,
    ACTIONS(1802), 1,
      anon_sym_EQ,
    STATE(763), 1,
      sym_assign_operator,
  [11710] = 2,
    ACTIONS(1804), 1,
      aux_sym__doc_space_token1,
    STATE(1002), 1,
      sym__required_space,
  [11717] = 2,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(868), 1,
      sym_local_name,
  [11724] = 2,
    ACTIONS(1806), 1,
      sym_text_line,
    STATE(864), 1,
      sym_cap_ref,
  [11731] = 2,
    ACTIONS(1808), 1,
      sym__snake_kebab_name,
    STATE(1096), 1,
      sym_job_name,
  [11738] = 2,
    ACTIONS(1810), 1,
      sym__snake_kebab_name,
    STATE(1171), 1,
      sym_cap_name,
  [11745] = 1,
    ACTIONS(1812), 2,
      sym_newline,
      sym__inline_comment,
  [11750] = 2,
    ACTIONS(1814), 1,
      sym__one_integer_literal,
    ACTIONS(1816), 1,
      sym__other_integer_literal,
  [11757] = 2,
    ACTIONS(1818), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(873), 1,
      sym_directive_value,
  [11764] = 1,
    ACTIONS(1820), 2,
      sym_newline,
      sym__inline_comment,
  [11769] = 1,
    ACTIONS(1626), 2,
      sym_newline,
      sym__inline_comment,
  [11774] = 2,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(120), 1,
      sym_field,
  [11781] = 1,
    ACTIONS(1322), 2,
      sym_newline,
      sym__inline_comment,
  [11786] = 2,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(152), 1,
      sym_field,
  [11793] = 2,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(418), 1,
      sym__unroled_message_line,
  [11800] = 2,
    ACTIONS(1822), 1,
      sym__reduce_text_start,
    STATE(571), 1,
      sym__reduce_text_body,
  [11807] = 2,
    ACTIONS(1824), 1,
      sym_arrow,
    ACTIONS(1826), 1,
      sym_colon,
  [11814] = 2,
    ACTIONS(1828), 1,
      anon_sym_lanes,
    STATE(1026), 1,
      sym_flow_lanes_keyword,
  [11821] = 1,
    ACTIONS(1830), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11826] = 2,
    ACTIONS(1832), 1,
      sym_arrow,
    ACTIONS(1834), 1,
      sym_colon,
  [11833] = 2,
    ACTIONS(1802), 1,
      anon_sym_EQ,
    STATE(1071), 1,
      sym_assign_operator,
  [11840] = 2,
    ACTIONS(1802), 1,
      anon_sym_EQ,
    STATE(645), 1,
      sym_assign_operator,
  [11847] = 2,
    ACTIONS(1836), 1,
      aux_sym__doc_space_token1,
    STATE(1211), 1,
      sym__doc_space,
  [11854] = 2,
    ACTIONS(1838), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_assign_operator,
  [11861] = 2,
    ACTIONS(1840), 1,
      sym_snake_name,
    STATE(1069), 1,
      sym_property_key,
  [11868] = 2,
    ACTIONS(1842), 1,
      anon_sym_EQ,
    STATE(646), 1,
      sym_assign_operator,
  [11875] = 2,
    ACTIONS(1844), 1,
      sym_comment_text,
    ACTIONS(1846), 1,
      sym__comment_end,
  [11882] = 2,
    ACTIONS(1822), 1,
      sym__reduce_text_start,
    STATE(529), 1,
      sym__reduce_text_body,
  [11889] = 1,
    ACTIONS(1848), 2,
      sym_rparen,
      sym_comma,
  [11894] = 1,
    ACTIONS(1850), 2,
      sym_optional_marker,
      sym_colon,
  [11899] = 2,
    ACTIONS(1852), 1,
      sym_optional_marker,
    ACTIONS(1854), 1,
      sym_colon,
  [11906] = 1,
    ACTIONS(1856), 2,
      sym_rparen,
      sym_comma,
  [11911] = 2,
    ACTIONS(1822), 1,
      sym__reduce_text_start,
    STATE(546), 1,
      sym__reduce_text_body,
  [11918] = 2,
    ACTIONS(981), 1,
      sym_snake_name,
    STATE(963), 1,
      sym_runnable,
  [11925] = 2,
    ACTIONS(1858), 1,
      sym_arrow,
    ACTIONS(1860), 1,
      sym_colon,
  [11932] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(234), 1,
      sym__implicit_run_line,
  [11939] = 2,
    ACTIONS(1822), 1,
      sym__reduce_text_start,
    STATE(559), 1,
      sym__reduce_text_body,
  [11946] = 1,
    ACTIONS(864), 2,
      sym_blank_line,
      sym__text_indent,
  [11951] = 2,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(795), 1,
      sym_local_name,
  [11958] = 1,
    ACTIONS(1862), 2,
      sym_arrow,
      sym_colon,
  [11963] = 2,
    ACTIONS(1864), 1,
      sym_snake_name,
    STATE(474), 1,
      sym_agent,
  [11970] = 2,
    ACTIONS(1866), 1,
      sym_comment_text,
    ACTIONS(1868), 1,
      sym__comment_end,
  [11977] = 1,
    ACTIONS(1870), 2,
      sym_arrow,
      sym_colon,
  [11982] = 1,
    ACTIONS(1872), 2,
      sym_newline,
      sym__inline_comment,
  [11987] = 2,
    ACTIONS(1874), 1,
      sym_snake_name,
    STATE(999), 1,
      sym_field_name,
  [11994] = 2,
    ACTIONS(1876), 1,
      anon_sym_lanes,
    STATE(441), 1,
      sym_flow_lanes_keyword,
  [12001] = 1,
    ACTIONS(866), 2,
      sym_blank_line,
      sym__text_indent,
  [12006] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(393), 1,
      sym__from_complement,
  [12013] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(408), 1,
      sym__from_complement,
  [12020] = 2,
    ACTIONS(1878), 1,
      sym_comment_text,
    ACTIONS(1880), 1,
      sym__comment_end,
  [12027] = 2,
    ACTIONS(1882), 1,
      sym_comment_text,
    ACTIONS(1884), 1,
      sym__comment_end,
  [12034] = 1,
    ACTIONS(1886), 2,
      sym_rparen,
      sym_comma,
  [12039] = 2,
    ACTIONS(1808), 1,
      sym__snake_kebab_name,
    STATE(1090), 1,
      sym_job_name,
  [12046] = 1,
    ACTIONS(1888), 2,
      sym_newline,
      sym__inline_comment,
  [12051] = 2,
    ACTIONS(1810), 1,
      sym__snake_kebab_name,
    STATE(1180), 1,
      sym_cap_name,
  [12058] = 2,
    ACTIONS(1890), 1,
      sym_comment_text,
    ACTIONS(1892), 1,
      sym__comment_end,
  [12065] = 2,
    ACTIONS(1894), 1,
      sym_comment_text,
    ACTIONS(1896), 1,
      sym__comment_end,
  [12072] = 1,
    ACTIONS(1310), 2,
      sym_newline,
      sym__inline_comment,
  [12077] = 2,
    ACTIONS(1898), 1,
      sym_arrow,
    ACTIONS(1900), 1,
      sym_colon,
  [12084] = 2,
    ACTIONS(1902), 1,
      sym_comment_text,
    ACTIONS(1904), 1,
      sym__comment_end,
  [12091] = 2,
    ACTIONS(1906), 1,
      sym_comment_text,
    ACTIONS(1908), 1,
      sym__comment_end,
  [12098] = 1,
    ACTIONS(1910), 2,
      sym_arrow,
      sym_colon,
  [12103] = 2,
    ACTIONS(1912), 1,
      sym_comment_text,
    ACTIONS(1914), 1,
      sym__comment_end,
  [12110] = 2,
    ACTIONS(1916), 1,
      sym_comment_text,
    ACTIONS(1918), 1,
      sym__comment_end,
  [12117] = 2,
    ACTIONS(1920), 1,
      sym_comment_text,
    ACTIONS(1922), 1,
      sym__comment_end,
  [12124] = 2,
    ACTIONS(1924), 1,
      sym_comment_text,
    ACTIONS(1926), 1,
      sym__comment_end,
  [12131] = 2,
    ACTIONS(1928), 1,
      sym_comment_text,
    ACTIONS(1930), 1,
      sym__comment_end,
  [12138] = 2,
    ACTIONS(1932), 1,
      sym_comment_text,
    ACTIONS(1934), 1,
      sym__comment_end,
  [12145] = 2,
    ACTIONS(1936), 1,
      sym_comment_text,
    ACTIONS(1938), 1,
      sym__comment_end,
  [12152] = 2,
    ACTIONS(1940), 1,
      sym_comment_text,
    ACTIONS(1942), 1,
      sym__comment_end,
  [12159] = 2,
    ACTIONS(1810), 1,
      sym__snake_kebab_name,
    STATE(1202), 1,
      sym_cap_name,
  [12166] = 2,
    ACTIONS(1944), 1,
      sym_comment_text,
    ACTIONS(1946), 1,
      sym__comment_end,
  [12173] = 2,
    ACTIONS(1948), 1,
      sym_comment_text,
    ACTIONS(1950), 1,
      sym__comment_end,
  [12180] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1158), 1,
      sym_param_doc_tag,
  [12187] = 2,
    ACTIONS(1810), 1,
      sym__snake_kebab_name,
    STATE(1099), 1,
      sym_cap_name,
  [12194] = 2,
    ACTIONS(1954), 1,
      sym_comment_text,
    ACTIONS(1956), 1,
      sym__comment_end,
  [12201] = 2,
    ACTIONS(1958), 1,
      sym_comment_text,
    ACTIONS(1960), 1,
      sym__comment_end,
  [12208] = 1,
    ACTIONS(1962), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12213] = 1,
    ACTIONS(1964), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12218] = 2,
    ACTIONS(1818), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(884), 1,
      sym_directive_value,
  [12225] = 2,
    ACTIONS(1864), 1,
      sym_snake_name,
    STATE(410), 1,
      sym_agent,
  [12232] = 2,
    ACTIONS(1966), 1,
      sym__one_integer_literal,
    ACTIONS(1968), 1,
      sym__other_integer_literal,
  [12239] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(443), 1,
      sym__from_complement,
  [12246] = 2,
    ACTIONS(1970), 1,
      aux_sym__doc_space_token1,
    STATE(853), 1,
      sym__doc_space,
  [12253] = 1,
    ACTIONS(1972), 2,
      sym_newline,
      sym__inline_comment,
  [12258] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(447), 1,
      sym__from_complement,
  [12265] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1082), 1,
      sym_param_doc_tag,
  [12272] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1093), 1,
      sym_param_doc_tag,
  [12279] = 2,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(397), 1,
      sym__implicit_run_line,
  [12286] = 2,
    ACTIONS(1974), 1,
      sym_flow_run_keyword,
    STATE(700), 1,
      sym__run_after_modifier,
  [12293] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1104), 1,
      sym_param_doc_tag,
  [12300] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1111), 1,
      sym_param_doc_tag,
  [12307] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1118), 1,
      sym_param_doc_tag,
  [12314] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1125), 1,
      sym_param_doc_tag,
  [12321] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1132), 1,
      sym_param_doc_tag,
  [12328] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1139), 1,
      sym_param_doc_tag,
  [12335] = 2,
    ACTIONS(1976), 1,
      sym_text_line,
    STATE(956), 1,
      sym_property_value,
  [12342] = 2,
    ACTIONS(1802), 1,
      anon_sym_EQ,
    STATE(1047), 1,
      sym_assign_operator,
  [12349] = 2,
    ACTIONS(1838), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_assign_operator,
  [12356] = 2,
    ACTIONS(1842), 1,
      anon_sym_EQ,
    STATE(764), 1,
      sym_assign_operator,
  [12363] = 2,
    ACTIONS(1978), 1,
      anon_sym_EQ,
    STATE(1065), 1,
      sym_assign_operator,
  [12370] = 2,
    ACTIONS(1980), 1,
      sym_flow_run_keyword,
    STATE(470), 1,
      sym__run_after_modifier,
  [12377] = 1,
    ACTIONS(1982), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12382] = 2,
    ACTIONS(1952), 1,
      anon_sym_ATparam,
    STATE(1182), 1,
      sym_param_doc_tag,
  [12389] = 1,
    ACTIONS(1622), 2,
      sym_newline,
      sym__inline_comment,
  [12394] = 1,
    ACTIONS(1984), 1,
      sym_integer_literal,
  [12398] = 1,
    ACTIONS(1986), 1,
      sym__dedent,
  [12402] = 1,
    ACTIONS(1988), 1,
      sym__dedent,
  [12406] = 1,
    ACTIONS(1990), 1,
      sym__dedent,
  [12410] = 1,
    ACTIONS(1992), 1,
      sym__dedent,
  [12414] = 1,
    ACTIONS(1994), 1,
      sym_cap_kind,
  [12418] = 1,
    ACTIONS(1996), 1,
      sym__comment_end,
  [12422] = 1,
    ACTIONS(1998), 1,
      sym__comment_end,
  [12426] = 1,
    ACTIONS(2000), 1,
      sym__comment_end,
  [12430] = 1,
    ACTIONS(2002), 1,
      sym_newline,
  [12434] = 1,
    ACTIONS(2004), 1,
      sym__dedent,
  [12438] = 1,
    ACTIONS(2006), 1,
      sym_flow_time_keyword,
  [12442] = 1,
    ACTIONS(1530), 1,
      aux_sym__doc_space_token1,
  [12446] = 1,
    ACTIONS(1532), 1,
      aux_sym__doc_space_token1,
  [12450] = 1,
    ACTIONS(1500), 1,
      sym__dedent,
  [12454] = 1,
    ACTIONS(2008), 1,
      sym__dedent,
  [12458] = 1,
    ACTIONS(2010), 1,
      sym_colon,
  [12462] = 1,
    ACTIONS(2012), 1,
      sym__comment_end,
  [12466] = 1,
    ACTIONS(2014), 1,
      sym__comment_end,
  [12470] = 1,
    ACTIONS(2016), 1,
      sym__comment_end,
  [12474] = 1,
    ACTIONS(2018), 1,
      sym_newline,
  [12478] = 1,
    ACTIONS(2020), 1,
      sym__comment_end,
  [12482] = 1,
    ACTIONS(2022), 1,
      sym_colon,
  [12486] = 1,
    ACTIONS(2024), 1,
      sym__dedent,
  [12490] = 1,
    ACTIONS(2026), 1,
      sym_colon,
  [12494] = 1,
    ACTIONS(2028), 1,
      sym_colon,
  [12498] = 1,
    ACTIONS(2030), 1,
      sym_flow_until_keyword,
  [12502] = 1,
    ACTIONS(2032), 1,
      sym_colon,
  [12506] = 1,
    ACTIONS(2034), 1,
      sym__comment_end,
  [12510] = 1,
    ACTIONS(2036), 1,
      sym__comment_end,
  [12514] = 1,
    ACTIONS(2038), 1,
      sym__comment_end,
  [12518] = 1,
    ACTIONS(2040), 1,
      sym_newline,
  [12522] = 1,
    ACTIONS(2042), 1,
      sym__dedent,
  [12526] = 1,
    ACTIONS(2044), 1,
      sym__dedent,
  [12530] = 1,
    ACTIONS(2046), 1,
      sym__dedent,
  [12534] = 1,
    ACTIONS(2048), 1,
      sym__comment_end,
  [12538] = 1,
    ACTIONS(2050), 1,
      sym__comment_end,
  [12542] = 1,
    ACTIONS(2052), 1,
      sym__comment_end,
  [12546] = 1,
    ACTIONS(2054), 1,
      sym_newline,
  [12550] = 1,
    ACTIONS(1741), 1,
      anon_sym_EQ,
  [12554] = 1,
    ACTIONS(2056), 1,
      sym_colon,
  [12558] = 1,
    ACTIONS(2058), 1,
      sym__dedent,
  [12562] = 1,
    ACTIONS(2060), 1,
      sym__comment_end,
  [12566] = 1,
    ACTIONS(2062), 1,
      sym__comment_end,
  [12570] = 1,
    ACTIONS(2064), 1,
      sym__comment_end,
  [12574] = 1,
    ACTIONS(2066), 1,
      sym_newline,
  [12578] = 1,
    ACTIONS(2068), 1,
      sym_colon,
  [12582] = 1,
    ACTIONS(2070), 1,
      sym_colon,
  [12586] = 1,
    ACTIONS(2072), 1,
      sym_flow_lane_keyword,
  [12590] = 1,
    ACTIONS(2074), 1,
      sym__comment_end,
  [12594] = 1,
    ACTIONS(2076), 1,
      sym__comment_end,
  [12598] = 1,
    ACTIONS(2078), 1,
      sym__comment_end,
  [12602] = 1,
    ACTIONS(2080), 1,
      sym_newline,
  [12606] = 1,
    ACTIONS(2082), 1,
      sym_colon,
  [12610] = 1,
    ACTIONS(1414), 1,
      sym__dedent,
  [12614] = 1,
    ACTIONS(2084), 1,
      aux_sym__invalid_named_binding_token1,
  [12618] = 1,
    ACTIONS(2086), 1,
      sym__comment_end,
  [12622] = 1,
    ACTIONS(2088), 1,
      sym__comment_end,
  [12626] = 1,
    ACTIONS(2090), 1,
      sym__comment_end,
  [12630] = 1,
    ACTIONS(2092), 1,
      sym_newline,
  [12634] = 1,
    ACTIONS(2094), 1,
      sym_flow_exec_keyword,
  [12638] = 1,
    ACTIONS(2096), 1,
      sym_colon,
  [12642] = 1,
    ACTIONS(359), 1,
      sym__dedent,
  [12646] = 1,
    ACTIONS(2098), 1,
      sym__comment_end,
  [12650] = 1,
    ACTIONS(2100), 1,
      sym__comment_end,
  [12654] = 1,
    ACTIONS(2102), 1,
      sym__comment_end,
  [12658] = 1,
    ACTIONS(2104), 1,
      sym_newline,
  [12662] = 1,
    ACTIONS(2106), 1,
      sym_newline,
  [12666] = 1,
    ACTIONS(2108), 1,
      sym_newline,
  [12670] = 1,
    ACTIONS(2110), 1,
      sym_newline,
  [12674] = 1,
    ACTIONS(2112), 1,
      ts_builtin_sym_end,
  [12678] = 1,
    ACTIONS(2114), 1,
      sym__dedent,
  [12682] = 1,
    ACTIONS(2116), 1,
      sym_colon,
  [12686] = 1,
    ACTIONS(2006), 1,
      sym_flow_times_keyword,
  [12690] = 1,
    ACTIONS(2118), 1,
      sym_newline,
  [12694] = 1,
    ACTIONS(2120), 1,
      sym_colon,
  [12698] = 1,
    ACTIONS(2122), 1,
      sym_flow_exec_keyword,
  [12702] = 1,
    ACTIONS(2124), 1,
      sym_flow_run_keyword,
  [12706] = 1,
    ACTIONS(339), 1,
      sym__dedent,
  [12710] = 1,
    ACTIONS(2126), 1,
      sym__comment_end,
  [12714] = 1,
    ACTIONS(2128), 1,
      sym_colon,
  [12718] = 1,
    ACTIONS(2130), 1,
      sym__dedent,
  [12722] = 1,
    ACTIONS(2132), 1,
      sym_runnable_ref,
  [12726] = 1,
    ACTIONS(2134), 1,
      sym_flow_exec_keyword,
  [12730] = 1,
    ACTIONS(2136), 1,
      sym__comment_end,
  [12734] = 1,
    ACTIONS(2138), 1,
      sym__dedent,
  [12738] = 1,
    ACTIONS(2140), 1,
      sym_colon,
  [12742] = 1,
    ACTIONS(2142), 1,
      sym_integer_literal,
  [12746] = 1,
    ACTIONS(2144), 1,
      sym_newline,
  [12750] = 1,
    ACTIONS(2146), 1,
      sym_colon,
  [12754] = 1,
    ACTIONS(2148), 1,
      sym__dedent,
  [12758] = 1,
    ACTIONS(2150), 1,
      sym_colon,
  [12762] = 1,
    ACTIONS(2152), 1,
      sym_colon,
  [12766] = 1,
    ACTIONS(2154), 1,
      sym_colon,
  [12770] = 1,
    ACTIONS(2156), 1,
      sym_colon,
  [12774] = 1,
    ACTIONS(2158), 1,
      sym_flow_exec_keyword,
  [12778] = 1,
    ACTIONS(2160), 1,
      sym_colon,
  [12782] = 1,
    ACTIONS(2162), 1,
      sym_colon,
  [12786] = 1,
    ACTIONS(2164), 1,
      sym_newline,
  [12790] = 1,
    ACTIONS(2166), 1,
      sym_integer_literal,
  [12794] = 1,
    ACTIONS(2168), 1,
      sym_flow_until_keyword,
  [12798] = 1,
    ACTIONS(2170), 1,
      sym__comment_end,
  [12802] = 1,
    ACTIONS(2172), 1,
      sym_flow_from_keyword,
  [12806] = 1,
    ACTIONS(2174), 1,
      sym__dedent,
  [12810] = 1,
    ACTIONS(2176), 1,
      sym_colon,
  [12814] = 1,
    ACTIONS(2178), 1,
      sym_colon,
  [12818] = 1,
    ACTIONS(2180), 1,
      sym_colon,
  [12822] = 1,
    ACTIONS(2182), 1,
      sym_colon,
  [12826] = 1,
    ACTIONS(2184), 1,
      sym__comment_end,
  [12830] = 1,
    ACTIONS(2186), 1,
      anon_sym_EQ,
  [12834] = 1,
    ACTIONS(2188), 1,
      sym__dedent,
  [12838] = 1,
    ACTIONS(2190), 1,
      sym_colon,
  [12842] = 1,
    ACTIONS(2192), 1,
      sym_colon,
  [12846] = 1,
    ACTIONS(2194), 1,
      sym_newline,
  [12850] = 1,
    ACTIONS(2196), 1,
      sym__comment_end,
  [12854] = 1,
    ACTIONS(2198), 1,
      sym__dedent,
  [12858] = 1,
    ACTIONS(2200), 1,
      sym_integer_literal,
  [12862] = 1,
    ACTIONS(2202), 1,
      sym_flow_lane_keyword,
  [12866] = 1,
    ACTIONS(2204), 1,
      sym__dedent,
  [12870] = 1,
    ACTIONS(2206), 1,
      sym__dedent,
  [12874] = 1,
    ACTIONS(2208), 1,
      sym_colon,
  [12878] = 1,
    ACTIONS(2210), 1,
      sym__dedent,
  [12882] = 1,
    ACTIONS(2212), 1,
      sym__dedent,
  [12886] = 1,
    ACTIONS(2214), 1,
      sym_colon,
  [12890] = 1,
    ACTIONS(2216), 1,
      sym_colon,
  [12894] = 1,
    ACTIONS(2218), 1,
      sym__dedent,
  [12898] = 1,
    ACTIONS(2220), 1,
      sym__dedent,
  [12902] = 1,
    ACTIONS(2222), 1,
      sym_colon,
  [12906] = 1,
    ACTIONS(2224), 1,
      sym_colon,
  [12910] = 1,
    ACTIONS(2226), 1,
      sym_colon,
  [12914] = 1,
    ACTIONS(2228), 1,
      sym_newline,
  [12918] = 1,
    ACTIONS(2230), 1,
      sym_colon,
  [12922] = 1,
    ACTIONS(2232), 1,
      sym_colon,
  [12926] = 1,
    ACTIONS(2234), 1,
      sym__dedent,
  [12930] = 1,
    ACTIONS(2236), 1,
      sym__dedent,
  [12934] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [12938] = 1,
    ACTIONS(2238), 1,
      sym_newline,
  [12942] = 1,
    ACTIONS(2240), 1,
      sym_comment_text,
  [12946] = 1,
    ACTIONS(2242), 1,
      sym__dedent,
  [12950] = 1,
    ACTIONS(2244), 1,
      sym__comment_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 346,
  [SMALL_STATE(11)] = 396,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 496,
  [SMALL_STATE(15)] = 529,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 657,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 816,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 947,
  [SMALL_STATE(29)] = 971,
  [SMALL_STATE(30)] = 995,
  [SMALL_STATE(31)] = 1019,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1067,
  [SMALL_STATE(34)] = 1091,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1139,
  [SMALL_STATE(37)] = 1163,
  [SMALL_STATE(38)] = 1187,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1235,
  [SMALL_STATE(41)] = 1259,
  [SMALL_STATE(42)] = 1283,
  [SMALL_STATE(43)] = 1315,
  [SMALL_STATE(44)] = 1339,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1421,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1479,
  [SMALL_STATE(50)] = 1505,
  [SMALL_STATE(51)] = 1533,
  [SMALL_STATE(52)] = 1557,
  [SMALL_STATE(53)] = 1581,
  [SMALL_STATE(54)] = 1609,
  [SMALL_STATE(55)] = 1635,
  [SMALL_STATE(56)] = 1661,
  [SMALL_STATE(57)] = 1687,
  [SMALL_STATE(58)] = 1713,
  [SMALL_STATE(59)] = 1739,
  [SMALL_STATE(60)] = 1763,
  [SMALL_STATE(61)] = 1787,
  [SMALL_STATE(62)] = 1813,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1865,
  [SMALL_STATE(65)] = 1893,
  [SMALL_STATE(66)] = 1917,
  [SMALL_STATE(67)] = 1943,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1985,
  [SMALL_STATE(70)] = 2004,
  [SMALL_STATE(71)] = 2027,
  [SMALL_STATE(72)] = 2050,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2096,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2140,
  [SMALL_STATE(77)] = 2161,
  [SMALL_STATE(78)] = 2182,
  [SMALL_STATE(79)] = 2207,
  [SMALL_STATE(80)] = 2226,
  [SMALL_STATE(81)] = 2251,
  [SMALL_STATE(82)] = 2274,
  [SMALL_STATE(83)] = 2295,
  [SMALL_STATE(84)] = 2320,
  [SMALL_STATE(85)] = 2343,
  [SMALL_STATE(86)] = 2366,
  [SMALL_STATE(87)] = 2389,
  [SMALL_STATE(88)] = 2408,
  [SMALL_STATE(89)] = 2431,
  [SMALL_STATE(90)] = 2450,
  [SMALL_STATE(91)] = 2471,
  [SMALL_STATE(92)] = 2490,
  [SMALL_STATE(93)] = 2509,
  [SMALL_STATE(94)] = 2532,
  [SMALL_STATE(95)] = 2555,
  [SMALL_STATE(96)] = 2578,
  [SMALL_STATE(97)] = 2597,
  [SMALL_STATE(98)] = 2616,
  [SMALL_STATE(99)] = 2639,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2674,
  [SMALL_STATE(102)] = 2696,
  [SMALL_STATE(103)] = 2714,
  [SMALL_STATE(104)] = 2732,
  [SMALL_STATE(105)] = 2752,
  [SMALL_STATE(106)] = 2772,
  [SMALL_STATE(107)] = 2790,
  [SMALL_STATE(108)] = 2808,
  [SMALL_STATE(109)] = 2826,
  [SMALL_STATE(110)] = 2844,
  [SMALL_STATE(111)] = 2862,
  [SMALL_STATE(112)] = 2880,
  [SMALL_STATE(113)] = 2898,
  [SMALL_STATE(114)] = 2916,
  [SMALL_STATE(115)] = 2938,
  [SMALL_STATE(116)] = 2956,
  [SMALL_STATE(117)] = 2974,
  [SMALL_STATE(118)] = 2994,
  [SMALL_STATE(119)] = 3014,
  [SMALL_STATE(120)] = 3032,
  [SMALL_STATE(121)] = 3050,
  [SMALL_STATE(122)] = 3070,
  [SMALL_STATE(123)] = 3090,
  [SMALL_STATE(124)] = 3108,
  [SMALL_STATE(125)] = 3130,
  [SMALL_STATE(126)] = 3150,
  [SMALL_STATE(127)] = 3168,
  [SMALL_STATE(128)] = 3186,
  [SMALL_STATE(129)] = 3202,
  [SMALL_STATE(130)] = 3220,
  [SMALL_STATE(131)] = 3238,
  [SMALL_STATE(132)] = 3256,
  [SMALL_STATE(133)] = 3270,
  [SMALL_STATE(134)] = 3288,
  [SMALL_STATE(135)] = 3306,
  [SMALL_STATE(136)] = 3324,
  [SMALL_STATE(137)] = 3344,
  [SMALL_STATE(138)] = 3364,
  [SMALL_STATE(139)] = 3382,
  [SMALL_STATE(140)] = 3402,
  [SMALL_STATE(141)] = 3422,
  [SMALL_STATE(142)] = 3440,
  [SMALL_STATE(143)] = 3458,
  [SMALL_STATE(144)] = 3476,
  [SMALL_STATE(145)] = 3494,
  [SMALL_STATE(146)] = 3512,
  [SMALL_STATE(147)] = 3530,
  [SMALL_STATE(148)] = 3550,
  [SMALL_STATE(149)] = 3568,
  [SMALL_STATE(150)] = 3588,
  [SMALL_STATE(151)] = 3606,
  [SMALL_STATE(152)] = 3624,
  [SMALL_STATE(153)] = 3642,
  [SMALL_STATE(154)] = 3664,
  [SMALL_STATE(155)] = 3682,
  [SMALL_STATE(156)] = 3700,
  [SMALL_STATE(157)] = 3718,
  [SMALL_STATE(158)] = 3736,
  [SMALL_STATE(159)] = 3754,
  [SMALL_STATE(160)] = 3772,
  [SMALL_STATE(161)] = 3790,
  [SMALL_STATE(162)] = 3808,
  [SMALL_STATE(163)] = 3828,
  [SMALL_STATE(164)] = 3848,
  [SMALL_STATE(165)] = 3868,
  [SMALL_STATE(166)] = 3888,
  [SMALL_STATE(167)] = 3906,
  [SMALL_STATE(168)] = 3922,
  [SMALL_STATE(169)] = 3936,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3974,
  [SMALL_STATE(172)] = 3991,
  [SMALL_STATE(173)] = 4008,
  [SMALL_STATE(174)] = 4025,
  [SMALL_STATE(175)] = 4042,
  [SMALL_STATE(176)] = 4061,
  [SMALL_STATE(177)] = 4080,
  [SMALL_STATE(178)] = 4099,
  [SMALL_STATE(179)] = 4112,
  [SMALL_STATE(180)] = 4131,
  [SMALL_STATE(181)] = 4148,
  [SMALL_STATE(182)] = 4163,
  [SMALL_STATE(183)] = 4172,
  [SMALL_STATE(184)] = 4181,
  [SMALL_STATE(185)] = 4196,
  [SMALL_STATE(186)] = 4213,
  [SMALL_STATE(187)] = 4230,
  [SMALL_STATE(188)] = 4247,
  [SMALL_STATE(189)] = 4266,
  [SMALL_STATE(190)] = 4285,
  [SMALL_STATE(191)] = 4300,
  [SMALL_STATE(192)] = 4319,
  [SMALL_STATE(193)] = 4338,
  [SMALL_STATE(194)] = 4353,
  [SMALL_STATE(195)] = 4370,
  [SMALL_STATE(196)] = 4389,
  [SMALL_STATE(197)] = 4408,
  [SMALL_STATE(198)] = 4425,
  [SMALL_STATE(199)] = 4442,
  [SMALL_STATE(200)] = 4461,
  [SMALL_STATE(201)] = 4478,
  [SMALL_STATE(202)] = 4497,
  [SMALL_STATE(203)] = 4514,
  [SMALL_STATE(204)] = 4531,
  [SMALL_STATE(205)] = 4548,
  [SMALL_STATE(206)] = 4563,
  [SMALL_STATE(207)] = 4582,
  [SMALL_STATE(208)] = 4595,
  [SMALL_STATE(209)] = 4614,
  [SMALL_STATE(210)] = 4631,
  [SMALL_STATE(211)] = 4648,
  [SMALL_STATE(212)] = 4667,
  [SMALL_STATE(213)] = 4686,
  [SMALL_STATE(214)] = 4703,
  [SMALL_STATE(215)] = 4722,
  [SMALL_STATE(216)] = 4741,
  [SMALL_STATE(217)] = 4760,
  [SMALL_STATE(218)] = 4773,
  [SMALL_STATE(219)] = 4792,
  [SMALL_STATE(220)] = 4809,
  [SMALL_STATE(221)] = 4828,
  [SMALL_STATE(222)] = 4845,
  [SMALL_STATE(223)] = 4862,
  [SMALL_STATE(224)] = 4881,
  [SMALL_STATE(225)] = 4898,
  [SMALL_STATE(226)] = 4911,
  [SMALL_STATE(227)] = 4926,
  [SMALL_STATE(228)] = 4945,
  [SMALL_STATE(229)] = 4954,
  [SMALL_STATE(230)] = 4971,
  [SMALL_STATE(231)] = 4980,
  [SMALL_STATE(232)] = 4999,
  [SMALL_STATE(233)] = 5018,
  [SMALL_STATE(234)] = 5037,
  [SMALL_STATE(235)] = 5046,
  [SMALL_STATE(236)] = 5063,
  [SMALL_STATE(237)] = 5080,
  [SMALL_STATE(238)] = 5088,
  [SMALL_STATE(239)] = 5096,
  [SMALL_STATE(240)] = 5104,
  [SMALL_STATE(241)] = 5112,
  [SMALL_STATE(242)] = 5120,
  [SMALL_STATE(243)] = 5128,
  [SMALL_STATE(244)] = 5136,
  [SMALL_STATE(245)] = 5144,
  [SMALL_STATE(246)] = 5152,
  [SMALL_STATE(247)] = 5160,
  [SMALL_STATE(248)] = 5168,
  [SMALL_STATE(249)] = 5176,
  [SMALL_STATE(250)] = 5184,
  [SMALL_STATE(251)] = 5192,
  [SMALL_STATE(252)] = 5200,
  [SMALL_STATE(253)] = 5208,
  [SMALL_STATE(254)] = 5216,
  [SMALL_STATE(255)] = 5224,
  [SMALL_STATE(256)] = 5232,
  [SMALL_STATE(257)] = 5240,
  [SMALL_STATE(258)] = 5256,
  [SMALL_STATE(259)] = 5272,
  [SMALL_STATE(260)] = 5286,
  [SMALL_STATE(261)] = 5294,
  [SMALL_STATE(262)] = 5302,
  [SMALL_STATE(263)] = 5310,
  [SMALL_STATE(264)] = 5318,
  [SMALL_STATE(265)] = 5326,
  [SMALL_STATE(266)] = 5334,
  [SMALL_STATE(267)] = 5342,
  [SMALL_STATE(268)] = 5350,
  [SMALL_STATE(269)] = 5358,
  [SMALL_STATE(270)] = 5366,
  [SMALL_STATE(271)] = 5374,
  [SMALL_STATE(272)] = 5382,
  [SMALL_STATE(273)] = 5390,
  [SMALL_STATE(274)] = 5398,
  [SMALL_STATE(275)] = 5406,
  [SMALL_STATE(276)] = 5414,
  [SMALL_STATE(277)] = 5422,
  [SMALL_STATE(278)] = 5430,
  [SMALL_STATE(279)] = 5438,
  [SMALL_STATE(280)] = 5452,
  [SMALL_STATE(281)] = 5460,
  [SMALL_STATE(282)] = 5468,
  [SMALL_STATE(283)] = 5476,
  [SMALL_STATE(284)] = 5484,
  [SMALL_STATE(285)] = 5492,
  [SMALL_STATE(286)] = 5500,
  [SMALL_STATE(287)] = 5508,
  [SMALL_STATE(288)] = 5516,
  [SMALL_STATE(289)] = 5524,
  [SMALL_STATE(290)] = 5532,
  [SMALL_STATE(291)] = 5540,
  [SMALL_STATE(292)] = 5548,
  [SMALL_STATE(293)] = 5556,
  [SMALL_STATE(294)] = 5564,
  [SMALL_STATE(295)] = 5578,
  [SMALL_STATE(296)] = 5586,
  [SMALL_STATE(297)] = 5594,
  [SMALL_STATE(298)] = 5602,
  [SMALL_STATE(299)] = 5610,
  [SMALL_STATE(300)] = 5618,
  [SMALL_STATE(301)] = 5626,
  [SMALL_STATE(302)] = 5640,
  [SMALL_STATE(303)] = 5648,
  [SMALL_STATE(304)] = 5656,
  [SMALL_STATE(305)] = 5672,
  [SMALL_STATE(306)] = 5680,
  [SMALL_STATE(307)] = 5688,
  [SMALL_STATE(308)] = 5696,
  [SMALL_STATE(309)] = 5710,
  [SMALL_STATE(310)] = 5718,
  [SMALL_STATE(311)] = 5726,
  [SMALL_STATE(312)] = 5734,
  [SMALL_STATE(313)] = 5742,
  [SMALL_STATE(314)] = 5758,
  [SMALL_STATE(315)] = 5766,
  [SMALL_STATE(316)] = 5774,
  [SMALL_STATE(317)] = 5782,
  [SMALL_STATE(318)] = 5790,
  [SMALL_STATE(319)] = 5806,
  [SMALL_STATE(320)] = 5814,
  [SMALL_STATE(321)] = 5822,
  [SMALL_STATE(322)] = 5830,
  [SMALL_STATE(323)] = 5838,
  [SMALL_STATE(324)] = 5846,
  [SMALL_STATE(325)] = 5854,
  [SMALL_STATE(326)] = 5862,
  [SMALL_STATE(327)] = 5870,
  [SMALL_STATE(328)] = 5878,
  [SMALL_STATE(329)] = 5886,
  [SMALL_STATE(330)] = 5894,
  [SMALL_STATE(331)] = 5902,
  [SMALL_STATE(332)] = 5910,
  [SMALL_STATE(333)] = 5918,
  [SMALL_STATE(334)] = 5926,
  [SMALL_STATE(335)] = 5934,
  [SMALL_STATE(336)] = 5942,
  [SMALL_STATE(337)] = 5950,
  [SMALL_STATE(338)] = 5960,
  [SMALL_STATE(339)] = 5968,
  [SMALL_STATE(340)] = 5976,
  [SMALL_STATE(341)] = 5984,
  [SMALL_STATE(342)] = 5994,
  [SMALL_STATE(343)] = 6010,
  [SMALL_STATE(344)] = 6020,
  [SMALL_STATE(345)] = 6030,
  [SMALL_STATE(346)] = 6040,
  [SMALL_STATE(347)] = 6050,
  [SMALL_STATE(348)] = 6058,
  [SMALL_STATE(349)] = 6072,
  [SMALL_STATE(350)] = 6086,
  [SMALL_STATE(351)] = 6094,
  [SMALL_STATE(352)] = 6102,
  [SMALL_STATE(353)] = 6110,
  [SMALL_STATE(354)] = 6118,
  [SMALL_STATE(355)] = 6126,
  [SMALL_STATE(356)] = 6134,
  [SMALL_STATE(357)] = 6142,
  [SMALL_STATE(358)] = 6150,
  [SMALL_STATE(359)] = 6158,
  [SMALL_STATE(360)] = 6166,
  [SMALL_STATE(361)] = 6174,
  [SMALL_STATE(362)] = 6188,
  [SMALL_STATE(363)] = 6196,
  [SMALL_STATE(364)] = 6204,
  [SMALL_STATE(365)] = 6218,
  [SMALL_STATE(366)] = 6226,
  [SMALL_STATE(367)] = 6234,
  [SMALL_STATE(368)] = 6242,
  [SMALL_STATE(369)] = 6250,
  [SMALL_STATE(370)] = 6258,
  [SMALL_STATE(371)] = 6266,
  [SMALL_STATE(372)] = 6280,
  [SMALL_STATE(373)] = 6288,
  [SMALL_STATE(374)] = 6304,
  [SMALL_STATE(375)] = 6312,
  [SMALL_STATE(376)] = 6320,
  [SMALL_STATE(377)] = 6328,
  [SMALL_STATE(378)] = 6336,
  [SMALL_STATE(379)] = 6344,
  [SMALL_STATE(380)] = 6352,
  [SMALL_STATE(381)] = 6360,
  [SMALL_STATE(382)] = 6368,
  [SMALL_STATE(383)] = 6376,
  [SMALL_STATE(384)] = 6384,
  [SMALL_STATE(385)] = 6392,
  [SMALL_STATE(386)] = 6400,
  [SMALL_STATE(387)] = 6408,
  [SMALL_STATE(388)] = 6416,
  [SMALL_STATE(389)] = 6432,
  [SMALL_STATE(390)] = 6446,
  [SMALL_STATE(391)] = 6460,
  [SMALL_STATE(392)] = 6474,
  [SMALL_STATE(393)] = 6488,
  [SMALL_STATE(394)] = 6502,
  [SMALL_STATE(395)] = 6516,
  [SMALL_STATE(396)] = 6524,
  [SMALL_STATE(397)] = 6540,
  [SMALL_STATE(398)] = 6548,
  [SMALL_STATE(399)] = 6562,
  [SMALL_STATE(400)] = 6570,
  [SMALL_STATE(401)] = 6578,
  [SMALL_STATE(402)] = 6592,
  [SMALL_STATE(403)] = 6608,
  [SMALL_STATE(404)] = 6624,
  [SMALL_STATE(405)] = 6640,
  [SMALL_STATE(406)] = 6648,
  [SMALL_STATE(407)] = 6662,
  [SMALL_STATE(408)] = 6676,
  [SMALL_STATE(409)] = 6690,
  [SMALL_STATE(410)] = 6698,
  [SMALL_STATE(411)] = 6714,
  [SMALL_STATE(412)] = 6730,
  [SMALL_STATE(413)] = 6744,
  [SMALL_STATE(414)] = 6760,
  [SMALL_STATE(415)] = 6774,
  [SMALL_STATE(416)] = 6790,
  [SMALL_STATE(417)] = 6806,
  [SMALL_STATE(418)] = 6822,
  [SMALL_STATE(419)] = 6830,
  [SMALL_STATE(420)] = 6846,
  [SMALL_STATE(421)] = 6860,
  [SMALL_STATE(422)] = 6874,
  [SMALL_STATE(423)] = 6888,
  [SMALL_STATE(424)] = 6904,
  [SMALL_STATE(425)] = 6920,
  [SMALL_STATE(426)] = 6934,
  [SMALL_STATE(427)] = 6948,
  [SMALL_STATE(428)] = 6962,
  [SMALL_STATE(429)] = 6976,
  [SMALL_STATE(430)] = 6990,
  [SMALL_STATE(431)] = 7004,
  [SMALL_STATE(432)] = 7018,
  [SMALL_STATE(433)] = 7034,
  [SMALL_STATE(434)] = 7048,
  [SMALL_STATE(435)] = 7056,
  [SMALL_STATE(436)] = 7064,
  [SMALL_STATE(437)] = 7080,
  [SMALL_STATE(438)] = 7094,
  [SMALL_STATE(439)] = 7102,
  [SMALL_STATE(440)] = 7110,
  [SMALL_STATE(441)] = 7118,
  [SMALL_STATE(442)] = 7126,
  [SMALL_STATE(443)] = 7142,
  [SMALL_STATE(444)] = 7156,
  [SMALL_STATE(445)] = 7170,
  [SMALL_STATE(446)] = 7178,
  [SMALL_STATE(447)] = 7192,
  [SMALL_STATE(448)] = 7206,
  [SMALL_STATE(449)] = 7222,
  [SMALL_STATE(450)] = 7230,
  [SMALL_STATE(451)] = 7244,
  [SMALL_STATE(452)] = 7258,
  [SMALL_STATE(453)] = 7266,
  [SMALL_STATE(454)] = 7274,
  [SMALL_STATE(455)] = 7288,
  [SMALL_STATE(456)] = 7302,
  [SMALL_STATE(457)] = 7310,
  [SMALL_STATE(458)] = 7324,
  [SMALL_STATE(459)] = 7338,
  [SMALL_STATE(460)] = 7346,
  [SMALL_STATE(461)] = 7354,
  [SMALL_STATE(462)] = 7362,
  [SMALL_STATE(463)] = 7370,
  [SMALL_STATE(464)] = 7378,
  [SMALL_STATE(465)] = 7386,
  [SMALL_STATE(466)] = 7400,
  [SMALL_STATE(467)] = 7414,
  [SMALL_STATE(468)] = 7422,
  [SMALL_STATE(469)] = 7430,
  [SMALL_STATE(470)] = 7446,
  [SMALL_STATE(471)] = 7454,
  [SMALL_STATE(472)] = 7470,
  [SMALL_STATE(473)] = 7484,
  [SMALL_STATE(474)] = 7500,
  [SMALL_STATE(475)] = 7516,
  [SMALL_STATE(476)] = 7524,
  [SMALL_STATE(477)] = 7532,
  [SMALL_STATE(478)] = 7540,
  [SMALL_STATE(479)] = 7548,
  [SMALL_STATE(480)] = 7562,
  [SMALL_STATE(481)] = 7576,
  [SMALL_STATE(482)] = 7590,
  [SMALL_STATE(483)] = 7598,
  [SMALL_STATE(484)] = 7606,
  [SMALL_STATE(485)] = 7613,
  [SMALL_STATE(486)] = 7620,
  [SMALL_STATE(487)] = 7627,
  [SMALL_STATE(488)] = 7634,
  [SMALL_STATE(489)] = 7641,
  [SMALL_STATE(490)] = 7648,
  [SMALL_STATE(491)] = 7659,
  [SMALL_STATE(492)] = 7670,
  [SMALL_STATE(493)] = 7677,
  [SMALL_STATE(494)] = 7684,
  [SMALL_STATE(495)] = 7691,
  [SMALL_STATE(496)] = 7698,
  [SMALL_STATE(497)] = 7705,
  [SMALL_STATE(498)] = 7712,
  [SMALL_STATE(499)] = 7719,
  [SMALL_STATE(500)] = 7726,
  [SMALL_STATE(501)] = 7737,
  [SMALL_STATE(502)] = 7744,
  [SMALL_STATE(503)] = 7751,
  [SMALL_STATE(504)] = 7758,
  [SMALL_STATE(505)] = 7765,
  [SMALL_STATE(506)] = 7772,
  [SMALL_STATE(507)] = 7779,
  [SMALL_STATE(508)] = 7786,
  [SMALL_STATE(509)] = 7793,
  [SMALL_STATE(510)] = 7800,
  [SMALL_STATE(511)] = 7807,
  [SMALL_STATE(512)] = 7820,
  [SMALL_STATE(513)] = 7827,
  [SMALL_STATE(514)] = 7840,
  [SMALL_STATE(515)] = 7847,
  [SMALL_STATE(516)] = 7860,
  [SMALL_STATE(517)] = 7867,
  [SMALL_STATE(518)] = 7878,
  [SMALL_STATE(519)] = 7889,
  [SMALL_STATE(520)] = 7896,
  [SMALL_STATE(521)] = 7903,
  [SMALL_STATE(522)] = 7910,
  [SMALL_STATE(523)] = 7923,
  [SMALL_STATE(524)] = 7930,
  [SMALL_STATE(525)] = 7943,
  [SMALL_STATE(526)] = 7956,
  [SMALL_STATE(527)] = 7969,
  [SMALL_STATE(528)] = 7976,
  [SMALL_STATE(529)] = 7987,
  [SMALL_STATE(530)] = 7994,
  [SMALL_STATE(531)] = 8001,
  [SMALL_STATE(532)] = 8008,
  [SMALL_STATE(533)] = 8015,
  [SMALL_STATE(534)] = 8022,
  [SMALL_STATE(535)] = 8029,
  [SMALL_STATE(536)] = 8036,
  [SMALL_STATE(537)] = 8043,
  [SMALL_STATE(538)] = 8050,
  [SMALL_STATE(539)] = 8057,
  [SMALL_STATE(540)] = 8064,
  [SMALL_STATE(541)] = 8071,
  [SMALL_STATE(542)] = 8078,
  [SMALL_STATE(543)] = 8085,
  [SMALL_STATE(544)] = 8092,
  [SMALL_STATE(545)] = 8099,
  [SMALL_STATE(546)] = 8106,
  [SMALL_STATE(547)] = 8113,
  [SMALL_STATE(548)] = 8126,
  [SMALL_STATE(549)] = 8133,
  [SMALL_STATE(550)] = 8140,
  [SMALL_STATE(551)] = 8147,
  [SMALL_STATE(552)] = 8154,
  [SMALL_STATE(553)] = 8161,
  [SMALL_STATE(554)] = 8168,
  [SMALL_STATE(555)] = 8175,
  [SMALL_STATE(556)] = 8182,
  [SMALL_STATE(557)] = 8189,
  [SMALL_STATE(558)] = 8196,
  [SMALL_STATE(559)] = 8203,
  [SMALL_STATE(560)] = 8210,
  [SMALL_STATE(561)] = 8217,
  [SMALL_STATE(562)] = 8224,
  [SMALL_STATE(563)] = 8237,
  [SMALL_STATE(564)] = 8244,
  [SMALL_STATE(565)] = 8251,
  [SMALL_STATE(566)] = 8258,
  [SMALL_STATE(567)] = 8265,
  [SMALL_STATE(568)] = 8272,
  [SMALL_STATE(569)] = 8279,
  [SMALL_STATE(570)] = 8290,
  [SMALL_STATE(571)] = 8297,
  [SMALL_STATE(572)] = 8304,
  [SMALL_STATE(573)] = 8311,
  [SMALL_STATE(574)] = 8318,
  [SMALL_STATE(575)] = 8325,
  [SMALL_STATE(576)] = 8332,
  [SMALL_STATE(577)] = 8339,
  [SMALL_STATE(578)] = 8346,
  [SMALL_STATE(579)] = 8353,
  [SMALL_STATE(580)] = 8360,
  [SMALL_STATE(581)] = 8367,
  [SMALL_STATE(582)] = 8374,
  [SMALL_STATE(583)] = 8381,
  [SMALL_STATE(584)] = 8388,
  [SMALL_STATE(585)] = 8395,
  [SMALL_STATE(586)] = 8402,
  [SMALL_STATE(587)] = 8409,
  [SMALL_STATE(588)] = 8416,
  [SMALL_STATE(589)] = 8423,
  [SMALL_STATE(590)] = 8430,
  [SMALL_STATE(591)] = 8437,
  [SMALL_STATE(592)] = 8444,
  [SMALL_STATE(593)] = 8451,
  [SMALL_STATE(594)] = 8458,
  [SMALL_STATE(595)] = 8465,
  [SMALL_STATE(596)] = 8474,
  [SMALL_STATE(597)] = 8487,
  [SMALL_STATE(598)] = 8494,
  [SMALL_STATE(599)] = 8505,
  [SMALL_STATE(600)] = 8518,
  [SMALL_STATE(601)] = 8527,
  [SMALL_STATE(602)] = 8540,
  [SMALL_STATE(603)] = 8547,
  [SMALL_STATE(604)] = 8560,
  [SMALL_STATE(605)] = 8573,
  [SMALL_STATE(606)] = 8586,
  [SMALL_STATE(607)] = 8599,
  [SMALL_STATE(608)] = 8606,
  [SMALL_STATE(609)] = 8613,
  [SMALL_STATE(610)] = 8620,
  [SMALL_STATE(611)] = 8633,
  [SMALL_STATE(612)] = 8644,
  [SMALL_STATE(613)] = 8651,
  [SMALL_STATE(614)] = 8658,
  [SMALL_STATE(615)] = 8665,
  [SMALL_STATE(616)] = 8672,
  [SMALL_STATE(617)] = 8683,
  [SMALL_STATE(618)] = 8694,
  [SMALL_STATE(619)] = 8701,
  [SMALL_STATE(620)] = 8708,
  [SMALL_STATE(621)] = 8715,
  [SMALL_STATE(622)] = 8722,
  [SMALL_STATE(623)] = 8729,
  [SMALL_STATE(624)] = 8736,
  [SMALL_STATE(625)] = 8743,
  [SMALL_STATE(626)] = 8750,
  [SMALL_STATE(627)] = 8757,
  [SMALL_STATE(628)] = 8764,
  [SMALL_STATE(629)] = 8771,
  [SMALL_STATE(630)] = 8784,
  [SMALL_STATE(631)] = 8791,
  [SMALL_STATE(632)] = 8798,
  [SMALL_STATE(633)] = 8805,
  [SMALL_STATE(634)] = 8812,
  [SMALL_STATE(635)] = 8819,
  [SMALL_STATE(636)] = 8830,
  [SMALL_STATE(637)] = 8837,
  [SMALL_STATE(638)] = 8844,
  [SMALL_STATE(639)] = 8851,
  [SMALL_STATE(640)] = 8858,
  [SMALL_STATE(641)] = 8871,
  [SMALL_STATE(642)] = 8884,
  [SMALL_STATE(643)] = 8891,
  [SMALL_STATE(644)] = 8900,
  [SMALL_STATE(645)] = 8907,
  [SMALL_STATE(646)] = 8916,
  [SMALL_STATE(647)] = 8929,
  [SMALL_STATE(648)] = 8936,
  [SMALL_STATE(649)] = 8943,
  [SMALL_STATE(650)] = 8950,
  [SMALL_STATE(651)] = 8957,
  [SMALL_STATE(652)] = 8964,
  [SMALL_STATE(653)] = 8971,
  [SMALL_STATE(654)] = 8978,
  [SMALL_STATE(655)] = 8985,
  [SMALL_STATE(656)] = 8992,
  [SMALL_STATE(657)] = 8999,
  [SMALL_STATE(658)] = 9006,
  [SMALL_STATE(659)] = 9013,
  [SMALL_STATE(660)] = 9022,
  [SMALL_STATE(661)] = 9029,
  [SMALL_STATE(662)] = 9036,
  [SMALL_STATE(663)] = 9043,
  [SMALL_STATE(664)] = 9050,
  [SMALL_STATE(665)] = 9057,
  [SMALL_STATE(666)] = 9064,
  [SMALL_STATE(667)] = 9071,
  [SMALL_STATE(668)] = 9078,
  [SMALL_STATE(669)] = 9089,
  [SMALL_STATE(670)] = 9096,
  [SMALL_STATE(671)] = 9103,
  [SMALL_STATE(672)] = 9110,
  [SMALL_STATE(673)] = 9117,
  [SMALL_STATE(674)] = 9124,
  [SMALL_STATE(675)] = 9131,
  [SMALL_STATE(676)] = 9138,
  [SMALL_STATE(677)] = 9145,
  [SMALL_STATE(678)] = 9158,
  [SMALL_STATE(679)] = 9165,
  [SMALL_STATE(680)] = 9172,
  [SMALL_STATE(681)] = 9179,
  [SMALL_STATE(682)] = 9186,
  [SMALL_STATE(683)] = 9193,
  [SMALL_STATE(684)] = 9200,
  [SMALL_STATE(685)] = 9207,
  [SMALL_STATE(686)] = 9214,
  [SMALL_STATE(687)] = 9221,
  [SMALL_STATE(688)] = 9228,
  [SMALL_STATE(689)] = 9235,
  [SMALL_STATE(690)] = 9242,
  [SMALL_STATE(691)] = 9249,
  [SMALL_STATE(692)] = 9256,
  [SMALL_STATE(693)] = 9263,
  [SMALL_STATE(694)] = 9270,
  [SMALL_STATE(695)] = 9277,
  [SMALL_STATE(696)] = 9284,
  [SMALL_STATE(697)] = 9291,
  [SMALL_STATE(698)] = 9298,
  [SMALL_STATE(699)] = 9305,
  [SMALL_STATE(700)] = 9312,
  [SMALL_STATE(701)] = 9319,
  [SMALL_STATE(702)] = 9332,
  [SMALL_STATE(703)] = 9339,
  [SMALL_STATE(704)] = 9346,
  [SMALL_STATE(705)] = 9353,
  [SMALL_STATE(706)] = 9360,
  [SMALL_STATE(707)] = 9367,
  [SMALL_STATE(708)] = 9374,
  [SMALL_STATE(709)] = 9387,
  [SMALL_STATE(710)] = 9394,
  [SMALL_STATE(711)] = 9401,
  [SMALL_STATE(712)] = 9408,
  [SMALL_STATE(713)] = 9421,
  [SMALL_STATE(714)] = 9428,
  [SMALL_STATE(715)] = 9435,
  [SMALL_STATE(716)] = 9442,
  [SMALL_STATE(717)] = 9449,
  [SMALL_STATE(718)] = 9460,
  [SMALL_STATE(719)] = 9473,
  [SMALL_STATE(720)] = 9484,
  [SMALL_STATE(721)] = 9491,
  [SMALL_STATE(722)] = 9498,
  [SMALL_STATE(723)] = 9511,
  [SMALL_STATE(724)] = 9524,
  [SMALL_STATE(725)] = 9531,
  [SMALL_STATE(726)] = 9538,
  [SMALL_STATE(727)] = 9545,
  [SMALL_STATE(728)] = 9552,
  [SMALL_STATE(729)] = 9559,
  [SMALL_STATE(730)] = 9566,
  [SMALL_STATE(731)] = 9579,
  [SMALL_STATE(732)] = 9592,
  [SMALL_STATE(733)] = 9605,
  [SMALL_STATE(734)] = 9612,
  [SMALL_STATE(735)] = 9619,
  [SMALL_STATE(736)] = 9626,
  [SMALL_STATE(737)] = 9633,
  [SMALL_STATE(738)] = 9640,
  [SMALL_STATE(739)] = 9653,
  [SMALL_STATE(740)] = 9666,
  [SMALL_STATE(741)] = 9679,
  [SMALL_STATE(742)] = 9692,
  [SMALL_STATE(743)] = 9705,
  [SMALL_STATE(744)] = 9712,
  [SMALL_STATE(745)] = 9719,
  [SMALL_STATE(746)] = 9732,
  [SMALL_STATE(747)] = 9739,
  [SMALL_STATE(748)] = 9746,
  [SMALL_STATE(749)] = 9753,
  [SMALL_STATE(750)] = 9760,
  [SMALL_STATE(751)] = 9767,
  [SMALL_STATE(752)] = 9780,
  [SMALL_STATE(753)] = 9787,
  [SMALL_STATE(754)] = 9800,
  [SMALL_STATE(755)] = 9807,
  [SMALL_STATE(756)] = 9814,
  [SMALL_STATE(757)] = 9821,
  [SMALL_STATE(758)] = 9828,
  [SMALL_STATE(759)] = 9839,
  [SMALL_STATE(760)] = 9850,
  [SMALL_STATE(761)] = 9857,
  [SMALL_STATE(762)] = 9868,
  [SMALL_STATE(763)] = 9879,
  [SMALL_STATE(764)] = 9888,
  [SMALL_STATE(765)] = 9901,
  [SMALL_STATE(766)] = 9912,
  [SMALL_STATE(767)] = 9923,
  [SMALL_STATE(768)] = 9934,
  [SMALL_STATE(769)] = 9945,
  [SMALL_STATE(770)] = 9954,
  [SMALL_STATE(771)] = 9961,
  [SMALL_STATE(772)] = 9968,
  [SMALL_STATE(773)] = 9975,
  [SMALL_STATE(774)] = 9988,
  [SMALL_STATE(775)] = 9995,
  [SMALL_STATE(776)] = 10005,
  [SMALL_STATE(777)] = 10015,
  [SMALL_STATE(778)] = 10021,
  [SMALL_STATE(779)] = 10031,
  [SMALL_STATE(780)] = 10041,
  [SMALL_STATE(781)] = 10047,
  [SMALL_STATE(782)] = 10057,
  [SMALL_STATE(783)] = 10067,
  [SMALL_STATE(784)] = 10077,
  [SMALL_STATE(785)] = 10087,
  [SMALL_STATE(786)] = 10097,
  [SMALL_STATE(787)] = 10107,
  [SMALL_STATE(788)] = 10113,
  [SMALL_STATE(789)] = 10123,
  [SMALL_STATE(790)] = 10133,
  [SMALL_STATE(791)] = 10143,
  [SMALL_STATE(792)] = 10153,
  [SMALL_STATE(793)] = 10163,
  [SMALL_STATE(794)] = 10173,
  [SMALL_STATE(795)] = 10183,
  [SMALL_STATE(796)] = 10193,
  [SMALL_STATE(797)] = 10203,
  [SMALL_STATE(798)] = 10213,
  [SMALL_STATE(799)] = 10221,
  [SMALL_STATE(800)] = 10227,
  [SMALL_STATE(801)] = 10233,
  [SMALL_STATE(802)] = 10243,
  [SMALL_STATE(803)] = 10249,
  [SMALL_STATE(804)] = 10257,
  [SMALL_STATE(805)] = 10263,
  [SMALL_STATE(806)] = 10269,
  [SMALL_STATE(807)] = 10275,
  [SMALL_STATE(808)] = 10281,
  [SMALL_STATE(809)] = 10291,
  [SMALL_STATE(810)] = 10297,
  [SMALL_STATE(811)] = 10303,
  [SMALL_STATE(812)] = 10313,
  [SMALL_STATE(813)] = 10323,
  [SMALL_STATE(814)] = 10333,
  [SMALL_STATE(815)] = 10343,
  [SMALL_STATE(816)] = 10349,
  [SMALL_STATE(817)] = 10355,
  [SMALL_STATE(818)] = 10361,
  [SMALL_STATE(819)] = 10371,
  [SMALL_STATE(820)] = 10381,
  [SMALL_STATE(821)] = 10387,
  [SMALL_STATE(822)] = 10397,
  [SMALL_STATE(823)] = 10403,
  [SMALL_STATE(824)] = 10409,
  [SMALL_STATE(825)] = 10415,
  [SMALL_STATE(826)] = 10421,
  [SMALL_STATE(827)] = 10427,
  [SMALL_STATE(828)] = 10433,
  [SMALL_STATE(829)] = 10443,
  [SMALL_STATE(830)] = 10449,
  [SMALL_STATE(831)] = 10457,
  [SMALL_STATE(832)] = 10463,
  [SMALL_STATE(833)] = 10469,
  [SMALL_STATE(834)] = 10475,
  [SMALL_STATE(835)] = 10485,
  [SMALL_STATE(836)] = 10491,
  [SMALL_STATE(837)] = 10497,
  [SMALL_STATE(838)] = 10503,
  [SMALL_STATE(839)] = 10509,
  [SMALL_STATE(840)] = 10515,
  [SMALL_STATE(841)] = 10521,
  [SMALL_STATE(842)] = 10527,
  [SMALL_STATE(843)] = 10533,
  [SMALL_STATE(844)] = 10539,
  [SMALL_STATE(845)] = 10545,
  [SMALL_STATE(846)] = 10551,
  [SMALL_STATE(847)] = 10557,
  [SMALL_STATE(848)] = 10563,
  [SMALL_STATE(849)] = 10569,
  [SMALL_STATE(850)] = 10575,
  [SMALL_STATE(851)] = 10585,
  [SMALL_STATE(852)] = 10595,
  [SMALL_STATE(853)] = 10601,
  [SMALL_STATE(854)] = 10611,
  [SMALL_STATE(855)] = 10621,
  [SMALL_STATE(856)] = 10629,
  [SMALL_STATE(857)] = 10639,
  [SMALL_STATE(858)] = 10645,
  [SMALL_STATE(859)] = 10655,
  [SMALL_STATE(860)] = 10663,
  [SMALL_STATE(861)] = 10669,
  [SMALL_STATE(862)] = 10679,
  [SMALL_STATE(863)] = 10687,
  [SMALL_STATE(864)] = 10697,
  [SMALL_STATE(865)] = 10707,
  [SMALL_STATE(866)] = 10717,
  [SMALL_STATE(867)] = 10725,
  [SMALL_STATE(868)] = 10735,
  [SMALL_STATE(869)] = 10745,
  [SMALL_STATE(870)] = 10755,
  [SMALL_STATE(871)] = 10765,
  [SMALL_STATE(872)] = 10773,
  [SMALL_STATE(873)] = 10781,
  [SMALL_STATE(874)] = 10791,
  [SMALL_STATE(875)] = 10801,
  [SMALL_STATE(876)] = 10807,
  [SMALL_STATE(877)] = 10815,
  [SMALL_STATE(878)] = 10825,
  [SMALL_STATE(879)] = 10835,
  [SMALL_STATE(880)] = 10845,
  [SMALL_STATE(881)] = 10855,
  [SMALL_STATE(882)] = 10863,
  [SMALL_STATE(883)] = 10873,
  [SMALL_STATE(884)] = 10883,
  [SMALL_STATE(885)] = 10893,
  [SMALL_STATE(886)] = 10903,
  [SMALL_STATE(887)] = 10913,
  [SMALL_STATE(888)] = 10923,
  [SMALL_STATE(889)] = 10933,
  [SMALL_STATE(890)] = 10943,
  [SMALL_STATE(891)] = 10953,
  [SMALL_STATE(892)] = 10963,
  [SMALL_STATE(893)] = 10973,
  [SMALL_STATE(894)] = 10983,
  [SMALL_STATE(895)] = 10993,
  [SMALL_STATE(896)] = 11003,
  [SMALL_STATE(897)] = 11013,
  [SMALL_STATE(898)] = 11023,
  [SMALL_STATE(899)] = 11033,
  [SMALL_STATE(900)] = 11041,
  [SMALL_STATE(901)] = 11051,
  [SMALL_STATE(902)] = 11061,
  [SMALL_STATE(903)] = 11071,
  [SMALL_STATE(904)] = 11081,
  [SMALL_STATE(905)] = 11089,
  [SMALL_STATE(906)] = 11095,
  [SMALL_STATE(907)] = 11105,
  [SMALL_STATE(908)] = 11115,
  [SMALL_STATE(909)] = 11125,
  [SMALL_STATE(910)] = 11135,
  [SMALL_STATE(911)] = 11145,
  [SMALL_STATE(912)] = 11155,
  [SMALL_STATE(913)] = 11165,
  [SMALL_STATE(914)] = 11175,
  [SMALL_STATE(915)] = 11185,
  [SMALL_STATE(916)] = 11195,
  [SMALL_STATE(917)] = 11205,
  [SMALL_STATE(918)] = 11215,
  [SMALL_STATE(919)] = 11225,
  [SMALL_STATE(920)] = 11235,
  [SMALL_STATE(921)] = 11245,
  [SMALL_STATE(922)] = 11255,
  [SMALL_STATE(923)] = 11265,
  [SMALL_STATE(924)] = 11275,
  [SMALL_STATE(925)] = 11285,
  [SMALL_STATE(926)] = 11295,
  [SMALL_STATE(927)] = 11305,
  [SMALL_STATE(928)] = 11315,
  [SMALL_STATE(929)] = 11325,
  [SMALL_STATE(930)] = 11335,
  [SMALL_STATE(931)] = 11345,
  [SMALL_STATE(932)] = 11351,
  [SMALL_STATE(933)] = 11361,
  [SMALL_STATE(934)] = 11371,
  [SMALL_STATE(935)] = 11377,
  [SMALL_STATE(936)] = 11387,
  [SMALL_STATE(937)] = 11393,
  [SMALL_STATE(938)] = 11403,
  [SMALL_STATE(939)] = 11413,
  [SMALL_STATE(940)] = 11423,
  [SMALL_STATE(941)] = 11433,
  [SMALL_STATE(942)] = 11443,
  [SMALL_STATE(943)] = 11453,
  [SMALL_STATE(944)] = 11463,
  [SMALL_STATE(945)] = 11473,
  [SMALL_STATE(946)] = 11483,
  [SMALL_STATE(947)] = 11491,
  [SMALL_STATE(948)] = 11499,
  [SMALL_STATE(949)] = 11509,
  [SMALL_STATE(950)] = 11519,
  [SMALL_STATE(951)] = 11529,
  [SMALL_STATE(952)] = 11537,
  [SMALL_STATE(953)] = 11547,
  [SMALL_STATE(954)] = 11557,
  [SMALL_STATE(955)] = 11567,
  [SMALL_STATE(956)] = 11577,
  [SMALL_STATE(957)] = 11587,
  [SMALL_STATE(958)] = 11597,
  [SMALL_STATE(959)] = 11607,
  [SMALL_STATE(960)] = 11617,
  [SMALL_STATE(961)] = 11627,
  [SMALL_STATE(962)] = 11637,
  [SMALL_STATE(963)] = 11647,
  [SMALL_STATE(964)] = 11653,
  [SMALL_STATE(965)] = 11663,
  [SMALL_STATE(966)] = 11673,
  [SMALL_STATE(967)] = 11683,
  [SMALL_STATE(968)] = 11693,
  [SMALL_STATE(969)] = 11703,
  [SMALL_STATE(970)] = 11710,
  [SMALL_STATE(971)] = 11717,
  [SMALL_STATE(972)] = 11724,
  [SMALL_STATE(973)] = 11731,
  [SMALL_STATE(974)] = 11738,
  [SMALL_STATE(975)] = 11745,
  [SMALL_STATE(976)] = 11750,
  [SMALL_STATE(977)] = 11757,
  [SMALL_STATE(978)] = 11764,
  [SMALL_STATE(979)] = 11769,
  [SMALL_STATE(980)] = 11774,
  [SMALL_STATE(981)] = 11781,
  [SMALL_STATE(982)] = 11786,
  [SMALL_STATE(983)] = 11793,
  [SMALL_STATE(984)] = 11800,
  [SMALL_STATE(985)] = 11807,
  [SMALL_STATE(986)] = 11814,
  [SMALL_STATE(987)] = 11821,
  [SMALL_STATE(988)] = 11826,
  [SMALL_STATE(989)] = 11833,
  [SMALL_STATE(990)] = 11840,
  [SMALL_STATE(991)] = 11847,
  [SMALL_STATE(992)] = 11854,
  [SMALL_STATE(993)] = 11861,
  [SMALL_STATE(994)] = 11868,
  [SMALL_STATE(995)] = 11875,
  [SMALL_STATE(996)] = 11882,
  [SMALL_STATE(997)] = 11889,
  [SMALL_STATE(998)] = 11894,
  [SMALL_STATE(999)] = 11899,
  [SMALL_STATE(1000)] = 11906,
  [SMALL_STATE(1001)] = 11911,
  [SMALL_STATE(1002)] = 11918,
  [SMALL_STATE(1003)] = 11925,
  [SMALL_STATE(1004)] = 11932,
  [SMALL_STATE(1005)] = 11939,
  [SMALL_STATE(1006)] = 11946,
  [SMALL_STATE(1007)] = 11951,
  [SMALL_STATE(1008)] = 11958,
  [SMALL_STATE(1009)] = 11963,
  [SMALL_STATE(1010)] = 11970,
  [SMALL_STATE(1011)] = 11977,
  [SMALL_STATE(1012)] = 11982,
  [SMALL_STATE(1013)] = 11987,
  [SMALL_STATE(1014)] = 11994,
  [SMALL_STATE(1015)] = 12001,
  [SMALL_STATE(1016)] = 12006,
  [SMALL_STATE(1017)] = 12013,
  [SMALL_STATE(1018)] = 12020,
  [SMALL_STATE(1019)] = 12027,
  [SMALL_STATE(1020)] = 12034,
  [SMALL_STATE(1021)] = 12039,
  [SMALL_STATE(1022)] = 12046,
  [SMALL_STATE(1023)] = 12051,
  [SMALL_STATE(1024)] = 12058,
  [SMALL_STATE(1025)] = 12065,
  [SMALL_STATE(1026)] = 12072,
  [SMALL_STATE(1027)] = 12077,
  [SMALL_STATE(1028)] = 12084,
  [SMALL_STATE(1029)] = 12091,
  [SMALL_STATE(1030)] = 12098,
  [SMALL_STATE(1031)] = 12103,
  [SMALL_STATE(1032)] = 12110,
  [SMALL_STATE(1033)] = 12117,
  [SMALL_STATE(1034)] = 12124,
  [SMALL_STATE(1035)] = 12131,
  [SMALL_STATE(1036)] = 12138,
  [SMALL_STATE(1037)] = 12145,
  [SMALL_STATE(1038)] = 12152,
  [SMALL_STATE(1039)] = 12159,
  [SMALL_STATE(1040)] = 12166,
  [SMALL_STATE(1041)] = 12173,
  [SMALL_STATE(1042)] = 12180,
  [SMALL_STATE(1043)] = 12187,
  [SMALL_STATE(1044)] = 12194,
  [SMALL_STATE(1045)] = 12201,
  [SMALL_STATE(1046)] = 12208,
  [SMALL_STATE(1047)] = 12213,
  [SMALL_STATE(1048)] = 12218,
  [SMALL_STATE(1049)] = 12225,
  [SMALL_STATE(1050)] = 12232,
  [SMALL_STATE(1051)] = 12239,
  [SMALL_STATE(1052)] = 12246,
  [SMALL_STATE(1053)] = 12253,
  [SMALL_STATE(1054)] = 12258,
  [SMALL_STATE(1055)] = 12265,
  [SMALL_STATE(1056)] = 12272,
  [SMALL_STATE(1057)] = 12279,
  [SMALL_STATE(1058)] = 12286,
  [SMALL_STATE(1059)] = 12293,
  [SMALL_STATE(1060)] = 12300,
  [SMALL_STATE(1061)] = 12307,
  [SMALL_STATE(1062)] = 12314,
  [SMALL_STATE(1063)] = 12321,
  [SMALL_STATE(1064)] = 12328,
  [SMALL_STATE(1065)] = 12335,
  [SMALL_STATE(1066)] = 12342,
  [SMALL_STATE(1067)] = 12349,
  [SMALL_STATE(1068)] = 12356,
  [SMALL_STATE(1069)] = 12363,
  [SMALL_STATE(1070)] = 12370,
  [SMALL_STATE(1071)] = 12377,
  [SMALL_STATE(1072)] = 12382,
  [SMALL_STATE(1073)] = 12389,
  [SMALL_STATE(1074)] = 12394,
  [SMALL_STATE(1075)] = 12398,
  [SMALL_STATE(1076)] = 12402,
  [SMALL_STATE(1077)] = 12406,
  [SMALL_STATE(1078)] = 12410,
  [SMALL_STATE(1079)] = 12414,
  [SMALL_STATE(1080)] = 12418,
  [SMALL_STATE(1081)] = 12422,
  [SMALL_STATE(1082)] = 12426,
  [SMALL_STATE(1083)] = 12430,
  [SMALL_STATE(1084)] = 12434,
  [SMALL_STATE(1085)] = 12438,
  [SMALL_STATE(1086)] = 12442,
  [SMALL_STATE(1087)] = 12446,
  [SMALL_STATE(1088)] = 12450,
  [SMALL_STATE(1089)] = 12454,
  [SMALL_STATE(1090)] = 12458,
  [SMALL_STATE(1091)] = 12462,
  [SMALL_STATE(1092)] = 12466,
  [SMALL_STATE(1093)] = 12470,
  [SMALL_STATE(1094)] = 12474,
  [SMALL_STATE(1095)] = 12478,
  [SMALL_STATE(1096)] = 12482,
  [SMALL_STATE(1097)] = 12486,
  [SMALL_STATE(1098)] = 12490,
  [SMALL_STATE(1099)] = 12494,
  [SMALL_STATE(1100)] = 12498,
  [SMALL_STATE(1101)] = 12502,
  [SMALL_STATE(1102)] = 12506,
  [SMALL_STATE(1103)] = 12510,
  [SMALL_STATE(1104)] = 12514,
  [SMALL_STATE(1105)] = 12518,
  [SMALL_STATE(1106)] = 12522,
  [SMALL_STATE(1107)] = 12526,
  [SMALL_STATE(1108)] = 12530,
  [SMALL_STATE(1109)] = 12534,
  [SMALL_STATE(1110)] = 12538,
  [SMALL_STATE(1111)] = 12542,
  [SMALL_STATE(1112)] = 12546,
  [SMALL_STATE(1113)] = 12550,
  [SMALL_STATE(1114)] = 12554,
  [SMALL_STATE(1115)] = 12558,
  [SMALL_STATE(1116)] = 12562,
  [SMALL_STATE(1117)] = 12566,
  [SMALL_STATE(1118)] = 12570,
  [SMALL_STATE(1119)] = 12574,
  [SMALL_STATE(1120)] = 12578,
  [SMALL_STATE(1121)] = 12582,
  [SMALL_STATE(1122)] = 12586,
  [SMALL_STATE(1123)] = 12590,
  [SMALL_STATE(1124)] = 12594,
  [SMALL_STATE(1125)] = 12598,
  [SMALL_STATE(1126)] = 12602,
  [SMALL_STATE(1127)] = 12606,
  [SMALL_STATE(1128)] = 12610,
  [SMALL_STATE(1129)] = 12614,
  [SMALL_STATE(1130)] = 12618,
  [SMALL_STATE(1131)] = 12622,
  [SMALL_STATE(1132)] = 12626,
  [SMALL_STATE(1133)] = 12630,
  [SMALL_STATE(1134)] = 12634,
  [SMALL_STATE(1135)] = 12638,
  [SMALL_STATE(1136)] = 12642,
  [SMALL_STATE(1137)] = 12646,
  [SMALL_STATE(1138)] = 12650,
  [SMALL_STATE(1139)] = 12654,
  [SMALL_STATE(1140)] = 12658,
  [SMALL_STATE(1141)] = 12662,
  [SMALL_STATE(1142)] = 12666,
  [SMALL_STATE(1143)] = 12670,
  [SMALL_STATE(1144)] = 12674,
  [SMALL_STATE(1145)] = 12678,
  [SMALL_STATE(1146)] = 12682,
  [SMALL_STATE(1147)] = 12686,
  [SMALL_STATE(1148)] = 12690,
  [SMALL_STATE(1149)] = 12694,
  [SMALL_STATE(1150)] = 12698,
  [SMALL_STATE(1151)] = 12702,
  [SMALL_STATE(1152)] = 12706,
  [SMALL_STATE(1153)] = 12710,
  [SMALL_STATE(1154)] = 12714,
  [SMALL_STATE(1155)] = 12718,
  [SMALL_STATE(1156)] = 12722,
  [SMALL_STATE(1157)] = 12726,
  [SMALL_STATE(1158)] = 12730,
  [SMALL_STATE(1159)] = 12734,
  [SMALL_STATE(1160)] = 12738,
  [SMALL_STATE(1161)] = 12742,
  [SMALL_STATE(1162)] = 12746,
  [SMALL_STATE(1163)] = 12750,
  [SMALL_STATE(1164)] = 12754,
  [SMALL_STATE(1165)] = 12758,
  [SMALL_STATE(1166)] = 12762,
  [SMALL_STATE(1167)] = 12766,
  [SMALL_STATE(1168)] = 12770,
  [SMALL_STATE(1169)] = 12774,
  [SMALL_STATE(1170)] = 12778,
  [SMALL_STATE(1171)] = 12782,
  [SMALL_STATE(1172)] = 12786,
  [SMALL_STATE(1173)] = 12790,
  [SMALL_STATE(1174)] = 12794,
  [SMALL_STATE(1175)] = 12798,
  [SMALL_STATE(1176)] = 12802,
  [SMALL_STATE(1177)] = 12806,
  [SMALL_STATE(1178)] = 12810,
  [SMALL_STATE(1179)] = 12814,
  [SMALL_STATE(1180)] = 12818,
  [SMALL_STATE(1181)] = 12822,
  [SMALL_STATE(1182)] = 12826,
  [SMALL_STATE(1183)] = 12830,
  [SMALL_STATE(1184)] = 12834,
  [SMALL_STATE(1185)] = 12838,
  [SMALL_STATE(1186)] = 12842,
  [SMALL_STATE(1187)] = 12846,
  [SMALL_STATE(1188)] = 12850,
  [SMALL_STATE(1189)] = 12854,
  [SMALL_STATE(1190)] = 12858,
  [SMALL_STATE(1191)] = 12862,
  [SMALL_STATE(1192)] = 12866,
  [SMALL_STATE(1193)] = 12870,
  [SMALL_STATE(1194)] = 12874,
  [SMALL_STATE(1195)] = 12878,
  [SMALL_STATE(1196)] = 12882,
  [SMALL_STATE(1197)] = 12886,
  [SMALL_STATE(1198)] = 12890,
  [SMALL_STATE(1199)] = 12894,
  [SMALL_STATE(1200)] = 12898,
  [SMALL_STATE(1201)] = 12902,
  [SMALL_STATE(1202)] = 12906,
  [SMALL_STATE(1203)] = 12910,
  [SMALL_STATE(1204)] = 12914,
  [SMALL_STATE(1205)] = 12918,
  [SMALL_STATE(1206)] = 12922,
  [SMALL_STATE(1207)] = 12926,
  [SMALL_STATE(1208)] = 12930,
  [SMALL_STATE(1209)] = 12934,
  [SMALL_STATE(1210)] = 12938,
  [SMALL_STATE(1211)] = 12942,
  [SMALL_STATE(1212)] = 12946,
  [SMALL_STATE(1213)] = 12950,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1151),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1163),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1049),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1160),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1161),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1148),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1142),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(976),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1190),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1112),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(714),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(655),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1147),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1074),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(993),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 80),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 86),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(82),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(161),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(4),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 26),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 26),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(90),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(155),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 34), SHIFT_REPEAT(993),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1004),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1172),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(108),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(157),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1013),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(983),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1204),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1057),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1187),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 26),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(139),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(157),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 11),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 11),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(345),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 26),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 26),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1143),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1133),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(674),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(955),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(987),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 26),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 24),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 26),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 49),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 3, -2, 54),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 55),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 32),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 56),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 51),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 40),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 57),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 43),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 58),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 52),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 43),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 60),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 61),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 61),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 43),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 62),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 37),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 4, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 4, -2, 68),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 69),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 70),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 71),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 72),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 74),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 40),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 60),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 76),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 60),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 52),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 43),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 60),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 47),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 77),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 79),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 5, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 79),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 74),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 76),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 60),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 67),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 81),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 82),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 73),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 54),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 6, 0, 54),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 87),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 88),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 54),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 7, 0, 54),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 90),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 94),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 95),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 90),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 97),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 93),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 100),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 101),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 97),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 103),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 104),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 105),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 10),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 10),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1210),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 38),
  [1195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1119),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 80),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 23),
  [1241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(401),
  [1244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 66),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 67),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1210),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 49),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 17), SHIFT_REPEAT(835),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 30),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 31),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 75),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 24),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 37),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 38),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 38),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 39),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 40),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 41),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 42),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 43),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 41),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 41),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 26),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 45),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 51),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 52),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 53),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 38),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 15),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 50),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 16),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 65),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 78),
  [1422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(899),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1156),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [1434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(889),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [1438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 47),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 16),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 21),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 83),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 84),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 21),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 16),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 89),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 96),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 25),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1105),
  [1480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 28),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 25),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 29),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [1522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 5),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 28),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 6),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 33),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(979),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 91),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 36),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 7),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 51),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 91),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name, 1, 0, 0),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 8),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 8),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 8),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 8),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 9),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 9),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 12),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 36),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(968),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 48),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 50),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 15),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [1646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [1648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 12),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(784),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 52),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 14),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 24),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable, 1, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 85),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 52),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 19),
  [1787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 19), SHIFT_REPEAT(701),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 73),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1191),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 44),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 20),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 27),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 13),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 13),
  [1888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 59),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 18),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1137),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1213),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 63),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [2112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [2124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 29),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 64),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 22),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [2186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [2210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
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
    [ts_external_token__directive_start] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__text_indent] = true,
  },
  [12] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [13] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [14] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__line_start] = true,
  },
  [15] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [16] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
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
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__text_indent] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [21] = {
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [22] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [25] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [27] = {
    [ts_external_token_newline] = true,
    [ts_external_token__variable_name] = true,
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
    [ts_external_token__line_start] = true,
  },
  [33] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [34] = {
    [ts_external_token__reduce_text_start] = true,
  },
  [35] = {
    [ts_external_token__comment_end] = true,
  },
  [36] = {
    [ts_external_token__from_start] = true,
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
