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
#define STATE_COUNT 1216
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 293
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
  sym__bound_operation = 196,
  sym__invalid_collection_operation = 197,
  sym__invalid_spawn_operation = 198,
  sym__invalid_async_await_operation = 199,
  sym_let_statement = 200,
  sym_exec_statement = 201,
  sym_spawn_statement = 202,
  sym__invalid_exec_binding = 203,
  sym__invalid_until_binding = 204,
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
  sym__agic_reserved_word = 273,
  sym_assign_operator = 274,
  sym_type_name = 275,
  aux_sym_source_file_repeat1 = 276,
  aux_sym_type_repeat1 = 277,
  aux_sym_struct_body_repeat1 = 278,
  aux_sym_struct_body_repeat2 = 279,
  aux_sym__cap_definition_repeat1 = 280,
  aux_sym__cap_text_body_repeat1 = 281,
  aux_sym_job_body_repeat1 = 282,
  aux_sym_text_body_repeat1 = 283,
  aux_sym_params_repeat1 = 284,
  aux_sym_statements_repeat1 = 285,
  aux_sym_implicit_run_statement_repeat1 = 286,
  aux_sym__repeat_statements_repeat1 = 287,
  aux_sym_route_value_repeat1 = 288,
  aux_sym_recall_value_repeat1 = 289,
  aux_sym__directives_repeat1 = 290,
  aux_sym_messages_repeat1 = 291,
  aux_sym_unroled_message_repeat1 = 292,
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
  [sym__bound_operation] = "_bound_operation",
  [sym__invalid_collection_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_spawn_operation] = "invalid_flow_reserved_statement",
  [sym__invalid_async_await_operation] = "invalid_flow_reserved_statement",
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_spawn_statement] = "spawn_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
  [sym__invalid_until_binding] = "invalid_flow_reserved_statement",
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
  [sym__bound_operation] = sym__bound_operation,
  [sym__invalid_collection_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_spawn_operation] = sym_invalid_flow_reserved_statement,
  [sym__invalid_async_await_operation] = sym_invalid_flow_reserved_statement,
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_spawn_statement] = sym_spawn_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
  [sym__invalid_until_binding] = sym_invalid_flow_reserved_statement,
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
  [29] = {.index = 69, .length = 1},
  [30] = {.index = 70, .length = 2},
  [31] = {.index = 72, .length = 1},
  [32] = {.index = 73, .length = 1},
  [33] = {.index = 74, .length = 2},
  [34] = {.index = 76, .length = 6},
  [35] = {.index = 82, .length = 6},
  [36] = {.index = 88, .length = 1},
  [37] = {.index = 89, .length = 1},
  [38] = {.index = 90, .length = 1},
  [39] = {.index = 91, .length = 4},
  [40] = {.index = 95, .length = 2},
  [41] = {.index = 97, .length = 1},
  [42] = {.index = 98, .length = 1},
  [43] = {.index = 99, .length = 1},
  [44] = {.index = 100, .length = 3},
  [45] = {.index = 103, .length = 2},
  [46] = {.index = 105, .length = 1},
  [47] = {.index = 106, .length = 1},
  [48] = {.index = 107, .length = 1},
  [49] = {.index = 108, .length = 7},
  [50] = {.index = 115, .length = 1},
  [51] = {.index = 116, .length = 1},
  [52] = {.index = 117, .length = 1},
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
  [52] = {
    [1] = sym_local_name,
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
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 33,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 56,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 52,
  [64] = 64,
  [65] = 57,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 77,
  [78] = 78,
  [79] = 73,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 77,
  [84] = 84,
  [85] = 72,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 71,
  [93] = 81,
  [94] = 82,
  [95] = 87,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 69,
  [102] = 102,
  [103] = 103,
  [104] = 89,
  [105] = 105,
  [106] = 86,
  [107] = 107,
  [108] = 88,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 70,
  [115] = 115,
  [116] = 75,
  [117] = 117,
  [118] = 78,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 91,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 96,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 119,
  [139] = 97,
  [140] = 140,
  [141] = 124,
  [142] = 142,
  [143] = 143,
  [144] = 100,
  [145] = 99,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 124,
  [152] = 124,
  [153] = 124,
  [154] = 124,
  [155] = 124,
  [156] = 124,
  [157] = 124,
  [158] = 124,
  [159] = 159,
  [160] = 68,
  [161] = 149,
  [162] = 150,
  [163] = 163,
  [164] = 159,
  [165] = 165,
  [166] = 166,
  [167] = 163,
  [168] = 90,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 105,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 182,
  [187] = 185,
  [188] = 121,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 191,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 122,
  [205] = 205,
  [206] = 172,
  [207] = 195,
  [208] = 169,
  [209] = 209,
  [210] = 183,
  [211] = 184,
  [212] = 109,
  [213] = 197,
  [214] = 199,
  [215] = 215,
  [216] = 120,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 176,
  [227] = 203,
  [228] = 228,
  [229] = 198,
  [230] = 230,
  [231] = 200,
  [232] = 232,
  [233] = 111,
  [234] = 234,
  [235] = 193,
  [236] = 236,
  [237] = 202,
  [238] = 171,
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
  [250] = 225,
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
  [275] = 120,
  [276] = 121,
  [277] = 122,
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
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 264,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
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
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 105,
  [403] = 389,
  [404] = 390,
  [405] = 391,
  [406] = 393,
  [407] = 394,
  [408] = 395,
  [409] = 174,
  [410] = 410,
  [411] = 175,
  [412] = 412,
  [413] = 413,
  [414] = 105,
  [415] = 415,
  [416] = 416,
  [417] = 389,
  [418] = 390,
  [419] = 391,
  [420] = 393,
  [421] = 394,
  [422] = 395,
  [423] = 105,
  [424] = 12,
  [425] = 425,
  [426] = 174,
  [427] = 175,
  [428] = 174,
  [429] = 175,
  [430] = 389,
  [431] = 390,
  [432] = 391,
  [433] = 393,
  [434] = 394,
  [435] = 395,
  [436] = 174,
  [437] = 175,
  [438] = 174,
  [439] = 175,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 249,
  [444] = 442,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 221,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 244,
  [454] = 245,
  [455] = 246,
  [456] = 247,
  [457] = 445,
  [458] = 446,
  [459] = 459,
  [460] = 105,
  [461] = 253,
  [462] = 255,
  [463] = 261,
  [464] = 447,
  [465] = 266,
  [466] = 269,
  [467] = 272,
  [468] = 273,
  [469] = 449,
  [470] = 274,
  [471] = 442,
  [472] = 249,
  [473] = 450,
  [474] = 442,
  [475] = 249,
  [476] = 451,
  [477] = 452,
  [478] = 271,
  [479] = 259,
  [480] = 265,
  [481] = 223,
  [482] = 256,
  [483] = 260,
  [484] = 484,
  [485] = 291,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 322,
  [490] = 323,
  [491] = 324,
  [492] = 492,
  [493] = 493,
  [494] = 325,
  [495] = 326,
  [496] = 327,
  [497] = 328,
  [498] = 498,
  [499] = 329,
  [500] = 500,
  [501] = 501,
  [502] = 392,
  [503] = 330,
  [504] = 251,
  [505] = 252,
  [506] = 506,
  [507] = 331,
  [508] = 295,
  [509] = 296,
  [510] = 297,
  [511] = 332,
  [512] = 333,
  [513] = 334,
  [514] = 335,
  [515] = 336,
  [516] = 337,
  [517] = 298,
  [518] = 338,
  [519] = 299,
  [520] = 412,
  [521] = 521,
  [522] = 339,
  [523] = 300,
  [524] = 524,
  [525] = 525,
  [526] = 413,
  [527] = 527,
  [528] = 340,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 341,
  [536] = 342,
  [537] = 343,
  [538] = 538,
  [539] = 539,
  [540] = 344,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 239,
  [547] = 547,
  [548] = 345,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 346,
  [553] = 301,
  [554] = 347,
  [555] = 348,
  [556] = 556,
  [557] = 557,
  [558] = 415,
  [559] = 559,
  [560] = 560,
  [561] = 349,
  [562] = 350,
  [563] = 399,
  [564] = 400,
  [565] = 565,
  [566] = 351,
  [567] = 352,
  [568] = 302,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 353,
  [573] = 573,
  [574] = 354,
  [575] = 355,
  [576] = 356,
  [577] = 357,
  [578] = 358,
  [579] = 303,
  [580] = 304,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 359,
  [587] = 587,
  [588] = 588,
  [589] = 305,
  [590] = 174,
  [591] = 360,
  [592] = 592,
  [593] = 593,
  [594] = 362,
  [595] = 175,
  [596] = 306,
  [597] = 363,
  [598] = 598,
  [599] = 364,
  [600] = 365,
  [601] = 366,
  [602] = 367,
  [603] = 368,
  [604] = 604,
  [605] = 605,
  [606] = 369,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 370,
  [612] = 612,
  [613] = 484,
  [614] = 372,
  [615] = 416,
  [616] = 616,
  [617] = 617,
  [618] = 373,
  [619] = 619,
  [620] = 374,
  [621] = 621,
  [622] = 375,
  [623] = 376,
  [624] = 389,
  [625] = 390,
  [626] = 391,
  [627] = 393,
  [628] = 394,
  [629] = 395,
  [630] = 174,
  [631] = 175,
  [632] = 307,
  [633] = 389,
  [634] = 390,
  [635] = 391,
  [636] = 393,
  [637] = 394,
  [638] = 395,
  [639] = 377,
  [640] = 378,
  [641] = 379,
  [642] = 380,
  [643] = 643,
  [644] = 381,
  [645] = 645,
  [646] = 383,
  [647] = 384,
  [648] = 385,
  [649] = 174,
  [650] = 175,
  [651] = 386,
  [652] = 387,
  [653] = 388,
  [654] = 410,
  [655] = 308,
  [656] = 656,
  [657] = 657,
  [658] = 617,
  [659] = 412,
  [660] = 413,
  [661] = 396,
  [662] = 309,
  [663] = 663,
  [664] = 12,
  [665] = 665,
  [666] = 666,
  [667] = 667,
  [668] = 389,
  [669] = 669,
  [670] = 670,
  [671] = 397,
  [672] = 310,
  [673] = 278,
  [674] = 674,
  [675] = 398,
  [676] = 676,
  [677] = 677,
  [678] = 390,
  [679] = 279,
  [680] = 680,
  [681] = 415,
  [682] = 280,
  [683] = 683,
  [684] = 684,
  [685] = 311,
  [686] = 312,
  [687] = 313,
  [688] = 688,
  [689] = 689,
  [690] = 531,
  [691] = 545,
  [692] = 283,
  [693] = 314,
  [694] = 694,
  [695] = 281,
  [696] = 416,
  [697] = 697,
  [698] = 284,
  [699] = 285,
  [700] = 282,
  [701] = 701,
  [702] = 702,
  [703] = 703,
  [704] = 315,
  [705] = 316,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 286,
  [712] = 529,
  [713] = 538,
  [714] = 541,
  [715] = 715,
  [716] = 543,
  [717] = 544,
  [718] = 718,
  [719] = 719,
  [720] = 317,
  [721] = 318,
  [722] = 583,
  [723] = 391,
  [724] = 724,
  [725] = 725,
  [726] = 319,
  [727] = 701,
  [728] = 287,
  [729] = 393,
  [730] = 669,
  [731] = 684,
  [732] = 288,
  [733] = 617,
  [734] = 734,
  [735] = 410,
  [736] = 736,
  [737] = 617,
  [738] = 738,
  [739] = 739,
  [740] = 289,
  [741] = 321,
  [742] = 742,
  [743] = 290,
  [744] = 744,
  [745] = 292,
  [746] = 525,
  [747] = 666,
  [748] = 748,
  [749] = 749,
  [750] = 609,
  [751] = 610,
  [752] = 394,
  [753] = 665,
  [754] = 293,
  [755] = 667,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 759,
  [760] = 760,
  [761] = 294,
  [762] = 525,
  [763] = 666,
  [764] = 525,
  [765] = 666,
  [766] = 493,
  [767] = 395,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 382,
  [776] = 175,
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
  [787] = 787,
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
  [799] = 799,
  [800] = 800,
  [801] = 801,
  [802] = 802,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 410,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 412,
  [817] = 413,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 415,
  [822] = 416,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 174,
  [833] = 175,
  [834] = 834,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 838,
  [839] = 174,
  [840] = 175,
  [841] = 389,
  [842] = 390,
  [843] = 391,
  [844] = 393,
  [845] = 394,
  [846] = 395,
  [847] = 847,
  [848] = 389,
  [849] = 390,
  [850] = 391,
  [851] = 393,
  [852] = 394,
  [853] = 395,
  [854] = 854,
  [855] = 855,
  [856] = 559,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 836,
  [861] = 569,
  [862] = 570,
  [863] = 863,
  [864] = 779,
  [865] = 780,
  [866] = 781,
  [867] = 782,
  [868] = 783,
  [869] = 786,
  [870] = 870,
  [871] = 871,
  [872] = 389,
  [873] = 390,
  [874] = 391,
  [875] = 804,
  [876] = 392,
  [877] = 393,
  [878] = 394,
  [879] = 807,
  [880] = 808,
  [881] = 810,
  [882] = 395,
  [883] = 174,
  [884] = 826,
  [885] = 847,
  [886] = 854,
  [887] = 887,
  [888] = 396,
  [889] = 863,
  [890] = 890,
  [891] = 871,
  [892] = 887,
  [893] = 397,
  [894] = 398,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 399,
  [901] = 901,
  [902] = 400,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 777,
  [907] = 907,
  [908] = 800,
  [909] = 785,
  [910] = 910,
  [911] = 725,
  [912] = 790,
  [913] = 895,
  [914] = 793,
  [915] = 915,
  [916] = 916,
  [917] = 12,
  [918] = 809,
  [919] = 896,
  [920] = 897,
  [921] = 811,
  [922] = 689,
  [923] = 814,
  [924] = 818,
  [925] = 820,
  [926] = 824,
  [927] = 825,
  [928] = 827,
  [929] = 834,
  [930] = 835,
  [931] = 931,
  [932] = 837,
  [933] = 857,
  [934] = 899,
  [935] = 859,
  [936] = 936,
  [937] = 937,
  [938] = 836,
  [939] = 939,
  [940] = 836,
  [941] = 901,
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
  [952] = 792,
  [953] = 813,
  [954] = 937,
  [955] = 939,
  [956] = 788,
  [957] = 957,
  [958] = 958,
  [959] = 904,
  [960] = 960,
  [961] = 794,
  [962] = 905,
  [963] = 963,
  [964] = 964,
  [965] = 815,
  [966] = 907,
  [967] = 794,
  [968] = 794,
  [969] = 910,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 258,
  [979] = 979,
  [980] = 174,
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
  [996] = 985,
  [997] = 997,
  [998] = 998,
  [999] = 999,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 1003,
  [1004] = 1004,
  [1005] = 175,
  [1006] = 1006,
  [1007] = 1007,
  [1008] = 1008,
  [1009] = 257,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 1014,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 977,
  [1021] = 981,
  [1022] = 1022,
  [1023] = 981,
  [1024] = 1024,
  [1025] = 977,
  [1026] = 981,
  [1027] = 977,
  [1028] = 981,
  [1029] = 977,
  [1030] = 981,
  [1031] = 977,
  [1032] = 981,
  [1033] = 977,
  [1034] = 977,
  [1035] = 981,
  [1036] = 981,
  [1037] = 977,
  [1038] = 981,
  [1039] = 1008,
  [1040] = 1040,
  [1041] = 1041,
  [1042] = 1042,
  [1043] = 1040,
  [1044] = 1044,
  [1045] = 1045,
  [1046] = 983,
  [1047] = 1047,
  [1048] = 982,
  [1049] = 1044,
  [1050] = 999,
  [1051] = 1051,
  [1052] = 979,
  [1053] = 1053,
  [1054] = 1001,
  [1055] = 1008,
  [1056] = 1056,
  [1057] = 1008,
  [1058] = 1058,
  [1059] = 1008,
  [1060] = 1008,
  [1061] = 1008,
  [1062] = 1008,
  [1063] = 1008,
  [1064] = 1008,
  [1065] = 987,
  [1066] = 988,
  [1067] = 997,
  [1068] = 1000,
  [1069] = 1058,
  [1070] = 1070,
  [1071] = 1071,
  [1072] = 977,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1073,
  [1083] = 1083,
  [1084] = 1081,
  [1085] = 1085,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1073,
  [1094] = 1083,
  [1095] = 1081,
  [1096] = 1085,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1078,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1073,
  [1105] = 1083,
  [1106] = 1081,
  [1107] = 1085,
  [1108] = 1108,
  [1109] = 1077,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1083,
  [1113] = 1081,
  [1114] = 1085,
  [1115] = 1115,
  [1116] = 801,
  [1117] = 1117,
  [1118] = 1073,
  [1119] = 1083,
  [1120] = 1081,
  [1121] = 1085,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1124,
  [1125] = 1073,
  [1126] = 1083,
  [1127] = 1081,
  [1128] = 1085,
  [1129] = 1129,
  [1130] = 1130,
  [1131] = 1131,
  [1132] = 1073,
  [1133] = 1083,
  [1134] = 1081,
  [1135] = 1085,
  [1136] = 1136,
  [1137] = 1085,
  [1138] = 1138,
  [1139] = 1073,
  [1140] = 1083,
  [1141] = 1081,
  [1142] = 1085,
  [1143] = 1085,
  [1144] = 1085,
  [1145] = 1085,
  [1146] = 1146,
  [1147] = 1073,
  [1148] = 1083,
  [1149] = 1149,
  [1150] = 1081,
  [1151] = 1085,
  [1152] = 1152,
  [1153] = 1153,
  [1154] = 1102,
  [1155] = 1155,
  [1156] = 1156,
  [1157] = 1157,
  [1158] = 1158,
  [1159] = 1159,
  [1160] = 1111,
  [1161] = 1161,
  [1162] = 1162,
  [1163] = 1131,
  [1164] = 1162,
  [1165] = 680,
  [1166] = 1166,
  [1167] = 1155,
  [1168] = 1129,
  [1169] = 1158,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1172,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1153,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1179,
  [1180] = 1073,
  [1181] = 1181,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1136,
  [1187] = 1187,
  [1188] = 1188,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1191,
  [1192] = 1083,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1074,
  [1196] = 1196,
  [1197] = 1196,
  [1198] = 1198,
  [1199] = 1199,
  [1200] = 1076,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1171,
  [1204] = 1087,
  [1205] = 1097,
  [1206] = 1075,
  [1207] = 1088,
  [1208] = 1208,
  [1209] = 1172,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1159,
  [1213] = 1213,
  [1214] = 1214,
  [1215] = 12,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(300);
      ADVANCE_MAP(
        '#', 301,
        '(', 632,
        ')', 633,
        '*', 556,
        '+', 312,
        ',', 634,
        '-', 313,
        '0', 520,
        '1', 521,
        ':', 631,
        '=', 534,
        '?', 629,
        '@', 465,
        'B', 648,
        'J', 651,
        'N', 654,
        'P', 636,
        'T', 639,
        '[', 314,
        '_', 311,
        'a', 391,
        'b', 453,
        'c', 315,
        'd', 358,
        'e', 316,
        'f', 317,
        'g', 322,
        'h', 325,
        'i', 382,
        'k', 371,
        'l', 321,
        'm', 320,
        'n', 378,
        'p', 318,
        'r', 326,
        's', 342,
        't', 319,
        'u', 433,
        'w', 396,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(519);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 301,
        '(', 632,
        ')', 633,
        '*', 556,
        '+', 24,
        ',', 634,
        '-', 25,
        '0', 523,
        '1', 522,
        ':', 631,
        '=', 534,
        '?', 629,
        '@', 225,
        'B', 648,
        'J', 651,
        'N', 654,
        'P', 636,
        'T', 639,
        '[', 27,
        '_', 311,
        'a', 126,
        'b', 208,
        'c', 28,
        'd', 92,
        'e', 29,
        'f', 30,
        'g', 37,
        'h', 40,
        'i', 115,
        'k', 100,
        'l', 36,
        'm', 35,
        'n', 109,
        'p', 31,
        'r', 41,
        's', 61,
        't', 32,
        'u', 188,
        'w', 134,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '#', 301,
        '-', 26,
        ':', 631,
        'b', 291,
        'f', 136,
        'i', 114,
        'l', 55,
        'p', 243,
        's', 113,
        'u', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '0') ADVANCE(523);
      if (lookahead == '1') ADVANCE(522);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '[') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(519);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 301,
        'a', 751,
        'd', 747,
        'g', 701,
        'k', 705,
        'm', 685,
        'r', 702,
        's', 707,
        '\t', 675,
        ' ', 675,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '#', 301,
        'a', 752,
        'd', 747,
        'k', 705,
        'r', 710,
        's', 708,
        '\t', 676,
        ' ', 676,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(764);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(632);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(535);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(630);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(310);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 's') ADVANCE(292);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == 'f') ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        'a', 125,
        'c', 129,
        'd', 101,
        'f', 168,
        'i', 206,
        'l', 53,
        'p', 242,
        's', 108,
        't', 46,
        'w', 147,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(656);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(572);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(626);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(627);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(624);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'k') ADVANCE(149);
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(219);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(600);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(609);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(135);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(625);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(560);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(595);
      END_STATE();
    case 154:
      if (lookahead == 'k') ADVANCE(583);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(573);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(618);
      END_STATE();
    case 157:
      if (lookahead == 'k') ADVANCE(620);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(628);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(559);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(597);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(598);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 'y') ADVANCE(602);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(591);
      END_STATE();
    case 223:
      if (lookahead == 'p') ADVANCE(593);
      END_STATE();
    case 224:
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 225:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(576);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 248:
      if (lookahead == 's') ADVANCE(533);
      END_STATE();
    case 249:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 250:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 251:
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 252:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(615);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(594);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(614);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(596);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(551);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(635);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 281:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 282:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 284:
      if (lookahead == 'v') ADVANCE(148);
      END_STATE();
    case 285:
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 286:
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 287:
      if (lookahead == 'w') ADVANCE(575);
      END_STATE();
    case 288:
      if (lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 289:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 290:
      if (lookahead == 'x') ADVANCE(263);
      END_STATE();
    case 291:
      if (lookahead == 'y') ADVANCE(602);
      END_STATE();
    case 292:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 293:
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 294:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 295:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 296:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(296);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 297:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(304);
      END_STATE();
    case 298:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 299:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__doc_space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'x') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == 'h') ADVANCE(399);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'u') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(370);
      if (lookahead == 'k') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'd') ADVANCE(511);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 's') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == 'w') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'u') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'k') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'm') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'y') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'p') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'u') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'w') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'x') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead == 'y') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__invalid_named_binding_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(520);
      if (lookahead == '1') ADVANCE(521);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(523);
      if (lookahead == '1') ADVANCE(522);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(530);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(529);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(531);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_async_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_await_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(612);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'e') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'f') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'l') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'n') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 't') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'u') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '0') ADVANCE(523);
      if (lookahead == '1') ADVANCE(522);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '[') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '_') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 301,
        'a', 751,
        'd', 747,
        'g', 701,
        'k', 705,
        'm', 685,
        'r', 702,
        's', 707,
        '\t', 675,
        ' ', 675,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 301,
        'a', 752,
        'd', 747,
        'k', 705,
        'r', 710,
        's', 708,
        '\t', 676,
        ' ', 676,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(764);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(769);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(765);
      if (lookahead == 'p') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(601);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead == 'y') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead == 'w') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(769);
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
  [5] = {.lex_state = 12, .external_lex_state = 4},
  [6] = {.lex_state = 12, .external_lex_state = 4},
  [7] = {.lex_state = 13, .external_lex_state = 5},
  [8] = {.lex_state = 13, .external_lex_state = 5},
  [9] = {.lex_state = 1, .external_lex_state = 6},
  [10] = {.lex_state = 1, .external_lex_state = 6},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 13, .external_lex_state = 5},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 7},
  [15] = {.lex_state = 1, .external_lex_state = 7},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 7},
  [18] = {.lex_state = 1, .external_lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 7},
  [22] = {.lex_state = 15, .external_lex_state = 7},
  [23] = {.lex_state = 4, .external_lex_state = 7},
  [24] = {.lex_state = 15, .external_lex_state = 7},
  [25] = {.lex_state = 15, .external_lex_state = 7},
  [26] = {.lex_state = 15, .external_lex_state = 7},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2, .external_lex_state = 7},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2, .external_lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 3, .external_lex_state = 7},
  [52] = {.lex_state = 5, .external_lex_state = 7},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0, .external_lex_state = 8},
  [55] = {.lex_state = 3, .external_lex_state = 7},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 7, .external_lex_state = 7},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 5, .external_lex_state = 7},
  [61] = {.lex_state = 5, .external_lex_state = 7},
  [62] = {.lex_state = 0, .external_lex_state = 8},
  [63] = {.lex_state = 5, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 8},
  [65] = {.lex_state = 7, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 8},
  [67] = {.lex_state = 0, .external_lex_state = 9},
  [68] = {.lex_state = 0, .external_lex_state = 10},
  [69] = {.lex_state = 0, .external_lex_state = 10},
  [70] = {.lex_state = 0, .external_lex_state = 11},
  [71] = {.lex_state = 5, .external_lex_state = 7},
  [72] = {.lex_state = 5, .external_lex_state = 7},
  [73] = {.lex_state = 5, .external_lex_state = 7},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0, .external_lex_state = 11},
  [76] = {.lex_state = 0, .external_lex_state = 9},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0, .external_lex_state = 11},
  [79] = {.lex_state = 5, .external_lex_state = 7},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 9},
  [82] = {.lex_state = 0, .external_lex_state = 9},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 8},
  [85] = {.lex_state = 5, .external_lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 12},
  [87] = {.lex_state = 0, .external_lex_state = 9},
  [88] = {.lex_state = 0, .external_lex_state = 12},
  [89] = {.lex_state = 0, .external_lex_state = 12},
  [90] = {.lex_state = 0, .external_lex_state = 13},
  [91] = {.lex_state = 0, .external_lex_state = 13},
  [92] = {.lex_state = 5, .external_lex_state = 7},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 9},
  [96] = {.lex_state = 0, .external_lex_state = 13},
  [97] = {.lex_state = 0, .external_lex_state = 10},
  [98] = {.lex_state = 0, .external_lex_state = 8},
  [99] = {.lex_state = 0, .external_lex_state = 10},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 14},
  [102] = {.lex_state = 17, .external_lex_state = 7},
  [103] = {.lex_state = 0, .external_lex_state = 15},
  [104] = {.lex_state = 0, .external_lex_state = 16},
  [105] = {.lex_state = 0, .external_lex_state = 15},
  [106] = {.lex_state = 0, .external_lex_state = 16},
  [107] = {.lex_state = 0, .external_lex_state = 9},
  [108] = {.lex_state = 0, .external_lex_state = 16},
  [109] = {.lex_state = 0, .external_lex_state = 13},
  [110] = {.lex_state = 17, .external_lex_state = 7},
  [111] = {.lex_state = 0, .external_lex_state = 13},
  [112] = {.lex_state = 0, .external_lex_state = 15},
  [113] = {.lex_state = 0, .external_lex_state = 17},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 9},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 17},
  [118] = {.lex_state = 0, .external_lex_state = 9},
  [119] = {.lex_state = 0, .external_lex_state = 18},
  [120] = {.lex_state = 8, .external_lex_state = 7},
  [121] = {.lex_state = 8, .external_lex_state = 7},
  [122] = {.lex_state = 8, .external_lex_state = 7},
  [123] = {.lex_state = 17, .external_lex_state = 7},
  [124] = {.lex_state = 0, .external_lex_state = 19},
  [125] = {.lex_state = 0, .external_lex_state = 20},
  [126] = {.lex_state = 0, .external_lex_state = 9},
  [127] = {.lex_state = 17, .external_lex_state = 7},
  [128] = {.lex_state = 0, .external_lex_state = 9},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 0, .external_lex_state = 21},
  [131] = {.lex_state = 0, .external_lex_state = 15},
  [132] = {.lex_state = 0, .external_lex_state = 15},
  [133] = {.lex_state = 0, .external_lex_state = 9},
  [134] = {.lex_state = 0, .external_lex_state = 20},
  [135] = {.lex_state = 0, .external_lex_state = 17},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 18},
  [139] = {.lex_state = 0, .external_lex_state = 14},
  [140] = {.lex_state = 0, .external_lex_state = 9},
  [141] = {.lex_state = 0, .external_lex_state = 19},
  [142] = {.lex_state = 0, .external_lex_state = 9},
  [143] = {.lex_state = 0, .external_lex_state = 9},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 14},
  [146] = {.lex_state = 0, .external_lex_state = 17},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 21},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 19},
  [152] = {.lex_state = 0, .external_lex_state = 19},
  [153] = {.lex_state = 0, .external_lex_state = 19},
  [154] = {.lex_state = 0, .external_lex_state = 19},
  [155] = {.lex_state = 0, .external_lex_state = 19},
  [156] = {.lex_state = 0, .external_lex_state = 19},
  [157] = {.lex_state = 0, .external_lex_state = 19},
  [158] = {.lex_state = 0, .external_lex_state = 19},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 14},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 21},
  [166] = {.lex_state = 0, .external_lex_state = 9},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 20},
  [169] = {.lex_state = 17, .external_lex_state = 7},
  [170] = {.lex_state = 0, .external_lex_state = 22},
  [171] = {.lex_state = 0, .external_lex_state = 22},
  [172] = {.lex_state = 0, .external_lex_state = 22},
  [173] = {.lex_state = 0, .external_lex_state = 9},
  [174] = {.lex_state = 0, .external_lex_state = 10},
  [175] = {.lex_state = 0, .external_lex_state = 10},
  [176] = {.lex_state = 11, .external_lex_state = 23},
  [177] = {.lex_state = 0, .external_lex_state = 22},
  [178] = {.lex_state = 0, .external_lex_state = 22},
  [179] = {.lex_state = 0, .external_lex_state = 22},
  [180] = {.lex_state = 17, .external_lex_state = 7},
  [181] = {.lex_state = 20},
  [182] = {.lex_state = 17, .external_lex_state = 7},
  [183] = {.lex_state = 0, .external_lex_state = 22},
  [184] = {.lex_state = 17, .external_lex_state = 7},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 17, .external_lex_state = 7},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 20},
  [190] = {.lex_state = 0, .external_lex_state = 22},
  [191] = {.lex_state = 10, .external_lex_state = 7},
  [192] = {.lex_state = 17, .external_lex_state = 7},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 10, .external_lex_state = 7},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 17, .external_lex_state = 7},
  [197] = {.lex_state = 17, .external_lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 22},
  [199] = {.lex_state = 17, .external_lex_state = 7},
  [200] = {.lex_state = 17, .external_lex_state = 7},
  [201] = {.lex_state = 0, .external_lex_state = 22},
  [202] = {.lex_state = 17, .external_lex_state = 7},
  [203] = {.lex_state = 14, .external_lex_state = 7},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 22},
  [206] = {.lex_state = 0, .external_lex_state = 22},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 17, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 22},
  [210] = {.lex_state = 0, .external_lex_state = 22},
  [211] = {.lex_state = 17, .external_lex_state = 7},
  [212] = {.lex_state = 0, .external_lex_state = 20},
  [213] = {.lex_state = 17, .external_lex_state = 7},
  [214] = {.lex_state = 17, .external_lex_state = 7},
  [215] = {.lex_state = 0, .external_lex_state = 22},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 22},
  [218] = {.lex_state = 0, .external_lex_state = 22},
  [219] = {.lex_state = 0, .external_lex_state = 22},
  [220] = {.lex_state = 0, .external_lex_state = 22},
  [221] = {.lex_state = 0, .external_lex_state = 13},
  [222] = {.lex_state = 0, .external_lex_state = 21},
  [223] = {.lex_state = 0, .external_lex_state = 13},
  [224] = {.lex_state = 0, .external_lex_state = 22},
  [225] = {.lex_state = 0, .external_lex_state = 13},
  [226] = {.lex_state = 11, .external_lex_state = 23},
  [227] = {.lex_state = 14, .external_lex_state = 7},
  [228] = {.lex_state = 0, .external_lex_state = 22},
  [229] = {.lex_state = 0, .external_lex_state = 22},
  [230] = {.lex_state = 0, .external_lex_state = 22},
  [231] = {.lex_state = 17, .external_lex_state = 7},
  [232] = {.lex_state = 0, .external_lex_state = 21},
  [233] = {.lex_state = 0, .external_lex_state = 20},
  [234] = {.lex_state = 0, .external_lex_state = 22},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 17, .external_lex_state = 7},
  [237] = {.lex_state = 17, .external_lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 22},
  [239] = {.lex_state = 0, .external_lex_state = 11},
  [240] = {.lex_state = 0, .external_lex_state = 8},
  [241] = {.lex_state = 0, .external_lex_state = 24},
  [242] = {.lex_state = 0, .external_lex_state = 21},
  [243] = {.lex_state = 0, .external_lex_state = 25},
  [244] = {.lex_state = 0, .external_lex_state = 24},
  [245] = {.lex_state = 0, .external_lex_state = 24},
  [246] = {.lex_state = 20},
  [247] = {.lex_state = 6, .external_lex_state = 7},
  [248] = {.lex_state = 0, .external_lex_state = 26},
  [249] = {.lex_state = 0, .external_lex_state = 26},
  [250] = {.lex_state = 0, .external_lex_state = 20},
  [251] = {.lex_state = 0, .external_lex_state = 12},
  [252] = {.lex_state = 0, .external_lex_state = 12},
  [253] = {.lex_state = 17, .external_lex_state = 7},
  [254] = {.lex_state = 0, .external_lex_state = 25},
  [255] = {.lex_state = 0, .external_lex_state = 24},
  [256] = {.lex_state = 0, .external_lex_state = 22},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 27},
  [260] = {.lex_state = 0, .external_lex_state = 22},
  [261] = {.lex_state = 9, .external_lex_state = 7},
  [262] = {.lex_state = 0, .external_lex_state = 8},
  [263] = {.lex_state = 0, .external_lex_state = 25},
  [264] = {.lex_state = 0, .external_lex_state = 22},
  [265] = {.lex_state = 0, .external_lex_state = 27},
  [266] = {.lex_state = 9, .external_lex_state = 7},
  [267] = {.lex_state = 0, .external_lex_state = 25},
  [268] = {.lex_state = 0, .external_lex_state = 26},
  [269] = {.lex_state = 0, .external_lex_state = 24},
  [270] = {.lex_state = 0, .external_lex_state = 22},
  [271] = {.lex_state = 18, .external_lex_state = 7},
  [272] = {.lex_state = 0, .external_lex_state = 24},
  [273] = {.lex_state = 0, .external_lex_state = 24},
  [274] = {.lex_state = 0, .external_lex_state = 24},
  [275] = {.lex_state = 1, .external_lex_state = 7},
  [276] = {.lex_state = 1, .external_lex_state = 7},
  [277] = {.lex_state = 1, .external_lex_state = 7},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 0, .external_lex_state = 11},
  [280] = {.lex_state = 0, .external_lex_state = 11},
  [281] = {.lex_state = 0, .external_lex_state = 11},
  [282] = {.lex_state = 0, .external_lex_state = 11},
  [283] = {.lex_state = 0, .external_lex_state = 11},
  [284] = {.lex_state = 0, .external_lex_state = 11},
  [285] = {.lex_state = 0, .external_lex_state = 11},
  [286] = {.lex_state = 0, .external_lex_state = 11},
  [287] = {.lex_state = 0, .external_lex_state = 11},
  [288] = {.lex_state = 0, .external_lex_state = 11},
  [289] = {.lex_state = 0, .external_lex_state = 11},
  [290] = {.lex_state = 0, .external_lex_state = 11},
  [291] = {.lex_state = 0, .external_lex_state = 11},
  [292] = {.lex_state = 0, .external_lex_state = 11},
  [293] = {.lex_state = 0, .external_lex_state = 11},
  [294] = {.lex_state = 0, .external_lex_state = 11},
  [295] = {.lex_state = 0, .external_lex_state = 11},
  [296] = {.lex_state = 0, .external_lex_state = 11},
  [297] = {.lex_state = 0, .external_lex_state = 11},
  [298] = {.lex_state = 0, .external_lex_state = 11},
  [299] = {.lex_state = 0, .external_lex_state = 11},
  [300] = {.lex_state = 0, .external_lex_state = 11},
  [301] = {.lex_state = 0, .external_lex_state = 11},
  [302] = {.lex_state = 0, .external_lex_state = 11},
  [303] = {.lex_state = 0, .external_lex_state = 11},
  [304] = {.lex_state = 0, .external_lex_state = 11},
  [305] = {.lex_state = 0, .external_lex_state = 11},
  [306] = {.lex_state = 0, .external_lex_state = 11},
  [307] = {.lex_state = 0, .external_lex_state = 11},
  [308] = {.lex_state = 0, .external_lex_state = 11},
  [309] = {.lex_state = 0, .external_lex_state = 11},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 0, .external_lex_state = 11},
  [312] = {.lex_state = 0, .external_lex_state = 11},
  [313] = {.lex_state = 0, .external_lex_state = 11},
  [314] = {.lex_state = 0, .external_lex_state = 11},
  [315] = {.lex_state = 0, .external_lex_state = 11},
  [316] = {.lex_state = 0, .external_lex_state = 11},
  [317] = {.lex_state = 0, .external_lex_state = 11},
  [318] = {.lex_state = 0, .external_lex_state = 11},
  [319] = {.lex_state = 0, .external_lex_state = 11},
  [320] = {.lex_state = 0, .external_lex_state = 22},
  [321] = {.lex_state = 0, .external_lex_state = 11},
  [322] = {.lex_state = 0, .external_lex_state = 11},
  [323] = {.lex_state = 0, .external_lex_state = 11},
  [324] = {.lex_state = 0, .external_lex_state = 11},
  [325] = {.lex_state = 0, .external_lex_state = 11},
  [326] = {.lex_state = 0, .external_lex_state = 11},
  [327] = {.lex_state = 0, .external_lex_state = 11},
  [328] = {.lex_state = 0, .external_lex_state = 11},
  [329] = {.lex_state = 0, .external_lex_state = 11},
  [330] = {.lex_state = 0, .external_lex_state = 11},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 0, .external_lex_state = 11},
  [333] = {.lex_state = 0, .external_lex_state = 11},
  [334] = {.lex_state = 0, .external_lex_state = 11},
  [335] = {.lex_state = 0, .external_lex_state = 11},
  [336] = {.lex_state = 0, .external_lex_state = 11},
  [337] = {.lex_state = 0, .external_lex_state = 11},
  [338] = {.lex_state = 0, .external_lex_state = 11},
  [339] = {.lex_state = 0, .external_lex_state = 11},
  [340] = {.lex_state = 0, .external_lex_state = 11},
  [341] = {.lex_state = 0, .external_lex_state = 11},
  [342] = {.lex_state = 0, .external_lex_state = 11},
  [343] = {.lex_state = 0, .external_lex_state = 11},
  [344] = {.lex_state = 0, .external_lex_state = 11},
  [345] = {.lex_state = 0, .external_lex_state = 11},
  [346] = {.lex_state = 0, .external_lex_state = 11},
  [347] = {.lex_state = 0, .external_lex_state = 11},
  [348] = {.lex_state = 0, .external_lex_state = 11},
  [349] = {.lex_state = 0, .external_lex_state = 11},
  [350] = {.lex_state = 0, .external_lex_state = 11},
  [351] = {.lex_state = 0, .external_lex_state = 11},
  [352] = {.lex_state = 0, .external_lex_state = 11},
  [353] = {.lex_state = 0, .external_lex_state = 11},
  [354] = {.lex_state = 0, .external_lex_state = 11},
  [355] = {.lex_state = 0, .external_lex_state = 11},
  [356] = {.lex_state = 0, .external_lex_state = 11},
  [357] = {.lex_state = 0, .external_lex_state = 11},
  [358] = {.lex_state = 0, .external_lex_state = 11},
  [359] = {.lex_state = 0, .external_lex_state = 11},
  [360] = {.lex_state = 0, .external_lex_state = 11},
  [361] = {.lex_state = 0, .external_lex_state = 26},
  [362] = {.lex_state = 0, .external_lex_state = 11},
  [363] = {.lex_state = 0, .external_lex_state = 11},
  [364] = {.lex_state = 0, .external_lex_state = 11},
  [365] = {.lex_state = 0, .external_lex_state = 11},
  [366] = {.lex_state = 0, .external_lex_state = 11},
  [367] = {.lex_state = 0, .external_lex_state = 11},
  [368] = {.lex_state = 0, .external_lex_state = 11},
  [369] = {.lex_state = 0, .external_lex_state = 11},
  [370] = {.lex_state = 0, .external_lex_state = 11},
  [371] = {.lex_state = 0, .external_lex_state = 22},
  [372] = {.lex_state = 0, .external_lex_state = 11},
  [373] = {.lex_state = 0, .external_lex_state = 11},
  [374] = {.lex_state = 0, .external_lex_state = 11},
  [375] = {.lex_state = 0, .external_lex_state = 11},
  [376] = {.lex_state = 0, .external_lex_state = 11},
  [377] = {.lex_state = 0, .external_lex_state = 11},
  [378] = {.lex_state = 0, .external_lex_state = 11},
  [379] = {.lex_state = 0, .external_lex_state = 11},
  [380] = {.lex_state = 0, .external_lex_state = 11},
  [381] = {.lex_state = 0, .external_lex_state = 11},
  [382] = {.lex_state = 0, .external_lex_state = 11},
  [383] = {.lex_state = 0, .external_lex_state = 11},
  [384] = {.lex_state = 0, .external_lex_state = 11},
  [385] = {.lex_state = 0, .external_lex_state = 11},
  [386] = {.lex_state = 0, .external_lex_state = 11},
  [387] = {.lex_state = 0, .external_lex_state = 11},
  [388] = {.lex_state = 0, .external_lex_state = 11},
  [389] = {.lex_state = 0, .external_lex_state = 15},
  [390] = {.lex_state = 0, .external_lex_state = 15},
  [391] = {.lex_state = 0, .external_lex_state = 15},
  [392] = {.lex_state = 8, .external_lex_state = 7},
  [393] = {.lex_state = 0, .external_lex_state = 15},
  [394] = {.lex_state = 0, .external_lex_state = 15},
  [395] = {.lex_state = 0, .external_lex_state = 15},
  [396] = {.lex_state = 8, .external_lex_state = 7},
  [397] = {.lex_state = 8, .external_lex_state = 7},
  [398] = {.lex_state = 8, .external_lex_state = 7},
  [399] = {.lex_state = 8, .external_lex_state = 7},
  [400] = {.lex_state = 8, .external_lex_state = 7},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 0, .external_lex_state = 24},
  [403] = {.lex_state = 0, .external_lex_state = 8},
  [404] = {.lex_state = 0, .external_lex_state = 8},
  [405] = {.lex_state = 0, .external_lex_state = 8},
  [406] = {.lex_state = 0, .external_lex_state = 8},
  [407] = {.lex_state = 0, .external_lex_state = 8},
  [408] = {.lex_state = 0, .external_lex_state = 8},
  [409] = {.lex_state = 0, .external_lex_state = 15},
  [410] = {.lex_state = 0, .external_lex_state = 11},
  [411] = {.lex_state = 0, .external_lex_state = 15},
  [412] = {.lex_state = 0, .external_lex_state = 11},
  [413] = {.lex_state = 0, .external_lex_state = 11},
  [414] = {.lex_state = 0, .external_lex_state = 25},
  [415] = {.lex_state = 0, .external_lex_state = 11},
  [416] = {.lex_state = 0, .external_lex_state = 11},
  [417] = {.lex_state = 0, .external_lex_state = 12},
  [418] = {.lex_state = 0, .external_lex_state = 12},
  [419] = {.lex_state = 0, .external_lex_state = 12},
  [420] = {.lex_state = 0, .external_lex_state = 12},
  [421] = {.lex_state = 0, .external_lex_state = 12},
  [422] = {.lex_state = 0, .external_lex_state = 12},
  [423] = {.lex_state = 0, .external_lex_state = 2},
  [424] = {.lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 21},
  [426] = {.lex_state = 0, .external_lex_state = 12},
  [427] = {.lex_state = 0, .external_lex_state = 12},
  [428] = {.lex_state = 0, .external_lex_state = 14},
  [429] = {.lex_state = 0, .external_lex_state = 14},
  [430] = {.lex_state = 0, .external_lex_state = 11},
  [431] = {.lex_state = 0, .external_lex_state = 11},
  [432] = {.lex_state = 0, .external_lex_state = 11},
  [433] = {.lex_state = 0, .external_lex_state = 11},
  [434] = {.lex_state = 0, .external_lex_state = 11},
  [435] = {.lex_state = 0, .external_lex_state = 11},
  [436] = {.lex_state = 0, .external_lex_state = 8},
  [437] = {.lex_state = 0, .external_lex_state = 8},
  [438] = {.lex_state = 0, .external_lex_state = 11},
  [439] = {.lex_state = 0, .external_lex_state = 11},
  [440] = {.lex_state = 0, .external_lex_state = 24},
  [441] = {.lex_state = 0, .external_lex_state = 21},
  [442] = {.lex_state = 0, .external_lex_state = 26},
  [443] = {.lex_state = 0, .external_lex_state = 26},
  [444] = {.lex_state = 0, .external_lex_state = 26},
  [445] = {.lex_state = 20},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 20},
  [448] = {.lex_state = 0, .external_lex_state = 20},
  [449] = {.lex_state = 17, .external_lex_state = 7},
  [450] = {.lex_state = 1},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 6, .external_lex_state = 7},
  [453] = {.lex_state = 0, .external_lex_state = 24},
  [454] = {.lex_state = 0, .external_lex_state = 24},
  [455] = {.lex_state = 20},
  [456] = {.lex_state = 6, .external_lex_state = 7},
  [457] = {.lex_state = 20},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 1, .external_lex_state = 28},
  [460] = {.lex_state = 0, .external_lex_state = 22},
  [461] = {.lex_state = 17, .external_lex_state = 7},
  [462] = {.lex_state = 0, .external_lex_state = 24},
  [463] = {.lex_state = 9, .external_lex_state = 7},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 9, .external_lex_state = 7},
  [466] = {.lex_state = 0, .external_lex_state = 24},
  [467] = {.lex_state = 0, .external_lex_state = 24},
  [468] = {.lex_state = 0, .external_lex_state = 24},
  [469] = {.lex_state = 17, .external_lex_state = 7},
  [470] = {.lex_state = 0, .external_lex_state = 24},
  [471] = {.lex_state = 0, .external_lex_state = 26},
  [472] = {.lex_state = 0, .external_lex_state = 26},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 0, .external_lex_state = 26},
  [475] = {.lex_state = 0, .external_lex_state = 26},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 6, .external_lex_state = 7},
  [478] = {.lex_state = 18, .external_lex_state = 7},
  [479] = {.lex_state = 0, .external_lex_state = 27},
  [480] = {.lex_state = 0, .external_lex_state = 27},
  [481] = {.lex_state = 0, .external_lex_state = 20},
  [482] = {.lex_state = 0, .external_lex_state = 22},
  [483] = {.lex_state = 0, .external_lex_state = 22},
  [484] = {.lex_state = 0, .external_lex_state = 11},
  [485] = {.lex_state = 0, .external_lex_state = 9},
  [486] = {.lex_state = 1, .external_lex_state = 7},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 9, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 9},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 17, .external_lex_state = 7},
  [493] = {.lex_state = 1},
  [494] = {.lex_state = 0, .external_lex_state = 9},
  [495] = {.lex_state = 0, .external_lex_state = 9},
  [496] = {.lex_state = 0, .external_lex_state = 9},
  [497] = {.lex_state = 0, .external_lex_state = 9},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 1},
  [503] = {.lex_state = 0, .external_lex_state = 9},
  [504] = {.lex_state = 0, .external_lex_state = 16},
  [505] = {.lex_state = 0, .external_lex_state = 16},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 9},
  [508] = {.lex_state = 0, .external_lex_state = 9},
  [509] = {.lex_state = 0, .external_lex_state = 9},
  [510] = {.lex_state = 0, .external_lex_state = 9},
  [511] = {.lex_state = 0, .external_lex_state = 9},
  [512] = {.lex_state = 0, .external_lex_state = 9},
  [513] = {.lex_state = 0, .external_lex_state = 9},
  [514] = {.lex_state = 0, .external_lex_state = 9},
  [515] = {.lex_state = 0, .external_lex_state = 9},
  [516] = {.lex_state = 0, .external_lex_state = 9},
  [517] = {.lex_state = 0, .external_lex_state = 9},
  [518] = {.lex_state = 0, .external_lex_state = 9},
  [519] = {.lex_state = 0, .external_lex_state = 9},
  [520] = {.lex_state = 0, .external_lex_state = 2},
  [521] = {.lex_state = 0, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 9},
  [523] = {.lex_state = 0, .external_lex_state = 9},
  [524] = {.lex_state = 0, .external_lex_state = 2},
  [525] = {.lex_state = 0, .external_lex_state = 29},
  [526] = {.lex_state = 0, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 30},
  [528] = {.lex_state = 0, .external_lex_state = 9},
  [529] = {.lex_state = 17, .external_lex_state = 7},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 17, .external_lex_state = 7},
  [532] = {.lex_state = 1, .external_lex_state = 7},
  [533] = {.lex_state = 1, .external_lex_state = 7},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 9},
  [537] = {.lex_state = 0, .external_lex_state = 9},
  [538] = {.lex_state = 17, .external_lex_state = 7},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 9},
  [541] = {.lex_state = 17, .external_lex_state = 7},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 17, .external_lex_state = 7},
  [544] = {.lex_state = 17, .external_lex_state = 7},
  [545] = {.lex_state = 17, .external_lex_state = 7},
  [546] = {.lex_state = 0, .external_lex_state = 9},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 9},
  [549] = {.lex_state = 0, .external_lex_state = 29},
  [550] = {.lex_state = 0, .external_lex_state = 18},
  [551] = {.lex_state = 0, .external_lex_state = 2},
  [552] = {.lex_state = 0, .external_lex_state = 9},
  [553] = {.lex_state = 0, .external_lex_state = 9},
  [554] = {.lex_state = 0, .external_lex_state = 9},
  [555] = {.lex_state = 0, .external_lex_state = 9},
  [556] = {.lex_state = 0, .external_lex_state = 2},
  [557] = {.lex_state = 0, .external_lex_state = 2},
  [558] = {.lex_state = 0, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 9},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 9},
  [562] = {.lex_state = 0, .external_lex_state = 9},
  [563] = {.lex_state = 1},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 9},
  [567] = {.lex_state = 0, .external_lex_state = 9},
  [568] = {.lex_state = 0, .external_lex_state = 9},
  [569] = {.lex_state = 0, .external_lex_state = 9},
  [570] = {.lex_state = 0, .external_lex_state = 9},
  [571] = {.lex_state = 0, .external_lex_state = 2},
  [572] = {.lex_state = 0, .external_lex_state = 9},
  [573] = {.lex_state = 0, .external_lex_state = 9},
  [574] = {.lex_state = 0, .external_lex_state = 9},
  [575] = {.lex_state = 0, .external_lex_state = 9},
  [576] = {.lex_state = 0, .external_lex_state = 9},
  [577] = {.lex_state = 0, .external_lex_state = 9},
  [578] = {.lex_state = 0, .external_lex_state = 9},
  [579] = {.lex_state = 0, .external_lex_state = 9},
  [580] = {.lex_state = 0, .external_lex_state = 9},
  [581] = {.lex_state = 0, .external_lex_state = 18},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 20},
  [584] = {.lex_state = 0, .external_lex_state = 7},
  [585] = {.lex_state = 16, .external_lex_state = 7},
  [586] = {.lex_state = 0, .external_lex_state = 9},
  [587] = {.lex_state = 0, .external_lex_state = 7},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 9},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 9},
  [592] = {.lex_state = 0, .external_lex_state = 2},
  [593] = {.lex_state = 1, .external_lex_state = 28},
  [594] = {.lex_state = 0, .external_lex_state = 9},
  [595] = {.lex_state = 0, .external_lex_state = 2},
  [596] = {.lex_state = 0, .external_lex_state = 9},
  [597] = {.lex_state = 0, .external_lex_state = 9},
  [598] = {.lex_state = 0, .external_lex_state = 2},
  [599] = {.lex_state = 0, .external_lex_state = 9},
  [600] = {.lex_state = 0, .external_lex_state = 9},
  [601] = {.lex_state = 0, .external_lex_state = 9},
  [602] = {.lex_state = 0, .external_lex_state = 9},
  [603] = {.lex_state = 0, .external_lex_state = 9},
  [604] = {.lex_state = 0, .external_lex_state = 18},
  [605] = {.lex_state = 0, .external_lex_state = 18},
  [606] = {.lex_state = 0, .external_lex_state = 9},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 29},
  [609] = {.lex_state = 9, .external_lex_state = 7},
  [610] = {.lex_state = 19, .external_lex_state = 7},
  [611] = {.lex_state = 0, .external_lex_state = 9},
  [612] = {.lex_state = 0, .external_lex_state = 7},
  [613] = {.lex_state = 0, .external_lex_state = 9},
  [614] = {.lex_state = 0, .external_lex_state = 9},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 7},
  [617] = {.lex_state = 0, .external_lex_state = 31},
  [618] = {.lex_state = 0, .external_lex_state = 9},
  [619] = {.lex_state = 0, .external_lex_state = 2},
  [620] = {.lex_state = 0, .external_lex_state = 9},
  [621] = {.lex_state = 0, .external_lex_state = 18},
  [622] = {.lex_state = 0, .external_lex_state = 9},
  [623] = {.lex_state = 0, .external_lex_state = 9},
  [624] = {.lex_state = 0, .external_lex_state = 9},
  [625] = {.lex_state = 0, .external_lex_state = 9},
  [626] = {.lex_state = 0, .external_lex_state = 9},
  [627] = {.lex_state = 0, .external_lex_state = 9},
  [628] = {.lex_state = 0, .external_lex_state = 9},
  [629] = {.lex_state = 0, .external_lex_state = 9},
  [630] = {.lex_state = 0, .external_lex_state = 9},
  [631] = {.lex_state = 0, .external_lex_state = 9},
  [632] = {.lex_state = 0, .external_lex_state = 9},
  [633] = {.lex_state = 0, .external_lex_state = 16},
  [634] = {.lex_state = 0, .external_lex_state = 16},
  [635] = {.lex_state = 0, .external_lex_state = 16},
  [636] = {.lex_state = 0, .external_lex_state = 16},
  [637] = {.lex_state = 0, .external_lex_state = 16},
  [638] = {.lex_state = 0, .external_lex_state = 16},
  [639] = {.lex_state = 0, .external_lex_state = 9},
  [640] = {.lex_state = 0, .external_lex_state = 9},
  [641] = {.lex_state = 0, .external_lex_state = 9},
  [642] = {.lex_state = 0, .external_lex_state = 9},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 0, .external_lex_state = 9},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 9},
  [647] = {.lex_state = 0, .external_lex_state = 9},
  [648] = {.lex_state = 0, .external_lex_state = 9},
  [649] = {.lex_state = 0, .external_lex_state = 16},
  [650] = {.lex_state = 0, .external_lex_state = 16},
  [651] = {.lex_state = 0, .external_lex_state = 9},
  [652] = {.lex_state = 0, .external_lex_state = 9},
  [653] = {.lex_state = 0, .external_lex_state = 9},
  [654] = {.lex_state = 0, .external_lex_state = 9},
  [655] = {.lex_state = 0, .external_lex_state = 9},
  [656] = {.lex_state = 0, .external_lex_state = 2},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 31},
  [659] = {.lex_state = 0, .external_lex_state = 9},
  [660] = {.lex_state = 0, .external_lex_state = 9},
  [661] = {.lex_state = 1},
  [662] = {.lex_state = 0, .external_lex_state = 9},
  [663] = {.lex_state = 0, .external_lex_state = 9},
  [664] = {.lex_state = 77},
  [665] = {.lex_state = 77},
  [666] = {.lex_state = 0, .external_lex_state = 29},
  [667] = {.lex_state = 21},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 17, .external_lex_state = 7},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 9},
  [673] = {.lex_state = 0, .external_lex_state = 9},
  [674] = {.lex_state = 0, .external_lex_state = 2},
  [675] = {.lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 2},
  [677] = {.lex_state = 0, .external_lex_state = 2},
  [678] = {.lex_state = 0, .external_lex_state = 2},
  [679] = {.lex_state = 0, .external_lex_state = 9},
  [680] = {.lex_state = 1},
  [681] = {.lex_state = 0, .external_lex_state = 9},
  [682] = {.lex_state = 0, .external_lex_state = 9},
  [683] = {.lex_state = 0, .external_lex_state = 30},
  [684] = {.lex_state = 1, .external_lex_state = 7},
  [685] = {.lex_state = 0, .external_lex_state = 9},
  [686] = {.lex_state = 0, .external_lex_state = 9},
  [687] = {.lex_state = 0, .external_lex_state = 9},
  [688] = {.lex_state = 1},
  [689] = {.lex_state = 6, .external_lex_state = 7},
  [690] = {.lex_state = 17, .external_lex_state = 7},
  [691] = {.lex_state = 17, .external_lex_state = 7},
  [692] = {.lex_state = 0, .external_lex_state = 9},
  [693] = {.lex_state = 0, .external_lex_state = 9},
  [694] = {.lex_state = 0, .external_lex_state = 2},
  [695] = {.lex_state = 0, .external_lex_state = 9},
  [696] = {.lex_state = 0, .external_lex_state = 9},
  [697] = {.lex_state = 10, .external_lex_state = 7},
  [698] = {.lex_state = 0, .external_lex_state = 9},
  [699] = {.lex_state = 0, .external_lex_state = 9},
  [700] = {.lex_state = 0, .external_lex_state = 9},
  [701] = {.lex_state = 17, .external_lex_state = 7},
  [702] = {.lex_state = 0, .external_lex_state = 2},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 9},
  [705] = {.lex_state = 0, .external_lex_state = 9},
  [706] = {.lex_state = 0, .external_lex_state = 2},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 9},
  [710] = {.lex_state = 0, .external_lex_state = 7},
  [711] = {.lex_state = 0, .external_lex_state = 9},
  [712] = {.lex_state = 17, .external_lex_state = 7},
  [713] = {.lex_state = 17, .external_lex_state = 7},
  [714] = {.lex_state = 17, .external_lex_state = 7},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 17, .external_lex_state = 7},
  [717] = {.lex_state = 17, .external_lex_state = 7},
  [718] = {.lex_state = 0, .external_lex_state = 2},
  [719] = {.lex_state = 0, .external_lex_state = 7},
  [720] = {.lex_state = 0, .external_lex_state = 9},
  [721] = {.lex_state = 0, .external_lex_state = 9},
  [722] = {.lex_state = 20},
  [723] = {.lex_state = 0, .external_lex_state = 2},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 9, .external_lex_state = 7},
  [726] = {.lex_state = 0, .external_lex_state = 9},
  [727] = {.lex_state = 17, .external_lex_state = 7},
  [728] = {.lex_state = 0, .external_lex_state = 9},
  [729] = {.lex_state = 0, .external_lex_state = 2},
  [730] = {.lex_state = 17, .external_lex_state = 7},
  [731] = {.lex_state = 1, .external_lex_state = 7},
  [732] = {.lex_state = 0, .external_lex_state = 9},
  [733] = {.lex_state = 0, .external_lex_state = 31},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 2},
  [736] = {.lex_state = 0, .external_lex_state = 9},
  [737] = {.lex_state = 0, .external_lex_state = 31},
  [738] = {.lex_state = 17, .external_lex_state = 7},
  [739] = {.lex_state = 0, .external_lex_state = 9},
  [740] = {.lex_state = 0, .external_lex_state = 9},
  [741] = {.lex_state = 0, .external_lex_state = 9},
  [742] = {.lex_state = 0, .external_lex_state = 2},
  [743] = {.lex_state = 0, .external_lex_state = 9},
  [744] = {.lex_state = 0, .external_lex_state = 2},
  [745] = {.lex_state = 0, .external_lex_state = 9},
  [746] = {.lex_state = 0, .external_lex_state = 29},
  [747] = {.lex_state = 0, .external_lex_state = 29},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 0, .external_lex_state = 2},
  [750] = {.lex_state = 9, .external_lex_state = 7},
  [751] = {.lex_state = 19, .external_lex_state = 7},
  [752] = {.lex_state = 0, .external_lex_state = 2},
  [753] = {.lex_state = 77},
  [754] = {.lex_state = 0, .external_lex_state = 9},
  [755] = {.lex_state = 21},
  [756] = {.lex_state = 0, .external_lex_state = 2},
  [757] = {.lex_state = 0, .external_lex_state = 2},
  [758] = {.lex_state = 0, .external_lex_state = 2},
  [759] = {.lex_state = 0, .external_lex_state = 2},
  [760] = {.lex_state = 0, .external_lex_state = 2},
  [761] = {.lex_state = 0, .external_lex_state = 9},
  [762] = {.lex_state = 0, .external_lex_state = 29},
  [763] = {.lex_state = 0, .external_lex_state = 29},
  [764] = {.lex_state = 0, .external_lex_state = 29},
  [765] = {.lex_state = 0, .external_lex_state = 29},
  [766] = {.lex_state = 1},
  [767] = {.lex_state = 0, .external_lex_state = 2},
  [768] = {.lex_state = 0, .external_lex_state = 2},
  [769] = {.lex_state = 0, .external_lex_state = 2},
  [770] = {.lex_state = 0, .external_lex_state = 2},
  [771] = {.lex_state = 1, .external_lex_state = 7},
  [772] = {.lex_state = 1, .external_lex_state = 7},
  [773] = {.lex_state = 1, .external_lex_state = 7},
  [774] = {.lex_state = 0, .external_lex_state = 2},
  [775] = {.lex_state = 0, .external_lex_state = 9},
  [776] = {.lex_state = 0, .external_lex_state = 22},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 1, .external_lex_state = 7},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 0, .external_lex_state = 7},
  [781] = {.lex_state = 0, .external_lex_state = 7},
  [782] = {.lex_state = 0, .external_lex_state = 7},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 6, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 1, .external_lex_state = 28},
  [787] = {.lex_state = 0, .external_lex_state = 7},
  [788] = {.lex_state = 0, .external_lex_state = 7},
  [789] = {.lex_state = 1},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 26},
  [792] = {.lex_state = 1},
  [793] = {.lex_state = 0, .external_lex_state = 7},
  [794] = {.lex_state = 0, .external_lex_state = 31},
  [795] = {.lex_state = 0, .external_lex_state = 7},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 1, .external_lex_state = 7},
  [798] = {.lex_state = 1, .external_lex_state = 7},
  [799] = {.lex_state = 17, .external_lex_state = 7},
  [800] = {.lex_state = 17, .external_lex_state = 7},
  [801] = {.lex_state = 17, .external_lex_state = 7},
  [802] = {.lex_state = 0, .external_lex_state = 7},
  [803] = {.lex_state = 1, .external_lex_state = 28},
  [804] = {.lex_state = 0, .external_lex_state = 7},
  [805] = {.lex_state = 0, .external_lex_state = 7},
  [806] = {.lex_state = 0, .external_lex_state = 7},
  [807] = {.lex_state = 1},
  [808] = {.lex_state = 0, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 32},
  [810] = {.lex_state = 0, .external_lex_state = 7},
  [811] = {.lex_state = 0, .external_lex_state = 7},
  [812] = {.lex_state = 0, .external_lex_state = 24},
  [813] = {.lex_state = 0, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 7},
  [815] = {.lex_state = 1},
  [816] = {.lex_state = 0, .external_lex_state = 24},
  [817] = {.lex_state = 0, .external_lex_state = 24},
  [818] = {.lex_state = 0, .external_lex_state = 7},
  [819] = {.lex_state = 1},
  [820] = {.lex_state = 0, .external_lex_state = 7},
  [821] = {.lex_state = 0, .external_lex_state = 24},
  [822] = {.lex_state = 0, .external_lex_state = 24},
  [823] = {.lex_state = 1},
  [824] = {.lex_state = 0, .external_lex_state = 7},
  [825] = {.lex_state = 0, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 7},
  [827] = {.lex_state = 0, .external_lex_state = 7},
  [828] = {.lex_state = 0, .external_lex_state = 7},
  [829] = {.lex_state = 0, .external_lex_state = 24},
  [830] = {.lex_state = 47},
  [831] = {.lex_state = 0, .external_lex_state = 7},
  [832] = {.lex_state = 0, .external_lex_state = 24},
  [833] = {.lex_state = 0, .external_lex_state = 24},
  [834] = {.lex_state = 0, .external_lex_state = 32},
  [835] = {.lex_state = 0, .external_lex_state = 7},
  [836] = {.lex_state = 0, .external_lex_state = 7},
  [837] = {.lex_state = 0, .external_lex_state = 7},
  [838] = {.lex_state = 0, .external_lex_state = 7},
  [839] = {.lex_state = 0, .external_lex_state = 25},
  [840] = {.lex_state = 0, .external_lex_state = 25},
  [841] = {.lex_state = 0, .external_lex_state = 24},
  [842] = {.lex_state = 0, .external_lex_state = 24},
  [843] = {.lex_state = 0, .external_lex_state = 24},
  [844] = {.lex_state = 0, .external_lex_state = 24},
  [845] = {.lex_state = 0, .external_lex_state = 24},
  [846] = {.lex_state = 0, .external_lex_state = 24},
  [847] = {.lex_state = 0, .external_lex_state = 7},
  [848] = {.lex_state = 0, .external_lex_state = 25},
  [849] = {.lex_state = 0, .external_lex_state = 25},
  [850] = {.lex_state = 0, .external_lex_state = 25},
  [851] = {.lex_state = 0, .external_lex_state = 25},
  [852] = {.lex_state = 0, .external_lex_state = 25},
  [853] = {.lex_state = 0, .external_lex_state = 25},
  [854] = {.lex_state = 0, .external_lex_state = 7},
  [855] = {.lex_state = 1, .external_lex_state = 7},
  [856] = {.lex_state = 0, .external_lex_state = 2},
  [857] = {.lex_state = 0, .external_lex_state = 7},
  [858] = {.lex_state = 0, .external_lex_state = 7},
  [859] = {.lex_state = 0, .external_lex_state = 7},
  [860] = {.lex_state = 0, .external_lex_state = 7},
  [861] = {.lex_state = 0, .external_lex_state = 2},
  [862] = {.lex_state = 0, .external_lex_state = 2},
  [863] = {.lex_state = 0, .external_lex_state = 7},
  [864] = {.lex_state = 0, .external_lex_state = 7},
  [865] = {.lex_state = 0, .external_lex_state = 7},
  [866] = {.lex_state = 0, .external_lex_state = 7},
  [867] = {.lex_state = 0, .external_lex_state = 7},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 1, .external_lex_state = 28},
  [870] = {.lex_state = 0, .external_lex_state = 31},
  [871] = {.lex_state = 0, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 22},
  [873] = {.lex_state = 0, .external_lex_state = 22},
  [874] = {.lex_state = 0, .external_lex_state = 22},
  [875] = {.lex_state = 0, .external_lex_state = 7},
  [876] = {.lex_state = 1, .external_lex_state = 7},
  [877] = {.lex_state = 0, .external_lex_state = 22},
  [878] = {.lex_state = 0, .external_lex_state = 22},
  [879] = {.lex_state = 1},
  [880] = {.lex_state = 0, .external_lex_state = 7},
  [881] = {.lex_state = 0, .external_lex_state = 7},
  [882] = {.lex_state = 0, .external_lex_state = 22},
  [883] = {.lex_state = 0, .external_lex_state = 22},
  [884] = {.lex_state = 0, .external_lex_state = 7},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 0, .external_lex_state = 7},
  [887] = {.lex_state = 0, .external_lex_state = 7},
  [888] = {.lex_state = 1, .external_lex_state = 7},
  [889] = {.lex_state = 0, .external_lex_state = 7},
  [890] = {.lex_state = 0, .external_lex_state = 33},
  [891] = {.lex_state = 0, .external_lex_state = 7},
  [892] = {.lex_state = 0, .external_lex_state = 7},
  [893] = {.lex_state = 1, .external_lex_state = 7},
  [894] = {.lex_state = 1, .external_lex_state = 7},
  [895] = {.lex_state = 0, .external_lex_state = 7},
  [896] = {.lex_state = 0, .external_lex_state = 7},
  [897] = {.lex_state = 0, .external_lex_state = 7},
  [898] = {.lex_state = 1},
  [899] = {.lex_state = 1},
  [900] = {.lex_state = 1, .external_lex_state = 7},
  [901] = {.lex_state = 0, .external_lex_state = 7},
  [902] = {.lex_state = 1, .external_lex_state = 7},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 0, .external_lex_state = 7},
  [905] = {.lex_state = 0, .external_lex_state = 7},
  [906] = {.lex_state = 0, .external_lex_state = 7},
  [907] = {.lex_state = 1},
  [908] = {.lex_state = 1},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 7},
  [911] = {.lex_state = 17, .external_lex_state = 7},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 0, .external_lex_state = 7},
  [916] = {.lex_state = 6, .external_lex_state = 7},
  [917] = {.lex_state = 21},
  [918] = {.lex_state = 0, .external_lex_state = 32},
  [919] = {.lex_state = 0, .external_lex_state = 7},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 17, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 0, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 7},
  [927] = {.lex_state = 0, .external_lex_state = 7},
  [928] = {.lex_state = 0, .external_lex_state = 7},
  [929] = {.lex_state = 0, .external_lex_state = 32},
  [930] = {.lex_state = 0, .external_lex_state = 7},
  [931] = {.lex_state = 0, .external_lex_state = 7},
  [932] = {.lex_state = 0, .external_lex_state = 7},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 1},
  [937] = {.lex_state = 0, .external_lex_state = 7},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 7},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 0, .external_lex_state = 7},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 0, .external_lex_state = 7},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 20},
  [947] = {.lex_state = 0, .external_lex_state = 7},
  [948] = {.lex_state = 1},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 0, .external_lex_state = 7},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 1},
  [953] = {.lex_state = 0, .external_lex_state = 7},
  [954] = {.lex_state = 0, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 1},
  [958] = {.lex_state = 0, .external_lex_state = 33},
  [959] = {.lex_state = 0, .external_lex_state = 7},
  [960] = {.lex_state = 0, .external_lex_state = 7},
  [961] = {.lex_state = 0, .external_lex_state = 31},
  [962] = {.lex_state = 0, .external_lex_state = 7},
  [963] = {.lex_state = 20},
  [964] = {.lex_state = 0, .external_lex_state = 7},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 0, .external_lex_state = 31},
  [968] = {.lex_state = 0, .external_lex_state = 31},
  [969] = {.lex_state = 0, .external_lex_state = 7},
  [970] = {.lex_state = 296},
  [971] = {.lex_state = 296},
  [972] = {.lex_state = 1},
  [973] = {.lex_state = 20},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 295},
  [976] = {.lex_state = 0, .external_lex_state = 34},
  [977] = {.lex_state = 297, .external_lex_state = 35},
  [978] = {.lex_state = 0, .external_lex_state = 7},
  [979] = {.lex_state = 0, .external_lex_state = 36},
  [980] = {.lex_state = 0, .external_lex_state = 31},
  [981] = {.lex_state = 297, .external_lex_state = 35},
  [982] = {.lex_state = 1},
  [983] = {.lex_state = 20},
  [984] = {.lex_state = 0, .external_lex_state = 7},
  [985] = {.lex_state = 1},
  [986] = {.lex_state = 298},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 0},
  [989] = {.lex_state = 295},
  [990] = {.lex_state = 296},
  [991] = {.lex_state = 0, .external_lex_state = 34},
  [992] = {.lex_state = 298},
  [993] = {.lex_state = 296},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 0, .external_lex_state = 34},
  [996] = {.lex_state = 1},
  [997] = {.lex_state = 0},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 0, .external_lex_state = 36},
  [1000] = {.lex_state = 0},
  [1001] = {.lex_state = 0, .external_lex_state = 3},
  [1002] = {.lex_state = 20},
  [1003] = {.lex_state = 0, .external_lex_state = 7},
  [1004] = {.lex_state = 1},
  [1005] = {.lex_state = 0, .external_lex_state = 31},
  [1006] = {.lex_state = 20},
  [1007] = {.lex_state = 0, .external_lex_state = 7},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 0, .external_lex_state = 7},
  [1010] = {.lex_state = 6},
  [1011] = {.lex_state = 1},
  [1012] = {.lex_state = 1},
  [1013] = {.lex_state = 0},
  [1014] = {.lex_state = 0, .external_lex_state = 7},
  [1015] = {.lex_state = 1},
  [1016] = {.lex_state = 1},
  [1017] = {.lex_state = 0, .external_lex_state = 7},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 0, .external_lex_state = 7},
  [1020] = {.lex_state = 297, .external_lex_state = 35},
  [1021] = {.lex_state = 297, .external_lex_state = 35},
  [1022] = {.lex_state = 0, .external_lex_state = 34},
  [1023] = {.lex_state = 297, .external_lex_state = 35},
  [1024] = {.lex_state = 1},
  [1025] = {.lex_state = 297, .external_lex_state = 35},
  [1026] = {.lex_state = 297, .external_lex_state = 35},
  [1027] = {.lex_state = 297, .external_lex_state = 35},
  [1028] = {.lex_state = 297, .external_lex_state = 35},
  [1029] = {.lex_state = 297, .external_lex_state = 35},
  [1030] = {.lex_state = 297, .external_lex_state = 35},
  [1031] = {.lex_state = 297, .external_lex_state = 35},
  [1032] = {.lex_state = 297, .external_lex_state = 35},
  [1033] = {.lex_state = 297, .external_lex_state = 35},
  [1034] = {.lex_state = 297, .external_lex_state = 35},
  [1035] = {.lex_state = 297, .external_lex_state = 35},
  [1036] = {.lex_state = 297, .external_lex_state = 35},
  [1037] = {.lex_state = 297, .external_lex_state = 35},
  [1038] = {.lex_state = 297, .external_lex_state = 35},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 47},
  [1041] = {.lex_state = 296},
  [1042] = {.lex_state = 0, .external_lex_state = 7},
  [1043] = {.lex_state = 47},
  [1044] = {.lex_state = 299},
  [1045] = {.lex_state = 0, .external_lex_state = 6},
  [1046] = {.lex_state = 20},
  [1047] = {.lex_state = 0, .external_lex_state = 33},
  [1048] = {.lex_state = 1},
  [1049] = {.lex_state = 299},
  [1050] = {.lex_state = 0, .external_lex_state = 36},
  [1051] = {.lex_state = 0, .external_lex_state = 33},
  [1052] = {.lex_state = 0, .external_lex_state = 36},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 0, .external_lex_state = 3},
  [1055] = {.lex_state = 1},
  [1056] = {.lex_state = 295},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 1},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 1},
  [1063] = {.lex_state = 1},
  [1064] = {.lex_state = 1},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 296},
  [1072] = {.lex_state = 297, .external_lex_state = 35},
  [1073] = {.lex_state = 0, .external_lex_state = 35},
  [1074] = {.lex_state = 0, .external_lex_state = 37},
  [1075] = {.lex_state = 0, .external_lex_state = 37},
  [1076] = {.lex_state = 0, .external_lex_state = 37},
  [1077] = {.lex_state = 0, .external_lex_state = 37},
  [1078] = {.lex_state = 0, .external_lex_state = 37},
  [1079] = {.lex_state = 1},
  [1080] = {.lex_state = 0, .external_lex_state = 37},
  [1081] = {.lex_state = 0, .external_lex_state = 35},
  [1082] = {.lex_state = 0, .external_lex_state = 35},
  [1083] = {.lex_state = 0, .external_lex_state = 35},
  [1084] = {.lex_state = 0, .external_lex_state = 35},
  [1085] = {.lex_state = 0, .external_lex_state = 7},
  [1086] = {.lex_state = 1},
  [1087] = {.lex_state = 0, .external_lex_state = 37},
  [1088] = {.lex_state = 1},
  [1089] = {.lex_state = 0, .external_lex_state = 37},
  [1090] = {.lex_state = 1},
  [1091] = {.lex_state = 1},
  [1092] = {.lex_state = 0, .external_lex_state = 37},
  [1093] = {.lex_state = 0, .external_lex_state = 35},
  [1094] = {.lex_state = 0, .external_lex_state = 35},
  [1095] = {.lex_state = 0, .external_lex_state = 35},
  [1096] = {.lex_state = 0, .external_lex_state = 7},
  [1097] = {.lex_state = 1},
  [1098] = {.lex_state = 297},
  [1099] = {.lex_state = 0, .external_lex_state = 37},
  [1100] = {.lex_state = 0, .external_lex_state = 37},
  [1101] = {.lex_state = 0, .external_lex_state = 35},
  [1102] = {.lex_state = 47},
  [1103] = {.lex_state = 1},
  [1104] = {.lex_state = 0, .external_lex_state = 35},
  [1105] = {.lex_state = 0, .external_lex_state = 35},
  [1106] = {.lex_state = 0, .external_lex_state = 35},
  [1107] = {.lex_state = 0, .external_lex_state = 7},
  [1108] = {.lex_state = 1},
  [1109] = {.lex_state = 0, .external_lex_state = 37},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 0, .external_lex_state = 35},
  [1113] = {.lex_state = 0, .external_lex_state = 35},
  [1114] = {.lex_state = 0, .external_lex_state = 7},
  [1115] = {.lex_state = 1},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 47},
  [1118] = {.lex_state = 0, .external_lex_state = 35},
  [1119] = {.lex_state = 0, .external_lex_state = 35},
  [1120] = {.lex_state = 0, .external_lex_state = 35},
  [1121] = {.lex_state = 0, .external_lex_state = 7},
  [1122] = {.lex_state = 0, .external_lex_state = 37},
  [1123] = {.lex_state = 0, .external_lex_state = 37},
  [1124] = {.lex_state = 1},
  [1125] = {.lex_state = 0, .external_lex_state = 35},
  [1126] = {.lex_state = 0, .external_lex_state = 35},
  [1127] = {.lex_state = 0, .external_lex_state = 35},
  [1128] = {.lex_state = 0, .external_lex_state = 7},
  [1129] = {.lex_state = 1},
  [1130] = {.lex_state = 1},
  [1131] = {.lex_state = 47},
  [1132] = {.lex_state = 0, .external_lex_state = 35},
  [1133] = {.lex_state = 0, .external_lex_state = 35},
  [1134] = {.lex_state = 0, .external_lex_state = 35},
  [1135] = {.lex_state = 0, .external_lex_state = 7},
  [1136] = {.lex_state = 0, .external_lex_state = 37},
  [1137] = {.lex_state = 0, .external_lex_state = 7},
  [1138] = {.lex_state = 0, .external_lex_state = 37},
  [1139] = {.lex_state = 0, .external_lex_state = 35},
  [1140] = {.lex_state = 0, .external_lex_state = 35},
  [1141] = {.lex_state = 0, .external_lex_state = 35},
  [1142] = {.lex_state = 0, .external_lex_state = 7},
  [1143] = {.lex_state = 0, .external_lex_state = 7},
  [1144] = {.lex_state = 0, .external_lex_state = 7},
  [1145] = {.lex_state = 0, .external_lex_state = 7},
  [1146] = {.lex_state = 1},
  [1147] = {.lex_state = 0, .external_lex_state = 35},
  [1148] = {.lex_state = 0, .external_lex_state = 35},
  [1149] = {.lex_state = 1},
  [1150] = {.lex_state = 0, .external_lex_state = 35},
  [1151] = {.lex_state = 0, .external_lex_state = 7},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 47},
  [1155] = {.lex_state = 1},
  [1156] = {.lex_state = 299},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 0, .external_lex_state = 7},
  [1159] = {.lex_state = 1},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 1},
  [1162] = {.lex_state = 1},
  [1163] = {.lex_state = 47},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 295},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 1},
  [1169] = {.lex_state = 0, .external_lex_state = 7},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 0, .external_lex_state = 37},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 47},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 0, .external_lex_state = 37},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0, .external_lex_state = 35},
  [1181] = {.lex_state = 33},
  [1182] = {.lex_state = 0},
  [1183] = {.lex_state = 1},
  [1184] = {.lex_state = 1},
  [1185] = {.lex_state = 0, .external_lex_state = 37},
  [1186] = {.lex_state = 0, .external_lex_state = 37},
  [1187] = {.lex_state = 1},
  [1188] = {.lex_state = 47},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 1},
  [1191] = {.lex_state = 1},
  [1192] = {.lex_state = 0, .external_lex_state = 35},
  [1193] = {.lex_state = 0, .external_lex_state = 37},
  [1194] = {.lex_state = 0, .external_lex_state = 37},
  [1195] = {.lex_state = 0, .external_lex_state = 37},
  [1196] = {.lex_state = 0, .external_lex_state = 37},
  [1197] = {.lex_state = 0, .external_lex_state = 37},
  [1198] = {.lex_state = 0, .external_lex_state = 7},
  [1199] = {.lex_state = 0, .external_lex_state = 7},
  [1200] = {.lex_state = 0, .external_lex_state = 37},
  [1201] = {.lex_state = 0, .external_lex_state = 37},
  [1202] = {.lex_state = 1},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 0, .external_lex_state = 37},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 0, .external_lex_state = 37},
  [1207] = {.lex_state = 1},
  [1208] = {.lex_state = 6},
  [1209] = {.lex_state = 1},
  [1210] = {.lex_state = 0, .external_lex_state = 37},
  [1211] = {.lex_state = 0, .external_lex_state = 37},
  [1212] = {.lex_state = 1},
  [1213] = {.lex_state = 1},
  [1214] = {.lex_state = 1},
  [1215] = {.lex_state = 298},
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
    [sym__until_binding_start] = ACTIONS(1),
    [sym__variable_name] = ACTIONS(1),
    [sym__async_await_binding_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1179),
    [sym_item] = STATE(136),
    [sym__trivia] = STATE(136),
    [aux_sym_source_file_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(673),
    [sym__collection_operation] = STATE(673),
    [sym_let_statement] = STATE(673),
    [sym_exec_statement] = STATE(673),
    [sym_spawn_statement] = STATE(673),
    [sym__invalid_exec_binding] = STATE(679),
    [sym__invalid_until_binding] = STATE(682),
    [sym__invalid_named_binding] = STATE(695),
    [sym_run_statement] = STATE(673),
    [sym__async_modifier] = STATE(1058),
    [sym__run] = STATE(700),
    [sym_await_statement] = STATE(673),
    [sym_implicit_run_statement] = STATE(673),
    [sym__implicit_run_line] = STATE(168),
    [sym_seek_statement] = STATE(673),
    [sym_ask_statement] = STATE(673),
    [sym_generate_statement] = STATE(673),
    [sym_reduce_statement] = STATE(673),
    [sym_map_statement] = STATE(673),
    [sym_keep_statement] = STATE(673),
    [sym_drop_statement] = STATE(673),
    [sym_sort_statement] = STATE(673),
    [sym_repeat_statement] = STATE(673),
    [sym_invalid_flow_reserved_statement] = STATE(673),
    [sym__query_directive_key] = STATE(799),
    [sym__route_directive_key] = STATE(799),
    [sym_directive_key] = STATE(730),
    [sym_role] = STATE(730),
    [sym__flow_reserved_word] = STATE(730),
    [sym__collection_binding_word] = STATE(730),
    [sym__async_await_binding_word] = STATE(730),
    [sym__agic_reserved_word] = STATE(730),
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
    [sym__flow_operation] = STATE(673),
    [sym__collection_operation] = STATE(673),
    [sym_let_statement] = STATE(673),
    [sym_exec_statement] = STATE(673),
    [sym_spawn_statement] = STATE(673),
    [sym__invalid_exec_binding] = STATE(679),
    [sym__invalid_until_binding] = STATE(682),
    [sym__invalid_named_binding] = STATE(695),
    [sym_run_statement] = STATE(673),
    [sym__async_modifier] = STATE(1058),
    [sym__run] = STATE(700),
    [sym_await_statement] = STATE(673),
    [sym_implicit_run_statement] = STATE(673),
    [sym__implicit_run_line] = STATE(168),
    [sym_seek_statement] = STATE(673),
    [sym_ask_statement] = STATE(673),
    [sym_generate_statement] = STATE(673),
    [sym_reduce_statement] = STATE(673),
    [sym_map_statement] = STATE(673),
    [sym_keep_statement] = STATE(673),
    [sym_drop_statement] = STATE(673),
    [sym_sort_statement] = STATE(673),
    [sym_repeat_statement] = STATE(673),
    [sym_invalid_flow_reserved_statement] = STATE(673),
    [sym__query_directive_key] = STATE(799),
    [sym__route_directive_key] = STATE(799),
    [sym_directive_key] = STATE(730),
    [sym_role] = STATE(730),
    [sym__flow_reserved_word] = STATE(730),
    [sym__collection_binding_word] = STATE(730),
    [sym__async_await_binding_word] = STATE(730),
    [sym__agic_reserved_word] = STATE(730),
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
    [sym__flow_operation] = STATE(278),
    [sym__collection_operation] = STATE(278),
    [sym_let_statement] = STATE(278),
    [sym_exec_statement] = STATE(278),
    [sym_spawn_statement] = STATE(278),
    [sym__invalid_exec_binding] = STATE(279),
    [sym__invalid_until_binding] = STATE(280),
    [sym__invalid_named_binding] = STATE(281),
    [sym_run_statement] = STATE(278),
    [sym__async_modifier] = STATE(1069),
    [sym__run] = STATE(282),
    [sym_await_statement] = STATE(278),
    [sym_implicit_run_statement] = STATE(278),
    [sym__implicit_run_line] = STATE(90),
    [sym_seek_statement] = STATE(278),
    [sym_ask_statement] = STATE(278),
    [sym_generate_statement] = STATE(278),
    [sym_reduce_statement] = STATE(278),
    [sym_map_statement] = STATE(278),
    [sym_keep_statement] = STATE(278),
    [sym_drop_statement] = STATE(278),
    [sym_sort_statement] = STATE(278),
    [sym_repeat_statement] = STATE(278),
    [sym_invalid_flow_reserved_statement] = STATE(278),
    [sym__query_directive_key] = STATE(799),
    [sym__route_directive_key] = STATE(799),
    [sym_directive_key] = STATE(669),
    [sym_role] = STATE(669),
    [sym__flow_reserved_word] = STATE(669),
    [sym__collection_binding_word] = STATE(669),
    [sym__async_await_binding_word] = STATE(669),
    [sym__agic_reserved_word] = STATE(669),
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
    [sym_flow_async_keyword] = ACTIONS(29),
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
    [sym_recall_keyword] = ACTIONS(11),
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
      sym__until_binding_start,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(194), 1,
      sym_local_name,
    STATE(700), 1,
      sym__run,
    STATE(1058), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(711), 14,
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
      sym__until_binding_start,
    STATE(191), 1,
      sym_local_name,
    STATE(282), 1,
      sym__run,
    STATE(1069), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(286), 14,
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
      sym__until_binding_start,
    ACTIONS(171), 1,
      sym__async_await_binding_start,
    STATE(494), 1,
      sym_text_inline,
    STATE(496), 1,
      sym__run,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
    STATE(495), 7,
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
      sym__until_binding_start,
    ACTIONS(183), 1,
      sym__async_await_binding_start,
    STATE(325), 1,
      sym_text_inline,
    STATE(327), 1,
      sym__run,
    STATE(410), 1,
      sym_text_block,
    STATE(737), 1,
      sym_line_end,
    STATE(326), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [296] = 12,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym_pass_keyword,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(165), 1,
      sym__unroled_message_line,
    STATE(488), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(492), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(739), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(799), 2,
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
  [346] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(165), 1,
      sym__unroled_message_line,
    STATE(488), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(492), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(739), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(799), 2,
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
    STATE(656), 12,
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
      sym__until_binding_start,
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
    STATE(493), 1,
      sym__query_directive_key,
    STATE(1000), 1,
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
    STATE(120), 1,
      sym_base_type,
    STATE(261), 1,
      sym_type,
    STATE(398), 1,
      sym_type_name,
    STATE(522), 1,
      sym_line_end,
    STATE(397), 2,
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
    STATE(120), 1,
      sym_base_type,
    STATE(266), 1,
      sym_type,
    STATE(398), 1,
      sym_type_name,
    STATE(566), 1,
      sym_line_end,
    STATE(397), 2,
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
    STATE(766), 1,
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
    STATE(120), 1,
      sym_base_type,
    STATE(339), 1,
      sym_line_end,
    STATE(398), 1,
      sym_type_name,
    STATE(463), 1,
      sym_type,
    STATE(397), 2,
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
    STATE(120), 1,
      sym_base_type,
    STATE(351), 1,
      sym_line_end,
    STATE(398), 1,
      sym_type_name,
    STATE(465), 1,
      sym_type,
    STATE(397), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [657] = 6,
    ACTIONS(43), 1,
      sym_flow_generate_keyword,
    ACTIONS(45), 1,
      sym_flow_reduce_keyword,
    ACTIONS(47), 1,
      sym_flow_map_keyword,
    STATE(541), 1,
      sym__collection_binding_word,
    ACTIONS(249), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(540), 5,
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
    STATE(714), 1,
      sym__collection_binding_word,
    ACTIONS(251), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(344), 5,
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
    STATE(60), 1,
      sym__required_space,
    STATE(317), 1,
      sym_line_end,
    STATE(318), 1,
      sym__invalid_modified_run_tail,
    STATE(319), 1,
      sym_inline_agic,
    STATE(701), 1,
      sym_runnable,
  [746] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(477), 1,
      sym__named_if_complement,
    STATE(743), 1,
      sym__inline_if_complement,
    STATE(745), 1,
      sym__if_complements,
    STATE(807), 1,
      sym__lanes_complement,
    STATE(810), 1,
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
    STATE(61), 1,
      sym__required_space,
    STATE(720), 1,
      sym_line_end,
    STATE(721), 1,
      sym__invalid_modified_run_tail,
    STATE(726), 1,
      sym_inline_agic,
    STATE(727), 1,
      sym_runnable,
  [816] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(477), 1,
      sym__named_if_complement,
    STATE(485), 1,
      sym__if_complements,
    STATE(743), 1,
      sym__inline_if_complement,
    STATE(807), 1,
      sym__lanes_complement,
    STATE(808), 1,
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
    STATE(290), 1,
      sym__inline_if_complement,
    STATE(291), 1,
      sym__if_complements,
    STATE(452), 1,
      sym__named_if_complement,
    STATE(879), 1,
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
    STATE(290), 1,
      sym__inline_if_complement,
    STATE(292), 1,
      sym__if_complements,
    STATE(452), 1,
      sym__named_if_complement,
    STATE(879), 1,
      sym__lanes_complement,
    STATE(881), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [915] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1191), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [939] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1168), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [963] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1024), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [987] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1129), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1011] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1155), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1035] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(275), 1,
      sym_base_type,
    STATE(894), 1,
      sym_type_name,
    STATE(949), 1,
      sym_type,
    STATE(893), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1059] = 10,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(299), 1,
      sym_newline,
    STATE(473), 1,
      sym__lanes_complement,
    STATE(732), 1,
      sym__runnable_complements,
    STATE(740), 1,
      sym_inline_agic,
    STATE(804), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1091] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1213), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1115] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1108), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1139] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(275), 1,
      sym_base_type,
    STATE(795), 1,
      sym_type,
    STATE(894), 1,
      sym_type_name,
    STATE(893), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1163] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1115), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1187] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(974), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1211] = 10,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    STATE(288), 1,
      sym__runnable_complements,
    STATE(289), 1,
      sym_inline_agic,
    STATE(450), 1,
      sym__lanes_complement,
    STATE(875), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1243] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1103), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1267] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1079), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1291] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1130), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1315] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1170), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1339] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(216), 1,
      sym_base_type,
    STATE(675), 1,
      sym_type_name,
    STATE(1167), 1,
      sym_type,
    STATE(671), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
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
    STATE(240), 1,
      sym_property,
    STATE(1194), 1,
      sym__cap_text_body,
    STATE(1201), 1,
      sym_cap_body,
    STATE(84), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1392] = 9,
    ACTIONS(305), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(240), 1,
      sym_property,
    STATE(1193), 1,
      sym_cap_body,
    STATE(1194), 1,
      sym__cap_text_body,
    STATE(84), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1421] = 9,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(317), 1,
      sym_blank_line,
    ACTIONS(319), 1,
      sym__dedent,
    STATE(240), 1,
      sym_property,
    STATE(1100), 1,
      sym_cap_body,
    STATE(1194), 1,
      sym__cap_text_body,
    STATE(46), 2,
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
    STATE(240), 1,
      sym_property,
    STATE(1089), 1,
      sym_cap_body,
    STATE(1194), 1,
      sym__cap_text_body,
    STATE(45), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1479] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(325), 1,
      sym_flow_run_keyword,
    STATE(282), 1,
      sym__run,
    STATE(717), 1,
      sym__async_await_binding_word,
    STATE(1069), 1,
      sym__async_modifier,
    STATE(344), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1503] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(31), 1,
      sym_flow_await_keyword,
    ACTIONS(327), 1,
      sym_flow_run_keyword,
    STATE(544), 1,
      sym__async_await_binding_word,
    STATE(700), 1,
      sym__run,
    STATE(1058), 1,
      sym__async_modifier,
    STATE(540), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1527] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(329), 1,
      sym_arrow,
    ACTIONS(331), 1,
      sym_colon,
    STATE(119), 1,
      sym__reduce_inline_block,
    STATE(728), 1,
      sym__reduce_inline_line,
    STATE(731), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1553] = 9,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    ACTIONS(335), 1,
      sym_text_line,
    STATE(576), 1,
      sym_line_end,
    STATE(699), 1,
      sym_inline_agic,
    STATE(783), 1,
      sym_runnable,
  [1581] = 8,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    STATE(477), 1,
      sym__named_if_complement,
    STATE(485), 1,
      sym__if_complements,
    STATE(743), 1,
      sym__inline_if_complement,
    STATE(807), 1,
      sym__lanes_complement,
    STATE(808), 1,
      sym_position,
    ACTIONS(341), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1607] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(343), 1,
      sym_blank_line,
    ACTIONS(345), 1,
      sym__dedent,
    STATE(1123), 1,
      sym__cap_text_body,
    STATE(62), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1631] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(347), 1,
      sym_arrow,
    ACTIONS(349), 1,
      sym_colon,
    STATE(138), 1,
      sym__reduce_inline_block,
    STATE(287), 1,
      sym__reduce_inline_line,
    STATE(684), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1657] = 8,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    STATE(477), 1,
      sym__named_if_complement,
    STATE(743), 1,
      sym__inline_if_complement,
    STATE(745), 1,
      sym__if_complements,
    STATE(807), 1,
      sym__lanes_complement,
    STATE(810), 1,
      sym_position,
    ACTIONS(341), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1683] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(351), 1,
      sym__one_integer_literal,
    ACTIONS(353), 1,
      sym__other_integer_literal,
    ACTIONS(355), 1,
      sym_flow_windowing_keyword,
    ACTIONS(357), 1,
      sym_colon,
    STATE(815), 1,
      sym__repeat_count_complement,
    STATE(1097), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1709] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(359), 1,
      sym_flow_if_keyword,
    STATE(290), 1,
      sym__inline_if_complement,
    STATE(291), 1,
      sym__if_complements,
    STATE(452), 1,
      sym__named_if_complement,
    STATE(879), 1,
      sym__lanes_complement,
    STATE(880), 1,
      sym_position,
    ACTIONS(341), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1735] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(359), 1,
      sym_flow_if_keyword,
    STATE(290), 1,
      sym__inline_if_complement,
    STATE(292), 1,
      sym__if_complements,
    STATE(452), 1,
      sym__named_if_complement,
    STATE(879), 1,
      sym__lanes_complement,
    STATE(881), 1,
      sym_position,
    ACTIONS(341), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1761] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(361), 1,
      sym_arrow,
    ACTIONS(363), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_text_line,
    STATE(339), 1,
      sym_line_end,
    STATE(340), 1,
      sym_inline_agic,
    STATE(712), 1,
      sym_runnable,
  [1789] = 9,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(367), 1,
      sym_arrow,
    ACTIONS(369), 1,
      sym_colon,
    ACTIONS(371), 1,
      sym_text_line,
    STATE(522), 1,
      sym_line_end,
    STATE(528), 1,
      sym_inline_agic,
    STATE(529), 1,
      sym_runnable,
  [1817] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(373), 1,
      sym_blank_line,
    ACTIONS(375), 1,
      sym__dedent,
    STATE(1210), 1,
      sym__cap_text_body,
    STATE(98), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1841] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    ACTIONS(377), 1,
      sym_text_line,
    STATE(285), 1,
      sym_inline_agic,
    STATE(356), 1,
      sym_line_end,
    STATE(868), 1,
      sym_runnable,
  [1869] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(375), 1,
      sym__dedent,
    ACTIONS(379), 1,
      sym_blank_line,
    STATE(1210), 1,
      sym__cap_text_body,
    STATE(66), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1893] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(351), 1,
      sym__one_integer_literal,
    ACTIONS(353), 1,
      sym__other_integer_literal,
    ACTIONS(355), 1,
      sym_flow_windowing_keyword,
    ACTIONS(381), 1,
      sym_colon,
    STATE(965), 1,
      sym__repeat_count_complement,
    STATE(1205), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1919] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(373), 1,
      sym_blank_line,
    ACTIONS(383), 1,
      sym__dedent,
    STATE(1122), 1,
      sym__cap_text_body,
    STATE(98), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1943] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(389), 1,
      sym__dedent,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1197), 1,
      sym__repeat_statements,
    STATE(93), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1966] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(413), 1,
      sym_text_body,
    STATE(968), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(395), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1985] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(413), 1,
      sym_text_body,
    STATE(968), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(399), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2004] = 6,
    ACTIONS(401), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__comment_start,
    ACTIONS(407), 1,
      sym__line_start,
    STATE(239), 1,
      sym__flow_statement,
    ACTIONS(405), 2,
      sym__dedent,
      sym__until_start,
    STATE(75), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2025] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(283), 1,
      sym_inline_agic,
    STATE(864), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2048] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(284), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2071] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(285), 1,
      sym_inline_agic,
    STATE(868), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2094] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    STATE(473), 1,
      sym__lanes_complement,
    STATE(732), 1,
      sym__runnable_complements,
    STATE(740), 1,
      sym_inline_agic,
    STATE(804), 1,
      sym__named_using_complement,
  [2119] = 6,
    ACTIONS(403), 1,
      sym__comment_start,
    ACTIONS(407), 1,
      sym__line_start,
    ACTIONS(415), 1,
      sym_blank_line,
    STATE(239), 1,
      sym__flow_statement,
    ACTIONS(417), 2,
      sym__dedent,
      sym__until_start,
    STATE(78), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2140] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(419), 1,
      sym_blank_line,
    ACTIONS(421), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1196), 1,
      sym__repeat_statements,
    STATE(81), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2163] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    STATE(473), 1,
      sym__lanes_complement,
    STATE(580), 1,
      sym__runnable_complements,
    STATE(740), 1,
      sym_inline_agic,
    STATE(804), 1,
      sym__named_using_complement,
  [2188] = 6,
    ACTIONS(423), 1,
      sym_blank_line,
    ACTIONS(426), 1,
      sym__comment_start,
    ACTIONS(431), 1,
      sym__line_start,
    STATE(239), 1,
      sym__flow_statement,
    ACTIONS(429), 2,
      sym__dedent,
      sym__until_start,
    STATE(78), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2209] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(699), 1,
      sym_inline_agic,
    STATE(783), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2232] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    STATE(288), 1,
      sym__runnable_complements,
    STATE(289), 1,
      sym_inline_agic,
    STATE(450), 1,
      sym__lanes_complement,
    STATE(875), 1,
      sym__named_using_complement,
  [2257] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(440), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1195), 1,
      sym__repeat_statements,
    STATE(173), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2280] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(442), 1,
      sym_blank_line,
    ACTIONS(444), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1206), 1,
      sym__repeat_statements,
    STATE(87), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2303] = 8,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    STATE(289), 1,
      sym_inline_agic,
    STATE(304), 1,
      sym__runnable_complements,
    STATE(450), 1,
      sym__lanes_complement,
    STATE(875), 1,
      sym__named_using_complement,
  [2328] = 6,
    ACTIONS(446), 1,
      sym_blank_line,
    ACTIONS(449), 1,
      sym__comment_start,
    ACTIONS(454), 1,
      sym__line_start,
    STATE(240), 1,
      sym_property,
    ACTIONS(452), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(84), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2349] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(698), 1,
      sym_inline_agic,
    STATE(782), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2372] = 5,
    ACTIONS(457), 1,
      sym_blank_line,
    ACTIONS(459), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym__directive_start,
    ACTIONS(461), 2,
      sym__dedent,
      sym__line_start,
    STATE(88), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2391] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(465), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1099), 1,
      sym__repeat_statements,
    STATE(173), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2414] = 5,
    ACTIONS(467), 1,
      sym_blank_line,
    ACTIONS(470), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym__directive_start,
    ACTIONS(473), 2,
      sym__dedent,
      sym__line_start,
    STATE(88), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2433] = 5,
    ACTIONS(459), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym__directive_start,
    ACTIONS(478), 1,
      sym_blank_line,
    ACTIONS(480), 2,
      sym__dedent,
      sym__line_start,
    STATE(86), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2452] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(482), 1,
      sym_blank_line,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(223), 1,
      sym__implicit_run_line,
    ACTIONS(484), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2471] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(486), 1,
      sym_blank_line,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(223), 1,
      sym__implicit_run_line,
    ACTIONS(488), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2490] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(692), 1,
      sym_inline_agic,
    STATE(779), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2513] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(490), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1074), 1,
      sym__repeat_statements,
    STATE(173), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2536] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(492), 1,
      sym_blank_line,
    ACTIONS(494), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1075), 1,
      sym__repeat_statements,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2559] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(496), 1,
      sym__dedent,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1078), 1,
      sym__repeat_statements,
    STATE(173), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2582] = 5,
    ACTIONS(498), 1,
      sym_blank_line,
    ACTIONS(503), 1,
      sym__flow_raw_text,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(223), 1,
      sym__implicit_run_line,
    ACTIONS(501), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2601] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(413), 1,
      sym_text_body,
    STATE(968), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(506), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2620] = 5,
    ACTIONS(508), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__comment_start,
    ACTIONS(516), 1,
      sym__line_start,
    ACTIONS(514), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(98), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2639] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(413), 1,
      sym_text_body,
    STATE(968), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2658] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(521), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1186), 1,
      sym__repeat_statements,
    STATE(161), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2678] = 5,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__text_indent,
    STATE(660), 1,
      sym_text_body,
    STATE(961), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(399), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2696] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(527), 1,
      sym_text_line,
    STATE(617), 1,
      sym_line_end,
    STATE(619), 1,
      sym_context_body,
    STATE(643), 1,
      sym_text_inline,
    STATE(735), 1,
      sym_text_block,
  [2718] = 5,
    ACTIONS(531), 1,
      sym_blank_line,
    ACTIONS(533), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym__indent,
    ACTIONS(529), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2736] = 5,
    ACTIONS(480), 1,
      sym__line_start,
    ACTIONS(537), 1,
      sym_blank_line,
    ACTIONS(539), 1,
      sym__comment_start,
    ACTIONS(541), 1,
      sym__directive_start,
    STATE(106), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2754] = 4,
    ACTIONS(545), 1,
      sym_blank_line,
    ACTIONS(548), 1,
      sym__comment_start,
    STATE(105), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(543), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2770] = 5,
    ACTIONS(461), 1,
      sym__line_start,
    ACTIONS(539), 1,
      sym__comment_start,
    ACTIONS(541), 1,
      sym__directive_start,
    ACTIONS(551), 1,
      sym_blank_line,
    STATE(108), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2788] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(553), 1,
      sym_blank_line,
    ACTIONS(555), 1,
      sym__dedent,
    ACTIONS(557), 1,
      sym__line_start,
    STATE(166), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2806] = 5,
    ACTIONS(473), 1,
      sym__line_start,
    ACTIONS(559), 1,
      sym_blank_line,
    ACTIONS(562), 1,
      sym__comment_start,
    ACTIONS(565), 1,
      sym__directive_start,
    STATE(108), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2824] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(225), 1,
      sym__implicit_run_line,
    ACTIONS(488), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2838] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(527), 1,
      sym_text_line,
    STATE(542), 1,
      sym_context_body,
    STATE(617), 1,
      sym_line_end,
    STATE(643), 1,
      sym_text_inline,
    STATE(735), 1,
      sym_text_block,
  [2860] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(225), 1,
      sym__implicit_run_line,
    ACTIONS(568), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2874] = 5,
    ACTIONS(533), 1,
      sym__comment_start,
    ACTIONS(572), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym__indent,
    ACTIONS(570), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2892] = 6,
    ACTIONS(463), 1,
      sym__directive_start,
    ACTIONS(576), 1,
      sym__line_start,
    STATE(89), 1,
      sym_directive,
    STATE(115), 1,
      sym_message,
    STATE(683), 1,
      sym__directives,
    STATE(1138), 2,
      sym_messages,
      sym__pass_statement,
  [2912] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(405), 1,
      sym__dedent,
    ACTIONS(578), 1,
      sym_blank_line,
    STATE(546), 1,
      sym__flow_statement,
    STATE(116), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2932] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(557), 1,
      sym__line_start,
    ACTIONS(580), 1,
      sym_blank_line,
    ACTIONS(582), 1,
      sym__dedent,
    STATE(107), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2950] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(417), 1,
      sym__dedent,
    ACTIONS(584), 1,
      sym_blank_line,
    STATE(546), 1,
      sym__flow_statement,
    STATE(118), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2970] = 6,
    ACTIONS(463), 1,
      sym__directive_start,
    ACTIONS(576), 1,
      sym__line_start,
    STATE(89), 1,
      sym_directive,
    STATE(115), 1,
      sym_message,
    STATE(527), 1,
      sym__directives,
    STATE(1211), 2,
      sym_messages,
      sym__pass_statement,
  [2990] = 6,
    ACTIONS(429), 1,
      sym__dedent,
    ACTIONS(586), 1,
      sym_blank_line,
    ACTIONS(589), 1,
      sym__comment_start,
    ACTIONS(592), 1,
      sym__line_start,
    STATE(546), 1,
      sym__flow_statement,
    STATE(118), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3010] = 6,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(599), 1,
      sym__dedent,
    ACTIONS(601), 1,
      sym__from_start,
    STATE(244), 1,
      sym__from_complement,
    STATE(245), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3030] = 5,
    ACTIONS(605), 1,
      sym_array_suffix,
    ACTIONS(607), 1,
      sym_newline,
    STATE(121), 1,
      aux_sym_type_repeat1,
    STATE(400), 1,
      sym_type_suffix,
    ACTIONS(603), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3048] = 5,
    ACTIONS(605), 1,
      sym_array_suffix,
    ACTIONS(611), 1,
      sym_newline,
    STATE(122), 1,
      aux_sym_type_repeat1,
    STATE(400), 1,
      sym_type_suffix,
    ACTIONS(609), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3066] = 5,
    ACTIONS(615), 1,
      sym_array_suffix,
    ACTIONS(618), 1,
      sym_newline,
    STATE(122), 1,
      aux_sym_type_repeat1,
    STATE(400), 1,
      sym_type_suffix,
    ACTIONS(613), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3084] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(527), 1,
      sym_text_line,
    STATE(547), 1,
      sym_text_inline,
    STATE(556), 1,
      sym_instruct_body,
    STATE(617), 1,
      sym_line_end,
    STATE(735), 1,
      sym_text_block,
  [3106] = 5,
    ACTIONS(622), 1,
      sym__module_doc_start,
    ACTIONS(624), 1,
      sym__item_doc_start,
    ACTIONS(626), 1,
      sym__param_item_doc_start,
    ACTIONS(620), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(872), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3124] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(134), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(481), 1,
      sym__implicit_run_line,
    ACTIONS(488), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3142] = 5,
    ACTIONS(630), 1,
      sym_blank_line,
    ACTIONS(633), 1,
      sym__comment_start,
    ACTIONS(636), 1,
      sym__dedent,
    ACTIONS(638), 1,
      sym__line_start,
    STATE(126), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3160] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(527), 1,
      sym_text_line,
    STATE(539), 1,
      sym_instruct_body,
    STATE(547), 1,
      sym_text_inline,
    STATE(617), 1,
      sym_line_end,
    STATE(735), 1,
      sym_text_block,
  [3182] = 5,
    ACTIONS(641), 1,
      sym_blank_line,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(647), 1,
      sym__dedent,
    ACTIONS(649), 1,
      sym__line_start,
    STATE(128), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3200] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(652), 1,
      sym_blank_line,
    ACTIONS(654), 1,
      sym__dedent,
    ACTIONS(656), 1,
      sym__line_start,
    STATE(128), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3218] = 5,
    ACTIONS(658), 1,
      sym_blank_line,
    ACTIONS(663), 1,
      sym__agic_raw_text,
    STATE(130), 1,
      aux_sym_unroled_message_repeat1,
    STATE(441), 1,
      sym__unroled_message_line,
    ACTIONS(661), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3236] = 5,
    ACTIONS(531), 1,
      sym_blank_line,
    ACTIONS(533), 1,
      sym__comment_start,
    ACTIONS(668), 1,
      sym__indent,
    ACTIONS(666), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3254] = 5,
    ACTIONS(533), 1,
      sym__comment_start,
    ACTIONS(672), 1,
      sym_blank_line,
    ACTIONS(674), 1,
      sym__indent,
    ACTIONS(670), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(131), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3272] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(676), 1,
      sym_blank_line,
    ACTIONS(678), 1,
      sym__dedent,
    STATE(140), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3290] = 5,
    ACTIONS(680), 1,
      sym_blank_line,
    ACTIONS(683), 1,
      sym__flow_raw_text,
    STATE(134), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(481), 1,
      sym__implicit_run_line,
    ACTIONS(501), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3308] = 6,
    ACTIONS(541), 1,
      sym__directive_start,
    ACTIONS(686), 1,
      sym__line_start,
    STATE(104), 1,
      sym_directive,
    STATE(133), 1,
      sym__flow_statement,
    STATE(890), 1,
      sym__directives,
    STATE(1092), 2,
      sym_statements,
      sym__pass_statement,
  [3328] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 1,
      sym_blank_line,
    STATE(147), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3346] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(656), 1,
      sym__line_start,
    ACTIONS(692), 1,
      sym_blank_line,
    ACTIONS(694), 1,
      sym__dedent,
    STATE(142), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3364] = 6,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(601), 1,
      sym__from_start,
    ACTIONS(696), 1,
      sym_blank_line,
    ACTIONS(698), 1,
      sym__dedent,
    STATE(453), 1,
      sym__from_complement,
    STATE(454), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3384] = 5,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__text_indent,
    STATE(660), 1,
      sym_text_body,
    STATE(961), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(506), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3402] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(700), 1,
      sym_blank_line,
    ACTIONS(702), 1,
      sym__dedent,
    STATE(126), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3420] = 5,
    ACTIONS(706), 1,
      sym__module_doc_start,
    ACTIONS(708), 1,
      sym__item_doc_start,
    ACTIONS(710), 1,
      sym__param_item_doc_start,
    ACTIONS(704), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(668), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3438] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(652), 1,
      sym_blank_line,
    ACTIONS(656), 1,
      sym__line_start,
    ACTIONS(712), 1,
      sym__dedent,
    STATE(128), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3456] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(656), 1,
      sym__line_start,
    ACTIONS(712), 1,
      sym__dedent,
    ACTIONS(714), 1,
      sym_blank_line,
    STATE(129), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3474] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(716), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1136), 1,
      sym__repeat_statements,
    STATE(149), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3494] = 5,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__text_indent,
    STATE(660), 1,
      sym_text_body,
    STATE(961), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3512] = 6,
    ACTIONS(541), 1,
      sym__directive_start,
    ACTIONS(686), 1,
      sym__line_start,
    STATE(104), 1,
      sym_directive,
    STATE(133), 1,
      sym__flow_statement,
    STATE(958), 1,
      sym__directives,
    STATE(1177), 2,
      sym_statements,
      sym__pass_statement,
  [3532] = 5,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      sym_blank_line,
    ACTIONS(723), 1,
      sym__comment_start,
    ACTIONS(726), 1,
      sym__line_start,
    STATE(147), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3550] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(729), 1,
      sym_blank_line,
    STATE(130), 1,
      aux_sym_unroled_message_repeat1,
    STATE(441), 1,
      sym__unroled_message_line,
    ACTIONS(731), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3568] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(733), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1076), 1,
      sym__repeat_statements,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3588] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(735), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1087), 1,
      sym__repeat_statements,
    STATE(167), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3608] = 5,
    ACTIONS(739), 1,
      sym__module_doc_start,
    ACTIONS(741), 1,
      sym__item_doc_start,
    ACTIONS(743), 1,
      sym__param_item_doc_start,
    ACTIONS(737), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(389), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3626] = 5,
    ACTIONS(747), 1,
      sym__module_doc_start,
    ACTIONS(749), 1,
      sym__item_doc_start,
    ACTIONS(751), 1,
      sym__param_item_doc_start,
    ACTIONS(745), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(403), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3644] = 5,
    ACTIONS(755), 1,
      sym__module_doc_start,
    ACTIONS(757), 1,
      sym__item_doc_start,
    ACTIONS(759), 1,
      sym__param_item_doc_start,
    ACTIONS(753), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(417), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3662] = 5,
    ACTIONS(763), 1,
      sym__module_doc_start,
    ACTIONS(765), 1,
      sym__item_doc_start,
    ACTIONS(767), 1,
      sym__param_item_doc_start,
    ACTIONS(761), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(624), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3680] = 5,
    ACTIONS(771), 1,
      sym__module_doc_start,
    ACTIONS(773), 1,
      sym__item_doc_start,
    ACTIONS(775), 1,
      sym__param_item_doc_start,
    ACTIONS(769), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(633), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3698] = 5,
    ACTIONS(779), 1,
      sym__module_doc_start,
    ACTIONS(781), 1,
      sym__item_doc_start,
    ACTIONS(783), 1,
      sym__param_item_doc_start,
    ACTIONS(777), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(841), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3716] = 5,
    ACTIONS(787), 1,
      sym__module_doc_start,
    ACTIONS(789), 1,
      sym__item_doc_start,
    ACTIONS(791), 1,
      sym__param_item_doc_start,
    ACTIONS(785), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(848), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3734] = 5,
    ACTIONS(795), 1,
      sym__module_doc_start,
    ACTIONS(797), 1,
      sym__item_doc_start,
    ACTIONS(799), 1,
      sym__param_item_doc_start,
    ACTIONS(793), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(430), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3752] = 4,
    STATE(771), 1,
      sym_recall_source,
    STATE(886), 1,
      sym_recall_value,
    ACTIONS(801), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(803), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3768] = 5,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__text_indent,
    STATE(660), 1,
      sym_text_body,
    STATE(961), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(395), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3786] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(733), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1200), 1,
      sym__repeat_statements,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3806] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(805), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1204), 1,
      sym__repeat_statements,
    STATE(163), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3826] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(733), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1077), 1,
      sym__repeat_statements,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3846] = 4,
    STATE(771), 1,
      sym_recall_source,
    STATE(854), 1,
      sym_recall_value,
    ACTIONS(801), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(803), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3862] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(807), 1,
      sym_blank_line,
    STATE(148), 1,
      aux_sym_unroled_message_repeat1,
    STATE(441), 1,
      sym__unroled_message_line,
    ACTIONS(809), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3880] = 5,
    ACTIONS(811), 1,
      sym_blank_line,
    ACTIONS(814), 1,
      sym__comment_start,
    ACTIONS(817), 1,
      sym__dedent,
    ACTIONS(819), 1,
      sym__line_start,
    STATE(166), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3898] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(733), 1,
      sym_blank_line,
    STATE(114), 1,
      sym__flow_statement,
    STATE(1109), 1,
      sym__repeat_statements,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3918] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(822), 1,
      sym_blank_line,
    STATE(125), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(481), 1,
      sym__implicit_run_line,
    ACTIONS(484), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3936] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(826), 1,
      sym_text_line,
    ACTIONS(828), 1,
      sym_newline,
    STATE(145), 1,
      sym_line_end,
    STATE(508), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
  [3955] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(757), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3972] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(561), 1,
      sym_repeat_body,
    STATE(260), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3989] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(562), 1,
      sym_repeat_body,
    STATE(260), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4006] = 4,
    ACTIONS(840), 1,
      sym_blank_line,
    ACTIONS(843), 1,
      sym__comment_start,
    ACTIONS(543), 2,
      sym__dedent,
      sym__line_start,
    STATE(173), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4021] = 1,
    ACTIONS(846), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4030] = 1,
    ACTIONS(848), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4039] = 5,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(852), 1,
      anon_sym__,
    ACTIONS(854), 1,
      sym_newline,
    STATE(781), 1,
      sym_local_name,
    ACTIONS(850), 2,
      sym__inline_comment,
      sym_text_line,
  [4056] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(501), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4073] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(760), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4090] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(571), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4107] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(860), 1,
      sym_text_line,
    STATE(733), 1,
      sym_line_end,
    STATE(812), 1,
      sym_text_block,
    STATE(829), 1,
      sym_text_inline,
  [4126] = 6,
    ACTIONS(862), 1,
      sym_arrow,
    ACTIONS(864), 1,
      sym_colon,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(868), 1,
      sym_snake_name,
    STATE(724), 1,
      sym_flow_name,
    STATE(1012), 1,
      sym_params,
  [4145] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(508), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
  [4164] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(591), 1,
      sym_repeat_body,
    STATE(260), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4181] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(870), 1,
      sym_text_line,
    STATE(160), 1,
      sym_line_end,
    STATE(535), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
  [4200] = 6,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(872), 1,
      sym_arrow,
    ACTIONS(874), 1,
      sym_colon,
    STATE(119), 1,
      sym__reduce_inline_block,
    STATE(728), 1,
      sym__reduce_inline_line,
    STATE(731), 1,
      sym__named_using_complement,
  [4219] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(295), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
    STATE(737), 1,
      sym_line_end,
  [4238] = 6,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(876), 1,
      sym_arrow,
    ACTIONS(878), 1,
      sym_colon,
    STATE(138), 1,
      sym__reduce_inline_block,
    STATE(287), 1,
      sym__reduce_inline_line,
    STATE(684), 1,
      sym__named_using_complement,
  [4257] = 4,
    ACTIONS(880), 1,
      sym_array_suffix,
    STATE(204), 1,
      aux_sym_type_repeat1,
    STATE(564), 1,
      sym_type_suffix,
    ACTIONS(611), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4272] = 6,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(882), 1,
      sym_arrow,
    ACTIONS(884), 1,
      sym_colon,
    ACTIONS(886), 1,
      sym_snake_name,
    STATE(707), 1,
      sym_agic_name,
    STATE(1070), 1,
      sym_params,
  [4291] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(524), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4308] = 6,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(888), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(890), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
    STATE(301), 1,
      sym_line_end,
  [4327] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(303), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
    STATE(737), 1,
      sym_line_end,
  [4346] = 6,
    ACTIONS(351), 1,
      sym__one_integer_literal,
    ACTIONS(892), 1,
      sym__other_integer_literal,
    ACTIONS(894), 1,
      sym_flow_windowing_keyword,
    ACTIONS(896), 1,
      sym_colon,
    STATE(815), 1,
      sym__repeat_count_complement,
    STATE(1097), 1,
      sym__window_complement,
  [4365] = 6,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(890), 1,
      anon_sym_EQ,
    ACTIONS(898), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(7), 1,
      sym_assign_operator,
    STATE(553), 1,
      sym_line_end,
  [4384] = 6,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(900), 1,
      sym_flow_by_keyword,
    STATE(315), 1,
      sym__inline_by_complement,
    STATE(316), 1,
      sym__by_complements,
    STATE(456), 1,
      sym__named_by_complement,
    STATE(899), 1,
      sym__lanes_complement,
  [4403] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(579), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
  [4422] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(902), 1,
      sym_text_line,
    STATE(101), 1,
      sym_line_end,
    STATE(535), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
  [4441] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(904), 1,
      sym_blank_line,
    ACTIONS(906), 1,
      sym__indent,
    STATE(338), 1,
      sym_repeat_body,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4458] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(527), 1,
      sym_text_line,
    STATE(617), 1,
      sym_line_end,
    STATE(735), 1,
      sym_text_block,
    STATE(861), 1,
      sym_text_inline,
  [4477] = 6,
    ACTIONS(908), 1,
      sym__inline_comment,
    ACTIONS(910), 1,
      sym_text_line,
    ACTIONS(912), 1,
      sym_newline,
    STATE(97), 1,
      sym_line_end,
    STATE(295), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
  [4496] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(718), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4513] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(341), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
    STATE(737), 1,
      sym_line_end,
  [4532] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(207), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(914), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4547] = 4,
    ACTIONS(916), 1,
      sym_array_suffix,
    STATE(204), 1,
      aux_sym_type_repeat1,
    STATE(564), 1,
      sym_type_suffix,
    ACTIONS(618), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4562] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(551), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4579] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(904), 1,
      sym_blank_line,
    ACTIONS(906), 1,
      sym__indent,
    STATE(350), 1,
      sym_repeat_body,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4596] = 6,
    ACTIONS(339), 1,
      sym_flow_in_keyword,
    ACTIONS(919), 1,
      sym_flow_by_keyword,
    STATE(247), 1,
      sym__named_by_complement,
    STATE(704), 1,
      sym__inline_by_complement,
    STATE(705), 1,
      sym__by_complements,
    STATE(934), 1,
      sym__lanes_complement,
  [4615] = 6,
    ACTIONS(908), 1,
      sym__inline_comment,
    ACTIONS(912), 1,
      sym_newline,
    ACTIONS(921), 1,
      sym_text_line,
    STATE(99), 1,
      sym_line_end,
    STATE(295), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
  [4634] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(500), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4651] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(904), 1,
      sym_blank_line,
    ACTIONS(906), 1,
      sym__indent,
    STATE(360), 1,
      sym_repeat_body,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4668] = 6,
    ACTIONS(908), 1,
      sym__inline_comment,
    ACTIONS(912), 1,
      sym_newline,
    ACTIONS(923), 1,
      sym_text_line,
    STATE(68), 1,
      sym_line_end,
    STATE(341), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
  [4687] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(250), 1,
      sym__implicit_run_line,
    ACTIONS(488), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4700] = 6,
    ACTIONS(908), 1,
      sym__inline_comment,
    ACTIONS(912), 1,
      sym_newline,
    ACTIONS(925), 1,
      sym_text_line,
    STATE(69), 1,
      sym_line_end,
    STATE(341), 1,
      sym_text_inline,
    STATE(410), 1,
      sym_text_block,
  [4719] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(569), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
  [4738] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(708), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4755] = 4,
    ACTIONS(880), 1,
      sym_array_suffix,
    STATE(188), 1,
      aux_sym_type_repeat1,
    STATE(564), 1,
      sym_type_suffix,
    ACTIONS(607), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4770] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(749), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4787] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(769), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4804] = 5,
    ACTIONS(830), 1,
      sym_blank_line,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym__indent,
    STATE(770), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4821] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(715), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4838] = 1,
    ACTIONS(927), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4847] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(242), 1,
      sym__unroled_message_line,
    ACTIONS(929), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4860] = 1,
    ACTIONS(931), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4869] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(588), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4886] = 1,
    ACTIONS(933), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4895] = 5,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(854), 1,
      sym_newline,
    ACTIONS(935), 1,
      anon_sym__,
    STATE(866), 1,
      sym_local_name,
    ACTIONS(850), 2,
      sym__inline_comment,
      sym_text_line,
  [4912] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(195), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(914), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4927] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(674), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4944] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(518), 1,
      sym_repeat_body,
    STATE(260), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4961] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(676), 1,
      sym_agic_body,
    STATE(270), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4978] = 6,
    ACTIONS(824), 1,
      sym__inline_comment,
    ACTIONS(828), 1,
      sym_newline,
    ACTIONS(937), 1,
      sym_text_line,
    STATE(139), 1,
      sym_line_end,
    STATE(508), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
  [4997] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(242), 1,
      sym__unroled_message_line,
    ACTIONS(731), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [5010] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(250), 1,
      sym__implicit_run_line,
    ACTIONS(568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [5023] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(939), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym__indent,
    STATE(592), 1,
      sym_struct_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5040] = 6,
    ACTIONS(351), 1,
      sym__one_integer_literal,
    ACTIONS(892), 1,
      sym__other_integer_literal,
    ACTIONS(894), 1,
      sym_flow_windowing_keyword,
    ACTIONS(943), 1,
      sym_colon,
    STATE(965), 1,
      sym__repeat_count_complement,
    STATE(1205), 1,
      sym__window_complement,
  [5059] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
    STATE(709), 1,
      sym_text_inline,
  [5078] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(535), 1,
      sym_text_inline,
    STATE(654), 1,
      sym_text_block,
    STATE(658), 1,
      sym_line_end,
  [5097] = 5,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(904), 1,
      sym_blank_line,
    ACTIONS(906), 1,
      sym__indent,
    STATE(349), 1,
      sym_repeat_body,
    STATE(483), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5114] = 1,
    ACTIONS(945), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5122] = 1,
    ACTIONS(947), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5130] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(951), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5144] = 1,
    ACTIONS(953), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5152] = 4,
    ACTIONS(955), 1,
      sym_blank_line,
    ACTIONS(957), 1,
      sym__comment_start,
    ACTIONS(959), 1,
      sym__reduce_indent,
    STATE(254), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5166] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(961), 1,
      sym_blank_line,
    ACTIONS(963), 1,
      sym__dedent,
    STATE(255), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5180] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(965), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5194] = 5,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(514), 1,
      sym_inline_agic,
    STATE(784), 1,
      sym_runnable,
  [5210] = 5,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(969), 1,
      sym_flow_in_keyword,
    STATE(515), 1,
      sym_line_end,
    STATE(785), 1,
      sym__lanes_complement,
  [5226] = 4,
    ACTIONS(971), 1,
      sym_blank_line,
    ACTIONS(974), 1,
      sym__dedent,
    ACTIONS(976), 1,
      sym_indented_raw_text,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5240] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(981), 1,
      sym__dedent,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5254] = 1,
    ACTIONS(933), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5262] = 1,
    ACTIONS(985), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5270] = 1,
    ACTIONS(987), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5278] = 5,
    ACTIONS(989), 1,
      sym__inline_comment,
    ACTIONS(991), 1,
      sym_text_line,
    ACTIONS(993), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
    STATE(548), 1,
      sym__reduce_line,
  [5294] = 4,
    ACTIONS(957), 1,
      sym__comment_start,
    ACTIONS(995), 1,
      sym_blank_line,
    ACTIONS(997), 1,
      sym__reduce_indent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5308] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(999), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5322] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1001), 1,
      sym_blank_line,
    ACTIONS(1003), 1,
      sym__indent,
    STATE(264), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5336] = 1,
    ACTIONS(1005), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5344] = 1,
    ACTIONS(1007), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5352] = 5,
    ACTIONS(407), 1,
      sym__line_start,
    ACTIONS(1009), 1,
      sym__until_start,
    STATE(70), 1,
      sym__flow_statement,
    STATE(144), 1,
      sym_until_clause,
    STATE(809), 1,
      sym__repeat_statements,
  [5368] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1013), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5382] = 5,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1015), 1,
      sym_colon,
    ACTIONS(1017), 1,
      sym_text_line,
    STATE(566), 1,
      sym_line_end,
  [5398] = 1,
    ACTIONS(1019), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5406] = 4,
    ACTIONS(957), 1,
      sym__comment_start,
    ACTIONS(1021), 1,
      sym_blank_line,
    ACTIONS(1023), 1,
      sym__reduce_indent,
    STATE(267), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5420] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1025), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5434] = 5,
    ACTIONS(407), 1,
      sym__line_start,
    ACTIONS(1009), 1,
      sym__until_start,
    STATE(70), 1,
      sym__flow_statement,
    STATE(150), 1,
      sym_until_clause,
    STATE(834), 1,
      sym__repeat_statements,
  [5450] = 5,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1027), 1,
      sym_colon,
    ACTIONS(1029), 1,
      sym_text_line,
    STATE(594), 1,
      sym_line_end,
  [5466] = 4,
    ACTIONS(957), 1,
      sym__comment_start,
    ACTIONS(995), 1,
      sym_blank_line,
    ACTIONS(1031), 1,
      sym__reduce_indent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5480] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1033), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5494] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1035), 1,
      sym_blank_line,
    ACTIONS(1037), 1,
      sym__dedent,
    STATE(272), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5508] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1039), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5522] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_snake_name,
    STATE(464), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [5536] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1043), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5550] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1045), 1,
      sym_blank_line,
    ACTIONS(1047), 1,
      sym__dedent,
    STATE(274), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5564] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1049), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5578] = 4,
    ACTIONS(1051), 1,
      sym_array_suffix,
    STATE(276), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(607), 2,
      sym_newline,
      sym__inline_comment,
  [5592] = 4,
    ACTIONS(1051), 1,
      sym_array_suffix,
    STATE(277), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(611), 2,
      sym_newline,
      sym__inline_comment,
  [5606] = 4,
    ACTIONS(1053), 1,
      sym_array_suffix,
    STATE(277), 1,
      aux_sym_type_repeat1,
    STATE(902), 1,
      sym_type_suffix,
    ACTIONS(618), 2,
      sym_newline,
      sym__inline_comment,
  [5620] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5628] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5636] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5644] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5652] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5660] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5668] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5676] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5684] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5692] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5700] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5708] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5716] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5724] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5732] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5740] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5748] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5756] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5764] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5772] = 1,
    ACTIONS(1090), 5,
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
      sym__until_start,
  [5788] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5796] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5804] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5812] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5820] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5828] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5836] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5844] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5852] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5860] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5868] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5876] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5884] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5892] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5900] = 1,
    ACTIONS(1122), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5908] = 1,
    ACTIONS(1124), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5916] = 1,
    ACTIONS(1126), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5924] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5932] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5940] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5948] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5956] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1136), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5970] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5978] = 1,
    ACTIONS(1140), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5986] = 1,
    ACTIONS(1142), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5994] = 1,
    ACTIONS(1144), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6002] = 1,
    ACTIONS(1146), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6010] = 1,
    ACTIONS(1148), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6018] = 1,
    ACTIONS(1150), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6026] = 1,
    ACTIONS(1152), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6034] = 1,
    ACTIONS(1154), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6042] = 1,
    ACTIONS(1156), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6050] = 1,
    ACTIONS(1158), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6058] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6066] = 1,
    ACTIONS(1162), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6074] = 1,
    ACTIONS(1164), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6082] = 1,
    ACTIONS(1166), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6090] = 1,
    ACTIONS(1168), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6098] = 1,
    ACTIONS(1170), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6106] = 1,
    ACTIONS(1172), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6114] = 1,
    ACTIONS(506), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6122] = 1,
    ACTIONS(1174), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6130] = 1,
    ACTIONS(1176), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6138] = 1,
    ACTIONS(1178), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6146] = 1,
    ACTIONS(1180), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6154] = 1,
    ACTIONS(1182), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6162] = 1,
    ACTIONS(1184), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6170] = 1,
    ACTIONS(1186), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6178] = 1,
    ACTIONS(1188), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6186] = 1,
    ACTIONS(1190), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6194] = 1,
    ACTIONS(1192), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6202] = 1,
    ACTIONS(1194), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6210] = 1,
    ACTIONS(519), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6218] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6226] = 1,
    ACTIONS(1198), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6234] = 1,
    ACTIONS(1200), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6242] = 1,
    ACTIONS(1202), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6250] = 1,
    ACTIONS(1204), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6258] = 1,
    ACTIONS(1206), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6266] = 1,
    ACTIONS(1208), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6274] = 1,
    ACTIONS(1210), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6282] = 1,
    ACTIONS(1212), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6290] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1214), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6304] = 1,
    ACTIONS(395), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6312] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6320] = 1,
    ACTIONS(1216), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6328] = 1,
    ACTIONS(1218), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6336] = 1,
    ACTIONS(1220), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6344] = 1,
    ACTIONS(1222), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6352] = 1,
    ACTIONS(1224), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6360] = 1,
    ACTIONS(1226), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6368] = 1,
    ACTIONS(1228), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6376] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6390] = 1,
    ACTIONS(1232), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6398] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6406] = 1,
    ACTIONS(399), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6414] = 1,
    ACTIONS(1234), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6422] = 1,
    ACTIONS(1236), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6430] = 1,
    ACTIONS(1238), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6438] = 1,
    ACTIONS(1240), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6446] = 1,
    ACTIONS(1242), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6454] = 1,
    ACTIONS(1244), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6462] = 1,
    ACTIONS(1246), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6470] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6478] = 1,
    ACTIONS(1248), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6486] = 1,
    ACTIONS(1250), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6494] = 1,
    ACTIONS(1252), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6502] = 1,
    ACTIONS(1254), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6510] = 1,
    ACTIONS(1256), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6518] = 1,
    ACTIONS(1258), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6526] = 1,
    ACTIONS(1260), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6534] = 1,
    ACTIONS(1262), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6542] = 1,
    ACTIONS(1264), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6550] = 2,
    ACTIONS(1268), 1,
      sym_newline,
    ACTIONS(1266), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6560] = 1,
    ACTIONS(1270), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6568] = 1,
    ACTIONS(1272), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6576] = 1,
    ACTIONS(1274), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6584] = 2,
    ACTIONS(1278), 1,
      sym_newline,
    ACTIONS(1276), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6594] = 2,
    ACTIONS(1282), 1,
      sym_newline,
    ACTIONS(1280), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6604] = 2,
    ACTIONS(1286), 1,
      sym_newline,
    ACTIONS(1284), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6614] = 2,
    ACTIONS(1290), 1,
      sym_newline,
    ACTIONS(1288), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6624] = 2,
    ACTIONS(1294), 1,
      sym_newline,
    ACTIONS(1292), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6634] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1296), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6648] = 4,
    ACTIONS(543), 1,
      sym__dedent,
    ACTIONS(1298), 1,
      sym_blank_line,
    ACTIONS(1301), 1,
      sym__comment_start,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6662] = 1,
    ACTIONS(1260), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6670] = 1,
    ACTIONS(1262), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6678] = 1,
    ACTIONS(1264), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6686] = 1,
    ACTIONS(1270), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6694] = 1,
    ACTIONS(1272), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6702] = 1,
    ACTIONS(1274), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6710] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6718] = 1,
    ACTIONS(1304), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6726] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6734] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6742] = 1,
    ACTIONS(1306), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6750] = 4,
    ACTIONS(543), 1,
      sym__reduce_indent,
    ACTIONS(1308), 1,
      sym_blank_line,
    ACTIONS(1311), 1,
      sym__comment_start,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6764] = 1,
    ACTIONS(1314), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6772] = 1,
    ACTIONS(1316), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6780] = 1,
    ACTIONS(1260), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6788] = 1,
    ACTIONS(1262), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6796] = 1,
    ACTIONS(1264), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6804] = 1,
    ACTIONS(1270), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6812] = 1,
    ACTIONS(1272), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6820] = 1,
    ACTIONS(1274), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6828] = 4,
    ACTIONS(543), 1,
      sym__line_start,
    ACTIONS(1318), 1,
      sym_blank_line,
    ACTIONS(1321), 1,
      sym__comment_start,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6842] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6850] = 1,
    ACTIONS(1324), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6858] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6866] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6874] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6882] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6890] = 1,
    ACTIONS(1260), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6898] = 1,
    ACTIONS(1262), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6906] = 1,
    ACTIONS(1264), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6914] = 1,
    ACTIONS(1270), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6922] = 1,
    ACTIONS(1272), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6930] = 1,
    ACTIONS(1274), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6938] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6946] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6954] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6962] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6970] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1326), 1,
      sym_blank_line,
    ACTIONS(1328), 1,
      sym__dedent,
    STATE(241), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6984] = 1,
    ACTIONS(1330), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6992] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1332), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7006] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7020] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7034] = 5,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(283), 1,
      sym_inline_agic,
    STATE(864), 1,
      sym_runnable,
  [7050] = 5,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(285), 1,
      sym_inline_agic,
    STATE(868), 1,
      sym_runnable,
  [7066] = 5,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(302), 1,
      sym_inline_agic,
    STATE(891), 1,
      sym_runnable,
  [7082] = 1,
    ACTIONS(927), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7090] = 5,
    ACTIONS(989), 1,
      sym__inline_comment,
    ACTIONS(993), 1,
      sym_newline,
    ACTIONS(1338), 1,
      sym_text_line,
    STATE(243), 1,
      sym_line_end,
    STATE(305), 1,
      sym__reduce_line,
  [7106] = 5,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    STATE(309), 1,
      sym_inline_agic,
    STATE(895), 1,
      sym__named_using_complement,
  [7122] = 5,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(310), 1,
      sym_inline_agic,
    STATE(916), 1,
      sym_runnable,
  [7138] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(969), 1,
      sym_flow_in_keyword,
    STATE(311), 1,
      sym_line_end,
    STATE(896), 1,
      sym__lanes_complement,
  [7154] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1340), 1,
      sym_blank_line,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7168] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7182] = 5,
    ACTIONS(434), 1,
      sym_arrow,
    ACTIONS(436), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(335), 1,
      sym_inline_agic,
    STATE(784), 1,
      sym_runnable,
  [7198] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(969), 1,
      sym_flow_in_keyword,
    STATE(336), 1,
      sym_line_end,
    STATE(909), 1,
      sym__lanes_complement,
  [7214] = 5,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(692), 1,
      sym_inline_agic,
    STATE(779), 1,
      sym_runnable,
  [7230] = 5,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(699), 1,
      sym_inline_agic,
    STATE(783), 1,
      sym_runnable,
  [7246] = 4,
    ACTIONS(1348), 1,
      sym_rparen,
    STATE(688), 1,
      sym_param_name,
    STATE(898), 1,
      sym_param,
    ACTIONS(1346), 2,
      sym__variable_name,
      anon_sym__,
  [7260] = 4,
    ACTIONS(543), 1,
      sym__indent,
    ACTIONS(1350), 1,
      sym_blank_line,
    ACTIONS(1353), 1,
      sym__comment_start,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7274] = 5,
    ACTIONS(989), 1,
      sym__inline_comment,
    ACTIONS(993), 1,
      sym_newline,
    ACTIONS(1338), 1,
      sym_text_line,
    STATE(263), 1,
      sym_line_end,
    STATE(345), 1,
      sym__reduce_line,
  [7290] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7304] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1358), 1,
      sym_colon,
    ACTIONS(1360), 1,
      sym_text_line,
    STATE(351), 1,
      sym_line_end,
  [7320] = 5,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(568), 1,
      sym_inline_agic,
    STATE(871), 1,
      sym_runnable,
  [7336] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1362), 1,
      sym_colon,
    ACTIONS(1364), 1,
      sym_text_line,
    STATE(362), 1,
      sym_line_end,
  [7352] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1366), 1,
      sym_blank_line,
    ACTIONS(1368), 1,
      sym__dedent,
    STATE(467), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7366] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1370), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7380] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(1372), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(470), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7394] = 5,
    ACTIONS(989), 1,
      sym__inline_comment,
    ACTIONS(991), 1,
      sym_text_line,
    ACTIONS(993), 1,
      sym_newline,
    STATE(243), 1,
      sym_line_end,
    STATE(589), 1,
      sym__reduce_line,
  [7410] = 4,
    ACTIONS(597), 1,
      sym__comment_start,
    ACTIONS(949), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(402), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7424] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1378), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7438] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7452] = 5,
    ACTIONS(409), 1,
      sym_flow_using_keyword,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    STATE(662), 1,
      sym_inline_agic,
    STATE(913), 1,
      sym__named_using_complement,
  [7468] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1382), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7482] = 4,
    ACTIONS(979), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1384), 1,
      sym__dedent,
    STATE(248), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7496] = 5,
    ACTIONS(411), 1,
      sym_arrow,
    ACTIONS(413), 1,
      sym_colon,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(672), 1,
      sym_inline_agic,
    STATE(916), 1,
      sym_runnable,
  [7512] = 5,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(969), 1,
      sym_flow_in_keyword,
    STATE(685), 1,
      sym_line_end,
    STATE(919), 1,
      sym__lanes_complement,
  [7528] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1041), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7542] = 5,
    ACTIONS(407), 1,
      sym__line_start,
    ACTIONS(1009), 1,
      sym__until_start,
    STATE(70), 1,
      sym__flow_statement,
    STATE(100), 1,
      sym_until_clause,
    STATE(918), 1,
      sym__repeat_statements,
  [7558] = 5,
    ACTIONS(407), 1,
      sym__line_start,
    ACTIONS(1009), 1,
      sym__until_start,
    STATE(70), 1,
      sym__flow_statement,
    STATE(162), 1,
      sym_until_clause,
    STATE(929), 1,
      sym__repeat_statements,
  [7574] = 1,
    ACTIONS(931), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7582] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1386), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__indent,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7596] = 4,
    ACTIONS(832), 1,
      sym__comment_start,
    ACTIONS(1011), 1,
      sym_blank_line,
    ACTIONS(1390), 1,
      sym__indent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7610] = 1,
    ACTIONS(1392), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7618] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7625] = 3,
    ACTIONS(1396), 1,
      sym_comma,
    STATE(533), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1394), 2,
      sym_newline,
      sym__inline_comment,
  [7636] = 1,
    ACTIONS(1398), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7643] = 3,
    ACTIONS(1402), 1,
      sym_colon,
    ACTIONS(1404), 1,
      sym_newline,
    ACTIONS(1400), 2,
      sym__inline_comment,
      sym_text_line,
  [7654] = 1,
    ACTIONS(1140), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7661] = 1,
    ACTIONS(1142), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7668] = 1,
    ACTIONS(1144), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7675] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1406), 1,
      sym_text_line,
    STATE(663), 1,
      sym_line_end,
  [7688] = 2,
    STATE(1049), 1,
      sym_directive_op,
    ACTIONS(1408), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [7697] = 1,
    ACTIONS(1146), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7704] = 1,
    ACTIONS(1148), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7711] = 1,
    ACTIONS(1150), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7718] = 1,
    ACTIONS(1152), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7725] = 1,
    ACTIONS(1410), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7732] = 1,
    ACTIONS(1154), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7739] = 1,
    ACTIONS(1412), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7746] = 1,
    ACTIONS(1414), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7753] = 1,
    ACTIONS(1268), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7760] = 1,
    ACTIONS(1156), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7767] = 1,
    ACTIONS(985), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7774] = 1,
    ACTIONS(987), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7781] = 1,
    ACTIONS(1416), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7788] = 1,
    ACTIONS(1158), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7795] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7802] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7809] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7816] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7823] = 1,
    ACTIONS(1162), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7830] = 1,
    ACTIONS(1164), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7837] = 1,
    ACTIONS(1166), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7844] = 1,
    ACTIONS(1168), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7851] = 1,
    ACTIONS(1170), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7858] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7865] = 1,
    ACTIONS(1172), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7872] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7879] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7886] = 1,
    ACTIONS(1418), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7893] = 1,
    ACTIONS(506), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7900] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7907] = 1,
    ACTIONS(1420), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7914] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1422), 1,
      sym_blank_line,
    STATE(444), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7925] = 1,
    ACTIONS(1306), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7932] = 4,
    ACTIONS(557), 1,
      sym__line_start,
    ACTIONS(1424), 1,
      sym__dedent,
    STATE(115), 1,
      sym_message,
    STATE(1185), 1,
      sym_messages,
  [7945] = 1,
    ACTIONS(1174), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7952] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1017), 1,
      sym_text_line,
    STATE(572), 1,
      sym_line_end,
  [7965] = 1,
    ACTIONS(1426), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7972] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1428), 1,
      sym_text_line,
    STATE(489), 1,
      sym_line_end,
  [7985] = 3,
    ACTIONS(1432), 1,
      sym_comma,
    STATE(532), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1430), 2,
      sym_newline,
      sym__inline_comment,
  [7996] = 3,
    ACTIONS(1437), 1,
      sym_comma,
    STATE(533), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1435), 2,
      sym_newline,
      sym__inline_comment,
  [8007] = 1,
    ACTIONS(1440), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8014] = 1,
    ACTIONS(1176), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8021] = 1,
    ACTIONS(1178), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8028] = 1,
    ACTIONS(1180), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8035] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1442), 1,
      sym_text_line,
    STATE(574), 1,
      sym_line_end,
  [8048] = 1,
    ACTIONS(1444), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8055] = 1,
    ACTIONS(1182), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8062] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1446), 1,
      sym_text_line,
    STATE(575), 1,
      sym_line_end,
  [8075] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8082] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1450), 1,
      sym_text_line,
    STATE(577), 1,
      sym_line_end,
  [8095] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1452), 1,
      sym_text_line,
    STATE(578), 1,
      sym_line_end,
  [8108] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1454), 1,
      sym_text_line,
    STATE(490), 1,
      sym_line_end,
  [8121] = 1,
    ACTIONS(945), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8128] = 1,
    ACTIONS(1456), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8135] = 1,
    ACTIONS(1184), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8142] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1458), 1,
      sym_blank_line,
    STATE(268), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8153] = 1,
    ACTIONS(1460), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8160] = 1,
    ACTIONS(1462), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8167] = 1,
    ACTIONS(1186), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8174] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8181] = 1,
    ACTIONS(1188), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8188] = 1,
    ACTIONS(1190), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8195] = 1,
    ACTIONS(1464), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8202] = 1,
    ACTIONS(1466), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8209] = 1,
    ACTIONS(1314), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8216] = 1,
    ACTIONS(1468), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8223] = 1,
    ACTIONS(1470), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8230] = 1,
    ACTIONS(1192), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8237] = 1,
    ACTIONS(1194), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8244] = 1,
    ACTIONS(1290), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8251] = 1,
    ACTIONS(1294), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8258] = 1,
    ACTIONS(1472), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8265] = 1,
    ACTIONS(519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8272] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8279] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8286] = 1,
    ACTIONS(1474), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8293] = 1,
    ACTIONS(1476), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8300] = 1,
    ACTIONS(1478), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8307] = 1,
    ACTIONS(1198), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8314] = 1,
    ACTIONS(1480), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8321] = 1,
    ACTIONS(1200), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8328] = 1,
    ACTIONS(1202), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8335] = 1,
    ACTIONS(1204), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8342] = 1,
    ACTIONS(1206), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8349] = 1,
    ACTIONS(1208), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8356] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8363] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8370] = 1,
    ACTIONS(1482), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8377] = 1,
    ACTIONS(1484), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8384] = 4,
    ACTIONS(967), 1,
      sym_snake_name,
    ACTIONS(1486), 1,
      sym_colon,
    STATE(856), 1,
      sym_inline_agic_body,
    STATE(857), 1,
      sym_runnable,
  [8397] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(774), 1,
      sym__cap_definition,
  [8410] = 3,
    ACTIONS(854), 1,
      sym_newline,
    ACTIONS(1492), 1,
      sym_flow_run_keyword,
    ACTIONS(850), 2,
      sym__inline_comment,
      sym_text_line,
  [8421] = 1,
    ACTIONS(1210), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8428] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(703), 1,
      sym__cap_definition,
  [8441] = 1,
    ACTIONS(1494), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8448] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8455] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8462] = 1,
    ACTIONS(1212), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8469] = 1,
    ACTIONS(1496), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8476] = 3,
    STATE(688), 1,
      sym_param_name,
    STATE(1015), 1,
      sym_param,
    ACTIONS(1346), 2,
      sym__variable_name,
      anon_sym__,
  [8487] = 1,
    ACTIONS(395), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8494] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8501] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8508] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8515] = 1,
    ACTIONS(1498), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8522] = 1,
    ACTIONS(1216), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8529] = 1,
    ACTIONS(1218), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8536] = 1,
    ACTIONS(1220), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8543] = 1,
    ACTIONS(1222), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8550] = 1,
    ACTIONS(1224), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8557] = 1,
    ACTIONS(1500), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8564] = 1,
    ACTIONS(1502), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8571] = 1,
    ACTIONS(1226), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8578] = 1,
    ACTIONS(1504), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8585] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1506), 1,
      sym_blank_line,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8596] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1508), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8607] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1510), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [8618] = 1,
    ACTIONS(1228), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8625] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(706), 1,
      sym__cap_definition,
  [8638] = 1,
    ACTIONS(1392), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8645] = 1,
    ACTIONS(1232), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8652] = 1,
    ACTIONS(1316), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8659] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(756), 1,
      sym__cap_definition,
  [8672] = 4,
    ACTIONS(1512), 1,
      sym_blank_line,
    ACTIONS(1514), 1,
      sym__text_indent,
    STATE(526), 1,
      sym_text_body,
    STATE(794), 1,
      aux_sym_text_body_repeat1,
  [8685] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8692] = 1,
    ACTIONS(1516), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8699] = 1,
    ACTIONS(399), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8706] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8713] = 1,
    ACTIONS(1234), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8720] = 1,
    ACTIONS(1236), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8727] = 1,
    ACTIONS(1260), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8734] = 1,
    ACTIONS(1262), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8741] = 1,
    ACTIONS(1264), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8748] = 1,
    ACTIONS(1270), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8755] = 1,
    ACTIONS(1272), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8762] = 1,
    ACTIONS(1274), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8769] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8776] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8783] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8790] = 1,
    ACTIONS(1260), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8797] = 1,
    ACTIONS(1262), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8804] = 1,
    ACTIONS(1264), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8811] = 1,
    ACTIONS(1270), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8818] = 1,
    ACTIONS(1272), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8825] = 1,
    ACTIONS(1274), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8832] = 1,
    ACTIONS(1238), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8839] = 1,
    ACTIONS(1240), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8846] = 1,
    ACTIONS(1242), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8853] = 1,
    ACTIONS(1244), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8860] = 1,
    ACTIONS(1520), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8867] = 1,
    ACTIONS(1246), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8874] = 1,
    ACTIONS(1522), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8881] = 1,
    ACTIONS(1248), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8888] = 1,
    ACTIONS(1250), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8895] = 1,
    ACTIONS(1252), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8902] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8909] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8916] = 1,
    ACTIONS(1254), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8923] = 1,
    ACTIONS(1256), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8930] = 1,
    ACTIONS(1258), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8937] = 1,
    ACTIONS(1304), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8944] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8951] = 1,
    ACTIONS(1524), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8958] = 1,
    ACTIONS(1526), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8965] = 4,
    ACTIONS(523), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__text_indent,
    STATE(660), 1,
      sym_text_body,
    STATE(961), 1,
      aux_sym_text_body_repeat1,
  [8978] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8985] = 1,
    ACTIONS(1306), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8992] = 1,
    ACTIONS(1278), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8999] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9006] = 1,
    ACTIONS(1528), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9013] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9022] = 2,
    STATE(854), 1,
      sym_text_ref,
    ACTIONS(1530), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9031] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1532), 1,
      sym_blank_line,
    STATE(249), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9042] = 4,
    ACTIONS(1534), 1,
      sym_runnable_ref,
    ACTIONS(1536), 1,
      sym_none_keyword,
    ACTIONS(1538), 1,
      sym_all_keyword,
    STATE(847), 1,
      sym_route_value,
  [9055] = 1,
    ACTIONS(1260), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9062] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1540), 1,
      sym_text_line,
    STATE(294), 1,
      sym_line_end,
  [9075] = 1,
    ACTIONS(1542), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9082] = 1,
    ACTIONS(1282), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9089] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9096] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9103] = 1,
    ACTIONS(1544), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9110] = 1,
    ACTIONS(1286), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9117] = 1,
    ACTIONS(1546), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9124] = 1,
    ACTIONS(1548), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9131] = 1,
    ACTIONS(1262), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9138] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9145] = 1,
    ACTIONS(1550), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9152] = 1,
    ACTIONS(1314), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9159] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9166] = 4,
    ACTIONS(557), 1,
      sym__line_start,
    ACTIONS(1552), 1,
      sym__dedent,
    STATE(115), 1,
      sym_message,
    STATE(1211), 1,
      sym_messages,
  [9179] = 4,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1554), 1,
      sym_colon,
    STATE(307), 1,
      sym_line_end,
  [9192] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9199] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9206] = 1,
    ACTIONS(1122), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9213] = 3,
    ACTIONS(1556), 1,
      sym_optional_marker,
    ACTIONS(1558), 1,
      sym_colon,
    ACTIONS(1560), 2,
      sym_rparen,
      sym_comma,
  [9224] = 1,
    ACTIONS(1562), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [9231] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1564), 1,
      sym_text_line,
    STATE(322), 1,
      sym_line_end,
  [9244] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1566), 1,
      sym_text_line,
    STATE(323), 1,
      sym_line_end,
  [9257] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9264] = 1,
    ACTIONS(1124), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9271] = 1,
    ACTIONS(1568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9278] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9285] = 1,
    ACTIONS(1316), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9292] = 2,
    ACTIONS(1572), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1570), 3,
      sym_newline,
      sym__inline_comment,
      anon_sym_EQ,
  [9301] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9308] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9315] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9322] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(365), 1,
      sym_text_line,
    STATE(339), 1,
      sym_line_end,
  [9335] = 1,
    ACTIONS(1574), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9342] = 1,
    ACTIONS(1576), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9349] = 1,
    ACTIONS(1126), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9356] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9363] = 1,
    ACTIONS(1578), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9370] = 4,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(1580), 1,
      sym_arrow,
    ACTIONS(1582), 1,
      sym_colon,
    STATE(1004), 1,
      sym_params,
  [9383] = 1,
    ACTIONS(1584), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9390] = 1,
    ACTIONS(1586), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9397] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(132), 1,
      sym_line_end,
    STATE(657), 1,
      sym_job_body,
  [9410] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9417] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1360), 1,
      sym_text_line,
    STATE(353), 1,
      sym_line_end,
  [9430] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1588), 1,
      sym_text_line,
    STATE(354), 1,
      sym_line_end,
  [9443] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1590), 1,
      sym_text_line,
    STATE(355), 1,
      sym_line_end,
  [9456] = 1,
    ACTIONS(1592), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9463] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1594), 1,
      sym_text_line,
    STATE(357), 1,
      sym_line_end,
  [9476] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1596), 1,
      sym_text_line,
    STATE(358), 1,
      sym_line_end,
  [9489] = 1,
    ACTIONS(1598), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9496] = 4,
    ACTIONS(1488), 1,
      sym__inline_comment,
    ACTIONS(1490), 1,
      sym_newline,
    STATE(132), 1,
      sym_line_end,
    STATE(702), 1,
      sym_job_body,
  [9509] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9516] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9523] = 4,
    ACTIONS(967), 1,
      sym_snake_name,
    ACTIONS(1600), 1,
      sym_colon,
    STATE(559), 1,
      sym_inline_agic_body,
    STATE(933), 1,
      sym_runnable,
  [9536] = 1,
    ACTIONS(1264), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9543] = 4,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(1602), 1,
      sym_arrow,
    ACTIONS(1604), 1,
      sym_colon,
    STATE(1053), 1,
      sym_params,
  [9556] = 2,
    ACTIONS(1608), 1,
      sym_newline,
    ACTIONS(1606), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [9565] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9572] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(371), 1,
      sym_text_line,
    STATE(522), 1,
      sym_line_end,
  [9585] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9592] = 1,
    ACTIONS(1270), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9599] = 4,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1610), 1,
      sym_text_line,
    STATE(761), 1,
      sym_line_end,
  [9612] = 4,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    ACTIONS(1612), 1,
      sym_colon,
    STATE(632), 1,
      sym_line_end,
  [9625] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9632] = 4,
    ACTIONS(1614), 1,
      sym_blank_line,
    ACTIONS(1616), 1,
      sym__text_indent,
    STATE(817), 1,
      sym_text_body,
    STATE(967), 1,
      aux_sym_text_body_repeat1,
  [9645] = 1,
    ACTIONS(1618), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9652] = 1,
    ACTIONS(1304), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9659] = 1,
    ACTIONS(1620), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9666] = 4,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(413), 1,
      sym_text_body,
    STATE(968), 1,
      aux_sym_text_body_repeat1,
  [9679] = 4,
    ACTIONS(1400), 1,
      sym_text_line,
    ACTIONS(1622), 1,
      sym__inline_comment,
    ACTIONS(1624), 1,
      sym_newline,
    STATE(440), 1,
      sym_line_end,
  [9692] = 1,
    ACTIONS(1626), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9699] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9706] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9713] = 1,
    ACTIONS(1628), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9720] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9727] = 1,
    ACTIONS(1630), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9734] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9741] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1632), 1,
      sym_blank_line,
    STATE(442), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9752] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1634), 1,
      sym_blank_line,
    STATE(443), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9763] = 1,
    ACTIONS(1636), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9770] = 1,
    ACTIONS(1638), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9777] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1640), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [9788] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1642), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [9799] = 1,
    ACTIONS(1272), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9806] = 2,
    STATE(886), 1,
      sym_text_ref,
    ACTIONS(1530), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9815] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9822] = 4,
    ACTIONS(1534), 1,
      sym_runnable_ref,
    ACTIONS(1536), 1,
      sym_none_keyword,
    ACTIONS(1538), 1,
      sym_all_keyword,
    STATE(885), 1,
      sym_route_value,
  [9835] = 1,
    ACTIONS(1644), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9842] = 1,
    ACTIONS(1646), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9849] = 1,
    ACTIONS(1648), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9856] = 1,
    ACTIONS(1650), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9863] = 1,
    ACTIONS(1652), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9870] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9877] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1654), 1,
      sym_blank_line,
    STATE(471), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9888] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1656), 1,
      sym_blank_line,
    STATE(472), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9899] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1658), 1,
      sym_blank_line,
    STATE(474), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9910] = 3,
    ACTIONS(983), 1,
      sym_indented_raw_text,
    ACTIONS(1660), 1,
      sym_blank_line,
    STATE(475), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9921] = 2,
    STATE(1044), 1,
      sym_directive_op,
    ACTIONS(1408), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9930] = 1,
    ACTIONS(1274), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9937] = 1,
    ACTIONS(1662), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9944] = 1,
    ACTIONS(1664), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9951] = 1,
    ACTIONS(1666), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9958] = 3,
    ACTIONS(1670), 1,
      sym_comma,
    STATE(773), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1668), 2,
      sym_newline,
      sym__inline_comment,
  [9969] = 3,
    ACTIONS(1396), 1,
      sym_comma,
    STATE(486), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1672), 2,
      sym_newline,
      sym__inline_comment,
  [9980] = 3,
    ACTIONS(1670), 1,
      sym_comma,
    STATE(532), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1674), 2,
      sym_newline,
      sym__inline_comment,
  [9991] = 1,
    ACTIONS(1676), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9998] = 1,
    ACTIONS(1196), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10005] = 1,
    ACTIONS(848), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10011] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(482), 1,
      sym_line_end,
  [10021] = 1,
    ACTIONS(1682), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [10027] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(509), 1,
      sym_line_end,
  [10037] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(510), 1,
      sym_line_end,
  [10047] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(517), 1,
      sym_line_end,
  [10057] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(519), 1,
      sym_line_end,
  [10067] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(523), 1,
      sym_line_end,
  [10077] = 1,
    ACTIONS(1684), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10083] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(554), 1,
      sym_line_end,
  [10093] = 3,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1686), 1,
      anon_sym__,
    STATE(781), 1,
      sym_local_name,
  [10103] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(209), 1,
      sym_line_end,
  [10113] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(183), 1,
      sym_line_end,
  [10123] = 1,
    ACTIONS(1688), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [10129] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(567), 1,
      sym_line_end,
  [10139] = 1,
    ACTIONS(1690), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10145] = 2,
    STATE(207), 1,
      sym__order_complement,
    ACTIONS(1692), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10153] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(566), 1,
      sym_line_end,
  [10163] = 3,
    ACTIONS(1694), 1,
      sym_blank_line,
    ACTIONS(1696), 1,
      sym__text_indent,
    STATE(870), 1,
      aux_sym_text_body_repeat1,
  [10173] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(573), 1,
      sym_line_end,
  [10183] = 1,
    ACTIONS(1698), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10189] = 1,
    ACTIONS(1430), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10195] = 1,
    ACTIONS(1435), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10201] = 2,
    ACTIONS(1702), 1,
      sym_newline,
    ACTIONS(1700), 2,
      sym__inline_comment,
      sym_text_line,
  [10209] = 2,
    ACTIONS(1706), 1,
      sym_newline,
    ACTIONS(1704), 2,
      sym__inline_comment,
      sym_text_line,
  [10217] = 2,
    ACTIONS(1710), 1,
      sym_newline,
    ACTIONS(1708), 2,
      sym__inline_comment,
      sym_text_line,
  [10225] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(201), 1,
      sym_line_end,
  [10235] = 2,
    STATE(1056), 1,
      sym_param_name,
    ACTIONS(1712), 2,
      sym__variable_name,
      anon_sym__,
  [10243] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(655), 1,
      sym_line_end,
  [10253] = 3,
    ACTIONS(1714), 1,
      sym__inline_comment,
    ACTIONS(1716), 1,
      sym_newline,
    STATE(748), 1,
      sym_line_end,
  [10263] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(234), 1,
      sym_line_end,
  [10273] = 3,
    ACTIONS(337), 1,
      sym_flow_if_keyword,
    STATE(686), 1,
      sym__inline_if_complement,
    STATE(920), 1,
      sym__named_if_complement,
  [10283] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(687), 1,
      sym_line_end,
  [10293] = 3,
    ACTIONS(1718), 1,
      sym__dedent,
    ACTIONS(1720), 1,
      sym__until_start,
    STATE(76), 1,
      sym_until_clause,
  [10303] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(693), 1,
      sym_line_end,
  [10313] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(594), 1,
      sym_line_end,
  [10323] = 1,
    ACTIONS(1304), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10329] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [10339] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(597), 1,
      sym_line_end,
  [10349] = 3,
    ACTIONS(894), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1722), 1,
      sym_colon,
    STATE(1088), 1,
      sym__window_complement,
  [10359] = 1,
    ACTIONS(1196), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10365] = 1,
    ACTIONS(1306), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10371] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(599), 1,
      sym_line_end,
  [10381] = 3,
    ACTIONS(1724), 1,
      sym_rparen,
    ACTIONS(1726), 1,
      sym_comma,
    STATE(936), 1,
      aux_sym_params_repeat1,
  [10391] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(600), 1,
      sym_line_end,
  [10401] = 1,
    ACTIONS(1314), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10407] = 1,
    ACTIONS(1316), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10413] = 2,
    ACTIONS(1728), 1,
      sym_colon,
    ACTIONS(1730), 2,
      sym_rparen,
      sym_comma,
  [10421] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(601), 1,
      sym_line_end,
  [10431] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(602), 1,
      sym_line_end,
  [10441] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(741), 1,
      sym_line_end,
  [10451] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(603), 1,
      sym_line_end,
  [10461] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(177), 1,
      sym_line_end,
  [10471] = 1,
    ACTIONS(1732), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10477] = 3,
    ACTIONS(1734), 1,
      sym_pascal_name,
    STATE(1110), 1,
      sym_struct_name,
    STATE(1214), 1,
      sym_type_name,
  [10487] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(205), 1,
      sym_line_end,
  [10497] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10503] = 1,
    ACTIONS(848), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10509] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1736), 1,
      sym__dedent,
    STATE(82), 1,
      sym_until_clause,
  [10519] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(618), 1,
      sym_line_end,
  [10529] = 3,
    ACTIONS(1714), 1,
      sym__inline_comment,
    ACTIONS(1716), 1,
      sym_newline,
    STATE(520), 1,
      sym_line_end,
  [10539] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(620), 1,
      sym_line_end,
  [10549] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [10559] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10565] = 1,
    ACTIONS(848), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10571] = 1,
    ACTIONS(1260), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10577] = 1,
    ACTIONS(1262), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10583] = 1,
    ACTIONS(1264), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10589] = 1,
    ACTIONS(1270), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10595] = 1,
    ACTIONS(1272), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10601] = 1,
    ACTIONS(1274), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10607] = 3,
    ACTIONS(1738), 1,
      sym__inline_comment,
    ACTIONS(1740), 1,
      sym_newline,
    STATE(251), 1,
      sym_line_end,
  [10617] = 1,
    ACTIONS(1260), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10623] = 1,
    ACTIONS(1262), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10629] = 1,
    ACTIONS(1264), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10635] = 1,
    ACTIONS(1270), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10641] = 1,
    ACTIONS(1272), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10647] = 1,
    ACTIONS(1274), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10653] = 3,
    ACTIONS(1738), 1,
      sym__inline_comment,
    ACTIONS(1740), 1,
      sym_newline,
    STATE(252), 1,
      sym_line_end,
  [10663] = 1,
    ACTIONS(1742), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10669] = 1,
    ACTIONS(1468), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10675] = 3,
    ACTIONS(1714), 1,
      sym__inline_comment,
    ACTIONS(1716), 1,
      sym_newline,
    STATE(862), 1,
      sym_line_end,
  [10685] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(190), 1,
      sym_line_end,
  [10695] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(775), 1,
      sym_line_end,
  [10705] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(659), 1,
      sym_line_end,
  [10715] = 1,
    ACTIONS(1474), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10721] = 1,
    ACTIONS(1476), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10727] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(491), 1,
      sym_line_end,
  [10737] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(296), 1,
      sym_line_end,
  [10747] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(297), 1,
      sym_line_end,
  [10757] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(298), 1,
      sym_line_end,
  [10767] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(299), 1,
      sym_line_end,
  [10777] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(300), 1,
      sym_line_end,
  [10787] = 3,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1744), 1,
      anon_sym__,
    STATE(866), 1,
      sym_local_name,
  [10797] = 3,
    ACTIONS(1746), 1,
      sym_blank_line,
    ACTIONS(1749), 1,
      sym__text_indent,
    STATE(870), 1,
      aux_sym_text_body_repeat1,
  [10807] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(497), 1,
      sym_line_end,
  [10817] = 1,
    ACTIONS(1260), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10823] = 1,
    ACTIONS(1262), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10829] = 1,
    ACTIONS(1264), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10835] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(308), 1,
      sym_line_end,
  [10845] = 1,
    ACTIONS(1268), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10851] = 1,
    ACTIONS(1270), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10857] = 1,
    ACTIONS(1272), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10863] = 3,
    ACTIONS(359), 1,
      sym_flow_if_keyword,
    STATE(312), 1,
      sym__inline_if_complement,
    STATE(897), 1,
      sym__named_if_complement,
  [10873] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(313), 1,
      sym_line_end,
  [10883] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(314), 1,
      sym_line_end,
  [10893] = 1,
    ACTIONS(1274), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10899] = 1,
    ACTIONS(846), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10905] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(321), 1,
      sym_line_end,
  [10915] = 3,
    ACTIONS(1751), 1,
      sym__inline_comment,
    ACTIONS(1753), 1,
      sym_newline,
    STATE(504), 1,
      sym_line_end,
  [10925] = 3,
    ACTIONS(1751), 1,
      sym__inline_comment,
    ACTIONS(1753), 1,
      sym_newline,
    STATE(505), 1,
      sym_line_end,
  [10935] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(499), 1,
      sym_line_end,
  [10945] = 1,
    ACTIONS(1278), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10951] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(324), 1,
      sym_line_end,
  [10961] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(133), 1,
      sym__flow_statement,
    STATE(1080), 1,
      sym_statements,
  [10971] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(328), 1,
      sym_line_end,
  [10981] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(329), 1,
      sym_line_end,
  [10991] = 1,
    ACTIONS(1282), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10997] = 1,
    ACTIONS(1286), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11003] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(332), 1,
      sym_line_end,
  [11013] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(333), 1,
      sym_line_end,
  [11023] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(334), 1,
      sym_line_end,
  [11033] = 3,
    ACTIONS(1726), 1,
      sym_comma,
    ACTIONS(1755), 1,
      sym_rparen,
    STATE(819), 1,
      aux_sym_params_repeat1,
  [11043] = 3,
    ACTIONS(900), 1,
      sym_flow_by_keyword,
    STATE(337), 1,
      sym__inline_by_complement,
    STATE(910), 1,
      sym__named_by_complement,
  [11053] = 1,
    ACTIONS(1290), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11059] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(339), 1,
      sym_line_end,
  [11069] = 1,
    ACTIONS(1294), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [11075] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [11085] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(342), 1,
      sym_line_end,
  [11095] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(343), 1,
      sym_line_end,
  [11105] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [11115] = 2,
    ACTIONS(1757), 1,
      sym_flow_spawn_keyword,
    STATE(344), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11123] = 1,
    ACTIONS(1706), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [11129] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(347), 1,
      sym_line_end,
  [11139] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(348), 1,
      sym_line_end,
  [11149] = 2,
    ACTIONS(1608), 1,
      sym_newline,
    ACTIONS(1606), 2,
      sym__inline_comment,
      sym_text_line,
  [11157] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(352), 1,
      sym_line_end,
  [11167] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(511), 1,
      sym_line_end,
  [11177] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(351), 1,
      sym_line_end,
  [11187] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(215), 1,
      sym_line_end,
  [11197] = 1,
    ACTIONS(1759), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11203] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [11211] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1761), 1,
      sym__dedent,
    STATE(67), 1,
      sym_until_clause,
  [11221] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(512), 1,
      sym_line_end,
  [11231] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(513), 1,
      sym_line_end,
  [11241] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(362), 1,
      sym_line_end,
  [11251] = 2,
    ACTIONS(1562), 1,
      sym_newline,
    ACTIONS(1763), 2,
      sym__inline_comment,
      sym_text_line,
  [11259] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(363), 1,
      sym_line_end,
  [11269] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(364), 1,
      sym_line_end,
  [11279] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(365), 1,
      sym_line_end,
  [11289] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(366), 1,
      sym_line_end,
  [11299] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(367), 1,
      sym_line_end,
  [11309] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(368), 1,
      sym_line_end,
  [11319] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1765), 1,
      sym__dedent,
    STATE(94), 1,
      sym_until_clause,
  [11329] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(373), 1,
      sym_line_end,
  [11339] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [11349] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(374), 1,
      sym_line_end,
  [11359] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(570), 1,
      sym_line_end,
  [11369] = 3,
    ACTIONS(919), 1,
      sym_flow_by_keyword,
    STATE(516), 1,
      sym__inline_by_complement,
    STATE(969), 1,
      sym__named_by_complement,
  [11379] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(382), 1,
      sym_line_end,
  [11389] = 3,
    ACTIONS(1767), 1,
      sym_rparen,
    ACTIONS(1769), 1,
      sym_comma,
    STATE(936), 1,
      aux_sym_params_repeat1,
  [11399] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(171), 1,
      sym_line_end,
  [11409] = 3,
    ACTIONS(1624), 1,
      sym_newline,
    ACTIONS(1772), 1,
      sym__inline_comment,
    STATE(816), 1,
      sym_line_end,
  [11419] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [11429] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(412), 1,
      sym_line_end,
  [11439] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(522), 1,
      sym_line_end,
  [11449] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [11459] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(230), 1,
      sym_line_end,
  [11469] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(224), 1,
      sym_line_end,
  [11479] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(736), 1,
      sym_line_end,
  [11489] = 3,
    ACTIONS(1774), 1,
      sym_colon,
    ACTIONS(1776), 1,
      sym_snake_name,
    STATE(1183), 1,
      sym_context_name,
  [11499] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [11509] = 1,
    ACTIONS(1778), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11515] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(530), 1,
      sym_line_end,
  [11525] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(178), 1,
      sym_line_end,
  [11535] = 3,
    ACTIONS(1780), 1,
      sym__inline_comment,
    ACTIONS(1782), 1,
      sym_newline,
    STATE(262), 1,
      sym_line_end,
  [11545] = 2,
    STATE(195), 1,
      sym__order_complement,
    ACTIONS(1692), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11553] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [11563] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(238), 1,
      sym_line_end,
  [11573] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(206), 1,
      sym_line_end,
  [11583] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(210), 1,
      sym_line_end,
  [11593] = 2,
    STATE(797), 1,
      sym_recall_source,
    ACTIONS(801), 2,
      anon_sym_far,
      anon_sym_near,
  [11601] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(133), 1,
      sym__flow_statement,
    STATE(1092), 1,
      sym_statements,
  [11611] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(536), 1,
      sym_line_end,
  [11621] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [11631] = 3,
    ACTIONS(1694), 1,
      sym_blank_line,
    ACTIONS(1784), 1,
      sym__text_indent,
    STATE(870), 1,
      aux_sym_text_body_repeat1,
  [11641] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(537), 1,
      sym_line_end,
  [11651] = 3,
    ACTIONS(1786), 1,
      sym_colon,
    ACTIONS(1788), 1,
      sym_snake_name,
    STATE(1090), 1,
      sym_instruct_name,
  [11661] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(219), 1,
      sym_line_end,
  [11671] = 3,
    ACTIONS(894), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1790), 1,
      sym_colon,
    STATE(1207), 1,
      sym__window_complement,
  [11681] = 2,
    ACTIONS(1792), 1,
      sym_flow_spawn_keyword,
    STATE(540), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11689] = 3,
    ACTIONS(1694), 1,
      sym_blank_line,
    ACTIONS(1794), 1,
      sym__text_indent,
    STATE(870), 1,
      aux_sym_text_body_repeat1,
  [11699] = 3,
    ACTIONS(1694), 1,
      sym_blank_line,
    ACTIONS(1796), 1,
      sym__text_indent,
    STATE(870), 1,
      aux_sym_text_body_repeat1,
  [11709] = 3,
    ACTIONS(231), 1,
      sym__inline_comment,
    ACTIONS(237), 1,
      sym_newline,
    STATE(555), 1,
      sym_line_end,
  [11719] = 2,
    ACTIONS(1798), 1,
      sym__snake_kebab_name,
    STATE(1202), 1,
      sym_cap_name,
  [11726] = 2,
    ACTIONS(1798), 1,
      sym__snake_kebab_name,
    STATE(1174), 1,
      sym_cap_name,
  [11733] = 1,
    ACTIONS(1800), 2,
      sym_arrow,
      sym_colon,
  [11738] = 2,
    ACTIONS(967), 1,
      sym_snake_name,
    STATE(778), 1,
      sym_runnable,
  [11745] = 1,
    ACTIONS(1802), 2,
      sym_rparen,
      sym_comma,
  [11750] = 2,
    ACTIONS(1804), 1,
      aux_sym__doc_space_token1,
    STATE(973), 1,
      sym__required_space,
  [11757] = 2,
    ACTIONS(1806), 1,
      sym__reduce_text_start,
    STATE(604), 1,
      sym__reduce_text_body,
  [11764] = 2,
    ACTIONS(1808), 1,
      sym_comment_text,
    ACTIONS(1810), 1,
      sym__comment_end,
  [11771] = 1,
    ACTIONS(1007), 2,
      sym_newline,
      sym__inline_comment,
  [11776] = 2,
    ACTIONS(601), 1,
      sym__from_start,
    STATE(273), 1,
      sym__from_complement,
  [11783] = 1,
    ACTIONS(846), 2,
      sym_blank_line,
      sym__text_indent,
  [11788] = 2,
    ACTIONS(1812), 1,
      sym_comment_text,
    ACTIONS(1814), 1,
      sym__comment_end,
  [11795] = 2,
    ACTIONS(1816), 1,
      sym__one_integer_literal,
    ACTIONS(1818), 1,
      sym__other_integer_literal,
  [11802] = 2,
    ACTIONS(1820), 1,
      sym_snake_name,
    STATE(464), 1,
      sym_agent,
  [11809] = 1,
    ACTIONS(1822), 2,
      sym_newline,
      sym__inline_comment,
  [11814] = 2,
    ACTIONS(1824), 1,
      anon_sym_lanes,
    STATE(1009), 1,
      sym_flow_lanes_keyword,
  [11821] = 2,
    ACTIONS(1826), 1,
      sym_text_line,
    STATE(951), 1,
      sym_property_value,
  [11828] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(1040), 1,
      sym_assign_operator,
  [11835] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(665), 1,
      sym_assign_operator,
  [11842] = 2,
    ACTIONS(1830), 1,
      aux_sym__doc_space_token1,
    STATE(803), 1,
      sym__doc_space,
  [11849] = 2,
    ACTIONS(1798), 1,
      sym__snake_kebab_name,
    STATE(1187), 1,
      sym_cap_name,
  [11856] = 2,
    ACTIONS(1806), 1,
      sym__reduce_text_start,
    STATE(581), 1,
      sym__reduce_text_body,
  [11863] = 2,
    ACTIONS(1832), 1,
      sym_text_line,
    STATE(805), 1,
      sym_cap_ref,
  [11870] = 2,
    ACTIONS(1798), 1,
      sym__snake_kebab_name,
    STATE(1166), 1,
      sym_cap_name,
  [11877] = 1,
    ACTIONS(1834), 2,
      sym_optional_marker,
      sym_colon,
  [11882] = 2,
    ACTIONS(1806), 1,
      sym__reduce_text_start,
    STATE(621), 1,
      sym__reduce_text_body,
  [11889] = 2,
    ACTIONS(1836), 1,
      anon_sym_lanes,
    STATE(257), 1,
      sym_flow_lanes_keyword,
  [11896] = 2,
    ACTIONS(1838), 1,
      anon_sym_EQ,
    STATE(164), 1,
      sym_assign_operator,
  [11903] = 2,
    ACTIONS(1840), 1,
      sym_optional_marker,
    ACTIONS(1842), 1,
      sym_colon,
  [11910] = 2,
    ACTIONS(601), 1,
      sym__from_start,
    STATE(269), 1,
      sym__from_complement,
  [11917] = 2,
    ACTIONS(1844), 1,
      anon_sym_EQ,
    STATE(667), 1,
      sym_assign_operator,
  [11924] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(225), 1,
      sym__implicit_run_line,
  [11931] = 2,
    ACTIONS(1846), 1,
      sym_snake_name,
    STATE(1013), 1,
      sym_property_key,
  [11938] = 1,
    ACTIONS(1848), 2,
      sym_newline,
      sym__inline_comment,
  [11943] = 2,
    ACTIONS(1850), 1,
      sym_arrow,
    ACTIONS(1852), 1,
      sym_colon,
  [11950] = 1,
    ACTIONS(848), 2,
      sym_blank_line,
      sym__text_indent,
  [11955] = 2,
    ACTIONS(1854), 1,
      sym_snake_name,
    STATE(998), 1,
      sym_field_name,
  [11962] = 1,
    ACTIONS(1856), 2,
      sym_newline,
      sym__inline_comment,
  [11967] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1081), 1,
      sym_param_doc_tag,
  [11974] = 1,
    ACTIONS(1005), 2,
      sym_newline,
      sym__inline_comment,
  [11979] = 1,
    ACTIONS(1860), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11984] = 1,
    ACTIONS(1862), 2,
      sym_arrow,
      sym_colon,
  [11989] = 2,
    ACTIONS(1864), 1,
      sym_arrow,
    ACTIONS(1866), 1,
      sym_colon,
  [11996] = 2,
    ACTIONS(1868), 1,
      anon_sym_EQ,
    STATE(986), 1,
      sym_assign_operator,
  [12003] = 1,
    ACTIONS(1668), 2,
      sym_newline,
      sym__inline_comment,
  [12008] = 1,
    ACTIONS(1870), 2,
      sym_rparen,
      sym_comma,
  [12013] = 1,
    ACTIONS(1872), 2,
      sym_arrow,
      sym_colon,
  [12018] = 1,
    ACTIONS(1874), 2,
      sym_newline,
      sym__inline_comment,
  [12023] = 1,
    ACTIONS(1876), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12028] = 1,
    ACTIONS(1672), 2,
      sym_newline,
      sym__inline_comment,
  [12033] = 2,
    ACTIONS(1878), 1,
      sym_comment_text,
    ACTIONS(1880), 1,
      sym__comment_end,
  [12040] = 2,
    ACTIONS(1882), 1,
      sym_comment_text,
    ACTIONS(1884), 1,
      sym__comment_end,
  [12047] = 2,
    ACTIONS(1806), 1,
      sym__reduce_text_start,
    STATE(550), 1,
      sym__reduce_text_body,
  [12054] = 2,
    ACTIONS(1886), 1,
      sym_comment_text,
    ACTIONS(1888), 1,
      sym__comment_end,
  [12061] = 1,
    ACTIONS(1890), 2,
      sym_rparen,
      sym_comma,
  [12066] = 2,
    ACTIONS(1892), 1,
      sym_comment_text,
    ACTIONS(1894), 1,
      sym__comment_end,
  [12073] = 2,
    ACTIONS(1896), 1,
      sym_comment_text,
    ACTIONS(1898), 1,
      sym__comment_end,
  [12080] = 2,
    ACTIONS(1900), 1,
      sym_comment_text,
    ACTIONS(1902), 1,
      sym__comment_end,
  [12087] = 2,
    ACTIONS(1904), 1,
      sym_comment_text,
    ACTIONS(1906), 1,
      sym__comment_end,
  [12094] = 2,
    ACTIONS(1908), 1,
      sym_comment_text,
    ACTIONS(1910), 1,
      sym__comment_end,
  [12101] = 2,
    ACTIONS(1912), 1,
      sym_comment_text,
    ACTIONS(1914), 1,
      sym__comment_end,
  [12108] = 2,
    ACTIONS(1916), 1,
      sym_comment_text,
    ACTIONS(1918), 1,
      sym__comment_end,
  [12115] = 2,
    ACTIONS(1920), 1,
      sym_comment_text,
    ACTIONS(1922), 1,
      sym__comment_end,
  [12122] = 2,
    ACTIONS(1924), 1,
      sym_comment_text,
    ACTIONS(1926), 1,
      sym__comment_end,
  [12129] = 2,
    ACTIONS(1928), 1,
      sym_comment_text,
    ACTIONS(1930), 1,
      sym__comment_end,
  [12136] = 2,
    ACTIONS(1932), 1,
      sym_comment_text,
    ACTIONS(1934), 1,
      sym__comment_end,
  [12143] = 2,
    ACTIONS(1936), 1,
      sym_comment_text,
    ACTIONS(1938), 1,
      sym__comment_end,
  [12150] = 2,
    ACTIONS(1940), 1,
      sym_comment_text,
    ACTIONS(1942), 1,
      sym__comment_end,
  [12157] = 2,
    ACTIONS(1944), 1,
      sym_comment_text,
    ACTIONS(1946), 1,
      sym__comment_end,
  [12164] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1150), 1,
      sym_param_doc_tag,
  [12171] = 1,
    ACTIONS(1948), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12176] = 2,
    ACTIONS(1950), 1,
      sym__snake_kebab_name,
    STATE(1189), 1,
      sym_job_name,
  [12183] = 1,
    ACTIONS(1952), 2,
      sym_newline,
      sym__inline_comment,
  [12188] = 1,
    ACTIONS(1954), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12193] = 2,
    ACTIONS(1956), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(885), 1,
      sym_directive_value,
  [12200] = 2,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(242), 1,
      sym__unroled_message_line,
  [12207] = 2,
    ACTIONS(1820), 1,
      sym_snake_name,
    STATE(447), 1,
      sym_agent,
  [12214] = 2,
    ACTIONS(656), 1,
      sym__line_start,
    STATE(137), 1,
      sym_field,
  [12221] = 2,
    ACTIONS(1958), 1,
      sym__one_integer_literal,
    ACTIONS(1960), 1,
      sym__other_integer_literal,
  [12228] = 2,
    ACTIONS(1956), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(847), 1,
      sym_directive_value,
  [12235] = 2,
    ACTIONS(601), 1,
      sym__from_start,
    STATE(466), 1,
      sym__from_complement,
  [12242] = 2,
    ACTIONS(656), 1,
      sym__line_start,
    STATE(143), 1,
      sym_field,
  [12249] = 2,
    ACTIONS(601), 1,
      sym__from_start,
    STATE(468), 1,
      sym__from_complement,
  [12256] = 2,
    ACTIONS(1962), 1,
      sym_arrow,
    ACTIONS(1964), 1,
      sym_colon,
  [12263] = 2,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(250), 1,
      sym__implicit_run_line,
  [12270] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1084), 1,
      sym_param_doc_tag,
  [12277] = 2,
    ACTIONS(1966), 1,
      aux_sym__doc_space_token1,
    STATE(1098), 1,
      sym__doc_space,
  [12284] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1095), 1,
      sym_param_doc_tag,
  [12291] = 2,
    ACTIONS(1968), 1,
      sym_flow_run_keyword,
    STATE(754), 1,
      sym__run_after_modifier,
  [12298] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1106), 1,
      sym_param_doc_tag,
  [12305] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1113), 1,
      sym_param_doc_tag,
  [12312] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1120), 1,
      sym_param_doc_tag,
  [12319] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1127), 1,
      sym_param_doc_tag,
  [12326] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1134), 1,
      sym_param_doc_tag,
  [12333] = 2,
    ACTIONS(1858), 1,
      anon_sym_ATparam,
    STATE(1141), 1,
      sym_param_doc_tag,
  [12340] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(1043), 1,
      sym_assign_operator,
  [12347] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(753), 1,
      sym_assign_operator,
  [12354] = 2,
    ACTIONS(1838), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_assign_operator,
  [12361] = 2,
    ACTIONS(1844), 1,
      anon_sym_EQ,
    STATE(755), 1,
      sym_assign_operator,
  [12368] = 2,
    ACTIONS(1970), 1,
      sym_flow_run_keyword,
    STATE(293), 1,
      sym__run_after_modifier,
  [12375] = 2,
    ACTIONS(1972), 1,
      sym_arrow,
    ACTIONS(1974), 1,
      sym_colon,
  [12382] = 2,
    ACTIONS(1950), 1,
      sym__snake_kebab_name,
    STATE(1146), 1,
      sym_job_name,
  [12389] = 2,
    ACTIONS(1976), 1,
      sym_comment_text,
    ACTIONS(1978), 1,
      sym__comment_end,
  [12396] = 1,
    ACTIONS(1980), 1,
      sym__comment_end,
  [12400] = 1,
    ACTIONS(1982), 1,
      sym__dedent,
  [12404] = 1,
    ACTIONS(1984), 1,
      sym__dedent,
  [12408] = 1,
    ACTIONS(1986), 1,
      sym__dedent,
  [12412] = 1,
    ACTIONS(1988), 1,
      sym__dedent,
  [12416] = 1,
    ACTIONS(1990), 1,
      sym__dedent,
  [12420] = 1,
    ACTIONS(1992), 1,
      sym_colon,
  [12424] = 1,
    ACTIONS(1994), 1,
      sym__dedent,
  [12428] = 1,
    ACTIONS(1996), 1,
      sym__comment_end,
  [12432] = 1,
    ACTIONS(1998), 1,
      sym__comment_end,
  [12436] = 1,
    ACTIONS(2000), 1,
      sym__comment_end,
  [12440] = 1,
    ACTIONS(2002), 1,
      sym__comment_end,
  [12444] = 1,
    ACTIONS(2004), 1,
      sym_newline,
  [12448] = 1,
    ACTIONS(2006), 1,
      sym_colon,
  [12452] = 1,
    ACTIONS(2008), 1,
      sym__dedent,
  [12456] = 1,
    ACTIONS(2010), 1,
      sym_colon,
  [12460] = 1,
    ACTIONS(2012), 1,
      sym__dedent,
  [12464] = 1,
    ACTIONS(2014), 1,
      sym_colon,
  [12468] = 1,
    ACTIONS(2016), 1,
      sym_colon,
  [12472] = 1,
    ACTIONS(2018), 1,
      sym__dedent,
  [12476] = 1,
    ACTIONS(2020), 1,
      sym__comment_end,
  [12480] = 1,
    ACTIONS(2022), 1,
      sym__comment_end,
  [12484] = 1,
    ACTIONS(2024), 1,
      sym__comment_end,
  [12488] = 1,
    ACTIONS(2026), 1,
      sym_newline,
  [12492] = 1,
    ACTIONS(2028), 1,
      sym_colon,
  [12496] = 1,
    ACTIONS(2030), 1,
      sym_comment_text,
  [12500] = 1,
    ACTIONS(2032), 1,
      sym__dedent,
  [12504] = 1,
    ACTIONS(2034), 1,
      sym__dedent,
  [12508] = 1,
    ACTIONS(2036), 1,
      sym__comment_end,
  [12512] = 1,
    ACTIONS(2038), 1,
      sym_flow_lane_keyword,
  [12516] = 1,
    ACTIONS(2040), 1,
      sym_colon,
  [12520] = 1,
    ACTIONS(2042), 1,
      sym__comment_end,
  [12524] = 1,
    ACTIONS(2044), 1,
      sym__comment_end,
  [12528] = 1,
    ACTIONS(2046), 1,
      sym__comment_end,
  [12532] = 1,
    ACTIONS(2048), 1,
      sym_newline,
  [12536] = 1,
    ACTIONS(2050), 1,
      sym_colon,
  [12540] = 1,
    ACTIONS(2052), 1,
      sym__dedent,
  [12544] = 1,
    ACTIONS(2054), 1,
      sym_colon,
  [12548] = 1,
    ACTIONS(2056), 1,
      sym_flow_until_keyword,
  [12552] = 1,
    ACTIONS(2058), 1,
      sym__comment_end,
  [12556] = 1,
    ACTIONS(2060), 1,
      sym__comment_end,
  [12560] = 1,
    ACTIONS(2062), 1,
      sym_newline,
  [12564] = 1,
    ACTIONS(2064), 1,
      sym_colon,
  [12568] = 1,
    ACTIONS(1710), 1,
      anon_sym_EQ,
  [12572] = 1,
    ACTIONS(2066), 1,
      sym_integer_literal,
  [12576] = 1,
    ACTIONS(2068), 1,
      sym__comment_end,
  [12580] = 1,
    ACTIONS(2070), 1,
      sym__comment_end,
  [12584] = 1,
    ACTIONS(2072), 1,
      sym__comment_end,
  [12588] = 1,
    ACTIONS(2074), 1,
      sym_newline,
  [12592] = 1,
    ACTIONS(2076), 1,
      sym__dedent,
  [12596] = 1,
    ACTIONS(375), 1,
      sym__dedent,
  [12600] = 1,
    ACTIONS(2078), 1,
      sym_colon,
  [12604] = 1,
    ACTIONS(2080), 1,
      sym__comment_end,
  [12608] = 1,
    ACTIONS(2082), 1,
      sym__comment_end,
  [12612] = 1,
    ACTIONS(2084), 1,
      sym__comment_end,
  [12616] = 1,
    ACTIONS(2086), 1,
      sym_newline,
  [12620] = 1,
    ACTIONS(2088), 1,
      sym_colon,
  [12624] = 1,
    ACTIONS(2090), 1,
      sym_colon,
  [12628] = 1,
    ACTIONS(2092), 1,
      sym_integer_literal,
  [12632] = 1,
    ACTIONS(2094), 1,
      sym__comment_end,
  [12636] = 1,
    ACTIONS(2096), 1,
      sym__comment_end,
  [12640] = 1,
    ACTIONS(2098), 1,
      sym__comment_end,
  [12644] = 1,
    ACTIONS(2100), 1,
      sym_newline,
  [12648] = 1,
    ACTIONS(2102), 1,
      sym__dedent,
  [12652] = 1,
    ACTIONS(2104), 1,
      sym_newline,
  [12656] = 1,
    ACTIONS(1552), 1,
      sym__dedent,
  [12660] = 1,
    ACTIONS(2106), 1,
      sym__comment_end,
  [12664] = 1,
    ACTIONS(2108), 1,
      sym__comment_end,
  [12668] = 1,
    ACTIONS(2110), 1,
      sym__comment_end,
  [12672] = 1,
    ACTIONS(2112), 1,
      sym_newline,
  [12676] = 1,
    ACTIONS(2114), 1,
      sym_newline,
  [12680] = 1,
    ACTIONS(2116), 1,
      sym_newline,
  [12684] = 1,
    ACTIONS(2118), 1,
      sym_newline,
  [12688] = 1,
    ACTIONS(2120), 1,
      sym_colon,
  [12692] = 1,
    ACTIONS(2122), 1,
      sym__comment_end,
  [12696] = 1,
    ACTIONS(2124), 1,
      sym__comment_end,
  [12700] = 1,
    ACTIONS(2126), 1,
      sym_colon,
  [12704] = 1,
    ACTIONS(2128), 1,
      sym__comment_end,
  [12708] = 1,
    ACTIONS(2130), 1,
      sym_newline,
  [12712] = 1,
    ACTIONS(2132), 1,
      sym_colon,
  [12716] = 1,
    ACTIONS(2134), 1,
      sym_flow_until_keyword,
  [12720] = 1,
    ACTIONS(2136), 1,
      sym_flow_lane_keyword,
  [12724] = 1,
    ACTIONS(2138), 1,
      sym_colon,
  [12728] = 1,
    ACTIONS(2140), 1,
      aux_sym__invalid_named_binding_token1,
  [12732] = 1,
    ACTIONS(2142), 1,
      sym_colon,
  [12736] = 1,
    ACTIONS(2144), 1,
      sym_newline,
  [12740] = 1,
    ACTIONS(2146), 1,
      sym_flow_exec_keyword,
  [12744] = 1,
    ACTIONS(2148), 1,
      sym_flow_until_keyword,
  [12748] = 1,
    ACTIONS(2150), 1,
      sym_flow_run_keyword,
  [12752] = 1,
    ACTIONS(2152), 1,
      sym_colon,
  [12756] = 1,
    ACTIONS(2154), 1,
      sym_integer_literal,
  [12760] = 1,
    ACTIONS(2156), 1,
      sym_colon,
  [12764] = 1,
    ACTIONS(1550), 1,
      aux_sym__doc_space_token1,
  [12768] = 1,
    ACTIONS(2158), 1,
      sym_colon,
  [12772] = 1,
    ACTIONS(2160), 1,
      sym_colon,
  [12776] = 1,
    ACTIONS(2162), 1,
      sym_colon,
  [12780] = 1,
    ACTIONS(2164), 1,
      sym_newline,
  [12784] = 1,
    ACTIONS(2166), 1,
      sym_colon,
  [12788] = 1,
    ACTIONS(2168), 1,
      sym_flow_exec_keyword,
  [12792] = 1,
    ACTIONS(2170), 1,
      sym_flow_until_keyword,
  [12796] = 1,
    ACTIONS(2172), 1,
      sym__dedent,
  [12800] = 1,
    ACTIONS(2174), 1,
      sym_colon,
  [12804] = 1,
    ACTIONS(2176), 1,
      sym_flow_time_keyword,
  [12808] = 1,
    ACTIONS(2178), 1,
      sym_flow_until_keyword,
  [12812] = 1,
    ACTIONS(2180), 1,
      sym__dedent,
  [12816] = 1,
    ACTIONS(2176), 1,
      sym_flow_times_keyword,
  [12820] = 1,
    ACTIONS(2182), 1,
      ts_builtin_sym_end,
  [12824] = 1,
    ACTIONS(2184), 1,
      sym__comment_end,
  [12828] = 1,
    ACTIONS(2186), 1,
      sym_runnable_ref,
  [12832] = 1,
    ACTIONS(2188), 1,
      anon_sym_EQ,
  [12836] = 1,
    ACTIONS(2190), 1,
      sym_colon,
  [12840] = 1,
    ACTIONS(2192), 1,
      sym_colon,
  [12844] = 1,
    ACTIONS(2194), 1,
      sym__dedent,
  [12848] = 1,
    ACTIONS(2196), 1,
      sym__dedent,
  [12852] = 1,
    ACTIONS(2198), 1,
      sym_colon,
  [12856] = 1,
    ACTIONS(2200), 1,
      sym_integer_literal,
  [12860] = 1,
    ACTIONS(2202), 1,
      sym_colon,
  [12864] = 1,
    ACTIONS(2204), 1,
      sym_flow_from_keyword,
  [12868] = 1,
    ACTIONS(2206), 1,
      sym_colon,
  [12872] = 1,
    ACTIONS(2208), 1,
      sym__comment_end,
  [12876] = 1,
    ACTIONS(2210), 1,
      sym__dedent,
  [12880] = 1,
    ACTIONS(2212), 1,
      sym__dedent,
  [12884] = 1,
    ACTIONS(2214), 1,
      sym__dedent,
  [12888] = 1,
    ACTIONS(2216), 1,
      sym__dedent,
  [12892] = 1,
    ACTIONS(2218), 1,
      sym__dedent,
  [12896] = 1,
    ACTIONS(2220), 1,
      sym_newline,
  [12900] = 1,
    ACTIONS(2222), 1,
      sym_newline,
  [12904] = 1,
    ACTIONS(2224), 1,
      sym__dedent,
  [12908] = 1,
    ACTIONS(2226), 1,
      sym__dedent,
  [12912] = 1,
    ACTIONS(2228), 1,
      sym_colon,
  [12916] = 1,
    ACTIONS(2230), 1,
      sym_flow_exec_keyword,
  [12920] = 1,
    ACTIONS(2232), 1,
      sym__dedent,
  [12924] = 1,
    ACTIONS(2234), 1,
      sym_colon,
  [12928] = 1,
    ACTIONS(2236), 1,
      sym__dedent,
  [12932] = 1,
    ACTIONS(2238), 1,
      sym_colon,
  [12936] = 1,
    ACTIONS(2240), 1,
      sym_cap_kind,
  [12940] = 1,
    ACTIONS(2242), 1,
      sym_flow_until_keyword,
  [12944] = 1,
    ACTIONS(383), 1,
      sym__dedent,
  [12948] = 1,
    ACTIONS(1424), 1,
      sym__dedent,
  [12952] = 1,
    ACTIONS(2244), 1,
      sym_flow_exec_keyword,
  [12956] = 1,
    ACTIONS(2246), 1,
      sym_colon,
  [12960] = 1,
    ACTIONS(2248), 1,
      sym_colon,
  [12964] = 1,
    ACTIONS(219), 1,
      sym_text_line,
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
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1011,
  [SMALL_STATE(32)] = 1035,
  [SMALL_STATE(33)] = 1059,
  [SMALL_STATE(34)] = 1091,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1139,
  [SMALL_STATE(37)] = 1163,
  [SMALL_STATE(38)] = 1187,
  [SMALL_STATE(39)] = 1211,
  [SMALL_STATE(40)] = 1243,
  [SMALL_STATE(41)] = 1267,
  [SMALL_STATE(42)] = 1291,
  [SMALL_STATE(43)] = 1315,
  [SMALL_STATE(44)] = 1339,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1421,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1479,
  [SMALL_STATE(50)] = 1503,
  [SMALL_STATE(51)] = 1527,
  [SMALL_STATE(52)] = 1553,
  [SMALL_STATE(53)] = 1581,
  [SMALL_STATE(54)] = 1607,
  [SMALL_STATE(55)] = 1631,
  [SMALL_STATE(56)] = 1657,
  [SMALL_STATE(57)] = 1683,
  [SMALL_STATE(58)] = 1709,
  [SMALL_STATE(59)] = 1735,
  [SMALL_STATE(60)] = 1761,
  [SMALL_STATE(61)] = 1789,
  [SMALL_STATE(62)] = 1817,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1869,
  [SMALL_STATE(65)] = 1893,
  [SMALL_STATE(66)] = 1919,
  [SMALL_STATE(67)] = 1943,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1985,
  [SMALL_STATE(70)] = 2004,
  [SMALL_STATE(71)] = 2025,
  [SMALL_STATE(72)] = 2048,
  [SMALL_STATE(73)] = 2071,
  [SMALL_STATE(74)] = 2094,
  [SMALL_STATE(75)] = 2119,
  [SMALL_STATE(76)] = 2140,
  [SMALL_STATE(77)] = 2163,
  [SMALL_STATE(78)] = 2188,
  [SMALL_STATE(79)] = 2209,
  [SMALL_STATE(80)] = 2232,
  [SMALL_STATE(81)] = 2257,
  [SMALL_STATE(82)] = 2280,
  [SMALL_STATE(83)] = 2303,
  [SMALL_STATE(84)] = 2328,
  [SMALL_STATE(85)] = 2349,
  [SMALL_STATE(86)] = 2372,
  [SMALL_STATE(87)] = 2391,
  [SMALL_STATE(88)] = 2414,
  [SMALL_STATE(89)] = 2433,
  [SMALL_STATE(90)] = 2452,
  [SMALL_STATE(91)] = 2471,
  [SMALL_STATE(92)] = 2490,
  [SMALL_STATE(93)] = 2513,
  [SMALL_STATE(94)] = 2536,
  [SMALL_STATE(95)] = 2559,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2601,
  [SMALL_STATE(98)] = 2620,
  [SMALL_STATE(99)] = 2639,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2678,
  [SMALL_STATE(102)] = 2696,
  [SMALL_STATE(103)] = 2718,
  [SMALL_STATE(104)] = 2736,
  [SMALL_STATE(105)] = 2754,
  [SMALL_STATE(106)] = 2770,
  [SMALL_STATE(107)] = 2788,
  [SMALL_STATE(108)] = 2806,
  [SMALL_STATE(109)] = 2824,
  [SMALL_STATE(110)] = 2838,
  [SMALL_STATE(111)] = 2860,
  [SMALL_STATE(112)] = 2874,
  [SMALL_STATE(113)] = 2892,
  [SMALL_STATE(114)] = 2912,
  [SMALL_STATE(115)] = 2932,
  [SMALL_STATE(116)] = 2950,
  [SMALL_STATE(117)] = 2970,
  [SMALL_STATE(118)] = 2990,
  [SMALL_STATE(119)] = 3010,
  [SMALL_STATE(120)] = 3030,
  [SMALL_STATE(121)] = 3048,
  [SMALL_STATE(122)] = 3066,
  [SMALL_STATE(123)] = 3084,
  [SMALL_STATE(124)] = 3106,
  [SMALL_STATE(125)] = 3124,
  [SMALL_STATE(126)] = 3142,
  [SMALL_STATE(127)] = 3160,
  [SMALL_STATE(128)] = 3182,
  [SMALL_STATE(129)] = 3200,
  [SMALL_STATE(130)] = 3218,
  [SMALL_STATE(131)] = 3236,
  [SMALL_STATE(132)] = 3254,
  [SMALL_STATE(133)] = 3272,
  [SMALL_STATE(134)] = 3290,
  [SMALL_STATE(135)] = 3308,
  [SMALL_STATE(136)] = 3328,
  [SMALL_STATE(137)] = 3346,
  [SMALL_STATE(138)] = 3364,
  [SMALL_STATE(139)] = 3384,
  [SMALL_STATE(140)] = 3402,
  [SMALL_STATE(141)] = 3420,
  [SMALL_STATE(142)] = 3438,
  [SMALL_STATE(143)] = 3456,
  [SMALL_STATE(144)] = 3474,
  [SMALL_STATE(145)] = 3494,
  [SMALL_STATE(146)] = 3512,
  [SMALL_STATE(147)] = 3532,
  [SMALL_STATE(148)] = 3550,
  [SMALL_STATE(149)] = 3568,
  [SMALL_STATE(150)] = 3588,
  [SMALL_STATE(151)] = 3608,
  [SMALL_STATE(152)] = 3626,
  [SMALL_STATE(153)] = 3644,
  [SMALL_STATE(154)] = 3662,
  [SMALL_STATE(155)] = 3680,
  [SMALL_STATE(156)] = 3698,
  [SMALL_STATE(157)] = 3716,
  [SMALL_STATE(158)] = 3734,
  [SMALL_STATE(159)] = 3752,
  [SMALL_STATE(160)] = 3768,
  [SMALL_STATE(161)] = 3786,
  [SMALL_STATE(162)] = 3806,
  [SMALL_STATE(163)] = 3826,
  [SMALL_STATE(164)] = 3846,
  [SMALL_STATE(165)] = 3862,
  [SMALL_STATE(166)] = 3880,
  [SMALL_STATE(167)] = 3898,
  [SMALL_STATE(168)] = 3918,
  [SMALL_STATE(169)] = 3936,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3972,
  [SMALL_STATE(172)] = 3989,
  [SMALL_STATE(173)] = 4006,
  [SMALL_STATE(174)] = 4021,
  [SMALL_STATE(175)] = 4030,
  [SMALL_STATE(176)] = 4039,
  [SMALL_STATE(177)] = 4056,
  [SMALL_STATE(178)] = 4073,
  [SMALL_STATE(179)] = 4090,
  [SMALL_STATE(180)] = 4107,
  [SMALL_STATE(181)] = 4126,
  [SMALL_STATE(182)] = 4145,
  [SMALL_STATE(183)] = 4164,
  [SMALL_STATE(184)] = 4181,
  [SMALL_STATE(185)] = 4200,
  [SMALL_STATE(186)] = 4219,
  [SMALL_STATE(187)] = 4238,
  [SMALL_STATE(188)] = 4257,
  [SMALL_STATE(189)] = 4272,
  [SMALL_STATE(190)] = 4291,
  [SMALL_STATE(191)] = 4308,
  [SMALL_STATE(192)] = 4327,
  [SMALL_STATE(193)] = 4346,
  [SMALL_STATE(194)] = 4365,
  [SMALL_STATE(195)] = 4384,
  [SMALL_STATE(196)] = 4403,
  [SMALL_STATE(197)] = 4422,
  [SMALL_STATE(198)] = 4441,
  [SMALL_STATE(199)] = 4458,
  [SMALL_STATE(200)] = 4477,
  [SMALL_STATE(201)] = 4496,
  [SMALL_STATE(202)] = 4513,
  [SMALL_STATE(203)] = 4532,
  [SMALL_STATE(204)] = 4547,
  [SMALL_STATE(205)] = 4562,
  [SMALL_STATE(206)] = 4579,
  [SMALL_STATE(207)] = 4596,
  [SMALL_STATE(208)] = 4615,
  [SMALL_STATE(209)] = 4634,
  [SMALL_STATE(210)] = 4651,
  [SMALL_STATE(211)] = 4668,
  [SMALL_STATE(212)] = 4687,
  [SMALL_STATE(213)] = 4700,
  [SMALL_STATE(214)] = 4719,
  [SMALL_STATE(215)] = 4738,
  [SMALL_STATE(216)] = 4755,
  [SMALL_STATE(217)] = 4770,
  [SMALL_STATE(218)] = 4787,
  [SMALL_STATE(219)] = 4804,
  [SMALL_STATE(220)] = 4821,
  [SMALL_STATE(221)] = 4838,
  [SMALL_STATE(222)] = 4847,
  [SMALL_STATE(223)] = 4860,
  [SMALL_STATE(224)] = 4869,
  [SMALL_STATE(225)] = 4886,
  [SMALL_STATE(226)] = 4895,
  [SMALL_STATE(227)] = 4912,
  [SMALL_STATE(228)] = 4927,
  [SMALL_STATE(229)] = 4944,
  [SMALL_STATE(230)] = 4961,
  [SMALL_STATE(231)] = 4978,
  [SMALL_STATE(232)] = 4997,
  [SMALL_STATE(233)] = 5010,
  [SMALL_STATE(234)] = 5023,
  [SMALL_STATE(235)] = 5040,
  [SMALL_STATE(236)] = 5059,
  [SMALL_STATE(237)] = 5078,
  [SMALL_STATE(238)] = 5097,
  [SMALL_STATE(239)] = 5114,
  [SMALL_STATE(240)] = 5122,
  [SMALL_STATE(241)] = 5130,
  [SMALL_STATE(242)] = 5144,
  [SMALL_STATE(243)] = 5152,
  [SMALL_STATE(244)] = 5166,
  [SMALL_STATE(245)] = 5180,
  [SMALL_STATE(246)] = 5194,
  [SMALL_STATE(247)] = 5210,
  [SMALL_STATE(248)] = 5226,
  [SMALL_STATE(249)] = 5240,
  [SMALL_STATE(250)] = 5254,
  [SMALL_STATE(251)] = 5262,
  [SMALL_STATE(252)] = 5270,
  [SMALL_STATE(253)] = 5278,
  [SMALL_STATE(254)] = 5294,
  [SMALL_STATE(255)] = 5308,
  [SMALL_STATE(256)] = 5322,
  [SMALL_STATE(257)] = 5336,
  [SMALL_STATE(258)] = 5344,
  [SMALL_STATE(259)] = 5352,
  [SMALL_STATE(260)] = 5368,
  [SMALL_STATE(261)] = 5382,
  [SMALL_STATE(262)] = 5398,
  [SMALL_STATE(263)] = 5406,
  [SMALL_STATE(264)] = 5420,
  [SMALL_STATE(265)] = 5434,
  [SMALL_STATE(266)] = 5450,
  [SMALL_STATE(267)] = 5466,
  [SMALL_STATE(268)] = 5480,
  [SMALL_STATE(269)] = 5494,
  [SMALL_STATE(270)] = 5508,
  [SMALL_STATE(271)] = 5522,
  [SMALL_STATE(272)] = 5536,
  [SMALL_STATE(273)] = 5550,
  [SMALL_STATE(274)] = 5564,
  [SMALL_STATE(275)] = 5578,
  [SMALL_STATE(276)] = 5592,
  [SMALL_STATE(277)] = 5606,
  [SMALL_STATE(278)] = 5620,
  [SMALL_STATE(279)] = 5628,
  [SMALL_STATE(280)] = 5636,
  [SMALL_STATE(281)] = 5644,
  [SMALL_STATE(282)] = 5652,
  [SMALL_STATE(283)] = 5660,
  [SMALL_STATE(284)] = 5668,
  [SMALL_STATE(285)] = 5676,
  [SMALL_STATE(286)] = 5684,
  [SMALL_STATE(287)] = 5692,
  [SMALL_STATE(288)] = 5700,
  [SMALL_STATE(289)] = 5708,
  [SMALL_STATE(290)] = 5716,
  [SMALL_STATE(291)] = 5724,
  [SMALL_STATE(292)] = 5732,
  [SMALL_STATE(293)] = 5740,
  [SMALL_STATE(294)] = 5748,
  [SMALL_STATE(295)] = 5756,
  [SMALL_STATE(296)] = 5764,
  [SMALL_STATE(297)] = 5772,
  [SMALL_STATE(298)] = 5780,
  [SMALL_STATE(299)] = 5788,
  [SMALL_STATE(300)] = 5796,
  [SMALL_STATE(301)] = 5804,
  [SMALL_STATE(302)] = 5812,
  [SMALL_STATE(303)] = 5820,
  [SMALL_STATE(304)] = 5828,
  [SMALL_STATE(305)] = 5836,
  [SMALL_STATE(306)] = 5844,
  [SMALL_STATE(307)] = 5852,
  [SMALL_STATE(308)] = 5860,
  [SMALL_STATE(309)] = 5868,
  [SMALL_STATE(310)] = 5876,
  [SMALL_STATE(311)] = 5884,
  [SMALL_STATE(312)] = 5892,
  [SMALL_STATE(313)] = 5900,
  [SMALL_STATE(314)] = 5908,
  [SMALL_STATE(315)] = 5916,
  [SMALL_STATE(316)] = 5924,
  [SMALL_STATE(317)] = 5932,
  [SMALL_STATE(318)] = 5940,
  [SMALL_STATE(319)] = 5948,
  [SMALL_STATE(320)] = 5956,
  [SMALL_STATE(321)] = 5970,
  [SMALL_STATE(322)] = 5978,
  [SMALL_STATE(323)] = 5986,
  [SMALL_STATE(324)] = 5994,
  [SMALL_STATE(325)] = 6002,
  [SMALL_STATE(326)] = 6010,
  [SMALL_STATE(327)] = 6018,
  [SMALL_STATE(328)] = 6026,
  [SMALL_STATE(329)] = 6034,
  [SMALL_STATE(330)] = 6042,
  [SMALL_STATE(331)] = 6050,
  [SMALL_STATE(332)] = 6058,
  [SMALL_STATE(333)] = 6066,
  [SMALL_STATE(334)] = 6074,
  [SMALL_STATE(335)] = 6082,
  [SMALL_STATE(336)] = 6090,
  [SMALL_STATE(337)] = 6098,
  [SMALL_STATE(338)] = 6106,
  [SMALL_STATE(339)] = 6114,
  [SMALL_STATE(340)] = 6122,
  [SMALL_STATE(341)] = 6130,
  [SMALL_STATE(342)] = 6138,
  [SMALL_STATE(343)] = 6146,
  [SMALL_STATE(344)] = 6154,
  [SMALL_STATE(345)] = 6162,
  [SMALL_STATE(346)] = 6170,
  [SMALL_STATE(347)] = 6178,
  [SMALL_STATE(348)] = 6186,
  [SMALL_STATE(349)] = 6194,
  [SMALL_STATE(350)] = 6202,
  [SMALL_STATE(351)] = 6210,
  [SMALL_STATE(352)] = 6218,
  [SMALL_STATE(353)] = 6226,
  [SMALL_STATE(354)] = 6234,
  [SMALL_STATE(355)] = 6242,
  [SMALL_STATE(356)] = 6250,
  [SMALL_STATE(357)] = 6258,
  [SMALL_STATE(358)] = 6266,
  [SMALL_STATE(359)] = 6274,
  [SMALL_STATE(360)] = 6282,
  [SMALL_STATE(361)] = 6290,
  [SMALL_STATE(362)] = 6304,
  [SMALL_STATE(363)] = 6312,
  [SMALL_STATE(364)] = 6320,
  [SMALL_STATE(365)] = 6328,
  [SMALL_STATE(366)] = 6336,
  [SMALL_STATE(367)] = 6344,
  [SMALL_STATE(368)] = 6352,
  [SMALL_STATE(369)] = 6360,
  [SMALL_STATE(370)] = 6368,
  [SMALL_STATE(371)] = 6376,
  [SMALL_STATE(372)] = 6390,
  [SMALL_STATE(373)] = 6398,
  [SMALL_STATE(374)] = 6406,
  [SMALL_STATE(375)] = 6414,
  [SMALL_STATE(376)] = 6422,
  [SMALL_STATE(377)] = 6430,
  [SMALL_STATE(378)] = 6438,
  [SMALL_STATE(379)] = 6446,
  [SMALL_STATE(380)] = 6454,
  [SMALL_STATE(381)] = 6462,
  [SMALL_STATE(382)] = 6470,
  [SMALL_STATE(383)] = 6478,
  [SMALL_STATE(384)] = 6486,
  [SMALL_STATE(385)] = 6494,
  [SMALL_STATE(386)] = 6502,
  [SMALL_STATE(387)] = 6510,
  [SMALL_STATE(388)] = 6518,
  [SMALL_STATE(389)] = 6526,
  [SMALL_STATE(390)] = 6534,
  [SMALL_STATE(391)] = 6542,
  [SMALL_STATE(392)] = 6550,
  [SMALL_STATE(393)] = 6560,
  [SMALL_STATE(394)] = 6568,
  [SMALL_STATE(395)] = 6576,
  [SMALL_STATE(396)] = 6584,
  [SMALL_STATE(397)] = 6594,
  [SMALL_STATE(398)] = 6604,
  [SMALL_STATE(399)] = 6614,
  [SMALL_STATE(400)] = 6624,
  [SMALL_STATE(401)] = 6634,
  [SMALL_STATE(402)] = 6648,
  [SMALL_STATE(403)] = 6662,
  [SMALL_STATE(404)] = 6670,
  [SMALL_STATE(405)] = 6678,
  [SMALL_STATE(406)] = 6686,
  [SMALL_STATE(407)] = 6694,
  [SMALL_STATE(408)] = 6702,
  [SMALL_STATE(409)] = 6710,
  [SMALL_STATE(410)] = 6718,
  [SMALL_STATE(411)] = 6726,
  [SMALL_STATE(412)] = 6734,
  [SMALL_STATE(413)] = 6742,
  [SMALL_STATE(414)] = 6750,
  [SMALL_STATE(415)] = 6764,
  [SMALL_STATE(416)] = 6772,
  [SMALL_STATE(417)] = 6780,
  [SMALL_STATE(418)] = 6788,
  [SMALL_STATE(419)] = 6796,
  [SMALL_STATE(420)] = 6804,
  [SMALL_STATE(421)] = 6812,
  [SMALL_STATE(422)] = 6820,
  [SMALL_STATE(423)] = 6828,
  [SMALL_STATE(424)] = 6842,
  [SMALL_STATE(425)] = 6850,
  [SMALL_STATE(426)] = 6858,
  [SMALL_STATE(427)] = 6866,
  [SMALL_STATE(428)] = 6874,
  [SMALL_STATE(429)] = 6882,
  [SMALL_STATE(430)] = 6890,
  [SMALL_STATE(431)] = 6898,
  [SMALL_STATE(432)] = 6906,
  [SMALL_STATE(433)] = 6914,
  [SMALL_STATE(434)] = 6922,
  [SMALL_STATE(435)] = 6930,
  [SMALL_STATE(436)] = 6938,
  [SMALL_STATE(437)] = 6946,
  [SMALL_STATE(438)] = 6954,
  [SMALL_STATE(439)] = 6962,
  [SMALL_STATE(440)] = 6970,
  [SMALL_STATE(441)] = 6984,
  [SMALL_STATE(442)] = 6992,
  [SMALL_STATE(443)] = 7006,
  [SMALL_STATE(444)] = 7020,
  [SMALL_STATE(445)] = 7034,
  [SMALL_STATE(446)] = 7050,
  [SMALL_STATE(447)] = 7066,
  [SMALL_STATE(448)] = 7082,
  [SMALL_STATE(449)] = 7090,
  [SMALL_STATE(450)] = 7106,
  [SMALL_STATE(451)] = 7122,
  [SMALL_STATE(452)] = 7138,
  [SMALL_STATE(453)] = 7154,
  [SMALL_STATE(454)] = 7168,
  [SMALL_STATE(455)] = 7182,
  [SMALL_STATE(456)] = 7198,
  [SMALL_STATE(457)] = 7214,
  [SMALL_STATE(458)] = 7230,
  [SMALL_STATE(459)] = 7246,
  [SMALL_STATE(460)] = 7260,
  [SMALL_STATE(461)] = 7274,
  [SMALL_STATE(462)] = 7290,
  [SMALL_STATE(463)] = 7304,
  [SMALL_STATE(464)] = 7320,
  [SMALL_STATE(465)] = 7336,
  [SMALL_STATE(466)] = 7352,
  [SMALL_STATE(467)] = 7366,
  [SMALL_STATE(468)] = 7380,
  [SMALL_STATE(469)] = 7394,
  [SMALL_STATE(470)] = 7410,
  [SMALL_STATE(471)] = 7424,
  [SMALL_STATE(472)] = 7438,
  [SMALL_STATE(473)] = 7452,
  [SMALL_STATE(474)] = 7468,
  [SMALL_STATE(475)] = 7482,
  [SMALL_STATE(476)] = 7496,
  [SMALL_STATE(477)] = 7512,
  [SMALL_STATE(478)] = 7528,
  [SMALL_STATE(479)] = 7542,
  [SMALL_STATE(480)] = 7558,
  [SMALL_STATE(481)] = 7574,
  [SMALL_STATE(482)] = 7582,
  [SMALL_STATE(483)] = 7596,
  [SMALL_STATE(484)] = 7610,
  [SMALL_STATE(485)] = 7618,
  [SMALL_STATE(486)] = 7625,
  [SMALL_STATE(487)] = 7636,
  [SMALL_STATE(488)] = 7643,
  [SMALL_STATE(489)] = 7654,
  [SMALL_STATE(490)] = 7661,
  [SMALL_STATE(491)] = 7668,
  [SMALL_STATE(492)] = 7675,
  [SMALL_STATE(493)] = 7688,
  [SMALL_STATE(494)] = 7697,
  [SMALL_STATE(495)] = 7704,
  [SMALL_STATE(496)] = 7711,
  [SMALL_STATE(497)] = 7718,
  [SMALL_STATE(498)] = 7725,
  [SMALL_STATE(499)] = 7732,
  [SMALL_STATE(500)] = 7739,
  [SMALL_STATE(501)] = 7746,
  [SMALL_STATE(502)] = 7753,
  [SMALL_STATE(503)] = 7760,
  [SMALL_STATE(504)] = 7767,
  [SMALL_STATE(505)] = 7774,
  [SMALL_STATE(506)] = 7781,
  [SMALL_STATE(507)] = 7788,
  [SMALL_STATE(508)] = 7795,
  [SMALL_STATE(509)] = 7802,
  [SMALL_STATE(510)] = 7809,
  [SMALL_STATE(511)] = 7816,
  [SMALL_STATE(512)] = 7823,
  [SMALL_STATE(513)] = 7830,
  [SMALL_STATE(514)] = 7837,
  [SMALL_STATE(515)] = 7844,
  [SMALL_STATE(516)] = 7851,
  [SMALL_STATE(517)] = 7858,
  [SMALL_STATE(518)] = 7865,
  [SMALL_STATE(519)] = 7872,
  [SMALL_STATE(520)] = 7879,
  [SMALL_STATE(521)] = 7886,
  [SMALL_STATE(522)] = 7893,
  [SMALL_STATE(523)] = 7900,
  [SMALL_STATE(524)] = 7907,
  [SMALL_STATE(525)] = 7914,
  [SMALL_STATE(526)] = 7925,
  [SMALL_STATE(527)] = 7932,
  [SMALL_STATE(528)] = 7945,
  [SMALL_STATE(529)] = 7952,
  [SMALL_STATE(530)] = 7965,
  [SMALL_STATE(531)] = 7972,
  [SMALL_STATE(532)] = 7985,
  [SMALL_STATE(533)] = 7996,
  [SMALL_STATE(534)] = 8007,
  [SMALL_STATE(535)] = 8014,
  [SMALL_STATE(536)] = 8021,
  [SMALL_STATE(537)] = 8028,
  [SMALL_STATE(538)] = 8035,
  [SMALL_STATE(539)] = 8048,
  [SMALL_STATE(540)] = 8055,
  [SMALL_STATE(541)] = 8062,
  [SMALL_STATE(542)] = 8075,
  [SMALL_STATE(543)] = 8082,
  [SMALL_STATE(544)] = 8095,
  [SMALL_STATE(545)] = 8108,
  [SMALL_STATE(546)] = 8121,
  [SMALL_STATE(547)] = 8128,
  [SMALL_STATE(548)] = 8135,
  [SMALL_STATE(549)] = 8142,
  [SMALL_STATE(550)] = 8153,
  [SMALL_STATE(551)] = 8160,
  [SMALL_STATE(552)] = 8167,
  [SMALL_STATE(553)] = 8174,
  [SMALL_STATE(554)] = 8181,
  [SMALL_STATE(555)] = 8188,
  [SMALL_STATE(556)] = 8195,
  [SMALL_STATE(557)] = 8202,
  [SMALL_STATE(558)] = 8209,
  [SMALL_STATE(559)] = 8216,
  [SMALL_STATE(560)] = 8223,
  [SMALL_STATE(561)] = 8230,
  [SMALL_STATE(562)] = 8237,
  [SMALL_STATE(563)] = 8244,
  [SMALL_STATE(564)] = 8251,
  [SMALL_STATE(565)] = 8258,
  [SMALL_STATE(566)] = 8265,
  [SMALL_STATE(567)] = 8272,
  [SMALL_STATE(568)] = 8279,
  [SMALL_STATE(569)] = 8286,
  [SMALL_STATE(570)] = 8293,
  [SMALL_STATE(571)] = 8300,
  [SMALL_STATE(572)] = 8307,
  [SMALL_STATE(573)] = 8314,
  [SMALL_STATE(574)] = 8321,
  [SMALL_STATE(575)] = 8328,
  [SMALL_STATE(576)] = 8335,
  [SMALL_STATE(577)] = 8342,
  [SMALL_STATE(578)] = 8349,
  [SMALL_STATE(579)] = 8356,
  [SMALL_STATE(580)] = 8363,
  [SMALL_STATE(581)] = 8370,
  [SMALL_STATE(582)] = 8377,
  [SMALL_STATE(583)] = 8384,
  [SMALL_STATE(584)] = 8397,
  [SMALL_STATE(585)] = 8410,
  [SMALL_STATE(586)] = 8421,
  [SMALL_STATE(587)] = 8428,
  [SMALL_STATE(588)] = 8441,
  [SMALL_STATE(589)] = 8448,
  [SMALL_STATE(590)] = 8455,
  [SMALL_STATE(591)] = 8462,
  [SMALL_STATE(592)] = 8469,
  [SMALL_STATE(593)] = 8476,
  [SMALL_STATE(594)] = 8487,
  [SMALL_STATE(595)] = 8494,
  [SMALL_STATE(596)] = 8501,
  [SMALL_STATE(597)] = 8508,
  [SMALL_STATE(598)] = 8515,
  [SMALL_STATE(599)] = 8522,
  [SMALL_STATE(600)] = 8529,
  [SMALL_STATE(601)] = 8536,
  [SMALL_STATE(602)] = 8543,
  [SMALL_STATE(603)] = 8550,
  [SMALL_STATE(604)] = 8557,
  [SMALL_STATE(605)] = 8564,
  [SMALL_STATE(606)] = 8571,
  [SMALL_STATE(607)] = 8578,
  [SMALL_STATE(608)] = 8585,
  [SMALL_STATE(609)] = 8596,
  [SMALL_STATE(610)] = 8607,
  [SMALL_STATE(611)] = 8618,
  [SMALL_STATE(612)] = 8625,
  [SMALL_STATE(613)] = 8638,
  [SMALL_STATE(614)] = 8645,
  [SMALL_STATE(615)] = 8652,
  [SMALL_STATE(616)] = 8659,
  [SMALL_STATE(617)] = 8672,
  [SMALL_STATE(618)] = 8685,
  [SMALL_STATE(619)] = 8692,
  [SMALL_STATE(620)] = 8699,
  [SMALL_STATE(621)] = 8706,
  [SMALL_STATE(622)] = 8713,
  [SMALL_STATE(623)] = 8720,
  [SMALL_STATE(624)] = 8727,
  [SMALL_STATE(625)] = 8734,
  [SMALL_STATE(626)] = 8741,
  [SMALL_STATE(627)] = 8748,
  [SMALL_STATE(628)] = 8755,
  [SMALL_STATE(629)] = 8762,
  [SMALL_STATE(630)] = 8769,
  [SMALL_STATE(631)] = 8776,
  [SMALL_STATE(632)] = 8783,
  [SMALL_STATE(633)] = 8790,
  [SMALL_STATE(634)] = 8797,
  [SMALL_STATE(635)] = 8804,
  [SMALL_STATE(636)] = 8811,
  [SMALL_STATE(637)] = 8818,
  [SMALL_STATE(638)] = 8825,
  [SMALL_STATE(639)] = 8832,
  [SMALL_STATE(640)] = 8839,
  [SMALL_STATE(641)] = 8846,
  [SMALL_STATE(642)] = 8853,
  [SMALL_STATE(643)] = 8860,
  [SMALL_STATE(644)] = 8867,
  [SMALL_STATE(645)] = 8874,
  [SMALL_STATE(646)] = 8881,
  [SMALL_STATE(647)] = 8888,
  [SMALL_STATE(648)] = 8895,
  [SMALL_STATE(649)] = 8902,
  [SMALL_STATE(650)] = 8909,
  [SMALL_STATE(651)] = 8916,
  [SMALL_STATE(652)] = 8923,
  [SMALL_STATE(653)] = 8930,
  [SMALL_STATE(654)] = 8937,
  [SMALL_STATE(655)] = 8944,
  [SMALL_STATE(656)] = 8951,
  [SMALL_STATE(657)] = 8958,
  [SMALL_STATE(658)] = 8965,
  [SMALL_STATE(659)] = 8978,
  [SMALL_STATE(660)] = 8985,
  [SMALL_STATE(661)] = 8992,
  [SMALL_STATE(662)] = 8999,
  [SMALL_STATE(663)] = 9006,
  [SMALL_STATE(664)] = 9013,
  [SMALL_STATE(665)] = 9022,
  [SMALL_STATE(666)] = 9031,
  [SMALL_STATE(667)] = 9042,
  [SMALL_STATE(668)] = 9055,
  [SMALL_STATE(669)] = 9062,
  [SMALL_STATE(670)] = 9075,
  [SMALL_STATE(671)] = 9082,
  [SMALL_STATE(672)] = 9089,
  [SMALL_STATE(673)] = 9096,
  [SMALL_STATE(674)] = 9103,
  [SMALL_STATE(675)] = 9110,
  [SMALL_STATE(676)] = 9117,
  [SMALL_STATE(677)] = 9124,
  [SMALL_STATE(678)] = 9131,
  [SMALL_STATE(679)] = 9138,
  [SMALL_STATE(680)] = 9145,
  [SMALL_STATE(681)] = 9152,
  [SMALL_STATE(682)] = 9159,
  [SMALL_STATE(683)] = 9166,
  [SMALL_STATE(684)] = 9179,
  [SMALL_STATE(685)] = 9192,
  [SMALL_STATE(686)] = 9199,
  [SMALL_STATE(687)] = 9206,
  [SMALL_STATE(688)] = 9213,
  [SMALL_STATE(689)] = 9224,
  [SMALL_STATE(690)] = 9231,
  [SMALL_STATE(691)] = 9244,
  [SMALL_STATE(692)] = 9257,
  [SMALL_STATE(693)] = 9264,
  [SMALL_STATE(694)] = 9271,
  [SMALL_STATE(695)] = 9278,
  [SMALL_STATE(696)] = 9285,
  [SMALL_STATE(697)] = 9292,
  [SMALL_STATE(698)] = 9301,
  [SMALL_STATE(699)] = 9308,
  [SMALL_STATE(700)] = 9315,
  [SMALL_STATE(701)] = 9322,
  [SMALL_STATE(702)] = 9335,
  [SMALL_STATE(703)] = 9342,
  [SMALL_STATE(704)] = 9349,
  [SMALL_STATE(705)] = 9356,
  [SMALL_STATE(706)] = 9363,
  [SMALL_STATE(707)] = 9370,
  [SMALL_STATE(708)] = 9383,
  [SMALL_STATE(709)] = 9390,
  [SMALL_STATE(710)] = 9397,
  [SMALL_STATE(711)] = 9410,
  [SMALL_STATE(712)] = 9417,
  [SMALL_STATE(713)] = 9430,
  [SMALL_STATE(714)] = 9443,
  [SMALL_STATE(715)] = 9456,
  [SMALL_STATE(716)] = 9463,
  [SMALL_STATE(717)] = 9476,
  [SMALL_STATE(718)] = 9489,
  [SMALL_STATE(719)] = 9496,
  [SMALL_STATE(720)] = 9509,
  [SMALL_STATE(721)] = 9516,
  [SMALL_STATE(722)] = 9523,
  [SMALL_STATE(723)] = 9536,
  [SMALL_STATE(724)] = 9543,
  [SMALL_STATE(725)] = 9556,
  [SMALL_STATE(726)] = 9565,
  [SMALL_STATE(727)] = 9572,
  [SMALL_STATE(728)] = 9585,
  [SMALL_STATE(729)] = 9592,
  [SMALL_STATE(730)] = 9599,
  [SMALL_STATE(731)] = 9612,
  [SMALL_STATE(732)] = 9625,
  [SMALL_STATE(733)] = 9632,
  [SMALL_STATE(734)] = 9645,
  [SMALL_STATE(735)] = 9652,
  [SMALL_STATE(736)] = 9659,
  [SMALL_STATE(737)] = 9666,
  [SMALL_STATE(738)] = 9679,
  [SMALL_STATE(739)] = 9692,
  [SMALL_STATE(740)] = 9699,
  [SMALL_STATE(741)] = 9706,
  [SMALL_STATE(742)] = 9713,
  [SMALL_STATE(743)] = 9720,
  [SMALL_STATE(744)] = 9727,
  [SMALL_STATE(745)] = 9734,
  [SMALL_STATE(746)] = 9741,
  [SMALL_STATE(747)] = 9752,
  [SMALL_STATE(748)] = 9763,
  [SMALL_STATE(749)] = 9770,
  [SMALL_STATE(750)] = 9777,
  [SMALL_STATE(751)] = 9788,
  [SMALL_STATE(752)] = 9799,
  [SMALL_STATE(753)] = 9806,
  [SMALL_STATE(754)] = 9815,
  [SMALL_STATE(755)] = 9822,
  [SMALL_STATE(756)] = 9835,
  [SMALL_STATE(757)] = 9842,
  [SMALL_STATE(758)] = 9849,
  [SMALL_STATE(759)] = 9856,
  [SMALL_STATE(760)] = 9863,
  [SMALL_STATE(761)] = 9870,
  [SMALL_STATE(762)] = 9877,
  [SMALL_STATE(763)] = 9888,
  [SMALL_STATE(764)] = 9899,
  [SMALL_STATE(765)] = 9910,
  [SMALL_STATE(766)] = 9921,
  [SMALL_STATE(767)] = 9930,
  [SMALL_STATE(768)] = 9937,
  [SMALL_STATE(769)] = 9944,
  [SMALL_STATE(770)] = 9951,
  [SMALL_STATE(771)] = 9958,
  [SMALL_STATE(772)] = 9969,
  [SMALL_STATE(773)] = 9980,
  [SMALL_STATE(774)] = 9991,
  [SMALL_STATE(775)] = 9998,
  [SMALL_STATE(776)] = 10005,
  [SMALL_STATE(777)] = 10011,
  [SMALL_STATE(778)] = 10021,
  [SMALL_STATE(779)] = 10027,
  [SMALL_STATE(780)] = 10037,
  [SMALL_STATE(781)] = 10047,
  [SMALL_STATE(782)] = 10057,
  [SMALL_STATE(783)] = 10067,
  [SMALL_STATE(784)] = 10077,
  [SMALL_STATE(785)] = 10083,
  [SMALL_STATE(786)] = 10093,
  [SMALL_STATE(787)] = 10103,
  [SMALL_STATE(788)] = 10113,
  [SMALL_STATE(789)] = 10123,
  [SMALL_STATE(790)] = 10129,
  [SMALL_STATE(791)] = 10139,
  [SMALL_STATE(792)] = 10145,
  [SMALL_STATE(793)] = 10153,
  [SMALL_STATE(794)] = 10163,
  [SMALL_STATE(795)] = 10173,
  [SMALL_STATE(796)] = 10183,
  [SMALL_STATE(797)] = 10189,
  [SMALL_STATE(798)] = 10195,
  [SMALL_STATE(799)] = 10201,
  [SMALL_STATE(800)] = 10209,
  [SMALL_STATE(801)] = 10217,
  [SMALL_STATE(802)] = 10225,
  [SMALL_STATE(803)] = 10235,
  [SMALL_STATE(804)] = 10243,
  [SMALL_STATE(805)] = 10253,
  [SMALL_STATE(806)] = 10263,
  [SMALL_STATE(807)] = 10273,
  [SMALL_STATE(808)] = 10283,
  [SMALL_STATE(809)] = 10293,
  [SMALL_STATE(810)] = 10303,
  [SMALL_STATE(811)] = 10313,
  [SMALL_STATE(812)] = 10323,
  [SMALL_STATE(813)] = 10329,
  [SMALL_STATE(814)] = 10339,
  [SMALL_STATE(815)] = 10349,
  [SMALL_STATE(816)] = 10359,
  [SMALL_STATE(817)] = 10365,
  [SMALL_STATE(818)] = 10371,
  [SMALL_STATE(819)] = 10381,
  [SMALL_STATE(820)] = 10391,
  [SMALL_STATE(821)] = 10401,
  [SMALL_STATE(822)] = 10407,
  [SMALL_STATE(823)] = 10413,
  [SMALL_STATE(824)] = 10421,
  [SMALL_STATE(825)] = 10431,
  [SMALL_STATE(826)] = 10441,
  [SMALL_STATE(827)] = 10451,
  [SMALL_STATE(828)] = 10461,
  [SMALL_STATE(829)] = 10471,
  [SMALL_STATE(830)] = 10477,
  [SMALL_STATE(831)] = 10487,
  [SMALL_STATE(832)] = 10497,
  [SMALL_STATE(833)] = 10503,
  [SMALL_STATE(834)] = 10509,
  [SMALL_STATE(835)] = 10519,
  [SMALL_STATE(836)] = 10529,
  [SMALL_STATE(837)] = 10539,
  [SMALL_STATE(838)] = 10549,
  [SMALL_STATE(839)] = 10559,
  [SMALL_STATE(840)] = 10565,
  [SMALL_STATE(841)] = 10571,
  [SMALL_STATE(842)] = 10577,
  [SMALL_STATE(843)] = 10583,
  [SMALL_STATE(844)] = 10589,
  [SMALL_STATE(845)] = 10595,
  [SMALL_STATE(846)] = 10601,
  [SMALL_STATE(847)] = 10607,
  [SMALL_STATE(848)] = 10617,
  [SMALL_STATE(849)] = 10623,
  [SMALL_STATE(850)] = 10629,
  [SMALL_STATE(851)] = 10635,
  [SMALL_STATE(852)] = 10641,
  [SMALL_STATE(853)] = 10647,
  [SMALL_STATE(854)] = 10653,
  [SMALL_STATE(855)] = 10663,
  [SMALL_STATE(856)] = 10669,
  [SMALL_STATE(857)] = 10675,
  [SMALL_STATE(858)] = 10685,
  [SMALL_STATE(859)] = 10695,
  [SMALL_STATE(860)] = 10705,
  [SMALL_STATE(861)] = 10715,
  [SMALL_STATE(862)] = 10721,
  [SMALL_STATE(863)] = 10727,
  [SMALL_STATE(864)] = 10737,
  [SMALL_STATE(865)] = 10747,
  [SMALL_STATE(866)] = 10757,
  [SMALL_STATE(867)] = 10767,
  [SMALL_STATE(868)] = 10777,
  [SMALL_STATE(869)] = 10787,
  [SMALL_STATE(870)] = 10797,
  [SMALL_STATE(871)] = 10807,
  [SMALL_STATE(872)] = 10817,
  [SMALL_STATE(873)] = 10823,
  [SMALL_STATE(874)] = 10829,
  [SMALL_STATE(875)] = 10835,
  [SMALL_STATE(876)] = 10845,
  [SMALL_STATE(877)] = 10851,
  [SMALL_STATE(878)] = 10857,
  [SMALL_STATE(879)] = 10863,
  [SMALL_STATE(880)] = 10873,
  [SMALL_STATE(881)] = 10883,
  [SMALL_STATE(882)] = 10893,
  [SMALL_STATE(883)] = 10899,
  [SMALL_STATE(884)] = 10905,
  [SMALL_STATE(885)] = 10915,
  [SMALL_STATE(886)] = 10925,
  [SMALL_STATE(887)] = 10935,
  [SMALL_STATE(888)] = 10945,
  [SMALL_STATE(889)] = 10951,
  [SMALL_STATE(890)] = 10961,
  [SMALL_STATE(891)] = 10971,
  [SMALL_STATE(892)] = 10981,
  [SMALL_STATE(893)] = 10991,
  [SMALL_STATE(894)] = 10997,
  [SMALL_STATE(895)] = 11003,
  [SMALL_STATE(896)] = 11013,
  [SMALL_STATE(897)] = 11023,
  [SMALL_STATE(898)] = 11033,
  [SMALL_STATE(899)] = 11043,
  [SMALL_STATE(900)] = 11053,
  [SMALL_STATE(901)] = 11059,
  [SMALL_STATE(902)] = 11069,
  [SMALL_STATE(903)] = 11075,
  [SMALL_STATE(904)] = 11085,
  [SMALL_STATE(905)] = 11095,
  [SMALL_STATE(906)] = 11105,
  [SMALL_STATE(907)] = 11115,
  [SMALL_STATE(908)] = 11123,
  [SMALL_STATE(909)] = 11129,
  [SMALL_STATE(910)] = 11139,
  [SMALL_STATE(911)] = 11149,
  [SMALL_STATE(912)] = 11157,
  [SMALL_STATE(913)] = 11167,
  [SMALL_STATE(914)] = 11177,
  [SMALL_STATE(915)] = 11187,
  [SMALL_STATE(916)] = 11197,
  [SMALL_STATE(917)] = 11203,
  [SMALL_STATE(918)] = 11211,
  [SMALL_STATE(919)] = 11221,
  [SMALL_STATE(920)] = 11231,
  [SMALL_STATE(921)] = 11241,
  [SMALL_STATE(922)] = 11251,
  [SMALL_STATE(923)] = 11259,
  [SMALL_STATE(924)] = 11269,
  [SMALL_STATE(925)] = 11279,
  [SMALL_STATE(926)] = 11289,
  [SMALL_STATE(927)] = 11299,
  [SMALL_STATE(928)] = 11309,
  [SMALL_STATE(929)] = 11319,
  [SMALL_STATE(930)] = 11329,
  [SMALL_STATE(931)] = 11339,
  [SMALL_STATE(932)] = 11349,
  [SMALL_STATE(933)] = 11359,
  [SMALL_STATE(934)] = 11369,
  [SMALL_STATE(935)] = 11379,
  [SMALL_STATE(936)] = 11389,
  [SMALL_STATE(937)] = 11399,
  [SMALL_STATE(938)] = 11409,
  [SMALL_STATE(939)] = 11419,
  [SMALL_STATE(940)] = 11429,
  [SMALL_STATE(941)] = 11439,
  [SMALL_STATE(942)] = 11449,
  [SMALL_STATE(943)] = 11459,
  [SMALL_STATE(944)] = 11469,
  [SMALL_STATE(945)] = 11479,
  [SMALL_STATE(946)] = 11489,
  [SMALL_STATE(947)] = 11499,
  [SMALL_STATE(948)] = 11509,
  [SMALL_STATE(949)] = 11515,
  [SMALL_STATE(950)] = 11525,
  [SMALL_STATE(951)] = 11535,
  [SMALL_STATE(952)] = 11545,
  [SMALL_STATE(953)] = 11553,
  [SMALL_STATE(954)] = 11563,
  [SMALL_STATE(955)] = 11573,
  [SMALL_STATE(956)] = 11583,
  [SMALL_STATE(957)] = 11593,
  [SMALL_STATE(958)] = 11601,
  [SMALL_STATE(959)] = 11611,
  [SMALL_STATE(960)] = 11621,
  [SMALL_STATE(961)] = 11631,
  [SMALL_STATE(962)] = 11641,
  [SMALL_STATE(963)] = 11651,
  [SMALL_STATE(964)] = 11661,
  [SMALL_STATE(965)] = 11671,
  [SMALL_STATE(966)] = 11681,
  [SMALL_STATE(967)] = 11689,
  [SMALL_STATE(968)] = 11699,
  [SMALL_STATE(969)] = 11709,
  [SMALL_STATE(970)] = 11719,
  [SMALL_STATE(971)] = 11726,
  [SMALL_STATE(972)] = 11733,
  [SMALL_STATE(973)] = 11738,
  [SMALL_STATE(974)] = 11745,
  [SMALL_STATE(975)] = 11750,
  [SMALL_STATE(976)] = 11757,
  [SMALL_STATE(977)] = 11764,
  [SMALL_STATE(978)] = 11771,
  [SMALL_STATE(979)] = 11776,
  [SMALL_STATE(980)] = 11783,
  [SMALL_STATE(981)] = 11788,
  [SMALL_STATE(982)] = 11795,
  [SMALL_STATE(983)] = 11802,
  [SMALL_STATE(984)] = 11809,
  [SMALL_STATE(985)] = 11814,
  [SMALL_STATE(986)] = 11821,
  [SMALL_STATE(987)] = 11828,
  [SMALL_STATE(988)] = 11835,
  [SMALL_STATE(989)] = 11842,
  [SMALL_STATE(990)] = 11849,
  [SMALL_STATE(991)] = 11856,
  [SMALL_STATE(992)] = 11863,
  [SMALL_STATE(993)] = 11870,
  [SMALL_STATE(994)] = 11877,
  [SMALL_STATE(995)] = 11882,
  [SMALL_STATE(996)] = 11889,
  [SMALL_STATE(997)] = 11896,
  [SMALL_STATE(998)] = 11903,
  [SMALL_STATE(999)] = 11910,
  [SMALL_STATE(1000)] = 11917,
  [SMALL_STATE(1001)] = 11924,
  [SMALL_STATE(1002)] = 11931,
  [SMALL_STATE(1003)] = 11938,
  [SMALL_STATE(1004)] = 11943,
  [SMALL_STATE(1005)] = 11950,
  [SMALL_STATE(1006)] = 11955,
  [SMALL_STATE(1007)] = 11962,
  [SMALL_STATE(1008)] = 11967,
  [SMALL_STATE(1009)] = 11974,
  [SMALL_STATE(1010)] = 11979,
  [SMALL_STATE(1011)] = 11984,
  [SMALL_STATE(1012)] = 11989,
  [SMALL_STATE(1013)] = 11996,
  [SMALL_STATE(1014)] = 12003,
  [SMALL_STATE(1015)] = 12008,
  [SMALL_STATE(1016)] = 12013,
  [SMALL_STATE(1017)] = 12018,
  [SMALL_STATE(1018)] = 12023,
  [SMALL_STATE(1019)] = 12028,
  [SMALL_STATE(1020)] = 12033,
  [SMALL_STATE(1021)] = 12040,
  [SMALL_STATE(1022)] = 12047,
  [SMALL_STATE(1023)] = 12054,
  [SMALL_STATE(1024)] = 12061,
  [SMALL_STATE(1025)] = 12066,
  [SMALL_STATE(1026)] = 12073,
  [SMALL_STATE(1027)] = 12080,
  [SMALL_STATE(1028)] = 12087,
  [SMALL_STATE(1029)] = 12094,
  [SMALL_STATE(1030)] = 12101,
  [SMALL_STATE(1031)] = 12108,
  [SMALL_STATE(1032)] = 12115,
  [SMALL_STATE(1033)] = 12122,
  [SMALL_STATE(1034)] = 12129,
  [SMALL_STATE(1035)] = 12136,
  [SMALL_STATE(1036)] = 12143,
  [SMALL_STATE(1037)] = 12150,
  [SMALL_STATE(1038)] = 12157,
  [SMALL_STATE(1039)] = 12164,
  [SMALL_STATE(1040)] = 12171,
  [SMALL_STATE(1041)] = 12176,
  [SMALL_STATE(1042)] = 12183,
  [SMALL_STATE(1043)] = 12188,
  [SMALL_STATE(1044)] = 12193,
  [SMALL_STATE(1045)] = 12200,
  [SMALL_STATE(1046)] = 12207,
  [SMALL_STATE(1047)] = 12214,
  [SMALL_STATE(1048)] = 12221,
  [SMALL_STATE(1049)] = 12228,
  [SMALL_STATE(1050)] = 12235,
  [SMALL_STATE(1051)] = 12242,
  [SMALL_STATE(1052)] = 12249,
  [SMALL_STATE(1053)] = 12256,
  [SMALL_STATE(1054)] = 12263,
  [SMALL_STATE(1055)] = 12270,
  [SMALL_STATE(1056)] = 12277,
  [SMALL_STATE(1057)] = 12284,
  [SMALL_STATE(1058)] = 12291,
  [SMALL_STATE(1059)] = 12298,
  [SMALL_STATE(1060)] = 12305,
  [SMALL_STATE(1061)] = 12312,
  [SMALL_STATE(1062)] = 12319,
  [SMALL_STATE(1063)] = 12326,
  [SMALL_STATE(1064)] = 12333,
  [SMALL_STATE(1065)] = 12340,
  [SMALL_STATE(1066)] = 12347,
  [SMALL_STATE(1067)] = 12354,
  [SMALL_STATE(1068)] = 12361,
  [SMALL_STATE(1069)] = 12368,
  [SMALL_STATE(1070)] = 12375,
  [SMALL_STATE(1071)] = 12382,
  [SMALL_STATE(1072)] = 12389,
  [SMALL_STATE(1073)] = 12396,
  [SMALL_STATE(1074)] = 12400,
  [SMALL_STATE(1075)] = 12404,
  [SMALL_STATE(1076)] = 12408,
  [SMALL_STATE(1077)] = 12412,
  [SMALL_STATE(1078)] = 12416,
  [SMALL_STATE(1079)] = 12420,
  [SMALL_STATE(1080)] = 12424,
  [SMALL_STATE(1081)] = 12428,
  [SMALL_STATE(1082)] = 12432,
  [SMALL_STATE(1083)] = 12436,
  [SMALL_STATE(1084)] = 12440,
  [SMALL_STATE(1085)] = 12444,
  [SMALL_STATE(1086)] = 12448,
  [SMALL_STATE(1087)] = 12452,
  [SMALL_STATE(1088)] = 12456,
  [SMALL_STATE(1089)] = 12460,
  [SMALL_STATE(1090)] = 12464,
  [SMALL_STATE(1091)] = 12468,
  [SMALL_STATE(1092)] = 12472,
  [SMALL_STATE(1093)] = 12476,
  [SMALL_STATE(1094)] = 12480,
  [SMALL_STATE(1095)] = 12484,
  [SMALL_STATE(1096)] = 12488,
  [SMALL_STATE(1097)] = 12492,
  [SMALL_STATE(1098)] = 12496,
  [SMALL_STATE(1099)] = 12500,
  [SMALL_STATE(1100)] = 12504,
  [SMALL_STATE(1101)] = 12508,
  [SMALL_STATE(1102)] = 12512,
  [SMALL_STATE(1103)] = 12516,
  [SMALL_STATE(1104)] = 12520,
  [SMALL_STATE(1105)] = 12524,
  [SMALL_STATE(1106)] = 12528,
  [SMALL_STATE(1107)] = 12532,
  [SMALL_STATE(1108)] = 12536,
  [SMALL_STATE(1109)] = 12540,
  [SMALL_STATE(1110)] = 12544,
  [SMALL_STATE(1111)] = 12548,
  [SMALL_STATE(1112)] = 12552,
  [SMALL_STATE(1113)] = 12556,
  [SMALL_STATE(1114)] = 12560,
  [SMALL_STATE(1115)] = 12564,
  [SMALL_STATE(1116)] = 12568,
  [SMALL_STATE(1117)] = 12572,
  [SMALL_STATE(1118)] = 12576,
  [SMALL_STATE(1119)] = 12580,
  [SMALL_STATE(1120)] = 12584,
  [SMALL_STATE(1121)] = 12588,
  [SMALL_STATE(1122)] = 12592,
  [SMALL_STATE(1123)] = 12596,
  [SMALL_STATE(1124)] = 12600,
  [SMALL_STATE(1125)] = 12604,
  [SMALL_STATE(1126)] = 12608,
  [SMALL_STATE(1127)] = 12612,
  [SMALL_STATE(1128)] = 12616,
  [SMALL_STATE(1129)] = 12620,
  [SMALL_STATE(1130)] = 12624,
  [SMALL_STATE(1131)] = 12628,
  [SMALL_STATE(1132)] = 12632,
  [SMALL_STATE(1133)] = 12636,
  [SMALL_STATE(1134)] = 12640,
  [SMALL_STATE(1135)] = 12644,
  [SMALL_STATE(1136)] = 12648,
  [SMALL_STATE(1137)] = 12652,
  [SMALL_STATE(1138)] = 12656,
  [SMALL_STATE(1139)] = 12660,
  [SMALL_STATE(1140)] = 12664,
  [SMALL_STATE(1141)] = 12668,
  [SMALL_STATE(1142)] = 12672,
  [SMALL_STATE(1143)] = 12676,
  [SMALL_STATE(1144)] = 12680,
  [SMALL_STATE(1145)] = 12684,
  [SMALL_STATE(1146)] = 12688,
  [SMALL_STATE(1147)] = 12692,
  [SMALL_STATE(1148)] = 12696,
  [SMALL_STATE(1149)] = 12700,
  [SMALL_STATE(1150)] = 12704,
  [SMALL_STATE(1151)] = 12708,
  [SMALL_STATE(1152)] = 12712,
  [SMALL_STATE(1153)] = 12716,
  [SMALL_STATE(1154)] = 12720,
  [SMALL_STATE(1155)] = 12724,
  [SMALL_STATE(1156)] = 12728,
  [SMALL_STATE(1157)] = 12732,
  [SMALL_STATE(1158)] = 12736,
  [SMALL_STATE(1159)] = 12740,
  [SMALL_STATE(1160)] = 12744,
  [SMALL_STATE(1161)] = 12748,
  [SMALL_STATE(1162)] = 12752,
  [SMALL_STATE(1163)] = 12756,
  [SMALL_STATE(1164)] = 12760,
  [SMALL_STATE(1165)] = 12764,
  [SMALL_STATE(1166)] = 12768,
  [SMALL_STATE(1167)] = 12772,
  [SMALL_STATE(1168)] = 12776,
  [SMALL_STATE(1169)] = 12780,
  [SMALL_STATE(1170)] = 12784,
  [SMALL_STATE(1171)] = 12788,
  [SMALL_STATE(1172)] = 12792,
  [SMALL_STATE(1173)] = 12796,
  [SMALL_STATE(1174)] = 12800,
  [SMALL_STATE(1175)] = 12804,
  [SMALL_STATE(1176)] = 12808,
  [SMALL_STATE(1177)] = 12812,
  [SMALL_STATE(1178)] = 12816,
  [SMALL_STATE(1179)] = 12820,
  [SMALL_STATE(1180)] = 12824,
  [SMALL_STATE(1181)] = 12828,
  [SMALL_STATE(1182)] = 12832,
  [SMALL_STATE(1183)] = 12836,
  [SMALL_STATE(1184)] = 12840,
  [SMALL_STATE(1185)] = 12844,
  [SMALL_STATE(1186)] = 12848,
  [SMALL_STATE(1187)] = 12852,
  [SMALL_STATE(1188)] = 12856,
  [SMALL_STATE(1189)] = 12860,
  [SMALL_STATE(1190)] = 12864,
  [SMALL_STATE(1191)] = 12868,
  [SMALL_STATE(1192)] = 12872,
  [SMALL_STATE(1193)] = 12876,
  [SMALL_STATE(1194)] = 12880,
  [SMALL_STATE(1195)] = 12884,
  [SMALL_STATE(1196)] = 12888,
  [SMALL_STATE(1197)] = 12892,
  [SMALL_STATE(1198)] = 12896,
  [SMALL_STATE(1199)] = 12900,
  [SMALL_STATE(1200)] = 12904,
  [SMALL_STATE(1201)] = 12908,
  [SMALL_STATE(1202)] = 12912,
  [SMALL_STATE(1203)] = 12916,
  [SMALL_STATE(1204)] = 12920,
  [SMALL_STATE(1205)] = 12924,
  [SMALL_STATE(1206)] = 12928,
  [SMALL_STATE(1207)] = 12932,
  [SMALL_STATE(1208)] = 12936,
  [SMALL_STATE(1209)] = 12940,
  [SMALL_STATE(1210)] = 12944,
  [SMALL_STATE(1211)] = 12948,
  [SMALL_STATE(1212)] = 12952,
  [SMALL_STATE(1213)] = 12956,
  [SMALL_STATE(1214)] = 12960,
  [SMALL_STATE(1215)] = 12964,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(911),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1161),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1164),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1131),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1212),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(869),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1046),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1162),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1163),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1137),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1209),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(725),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1144),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1144),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(982),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1114),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(876),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1175),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1178),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 80),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 86),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(78),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(158),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(84),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(152),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(1002),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1001),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1169),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1002),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(118),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(154),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 92), SHIFT_REPEAT(3),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1190),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 10),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(399),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(154),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1006),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1045),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1198),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1054),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1158),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1135),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(814),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(835),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(889),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1145),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(563),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 48),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 80),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 48),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [971] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1199),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 66),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 67),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1121),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 75),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 67),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(900),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 29),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 30),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 36),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 37),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 37),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 38),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 39),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 40),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 41),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 42),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 40),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 40),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 44),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 50),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 51),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 52),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 53),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 37),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 37),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 3, -2, 54),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 55),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 31),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 56),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 50),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 39),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 57),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 42),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 58),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 51),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 42),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 60),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 61),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 61),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 42),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 62),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 36),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 4, -2, 68),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 69),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 70),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 71),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 72),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 74),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 39),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 60),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 76),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 60),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 51),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 42),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 60),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 46),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 77),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 79),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 79),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 74),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 76),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 60),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 81),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 82),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 73),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 54),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 54),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 87),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 88),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 54),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 54),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 90),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 95),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 90),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 97),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 93),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 100),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 101),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 97),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 103),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 104),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 105),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [1321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(932),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 94),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 49),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 78),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(959),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(957),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1181),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(820),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [1454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 46),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 91),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 50),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 91),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 83),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 84),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 89),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 96),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [1536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(884),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name, 1, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [1590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [1596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1107),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 49),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 65),
  [1652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 73),
  [1684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 51),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 85),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(870),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1142),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 51),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable, 1, 0, 0),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(593),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [1778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1102),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [1848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 59),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 43),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 63),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [1952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [1958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [2006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 64),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [2150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [2182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [2192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1149),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [2238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [2242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [2248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
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
    [ts_external_token__text_indent] = true,
  },
  [11] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
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
    [ts_external_token__flow_raw_text] = true,
  },
  [14] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__text_indent] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [17] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [19] = {
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [21] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
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
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
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
