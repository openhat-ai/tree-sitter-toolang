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
#define STATE_COUNT 1204
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 292
#define ALIAS_COUNT 0
#define TOKEN_COUNT 138
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 104

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
  sym__bound_operation = 196,
  sym__invalid_collection_operation = 197,
  sym__invalid_spawn_operation = 198,
  sym__invalid_async_await_operation = 199,
  sym_let_statement = 200,
  sym_exec_statement = 201,
  sym_spawn_statement = 202,
  sym__invalid_exec_binding = 203,
  sym__invalid_until_binding = 204,
  sym_run_statement = 205,
  sym__async_modifier = 206,
  sym__run = 207,
  sym__run_after_modifier = 208,
  sym__invalid_modified_run_tail = 209,
  sym_await_statement = 210,
  sym_implicit_run_statement = 211,
  sym__implicit_run_line = 212,
  sym_seek_statement = 213,
  sym_ask_statement = 214,
  sym_generate_statement = 215,
  sym_reduce_statement = 216,
  sym__reduce_inline_line = 217,
  sym__reduce_line = 218,
  sym__reduce_inline_block = 219,
  sym__reduce_text_body = 220,
  sym__from_complement = 221,
  sym_map_statement = 222,
  sym_keep_statement = 223,
  sym_drop_statement = 224,
  sym_sort_statement = 225,
  sym__named_using_complement = 226,
  sym__required_space = 227,
  sym__named_if_complement = 228,
  sym__inline_if_complement = 229,
  sym__named_by_complement = 230,
  sym__inline_by_complement = 231,
  sym__runnable_complements = 232,
  sym__if_complements = 233,
  sym__by_complements = 234,
  sym__lanes_complement = 235,
  sym__order_complement = 236,
  sym_repeat_statement = 237,
  sym_repeat_body = 238,
  sym__repeat_statements = 239,
  sym__window_complement = 240,
  sym__repeat_count_complement = 241,
  sym_until_clause = 242,
  sym_invalid_flow_reserved_statement = 243,
  sym_inline_agic = 244,
  sym_inline_agic_body = 245,
  sym_position = 246,
  sym_runnable = 247,
  sym_agent = 248,
  sym_local_name = 249,
  sym_local_reference = 250,
  sym_directive = 251,
  sym__query_directive_key = 252,
  sym__route_directive_key = 253,
  sym_directive_key = 254,
  sym_directive_op = 255,
  sym_route_value = 256,
  sym_recall_value = 257,
  sym_recall_source = 258,
  sym__directives = 259,
  sym_text_ref = 260,
  sym_messages = 261,
  sym_message = 262,
  sym_unroled_message = 263,
  sym__unroled_message_line = 264,
  sym_invalid_agic_reserved_message = 265,
  sym_role = 266,
  sym__pass_statement = 267,
  sym_flow_lanes_keyword = 268,
  sym__flow_reserved_word = 269,
  sym__collection_binding_word = 270,
  sym__async_await_binding_word = 271,
  sym__agic_reserved_word = 272,
  sym_assign_operator = 273,
  sym_type_name = 274,
  aux_sym_source_file_repeat1 = 275,
  aux_sym_type_repeat1 = 276,
  aux_sym_struct_body_repeat1 = 277,
  aux_sym_struct_body_repeat2 = 278,
  aux_sym__cap_definition_repeat1 = 279,
  aux_sym__cap_text_body_repeat1 = 280,
  aux_sym_job_body_repeat1 = 281,
  aux_sym_text_body_repeat1 = 282,
  aux_sym_params_repeat1 = 283,
  aux_sym_statements_repeat1 = 284,
  aux_sym_implicit_run_statement_repeat1 = 285,
  aux_sym__repeat_statements_repeat1 = 286,
  aux_sym_route_value_repeat1 = 287,
  aux_sym_recall_value_repeat1 = 288,
  aux_sym__directives_repeat1 = 289,
  aux_sym_messages_repeat1 = 290,
  aux_sym_unroled_message_repeat1 = 291,
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
  [53] = {.index = 118, .length = 2},
  [54] = {.index = 120, .length = 3},
  [55] = {.index = 123, .length = 1},
  [56] = {.index = 124, .length = 2},
  [57] = {.index = 126, .length = 2},
  [58] = {.index = 128, .length = 2},
  [59] = {.index = 130, .length = 1},
  [60] = {.index = 131, .length = 3},
  [61] = {.index = 134, .length = 1},
  [62] = {.index = 135, .length = 1},
  [63] = {.index = 136, .length = 2},
  [64] = {.index = 138, .length = 3},
  [65] = {.index = 138, .length = 3},
  [66] = {.index = 141, .length = 2},
  [67] = {.index = 143, .length = 2},
  [68] = {.index = 70, .length = 2},
  [69] = {.index = 145, .length = 2},
  [70] = {.index = 147, .length = 1},
  [71] = {.index = 148, .length = 5},
  [72] = {.index = 153, .length = 1},
  [73] = {.index = 154, .length = 2},
  [74] = {.index = 156, .length = 1},
  [75] = {.index = 157, .length = 3},
  [76] = {.index = 160, .length = 3},
  [77] = {.index = 163, .length = 1},
  [78] = {.index = 164, .length = 2},
  [79] = {.index = 166, .length = 2},
  [80] = {.index = 168, .length = 4},
  [81] = {.index = 172, .length = 1},
  [82] = {.index = 173, .length = 1},
  [83] = {.index = 174, .length = 1},
  [84] = {.index = 175, .length = 2},
  [85] = {.index = 177, .length = 1},
  [86] = {.index = 178, .length = 3},
  [87] = {.index = 181, .length = 3},
  [88] = {.index = 184, .length = 2},
  [89] = {.index = 186, .length = 1},
  [90] = {.index = 187, .length = 2},
  [91] = {.index = 189, .length = 2},
  [92] = {.index = 191, .length = 2},
  [93] = {.index = 193, .length = 1},
  [94] = {.index = 194, .length = 3},
  [95] = {.index = 197, .length = 2},
  [96] = {.index = 199, .length = 3},
  [97] = {.index = 202, .length = 2},
  [98] = {.index = 204, .length = 2},
  [99] = {.index = 206, .length = 2},
  [100] = {.index = 208, .length = 3},
  [101] = {.index = 211, .length = 3},
  [102] = {.index = 214, .length = 2},
  [103] = {.index = 216, .length = 3},
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
    {field_operand, 1},
  [118] =
    {field_agent, 1},
    {field_agic, 2},
  [120] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [123] =
    {field_runnable, 1, .inherited = true},
  [124] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1},
  [126] =
    {field_count, 1},
    {field_side, 0},
  [128] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [130] =
    {field_selection, 1},
  [131] =
    {field_lanes, 2, .inherited = true},
    {field_order, 1, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [134] =
    {field_count, 0},
  [135] =
    {field_window, 1},
  [136] =
    {field_body, 4},
    {field_property, 3, .inherited = true},
  [138] =
    {field_key, 1},
    {field_operator, 2},
    {field_value, 3},
  [141] =
    {field_name, 1},
    {field_value, 3},
  [143] =
    {field_name, 1},
    {field_statement, 3},
  [145] =
    {field_agent, 1},
    {field_runnable, 2},
  [147] =
    {field_runnable, 2},
  [148] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_from, 2, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [153] =
    {field_lanes, 1},
  [154] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [156] =
    {field_agic, 2},
  [157] =
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [160] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [163] =
    {field_statement, 0},
  [164] =
    {field_body, 4},
    {field_window, 1, .inherited = true},
  [166] =
    {field_body, 4},
    {field_count, 1, .inherited = true},
  [168] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [172] =
    {field_name, 1},
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
  [64] = {
    [1] = sym_directive_key,
  },
  [68] = {
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 23,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 27,
  [44] = 44,
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
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 56,
  [59] = 59,
  [60] = 53,
  [61] = 52,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 59,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 69,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 78,
  [83] = 67,
  [84] = 84,
  [85] = 81,
  [86] = 86,
  [87] = 71,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 79,
  [92] = 92,
  [93] = 84,
  [94] = 86,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 88,
  [103] = 103,
  [104] = 95,
  [105] = 105,
  [106] = 74,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 73,
  [113] = 113,
  [114] = 76,
  [115] = 115,
  [116] = 80,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 90,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 92,
  [136] = 99,
  [137] = 137,
  [138] = 138,
  [139] = 89,
  [140] = 96,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 97,
  [146] = 146,
  [147] = 147,
  [148] = 100,
  [149] = 149,
  [150] = 122,
  [151] = 122,
  [152] = 122,
  [153] = 122,
  [154] = 122,
  [155] = 122,
  [156] = 122,
  [157] = 122,
  [158] = 158,
  [159] = 144,
  [160] = 122,
  [161] = 149,
  [162] = 162,
  [163] = 98,
  [164] = 164,
  [165] = 165,
  [166] = 158,
  [167] = 162,
  [168] = 124,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 119,
  [180] = 180,
  [181] = 181,
  [182] = 120,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 103,
  [197] = 197,
  [198] = 198,
  [199] = 169,
  [200] = 200,
  [201] = 107,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 183,
  [207] = 186,
  [208] = 208,
  [209] = 192,
  [210] = 118,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 212,
  [219] = 195,
  [220] = 220,
  [221] = 172,
  [222] = 173,
  [223] = 176,
  [224] = 177,
  [225] = 109,
  [226] = 226,
  [227] = 213,
  [228] = 228,
  [229] = 229,
  [230] = 194,
  [231] = 215,
  [232] = 216,
  [233] = 217,
  [234] = 191,
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
  [334] = 237,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 103,
  [345] = 329,
  [346] = 330,
  [347] = 331,
  [348] = 333,
  [349] = 349,
  [350] = 335,
  [351] = 197,
  [352] = 352,
  [353] = 198,
  [354] = 354,
  [355] = 355,
  [356] = 103,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 329,
  [361] = 330,
  [362] = 331,
  [363] = 333,
  [364] = 237,
  [365] = 335,
  [366] = 103,
  [367] = 12,
  [368] = 368,
  [369] = 369,
  [370] = 198,
  [371] = 197,
  [372] = 198,
  [373] = 329,
  [374] = 330,
  [375] = 331,
  [376] = 333,
  [377] = 237,
  [378] = 335,
  [379] = 197,
  [380] = 198,
  [381] = 197,
  [382] = 198,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 368,
  [388] = 386,
  [389] = 118,
  [390] = 185,
  [391] = 119,
  [392] = 103,
  [393] = 120,
  [394] = 394,
  [395] = 395,
  [396] = 184,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 289,
  [405] = 405,
  [406] = 406,
  [407] = 313,
  [408] = 408,
  [409] = 342,
  [410] = 343,
  [411] = 359,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 413,
  [416] = 414,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 417,
  [421] = 398,
  [422] = 418,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 383,
  [437] = 419,
  [438] = 187,
  [439] = 439,
  [440] = 284,
  [441] = 296,
  [442] = 442,
  [443] = 399,
  [444] = 444,
  [445] = 385,
  [446] = 446,
  [447] = 447,
  [448] = 386,
  [449] = 368,
  [450] = 450,
  [451] = 386,
  [452] = 368,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 426,
  [457] = 457,
  [458] = 427,
  [459] = 459,
  [460] = 394,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 274,
  [466] = 466,
  [467] = 463,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 430,
  [472] = 472,
  [473] = 473,
  [474] = 462,
  [475] = 468,
  [476] = 337,
  [477] = 477,
  [478] = 197,
  [479] = 479,
  [480] = 256,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 257,
  [490] = 258,
  [491] = 259,
  [492] = 260,
  [493] = 261,
  [494] = 262,
  [495] = 263,
  [496] = 496,
  [497] = 264,
  [498] = 265,
  [499] = 266,
  [500] = 267,
  [501] = 268,
  [502] = 269,
  [503] = 270,
  [504] = 271,
  [505] = 272,
  [506] = 506,
  [507] = 273,
  [508] = 275,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 276,
  [514] = 277,
  [515] = 278,
  [516] = 516,
  [517] = 279,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 280,
  [523] = 523,
  [524] = 524,
  [525] = 281,
  [526] = 282,
  [527] = 283,
  [528] = 528,
  [529] = 285,
  [530] = 286,
  [531] = 531,
  [532] = 287,
  [533] = 288,
  [534] = 290,
  [535] = 535,
  [536] = 291,
  [537] = 292,
  [538] = 293,
  [539] = 294,
  [540] = 295,
  [541] = 541,
  [542] = 542,
  [543] = 297,
  [544] = 544,
  [545] = 298,
  [546] = 300,
  [547] = 547,
  [548] = 301,
  [549] = 302,
  [550] = 303,
  [551] = 304,
  [552] = 305,
  [553] = 306,
  [554] = 554,
  [555] = 555,
  [556] = 307,
  [557] = 309,
  [558] = 558,
  [559] = 310,
  [560] = 311,
  [561] = 561,
  [562] = 312,
  [563] = 314,
  [564] = 564,
  [565] = 315,
  [566] = 316,
  [567] = 567,
  [568] = 317,
  [569] = 318,
  [570] = 319,
  [571] = 320,
  [572] = 321,
  [573] = 322,
  [574] = 323,
  [575] = 324,
  [576] = 325,
  [577] = 326,
  [578] = 327,
  [579] = 328,
  [580] = 352,
  [581] = 354,
  [582] = 355,
  [583] = 333,
  [584] = 237,
  [585] = 357,
  [586] = 357,
  [587] = 335,
  [588] = 588,
  [589] = 358,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 594,
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
  [609] = 352,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 336,
  [615] = 447,
  [616] = 450,
  [617] = 400,
  [618] = 403,
  [619] = 405,
  [620] = 408,
  [621] = 338,
  [622] = 622,
  [623] = 623,
  [624] = 339,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 358,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 12,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 329,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 424,
  [652] = 425,
  [653] = 428,
  [654] = 654,
  [655] = 655,
  [656] = 197,
  [657] = 657,
  [658] = 658,
  [659] = 198,
  [660] = 354,
  [661] = 479,
  [662] = 429,
  [663] = 355,
  [664] = 664,
  [665] = 665,
  [666] = 431,
  [667] = 340,
  [668] = 668,
  [669] = 432,
  [670] = 341,
  [671] = 433,
  [672] = 330,
  [673] = 434,
  [674] = 435,
  [675] = 329,
  [676] = 330,
  [677] = 331,
  [678] = 333,
  [679] = 237,
  [680] = 335,
  [681] = 197,
  [682] = 198,
  [683] = 439,
  [684] = 329,
  [685] = 330,
  [686] = 331,
  [687] = 333,
  [688] = 237,
  [689] = 335,
  [690] = 690,
  [691] = 331,
  [692] = 197,
  [693] = 198,
  [694] = 442,
  [695] = 695,
  [696] = 454,
  [697] = 606,
  [698] = 698,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 622,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 332,
  [707] = 707,
  [708] = 708,
  [709] = 668,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 455,
  [718] = 459,
  [719] = 635,
  [720] = 461,
  [721] = 469,
  [722] = 470,
  [723] = 711,
  [724] = 712,
  [725] = 725,
  [726] = 472,
  [727] = 473,
  [728] = 477,
  [729] = 509,
  [730] = 516,
  [731] = 518,
  [732] = 519,
  [733] = 520,
  [734] = 734,
  [735] = 238,
  [736] = 542,
  [737] = 239,
  [738] = 240,
  [739] = 241,
  [740] = 606,
  [741] = 242,
  [742] = 243,
  [743] = 606,
  [744] = 244,
  [745] = 245,
  [746] = 246,
  [747] = 247,
  [748] = 748,
  [749] = 479,
  [750] = 496,
  [751] = 248,
  [752] = 610,
  [753] = 611,
  [754] = 249,
  [755] = 638,
  [756] = 639,
  [757] = 479,
  [758] = 496,
  [759] = 496,
  [760] = 595,
  [761] = 250,
  [762] = 251,
  [763] = 252,
  [764] = 423,
  [765] = 335,
  [766] = 766,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 770,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 779,
  [780] = 642,
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
  [795] = 352,
  [796] = 647,
  [797] = 648,
  [798] = 354,
  [799] = 355,
  [800] = 800,
  [801] = 357,
  [802] = 358,
  [803] = 803,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 197,
  [811] = 198,
  [812] = 812,
  [813] = 813,
  [814] = 329,
  [815] = 330,
  [816] = 331,
  [817] = 332,
  [818] = 333,
  [819] = 237,
  [820] = 335,
  [821] = 197,
  [822] = 822,
  [823] = 336,
  [824] = 338,
  [825] = 339,
  [826] = 197,
  [827] = 198,
  [828] = 329,
  [829] = 330,
  [830] = 331,
  [831] = 333,
  [832] = 237,
  [833] = 335,
  [834] = 834,
  [835] = 329,
  [836] = 330,
  [837] = 331,
  [838] = 333,
  [839] = 237,
  [840] = 840,
  [841] = 198,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 340,
  [847] = 341,
  [848] = 848,
  [849] = 849,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 590,
  [858] = 789,
  [859] = 790,
  [860] = 791,
  [861] = 792,
  [862] = 793,
  [863] = 863,
  [864] = 864,
  [865] = 865,
  [866] = 866,
  [867] = 807,
  [868] = 868,
  [869] = 869,
  [870] = 812,
  [871] = 813,
  [872] = 834,
  [873] = 12,
  [874] = 850,
  [875] = 866,
  [876] = 868,
  [877] = 856,
  [878] = 878,
  [879] = 650,
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
  [890] = 787,
  [891] = 794,
  [892] = 848,
  [893] = 893,
  [894] = 822,
  [895] = 844,
  [896] = 896,
  [897] = 897,
  [898] = 880,
  [899] = 899,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 809,
  [906] = 881,
  [907] = 851,
  [908] = 899,
  [909] = 864,
  [910] = 885,
  [911] = 889,
  [912] = 897,
  [913] = 901,
  [914] = 903,
  [915] = 915,
  [916] = 916,
  [917] = 766,
  [918] = 918,
  [919] = 865,
  [920] = 781,
  [921] = 788,
  [922] = 882,
  [923] = 853,
  [924] = 853,
  [925] = 925,
  [926] = 853,
  [927] = 927,
  [928] = 928,
  [929] = 883,
  [930] = 884,
  [931] = 931,
  [932] = 932,
  [933] = 933,
  [934] = 934,
  [935] = 886,
  [936] = 936,
  [937] = 800,
  [938] = 842,
  [939] = 939,
  [940] = 940,
  [941] = 893,
  [942] = 939,
  [943] = 940,
  [944] = 915,
  [945] = 900,
  [946] = 804,
  [947] = 947,
  [948] = 888,
  [949] = 916,
  [950] = 843,
  [951] = 951,
  [952] = 804,
  [953] = 804,
  [954] = 954,
  [955] = 955,
  [956] = 464,
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
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 466,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 978,
  [979] = 979,
  [980] = 980,
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
  [996] = 197,
  [997] = 970,
  [998] = 998,
  [999] = 981,
  [1000] = 967,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 981,
  [1004] = 967,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 1007,
  [1008] = 981,
  [1009] = 967,
  [1010] = 1010,
  [1011] = 981,
  [1012] = 967,
  [1013] = 984,
  [1014] = 981,
  [1015] = 967,
  [1016] = 1016,
  [1017] = 981,
  [1018] = 967,
  [1019] = 1019,
  [1020] = 981,
  [1021] = 967,
  [1022] = 1022,
  [1023] = 981,
  [1024] = 967,
  [1025] = 990,
  [1026] = 198,
  [1027] = 981,
  [1028] = 1028,
  [1029] = 967,
  [1030] = 1030,
  [1031] = 958,
  [1032] = 995,
  [1033] = 957,
  [1034] = 965,
  [1035] = 1035,
  [1036] = 1036,
  [1037] = 959,
  [1038] = 1016,
  [1039] = 990,
  [1040] = 1040,
  [1041] = 990,
  [1042] = 1042,
  [1043] = 990,
  [1044] = 990,
  [1045] = 990,
  [1046] = 990,
  [1047] = 990,
  [1048] = 990,
  [1049] = 974,
  [1050] = 976,
  [1051] = 978,
  [1052] = 980,
  [1053] = 1053,
  [1054] = 1054,
  [1055] = 1055,
  [1056] = 1053,
  [1057] = 1057,
  [1058] = 1058,
  [1059] = 1059,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 1063,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 1058,
  [1072] = 1063,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1075,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1069,
  [1081] = 1070,
  [1082] = 1058,
  [1083] = 1063,
  [1084] = 1084,
  [1085] = 1085,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1064,
  [1091] = 1069,
  [1092] = 1070,
  [1093] = 1058,
  [1094] = 1063,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1069,
  [1099] = 1070,
  [1100] = 1100,
  [1101] = 1063,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1104,
  [1105] = 1069,
  [1106] = 1070,
  [1107] = 1058,
  [1108] = 1063,
  [1109] = 1109,
  [1110] = 1110,
  [1111] = 1111,
  [1112] = 1069,
  [1113] = 1070,
  [1114] = 1058,
  [1115] = 1063,
  [1116] = 625,
  [1117] = 1117,
  [1118] = 1118,
  [1119] = 1069,
  [1120] = 1070,
  [1121] = 1058,
  [1122] = 1063,
  [1123] = 1123,
  [1124] = 12,
  [1125] = 1125,
  [1126] = 1069,
  [1127] = 1070,
  [1128] = 1058,
  [1129] = 1063,
  [1130] = 1063,
  [1131] = 1063,
  [1132] = 1063,
  [1133] = 1133,
  [1134] = 1069,
  [1135] = 1065,
  [1136] = 1136,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1142,
  [1143] = 1069,
  [1144] = 1097,
  [1145] = 1070,
  [1146] = 1146,
  [1147] = 1147,
  [1148] = 1062,
  [1149] = 1076,
  [1150] = 1077,
  [1151] = 1058,
  [1152] = 1152,
  [1153] = 1153,
  [1154] = 1063,
  [1155] = 1073,
  [1156] = 1141,
  [1157] = 1157,
  [1158] = 1158,
  [1159] = 1095,
  [1160] = 1085,
  [1161] = 1146,
  [1162] = 1061,
  [1163] = 1147,
  [1164] = 1123,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1075,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1172,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1140,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1181,
  [1182] = 1182,
  [1183] = 1070,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1188,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 878,
  [1192] = 1180,
  [1193] = 1059,
  [1194] = 1194,
  [1195] = 1170,
  [1196] = 1196,
  [1197] = 1058,
  [1198] = 1078,
  [1199] = 1157,
  [1200] = 1200,
  [1201] = 1201,
  [1202] = 1103,
  [1203] = 1203,
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
        '+', 328,
        ',', 633,
        '-', 329,
        '0', 311,
        '1', 312,
        ':', 630,
        '=', 325,
        '?', 628,
        '@', 481,
        'B', 647,
        'J', 650,
        'N', 653,
        'P', 635,
        'T', 638,
        '[', 330,
        '_', 310,
        'a', 407,
        'b', 469,
        'c', 331,
        'd', 374,
        'e', 332,
        'f', 333,
        'g', 338,
        'h', 341,
        'i', 398,
        'k', 387,
        'l', 337,
        'm', 336,
        'n', 394,
        'p', 334,
        'r', 342,
        's', 358,
        't', 335,
        'u', 449,
        'w', 412,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(535);
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
        '0', 314,
        '1', 313,
        ':', 630,
        '=', 325,
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
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(655);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
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
      if (lookahead == '0') ADVANCE(314);
      if (lookahead == '1') ADVANCE(313);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '[') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 300,
        'a', 750,
        'd', 746,
        'g', 700,
        'k', 704,
        'm', 684,
        'r', 701,
        's', 706,
        '\t', 674,
        ' ', 674,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '#', 300,
        'a', 751,
        'd', 746,
        'k', 704,
        'r', 709,
        's', 707,
        '\t', 675,
        ' ', 675,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(631);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '_') ADVANCE(310);
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
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(327);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
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
      if (lookahead == 's') ADVANCE(323);
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
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(324);
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
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
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
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 298:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
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
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == '1') ADVANCE(312);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(314);
      if (lookahead == '1') ADVANCE(313);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(327);
      if (lookahead == '>') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'h') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == 'r') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == 'y') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'k') ADVANCE(421);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(339);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 't') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 's') ADVANCE(357);
      if (lookahead == 'w') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 's') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == 's') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(372);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == 'y') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(492);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(535);
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
      if (lookahead == 's') ADVANCE(318);
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
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(319);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(322);
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
      if (lookahead == 's') ADVANCE(519);
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
      if (lookahead == 's') ADVANCE(316);
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
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'u') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'u') ADVANCE(752);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '0') ADVANCE(314);
      if (lookahead == '1') ADVANCE(313);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == ':') ADVANCE(630);
      if (lookahead == '[') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
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
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '_') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(673);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 300,
        'a', 750,
        'd', 746,
        'g', 700,
        'k', 704,
        'm', 684,
        'r', 701,
        's', 706,
        '\t', 674,
        ' ', 674,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 300,
        'a', 751,
        'd', 746,
        'k', 704,
        'r', 709,
        's', 707,
        '\t', 675,
        ' ', 675,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == 'd') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(713);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(680);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(768);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead == 'p') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(600);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead == 'y') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(768);
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
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 7},
  [16] = {.lex_state = 1, .external_lex_state = 7},
  [17] = {.lex_state = 1, .external_lex_state = 7},
  [18] = {.lex_state = 1, .external_lex_state = 7},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 7},
  [22] = {.lex_state = 14, .external_lex_state = 7},
  [23] = {.lex_state = 14, .external_lex_state = 7},
  [24] = {.lex_state = 4, .external_lex_state = 7},
  [25] = {.lex_state = 14, .external_lex_state = 7},
  [26] = {.lex_state = 14, .external_lex_state = 7},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2, .external_lex_state = 7},
  [32] = {.lex_state = 2, .external_lex_state = 7},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
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
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 5, .external_lex_state = 7},
  [53] = {.lex_state = 3, .external_lex_state = 7},
  [54] = {.lex_state = 0, .external_lex_state = 8},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 5, .external_lex_state = 7},
  [60] = {.lex_state = 3, .external_lex_state = 7},
  [61] = {.lex_state = 5, .external_lex_state = 7},
  [62] = {.lex_state = 7, .external_lex_state = 7},
  [63] = {.lex_state = 7, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 8},
  [65] = {.lex_state = 5, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 8},
  [67] = {.lex_state = 0, .external_lex_state = 9},
  [68] = {.lex_state = 0, .external_lex_state = 8},
  [69] = {.lex_state = 5, .external_lex_state = 7},
  [70] = {.lex_state = 5, .external_lex_state = 7},
  [71] = {.lex_state = 5, .external_lex_state = 7},
  [72] = {.lex_state = 5, .external_lex_state = 7},
  [73] = {.lex_state = 0, .external_lex_state = 10},
  [74] = {.lex_state = 0, .external_lex_state = 11},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 10},
  [77] = {.lex_state = 5, .external_lex_state = 7},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0, .external_lex_state = 9},
  [80] = {.lex_state = 0, .external_lex_state = 10},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0, .external_lex_state = 9},
  [84] = {.lex_state = 0, .external_lex_state = 9},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0, .external_lex_state = 9},
  [87] = {.lex_state = 5, .external_lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 11},
  [89] = {.lex_state = 0, .external_lex_state = 12},
  [90] = {.lex_state = 0, .external_lex_state = 12},
  [91] = {.lex_state = 0, .external_lex_state = 9},
  [92] = {.lex_state = 0, .external_lex_state = 12},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 11},
  [96] = {.lex_state = 0, .external_lex_state = 13},
  [97] = {.lex_state = 0, .external_lex_state = 13},
  [98] = {.lex_state = 0, .external_lex_state = 13},
  [99] = {.lex_state = 0, .external_lex_state = 13},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 14},
  [102] = {.lex_state = 0, .external_lex_state = 15},
  [103] = {.lex_state = 0, .external_lex_state = 16},
  [104] = {.lex_state = 0, .external_lex_state = 15},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 15},
  [107] = {.lex_state = 0, .external_lex_state = 12},
  [108] = {.lex_state = 0, .external_lex_state = 17},
  [109] = {.lex_state = 0, .external_lex_state = 12},
  [110] = {.lex_state = 16, .external_lex_state = 7},
  [111] = {.lex_state = 16, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 16},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 8, .external_lex_state = 7},
  [119] = {.lex_state = 8, .external_lex_state = 7},
  [120] = {.lex_state = 8, .external_lex_state = 7},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 18},
  [123] = {.lex_state = 0, .external_lex_state = 16},
  [124] = {.lex_state = 0, .external_lex_state = 19},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 0, .external_lex_state = 20},
  [127] = {.lex_state = 0, .external_lex_state = 9},
  [128] = {.lex_state = 0, .external_lex_state = 14},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 0, .external_lex_state = 9},
  [131] = {.lex_state = 0, .external_lex_state = 17},
  [132] = {.lex_state = 0, .external_lex_state = 14},
  [133] = {.lex_state = 16, .external_lex_state = 7},
  [134] = {.lex_state = 0, .external_lex_state = 16},
  [135] = {.lex_state = 0, .external_lex_state = 20},
  [136] = {.lex_state = 0, .external_lex_state = 21},
  [137] = {.lex_state = 16, .external_lex_state = 7},
  [138] = {.lex_state = 0, .external_lex_state = 9},
  [139] = {.lex_state = 0, .external_lex_state = 20},
  [140] = {.lex_state = 0, .external_lex_state = 21},
  [141] = {.lex_state = 0, .external_lex_state = 14},
  [142] = {.lex_state = 0, .external_lex_state = 9},
  [143] = {.lex_state = 0, .external_lex_state = 9},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 21},
  [146] = {.lex_state = 0, .external_lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 9},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 18},
  [151] = {.lex_state = 0, .external_lex_state = 18},
  [152] = {.lex_state = 0, .external_lex_state = 18},
  [153] = {.lex_state = 0, .external_lex_state = 18},
  [154] = {.lex_state = 0, .external_lex_state = 18},
  [155] = {.lex_state = 0, .external_lex_state = 18},
  [156] = {.lex_state = 0, .external_lex_state = 18},
  [157] = {.lex_state = 0, .external_lex_state = 18},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 18},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 21},
  [164] = {.lex_state = 0, .external_lex_state = 16},
  [165] = {.lex_state = 0, .external_lex_state = 17},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 19},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 0, .external_lex_state = 22},
  [171] = {.lex_state = 16, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 22},
  [173] = {.lex_state = 16, .external_lex_state = 7},
  [174] = {.lex_state = 0, .external_lex_state = 17},
  [175] = {.lex_state = 0, .external_lex_state = 22},
  [176] = {.lex_state = 16, .external_lex_state = 7},
  [177] = {.lex_state = 16, .external_lex_state = 7},
  [178] = {.lex_state = 16, .external_lex_state = 7},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 22},
  [181] = {.lex_state = 0, .external_lex_state = 22},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 16, .external_lex_state = 7},
  [184] = {.lex_state = 0, .external_lex_state = 12},
  [185] = {.lex_state = 0, .external_lex_state = 12},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 12},
  [188] = {.lex_state = 0, .external_lex_state = 22},
  [189] = {.lex_state = 0, .external_lex_state = 22},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 16, .external_lex_state = 7},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 10, .external_lex_state = 7},
  [195] = {.lex_state = 16, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 9},
  [197] = {.lex_state = 0, .external_lex_state = 13},
  [198] = {.lex_state = 0, .external_lex_state = 13},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0, .external_lex_state = 22},
  [201] = {.lex_state = 0, .external_lex_state = 20},
  [202] = {.lex_state = 0, .external_lex_state = 22},
  [203] = {.lex_state = 0, .external_lex_state = 22},
  [204] = {.lex_state = 0, .external_lex_state = 22},
  [205] = {.lex_state = 0, .external_lex_state = 22},
  [206] = {.lex_state = 16, .external_lex_state = 7},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0, .external_lex_state = 17},
  [209] = {.lex_state = 16, .external_lex_state = 7},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0, .external_lex_state = 22},
  [212] = {.lex_state = 16, .external_lex_state = 7},
  [213] = {.lex_state = 16, .external_lex_state = 7},
  [214] = {.lex_state = 0, .external_lex_state = 22},
  [215] = {.lex_state = 13, .external_lex_state = 7},
  [216] = {.lex_state = 0, .external_lex_state = 22},
  [217] = {.lex_state = 0, .external_lex_state = 22},
  [218] = {.lex_state = 16, .external_lex_state = 7},
  [219] = {.lex_state = 16, .external_lex_state = 7},
  [220] = {.lex_state = 0, .external_lex_state = 22},
  [221] = {.lex_state = 0, .external_lex_state = 22},
  [222] = {.lex_state = 16, .external_lex_state = 7},
  [223] = {.lex_state = 16, .external_lex_state = 7},
  [224] = {.lex_state = 16, .external_lex_state = 7},
  [225] = {.lex_state = 0, .external_lex_state = 20},
  [226] = {.lex_state = 0, .external_lex_state = 22},
  [227] = {.lex_state = 16, .external_lex_state = 7},
  [228] = {.lex_state = 0, .external_lex_state = 22},
  [229] = {.lex_state = 0, .external_lex_state = 22},
  [230] = {.lex_state = 10, .external_lex_state = 7},
  [231] = {.lex_state = 13, .external_lex_state = 7},
  [232] = {.lex_state = 0, .external_lex_state = 22},
  [233] = {.lex_state = 0, .external_lex_state = 22},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 22},
  [236] = {.lex_state = 0, .external_lex_state = 22},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 0, .external_lex_state = 10},
  [239] = {.lex_state = 0, .external_lex_state = 10},
  [240] = {.lex_state = 0, .external_lex_state = 10},
  [241] = {.lex_state = 0, .external_lex_state = 10},
  [242] = {.lex_state = 0, .external_lex_state = 10},
  [243] = {.lex_state = 0, .external_lex_state = 10},
  [244] = {.lex_state = 0, .external_lex_state = 10},
  [245] = {.lex_state = 0, .external_lex_state = 10},
  [246] = {.lex_state = 0, .external_lex_state = 10},
  [247] = {.lex_state = 0, .external_lex_state = 10},
  [248] = {.lex_state = 0, .external_lex_state = 10},
  [249] = {.lex_state = 0, .external_lex_state = 10},
  [250] = {.lex_state = 0, .external_lex_state = 10},
  [251] = {.lex_state = 0, .external_lex_state = 10},
  [252] = {.lex_state = 0, .external_lex_state = 10},
  [253] = {.lex_state = 0, .external_lex_state = 23},
  [254] = {.lex_state = 0, .external_lex_state = 17},
  [255] = {.lex_state = 0, .external_lex_state = 8},
  [256] = {.lex_state = 0, .external_lex_state = 10},
  [257] = {.lex_state = 0, .external_lex_state = 10},
  [258] = {.lex_state = 0, .external_lex_state = 10},
  [259] = {.lex_state = 0, .external_lex_state = 10},
  [260] = {.lex_state = 0, .external_lex_state = 10},
  [261] = {.lex_state = 0, .external_lex_state = 10},
  [262] = {.lex_state = 0, .external_lex_state = 10},
  [263] = {.lex_state = 0, .external_lex_state = 10},
  [264] = {.lex_state = 0, .external_lex_state = 10},
  [265] = {.lex_state = 0, .external_lex_state = 10},
  [266] = {.lex_state = 0, .external_lex_state = 10},
  [267] = {.lex_state = 0, .external_lex_state = 10},
  [268] = {.lex_state = 0, .external_lex_state = 10},
  [269] = {.lex_state = 0, .external_lex_state = 10},
  [270] = {.lex_state = 0, .external_lex_state = 10},
  [271] = {.lex_state = 0, .external_lex_state = 10},
  [272] = {.lex_state = 0, .external_lex_state = 10},
  [273] = {.lex_state = 0, .external_lex_state = 10},
  [274] = {.lex_state = 0, .external_lex_state = 24},
  [275] = {.lex_state = 0, .external_lex_state = 10},
  [276] = {.lex_state = 0, .external_lex_state = 10},
  [277] = {.lex_state = 0, .external_lex_state = 10},
  [278] = {.lex_state = 0, .external_lex_state = 10},
  [279] = {.lex_state = 0, .external_lex_state = 10},
  [280] = {.lex_state = 0, .external_lex_state = 10},
  [281] = {.lex_state = 0, .external_lex_state = 10},
  [282] = {.lex_state = 0, .external_lex_state = 10},
  [283] = {.lex_state = 0, .external_lex_state = 10},
  [284] = {.lex_state = 0, .external_lex_state = 25},
  [285] = {.lex_state = 0, .external_lex_state = 10},
  [286] = {.lex_state = 0, .external_lex_state = 10},
  [287] = {.lex_state = 0, .external_lex_state = 10},
  [288] = {.lex_state = 0, .external_lex_state = 10},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 0, .external_lex_state = 10},
  [291] = {.lex_state = 0, .external_lex_state = 10},
  [292] = {.lex_state = 0, .external_lex_state = 10},
  [293] = {.lex_state = 0, .external_lex_state = 10},
  [294] = {.lex_state = 0, .external_lex_state = 10},
  [295] = {.lex_state = 0, .external_lex_state = 10},
  [296] = {.lex_state = 0, .external_lex_state = 25},
  [297] = {.lex_state = 0, .external_lex_state = 10},
  [298] = {.lex_state = 0, .external_lex_state = 10},
  [299] = {.lex_state = 0, .external_lex_state = 22},
  [300] = {.lex_state = 0, .external_lex_state = 10},
  [301] = {.lex_state = 0, .external_lex_state = 10},
  [302] = {.lex_state = 0, .external_lex_state = 10},
  [303] = {.lex_state = 0, .external_lex_state = 10},
  [304] = {.lex_state = 0, .external_lex_state = 10},
  [305] = {.lex_state = 0, .external_lex_state = 10},
  [306] = {.lex_state = 0, .external_lex_state = 10},
  [307] = {.lex_state = 0, .external_lex_state = 10},
  [308] = {.lex_state = 0, .external_lex_state = 26},
  [309] = {.lex_state = 0, .external_lex_state = 10},
  [310] = {.lex_state = 0, .external_lex_state = 10},
  [311] = {.lex_state = 0, .external_lex_state = 10},
  [312] = {.lex_state = 0, .external_lex_state = 10},
  [313] = {.lex_state = 16, .external_lex_state = 7},
  [314] = {.lex_state = 0, .external_lex_state = 10},
  [315] = {.lex_state = 0, .external_lex_state = 10},
  [316] = {.lex_state = 0, .external_lex_state = 10},
  [317] = {.lex_state = 0, .external_lex_state = 10},
  [318] = {.lex_state = 0, .external_lex_state = 10},
  [319] = {.lex_state = 0, .external_lex_state = 10},
  [320] = {.lex_state = 0, .external_lex_state = 10},
  [321] = {.lex_state = 0, .external_lex_state = 10},
  [322] = {.lex_state = 0, .external_lex_state = 10},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 10},
  [325] = {.lex_state = 0, .external_lex_state = 10},
  [326] = {.lex_state = 0, .external_lex_state = 10},
  [327] = {.lex_state = 0, .external_lex_state = 10},
  [328] = {.lex_state = 0, .external_lex_state = 10},
  [329] = {.lex_state = 0, .external_lex_state = 16},
  [330] = {.lex_state = 0, .external_lex_state = 16},
  [331] = {.lex_state = 0, .external_lex_state = 16},
  [332] = {.lex_state = 8, .external_lex_state = 7},
  [333] = {.lex_state = 0, .external_lex_state = 16},
  [334] = {.lex_state = 0, .external_lex_state = 16},
  [335] = {.lex_state = 0, .external_lex_state = 16},
  [336] = {.lex_state = 8, .external_lex_state = 7},
  [337] = {.lex_state = 0, .external_lex_state = 22},
  [338] = {.lex_state = 8, .external_lex_state = 7},
  [339] = {.lex_state = 8, .external_lex_state = 7},
  [340] = {.lex_state = 8, .external_lex_state = 7},
  [341] = {.lex_state = 8, .external_lex_state = 7},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 0, .external_lex_state = 25},
  [345] = {.lex_state = 0, .external_lex_state = 8},
  [346] = {.lex_state = 0, .external_lex_state = 8},
  [347] = {.lex_state = 0, .external_lex_state = 8},
  [348] = {.lex_state = 0, .external_lex_state = 8},
  [349] = {.lex_state = 0, .external_lex_state = 23},
  [350] = {.lex_state = 0, .external_lex_state = 8},
  [351] = {.lex_state = 0, .external_lex_state = 16},
  [352] = {.lex_state = 0, .external_lex_state = 10},
  [353] = {.lex_state = 0, .external_lex_state = 16},
  [354] = {.lex_state = 0, .external_lex_state = 10},
  [355] = {.lex_state = 0, .external_lex_state = 10},
  [356] = {.lex_state = 0, .external_lex_state = 26},
  [357] = {.lex_state = 0, .external_lex_state = 10},
  [358] = {.lex_state = 0, .external_lex_state = 10},
  [359] = {.lex_state = 6, .external_lex_state = 7},
  [360] = {.lex_state = 0, .external_lex_state = 11},
  [361] = {.lex_state = 0, .external_lex_state = 11},
  [362] = {.lex_state = 0, .external_lex_state = 11},
  [363] = {.lex_state = 0, .external_lex_state = 11},
  [364] = {.lex_state = 0, .external_lex_state = 11},
  [365] = {.lex_state = 0, .external_lex_state = 11},
  [366] = {.lex_state = 0, .external_lex_state = 2},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 23},
  [369] = {.lex_state = 0, .external_lex_state = 8},
  [370] = {.lex_state = 0, .external_lex_state = 11},
  [371] = {.lex_state = 0, .external_lex_state = 21},
  [372] = {.lex_state = 0, .external_lex_state = 21},
  [373] = {.lex_state = 0, .external_lex_state = 10},
  [374] = {.lex_state = 0, .external_lex_state = 10},
  [375] = {.lex_state = 0, .external_lex_state = 10},
  [376] = {.lex_state = 0, .external_lex_state = 10},
  [377] = {.lex_state = 0, .external_lex_state = 10},
  [378] = {.lex_state = 0, .external_lex_state = 10},
  [379] = {.lex_state = 0, .external_lex_state = 8},
  [380] = {.lex_state = 0, .external_lex_state = 8},
  [381] = {.lex_state = 0, .external_lex_state = 10},
  [382] = {.lex_state = 0, .external_lex_state = 10},
  [383] = {.lex_state = 9, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 22},
  [385] = {.lex_state = 0, .external_lex_state = 25},
  [386] = {.lex_state = 0, .external_lex_state = 23},
  [387] = {.lex_state = 0, .external_lex_state = 23},
  [388] = {.lex_state = 0, .external_lex_state = 23},
  [389] = {.lex_state = 1, .external_lex_state = 7},
  [390] = {.lex_state = 0, .external_lex_state = 20},
  [391] = {.lex_state = 1, .external_lex_state = 7},
  [392] = {.lex_state = 0, .external_lex_state = 22},
  [393] = {.lex_state = 1, .external_lex_state = 7},
  [394] = {.lex_state = 17, .external_lex_state = 7},
  [395] = {.lex_state = 0, .external_lex_state = 26},
  [396] = {.lex_state = 0, .external_lex_state = 20},
  [397] = {.lex_state = 0, .external_lex_state = 23},
  [398] = {.lex_state = 19},
  [399] = {.lex_state = 19},
  [400] = {.lex_state = 0, .external_lex_state = 10},
  [401] = {.lex_state = 0, .external_lex_state = 25},
  [402] = {.lex_state = 0, .external_lex_state = 17},
  [403] = {.lex_state = 0, .external_lex_state = 10},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 0, .external_lex_state = 10},
  [406] = {.lex_state = 1, .external_lex_state = 27},
  [407] = {.lex_state = 16, .external_lex_state = 7},
  [408] = {.lex_state = 0, .external_lex_state = 10},
  [409] = {.lex_state = 1},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 6, .external_lex_state = 7},
  [412] = {.lex_state = 0, .external_lex_state = 26},
  [413] = {.lex_state = 0, .external_lex_state = 25},
  [414] = {.lex_state = 0, .external_lex_state = 25},
  [415] = {.lex_state = 0, .external_lex_state = 25},
  [416] = {.lex_state = 0, .external_lex_state = 25},
  [417] = {.lex_state = 19},
  [418] = {.lex_state = 6, .external_lex_state = 7},
  [419] = {.lex_state = 0, .external_lex_state = 25},
  [420] = {.lex_state = 19},
  [421] = {.lex_state = 19},
  [422] = {.lex_state = 6, .external_lex_state = 7},
  [423] = {.lex_state = 0, .external_lex_state = 10},
  [424] = {.lex_state = 0, .external_lex_state = 10},
  [425] = {.lex_state = 0, .external_lex_state = 10},
  [426] = {.lex_state = 16, .external_lex_state = 7},
  [427] = {.lex_state = 0, .external_lex_state = 25},
  [428] = {.lex_state = 0, .external_lex_state = 10},
  [429] = {.lex_state = 0, .external_lex_state = 10},
  [430] = {.lex_state = 9, .external_lex_state = 7},
  [431] = {.lex_state = 0, .external_lex_state = 10},
  [432] = {.lex_state = 0, .external_lex_state = 10},
  [433] = {.lex_state = 0, .external_lex_state = 10},
  [434] = {.lex_state = 0, .external_lex_state = 10},
  [435] = {.lex_state = 0, .external_lex_state = 10},
  [436] = {.lex_state = 9, .external_lex_state = 7},
  [437] = {.lex_state = 0, .external_lex_state = 25},
  [438] = {.lex_state = 0, .external_lex_state = 20},
  [439] = {.lex_state = 0, .external_lex_state = 10},
  [440] = {.lex_state = 0, .external_lex_state = 25},
  [441] = {.lex_state = 0, .external_lex_state = 25},
  [442] = {.lex_state = 0, .external_lex_state = 10},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 0, .external_lex_state = 22},
  [445] = {.lex_state = 0, .external_lex_state = 25},
  [446] = {.lex_state = 0, .external_lex_state = 17},
  [447] = {.lex_state = 0, .external_lex_state = 11},
  [448] = {.lex_state = 0, .external_lex_state = 23},
  [449] = {.lex_state = 0, .external_lex_state = 23},
  [450] = {.lex_state = 0, .external_lex_state = 11},
  [451] = {.lex_state = 0, .external_lex_state = 23},
  [452] = {.lex_state = 0, .external_lex_state = 23},
  [453] = {.lex_state = 0, .external_lex_state = 25},
  [454] = {.lex_state = 0, .external_lex_state = 10},
  [455] = {.lex_state = 0, .external_lex_state = 10},
  [456] = {.lex_state = 16, .external_lex_state = 7},
  [457] = {.lex_state = 0, .external_lex_state = 26},
  [458] = {.lex_state = 0, .external_lex_state = 25},
  [459] = {.lex_state = 0, .external_lex_state = 10},
  [460] = {.lex_state = 17, .external_lex_state = 7},
  [461] = {.lex_state = 0, .external_lex_state = 10},
  [462] = {.lex_state = 0, .external_lex_state = 22},
  [463] = {.lex_state = 0, .external_lex_state = 24},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 24},
  [466] = {.lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 24},
  [468] = {.lex_state = 0, .external_lex_state = 22},
  [469] = {.lex_state = 0, .external_lex_state = 10},
  [470] = {.lex_state = 0, .external_lex_state = 10},
  [471] = {.lex_state = 9, .external_lex_state = 7},
  [472] = {.lex_state = 0, .external_lex_state = 10},
  [473] = {.lex_state = 0, .external_lex_state = 10},
  [474] = {.lex_state = 0, .external_lex_state = 22},
  [475] = {.lex_state = 0, .external_lex_state = 22},
  [476] = {.lex_state = 0, .external_lex_state = 22},
  [477] = {.lex_state = 0, .external_lex_state = 10},
  [478] = {.lex_state = 0, .external_lex_state = 11},
  [479] = {.lex_state = 0, .external_lex_state = 28},
  [480] = {.lex_state = 0, .external_lex_state = 9},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 1, .external_lex_state = 7},
  [487] = {.lex_state = 1, .external_lex_state = 7},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 9},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 0, .external_lex_state = 9},
  [493] = {.lex_state = 0, .external_lex_state = 9},
  [494] = {.lex_state = 0, .external_lex_state = 9},
  [495] = {.lex_state = 0, .external_lex_state = 9},
  [496] = {.lex_state = 0, .external_lex_state = 28},
  [497] = {.lex_state = 0, .external_lex_state = 9},
  [498] = {.lex_state = 0, .external_lex_state = 9},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 9},
  [501] = {.lex_state = 0, .external_lex_state = 9},
  [502] = {.lex_state = 0, .external_lex_state = 9},
  [503] = {.lex_state = 0, .external_lex_state = 9},
  [504] = {.lex_state = 0, .external_lex_state = 9},
  [505] = {.lex_state = 0, .external_lex_state = 9},
  [506] = {.lex_state = 0, .external_lex_state = 29},
  [507] = {.lex_state = 0, .external_lex_state = 9},
  [508] = {.lex_state = 0, .external_lex_state = 9},
  [509] = {.lex_state = 16, .external_lex_state = 7},
  [510] = {.lex_state = 0, .external_lex_state = 9},
  [511] = {.lex_state = 1, .external_lex_state = 7},
  [512] = {.lex_state = 1, .external_lex_state = 7},
  [513] = {.lex_state = 0, .external_lex_state = 9},
  [514] = {.lex_state = 0, .external_lex_state = 9},
  [515] = {.lex_state = 0, .external_lex_state = 9},
  [516] = {.lex_state = 16, .external_lex_state = 7},
  [517] = {.lex_state = 0, .external_lex_state = 9},
  [518] = {.lex_state = 16, .external_lex_state = 7},
  [519] = {.lex_state = 16, .external_lex_state = 7},
  [520] = {.lex_state = 16, .external_lex_state = 7},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0, .external_lex_state = 9},
  [523] = {.lex_state = 0, .external_lex_state = 28},
  [524] = {.lex_state = 0, .external_lex_state = 19},
  [525] = {.lex_state = 0, .external_lex_state = 9},
  [526] = {.lex_state = 0, .external_lex_state = 9},
  [527] = {.lex_state = 0, .external_lex_state = 9},
  [528] = {.lex_state = 0, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 9},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 9},
  [533] = {.lex_state = 0, .external_lex_state = 9},
  [534] = {.lex_state = 0, .external_lex_state = 9},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 9},
  [537] = {.lex_state = 0, .external_lex_state = 9},
  [538] = {.lex_state = 0, .external_lex_state = 9},
  [539] = {.lex_state = 0, .external_lex_state = 9},
  [540] = {.lex_state = 0, .external_lex_state = 9},
  [541] = {.lex_state = 0, .external_lex_state = 19},
  [542] = {.lex_state = 19},
  [543] = {.lex_state = 0, .external_lex_state = 9},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 9},
  [546] = {.lex_state = 0, .external_lex_state = 9},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 9},
  [549] = {.lex_state = 0, .external_lex_state = 9},
  [550] = {.lex_state = 0, .external_lex_state = 9},
  [551] = {.lex_state = 0, .external_lex_state = 9},
  [552] = {.lex_state = 0, .external_lex_state = 9},
  [553] = {.lex_state = 0, .external_lex_state = 9},
  [554] = {.lex_state = 0, .external_lex_state = 19},
  [555] = {.lex_state = 0, .external_lex_state = 19},
  [556] = {.lex_state = 0, .external_lex_state = 9},
  [557] = {.lex_state = 0, .external_lex_state = 9},
  [558] = {.lex_state = 1},
  [559] = {.lex_state = 0, .external_lex_state = 9},
  [560] = {.lex_state = 0, .external_lex_state = 9},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 9},
  [563] = {.lex_state = 0, .external_lex_state = 9},
  [564] = {.lex_state = 0, .external_lex_state = 19},
  [565] = {.lex_state = 0, .external_lex_state = 9},
  [566] = {.lex_state = 0, .external_lex_state = 9},
  [567] = {.lex_state = 0, .external_lex_state = 28},
  [568] = {.lex_state = 0, .external_lex_state = 9},
  [569] = {.lex_state = 0, .external_lex_state = 9},
  [570] = {.lex_state = 0, .external_lex_state = 9},
  [571] = {.lex_state = 0, .external_lex_state = 9},
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
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 9},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 9},
  [590] = {.lex_state = 9, .external_lex_state = 7},
  [591] = {.lex_state = 16, .external_lex_state = 7},
  [592] = {.lex_state = 0, .external_lex_state = 9},
  [593] = {.lex_state = 9, .external_lex_state = 7},
  [594] = {.lex_state = 16, .external_lex_state = 7},
  [595] = {.lex_state = 1},
  [596] = {.lex_state = 0, .external_lex_state = 2},
  [597] = {.lex_state = 0, .external_lex_state = 7},
  [598] = {.lex_state = 0, .external_lex_state = 7},
  [599] = {.lex_state = 0, .external_lex_state = 29},
  [600] = {.lex_state = 0, .external_lex_state = 7},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 7},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 15, .external_lex_state = 7},
  [606] = {.lex_state = 0, .external_lex_state = 30},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 2},
  [610] = {.lex_state = 9, .external_lex_state = 7},
  [611] = {.lex_state = 18, .external_lex_state = 7},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 1},
  [615] = {.lex_state = 0, .external_lex_state = 15},
  [616] = {.lex_state = 0, .external_lex_state = 15},
  [617] = {.lex_state = 0, .external_lex_state = 9},
  [618] = {.lex_state = 0, .external_lex_state = 9},
  [619] = {.lex_state = 0, .external_lex_state = 9},
  [620] = {.lex_state = 0, .external_lex_state = 9},
  [621] = {.lex_state = 1},
  [622] = {.lex_state = 16, .external_lex_state = 7},
  [623] = {.lex_state = 0, .external_lex_state = 2},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 0, .external_lex_state = 2},
  [627] = {.lex_state = 0, .external_lex_state = 2},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 2},
  [630] = {.lex_state = 0, .external_lex_state = 2},
  [631] = {.lex_state = 0, .external_lex_state = 2},
  [632] = {.lex_state = 0, .external_lex_state = 2},
  [633] = {.lex_state = 0, .external_lex_state = 7},
  [634] = {.lex_state = 0, .external_lex_state = 7},
  [635] = {.lex_state = 16, .external_lex_state = 7},
  [636] = {.lex_state = 0, .external_lex_state = 9},
  [637] = {.lex_state = 76},
  [638] = {.lex_state = 76},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 0, .external_lex_state = 2},
  [641] = {.lex_state = 0, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 9},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 9},
  [648] = {.lex_state = 0, .external_lex_state = 9},
  [649] = {.lex_state = 0, .external_lex_state = 2},
  [650] = {.lex_state = 6, .external_lex_state = 7},
  [651] = {.lex_state = 0, .external_lex_state = 9},
  [652] = {.lex_state = 0, .external_lex_state = 9},
  [653] = {.lex_state = 0, .external_lex_state = 9},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 0, .external_lex_state = 2},
  [656] = {.lex_state = 0, .external_lex_state = 2},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 2},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 0, .external_lex_state = 2},
  [661] = {.lex_state = 0, .external_lex_state = 28},
  [662] = {.lex_state = 0, .external_lex_state = 9},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 2},
  [666] = {.lex_state = 0, .external_lex_state = 9},
  [667] = {.lex_state = 1},
  [668] = {.lex_state = 1, .external_lex_state = 7},
  [669] = {.lex_state = 0, .external_lex_state = 9},
  [670] = {.lex_state = 1},
  [671] = {.lex_state = 0, .external_lex_state = 9},
  [672] = {.lex_state = 0, .external_lex_state = 2},
  [673] = {.lex_state = 0, .external_lex_state = 9},
  [674] = {.lex_state = 0, .external_lex_state = 9},
  [675] = {.lex_state = 0, .external_lex_state = 9},
  [676] = {.lex_state = 0, .external_lex_state = 9},
  [677] = {.lex_state = 0, .external_lex_state = 9},
  [678] = {.lex_state = 0, .external_lex_state = 9},
  [679] = {.lex_state = 0, .external_lex_state = 9},
  [680] = {.lex_state = 0, .external_lex_state = 9},
  [681] = {.lex_state = 0, .external_lex_state = 9},
  [682] = {.lex_state = 0, .external_lex_state = 9},
  [683] = {.lex_state = 0, .external_lex_state = 9},
  [684] = {.lex_state = 0, .external_lex_state = 15},
  [685] = {.lex_state = 0, .external_lex_state = 15},
  [686] = {.lex_state = 0, .external_lex_state = 15},
  [687] = {.lex_state = 0, .external_lex_state = 15},
  [688] = {.lex_state = 0, .external_lex_state = 15},
  [689] = {.lex_state = 0, .external_lex_state = 15},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 15},
  [693] = {.lex_state = 0, .external_lex_state = 15},
  [694] = {.lex_state = 0, .external_lex_state = 9},
  [695] = {.lex_state = 1, .external_lex_state = 27},
  [696] = {.lex_state = 0, .external_lex_state = 9},
  [697] = {.lex_state = 0, .external_lex_state = 30},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 0, .external_lex_state = 2},
  [701] = {.lex_state = 0, .external_lex_state = 2},
  [702] = {.lex_state = 16, .external_lex_state = 7},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 2},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 1},
  [707] = {.lex_state = 0, .external_lex_state = 9},
  [708] = {.lex_state = 0, .external_lex_state = 9},
  [709] = {.lex_state = 1, .external_lex_state = 7},
  [710] = {.lex_state = 1, .external_lex_state = 7},
  [711] = {.lex_state = 16, .external_lex_state = 7},
  [712] = {.lex_state = 16, .external_lex_state = 7},
  [713] = {.lex_state = 1, .external_lex_state = 7},
  [714] = {.lex_state = 0, .external_lex_state = 2},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 0, .external_lex_state = 2},
  [717] = {.lex_state = 0, .external_lex_state = 9},
  [718] = {.lex_state = 0, .external_lex_state = 9},
  [719] = {.lex_state = 16, .external_lex_state = 7},
  [720] = {.lex_state = 0, .external_lex_state = 9},
  [721] = {.lex_state = 0, .external_lex_state = 9},
  [722] = {.lex_state = 0, .external_lex_state = 9},
  [723] = {.lex_state = 16, .external_lex_state = 7},
  [724] = {.lex_state = 16, .external_lex_state = 7},
  [725] = {.lex_state = 0, .external_lex_state = 2},
  [726] = {.lex_state = 0, .external_lex_state = 9},
  [727] = {.lex_state = 0, .external_lex_state = 9},
  [728] = {.lex_state = 0, .external_lex_state = 9},
  [729] = {.lex_state = 16, .external_lex_state = 7},
  [730] = {.lex_state = 16, .external_lex_state = 7},
  [731] = {.lex_state = 16, .external_lex_state = 7},
  [732] = {.lex_state = 16, .external_lex_state = 7},
  [733] = {.lex_state = 16, .external_lex_state = 7},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 9},
  [736] = {.lex_state = 19},
  [737] = {.lex_state = 0, .external_lex_state = 9},
  [738] = {.lex_state = 0, .external_lex_state = 9},
  [739] = {.lex_state = 0, .external_lex_state = 9},
  [740] = {.lex_state = 0, .external_lex_state = 30},
  [741] = {.lex_state = 0, .external_lex_state = 9},
  [742] = {.lex_state = 0, .external_lex_state = 9},
  [743] = {.lex_state = 0, .external_lex_state = 30},
  [744] = {.lex_state = 0, .external_lex_state = 9},
  [745] = {.lex_state = 0, .external_lex_state = 9},
  [746] = {.lex_state = 0, .external_lex_state = 9},
  [747] = {.lex_state = 0, .external_lex_state = 9},
  [748] = {.lex_state = 0, .external_lex_state = 2},
  [749] = {.lex_state = 0, .external_lex_state = 28},
  [750] = {.lex_state = 0, .external_lex_state = 28},
  [751] = {.lex_state = 0, .external_lex_state = 9},
  [752] = {.lex_state = 9, .external_lex_state = 7},
  [753] = {.lex_state = 18, .external_lex_state = 7},
  [754] = {.lex_state = 0, .external_lex_state = 9},
  [755] = {.lex_state = 76},
  [756] = {.lex_state = 20},
  [757] = {.lex_state = 0, .external_lex_state = 28},
  [758] = {.lex_state = 0, .external_lex_state = 28},
  [759] = {.lex_state = 0, .external_lex_state = 28},
  [760] = {.lex_state = 1},
  [761] = {.lex_state = 0, .external_lex_state = 9},
  [762] = {.lex_state = 0, .external_lex_state = 9},
  [763] = {.lex_state = 0, .external_lex_state = 9},
  [764] = {.lex_state = 0, .external_lex_state = 9},
  [765] = {.lex_state = 0, .external_lex_state = 26},
  [766] = {.lex_state = 0, .external_lex_state = 7},
  [767] = {.lex_state = 0, .external_lex_state = 7},
  [768] = {.lex_state = 19},
  [769] = {.lex_state = 0, .external_lex_state = 31},
  [770] = {.lex_state = 0, .external_lex_state = 7},
  [771] = {.lex_state = 1, .external_lex_state = 7},
  [772] = {.lex_state = 1},
  [773] = {.lex_state = 1, .external_lex_state = 7},
  [774] = {.lex_state = 19},
  [775] = {.lex_state = 1, .external_lex_state = 7},
  [776] = {.lex_state = 0, .external_lex_state = 7},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 0, .external_lex_state = 7},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 0, .external_lex_state = 2},
  [781] = {.lex_state = 0, .external_lex_state = 7},
  [782] = {.lex_state = 0, .external_lex_state = 7},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 30},
  [786] = {.lex_state = 1},
  [787] = {.lex_state = 0, .external_lex_state = 7},
  [788] = {.lex_state = 0, .external_lex_state = 7},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 19},
  [794] = {.lex_state = 0, .external_lex_state = 7},
  [795] = {.lex_state = 0, .external_lex_state = 25},
  [796] = {.lex_state = 0, .external_lex_state = 2},
  [797] = {.lex_state = 0, .external_lex_state = 2},
  [798] = {.lex_state = 0, .external_lex_state = 25},
  [799] = {.lex_state = 0, .external_lex_state = 25},
  [800] = {.lex_state = 1},
  [801] = {.lex_state = 0, .external_lex_state = 25},
  [802] = {.lex_state = 0, .external_lex_state = 25},
  [803] = {.lex_state = 19},
  [804] = {.lex_state = 0, .external_lex_state = 30},
  [805] = {.lex_state = 0, .external_lex_state = 7},
  [806] = {.lex_state = 0, .external_lex_state = 7},
  [807] = {.lex_state = 0, .external_lex_state = 7},
  [808] = {.lex_state = 6, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 32},
  [810] = {.lex_state = 0, .external_lex_state = 25},
  [811] = {.lex_state = 0, .external_lex_state = 25},
  [812] = {.lex_state = 1},
  [813] = {.lex_state = 0, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 22},
  [815] = {.lex_state = 0, .external_lex_state = 22},
  [816] = {.lex_state = 0, .external_lex_state = 22},
  [817] = {.lex_state = 1, .external_lex_state = 7},
  [818] = {.lex_state = 0, .external_lex_state = 22},
  [819] = {.lex_state = 0, .external_lex_state = 22},
  [820] = {.lex_state = 0, .external_lex_state = 22},
  [821] = {.lex_state = 0, .external_lex_state = 22},
  [822] = {.lex_state = 0, .external_lex_state = 7},
  [823] = {.lex_state = 1, .external_lex_state = 7},
  [824] = {.lex_state = 1, .external_lex_state = 7},
  [825] = {.lex_state = 1, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 26},
  [827] = {.lex_state = 0, .external_lex_state = 26},
  [828] = {.lex_state = 0, .external_lex_state = 25},
  [829] = {.lex_state = 0, .external_lex_state = 25},
  [830] = {.lex_state = 0, .external_lex_state = 25},
  [831] = {.lex_state = 0, .external_lex_state = 25},
  [832] = {.lex_state = 0, .external_lex_state = 25},
  [833] = {.lex_state = 0, .external_lex_state = 25},
  [834] = {.lex_state = 0, .external_lex_state = 7},
  [835] = {.lex_state = 0, .external_lex_state = 26},
  [836] = {.lex_state = 0, .external_lex_state = 26},
  [837] = {.lex_state = 0, .external_lex_state = 26},
  [838] = {.lex_state = 0, .external_lex_state = 26},
  [839] = {.lex_state = 0, .external_lex_state = 26},
  [840] = {.lex_state = 0, .external_lex_state = 7},
  [841] = {.lex_state = 0, .external_lex_state = 22},
  [842] = {.lex_state = 0, .external_lex_state = 7},
  [843] = {.lex_state = 1},
  [844] = {.lex_state = 0, .external_lex_state = 7},
  [845] = {.lex_state = 0, .external_lex_state = 7},
  [846] = {.lex_state = 1, .external_lex_state = 7},
  [847] = {.lex_state = 1, .external_lex_state = 7},
  [848] = {.lex_state = 1},
  [849] = {.lex_state = 1},
  [850] = {.lex_state = 0, .external_lex_state = 7},
  [851] = {.lex_state = 0, .external_lex_state = 7},
  [852] = {.lex_state = 1},
  [853] = {.lex_state = 0, .external_lex_state = 7},
  [854] = {.lex_state = 1, .external_lex_state = 27},
  [855] = {.lex_state = 0, .external_lex_state = 23},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 16, .external_lex_state = 7},
  [858] = {.lex_state = 0, .external_lex_state = 7},
  [859] = {.lex_state = 0, .external_lex_state = 7},
  [860] = {.lex_state = 0, .external_lex_state = 7},
  [861] = {.lex_state = 0, .external_lex_state = 7},
  [862] = {.lex_state = 19},
  [863] = {.lex_state = 0, .external_lex_state = 7},
  [864] = {.lex_state = 0, .external_lex_state = 7},
  [865] = {.lex_state = 0, .external_lex_state = 7},
  [866] = {.lex_state = 0, .external_lex_state = 7},
  [867] = {.lex_state = 0, .external_lex_state = 7},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 1, .external_lex_state = 7},
  [870] = {.lex_state = 1},
  [871] = {.lex_state = 0, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 7},
  [873] = {.lex_state = 20},
  [874] = {.lex_state = 0, .external_lex_state = 7},
  [875] = {.lex_state = 0, .external_lex_state = 7},
  [876] = {.lex_state = 0, .external_lex_state = 7},
  [877] = {.lex_state = 16, .external_lex_state = 7},
  [878] = {.lex_state = 16, .external_lex_state = 7},
  [879] = {.lex_state = 16, .external_lex_state = 7},
  [880] = {.lex_state = 0, .external_lex_state = 7},
  [881] = {.lex_state = 0, .external_lex_state = 7},
  [882] = {.lex_state = 0, .external_lex_state = 7},
  [883] = {.lex_state = 0, .external_lex_state = 7},
  [884] = {.lex_state = 0, .external_lex_state = 7},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 1},
  [887] = {.lex_state = 0, .external_lex_state = 7},
  [888] = {.lex_state = 0, .external_lex_state = 7},
  [889] = {.lex_state = 0, .external_lex_state = 7},
  [890] = {.lex_state = 0, .external_lex_state = 7},
  [891] = {.lex_state = 0, .external_lex_state = 7},
  [892] = {.lex_state = 1},
  [893] = {.lex_state = 0, .external_lex_state = 7},
  [894] = {.lex_state = 0, .external_lex_state = 7},
  [895] = {.lex_state = 0, .external_lex_state = 7},
  [896] = {.lex_state = 0, .external_lex_state = 7},
  [897] = {.lex_state = 0, .external_lex_state = 7},
  [898] = {.lex_state = 0, .external_lex_state = 7},
  [899] = {.lex_state = 0, .external_lex_state = 7},
  [900] = {.lex_state = 0, .external_lex_state = 7},
  [901] = {.lex_state = 0, .external_lex_state = 7},
  [902] = {.lex_state = 0, .external_lex_state = 7},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 0, .external_lex_state = 7},
  [905] = {.lex_state = 0, .external_lex_state = 32},
  [906] = {.lex_state = 0, .external_lex_state = 7},
  [907] = {.lex_state = 0, .external_lex_state = 7},
  [908] = {.lex_state = 0, .external_lex_state = 7},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 7},
  [911] = {.lex_state = 0, .external_lex_state = 7},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 0, .external_lex_state = 32},
  [916] = {.lex_state = 0, .external_lex_state = 7},
  [917] = {.lex_state = 0, .external_lex_state = 7},
  [918] = {.lex_state = 0, .external_lex_state = 7},
  [919] = {.lex_state = 0, .external_lex_state = 7},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 6, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 7},
  [927] = {.lex_state = 46},
  [928] = {.lex_state = 0, .external_lex_state = 25},
  [929] = {.lex_state = 0, .external_lex_state = 7},
  [930] = {.lex_state = 0, .external_lex_state = 7},
  [931] = {.lex_state = 1},
  [932] = {.lex_state = 0, .external_lex_state = 7},
  [933] = {.lex_state = 0, .external_lex_state = 31},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 1},
  [936] = {.lex_state = 0, .external_lex_state = 7},
  [937] = {.lex_state = 1},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 7},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 0, .external_lex_state = 7},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 0, .external_lex_state = 32},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 0, .external_lex_state = 30},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 0, .external_lex_state = 7},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 1},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 0, .external_lex_state = 30},
  [953] = {.lex_state = 0, .external_lex_state = 30},
  [954] = {.lex_state = 16, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 1},
  [958] = {.lex_state = 46},
  [959] = {.lex_state = 0, .external_lex_state = 33},
  [960] = {.lex_state = 0, .external_lex_state = 7},
  [961] = {.lex_state = 295},
  [962] = {.lex_state = 294},
  [963] = {.lex_state = 296},
  [964] = {.lex_state = 0, .external_lex_state = 7},
  [965] = {.lex_state = 1},
  [966] = {.lex_state = 19},
  [967] = {.lex_state = 297, .external_lex_state = 34},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 0, .external_lex_state = 7},
  [970] = {.lex_state = 1},
  [971] = {.lex_state = 1},
  [972] = {.lex_state = 1},
  [973] = {.lex_state = 0, .external_lex_state = 7},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 1},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 294},
  [978] = {.lex_state = 1},
  [979] = {.lex_state = 0, .external_lex_state = 31},
  [980] = {.lex_state = 1},
  [981] = {.lex_state = 297, .external_lex_state = 34},
  [982] = {.lex_state = 1},
  [983] = {.lex_state = 19},
  [984] = {.lex_state = 0, .external_lex_state = 3},
  [985] = {.lex_state = 0, .external_lex_state = 35},
  [986] = {.lex_state = 1},
  [987] = {.lex_state = 19},
  [988] = {.lex_state = 0, .external_lex_state = 7},
  [989] = {.lex_state = 1},
  [990] = {.lex_state = 1},
  [991] = {.lex_state = 1},
  [992] = {.lex_state = 6},
  [993] = {.lex_state = 0, .external_lex_state = 35},
  [994] = {.lex_state = 0, .external_lex_state = 6},
  [995] = {.lex_state = 19},
  [996] = {.lex_state = 0, .external_lex_state = 30},
  [997] = {.lex_state = 1},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 297, .external_lex_state = 34},
  [1000] = {.lex_state = 297, .external_lex_state = 34},
  [1001] = {.lex_state = 0, .external_lex_state = 35},
  [1002] = {.lex_state = 296},
  [1003] = {.lex_state = 297, .external_lex_state = 34},
  [1004] = {.lex_state = 297, .external_lex_state = 34},
  [1005] = {.lex_state = 1},
  [1006] = {.lex_state = 0, .external_lex_state = 7},
  [1007] = {.lex_state = 295},
  [1008] = {.lex_state = 297, .external_lex_state = 34},
  [1009] = {.lex_state = 297, .external_lex_state = 34},
  [1010] = {.lex_state = 296},
  [1011] = {.lex_state = 297, .external_lex_state = 34},
  [1012] = {.lex_state = 297, .external_lex_state = 34},
  [1013] = {.lex_state = 0, .external_lex_state = 3},
  [1014] = {.lex_state = 297, .external_lex_state = 34},
  [1015] = {.lex_state = 297, .external_lex_state = 34},
  [1016] = {.lex_state = 0, .external_lex_state = 33},
  [1017] = {.lex_state = 297, .external_lex_state = 34},
  [1018] = {.lex_state = 297, .external_lex_state = 34},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 297, .external_lex_state = 34},
  [1021] = {.lex_state = 297, .external_lex_state = 34},
  [1022] = {.lex_state = 296},
  [1023] = {.lex_state = 297, .external_lex_state = 34},
  [1024] = {.lex_state = 297, .external_lex_state = 34},
  [1025] = {.lex_state = 1},
  [1026] = {.lex_state = 0, .external_lex_state = 30},
  [1027] = {.lex_state = 297, .external_lex_state = 34},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 297, .external_lex_state = 34},
  [1030] = {.lex_state = 296},
  [1031] = {.lex_state = 46},
  [1032] = {.lex_state = 19},
  [1033] = {.lex_state = 1},
  [1034] = {.lex_state = 1},
  [1035] = {.lex_state = 1},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 0, .external_lex_state = 33},
  [1038] = {.lex_state = 0, .external_lex_state = 33},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 296},
  [1041] = {.lex_state = 1},
  [1042] = {.lex_state = 0, .external_lex_state = 31},
  [1043] = {.lex_state = 1},
  [1044] = {.lex_state = 1},
  [1045] = {.lex_state = 1},
  [1046] = {.lex_state = 1},
  [1047] = {.lex_state = 1},
  [1048] = {.lex_state = 1},
  [1049] = {.lex_state = 1},
  [1050] = {.lex_state = 1},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 1},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 294},
  [1055] = {.lex_state = 0, .external_lex_state = 7},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 0, .external_lex_state = 35},
  [1058] = {.lex_state = 0, .external_lex_state = 34},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 0, .external_lex_state = 7},
  [1061] = {.lex_state = 0, .external_lex_state = 36},
  [1062] = {.lex_state = 0, .external_lex_state = 36},
  [1063] = {.lex_state = 0, .external_lex_state = 7},
  [1064] = {.lex_state = 0, .external_lex_state = 36},
  [1065] = {.lex_state = 0, .external_lex_state = 36},
  [1066] = {.lex_state = 0, .external_lex_state = 36},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 0, .external_lex_state = 36},
  [1069] = {.lex_state = 0, .external_lex_state = 34},
  [1070] = {.lex_state = 0, .external_lex_state = 34},
  [1071] = {.lex_state = 0, .external_lex_state = 34},
  [1072] = {.lex_state = 0, .external_lex_state = 7},
  [1073] = {.lex_state = 1},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 0, .external_lex_state = 7},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 46},
  [1078] = {.lex_state = 0, .external_lex_state = 36},
  [1079] = {.lex_state = 0, .external_lex_state = 36},
  [1080] = {.lex_state = 0, .external_lex_state = 34},
  [1081] = {.lex_state = 0, .external_lex_state = 34},
  [1082] = {.lex_state = 0, .external_lex_state = 34},
  [1083] = {.lex_state = 0, .external_lex_state = 7},
  [1084] = {.lex_state = 1},
  [1085] = {.lex_state = 1},
  [1086] = {.lex_state = 0, .external_lex_state = 36},
  [1087] = {.lex_state = 1},
  [1088] = {.lex_state = 0, .external_lex_state = 36},
  [1089] = {.lex_state = 298},
  [1090] = {.lex_state = 0, .external_lex_state = 36},
  [1091] = {.lex_state = 0, .external_lex_state = 34},
  [1092] = {.lex_state = 0, .external_lex_state = 34},
  [1093] = {.lex_state = 0, .external_lex_state = 34},
  [1094] = {.lex_state = 0, .external_lex_state = 7},
  [1095] = {.lex_state = 1},
  [1096] = {.lex_state = 32},
  [1097] = {.lex_state = 298},
  [1098] = {.lex_state = 0, .external_lex_state = 34},
  [1099] = {.lex_state = 0, .external_lex_state = 34},
  [1100] = {.lex_state = 297},
  [1101] = {.lex_state = 0, .external_lex_state = 7},
  [1102] = {.lex_state = 0, .external_lex_state = 36},
  [1103] = {.lex_state = 0, .external_lex_state = 36},
  [1104] = {.lex_state = 1},
  [1105] = {.lex_state = 0, .external_lex_state = 34},
  [1106] = {.lex_state = 0, .external_lex_state = 34},
  [1107] = {.lex_state = 0, .external_lex_state = 34},
  [1108] = {.lex_state = 0, .external_lex_state = 7},
  [1109] = {.lex_state = 0, .external_lex_state = 36},
  [1110] = {.lex_state = 0, .external_lex_state = 36},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 0, .external_lex_state = 34},
  [1113] = {.lex_state = 0, .external_lex_state = 34},
  [1114] = {.lex_state = 0, .external_lex_state = 34},
  [1115] = {.lex_state = 0, .external_lex_state = 7},
  [1116] = {.lex_state = 294},
  [1117] = {.lex_state = 1},
  [1118] = {.lex_state = 0, .external_lex_state = 36},
  [1119] = {.lex_state = 0, .external_lex_state = 34},
  [1120] = {.lex_state = 0, .external_lex_state = 34},
  [1121] = {.lex_state = 0, .external_lex_state = 34},
  [1122] = {.lex_state = 0, .external_lex_state = 7},
  [1123] = {.lex_state = 1},
  [1124] = {.lex_state = 295},
  [1125] = {.lex_state = 1},
  [1126] = {.lex_state = 0, .external_lex_state = 34},
  [1127] = {.lex_state = 0, .external_lex_state = 34},
  [1128] = {.lex_state = 0, .external_lex_state = 34},
  [1129] = {.lex_state = 0, .external_lex_state = 7},
  [1130] = {.lex_state = 0, .external_lex_state = 7},
  [1131] = {.lex_state = 0, .external_lex_state = 7},
  [1132] = {.lex_state = 0, .external_lex_state = 7},
  [1133] = {.lex_state = 46},
  [1134] = {.lex_state = 0, .external_lex_state = 34},
  [1135] = {.lex_state = 0, .external_lex_state = 36},
  [1136] = {.lex_state = 1},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 0, .external_lex_state = 36},
  [1139] = {.lex_state = 1},
  [1140] = {.lex_state = 0, .external_lex_state = 36},
  [1141] = {.lex_state = 1},
  [1142] = {.lex_state = 1},
  [1143] = {.lex_state = 0, .external_lex_state = 34},
  [1144] = {.lex_state = 298},
  [1145] = {.lex_state = 0, .external_lex_state = 34},
  [1146] = {.lex_state = 1},
  [1147] = {.lex_state = 1},
  [1148] = {.lex_state = 0, .external_lex_state = 36},
  [1149] = {.lex_state = 1},
  [1150] = {.lex_state = 46},
  [1151] = {.lex_state = 0, .external_lex_state = 34},
  [1152] = {.lex_state = 0, .external_lex_state = 7},
  [1153] = {.lex_state = 6},
  [1154] = {.lex_state = 0, .external_lex_state = 7},
  [1155] = {.lex_state = 1},
  [1156] = {.lex_state = 1},
  [1157] = {.lex_state = 46},
  [1158] = {.lex_state = 0, .external_lex_state = 36},
  [1159] = {.lex_state = 1},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 1},
  [1162] = {.lex_state = 0, .external_lex_state = 36},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 0, .external_lex_state = 36},
  [1169] = {.lex_state = 0, .external_lex_state = 7},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 1},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 1},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 0, .external_lex_state = 36},
  [1178] = {.lex_state = 0, .external_lex_state = 36},
  [1179] = {.lex_state = 0},
  [1180] = {.lex_state = 0, .external_lex_state = 36},
  [1181] = {.lex_state = 1},
  [1182] = {.lex_state = 46},
  [1183] = {.lex_state = 0, .external_lex_state = 34},
  [1184] = {.lex_state = 1},
  [1185] = {.lex_state = 1},
  [1186] = {.lex_state = 46},
  [1187] = {.lex_state = 1},
  [1188] = {.lex_state = 1},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 1},
  [1191] = {.lex_state = 1},
  [1192] = {.lex_state = 0, .external_lex_state = 36},
  [1193] = {.lex_state = 1},
  [1194] = {.lex_state = 0, .external_lex_state = 36},
  [1195] = {.lex_state = 1},
  [1196] = {.lex_state = 1},
  [1197] = {.lex_state = 0, .external_lex_state = 34},
  [1198] = {.lex_state = 0, .external_lex_state = 36},
  [1199] = {.lex_state = 46},
  [1200] = {.lex_state = 0, .external_lex_state = 34},
  [1201] = {.lex_state = 1},
  [1202] = {.lex_state = 0, .external_lex_state = 36},
  [1203] = {.lex_state = 0, .external_lex_state = 36},
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
    [sym_source_file] = STATE(1179),
    [sym_item] = STATE(117),
    [sym__trivia] = STATE(117),
    [aux_sym_source_file_repeat1] = STATE(117),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(617),
    [sym__collection_operation] = STATE(617),
    [sym_let_statement] = STATE(617),
    [sym_exec_statement] = STATE(617),
    [sym_spawn_statement] = STATE(617),
    [sym__invalid_exec_binding] = STATE(618),
    [sym__invalid_until_binding] = STATE(619),
    [sym_run_statement] = STATE(617),
    [sym__async_modifier] = STATE(1053),
    [sym__run] = STATE(620),
    [sym_await_statement] = STATE(617),
    [sym_implicit_run_statement] = STATE(617),
    [sym__implicit_run_line] = STATE(139),
    [sym_seek_statement] = STATE(617),
    [sym_ask_statement] = STATE(617),
    [sym_generate_statement] = STATE(617),
    [sym_reduce_statement] = STATE(617),
    [sym_map_statement] = STATE(617),
    [sym_keep_statement] = STATE(617),
    [sym_drop_statement] = STATE(617),
    [sym_sort_statement] = STATE(617),
    [sym_repeat_statement] = STATE(617),
    [sym_invalid_flow_reserved_statement] = STATE(617),
    [sym__query_directive_key] = STATE(954),
    [sym__route_directive_key] = STATE(954),
    [sym_directive_key] = STATE(622),
    [sym_role] = STATE(622),
    [sym__flow_reserved_word] = STATE(622),
    [sym__collection_binding_word] = STATE(622),
    [sym__async_await_binding_word] = STATE(622),
    [sym__agic_reserved_word] = STATE(622),
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
    [sym_flow_run_keyword] = ACTIONS(25),
    [sym_flow_async_keyword] = ACTIONS(27),
    [sym_flow_await_keyword] = ACTIONS(29),
    [sym_flow_exec_keyword] = ACTIONS(31),
    [sym_flow_spawn_keyword] = ACTIONS(33),
    [sym_flow_let_keyword] = ACTIONS(35),
    [sym_flow_seek_keyword] = ACTIONS(37),
    [sym_flow_ask_keyword] = ACTIONS(39),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(41),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(43),
    [sym_flow_map_keyword] = ACTIONS(45),
    [sym_flow_keep_keyword] = ACTIONS(47),
    [sym_flow_drop_keyword] = ACTIONS(49),
    [sym_flow_sort_keyword] = ACTIONS(51),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(53),
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
    [sym__flow_raw_text] = ACTIONS(55),
  },
  [3] = {
    [sym__flow_operation] = STATE(617),
    [sym__collection_operation] = STATE(617),
    [sym_let_statement] = STATE(617),
    [sym_exec_statement] = STATE(617),
    [sym_spawn_statement] = STATE(617),
    [sym__invalid_exec_binding] = STATE(618),
    [sym__invalid_until_binding] = STATE(619),
    [sym_run_statement] = STATE(617),
    [sym__async_modifier] = STATE(1053),
    [sym__run] = STATE(620),
    [sym_await_statement] = STATE(617),
    [sym_implicit_run_statement] = STATE(617),
    [sym__implicit_run_line] = STATE(139),
    [sym_seek_statement] = STATE(617),
    [sym_ask_statement] = STATE(617),
    [sym_generate_statement] = STATE(617),
    [sym_reduce_statement] = STATE(617),
    [sym_map_statement] = STATE(617),
    [sym_keep_statement] = STATE(617),
    [sym_drop_statement] = STATE(617),
    [sym_sort_statement] = STATE(617),
    [sym_repeat_statement] = STATE(617),
    [sym_invalid_flow_reserved_statement] = STATE(617),
    [sym__query_directive_key] = STATE(954),
    [sym__route_directive_key] = STATE(954),
    [sym_directive_key] = STATE(622),
    [sym_role] = STATE(622),
    [sym__flow_reserved_word] = STATE(622),
    [sym__collection_binding_word] = STATE(622),
    [sym__async_await_binding_word] = STATE(622),
    [sym__agic_reserved_word] = STATE(622),
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
    [sym_pass_keyword] = ACTIONS(57),
    [sym_flow_run_keyword] = ACTIONS(25),
    [sym_flow_async_keyword] = ACTIONS(27),
    [sym_flow_await_keyword] = ACTIONS(29),
    [sym_flow_exec_keyword] = ACTIONS(31),
    [sym_flow_spawn_keyword] = ACTIONS(33),
    [sym_flow_let_keyword] = ACTIONS(35),
    [sym_flow_seek_keyword] = ACTIONS(37),
    [sym_flow_ask_keyword] = ACTIONS(39),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(41),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(43),
    [sym_flow_map_keyword] = ACTIONS(45),
    [sym_flow_keep_keyword] = ACTIONS(47),
    [sym_flow_drop_keyword] = ACTIONS(49),
    [sym_flow_sort_keyword] = ACTIONS(51),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(53),
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
    [sym__flow_raw_text] = ACTIONS(55),
  },
  [4] = {
    [sym__flow_operation] = STATE(400),
    [sym__collection_operation] = STATE(400),
    [sym_let_statement] = STATE(400),
    [sym_exec_statement] = STATE(400),
    [sym_spawn_statement] = STATE(400),
    [sym__invalid_exec_binding] = STATE(403),
    [sym__invalid_until_binding] = STATE(405),
    [sym_run_statement] = STATE(400),
    [sym__async_modifier] = STATE(1056),
    [sym__run] = STATE(408),
    [sym_await_statement] = STATE(400),
    [sym_implicit_run_statement] = STATE(400),
    [sym__implicit_run_line] = STATE(89),
    [sym_seek_statement] = STATE(400),
    [sym_ask_statement] = STATE(400),
    [sym_generate_statement] = STATE(400),
    [sym_reduce_statement] = STATE(400),
    [sym_map_statement] = STATE(400),
    [sym_keep_statement] = STATE(400),
    [sym_drop_statement] = STATE(400),
    [sym_sort_statement] = STATE(400),
    [sym_repeat_statement] = STATE(400),
    [sym_invalid_flow_reserved_statement] = STATE(400),
    [sym__query_directive_key] = STATE(954),
    [sym__route_directive_key] = STATE(954),
    [sym_directive_key] = STATE(702),
    [sym_role] = STATE(702),
    [sym__flow_reserved_word] = STATE(702),
    [sym__collection_binding_word] = STATE(702),
    [sym__async_await_binding_word] = STATE(702),
    [sym__agic_reserved_word] = STATE(702),
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
    STATE(620), 1,
      sym__run,
    STATE(957), 1,
      sym_local_name,
    STATE(1053), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(662), 14,
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
    STATE(408), 1,
      sym__run,
    STATE(1033), 1,
      sym_local_name,
    STATE(1056), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(429), 14,
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
    STATE(491), 1,
      sym_text_inline,
    STATE(493), 1,
      sym__run,
    STATE(580), 1,
      sym_text_block,
    STATE(697), 1,
      sym_line_end,
    STATE(492), 7,
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
    STATE(259), 1,
      sym_text_inline,
    STATE(261), 1,
      sym__run,
    STATE(352), 1,
      sym_text_block,
    STATE(743), 1,
      sym_line_end,
    STATE(260), 7,
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
    STATE(108), 1,
      sym__unroled_message_line,
    STATE(593), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(592), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(594), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(954), 2,
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
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(191), 1,
      sym_pass_keyword,
    STATE(108), 1,
      sym__unroled_message_line,
    STATE(593), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(592), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(594), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(954), 2,
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
    STATE(649), 12,
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
    STATE(595), 1,
      sym__query_directive_key,
    STATE(980), 1,
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
  [496] = 7,
    ACTIONS(231), 1,
      anon_sym_lanes,
    ACTIONS(235), 1,
      sym_recall_keyword,
    STATE(760), 1,
      sym__query_directive_key,
    STATE(1052), 1,
      sym__route_directive_key,
    ACTIONS(225), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(233), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(223), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [525] = 9,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(243), 1,
      sym_newline,
    STATE(118), 1,
      sym_base_type,
    STATE(339), 1,
      sym_type_name,
    STATE(471), 1,
      sym_type,
    STATE(507), 1,
      sym_line_end,
    STATE(338), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [558] = 9,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(118), 1,
      sym_base_type,
    STATE(287), 1,
      sym_line_end,
    STATE(339), 1,
      sym_type_name,
    STATE(436), 1,
      sym_type,
    STATE(338), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [591] = 9,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(243), 1,
      sym_newline,
    STATE(118), 1,
      sym_base_type,
    STATE(339), 1,
      sym_type_name,
    STATE(383), 1,
      sym_type,
    STATE(532), 1,
      sym_line_end,
    STATE(338), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [624] = 9,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(118), 1,
      sym_base_type,
    STATE(273), 1,
      sym_line_end,
    STATE(339), 1,
      sym_type_name,
    STATE(430), 1,
      sym_type,
    STATE(338), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
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
    STATE(518), 1,
      sym__collection_binding_word,
    ACTIONS(249), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(517), 5,
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
    STATE(731), 1,
      sym__collection_binding_word,
    ACTIONS(251), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(279), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [709] = 12,
    ACTIONS(243), 1,
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
    STATE(65), 1,
      sym__required_space,
    STATE(635), 1,
      sym_runnable,
    STATE(761), 1,
      sym_line_end,
    STATE(762), 1,
      sym__invalid_modified_run_tail,
    STATE(763), 1,
      sym_inline_agic,
  [746] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(359), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(683), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(834), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [779] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(265), 1,
      sym_flow_if_keyword,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    STATE(359), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(674), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(813), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(269), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [812] = 12,
    ACTIONS(247), 1,
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
    STATE(59), 1,
      sym__required_space,
    STATE(250), 1,
      sym_line_end,
    STATE(251), 1,
      sym__invalid_modified_run_tail,
    STATE(252), 1,
      sym_inline_agic,
    STATE(719), 1,
      sym_runnable,
  [849] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(411), 1,
      sym__named_if_complement,
    STATE(434), 1,
      sym__inline_if_complement,
    STATE(435), 1,
      sym__if_complements,
    STATE(870), 1,
      sym__lanes_complement,
    STATE(871), 1,
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
    STATE(411), 1,
      sym__named_if_complement,
    STATE(434), 1,
      sym__inline_if_complement,
    STATE(439), 1,
      sym__if_complements,
    STATE(870), 1,
      sym__lanes_complement,
    STATE(872), 1,
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
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1141), 1,
      sym_type,
    STATE(621), 2,
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
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1087), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [963] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(389), 1,
      sym_base_type,
    STATE(767), 1,
      sym_type,
    STATE(825), 1,
      sym_type_name,
    STATE(824), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [987] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1166), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1011] = 10,
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
    STATE(409), 1,
      sym__lanes_complement,
    STATE(432), 1,
      sym__runnable_complements,
    STATE(433), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1043] = 10,
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
    STATE(342), 1,
      sym__lanes_complement,
    STATE(669), 1,
      sym__runnable_complements,
    STATE(671), 1,
      sym_inline_agic,
    STATE(807), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1075] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1189), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1099] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1035), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1123] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1137), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1147] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1084), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1171] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1111), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1195] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1190), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1219] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1073), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1243] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1142), 1,
      sym_type,
    STATE(621), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1267] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(389), 1,
      sym_base_type,
    STATE(783), 1,
      sym_type,
    STATE(825), 1,
      sym_type_name,
    STATE(824), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1291] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1155), 1,
      sym_type,
    STATE(621), 2,
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
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1156), 1,
      sym_type,
    STATE(621), 2,
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
    STATE(210), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(986), 1,
      sym_type,
    STATE(621), 2,
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
    STATE(255), 1,
      sym_property,
    STATE(1109), 1,
      sym__cap_text_body,
    STATE(1110), 1,
      sym_cap_body,
    STATE(68), 2,
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
    STATE(255), 1,
      sym_property,
    STATE(1109), 1,
      sym__cap_text_body,
    STATE(1203), 1,
      sym_cap_body,
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
    STATE(255), 1,
      sym_property,
    STATE(1086), 1,
      sym_cap_body,
    STATE(1109), 1,
      sym__cap_text_body,
    STATE(68), 2,
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
    STATE(255), 1,
      sym_property,
    STATE(1066), 1,
      sym_cap_body,
    STATE(1109), 1,
      sym__cap_text_body,
    STATE(45), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1479] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(325), 1,
      sym_flow_run_keyword,
    STATE(408), 1,
      sym__run,
    STATE(733), 1,
      sym__async_await_binding_word,
    STATE(1056), 1,
      sym__async_modifier,
    STATE(279), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1503] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(29), 1,
      sym_flow_await_keyword,
    ACTIONS(327), 1,
      sym_flow_run_keyword,
    STATE(520), 1,
      sym__async_await_binding_word,
    STATE(620), 1,
      sym__run,
    STATE(1053), 1,
      sym__async_modifier,
    STATE(517), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1527] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(329), 1,
      sym_blank_line,
    ACTIONS(331), 1,
      sym__dedent,
    STATE(1088), 1,
      sym__cap_text_body,
    STATE(54), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1551] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    ACTIONS(335), 1,
      sym_text_line,
    STATE(538), 1,
      sym_line_end,
    STATE(653), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [1579] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(337), 1,
      sym_arrow,
    ACTIONS(339), 1,
      sym_colon,
    STATE(168), 1,
      sym__reduce_inline_block,
    STATE(431), 1,
      sym__reduce_inline_line,
    STATE(709), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1605] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(341), 1,
      sym_blank_line,
    ACTIONS(343), 1,
      sym__dedent,
    STATE(1068), 1,
      sym__cap_text_body,
    STATE(75), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1629] = 8,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    STATE(411), 1,
      sym__named_if_complement,
    STATE(434), 1,
      sym__inline_if_complement,
    STATE(435), 1,
      sym__if_complements,
    STATE(870), 1,
      sym__lanes_complement,
    STATE(871), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1655] = 8,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    STATE(411), 1,
      sym__named_if_complement,
    STATE(434), 1,
      sym__inline_if_complement,
    STATE(439), 1,
      sym__if_complements,
    STATE(870), 1,
      sym__lanes_complement,
    STATE(872), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1681] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(359), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(674), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(813), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1707] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(359), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(683), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(834), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1733] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_colon,
    ACTIONS(357), 1,
      sym_text_line,
    STATE(273), 1,
      sym_line_end,
    STATE(275), 1,
      sym_inline_agic,
    STATE(729), 1,
      sym_runnable,
  [1761] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_arrow,
    ACTIONS(361), 1,
      sym_colon,
    STATE(124), 1,
      sym__reduce_inline_block,
    STATE(666), 1,
      sym__reduce_inline_line,
    STATE(668), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1787] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    ACTIONS(363), 1,
      sym_text_line,
    STATE(293), 1,
      sym_line_end,
    STATE(428), 1,
      sym_inline_agic,
    STATE(861), 1,
      sym_runnable,
  [1815] = 8,
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
    STATE(843), 1,
      sym__repeat_count_complement,
    STATE(1059), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1841] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(367), 1,
      sym__other_integer_literal,
    ACTIONS(369), 1,
      sym_flow_windowing_keyword,
    ACTIONS(373), 1,
      sym_colon,
    STATE(950), 1,
      sym__repeat_count_complement,
    STATE(1193), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1867] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(375), 1,
      sym_blank_line,
    ACTIONS(377), 1,
      sym__dedent,
    STATE(1177), 1,
      sym__cap_text_body,
    STATE(66), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1891] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(261), 1,
      sym_snake_name,
    ACTIONS(379), 1,
      sym_arrow,
    ACTIONS(381), 1,
      sym_colon,
    ACTIONS(383), 1,
      sym_text_line,
    STATE(507), 1,
      sym_line_end,
    STATE(508), 1,
      sym_inline_agic,
    STATE(509), 1,
      sym_runnable,
  [1919] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(331), 1,
      sym__dedent,
    ACTIONS(341), 1,
      sym_blank_line,
    STATE(1088), 1,
      sym__cap_text_body,
    STATE(75), 3,
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
    STATE(112), 1,
      sym__flow_statement,
    STATE(1061), 1,
      sym__repeat_statements,
    STATE(196), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1966] = 6,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(396), 1,
      sym__comment_start,
    ACTIONS(401), 1,
      sym__line_start,
    STATE(255), 1,
      sym_property,
    ACTIONS(399), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(68), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1987] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(858), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2010] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(425), 1,
      sym_inline_agic,
    STATE(860), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2033] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(428), 1,
      sym_inline_agic,
    STATE(861), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2056] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(651), 1,
      sym_inline_agic,
    STATE(789), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2079] = 6,
    ACTIONS(404), 1,
      sym_blank_line,
    ACTIONS(406), 1,
      sym__comment_start,
    ACTIONS(410), 1,
      sym__line_start,
    STATE(423), 1,
      sym__flow_statement,
    ACTIONS(408), 2,
      sym__dedent,
      sym__until_start,
    STATE(76), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2100] = 5,
    ACTIONS(412), 1,
      sym_blank_line,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(420), 1,
      sym__directive_start,
    ACTIONS(418), 2,
      sym__dedent,
      sym__line_start,
    STATE(74), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2119] = 5,
    ACTIONS(423), 1,
      sym_blank_line,
    ACTIONS(426), 1,
      sym__comment_start,
    ACTIONS(431), 1,
      sym__line_start,
    ACTIONS(429), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(75), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2138] = 6,
    ACTIONS(406), 1,
      sym__comment_start,
    ACTIONS(410), 1,
      sym__line_start,
    ACTIONS(434), 1,
      sym_blank_line,
    STATE(423), 1,
      sym__flow_statement,
    ACTIONS(436), 2,
      sym__dedent,
      sym__until_start,
    STATE(80), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2159] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(652), 1,
      sym_inline_agic,
    STATE(791), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2182] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    STATE(409), 1,
      sym__lanes_complement,
    STATE(432), 1,
      sym__runnable_complements,
    STATE(433), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym__named_using_complement,
  [2207] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(444), 1,
      sym_blank_line,
    ACTIONS(446), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1180), 1,
      sym__repeat_statements,
    STATE(83), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2230] = 6,
    ACTIONS(448), 1,
      sym_blank_line,
    ACTIONS(451), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__line_start,
    STATE(423), 1,
      sym__flow_statement,
    ACTIONS(454), 2,
      sym__dedent,
      sym__until_start,
    STATE(80), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2251] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    STATE(409), 1,
      sym__lanes_complement,
    STATE(433), 1,
      sym_inline_agic,
    STATE(477), 1,
      sym__runnable_complements,
    STATE(867), 1,
      sym__named_using_complement,
  [2276] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    STATE(342), 1,
      sym__lanes_complement,
    STATE(669), 1,
      sym__runnable_complements,
    STATE(671), 1,
      sym_inline_agic,
    STATE(807), 1,
      sym__named_using_complement,
  [2301] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(463), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1162), 1,
      sym__repeat_statements,
    STATE(196), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2324] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(465), 1,
      sym_blank_line,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1148), 1,
      sym__repeat_statements,
    STATE(86), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2347] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    STATE(342), 1,
      sym__lanes_complement,
    STATE(671), 1,
      sym_inline_agic,
    STATE(728), 1,
      sym__runnable_complements,
    STATE(807), 1,
      sym__named_using_complement,
  [2372] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(469), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1135), 1,
      sym__repeat_statements,
    STATE(196), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2395] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(333), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2418] = 5,
    ACTIONS(471), 1,
      sym_blank_line,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__directive_start,
    ACTIONS(475), 2,
      sym__dedent,
      sym__line_start,
    STATE(95), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2437] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(479), 1,
      sym_blank_line,
    STATE(90), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(481), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2456] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(483), 1,
      sym_blank_line,
    STATE(92), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(485), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2475] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym_blank_line,
    ACTIONS(489), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1192), 1,
      sym__repeat_statements,
    STATE(67), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2498] = 5,
    ACTIONS(491), 1,
      sym_blank_line,
    ACTIONS(496), 1,
      sym__flow_raw_text,
    STATE(92), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(185), 1,
      sym__implicit_run_line,
    ACTIONS(494), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2517] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(499), 1,
      sym_blank_line,
    ACTIONS(501), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1062), 1,
      sym__repeat_statements,
    STATE(94), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2540] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(503), 1,
      sym__dedent,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1065), 1,
      sym__repeat_statements,
    STATE(196), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2563] = 5,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__directive_start,
    ACTIONS(505), 1,
      sym_blank_line,
    ACTIONS(507), 2,
      sym__dedent,
      sym__line_start,
    STATE(74), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2582] = 5,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__text_indent,
    STATE(355), 1,
      sym_text_body,
    STATE(953), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(511), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2601] = 5,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__text_indent,
    STATE(355), 1,
      sym_text_body,
    STATE(953), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(515), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2620] = 5,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__text_indent,
    STATE(355), 1,
      sym_text_body,
    STATE(953), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2639] = 5,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__text_indent,
    STATE(355), 1,
      sym_text_body,
    STATE(953), 1,
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
    STATE(112), 1,
      sym__flow_statement,
    STATE(1198), 1,
      sym__repeat_statements,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2678] = 6,
    ACTIONS(523), 1,
      sym__line_start,
    ACTIONS(525), 1,
      sym__directive_start,
    STATE(102), 1,
      sym_directive,
    STATE(138), 1,
      sym__flow_statement,
    STATE(933), 1,
      sym__directives,
    STATE(1102), 2,
      sym_statements,
      sym__pass_statement,
  [2698] = 5,
    ACTIONS(475), 1,
      sym__line_start,
    ACTIONS(525), 1,
      sym__directive_start,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(529), 1,
      sym__comment_start,
    STATE(104), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2716] = 4,
    ACTIONS(533), 1,
      sym_blank_line,
    ACTIONS(536), 1,
      sym__comment_start,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(531), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2732] = 5,
    ACTIONS(507), 1,
      sym__line_start,
    ACTIONS(525), 1,
      sym__directive_start,
    ACTIONS(529), 1,
      sym__comment_start,
    ACTIONS(539), 1,
      sym_blank_line,
    STATE(106), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2750] = 5,
    ACTIONS(541), 1,
      sym_blank_line,
    ACTIONS(544), 1,
      sym__comment_start,
    ACTIONS(547), 1,
      sym__dedent,
    ACTIONS(549), 1,
      sym__line_start,
    STATE(105), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2768] = 5,
    ACTIONS(418), 1,
      sym__line_start,
    ACTIONS(552), 1,
      sym_blank_line,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(558), 1,
      sym__directive_start,
    STATE(106), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2786] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(187), 1,
      sym__implicit_run_line,
    ACTIONS(485), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2800] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(561), 1,
      sym_blank_line,
    STATE(165), 1,
      aux_sym_unroled_message_repeat1,
    STATE(254), 1,
      sym__unroled_message_line,
    ACTIONS(563), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2818] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(187), 1,
      sym__implicit_run_line,
    ACTIONS(565), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2832] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(567), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(607), 1,
      sym_context_body,
    STATE(608), 1,
      sym_text_inline,
    STATE(609), 1,
      sym_text_block,
  [2854] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(567), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(612), 1,
      sym_instruct_body,
    STATE(613), 1,
      sym_text_inline,
  [2876] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(408), 1,
      sym__dedent,
    ACTIONS(569), 1,
      sym_blank_line,
    STATE(764), 1,
      sym__flow_statement,
    STATE(114), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2896] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(571), 1,
      sym_blank_line,
    ACTIONS(573), 1,
      sym__dedent,
    ACTIONS(575), 1,
      sym__line_start,
    STATE(105), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2914] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(436), 1,
      sym__dedent,
    ACTIONS(577), 1,
      sym_blank_line,
    STATE(764), 1,
      sym__flow_statement,
    STATE(116), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2934] = 5,
    ACTIONS(581), 1,
      sym_blank_line,
    ACTIONS(583), 1,
      sym__comment_start,
    ACTIONS(585), 1,
      sym__indent,
    ACTIONS(579), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2952] = 6,
    ACTIONS(454), 1,
      sym__dedent,
    ACTIONS(587), 1,
      sym_blank_line,
    ACTIONS(590), 1,
      sym__comment_start,
    ACTIONS(593), 1,
      sym__line_start,
    STATE(764), 1,
      sym__flow_statement,
    STATE(116), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2972] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      sym_blank_line,
    STATE(121), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2990] = 5,
    ACTIONS(602), 1,
      sym_array_suffix,
    ACTIONS(604), 1,
      sym_newline,
    STATE(119), 1,
      aux_sym_type_repeat1,
    STATE(341), 1,
      sym_type_suffix,
    ACTIONS(600), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3008] = 5,
    ACTIONS(602), 1,
      sym_array_suffix,
    ACTIONS(608), 1,
      sym_newline,
    STATE(120), 1,
      aux_sym_type_repeat1,
    STATE(341), 1,
      sym_type_suffix,
    ACTIONS(606), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3026] = 5,
    ACTIONS(612), 1,
      sym_array_suffix,
    ACTIONS(615), 1,
      sym_newline,
    STATE(120), 1,
      aux_sym_type_repeat1,
    STATE(341), 1,
      sym_type_suffix,
    ACTIONS(610), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3044] = 5,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
    ACTIONS(619), 1,
      sym_blank_line,
    ACTIONS(622), 1,
      sym__comment_start,
    ACTIONS(625), 1,
      sym__line_start,
    STATE(121), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3062] = 5,
    ACTIONS(630), 1,
      sym__module_doc_start,
    ACTIONS(632), 1,
      sym__item_doc_start,
    ACTIONS(634), 1,
      sym__param_item_doc_start,
    ACTIONS(628), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(814), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3080] = 5,
    ACTIONS(583), 1,
      sym__comment_start,
    ACTIONS(638), 1,
      sym_blank_line,
    ACTIONS(640), 1,
      sym__indent,
    ACTIONS(636), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(115), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3098] = 6,
    ACTIONS(642), 1,
      sym_blank_line,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(646), 1,
      sym__dedent,
    ACTIONS(648), 1,
      sym__from_start,
    STATE(413), 1,
      sym__from_complement,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3118] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(575), 1,
      sym__line_start,
    ACTIONS(650), 1,
      sym_blank_line,
    ACTIONS(652), 1,
      sym__dedent,
    STATE(113), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3136] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(654), 1,
      sym_blank_line,
    STATE(135), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(390), 1,
      sym__implicit_run_line,
    ACTIONS(485), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3154] = 5,
    ACTIONS(656), 1,
      sym_blank_line,
    ACTIONS(659), 1,
      sym__comment_start,
    ACTIONS(662), 1,
      sym__dedent,
    ACTIONS(664), 1,
      sym__line_start,
    STATE(127), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3172] = 6,
    ACTIONS(477), 1,
      sym__directive_start,
    ACTIONS(667), 1,
      sym__line_start,
    STATE(88), 1,
      sym_directive,
    STATE(125), 1,
      sym_message,
    STATE(599), 1,
      sym__directives,
    STATE(1118), 2,
      sym_messages,
      sym__pass_statement,
  [3192] = 5,
    ACTIONS(669), 1,
      sym_blank_line,
    ACTIONS(672), 1,
      sym__comment_start,
    ACTIONS(675), 1,
      sym__dedent,
    ACTIONS(677), 1,
      sym__line_start,
    STATE(129), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3210] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(680), 1,
      sym_blank_line,
    ACTIONS(682), 1,
      sym__dedent,
    ACTIONS(684), 1,
      sym__line_start,
    STATE(129), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3228] = 5,
    ACTIONS(686), 1,
      sym_blank_line,
    ACTIONS(691), 1,
      sym__agic_raw_text,
    STATE(131), 1,
      aux_sym_unroled_message_repeat1,
    STATE(254), 1,
      sym__unroled_message_line,
    ACTIONS(689), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3246] = 6,
    ACTIONS(477), 1,
      sym__directive_start,
    ACTIONS(667), 1,
      sym__line_start,
    STATE(88), 1,
      sym_directive,
    STATE(125), 1,
      sym_message,
    STATE(506), 1,
      sym__directives,
    STATE(1079), 2,
      sym_messages,
      sym__pass_statement,
  [3266] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(567), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_inline,
    STATE(609), 1,
      sym_text_block,
    STATE(664), 1,
      sym_context_body,
  [3288] = 5,
    ACTIONS(581), 1,
      sym_blank_line,
    ACTIONS(583), 1,
      sym__comment_start,
    ACTIONS(696), 1,
      sym__indent,
    ACTIONS(694), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3306] = 5,
    ACTIONS(698), 1,
      sym_blank_line,
    ACTIONS(701), 1,
      sym__flow_raw_text,
    STATE(135), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(390), 1,
      sym__implicit_run_line,
    ACTIONS(494), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3324] = 5,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__text_indent,
    STATE(582), 1,
      sym_text_body,
    STATE(946), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3342] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(567), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(613), 1,
      sym_text_inline,
    STATE(665), 1,
      sym_instruct_body,
  [3364] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(708), 1,
      sym_blank_line,
    ACTIONS(710), 1,
      sym__dedent,
    STATE(142), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3382] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(712), 1,
      sym_blank_line,
    STATE(126), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(390), 1,
      sym__implicit_run_line,
    ACTIONS(481), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3400] = 5,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__text_indent,
    STATE(582), 1,
      sym_text_body,
    STATE(946), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(511), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3418] = 6,
    ACTIONS(523), 1,
      sym__line_start,
    ACTIONS(525), 1,
      sym__directive_start,
    STATE(102), 1,
      sym_directive,
    STATE(138), 1,
      sym__flow_statement,
    STATE(769), 1,
      sym__directives,
    STATE(1158), 2,
      sym_statements,
      sym__pass_statement,
  [3438] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(714), 1,
      sym_blank_line,
    ACTIONS(716), 1,
      sym__dedent,
    STATE(127), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3456] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(680), 1,
      sym_blank_line,
    ACTIONS(684), 1,
      sym__line_start,
    ACTIONS(718), 1,
      sym__dedent,
    STATE(129), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3474] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(720), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1140), 1,
      sym__repeat_statements,
    STATE(148), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3494] = 5,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__text_indent,
    STATE(582), 1,
      sym_text_body,
    STATE(946), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(515), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3512] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(684), 1,
      sym__line_start,
    ACTIONS(718), 1,
      sym__dedent,
    ACTIONS(722), 1,
      sym_blank_line,
    STATE(130), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3530] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(684), 1,
      sym__line_start,
    ACTIONS(724), 1,
      sym_blank_line,
    ACTIONS(726), 1,
      sym__dedent,
    STATE(143), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3548] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(521), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1078), 1,
      sym__repeat_statements,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3568] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(728), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1103), 1,
      sym__repeat_statements,
    STATE(167), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3588] = 5,
    ACTIONS(732), 1,
      sym__module_doc_start,
    ACTIONS(734), 1,
      sym__item_doc_start,
    ACTIONS(736), 1,
      sym__param_item_doc_start,
    ACTIONS(730), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(329), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3606] = 5,
    ACTIONS(740), 1,
      sym__module_doc_start,
    ACTIONS(742), 1,
      sym__item_doc_start,
    ACTIONS(744), 1,
      sym__param_item_doc_start,
    ACTIONS(738), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(345), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3624] = 5,
    ACTIONS(748), 1,
      sym__module_doc_start,
    ACTIONS(750), 1,
      sym__item_doc_start,
    ACTIONS(752), 1,
      sym__param_item_doc_start,
    ACTIONS(746), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(360), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3642] = 5,
    ACTIONS(756), 1,
      sym__module_doc_start,
    ACTIONS(758), 1,
      sym__item_doc_start,
    ACTIONS(760), 1,
      sym__param_item_doc_start,
    ACTIONS(754), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(675), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3660] = 5,
    ACTIONS(764), 1,
      sym__module_doc_start,
    ACTIONS(766), 1,
      sym__item_doc_start,
    ACTIONS(768), 1,
      sym__param_item_doc_start,
    ACTIONS(762), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(684), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3678] = 5,
    ACTIONS(772), 1,
      sym__module_doc_start,
    ACTIONS(774), 1,
      sym__item_doc_start,
    ACTIONS(776), 1,
      sym__param_item_doc_start,
    ACTIONS(770), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(828), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3696] = 5,
    ACTIONS(780), 1,
      sym__module_doc_start,
    ACTIONS(782), 1,
      sym__item_doc_start,
    ACTIONS(784), 1,
      sym__param_item_doc_start,
    ACTIONS(778), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(835), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3714] = 5,
    ACTIONS(788), 1,
      sym__module_doc_start,
    ACTIONS(790), 1,
      sym__item_doc_start,
    ACTIONS(792), 1,
      sym__param_item_doc_start,
    ACTIONS(786), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(373), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3732] = 4,
    STATE(710), 1,
      sym_recall_source,
    STATE(876), 1,
      sym_recall_value,
    ACTIONS(794), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(796), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3748] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(798), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1178), 1,
      sym__repeat_statements,
    STATE(100), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3768] = 5,
    ACTIONS(802), 1,
      sym__module_doc_start,
    ACTIONS(804), 1,
      sym__item_doc_start,
    ACTIONS(806), 1,
      sym__param_item_doc_start,
    ACTIONS(800), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(641), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3786] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(808), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1202), 1,
      sym__repeat_statements,
    STATE(162), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3806] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(521), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1064), 1,
      sym__repeat_statements,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3826] = 5,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__text_indent,
    STATE(582), 1,
      sym_text_body,
    STATE(946), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3844] = 5,
    ACTIONS(583), 1,
      sym__comment_start,
    ACTIONS(812), 1,
      sym_blank_line,
    ACTIONS(814), 1,
      sym__indent,
    ACTIONS(810), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3862] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(816), 1,
      sym_blank_line,
    STATE(131), 1,
      aux_sym_unroled_message_repeat1,
    STATE(254), 1,
      sym__unroled_message_line,
    ACTIONS(818), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3880] = 4,
    STATE(710), 1,
      sym_recall_source,
    STATE(868), 1,
      sym_recall_value,
    ACTIONS(794), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(796), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3896] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(521), 1,
      sym_blank_line,
    STATE(112), 1,
      sym__flow_statement,
    STATE(1090), 1,
      sym__repeat_statements,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3916] = 6,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(648), 1,
      sym__from_start,
    ACTIONS(820), 1,
      sym_blank_line,
    ACTIONS(822), 1,
      sym__dedent,
    STATE(415), 1,
      sym__from_complement,
    STATE(416), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3936] = 6,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(824), 1,
      sym_flow_by_keyword,
    STATE(248), 1,
      sym__inline_by_complement,
    STATE(249), 1,
      sym__by_complements,
    STATE(418), 1,
      sym__named_by_complement,
    STATE(886), 1,
      sym__lanes_complement,
  [3955] = 5,
    ACTIONS(826), 1,
      sym_blank_line,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(830), 1,
      sym__indent,
    STATE(485), 1,
      sym_struct_body,
    STATE(384), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3972] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(832), 1,
      sym_text_line,
    STATE(740), 1,
      sym_line_end,
    STATE(795), 1,
      sym_text_block,
    STATE(928), 1,
      sym_text_inline,
  [3991] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym__indent,
    STATE(545), 1,
      sym_repeat_body,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4008] = 6,
    ACTIONS(838), 1,
      sym__inline_comment,
    ACTIONS(840), 1,
      sym_text_line,
    ACTIONS(842), 1,
      sym_newline,
    STATE(163), 1,
      sym_line_end,
    STATE(513), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
  [4027] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(402), 1,
      sym__unroled_message_line,
    ACTIONS(818), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4040] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(690), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4057] = 6,
    ACTIONS(838), 1,
      sym__inline_comment,
    ACTIONS(842), 1,
      sym_newline,
    ACTIONS(848), 1,
      sym_text_line,
    STATE(136), 1,
      sym_line_end,
    STATE(513), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
  [4076] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(567), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(796), 1,
      sym_text_inline,
  [4095] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(697), 1,
      sym_line_end,
    STATE(707), 1,
      sym_text_inline,
  [4114] = 4,
    ACTIONS(850), 1,
      sym_array_suffix,
    STATE(182), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(608), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4129] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(715), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4146] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(588), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4163] = 4,
    ACTIONS(852), 1,
      sym_array_suffix,
    STATE(182), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(615), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4178] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(697), 1,
      sym_line_end,
    STATE(717), 1,
      sym_text_inline,
  [4197] = 1,
    ACTIONS(855), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4206] = 1,
    ACTIONS(857), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4215] = 6,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(859), 1,
      sym_arrow,
    ACTIONS(861), 1,
      sym_colon,
    STATE(124), 1,
      sym__reduce_inline_block,
    STATE(666), 1,
      sym__reduce_inline_line,
    STATE(668), 1,
      sym__named_using_complement,
  [4234] = 1,
    ACTIONS(863), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4243] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(643), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4260] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(644), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4277] = 6,
    ACTIONS(865), 1,
      sym_arrow,
    ACTIONS(867), 1,
      sym_colon,
    ACTIONS(869), 1,
      sym_lparen,
    ACTIONS(871), 1,
      sym_snake_name,
    STATE(521), 1,
      sym_agic_name,
    STATE(971), 1,
      sym_params,
  [4296] = 6,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(873), 1,
      sym__other_integer_literal,
    ACTIONS(875), 1,
      sym_flow_windowing_keyword,
    ACTIONS(877), 1,
      sym_colon,
    STATE(843), 1,
      sym__repeat_count_complement,
    STATE(1059), 1,
      sym__window_complement,
  [4315] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(697), 1,
      sym_line_end,
    STATE(727), 1,
      sym_text_inline,
  [4334] = 6,
    ACTIONS(869), 1,
      sym_lparen,
    ACTIONS(879), 1,
      sym_arrow,
    ACTIONS(881), 1,
      sym_colon,
    ACTIONS(883), 1,
      sym_snake_name,
    STATE(558), 1,
      sym_flow_name,
    STATE(1019), 1,
      sym_params,
  [4353] = 4,
    ACTIONS(889), 1,
      sym_newline,
    STATE(790), 1,
      sym_local_reference,
    ACTIONS(885), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(887), 2,
      anon_sym__,
      sym_snake_name,
  [4368] = 6,
    ACTIONS(838), 1,
      sym__inline_comment,
    ACTIONS(842), 1,
      sym_newline,
    ACTIONS(891), 1,
      sym_text_line,
    STATE(145), 1,
      sym_line_end,
    STATE(580), 1,
      sym_text_block,
    STATE(717), 1,
      sym_text_inline,
  [4387] = 4,
    ACTIONS(893), 1,
      sym_blank_line,
    ACTIONS(896), 1,
      sym__comment_start,
    ACTIONS(531), 2,
      sym__dedent,
      sym__line_start,
    STATE(196), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4402] = 1,
    ACTIONS(899), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4411] = 1,
    ACTIONS(901), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4420] = 6,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(903), 1,
      sym_flow_by_keyword,
    STATE(422), 1,
      sym__named_by_complement,
    STATE(751), 1,
      sym__inline_by_complement,
    STATE(754), 1,
      sym__by_complements,
    STATE(935), 1,
      sym__lanes_complement,
  [4439] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(528), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4456] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(438), 1,
      sym__implicit_run_line,
    ACTIONS(485), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4469] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(748), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4486] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(482), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4503] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(531), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4520] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(626), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4537] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(352), 1,
      sym_text_block,
    STATE(455), 1,
      sym_text_inline,
    STATE(743), 1,
      sym_line_end,
  [4556] = 6,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(909), 1,
      sym_arrow,
    ACTIONS(911), 1,
      sym_colon,
    STATE(168), 1,
      sym__reduce_inline_block,
    STATE(431), 1,
      sym__reduce_inline_line,
    STATE(709), 1,
      sym__named_using_complement,
  [4575] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(402), 1,
      sym__unroled_message_line,
    ACTIONS(913), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4588] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(352), 1,
      sym_text_block,
    STATE(473), 1,
      sym_text_inline,
    STATE(743), 1,
      sym_line_end,
  [4607] = 4,
    ACTIONS(850), 1,
      sym_array_suffix,
    STATE(179), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(604), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4622] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(915), 1,
      sym_blank_line,
    ACTIONS(917), 1,
      sym__indent,
    STATE(272), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4639] = 6,
    ACTIONS(919), 1,
      sym__inline_comment,
    ACTIONS(921), 1,
      sym_text_line,
    ACTIONS(923), 1,
      sym_newline,
    STATE(96), 1,
      sym_line_end,
    STATE(352), 1,
      sym_text_block,
    STATE(455), 1,
      sym_text_inline,
  [4658] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(276), 1,
      sym_text_inline,
    STATE(352), 1,
      sym_text_block,
    STATE(743), 1,
      sym_line_end,
  [4677] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym__indent,
    STATE(505), 1,
      sym_repeat_body,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4694] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(199), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(925), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4709] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(915), 1,
      sym_blank_line,
    ACTIONS(917), 1,
      sym__indent,
    STATE(285), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4726] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(915), 1,
      sym_blank_line,
    ACTIONS(917), 1,
      sym__indent,
    STATE(286), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4743] = 6,
    ACTIONS(838), 1,
      sym__inline_comment,
    ACTIONS(842), 1,
      sym_newline,
    ACTIONS(927), 1,
      sym_text_line,
    STATE(140), 1,
      sym_line_end,
    STATE(580), 1,
      sym_text_block,
    STATE(717), 1,
      sym_text_inline,
  [4762] = 6,
    ACTIONS(919), 1,
      sym__inline_comment,
    ACTIONS(923), 1,
      sym_newline,
    ACTIONS(929), 1,
      sym_text_line,
    STATE(97), 1,
      sym_line_end,
    STATE(352), 1,
      sym_text_block,
    STATE(455), 1,
      sym_text_inline,
  [4781] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(604), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4798] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(915), 1,
      sym_blank_line,
    ACTIONS(917), 1,
      sym__indent,
    STATE(298), 1,
      sym_repeat_body,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4815] = 6,
    ACTIONS(919), 1,
      sym__inline_comment,
    ACTIONS(923), 1,
      sym_newline,
    ACTIONS(931), 1,
      sym_text_line,
    STATE(98), 1,
      sym_line_end,
    STATE(276), 1,
      sym_text_inline,
    STATE(352), 1,
      sym_text_block,
  [4834] = 6,
    ACTIONS(919), 1,
      sym__inline_comment,
    ACTIONS(923), 1,
      sym_newline,
    ACTIONS(933), 1,
      sym_text_line,
    STATE(99), 1,
      sym_line_end,
    STATE(276), 1,
      sym_text_inline,
    STATE(352), 1,
      sym_text_block,
  [4853] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(647), 1,
      sym_text_inline,
    STATE(697), 1,
      sym_line_end,
  [4872] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(438), 1,
      sym__implicit_run_line,
    ACTIONS(565), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4885] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(544), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4902] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(513), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
    STATE(697), 1,
      sym_line_end,
  [4921] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(547), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4938] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(699), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4955] = 4,
    ACTIONS(889), 1,
      sym_newline,
    STATE(859), 1,
      sym_local_reference,
    ACTIONS(885), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(887), 2,
      anon_sym__,
      sym_snake_name,
  [4970] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(169), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(925), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4985] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym__indent,
    STATE(529), 1,
      sym_repeat_body,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5002] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(834), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym__indent,
    STATE(530), 1,
      sym_repeat_body,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5019] = 6,
    ACTIONS(365), 1,
      sym__one_integer_literal,
    ACTIONS(873), 1,
      sym__other_integer_literal,
    ACTIONS(875), 1,
      sym_flow_windowing_keyword,
    ACTIONS(935), 1,
      sym_colon,
    STATE(950), 1,
      sym__repeat_count_complement,
    STATE(1193), 1,
      sym__window_complement,
  [5038] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(905), 1,
      sym_blank_line,
    ACTIONS(907), 1,
      sym__indent,
    STATE(700), 1,
      sym_flow_body,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5055] = 5,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__indent,
    STATE(601), 1,
      sym_agic_body,
    STATE(299), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5072] = 1,
    ACTIONS(937), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5080] = 1,
    ACTIONS(939), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5088] = 1,
    ACTIONS(941), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5096] = 1,
    ACTIONS(943), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5104] = 1,
    ACTIONS(945), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5112] = 1,
    ACTIONS(947), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5120] = 1,
    ACTIONS(949), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(951), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(953), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(955), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(957), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 1,
    ACTIONS(959), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5168] = 1,
    ACTIONS(961), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5176] = 1,
    ACTIONS(963), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(965), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 1,
    ACTIONS(967), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5200] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(971), 1,
      sym__dedent,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5214] = 1,
    ACTIONS(975), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5222] = 1,
    ACTIONS(977), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5230] = 1,
    ACTIONS(979), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5238] = 1,
    ACTIONS(981), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5246] = 1,
    ACTIONS(983), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5254] = 1,
    ACTIONS(985), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5262] = 1,
    ACTIONS(987), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5270] = 1,
    ACTIONS(989), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5278] = 1,
    ACTIONS(991), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5286] = 1,
    ACTIONS(993), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5294] = 1,
    ACTIONS(995), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(997), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(999), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(1001), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(1003), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(1005), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1007), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1009), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1011), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(511), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 5,
    ACTIONS(410), 1,
      sym__line_start,
    ACTIONS(1013), 1,
      sym__until_start,
    STATE(73), 1,
      sym__flow_statement,
    STATE(149), 1,
      sym_until_clause,
    STATE(944), 1,
      sym__repeat_statements,
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
    ACTIONS(1025), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 1,
    ACTIONS(1027), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1029), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1031), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1035), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5476] = 1,
    ACTIONS(1037), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5484] = 1,
    ACTIONS(1039), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5492] = 1,
    ACTIONS(515), 5,
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
  [5508] = 5,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(726), 1,
      sym_inline_agic,
    STATE(898), 1,
      sym_runnable,
  [5524] = 1,
    ACTIONS(1045), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5532] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5540] = 1,
    ACTIONS(1049), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5548] = 1,
    ACTIONS(1051), 5,
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
  [5564] = 1,
    ACTIONS(1055), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5572] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1057), 1,
      sym_blank_line,
    ACTIONS(1059), 1,
      sym__dedent,
    STATE(385), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
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
  [5602] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1067), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5616] = 1,
    ACTIONS(517), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5624] = 1,
    ACTIONS(1041), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5632] = 1,
    ACTIONS(1069), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5640] = 1,
    ACTIONS(1071), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5648] = 1,
    ACTIONS(1073), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5656] = 1,
    ACTIONS(1075), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5664] = 1,
    ACTIONS(1077), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5672] = 1,
    ACTIONS(1079), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5680] = 4,
    ACTIONS(1081), 1,
      sym_blank_line,
    ACTIONS(1083), 1,
      sym__comment_start,
    ACTIONS(1085), 1,
      sym__reduce_indent,
    STATE(395), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5694] = 1,
    ACTIONS(1087), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5702] = 1,
    ACTIONS(1089), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5710] = 1,
    ACTIONS(1091), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5718] = 1,
    ACTIONS(1041), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5726] = 5,
    ACTIONS(1093), 1,
      sym__inline_comment,
    ACTIONS(1095), 1,
      sym_text_line,
    ACTIONS(1097), 1,
      sym_newline,
    STATE(412), 1,
      sym_line_end,
    STATE(735), 1,
      sym__reduce_line,
  [5742] = 1,
    ACTIONS(519), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5750] = 1,
    ACTIONS(1099), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5758] = 1,
    ACTIONS(1101), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5766] = 1,
    ACTIONS(1103), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5774] = 1,
    ACTIONS(1105), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5782] = 1,
    ACTIONS(1107), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5790] = 1,
    ACTIONS(1109), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5798] = 1,
    ACTIONS(1111), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5806] = 1,
    ACTIONS(1041), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5814] = 1,
    ACTIONS(1113), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5822] = 1,
    ACTIONS(1115), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5830] = 1,
    ACTIONS(1117), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5838] = 1,
    ACTIONS(1119), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5846] = 1,
    ACTIONS(1121), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5854] = 1,
    ACTIONS(1123), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5862] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5870] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5878] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5886] = 2,
    ACTIONS(1133), 1,
      sym_newline,
    ACTIONS(1131), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5896] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5904] = 1,
    ACTIONS(937), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5912] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5920] = 2,
    ACTIONS(1141), 1,
      sym_newline,
    ACTIONS(1139), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5930] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1143), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5944] = 2,
    ACTIONS(1147), 1,
      sym_newline,
    ACTIONS(1145), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5954] = 2,
    ACTIONS(1151), 1,
      sym_newline,
    ACTIONS(1149), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5964] = 2,
    ACTIONS(1155), 1,
      sym_newline,
    ACTIONS(1153), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5974] = 2,
    ACTIONS(1159), 1,
      sym_newline,
    ACTIONS(1157), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5984] = 5,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    STATE(741), 1,
      sym_inline_agic,
    STATE(922), 1,
      sym__named_using_complement,
  [6000] = 5,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(742), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [6016] = 4,
    ACTIONS(531), 1,
      sym__dedent,
    ACTIONS(1161), 1,
      sym_blank_line,
    ACTIONS(1164), 1,
      sym__comment_start,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6030] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6038] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6046] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6054] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6062] = 4,
    ACTIONS(1167), 1,
      sym_blank_line,
    ACTIONS(1170), 1,
      sym__dedent,
    ACTIONS(1172), 1,
      sym_indented_raw_text,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6076] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6084] = 1,
    ACTIONS(899), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6092] = 1,
    ACTIONS(1175), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6100] = 1,
    ACTIONS(901), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6108] = 1,
    ACTIONS(1041), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6116] = 1,
    ACTIONS(1177), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6124] = 4,
    ACTIONS(531), 1,
      sym__reduce_indent,
    ACTIONS(1179), 1,
      sym_blank_line,
    ACTIONS(1182), 1,
      sym__comment_start,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6138] = 1,
    ACTIONS(1185), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6146] = 1,
    ACTIONS(1187), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6154] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1189), 1,
      sym_flow_in_keyword,
    STATE(744), 1,
      sym_line_end,
    STATE(929), 1,
      sym__lanes_complement,
  [6170] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6178] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6186] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6194] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6202] = 1,
    ACTIONS(937), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6210] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6218] = 4,
    ACTIONS(531), 1,
      sym__line_start,
    ACTIONS(1191), 1,
      sym_blank_line,
    ACTIONS(1194), 1,
      sym__comment_start,
    STATE(366), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6232] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6240] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1197), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6254] = 1,
    ACTIONS(1199), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6262] = 1,
    ACTIONS(901), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6270] = 1,
    ACTIONS(899), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6278] = 1,
    ACTIONS(901), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6286] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6294] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6302] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6310] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6318] = 1,
    ACTIONS(937), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6326] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6334] = 1,
    ACTIONS(899), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6342] = 1,
    ACTIONS(901), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6350] = 1,
    ACTIONS(899), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6358] = 1,
    ACTIONS(901), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6366] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1201), 1,
      sym_colon,
    ACTIONS(1203), 1,
      sym_text_line,
    STATE(546), 1,
      sym_line_end,
  [6382] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1205), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6396] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1207), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6410] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1209), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6424] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6438] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1213), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6452] = 4,
    ACTIONS(1215), 1,
      sym_array_suffix,
    STATE(391), 1,
      aux_sym_type_repeat1,
    STATE(847), 1,
      sym_type_suffix,
    ACTIONS(604), 2,
      sym_newline,
      sym__inline_comment,
  [6466] = 1,
    ACTIONS(857), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6474] = 4,
    ACTIONS(1215), 1,
      sym_array_suffix,
    STATE(393), 1,
      aux_sym_type_repeat1,
    STATE(847), 1,
      sym_type_suffix,
    ACTIONS(608), 2,
      sym_newline,
      sym__inline_comment,
  [6488] = 4,
    ACTIONS(531), 1,
      sym__indent,
    ACTIONS(1217), 1,
      sym_blank_line,
    ACTIONS(1220), 1,
      sym__comment_start,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6502] = 4,
    ACTIONS(1223), 1,
      sym_array_suffix,
    STATE(393), 1,
      aux_sym_type_repeat1,
    STATE(847), 1,
      sym_type_suffix,
    ACTIONS(615), 2,
      sym_newline,
      sym__inline_comment,
  [6516] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1226), 1,
      sym_snake_name,
    STATE(289), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [6530] = 4,
    ACTIONS(1083), 1,
      sym__comment_start,
    ACTIONS(1228), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__reduce_indent,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6544] = 1,
    ACTIONS(855), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6552] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1232), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6566] = 5,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(858), 1,
      sym_runnable,
  [6582] = 5,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(428), 1,
      sym_inline_agic,
    STATE(861), 1,
      sym_runnable,
  [6598] = 1,
    ACTIONS(1234), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6606] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1236), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6620] = 1,
    ACTIONS(1238), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6628] = 1,
    ACTIONS(1240), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6636] = 5,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(472), 1,
      sym_inline_agic,
    STATE(880), 1,
      sym_runnable,
  [6652] = 1,
    ACTIONS(1240), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6660] = 4,
    ACTIONS(1244), 1,
      sym_rparen,
    STATE(628), 1,
      sym_param_name,
    STATE(772), 1,
      sym_param,
    ACTIONS(1242), 2,
      sym__variable_name,
      anon_sym__,
  [6674] = 5,
    ACTIONS(1093), 1,
      sym__inline_comment,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1246), 1,
      sym_text_line,
    STATE(238), 1,
      sym__reduce_line,
    STATE(412), 1,
      sym_line_end,
  [6690] = 1,
    ACTIONS(1248), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6698] = 5,
    ACTIONS(438), 1,
      sym_flow_using_keyword,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    STATE(242), 1,
      sym_inline_agic,
    STATE(882), 1,
      sym__named_using_complement,
  [6714] = 5,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(243), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [6730] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1189), 1,
      sym_flow_in_keyword,
    STATE(244), 1,
      sym_line_end,
    STATE(883), 1,
      sym__lanes_complement,
  [6746] = 4,
    ACTIONS(1083), 1,
      sym__comment_start,
    ACTIONS(1250), 1,
      sym_blank_line,
    ACTIONS(1252), 1,
      sym__reduce_indent,
    STATE(457), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6760] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1254), 1,
      sym_blank_line,
    ACTIONS(1256), 1,
      sym__dedent,
    STATE(458), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6774] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6788] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1260), 1,
      sym_blank_line,
    ACTIONS(1262), 1,
      sym__dedent,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6802] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1264), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6816] = 5,
    ACTIONS(440), 1,
      sym_arrow,
    ACTIONS(442), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(269), 1,
      sym_inline_agic,
    STATE(808), 1,
      sym_runnable,
  [6832] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1189), 1,
      sym_flow_in_keyword,
    STATE(270), 1,
      sym_line_end,
    STATE(894), 1,
      sym__lanes_complement,
  [6848] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1266), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__dedent,
    STATE(284), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6862] = 5,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(502), 1,
      sym_inline_agic,
    STATE(808), 1,
      sym_runnable,
  [6878] = 5,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(651), 1,
      sym_inline_agic,
    STATE(789), 1,
      sym_runnable,
  [6894] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1189), 1,
      sym_flow_in_keyword,
    STATE(503), 1,
      sym_line_end,
    STATE(822), 1,
      sym__lanes_complement,
  [6910] = 1,
    ACTIONS(1270), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6918] = 1,
    ACTIONS(1272), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6926] = 1,
    ACTIONS(1274), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6934] = 5,
    ACTIONS(1093), 1,
      sym__inline_comment,
    ACTIONS(1097), 1,
      sym_newline,
    ACTIONS(1246), 1,
      sym_text_line,
    STATE(280), 1,
      sym__reduce_line,
    STATE(308), 1,
      sym_line_end,
  [6950] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1276), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6964] = 1,
    ACTIONS(1278), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6972] = 1,
    ACTIONS(1280), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6980] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1282), 1,
      sym_colon,
    ACTIONS(1284), 1,
      sym_text_line,
    STATE(287), 1,
      sym_line_end,
  [6996] = 1,
    ACTIONS(1286), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7004] = 1,
    ACTIONS(1288), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7012] = 1,
    ACTIONS(1290), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7020] = 1,
    ACTIONS(1292), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7028] = 1,
    ACTIONS(1294), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7036] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1296), 1,
      sym_colon,
    ACTIONS(1298), 1,
      sym_text_line,
    STATE(300), 1,
      sym_line_end,
  [7052] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1300), 1,
      sym_blank_line,
    ACTIONS(1302), 1,
      sym__dedent,
    STATE(440), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7066] = 1,
    ACTIONS(863), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7074] = 1,
    ACTIONS(1304), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7082] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1306), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7096] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1308), 1,
      sym_blank_line,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(445), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7110] = 1,
    ACTIONS(1312), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7118] = 5,
    ACTIONS(459), 1,
      sym_arrow,
    ACTIONS(461), 1,
      sym_colon,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [7134] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1314), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7148] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7162] = 1,
    ACTIONS(1318), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7170] = 1,
    ACTIONS(1320), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7178] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7192] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7206] = 1,
    ACTIONS(1326), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7214] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1328), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7228] = 4,
    ACTIONS(969), 1,
      sym_blank_line,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7242] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1332), 1,
      sym_blank_line,
    ACTIONS(1334), 1,
      sym__dedent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7256] = 1,
    ACTIONS(1336), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7264] = 1,
    ACTIONS(1338), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7272] = 5,
    ACTIONS(1093), 1,
      sym__inline_comment,
    ACTIONS(1095), 1,
      sym_text_line,
    ACTIONS(1097), 1,
      sym_newline,
    STATE(308), 1,
      sym_line_end,
    STATE(522), 1,
      sym__reduce_line,
  [7288] = 4,
    ACTIONS(1083), 1,
      sym__comment_start,
    ACTIONS(1228), 1,
      sym_blank_line,
    ACTIONS(1340), 1,
      sym__reduce_indent,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7302] = 4,
    ACTIONS(644), 1,
      sym__comment_start,
    ACTIONS(1033), 1,
      sym_blank_line,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(344), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7316] = 1,
    ACTIONS(1344), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7324] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1226), 1,
      sym_snake_name,
    STATE(404), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7338] = 1,
    ACTIONS(1346), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7346] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1348), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__indent,
    STATE(337), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7360] = 5,
    ACTIONS(410), 1,
      sym__line_start,
    ACTIONS(1013), 1,
      sym__until_start,
    STATE(73), 1,
      sym__flow_statement,
    STATE(159), 1,
      sym_until_clause,
    STATE(905), 1,
      sym__repeat_statements,
  [7376] = 1,
    ACTIONS(1352), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7384] = 5,
    ACTIONS(410), 1,
      sym__line_start,
    ACTIONS(1013), 1,
      sym__until_start,
    STATE(73), 1,
      sym__flow_statement,
    STATE(161), 1,
      sym_until_clause,
    STATE(915), 1,
      sym__repeat_statements,
  [7400] = 1,
    ACTIONS(1354), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7408] = 5,
    ACTIONS(410), 1,
      sym__line_start,
    ACTIONS(1013), 1,
      sym__until_start,
    STATE(73), 1,
      sym__flow_statement,
    STATE(144), 1,
      sym_until_clause,
    STATE(809), 1,
      sym__repeat_statements,
  [7424] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7438] = 1,
    ACTIONS(1358), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7446] = 1,
    ACTIONS(1360), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7454] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1362), 1,
      sym_colon,
    ACTIONS(1364), 1,
      sym_text_line,
    STATE(532), 1,
      sym_line_end,
  [7470] = 1,
    ACTIONS(1366), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7478] = 1,
    ACTIONS(1368), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7486] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1370), 1,
      sym_blank_line,
    ACTIONS(1372), 1,
      sym__indent,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7500] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7514] = 4,
    ACTIONS(828), 1,
      sym__comment_start,
    ACTIONS(1065), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__indent,
    STATE(392), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7528] = 1,
    ACTIONS(1378), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7536] = 1,
    ACTIONS(899), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7544] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1380), 1,
      sym_blank_line,
    STATE(451), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7555] = 1,
    ACTIONS(979), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7562] = 1,
    ACTIONS(1382), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7569] = 1,
    ACTIONS(1384), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7576] = 1,
    ACTIONS(1386), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7583] = 1,
    ACTIONS(1388), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7590] = 1,
    ACTIONS(1390), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7597] = 3,
    ACTIONS(1394), 1,
      sym_comma,
    STATE(511), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1392), 2,
      sym_newline,
      sym__inline_comment,
  [7608] = 3,
    ACTIONS(1398), 1,
      sym_comma,
    STATE(512), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1396), 2,
      sym_newline,
      sym__inline_comment,
  [7619] = 1,
    ACTIONS(1400), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7626] = 1,
    ACTIONS(981), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7633] = 1,
    ACTIONS(983), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7640] = 1,
    ACTIONS(985), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7647] = 1,
    ACTIONS(987), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7654] = 1,
    ACTIONS(989), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7661] = 1,
    ACTIONS(991), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7668] = 1,
    ACTIONS(993), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7675] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1402), 1,
      sym_blank_line,
    STATE(368), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7686] = 1,
    ACTIONS(995), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7693] = 1,
    ACTIONS(997), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7700] = 1,
    ACTIONS(999), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7707] = 1,
    ACTIONS(1001), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7714] = 1,
    ACTIONS(1003), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7721] = 1,
    ACTIONS(1005), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7728] = 1,
    ACTIONS(1007), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7735] = 1,
    ACTIONS(1009), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7742] = 1,
    ACTIONS(1011), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7749] = 4,
    ACTIONS(575), 1,
      sym__line_start,
    ACTIONS(1404), 1,
      sym__dedent,
    STATE(125), 1,
      sym_message,
    STATE(1118), 1,
      sym_messages,
  [7762] = 1,
    ACTIONS(511), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7769] = 1,
    ACTIONS(1015), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7776] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1364), 1,
      sym_text_line,
    STATE(534), 1,
      sym_line_end,
  [7789] = 1,
    ACTIONS(1406), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7796] = 3,
    ACTIONS(1410), 1,
      sym_comma,
    STATE(511), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1408), 2,
      sym_newline,
      sym__inline_comment,
  [7807] = 3,
    ACTIONS(1415), 1,
      sym_comma,
    STATE(512), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1413), 2,
      sym_newline,
      sym__inline_comment,
  [7818] = 1,
    ACTIONS(1017), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7825] = 1,
    ACTIONS(1019), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7832] = 1,
    ACTIONS(1021), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7839] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1418), 1,
      sym_text_line,
    STATE(536), 1,
      sym_line_end,
  [7852] = 1,
    ACTIONS(1023), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7859] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1420), 1,
      sym_text_line,
    STATE(537), 1,
      sym_line_end,
  [7872] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1422), 1,
      sym_text_line,
    STATE(539), 1,
      sym_line_end,
  [7885] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1424), 1,
      sym_text_line,
    STATE(540), 1,
      sym_line_end,
  [7898] = 4,
    ACTIONS(869), 1,
      sym_lparen,
    ACTIONS(1426), 1,
      sym_arrow,
    ACTIONS(1428), 1,
      sym_colon,
    STATE(989), 1,
      sym_params,
  [7911] = 1,
    ACTIONS(1025), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7918] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1430), 1,
      sym_blank_line,
    STATE(397), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7929] = 1,
    ACTIONS(1432), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7936] = 1,
    ACTIONS(1027), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7943] = 1,
    ACTIONS(1029), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7950] = 1,
    ACTIONS(1031), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7957] = 1,
    ACTIONS(1434), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7964] = 1,
    ACTIONS(1037), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7971] = 1,
    ACTIONS(1039), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7978] = 1,
    ACTIONS(1436), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7985] = 1,
    ACTIONS(515), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7992] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7999] = 1,
    ACTIONS(1045), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8006] = 1,
    ACTIONS(1438), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8013] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8020] = 1,
    ACTIONS(1049), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8027] = 1,
    ACTIONS(1051), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8034] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8041] = 1,
    ACTIONS(1055), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8048] = 1,
    ACTIONS(1440), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8055] = 4,
    ACTIONS(1043), 1,
      sym_snake_name,
    ACTIONS(1442), 1,
      sym_colon,
    STATE(780), 1,
      sym_inline_agic_body,
    STATE(781), 1,
      sym_runnable,
  [8068] = 1,
    ACTIONS(1061), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8075] = 1,
    ACTIONS(1444), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8082] = 1,
    ACTIONS(1063), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8089] = 1,
    ACTIONS(517), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8096] = 1,
    ACTIONS(1446), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8103] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8110] = 1,
    ACTIONS(1069), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8117] = 1,
    ACTIONS(1071), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8124] = 1,
    ACTIONS(1073), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8131] = 1,
    ACTIONS(1075), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8138] = 1,
    ACTIONS(1077), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8145] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8152] = 1,
    ACTIONS(1450), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8159] = 1,
    ACTIONS(1079), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8166] = 1,
    ACTIONS(1087), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8173] = 4,
    ACTIONS(869), 1,
      sym_lparen,
    ACTIONS(1452), 1,
      sym_arrow,
    ACTIONS(1454), 1,
      sym_colon,
    STATE(975), 1,
      sym_params,
  [8186] = 1,
    ACTIONS(1089), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8193] = 1,
    ACTIONS(1091), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8200] = 1,
    ACTIONS(1456), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8207] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8214] = 1,
    ACTIONS(519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8221] = 1,
    ACTIONS(1458), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8228] = 1,
    ACTIONS(1099), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8235] = 1,
    ACTIONS(1101), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8242] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1460), 1,
      sym_blank_line,
    STATE(253), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8253] = 1,
    ACTIONS(1103), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8260] = 1,
    ACTIONS(1105), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8267] = 1,
    ACTIONS(1107), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8274] = 1,
    ACTIONS(1109), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8281] = 1,
    ACTIONS(1111), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8288] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8295] = 1,
    ACTIONS(1113), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8302] = 1,
    ACTIONS(1115), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8309] = 1,
    ACTIONS(1117), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8316] = 1,
    ACTIONS(1119), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8323] = 1,
    ACTIONS(1121), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8330] = 1,
    ACTIONS(1123), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8337] = 1,
    ACTIONS(1175), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8344] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8351] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8358] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8365] = 1,
    ACTIONS(937), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8372] = 1,
    ACTIONS(1185), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8379] = 1,
    ACTIONS(1185), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8386] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8393] = 1,
    ACTIONS(1462), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8400] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8407] = 2,
    ACTIONS(1466), 1,
      sym_newline,
    ACTIONS(1464), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [8416] = 4,
    ACTIONS(1468), 1,
      sym__inline_comment,
    ACTIONS(1470), 1,
      sym_text_line,
    ACTIONS(1472), 1,
      sym_newline,
    STATE(453), 1,
      sym_line_end,
  [8429] = 1,
    ACTIONS(1474), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8436] = 3,
    ACTIONS(1476), 1,
      sym_colon,
    ACTIONS(1478), 1,
      sym_newline,
    ACTIONS(1470), 2,
      sym__inline_comment,
      sym_text_line,
  [8447] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1480), 1,
      sym_text_line,
    STATE(636), 1,
      sym_line_end,
  [8460] = 2,
    STATE(1097), 1,
      sym_directive_op,
    ACTIONS(1482), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8469] = 1,
    ACTIONS(1484), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8476] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(123), 1,
      sym_line_end,
    STATE(654), 1,
      sym__cap_definition,
  [8489] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(123), 1,
      sym_line_end,
    STATE(655), 1,
      sym__cap_definition,
  [8502] = 4,
    ACTIONS(575), 1,
      sym__line_start,
    ACTIONS(1490), 1,
      sym__dedent,
    STATE(125), 1,
      sym_message,
    STATE(1194), 1,
      sym_messages,
  [8515] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(123), 1,
      sym_line_end,
    STATE(657), 1,
      sym__cap_definition,
  [8528] = 1,
    ACTIONS(1492), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8535] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(123), 1,
      sym_line_end,
    STATE(658), 1,
      sym__cap_definition,
  [8548] = 1,
    ACTIONS(1494), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8555] = 1,
    ACTIONS(1496), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8562] = 3,
    ACTIONS(889), 1,
      sym_newline,
    ACTIONS(1498), 1,
      sym_flow_run_keyword,
    ACTIONS(885), 2,
      sym__inline_comment,
      sym_text_line,
  [8573] = 4,
    ACTIONS(1500), 1,
      sym_blank_line,
    ACTIONS(1502), 1,
      sym__text_indent,
    STATE(663), 1,
      sym_text_body,
    STATE(804), 1,
      aux_sym_text_body_repeat1,
  [8586] = 1,
    ACTIONS(1504), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8593] = 1,
    ACTIONS(1506), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8600] = 1,
    ACTIONS(1175), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8607] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1508), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8618] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1510), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [8629] = 1,
    ACTIONS(1512), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8636] = 1,
    ACTIONS(1514), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8643] = 1,
    ACTIONS(1141), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8650] = 1,
    ACTIONS(1320), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8657] = 1,
    ACTIONS(1326), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8664] = 1,
    ACTIONS(1234), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8671] = 1,
    ACTIONS(1240), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8678] = 1,
    ACTIONS(1240), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8685] = 1,
    ACTIONS(1248), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8692] = 1,
    ACTIONS(1147), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8699] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1516), 1,
      sym_text_line,
    STATE(696), 1,
      sym_line_end,
  [8712] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8719] = 1,
    ACTIONS(1151), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8726] = 1,
    ACTIONS(1520), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8733] = 1,
    ACTIONS(1522), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8740] = 1,
    ACTIONS(1524), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8747] = 3,
    ACTIONS(1526), 1,
      sym_optional_marker,
    ACTIONS(1528), 1,
      sym_colon,
    ACTIONS(1530), 2,
      sym_rparen,
      sym_comma,
  [8758] = 1,
    ACTIONS(1532), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8765] = 1,
    ACTIONS(1534), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8772] = 1,
    ACTIONS(1536), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8779] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8786] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(164), 1,
      sym_line_end,
    STATE(725), 1,
      sym_job_body,
  [8799] = 4,
    ACTIONS(1486), 1,
      sym__inline_comment,
    ACTIONS(1488), 1,
      sym_newline,
    STATE(164), 1,
      sym_line_end,
    STATE(734), 1,
      sym_job_body,
  [8812] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(383), 1,
      sym_text_line,
    STATE(507), 1,
      sym_line_end,
  [8825] = 1,
    ACTIONS(1538), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8832] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8841] = 2,
    STATE(868), 1,
      sym_text_ref,
    ACTIONS(1540), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8850] = 4,
    ACTIONS(1542), 1,
      sym_runnable_ref,
    ACTIONS(1544), 1,
      sym_none_keyword,
    ACTIONS(1546), 1,
      sym_all_keyword,
    STATE(866), 1,
      sym_route_value,
  [8863] = 1,
    ACTIONS(1548), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8870] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8877] = 1,
    ACTIONS(1550), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8884] = 1,
    ACTIONS(1552), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8891] = 1,
    ACTIONS(1554), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8898] = 1,
    ACTIONS(1556), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8905] = 1,
    ACTIONS(1558), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8912] = 1,
    ACTIONS(1560), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8919] = 1,
    ACTIONS(1562), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8926] = 1,
    ACTIONS(1564), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8933] = 1,
    ACTIONS(1566), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8940] = 1,
    ACTIONS(1272), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8947] = 1,
    ACTIONS(1274), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8954] = 1,
    ACTIONS(1278), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8961] = 1,
    ACTIONS(1568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8968] = 1,
    ACTIONS(1570), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8975] = 1,
    ACTIONS(899), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8982] = 1,
    ACTIONS(1572), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8989] = 1,
    ACTIONS(1574), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8996] = 1,
    ACTIONS(901), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9003] = 1,
    ACTIONS(1041), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9010] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1576), 1,
      sym_blank_line,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9021] = 1,
    ACTIONS(1280), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9028] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9035] = 1,
    ACTIONS(1578), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9042] = 1,
    ACTIONS(1580), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9049] = 1,
    ACTIONS(1286), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9056] = 1,
    ACTIONS(1155), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9063] = 4,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1582), 1,
      sym_colon,
    STATE(738), 1,
      sym_line_end,
  [9076] = 1,
    ACTIONS(1288), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9083] = 1,
    ACTIONS(1159), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9090] = 1,
    ACTIONS(1290), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9097] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9104] = 1,
    ACTIONS(1292), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9111] = 1,
    ACTIONS(1294), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9118] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9125] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9132] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9139] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9146] = 1,
    ACTIONS(937), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9153] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9160] = 1,
    ACTIONS(899), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9167] = 1,
    ACTIONS(901), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9174] = 1,
    ACTIONS(1304), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9181] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9188] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9195] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9202] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9209] = 1,
    ACTIONS(937), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9216] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9223] = 1,
    ACTIONS(1584), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9230] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9237] = 1,
    ACTIONS(899), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9244] = 1,
    ACTIONS(901), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9251] = 1,
    ACTIONS(1312), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9258] = 3,
    STATE(628), 1,
      sym_param_name,
    STATE(1028), 1,
      sym_param,
    ACTIONS(1242), 2,
      sym__variable_name,
      anon_sym__,
  [9269] = 1,
    ACTIONS(1336), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9276] = 4,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__text_indent,
    STATE(582), 1,
      sym_text_body,
    STATE(946), 1,
      aux_sym_text_body_repeat1,
  [9289] = 1,
    ACTIONS(1586), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9296] = 1,
    ACTIONS(1588), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9303] = 1,
    ACTIONS(1590), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9310] = 1,
    ACTIONS(1592), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9317] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1594), 1,
      sym_text_line,
    STATE(454), 1,
      sym_line_end,
  [9330] = 1,
    ACTIONS(1596), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9337] = 1,
    ACTIONS(1598), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9344] = 1,
    ACTIONS(1600), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9351] = 1,
    ACTIONS(1133), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9358] = 1,
    ACTIONS(1602), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9365] = 1,
    ACTIONS(1604), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9372] = 4,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1606), 1,
      sym_colon,
    STATE(240), 1,
      sym_line_end,
  [9385] = 3,
    ACTIONS(1394), 1,
      sym_comma,
    STATE(486), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1608), 2,
      sym_newline,
      sym__inline_comment,
  [9396] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1610), 1,
      sym_text_line,
    STATE(257), 1,
      sym_line_end,
  [9409] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1612), 1,
      sym_text_line,
    STATE(258), 1,
      sym_line_end,
  [9422] = 3,
    ACTIONS(1398), 1,
      sym_comma,
    STATE(487), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1614), 2,
      sym_newline,
      sym__inline_comment,
  [9433] = 1,
    ACTIONS(1616), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9440] = 1,
    ACTIONS(1618), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9447] = 1,
    ACTIONS(1620), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9454] = 1,
    ACTIONS(1338), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9461] = 1,
    ACTIONS(1344), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9468] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(357), 1,
      sym_text_line,
    STATE(273), 1,
      sym_line_end,
  [9481] = 1,
    ACTIONS(1346), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9488] = 1,
    ACTIONS(1358), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9495] = 1,
    ACTIONS(1360), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9502] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1622), 1,
      sym_text_line,
    STATE(489), 1,
      sym_line_end,
  [9515] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym__inline_comment,
    ACTIONS(1624), 1,
      sym_text_line,
    STATE(490), 1,
      sym_line_end,
  [9528] = 1,
    ACTIONS(1626), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9535] = 1,
    ACTIONS(1366), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9542] = 1,
    ACTIONS(1368), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9549] = 1,
    ACTIONS(1378), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9556] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1284), 1,
      sym_text_line,
    STATE(290), 1,
      sym_line_end,
  [9569] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1628), 1,
      sym_text_line,
    STATE(291), 1,
      sym_line_end,
  [9582] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1630), 1,
      sym_text_line,
    STATE(292), 1,
      sym_line_end,
  [9595] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1632), 1,
      sym_text_line,
    STATE(294), 1,
      sym_line_end,
  [9608] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1634), 1,
      sym_text_line,
    STATE(295), 1,
      sym_line_end,
  [9621] = 1,
    ACTIONS(1636), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9628] = 1,
    ACTIONS(939), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9635] = 4,
    ACTIONS(1043), 1,
      sym_snake_name,
    ACTIONS(1638), 1,
      sym_colon,
    STATE(642), 1,
      sym_inline_agic_body,
    STATE(920), 1,
      sym_runnable,
  [9648] = 1,
    ACTIONS(941), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9655] = 1,
    ACTIONS(943), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9662] = 1,
    ACTIONS(945), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9669] = 4,
    ACTIONS(1640), 1,
      sym_blank_line,
    ACTIONS(1642), 1,
      sym__text_indent,
    STATE(799), 1,
      sym_text_body,
    STATE(952), 1,
      aux_sym_text_body_repeat1,
  [9682] = 1,
    ACTIONS(947), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9689] = 1,
    ACTIONS(949), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9696] = 4,
    ACTIONS(509), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__text_indent,
    STATE(355), 1,
      sym_text_body,
    STATE(953), 1,
      aux_sym_text_body_repeat1,
  [9709] = 1,
    ACTIONS(951), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9716] = 1,
    ACTIONS(953), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9723] = 1,
    ACTIONS(955), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9730] = 1,
    ACTIONS(957), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9737] = 1,
    ACTIONS(1644), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9744] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1646), 1,
      sym_blank_line,
    STATE(386), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9755] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1648), 1,
      sym_blank_line,
    STATE(387), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9766] = 1,
    ACTIONS(959), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9773] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1650), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [9784] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1652), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [9795] = 1,
    ACTIONS(961), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9802] = 2,
    STATE(876), 1,
      sym_text_ref,
    ACTIONS(1540), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9811] = 4,
    ACTIONS(1542), 1,
      sym_runnable_ref,
    ACTIONS(1544), 1,
      sym_none_keyword,
    ACTIONS(1546), 1,
      sym_all_keyword,
    STATE(875), 1,
      sym_route_value,
  [9824] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1654), 1,
      sym_blank_line,
    STATE(448), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9835] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1656), 1,
      sym_blank_line,
    STATE(449), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9846] = 3,
    ACTIONS(973), 1,
      sym_indented_raw_text,
    ACTIONS(1658), 1,
      sym_blank_line,
    STATE(452), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9857] = 2,
    STATE(1144), 1,
      sym_directive_op,
    ACTIONS(1482), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9866] = 1,
    ACTIONS(963), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9873] = 1,
    ACTIONS(965), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9880] = 1,
    ACTIONS(967), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9887] = 1,
    ACTIONS(1270), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9894] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9900] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(563), 1,
      sym_line_end,
  [9910] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(535), 1,
      sym_line_end,
  [9920] = 3,
    ACTIONS(1660), 1,
      sym_colon,
    ACTIONS(1662), 1,
      sym_snake_name,
    STATE(1139), 1,
      sym_context_name,
  [9930] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(138), 1,
      sym__flow_statement,
    STATE(1168), 1,
      sym_statements,
  [9940] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [9950] = 1,
    ACTIONS(1408), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9956] = 3,
    ACTIONS(1668), 1,
      sym_rparen,
    ACTIONS(1670), 1,
      sym_comma,
    STATE(849), 1,
      aux_sym_params_repeat1,
  [9966] = 1,
    ACTIONS(1672), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [9972] = 3,
    ACTIONS(1674), 1,
      sym_colon,
    ACTIONS(1676), 1,
      sym_snake_name,
    STATE(1172), 1,
      sym_instruct_name,
  [9982] = 1,
    ACTIONS(1413), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9988] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [9998] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(369), 1,
      sym_line_end,
  [10008] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(204), 1,
      sym_line_end,
  [10018] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(708), 1,
      sym_line_end,
  [10028] = 1,
    ACTIONS(1550), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10034] = 3,
    ACTIONS(1682), 1,
      sym__inline_comment,
    ACTIONS(1684), 1,
      sym_newline,
    STATE(797), 1,
      sym_line_end,
  [10044] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(226), 1,
      sym_line_end,
  [10054] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(510), 1,
      sym_line_end,
  [10064] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [10074] = 3,
    ACTIONS(1686), 1,
      sym_blank_line,
    ACTIONS(1689), 1,
      sym__text_indent,
    STATE(785), 1,
      aux_sym_text_body_repeat1,
  [10084] = 3,
    ACTIONS(1691), 1,
      sym_rparen,
    ACTIONS(1693), 1,
      sym_comma,
    STATE(786), 1,
      aux_sym_params_repeat1,
  [10094] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(514), 1,
      sym_line_end,
  [10104] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(573), 1,
      sym_line_end,
  [10114] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(718), 1,
      sym_line_end,
  [10124] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(720), 1,
      sym_line_end,
  [10134] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(721), 1,
      sym_line_end,
  [10144] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(722), 1,
      sym_line_end,
  [10154] = 2,
    STATE(790), 1,
      sym_local_reference,
    ACTIONS(1696), 2,
      anon_sym__,
      sym_snake_name,
  [10162] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(515), 1,
      sym_line_end,
  [10172] = 1,
    ACTIONS(1175), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10178] = 1,
    ACTIONS(1560), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10184] = 1,
    ACTIONS(1562), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10190] = 1,
    ACTIONS(1041), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10196] = 1,
    ACTIONS(1177), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10202] = 2,
    STATE(199), 1,
      sym__order_complement,
    ACTIONS(1698), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10210] = 1,
    ACTIONS(1185), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10216] = 1,
    ACTIONS(1187), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10222] = 1,
    ACTIONS(1700), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10228] = 3,
    ACTIONS(1702), 1,
      sym_blank_line,
    ACTIONS(1704), 1,
      sym__text_indent,
    STATE(785), 1,
      aux_sym_text_body_repeat1,
  [10238] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(181), 1,
      sym_line_end,
  [10248] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(188), 1,
      sym_line_end,
  [10258] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(739), 1,
      sym_line_end,
  [10268] = 1,
    ACTIONS(1706), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10274] = 3,
    ACTIONS(1708), 1,
      sym__dedent,
    ACTIONS(1710), 1,
      sym__until_start,
    STATE(79), 1,
      sym_until_clause,
  [10284] = 1,
    ACTIONS(899), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10290] = 1,
    ACTIONS(901), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10296] = 3,
    ACTIONS(351), 1,
      sym_flow_if_keyword,
    STATE(745), 1,
      sym__inline_if_complement,
    STATE(930), 1,
      sym__named_if_complement,
  [10306] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(746), 1,
      sym_line_end,
  [10316] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10322] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10328] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10334] = 1,
    ACTIONS(1133), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10340] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10346] = 1,
    ACTIONS(937), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10352] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10358] = 1,
    ACTIONS(899), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10364] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(526), 1,
      sym_line_end,
  [10374] = 1,
    ACTIONS(1141), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10380] = 1,
    ACTIONS(1147), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10386] = 1,
    ACTIONS(1151), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10392] = 1,
    ACTIONS(899), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10398] = 1,
    ACTIONS(901), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10404] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10410] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10416] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10422] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10428] = 1,
    ACTIONS(937), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10434] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10440] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(747), 1,
      sym_line_end,
  [10450] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10456] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10462] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10468] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10474] = 1,
    ACTIONS(937), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10480] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(205), 1,
      sym_line_end,
  [10490] = 1,
    ACTIONS(901), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10496] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(214), 1,
      sym_line_end,
  [10506] = 3,
    ACTIONS(875), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1712), 1,
      sym_colon,
    STATE(1170), 1,
      sym__window_complement,
  [10516] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(527), 1,
      sym_line_end,
  [10526] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(189), 1,
      sym_line_end,
  [10536] = 1,
    ACTIONS(1155), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10542] = 1,
    ACTIONS(1159), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10548] = 2,
    ACTIONS(1714), 1,
      sym_flow_spawn_keyword,
    STATE(517), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10556] = 3,
    ACTIONS(1670), 1,
      sym_comma,
    ACTIONS(1716), 1,
      sym_rparen,
    STATE(786), 1,
      aux_sym_params_repeat1,
  [10566] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(480), 1,
      sym_line_end,
  [10576] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(546), 1,
      sym_line_end,
  [10586] = 2,
    ACTIONS(1718), 1,
      sym_colon,
    ACTIONS(1720), 2,
      sym_rparen,
      sym_comma,
  [10594] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(581), 1,
      sym_line_end,
  [10604] = 2,
    STATE(977), 1,
      sym_param_name,
    ACTIONS(1722), 2,
      sym__variable_name,
      anon_sym__,
  [10612] = 1,
    ACTIONS(1724), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10618] = 1,
    ACTIONS(1726), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10624] = 2,
    ACTIONS(1466), 1,
      sym_newline,
    ACTIONS(1464), 2,
      sym__inline_comment,
      sym_text_line,
  [10632] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(459), 1,
      sym_line_end,
  [10642] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(461), 1,
      sym_line_end,
  [10652] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(469), 1,
      sym_line_end,
  [10662] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(470), 1,
      sym_line_end,
  [10672] = 2,
    STATE(859), 1,
      sym_local_reference,
    ACTIONS(1696), 2,
      anon_sym__,
      sym_snake_name,
  [10680] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(236), 1,
      sym_line_end,
  [10690] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(548), 1,
      sym_line_end,
  [10700] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(474), 1,
      sym_line_end,
  [10710] = 3,
    ACTIONS(1728), 1,
      sym__inline_comment,
    ACTIONS(1730), 1,
      sym_newline,
    STATE(447), 1,
      sym_line_end,
  [10720] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(241), 1,
      sym_line_end,
  [10730] = 3,
    ACTIONS(1728), 1,
      sym__inline_comment,
    ACTIONS(1730), 1,
      sym_newline,
    STATE(450), 1,
      sym_line_end,
  [10740] = 1,
    ACTIONS(1732), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10746] = 3,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(245), 1,
      sym__inline_if_complement,
    STATE(884), 1,
      sym__named_if_complement,
  [10756] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(246), 1,
      sym_line_end,
  [10766] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(247), 1,
      sym_line_end,
  [10776] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10784] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [10794] = 3,
    ACTIONS(1734), 1,
      sym__inline_comment,
    ACTIONS(1736), 1,
      sym_newline,
    STATE(615), 1,
      sym_line_end,
  [10804] = 3,
    ACTIONS(1734), 1,
      sym__inline_comment,
    ACTIONS(1736), 1,
      sym_newline,
    STATE(616), 1,
      sym_line_end,
  [10814] = 2,
    ACTIONS(1726), 1,
      sym_newline,
    ACTIONS(1738), 2,
      sym__inline_comment,
      sym_text_line,
  [10822] = 2,
    ACTIONS(1742), 1,
      sym_newline,
    ACTIONS(1740), 2,
      sym__inline_comment,
      sym_text_line,
  [10830] = 2,
    ACTIONS(1566), 1,
      sym_newline,
    ACTIONS(1744), 2,
      sym__inline_comment,
      sym_text_line,
  [10838] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(262), 1,
      sym_line_end,
  [10848] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
  [10858] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(266), 1,
      sym_line_end,
  [10868] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
  [10878] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [10888] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(549), 1,
      sym_line_end,
  [10898] = 3,
    ACTIONS(824), 1,
      sym_flow_by_keyword,
    STATE(271), 1,
      sym__inline_by_complement,
    STATE(895), 1,
      sym__named_by_complement,
  [10908] = 3,
    ACTIONS(1682), 1,
      sym__inline_comment,
    ACTIONS(1684), 1,
      sym_newline,
    STATE(646), 1,
      sym_line_end,
  [10918] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
  [10928] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(550), 1,
      sym_line_end,
  [10938] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(277), 1,
      sym_line_end,
  [10948] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [10958] = 2,
    ACTIONS(1746), 1,
      sym_flow_spawn_keyword,
    STATE(279), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10966] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [10976] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [10986] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [10996] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [11006] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(551), 1,
      sym_line_end,
  [11016] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(494), 1,
      sym_line_end,
  [11026] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(288), 1,
      sym_line_end,
  [11036] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(287), 1,
      sym_line_end,
  [11046] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(552), 1,
      sym_line_end,
  [11056] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [11066] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(553), 1,
      sym_line_end,
  [11076] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [11086] = 3,
    ACTIONS(1710), 1,
      sym__until_start,
    ACTIONS(1748), 1,
      sym__dedent,
    STATE(91), 1,
      sym_until_clause,
  [11096] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(495), 1,
      sym_line_end,
  [11106] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(300), 1,
      sym_line_end,
  [11116] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(533), 1,
      sym_line_end,
  [11126] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(301), 1,
      sym_line_end,
  [11136] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(302), 1,
      sym_line_end,
  [11146] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(303), 1,
      sym_line_end,
  [11156] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(304), 1,
      sym_line_end,
  [11166] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(305), 1,
      sym_line_end,
  [11176] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(306), 1,
      sym_line_end,
  [11186] = 3,
    ACTIONS(1710), 1,
      sym__until_start,
    ACTIONS(1750), 1,
      sym__dedent,
    STATE(93), 1,
      sym_until_clause,
  [11196] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(312), 1,
      sym_line_end,
  [11206] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(314), 1,
      sym_line_end,
  [11216] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [11226] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(462), 1,
      sym_line_end,
  [11236] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(648), 1,
      sym_line_end,
  [11246] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(322), 1,
      sym_line_end,
  [11256] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(499), 1,
      sym_line_end,
  [11266] = 3,
    ACTIONS(1472), 1,
      sym_newline,
    ACTIONS(1752), 1,
      sym__inline_comment,
    STATE(798), 1,
      sym_line_end,
  [11276] = 3,
    ACTIONS(1682), 1,
      sym__inline_comment,
    ACTIONS(1684), 1,
      sym_newline,
    STATE(660), 1,
      sym_line_end,
  [11286] = 1,
    ACTIONS(1754), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11292] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(354), 1,
      sym_line_end,
  [11302] = 3,
    ACTIONS(1756), 1,
      sym_pascal_name,
    STATE(1136), 1,
      sym_type_name,
    STATE(1185), 1,
      sym_struct_name,
  [11312] = 1,
    ACTIONS(1758), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11318] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(500), 1,
      sym_line_end,
  [11328] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(501), 1,
      sym_line_end,
  [11338] = 1,
    ACTIONS(1760), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11344] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [11354] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(138), 1,
      sym__flow_statement,
    STATE(1158), 1,
      sym_statements,
  [11364] = 1,
    ACTIONS(1762), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11370] = 3,
    ACTIONS(903), 1,
      sym_flow_by_keyword,
    STATE(504), 1,
      sym__inline_by_complement,
    STATE(844), 1,
      sym__named_by_complement,
  [11380] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [11390] = 2,
    STATE(169), 1,
      sym__order_complement,
    ACTIONS(1698), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11398] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(211), 1,
      sym_line_end,
  [11408] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(216), 1,
      sym_line_end,
  [11418] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [11428] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(221), 1,
      sym_line_end,
  [11438] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(232), 1,
      sym_line_end,
  [11448] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(233), 1,
      sym_line_end,
  [11458] = 3,
    ACTIONS(1710), 1,
      sym__until_start,
    ACTIONS(1764), 1,
      sym__dedent,
    STATE(84), 1,
      sym_until_clause,
  [11468] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(532), 1,
      sym_line_end,
  [11478] = 3,
    ACTIONS(1702), 1,
      sym_blank_line,
    ACTIONS(1766), 1,
      sym__text_indent,
    STATE(785), 1,
      aux_sym_text_body_repeat1,
  [11488] = 2,
    STATE(771), 1,
      sym_recall_source,
    ACTIONS(794), 2,
      anon_sym_far,
      anon_sym_near,
  [11496] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(507), 1,
      sym_line_end,
  [11506] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(562), 1,
      sym_line_end,
  [11516] = 3,
    ACTIONS(875), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1768), 1,
      sym_colon,
    STATE(1195), 1,
      sym__window_complement,
  [11526] = 3,
    ACTIONS(1664), 1,
      sym__inline_comment,
    ACTIONS(1666), 1,
      sym_newline,
    STATE(235), 1,
      sym_line_end,
  [11536] = 3,
    ACTIONS(1702), 1,
      sym_blank_line,
    ACTIONS(1770), 1,
      sym__text_indent,
    STATE(785), 1,
      aux_sym_text_body_repeat1,
  [11546] = 3,
    ACTIONS(1702), 1,
      sym_blank_line,
    ACTIONS(1772), 1,
      sym__text_indent,
    STATE(785), 1,
      aux_sym_text_body_repeat1,
  [11556] = 2,
    ACTIONS(1776), 1,
      sym_newline,
    ACTIONS(1774), 2,
      sym__inline_comment,
      sym_text_line,
  [11564] = 1,
    ACTIONS(1608), 2,
      sym_newline,
      sym__inline_comment,
  [11569] = 1,
    ACTIONS(1352), 2,
      sym_newline,
      sym__inline_comment,
  [11574] = 2,
    ACTIONS(1778), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [11581] = 1,
    ACTIONS(1780), 2,
      sym_integer_literal,
      sym_default_keyword,
  [11586] = 2,
    ACTIONS(648), 1,
      sym__from_start,
    STATE(419), 1,
      sym__from_complement,
  [11593] = 1,
    ACTIONS(1782), 2,
      sym_newline,
      sym__inline_comment,
  [11598] = 2,
    ACTIONS(1784), 1,
      sym_text_line,
    STATE(887), 1,
      sym_cap_ref,
  [11605] = 2,
    ACTIONS(1786), 1,
      aux_sym__doc_space_token1,
    STATE(987), 1,
      sym__required_space,
  [11612] = 2,
    ACTIONS(1788), 1,
      sym__snake_kebab_name,
    STATE(1176), 1,
      sym_job_name,
  [11619] = 1,
    ACTIONS(1790), 2,
      sym_newline,
      sym__inline_comment,
  [11624] = 2,
    ACTIONS(1792), 1,
      sym__one_integer_literal,
    ACTIONS(1794), 1,
      sym__other_integer_literal,
  [11631] = 2,
    ACTIONS(1796), 1,
      sym_snake_name,
    STATE(998), 1,
      sym_field_name,
  [11638] = 2,
    ACTIONS(1798), 1,
      sym_comment_text,
    ACTIONS(1800), 1,
      sym__comment_end,
  [11645] = 2,
    ACTIONS(1802), 1,
      anon_sym_EQ,
    STATE(1007), 1,
      sym_assign_operator,
  [11652] = 1,
    ACTIONS(1614), 2,
      sym_newline,
      sym__inline_comment,
  [11657] = 2,
    ACTIONS(1804), 1,
      anon_sym_lanes,
    STATE(956), 1,
      sym_flow_lanes_keyword,
  [11664] = 2,
    ACTIONS(1806), 1,
      sym_arrow,
    ACTIONS(1808), 1,
      sym_colon,
  [11671] = 1,
    ACTIONS(1810), 2,
      sym_arrow,
      sym_colon,
  [11676] = 1,
    ACTIONS(1354), 2,
      sym_newline,
      sym__inline_comment,
  [11681] = 2,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    STATE(958), 1,
      sym_assign_operator,
  [11688] = 2,
    ACTIONS(1814), 1,
      sym_arrow,
    ACTIONS(1816), 1,
      sym_colon,
  [11695] = 2,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    STATE(638), 1,
      sym_assign_operator,
  [11702] = 2,
    ACTIONS(1818), 1,
      aux_sym__doc_space_token1,
    STATE(1100), 1,
      sym__doc_space,
  [11709] = 2,
    ACTIONS(1820), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_assign_operator,
  [11716] = 2,
    ACTIONS(684), 1,
      sym__line_start,
    STATE(146), 1,
      sym_field,
  [11723] = 2,
    ACTIONS(1822), 1,
      anon_sym_EQ,
    STATE(639), 1,
      sym_assign_operator,
  [11730] = 2,
    ACTIONS(1824), 1,
      sym_comment_text,
    ACTIONS(1826), 1,
      sym__comment_end,
  [11737] = 1,
    ACTIONS(1828), 2,
      sym_arrow,
      sym_colon,
  [11742] = 2,
    ACTIONS(1830), 1,
      sym_snake_name,
    STATE(968), 1,
      sym_property_key,
  [11749] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(187), 1,
      sym__implicit_run_line,
  [11756] = 2,
    ACTIONS(1832), 1,
      sym__reduce_text_start,
    STATE(564), 1,
      sym__reduce_text_body,
  [11763] = 1,
    ACTIONS(1834), 2,
      sym_rparen,
      sym_comma,
  [11768] = 2,
    ACTIONS(1043), 1,
      sym_snake_name,
    STATE(773), 1,
      sym_runnable,
  [11775] = 1,
    ACTIONS(1836), 2,
      sym_newline,
      sym__inline_comment,
  [11780] = 2,
    ACTIONS(1838), 1,
      sym_arrow,
    ACTIONS(1840), 1,
      sym_colon,
  [11787] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1197), 1,
      sym_param_doc_tag,
  [11794] = 1,
    ACTIONS(1844), 2,
      sym_optional_marker,
      sym_colon,
  [11799] = 1,
    ACTIONS(1846), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11804] = 2,
    ACTIONS(1832), 1,
      sym__reduce_text_start,
    STATE(554), 1,
      sym__reduce_text_body,
  [11811] = 2,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(402), 1,
      sym__unroled_message_line,
  [11818] = 2,
    ACTIONS(1848), 1,
      sym_snake_name,
    STATE(289), 1,
      sym_agent,
  [11825] = 1,
    ACTIONS(899), 2,
      sym_blank_line,
      sym__text_indent,
  [11830] = 2,
    ACTIONS(1850), 1,
      anon_sym_lanes,
    STATE(464), 1,
      sym_flow_lanes_keyword,
  [11837] = 2,
    ACTIONS(1852), 1,
      sym_optional_marker,
    ACTIONS(1854), 1,
      sym_colon,
  [11844] = 2,
    ACTIONS(1856), 1,
      sym_comment_text,
    ACTIONS(1858), 1,
      sym__comment_end,
  [11851] = 2,
    ACTIONS(1860), 1,
      sym_comment_text,
    ACTIONS(1862), 1,
      sym__comment_end,
  [11858] = 2,
    ACTIONS(1832), 1,
      sym__reduce_text_start,
    STATE(524), 1,
      sym__reduce_text_body,
  [11865] = 2,
    ACTIONS(1864), 1,
      sym__snake_kebab_name,
    STATE(1196), 1,
      sym_cap_name,
  [11872] = 2,
    ACTIONS(1866), 1,
      sym_comment_text,
    ACTIONS(1868), 1,
      sym__comment_end,
  [11879] = 2,
    ACTIONS(1870), 1,
      sym_comment_text,
    ACTIONS(1872), 1,
      sym__comment_end,
  [11886] = 1,
    ACTIONS(1874), 2,
      sym_arrow,
      sym_colon,
  [11891] = 1,
    ACTIONS(1876), 2,
      sym_newline,
      sym__inline_comment,
  [11896] = 2,
    ACTIONS(1878), 1,
      sym_text_line,
    STATE(777), 1,
      sym_property_value,
  [11903] = 2,
    ACTIONS(1880), 1,
      sym_comment_text,
    ACTIONS(1882), 1,
      sym__comment_end,
  [11910] = 2,
    ACTIONS(1884), 1,
      sym_comment_text,
    ACTIONS(1886), 1,
      sym__comment_end,
  [11917] = 2,
    ACTIONS(1788), 1,
      sym__snake_kebab_name,
    STATE(1074), 1,
      sym_job_name,
  [11924] = 2,
    ACTIONS(1888), 1,
      sym_comment_text,
    ACTIONS(1890), 1,
      sym__comment_end,
  [11931] = 2,
    ACTIONS(1892), 1,
      sym_comment_text,
    ACTIONS(1894), 1,
      sym__comment_end,
  [11938] = 2,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(438), 1,
      sym__implicit_run_line,
  [11945] = 2,
    ACTIONS(1896), 1,
      sym_comment_text,
    ACTIONS(1898), 1,
      sym__comment_end,
  [11952] = 2,
    ACTIONS(1900), 1,
      sym_comment_text,
    ACTIONS(1902), 1,
      sym__comment_end,
  [11959] = 2,
    ACTIONS(648), 1,
      sym__from_start,
    STATE(296), 1,
      sym__from_complement,
  [11966] = 2,
    ACTIONS(1904), 1,
      sym_comment_text,
    ACTIONS(1906), 1,
      sym__comment_end,
  [11973] = 2,
    ACTIONS(1908), 1,
      sym_comment_text,
    ACTIONS(1910), 1,
      sym__comment_end,
  [11980] = 2,
    ACTIONS(1912), 1,
      sym_arrow,
    ACTIONS(1914), 1,
      sym_colon,
  [11987] = 2,
    ACTIONS(1916), 1,
      sym_comment_text,
    ACTIONS(1918), 1,
      sym__comment_end,
  [11994] = 2,
    ACTIONS(1920), 1,
      sym_comment_text,
    ACTIONS(1922), 1,
      sym__comment_end,
  [12001] = 2,
    ACTIONS(1864), 1,
      sym__snake_kebab_name,
    STATE(1201), 1,
      sym_cap_name,
  [12008] = 2,
    ACTIONS(1924), 1,
      sym_comment_text,
    ACTIONS(1926), 1,
      sym__comment_end,
  [12015] = 2,
    ACTIONS(1928), 1,
      sym_comment_text,
    ACTIONS(1930), 1,
      sym__comment_end,
  [12022] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1151), 1,
      sym_param_doc_tag,
  [12029] = 1,
    ACTIONS(901), 2,
      sym_blank_line,
      sym__text_indent,
  [12034] = 2,
    ACTIONS(1932), 1,
      sym_comment_text,
    ACTIONS(1934), 1,
      sym__comment_end,
  [12041] = 1,
    ACTIONS(1936), 2,
      sym_rparen,
      sym_comma,
  [12046] = 2,
    ACTIONS(1938), 1,
      sym_comment_text,
    ACTIONS(1940), 1,
      sym__comment_end,
  [12053] = 2,
    ACTIONS(1864), 1,
      sym__snake_kebab_name,
    STATE(1117), 1,
      sym_cap_name,
  [12060] = 1,
    ACTIONS(1942), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12065] = 2,
    ACTIONS(1848), 1,
      sym_snake_name,
    STATE(404), 1,
      sym_agent,
  [12072] = 2,
    ACTIONS(1778), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [12079] = 2,
    ACTIONS(1944), 1,
      sym__one_integer_literal,
    ACTIONS(1946), 1,
      sym__other_integer_literal,
  [12086] = 1,
    ACTIONS(1948), 2,
      sym_rparen,
      sym_comma,
  [12091] = 1,
    ACTIONS(1950), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12096] = 2,
    ACTIONS(648), 1,
      sym__from_start,
    STATE(437), 1,
      sym__from_complement,
  [12103] = 2,
    ACTIONS(648), 1,
      sym__from_start,
    STATE(441), 1,
      sym__from_complement,
  [12110] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1071), 1,
      sym_param_doc_tag,
  [12117] = 2,
    ACTIONS(1864), 1,
      sym__snake_kebab_name,
    STATE(1067), 1,
      sym_cap_name,
  [12124] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1082), 1,
      sym_param_doc_tag,
  [12131] = 2,
    ACTIONS(684), 1,
      sym__line_start,
    STATE(147), 1,
      sym_field,
  [12138] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1093), 1,
      sym_param_doc_tag,
  [12145] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1058), 1,
      sym_param_doc_tag,
  [12152] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1107), 1,
      sym_param_doc_tag,
  [12159] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1114), 1,
      sym_param_doc_tag,
  [12166] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1121), 1,
      sym_param_doc_tag,
  [12173] = 2,
    ACTIONS(1842), 1,
      anon_sym_ATparam,
    STATE(1128), 1,
      sym_param_doc_tag,
  [12180] = 2,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    STATE(1031), 1,
      sym_assign_operator,
  [12187] = 2,
    ACTIONS(1812), 1,
      anon_sym_EQ,
    STATE(755), 1,
      sym_assign_operator,
  [12194] = 2,
    ACTIONS(1820), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_assign_operator,
  [12201] = 2,
    ACTIONS(1822), 1,
      anon_sym_EQ,
    STATE(756), 1,
      sym_assign_operator,
  [12208] = 2,
    ACTIONS(1952), 1,
      sym_flow_run_keyword,
    STATE(694), 1,
      sym__run_after_modifier,
  [12215] = 2,
    ACTIONS(1954), 1,
      aux_sym__doc_space_token1,
    STATE(854), 1,
      sym__doc_space,
  [12222] = 1,
    ACTIONS(1956), 2,
      sym_newline,
      sym__inline_comment,
  [12227] = 2,
    ACTIONS(1958), 1,
      sym_flow_run_keyword,
    STATE(442), 1,
      sym__run_after_modifier,
  [12234] = 2,
    ACTIONS(1832), 1,
      sym__reduce_text_start,
    STATE(541), 1,
      sym__reduce_text_body,
  [12241] = 1,
    ACTIONS(1960), 1,
      sym__comment_end,
  [12245] = 1,
    ACTIONS(1962), 1,
      sym_colon,
  [12249] = 1,
    ACTIONS(1964), 1,
      sym_newline,
  [12253] = 1,
    ACTIONS(1966), 1,
      sym__dedent,
  [12257] = 1,
    ACTIONS(1968), 1,
      sym__dedent,
  [12261] = 1,
    ACTIONS(1970), 1,
      sym_newline,
  [12265] = 1,
    ACTIONS(1972), 1,
      sym__dedent,
  [12269] = 1,
    ACTIONS(1974), 1,
      sym__dedent,
  [12273] = 1,
    ACTIONS(1976), 1,
      sym__dedent,
  [12277] = 1,
    ACTIONS(1978), 1,
      sym_colon,
  [12281] = 1,
    ACTIONS(1980), 1,
      sym__dedent,
  [12285] = 1,
    ACTIONS(1982), 1,
      sym__comment_end,
  [12289] = 1,
    ACTIONS(1984), 1,
      sym__comment_end,
  [12293] = 1,
    ACTIONS(1986), 1,
      sym__comment_end,
  [12297] = 1,
    ACTIONS(1988), 1,
      sym_newline,
  [12301] = 1,
    ACTIONS(1990), 1,
      sym_colon,
  [12305] = 1,
    ACTIONS(1992), 1,
      sym_colon,
  [12309] = 1,
    ACTIONS(1994), 1,
      sym_newline,
  [12313] = 1,
    ACTIONS(1996), 1,
      sym_colon,
  [12317] = 1,
    ACTIONS(1998), 1,
      sym_integer_literal,
  [12321] = 1,
    ACTIONS(2000), 1,
      sym__dedent,
  [12325] = 1,
    ACTIONS(1404), 1,
      sym__dedent,
  [12329] = 1,
    ACTIONS(2002), 1,
      sym__comment_end,
  [12333] = 1,
    ACTIONS(2004), 1,
      sym__comment_end,
  [12337] = 1,
    ACTIONS(2006), 1,
      sym__comment_end,
  [12341] = 1,
    ACTIONS(2008), 1,
      sym_newline,
  [12345] = 1,
    ACTIONS(2010), 1,
      sym_colon,
  [12349] = 1,
    ACTIONS(2012), 1,
      sym_flow_until_keyword,
  [12353] = 1,
    ACTIONS(2014), 1,
      sym__dedent,
  [12357] = 1,
    ACTIONS(2016), 1,
      sym_colon,
  [12361] = 1,
    ACTIONS(343), 1,
      sym__dedent,
  [12365] = 1,
    ACTIONS(2018), 1,
      sym_directive_value,
  [12369] = 1,
    ACTIONS(2020), 1,
      sym__dedent,
  [12373] = 1,
    ACTIONS(2022), 1,
      sym__comment_end,
  [12377] = 1,
    ACTIONS(2024), 1,
      sym__comment_end,
  [12381] = 1,
    ACTIONS(2026), 1,
      sym__comment_end,
  [12385] = 1,
    ACTIONS(2028), 1,
      sym_newline,
  [12389] = 1,
    ACTIONS(2030), 1,
      sym_flow_exec_keyword,
  [12393] = 1,
    ACTIONS(2032), 1,
      sym_runnable_ref,
  [12397] = 1,
    ACTIONS(1780), 1,
      sym_directive_value,
  [12401] = 1,
    ACTIONS(2034), 1,
      sym__comment_end,
  [12405] = 1,
    ACTIONS(2036), 1,
      sym__comment_end,
  [12409] = 1,
    ACTIONS(2038), 1,
      sym_comment_text,
  [12413] = 1,
    ACTIONS(2040), 1,
      sym_newline,
  [12417] = 1,
    ACTIONS(2042), 1,
      sym__dedent,
  [12421] = 1,
    ACTIONS(2044), 1,
      sym__dedent,
  [12425] = 1,
    ACTIONS(2046), 1,
      sym_colon,
  [12429] = 1,
    ACTIONS(2048), 1,
      sym__comment_end,
  [12433] = 1,
    ACTIONS(2050), 1,
      sym__comment_end,
  [12437] = 1,
    ACTIONS(2052), 1,
      sym__comment_end,
  [12441] = 1,
    ACTIONS(2054), 1,
      sym_newline,
  [12445] = 1,
    ACTIONS(2056), 1,
      sym__dedent,
  [12449] = 1,
    ACTIONS(2058), 1,
      sym__dedent,
  [12453] = 1,
    ACTIONS(2060), 1,
      sym_colon,
  [12457] = 1,
    ACTIONS(2062), 1,
      sym__comment_end,
  [12461] = 1,
    ACTIONS(2064), 1,
      sym__comment_end,
  [12465] = 1,
    ACTIONS(2066), 1,
      sym__comment_end,
  [12469] = 1,
    ACTIONS(2068), 1,
      sym_newline,
  [12473] = 1,
    ACTIONS(1520), 1,
      aux_sym__doc_space_token1,
  [12477] = 1,
    ACTIONS(2070), 1,
      sym_colon,
  [12481] = 1,
    ACTIONS(1490), 1,
      sym__dedent,
  [12485] = 1,
    ACTIONS(2072), 1,
      sym__comment_end,
  [12489] = 1,
    ACTIONS(2074), 1,
      sym__comment_end,
  [12493] = 1,
    ACTIONS(2076), 1,
      sym__comment_end,
  [12497] = 1,
    ACTIONS(2078), 1,
      sym_newline,
  [12501] = 1,
    ACTIONS(2080), 1,
      sym_flow_until_keyword,
  [12505] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [12509] = 1,
    ACTIONS(2082), 1,
      anon_sym_EQ,
  [12513] = 1,
    ACTIONS(2084), 1,
      sym__comment_end,
  [12517] = 1,
    ACTIONS(2086), 1,
      sym__comment_end,
  [12521] = 1,
    ACTIONS(2088), 1,
      sym__comment_end,
  [12525] = 1,
    ACTIONS(2090), 1,
      sym_newline,
  [12529] = 1,
    ACTIONS(2092), 1,
      sym_newline,
  [12533] = 1,
    ACTIONS(2094), 1,
      sym_newline,
  [12537] = 1,
    ACTIONS(2096), 1,
      sym_newline,
  [12541] = 1,
    ACTIONS(2098), 1,
      sym_integer_literal,
  [12545] = 1,
    ACTIONS(2100), 1,
      sym__comment_end,
  [12549] = 1,
    ACTIONS(2102), 1,
      sym__dedent,
  [12553] = 1,
    ACTIONS(2104), 1,
      sym_colon,
  [12557] = 1,
    ACTIONS(2106), 1,
      sym_colon,
  [12561] = 1,
    ACTIONS(2108), 1,
      sym__dedent,
  [12565] = 1,
    ACTIONS(2110), 1,
      sym_colon,
  [12569] = 1,
    ACTIONS(2112), 1,
      sym__dedent,
  [12573] = 1,
    ACTIONS(2114), 1,
      sym_colon,
  [12577] = 1,
    ACTIONS(2116), 1,
      sym_colon,
  [12581] = 1,
    ACTIONS(2118), 1,
      sym__comment_end,
  [12585] = 1,
    ACTIONS(1942), 1,
      sym_directive_value,
  [12589] = 1,
    ACTIONS(2120), 1,
      sym__comment_end,
  [12593] = 1,
    ACTIONS(2122), 1,
      sym_flow_exec_keyword,
  [12597] = 1,
    ACTIONS(2124), 1,
      sym_flow_until_keyword,
  [12601] = 1,
    ACTIONS(2126), 1,
      sym__dedent,
  [12605] = 1,
    ACTIONS(2128), 1,
      sym_colon,
  [12609] = 1,
    ACTIONS(2130), 1,
      sym_integer_literal,
  [12613] = 1,
    ACTIONS(2132), 1,
      sym__comment_end,
  [12617] = 1,
    ACTIONS(2134), 1,
      sym_newline,
  [12621] = 1,
    ACTIONS(2136), 1,
      sym_cap_kind,
  [12625] = 1,
    ACTIONS(2138), 1,
      sym_newline,
  [12629] = 1,
    ACTIONS(2140), 1,
      sym_colon,
  [12633] = 1,
    ACTIONS(2142), 1,
      sym_colon,
  [12637] = 1,
    ACTIONS(2144), 1,
      sym_flow_lane_keyword,
  [12641] = 1,
    ACTIONS(2146), 1,
      sym__dedent,
  [12645] = 1,
    ACTIONS(2148), 1,
      sym_flow_exec_keyword,
  [12649] = 1,
    ACTIONS(2150), 1,
      sym_flow_until_keyword,
  [12653] = 1,
    ACTIONS(2152), 1,
      sym_flow_exec_keyword,
  [12657] = 1,
    ACTIONS(2154), 1,
      sym__dedent,
  [12661] = 1,
    ACTIONS(2156), 1,
      sym_flow_until_keyword,
  [12665] = 1,
    ACTIONS(2158), 1,
      sym_flow_until_keyword,
  [12669] = 1,
    ACTIONS(2160), 1,
      sym_colon,
  [12673] = 1,
    ACTIONS(2162), 1,
      sym_colon,
  [12677] = 1,
    ACTIONS(2164), 1,
      anon_sym_EQ,
  [12681] = 1,
    ACTIONS(2166), 1,
      sym__dedent,
  [12685] = 1,
    ACTIONS(2168), 1,
      sym_newline,
  [12689] = 1,
    ACTIONS(2170), 1,
      sym_colon,
  [12693] = 1,
    ACTIONS(2172), 1,
      sym_colon,
  [12697] = 1,
    ACTIONS(2174), 1,
      sym_colon,
  [12701] = 1,
    ACTIONS(2176), 1,
      sym_flow_run_keyword,
  [12705] = 1,
    ACTIONS(2178), 1,
      sym_colon,
  [12709] = 1,
    ACTIONS(2180), 1,
      sym_colon,
  [12713] = 1,
    ACTIONS(2182), 1,
      sym_colon,
  [12717] = 1,
    ACTIONS(331), 1,
      sym__dedent,
  [12721] = 1,
    ACTIONS(2184), 1,
      sym__dedent,
  [12725] = 1,
    ACTIONS(2186), 1,
      ts_builtin_sym_end,
  [12729] = 1,
    ACTIONS(2188), 1,
      sym__dedent,
  [12733] = 1,
    ACTIONS(2190), 1,
      sym_flow_from_keyword,
  [12737] = 1,
    ACTIONS(2192), 1,
      sym_flow_time_keyword,
  [12741] = 1,
    ACTIONS(2194), 1,
      sym__comment_end,
  [12745] = 1,
    ACTIONS(2192), 1,
      sym_flow_times_keyword,
  [12749] = 1,
    ACTIONS(2196), 1,
      sym_colon,
  [12753] = 1,
    ACTIONS(2198), 1,
      sym_integer_literal,
  [12757] = 1,
    ACTIONS(2200), 1,
      sym_colon,
  [12761] = 1,
    ACTIONS(2202), 1,
      sym_colon,
  [12765] = 1,
    ACTIONS(2204), 1,
      sym_colon,
  [12769] = 1,
    ACTIONS(2206), 1,
      sym_colon,
  [12773] = 1,
    ACTIONS(1742), 1,
      anon_sym_EQ,
  [12777] = 1,
    ACTIONS(2208), 1,
      sym__dedent,
  [12781] = 1,
    ACTIONS(2210), 1,
      sym_colon,
  [12785] = 1,
    ACTIONS(2212), 1,
      sym__dedent,
  [12789] = 1,
    ACTIONS(2214), 1,
      sym_colon,
  [12793] = 1,
    ACTIONS(2216), 1,
      sym_colon,
  [12797] = 1,
    ACTIONS(2218), 1,
      sym__comment_end,
  [12801] = 1,
    ACTIONS(2220), 1,
      sym__dedent,
  [12805] = 1,
    ACTIONS(2222), 1,
      sym_flow_lane_keyword,
  [12809] = 1,
    ACTIONS(2224), 1,
      sym__comment_end,
  [12813] = 1,
    ACTIONS(2226), 1,
      sym_colon,
  [12817] = 1,
    ACTIONS(2228), 1,
      sym__dedent,
  [12821] = 1,
    ACTIONS(2230), 1,
      sym__dedent,
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
  [SMALL_STATE(15)] = 525,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 657,
  [SMALL_STATE(20)] = 683,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 812,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1011,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1147,
  [SMALL_STATE(37)] = 1171,
  [SMALL_STATE(38)] = 1195,
  [SMALL_STATE(39)] = 1219,
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
  [SMALL_STATE(52)] = 1551,
  [SMALL_STATE(53)] = 1579,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1629,
  [SMALL_STATE(56)] = 1655,
  [SMALL_STATE(57)] = 1681,
  [SMALL_STATE(58)] = 1707,
  [SMALL_STATE(59)] = 1733,
  [SMALL_STATE(60)] = 1761,
  [SMALL_STATE(61)] = 1787,
  [SMALL_STATE(62)] = 1815,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1867,
  [SMALL_STATE(65)] = 1891,
  [SMALL_STATE(66)] = 1919,
  [SMALL_STATE(67)] = 1943,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1987,
  [SMALL_STATE(70)] = 2010,
  [SMALL_STATE(71)] = 2033,
  [SMALL_STATE(72)] = 2056,
  [SMALL_STATE(73)] = 2079,
  [SMALL_STATE(74)] = 2100,
  [SMALL_STATE(75)] = 2119,
  [SMALL_STATE(76)] = 2138,
  [SMALL_STATE(77)] = 2159,
  [SMALL_STATE(78)] = 2182,
  [SMALL_STATE(79)] = 2207,
  [SMALL_STATE(80)] = 2230,
  [SMALL_STATE(81)] = 2251,
  [SMALL_STATE(82)] = 2276,
  [SMALL_STATE(83)] = 2301,
  [SMALL_STATE(84)] = 2324,
  [SMALL_STATE(85)] = 2347,
  [SMALL_STATE(86)] = 2372,
  [SMALL_STATE(87)] = 2395,
  [SMALL_STATE(88)] = 2418,
  [SMALL_STATE(89)] = 2437,
  [SMALL_STATE(90)] = 2456,
  [SMALL_STATE(91)] = 2475,
  [SMALL_STATE(92)] = 2498,
  [SMALL_STATE(93)] = 2517,
  [SMALL_STATE(94)] = 2540,
  [SMALL_STATE(95)] = 2563,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2601,
  [SMALL_STATE(98)] = 2620,
  [SMALL_STATE(99)] = 2639,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2678,
  [SMALL_STATE(102)] = 2698,
  [SMALL_STATE(103)] = 2716,
  [SMALL_STATE(104)] = 2732,
  [SMALL_STATE(105)] = 2750,
  [SMALL_STATE(106)] = 2768,
  [SMALL_STATE(107)] = 2786,
  [SMALL_STATE(108)] = 2800,
  [SMALL_STATE(109)] = 2818,
  [SMALL_STATE(110)] = 2832,
  [SMALL_STATE(111)] = 2854,
  [SMALL_STATE(112)] = 2876,
  [SMALL_STATE(113)] = 2896,
  [SMALL_STATE(114)] = 2914,
  [SMALL_STATE(115)] = 2934,
  [SMALL_STATE(116)] = 2952,
  [SMALL_STATE(117)] = 2972,
  [SMALL_STATE(118)] = 2990,
  [SMALL_STATE(119)] = 3008,
  [SMALL_STATE(120)] = 3026,
  [SMALL_STATE(121)] = 3044,
  [SMALL_STATE(122)] = 3062,
  [SMALL_STATE(123)] = 3080,
  [SMALL_STATE(124)] = 3098,
  [SMALL_STATE(125)] = 3118,
  [SMALL_STATE(126)] = 3136,
  [SMALL_STATE(127)] = 3154,
  [SMALL_STATE(128)] = 3172,
  [SMALL_STATE(129)] = 3192,
  [SMALL_STATE(130)] = 3210,
  [SMALL_STATE(131)] = 3228,
  [SMALL_STATE(132)] = 3246,
  [SMALL_STATE(133)] = 3266,
  [SMALL_STATE(134)] = 3288,
  [SMALL_STATE(135)] = 3306,
  [SMALL_STATE(136)] = 3324,
  [SMALL_STATE(137)] = 3342,
  [SMALL_STATE(138)] = 3364,
  [SMALL_STATE(139)] = 3382,
  [SMALL_STATE(140)] = 3400,
  [SMALL_STATE(141)] = 3418,
  [SMALL_STATE(142)] = 3438,
  [SMALL_STATE(143)] = 3456,
  [SMALL_STATE(144)] = 3474,
  [SMALL_STATE(145)] = 3494,
  [SMALL_STATE(146)] = 3512,
  [SMALL_STATE(147)] = 3530,
  [SMALL_STATE(148)] = 3548,
  [SMALL_STATE(149)] = 3568,
  [SMALL_STATE(150)] = 3588,
  [SMALL_STATE(151)] = 3606,
  [SMALL_STATE(152)] = 3624,
  [SMALL_STATE(153)] = 3642,
  [SMALL_STATE(154)] = 3660,
  [SMALL_STATE(155)] = 3678,
  [SMALL_STATE(156)] = 3696,
  [SMALL_STATE(157)] = 3714,
  [SMALL_STATE(158)] = 3732,
  [SMALL_STATE(159)] = 3748,
  [SMALL_STATE(160)] = 3768,
  [SMALL_STATE(161)] = 3786,
  [SMALL_STATE(162)] = 3806,
  [SMALL_STATE(163)] = 3826,
  [SMALL_STATE(164)] = 3844,
  [SMALL_STATE(165)] = 3862,
  [SMALL_STATE(166)] = 3880,
  [SMALL_STATE(167)] = 3896,
  [SMALL_STATE(168)] = 3916,
  [SMALL_STATE(169)] = 3936,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3972,
  [SMALL_STATE(172)] = 3991,
  [SMALL_STATE(173)] = 4008,
  [SMALL_STATE(174)] = 4027,
  [SMALL_STATE(175)] = 4040,
  [SMALL_STATE(176)] = 4057,
  [SMALL_STATE(177)] = 4076,
  [SMALL_STATE(178)] = 4095,
  [SMALL_STATE(179)] = 4114,
  [SMALL_STATE(180)] = 4129,
  [SMALL_STATE(181)] = 4146,
  [SMALL_STATE(182)] = 4163,
  [SMALL_STATE(183)] = 4178,
  [SMALL_STATE(184)] = 4197,
  [SMALL_STATE(185)] = 4206,
  [SMALL_STATE(186)] = 4215,
  [SMALL_STATE(187)] = 4234,
  [SMALL_STATE(188)] = 4243,
  [SMALL_STATE(189)] = 4260,
  [SMALL_STATE(190)] = 4277,
  [SMALL_STATE(191)] = 4296,
  [SMALL_STATE(192)] = 4315,
  [SMALL_STATE(193)] = 4334,
  [SMALL_STATE(194)] = 4353,
  [SMALL_STATE(195)] = 4368,
  [SMALL_STATE(196)] = 4387,
  [SMALL_STATE(197)] = 4402,
  [SMALL_STATE(198)] = 4411,
  [SMALL_STATE(199)] = 4420,
  [SMALL_STATE(200)] = 4439,
  [SMALL_STATE(201)] = 4456,
  [SMALL_STATE(202)] = 4469,
  [SMALL_STATE(203)] = 4486,
  [SMALL_STATE(204)] = 4503,
  [SMALL_STATE(205)] = 4520,
  [SMALL_STATE(206)] = 4537,
  [SMALL_STATE(207)] = 4556,
  [SMALL_STATE(208)] = 4575,
  [SMALL_STATE(209)] = 4588,
  [SMALL_STATE(210)] = 4607,
  [SMALL_STATE(211)] = 4622,
  [SMALL_STATE(212)] = 4639,
  [SMALL_STATE(213)] = 4658,
  [SMALL_STATE(214)] = 4677,
  [SMALL_STATE(215)] = 4694,
  [SMALL_STATE(216)] = 4709,
  [SMALL_STATE(217)] = 4726,
  [SMALL_STATE(218)] = 4743,
  [SMALL_STATE(219)] = 4762,
  [SMALL_STATE(220)] = 4781,
  [SMALL_STATE(221)] = 4798,
  [SMALL_STATE(222)] = 4815,
  [SMALL_STATE(223)] = 4834,
  [SMALL_STATE(224)] = 4853,
  [SMALL_STATE(225)] = 4872,
  [SMALL_STATE(226)] = 4885,
  [SMALL_STATE(227)] = 4902,
  [SMALL_STATE(228)] = 4921,
  [SMALL_STATE(229)] = 4938,
  [SMALL_STATE(230)] = 4955,
  [SMALL_STATE(231)] = 4970,
  [SMALL_STATE(232)] = 4985,
  [SMALL_STATE(233)] = 5002,
  [SMALL_STATE(234)] = 5019,
  [SMALL_STATE(235)] = 5038,
  [SMALL_STATE(236)] = 5055,
  [SMALL_STATE(237)] = 5072,
  [SMALL_STATE(238)] = 5080,
  [SMALL_STATE(239)] = 5088,
  [SMALL_STATE(240)] = 5096,
  [SMALL_STATE(241)] = 5104,
  [SMALL_STATE(242)] = 5112,
  [SMALL_STATE(243)] = 5120,
  [SMALL_STATE(244)] = 5128,
  [SMALL_STATE(245)] = 5136,
  [SMALL_STATE(246)] = 5144,
  [SMALL_STATE(247)] = 5152,
  [SMALL_STATE(248)] = 5160,
  [SMALL_STATE(249)] = 5168,
  [SMALL_STATE(250)] = 5176,
  [SMALL_STATE(251)] = 5184,
  [SMALL_STATE(252)] = 5192,
  [SMALL_STATE(253)] = 5200,
  [SMALL_STATE(254)] = 5214,
  [SMALL_STATE(255)] = 5222,
  [SMALL_STATE(256)] = 5230,
  [SMALL_STATE(257)] = 5238,
  [SMALL_STATE(258)] = 5246,
  [SMALL_STATE(259)] = 5254,
  [SMALL_STATE(260)] = 5262,
  [SMALL_STATE(261)] = 5270,
  [SMALL_STATE(262)] = 5278,
  [SMALL_STATE(263)] = 5286,
  [SMALL_STATE(264)] = 5294,
  [SMALL_STATE(265)] = 5302,
  [SMALL_STATE(266)] = 5310,
  [SMALL_STATE(267)] = 5318,
  [SMALL_STATE(268)] = 5326,
  [SMALL_STATE(269)] = 5334,
  [SMALL_STATE(270)] = 5342,
  [SMALL_STATE(271)] = 5350,
  [SMALL_STATE(272)] = 5358,
  [SMALL_STATE(273)] = 5366,
  [SMALL_STATE(274)] = 5374,
  [SMALL_STATE(275)] = 5390,
  [SMALL_STATE(276)] = 5398,
  [SMALL_STATE(277)] = 5406,
  [SMALL_STATE(278)] = 5414,
  [SMALL_STATE(279)] = 5422,
  [SMALL_STATE(280)] = 5430,
  [SMALL_STATE(281)] = 5438,
  [SMALL_STATE(282)] = 5446,
  [SMALL_STATE(283)] = 5454,
  [SMALL_STATE(284)] = 5462,
  [SMALL_STATE(285)] = 5476,
  [SMALL_STATE(286)] = 5484,
  [SMALL_STATE(287)] = 5492,
  [SMALL_STATE(288)] = 5500,
  [SMALL_STATE(289)] = 5508,
  [SMALL_STATE(290)] = 5524,
  [SMALL_STATE(291)] = 5532,
  [SMALL_STATE(292)] = 5540,
  [SMALL_STATE(293)] = 5548,
  [SMALL_STATE(294)] = 5556,
  [SMALL_STATE(295)] = 5564,
  [SMALL_STATE(296)] = 5572,
  [SMALL_STATE(297)] = 5586,
  [SMALL_STATE(298)] = 5594,
  [SMALL_STATE(299)] = 5602,
  [SMALL_STATE(300)] = 5616,
  [SMALL_STATE(301)] = 5624,
  [SMALL_STATE(302)] = 5632,
  [SMALL_STATE(303)] = 5640,
  [SMALL_STATE(304)] = 5648,
  [SMALL_STATE(305)] = 5656,
  [SMALL_STATE(306)] = 5664,
  [SMALL_STATE(307)] = 5672,
  [SMALL_STATE(308)] = 5680,
  [SMALL_STATE(309)] = 5694,
  [SMALL_STATE(310)] = 5702,
  [SMALL_STATE(311)] = 5710,
  [SMALL_STATE(312)] = 5718,
  [SMALL_STATE(313)] = 5726,
  [SMALL_STATE(314)] = 5742,
  [SMALL_STATE(315)] = 5750,
  [SMALL_STATE(316)] = 5758,
  [SMALL_STATE(317)] = 5766,
  [SMALL_STATE(318)] = 5774,
  [SMALL_STATE(319)] = 5782,
  [SMALL_STATE(320)] = 5790,
  [SMALL_STATE(321)] = 5798,
  [SMALL_STATE(322)] = 5806,
  [SMALL_STATE(323)] = 5814,
  [SMALL_STATE(324)] = 5822,
  [SMALL_STATE(325)] = 5830,
  [SMALL_STATE(326)] = 5838,
  [SMALL_STATE(327)] = 5846,
  [SMALL_STATE(328)] = 5854,
  [SMALL_STATE(329)] = 5862,
  [SMALL_STATE(330)] = 5870,
  [SMALL_STATE(331)] = 5878,
  [SMALL_STATE(332)] = 5886,
  [SMALL_STATE(333)] = 5896,
  [SMALL_STATE(334)] = 5904,
  [SMALL_STATE(335)] = 5912,
  [SMALL_STATE(336)] = 5920,
  [SMALL_STATE(337)] = 5930,
  [SMALL_STATE(338)] = 5944,
  [SMALL_STATE(339)] = 5954,
  [SMALL_STATE(340)] = 5964,
  [SMALL_STATE(341)] = 5974,
  [SMALL_STATE(342)] = 5984,
  [SMALL_STATE(343)] = 6000,
  [SMALL_STATE(344)] = 6016,
  [SMALL_STATE(345)] = 6030,
  [SMALL_STATE(346)] = 6038,
  [SMALL_STATE(347)] = 6046,
  [SMALL_STATE(348)] = 6054,
  [SMALL_STATE(349)] = 6062,
  [SMALL_STATE(350)] = 6076,
  [SMALL_STATE(351)] = 6084,
  [SMALL_STATE(352)] = 6092,
  [SMALL_STATE(353)] = 6100,
  [SMALL_STATE(354)] = 6108,
  [SMALL_STATE(355)] = 6116,
  [SMALL_STATE(356)] = 6124,
  [SMALL_STATE(357)] = 6138,
  [SMALL_STATE(358)] = 6146,
  [SMALL_STATE(359)] = 6154,
  [SMALL_STATE(360)] = 6170,
  [SMALL_STATE(361)] = 6178,
  [SMALL_STATE(362)] = 6186,
  [SMALL_STATE(363)] = 6194,
  [SMALL_STATE(364)] = 6202,
  [SMALL_STATE(365)] = 6210,
  [SMALL_STATE(366)] = 6218,
  [SMALL_STATE(367)] = 6232,
  [SMALL_STATE(368)] = 6240,
  [SMALL_STATE(369)] = 6254,
  [SMALL_STATE(370)] = 6262,
  [SMALL_STATE(371)] = 6270,
  [SMALL_STATE(372)] = 6278,
  [SMALL_STATE(373)] = 6286,
  [SMALL_STATE(374)] = 6294,
  [SMALL_STATE(375)] = 6302,
  [SMALL_STATE(376)] = 6310,
  [SMALL_STATE(377)] = 6318,
  [SMALL_STATE(378)] = 6326,
  [SMALL_STATE(379)] = 6334,
  [SMALL_STATE(380)] = 6342,
  [SMALL_STATE(381)] = 6350,
  [SMALL_STATE(382)] = 6358,
  [SMALL_STATE(383)] = 6366,
  [SMALL_STATE(384)] = 6382,
  [SMALL_STATE(385)] = 6396,
  [SMALL_STATE(386)] = 6410,
  [SMALL_STATE(387)] = 6424,
  [SMALL_STATE(388)] = 6438,
  [SMALL_STATE(389)] = 6452,
  [SMALL_STATE(390)] = 6466,
  [SMALL_STATE(391)] = 6474,
  [SMALL_STATE(392)] = 6488,
  [SMALL_STATE(393)] = 6502,
  [SMALL_STATE(394)] = 6516,
  [SMALL_STATE(395)] = 6530,
  [SMALL_STATE(396)] = 6544,
  [SMALL_STATE(397)] = 6552,
  [SMALL_STATE(398)] = 6566,
  [SMALL_STATE(399)] = 6582,
  [SMALL_STATE(400)] = 6598,
  [SMALL_STATE(401)] = 6606,
  [SMALL_STATE(402)] = 6620,
  [SMALL_STATE(403)] = 6628,
  [SMALL_STATE(404)] = 6636,
  [SMALL_STATE(405)] = 6652,
  [SMALL_STATE(406)] = 6660,
  [SMALL_STATE(407)] = 6674,
  [SMALL_STATE(408)] = 6690,
  [SMALL_STATE(409)] = 6698,
  [SMALL_STATE(410)] = 6714,
  [SMALL_STATE(411)] = 6730,
  [SMALL_STATE(412)] = 6746,
  [SMALL_STATE(413)] = 6760,
  [SMALL_STATE(414)] = 6774,
  [SMALL_STATE(415)] = 6788,
  [SMALL_STATE(416)] = 6802,
  [SMALL_STATE(417)] = 6816,
  [SMALL_STATE(418)] = 6832,
  [SMALL_STATE(419)] = 6848,
  [SMALL_STATE(420)] = 6862,
  [SMALL_STATE(421)] = 6878,
  [SMALL_STATE(422)] = 6894,
  [SMALL_STATE(423)] = 6910,
  [SMALL_STATE(424)] = 6918,
  [SMALL_STATE(425)] = 6926,
  [SMALL_STATE(426)] = 6934,
  [SMALL_STATE(427)] = 6950,
  [SMALL_STATE(428)] = 6964,
  [SMALL_STATE(429)] = 6972,
  [SMALL_STATE(430)] = 6980,
  [SMALL_STATE(431)] = 6996,
  [SMALL_STATE(432)] = 7004,
  [SMALL_STATE(433)] = 7012,
  [SMALL_STATE(434)] = 7020,
  [SMALL_STATE(435)] = 7028,
  [SMALL_STATE(436)] = 7036,
  [SMALL_STATE(437)] = 7052,
  [SMALL_STATE(438)] = 7066,
  [SMALL_STATE(439)] = 7074,
  [SMALL_STATE(440)] = 7082,
  [SMALL_STATE(441)] = 7096,
  [SMALL_STATE(442)] = 7110,
  [SMALL_STATE(443)] = 7118,
  [SMALL_STATE(444)] = 7134,
  [SMALL_STATE(445)] = 7148,
  [SMALL_STATE(446)] = 7162,
  [SMALL_STATE(447)] = 7170,
  [SMALL_STATE(448)] = 7178,
  [SMALL_STATE(449)] = 7192,
  [SMALL_STATE(450)] = 7206,
  [SMALL_STATE(451)] = 7214,
  [SMALL_STATE(452)] = 7228,
  [SMALL_STATE(453)] = 7242,
  [SMALL_STATE(454)] = 7256,
  [SMALL_STATE(455)] = 7264,
  [SMALL_STATE(456)] = 7272,
  [SMALL_STATE(457)] = 7288,
  [SMALL_STATE(458)] = 7302,
  [SMALL_STATE(459)] = 7316,
  [SMALL_STATE(460)] = 7324,
  [SMALL_STATE(461)] = 7338,
  [SMALL_STATE(462)] = 7346,
  [SMALL_STATE(463)] = 7360,
  [SMALL_STATE(464)] = 7376,
  [SMALL_STATE(465)] = 7384,
  [SMALL_STATE(466)] = 7400,
  [SMALL_STATE(467)] = 7408,
  [SMALL_STATE(468)] = 7424,
  [SMALL_STATE(469)] = 7438,
  [SMALL_STATE(470)] = 7446,
  [SMALL_STATE(471)] = 7454,
  [SMALL_STATE(472)] = 7470,
  [SMALL_STATE(473)] = 7478,
  [SMALL_STATE(474)] = 7486,
  [SMALL_STATE(475)] = 7500,
  [SMALL_STATE(476)] = 7514,
  [SMALL_STATE(477)] = 7528,
  [SMALL_STATE(478)] = 7536,
  [SMALL_STATE(479)] = 7544,
  [SMALL_STATE(480)] = 7555,
  [SMALL_STATE(481)] = 7562,
  [SMALL_STATE(482)] = 7569,
  [SMALL_STATE(483)] = 7576,
  [SMALL_STATE(484)] = 7583,
  [SMALL_STATE(485)] = 7590,
  [SMALL_STATE(486)] = 7597,
  [SMALL_STATE(487)] = 7608,
  [SMALL_STATE(488)] = 7619,
  [SMALL_STATE(489)] = 7626,
  [SMALL_STATE(490)] = 7633,
  [SMALL_STATE(491)] = 7640,
  [SMALL_STATE(492)] = 7647,
  [SMALL_STATE(493)] = 7654,
  [SMALL_STATE(494)] = 7661,
  [SMALL_STATE(495)] = 7668,
  [SMALL_STATE(496)] = 7675,
  [SMALL_STATE(497)] = 7686,
  [SMALL_STATE(498)] = 7693,
  [SMALL_STATE(499)] = 7700,
  [SMALL_STATE(500)] = 7707,
  [SMALL_STATE(501)] = 7714,
  [SMALL_STATE(502)] = 7721,
  [SMALL_STATE(503)] = 7728,
  [SMALL_STATE(504)] = 7735,
  [SMALL_STATE(505)] = 7742,
  [SMALL_STATE(506)] = 7749,
  [SMALL_STATE(507)] = 7762,
  [SMALL_STATE(508)] = 7769,
  [SMALL_STATE(509)] = 7776,
  [SMALL_STATE(510)] = 7789,
  [SMALL_STATE(511)] = 7796,
  [SMALL_STATE(512)] = 7807,
  [SMALL_STATE(513)] = 7818,
  [SMALL_STATE(514)] = 7825,
  [SMALL_STATE(515)] = 7832,
  [SMALL_STATE(516)] = 7839,
  [SMALL_STATE(517)] = 7852,
  [SMALL_STATE(518)] = 7859,
  [SMALL_STATE(519)] = 7872,
  [SMALL_STATE(520)] = 7885,
  [SMALL_STATE(521)] = 7898,
  [SMALL_STATE(522)] = 7911,
  [SMALL_STATE(523)] = 7918,
  [SMALL_STATE(524)] = 7929,
  [SMALL_STATE(525)] = 7936,
  [SMALL_STATE(526)] = 7943,
  [SMALL_STATE(527)] = 7950,
  [SMALL_STATE(528)] = 7957,
  [SMALL_STATE(529)] = 7964,
  [SMALL_STATE(530)] = 7971,
  [SMALL_STATE(531)] = 7978,
  [SMALL_STATE(532)] = 7985,
  [SMALL_STATE(533)] = 7992,
  [SMALL_STATE(534)] = 7999,
  [SMALL_STATE(535)] = 8006,
  [SMALL_STATE(536)] = 8013,
  [SMALL_STATE(537)] = 8020,
  [SMALL_STATE(538)] = 8027,
  [SMALL_STATE(539)] = 8034,
  [SMALL_STATE(540)] = 8041,
  [SMALL_STATE(541)] = 8048,
  [SMALL_STATE(542)] = 8055,
  [SMALL_STATE(543)] = 8068,
  [SMALL_STATE(544)] = 8075,
  [SMALL_STATE(545)] = 8082,
  [SMALL_STATE(546)] = 8089,
  [SMALL_STATE(547)] = 8096,
  [SMALL_STATE(548)] = 8103,
  [SMALL_STATE(549)] = 8110,
  [SMALL_STATE(550)] = 8117,
  [SMALL_STATE(551)] = 8124,
  [SMALL_STATE(552)] = 8131,
  [SMALL_STATE(553)] = 8138,
  [SMALL_STATE(554)] = 8145,
  [SMALL_STATE(555)] = 8152,
  [SMALL_STATE(556)] = 8159,
  [SMALL_STATE(557)] = 8166,
  [SMALL_STATE(558)] = 8173,
  [SMALL_STATE(559)] = 8186,
  [SMALL_STATE(560)] = 8193,
  [SMALL_STATE(561)] = 8200,
  [SMALL_STATE(562)] = 8207,
  [SMALL_STATE(563)] = 8214,
  [SMALL_STATE(564)] = 8221,
  [SMALL_STATE(565)] = 8228,
  [SMALL_STATE(566)] = 8235,
  [SMALL_STATE(567)] = 8242,
  [SMALL_STATE(568)] = 8253,
  [SMALL_STATE(569)] = 8260,
  [SMALL_STATE(570)] = 8267,
  [SMALL_STATE(571)] = 8274,
  [SMALL_STATE(572)] = 8281,
  [SMALL_STATE(573)] = 8288,
  [SMALL_STATE(574)] = 8295,
  [SMALL_STATE(575)] = 8302,
  [SMALL_STATE(576)] = 8309,
  [SMALL_STATE(577)] = 8316,
  [SMALL_STATE(578)] = 8323,
  [SMALL_STATE(579)] = 8330,
  [SMALL_STATE(580)] = 8337,
  [SMALL_STATE(581)] = 8344,
  [SMALL_STATE(582)] = 8351,
  [SMALL_STATE(583)] = 8358,
  [SMALL_STATE(584)] = 8365,
  [SMALL_STATE(585)] = 8372,
  [SMALL_STATE(586)] = 8379,
  [SMALL_STATE(587)] = 8386,
  [SMALL_STATE(588)] = 8393,
  [SMALL_STATE(589)] = 8400,
  [SMALL_STATE(590)] = 8407,
  [SMALL_STATE(591)] = 8416,
  [SMALL_STATE(592)] = 8429,
  [SMALL_STATE(593)] = 8436,
  [SMALL_STATE(594)] = 8447,
  [SMALL_STATE(595)] = 8460,
  [SMALL_STATE(596)] = 8469,
  [SMALL_STATE(597)] = 8476,
  [SMALL_STATE(598)] = 8489,
  [SMALL_STATE(599)] = 8502,
  [SMALL_STATE(600)] = 8515,
  [SMALL_STATE(601)] = 8528,
  [SMALL_STATE(602)] = 8535,
  [SMALL_STATE(603)] = 8548,
  [SMALL_STATE(604)] = 8555,
  [SMALL_STATE(605)] = 8562,
  [SMALL_STATE(606)] = 8573,
  [SMALL_STATE(607)] = 8586,
  [SMALL_STATE(608)] = 8593,
  [SMALL_STATE(609)] = 8600,
  [SMALL_STATE(610)] = 8607,
  [SMALL_STATE(611)] = 8618,
  [SMALL_STATE(612)] = 8629,
  [SMALL_STATE(613)] = 8636,
  [SMALL_STATE(614)] = 8643,
  [SMALL_STATE(615)] = 8650,
  [SMALL_STATE(616)] = 8657,
  [SMALL_STATE(617)] = 8664,
  [SMALL_STATE(618)] = 8671,
  [SMALL_STATE(619)] = 8678,
  [SMALL_STATE(620)] = 8685,
  [SMALL_STATE(621)] = 8692,
  [SMALL_STATE(622)] = 8699,
  [SMALL_STATE(623)] = 8712,
  [SMALL_STATE(624)] = 8719,
  [SMALL_STATE(625)] = 8726,
  [SMALL_STATE(626)] = 8733,
  [SMALL_STATE(627)] = 8740,
  [SMALL_STATE(628)] = 8747,
  [SMALL_STATE(629)] = 8758,
  [SMALL_STATE(630)] = 8765,
  [SMALL_STATE(631)] = 8772,
  [SMALL_STATE(632)] = 8779,
  [SMALL_STATE(633)] = 8786,
  [SMALL_STATE(634)] = 8799,
  [SMALL_STATE(635)] = 8812,
  [SMALL_STATE(636)] = 8825,
  [SMALL_STATE(637)] = 8832,
  [SMALL_STATE(638)] = 8841,
  [SMALL_STATE(639)] = 8850,
  [SMALL_STATE(640)] = 8863,
  [SMALL_STATE(641)] = 8870,
  [SMALL_STATE(642)] = 8877,
  [SMALL_STATE(643)] = 8884,
  [SMALL_STATE(644)] = 8891,
  [SMALL_STATE(645)] = 8898,
  [SMALL_STATE(646)] = 8905,
  [SMALL_STATE(647)] = 8912,
  [SMALL_STATE(648)] = 8919,
  [SMALL_STATE(649)] = 8926,
  [SMALL_STATE(650)] = 8933,
  [SMALL_STATE(651)] = 8940,
  [SMALL_STATE(652)] = 8947,
  [SMALL_STATE(653)] = 8954,
  [SMALL_STATE(654)] = 8961,
  [SMALL_STATE(655)] = 8968,
  [SMALL_STATE(656)] = 8975,
  [SMALL_STATE(657)] = 8982,
  [SMALL_STATE(658)] = 8989,
  [SMALL_STATE(659)] = 8996,
  [SMALL_STATE(660)] = 9003,
  [SMALL_STATE(661)] = 9010,
  [SMALL_STATE(662)] = 9021,
  [SMALL_STATE(663)] = 9028,
  [SMALL_STATE(664)] = 9035,
  [SMALL_STATE(665)] = 9042,
  [SMALL_STATE(666)] = 9049,
  [SMALL_STATE(667)] = 9056,
  [SMALL_STATE(668)] = 9063,
  [SMALL_STATE(669)] = 9076,
  [SMALL_STATE(670)] = 9083,
  [SMALL_STATE(671)] = 9090,
  [SMALL_STATE(672)] = 9097,
  [SMALL_STATE(673)] = 9104,
  [SMALL_STATE(674)] = 9111,
  [SMALL_STATE(675)] = 9118,
  [SMALL_STATE(676)] = 9125,
  [SMALL_STATE(677)] = 9132,
  [SMALL_STATE(678)] = 9139,
  [SMALL_STATE(679)] = 9146,
  [SMALL_STATE(680)] = 9153,
  [SMALL_STATE(681)] = 9160,
  [SMALL_STATE(682)] = 9167,
  [SMALL_STATE(683)] = 9174,
  [SMALL_STATE(684)] = 9181,
  [SMALL_STATE(685)] = 9188,
  [SMALL_STATE(686)] = 9195,
  [SMALL_STATE(687)] = 9202,
  [SMALL_STATE(688)] = 9209,
  [SMALL_STATE(689)] = 9216,
  [SMALL_STATE(690)] = 9223,
  [SMALL_STATE(691)] = 9230,
  [SMALL_STATE(692)] = 9237,
  [SMALL_STATE(693)] = 9244,
  [SMALL_STATE(694)] = 9251,
  [SMALL_STATE(695)] = 9258,
  [SMALL_STATE(696)] = 9269,
  [SMALL_STATE(697)] = 9276,
  [SMALL_STATE(698)] = 9289,
  [SMALL_STATE(699)] = 9296,
  [SMALL_STATE(700)] = 9303,
  [SMALL_STATE(701)] = 9310,
  [SMALL_STATE(702)] = 9317,
  [SMALL_STATE(703)] = 9330,
  [SMALL_STATE(704)] = 9337,
  [SMALL_STATE(705)] = 9344,
  [SMALL_STATE(706)] = 9351,
  [SMALL_STATE(707)] = 9358,
  [SMALL_STATE(708)] = 9365,
  [SMALL_STATE(709)] = 9372,
  [SMALL_STATE(710)] = 9385,
  [SMALL_STATE(711)] = 9396,
  [SMALL_STATE(712)] = 9409,
  [SMALL_STATE(713)] = 9422,
  [SMALL_STATE(714)] = 9433,
  [SMALL_STATE(715)] = 9440,
  [SMALL_STATE(716)] = 9447,
  [SMALL_STATE(717)] = 9454,
  [SMALL_STATE(718)] = 9461,
  [SMALL_STATE(719)] = 9468,
  [SMALL_STATE(720)] = 9481,
  [SMALL_STATE(721)] = 9488,
  [SMALL_STATE(722)] = 9495,
  [SMALL_STATE(723)] = 9502,
  [SMALL_STATE(724)] = 9515,
  [SMALL_STATE(725)] = 9528,
  [SMALL_STATE(726)] = 9535,
  [SMALL_STATE(727)] = 9542,
  [SMALL_STATE(728)] = 9549,
  [SMALL_STATE(729)] = 9556,
  [SMALL_STATE(730)] = 9569,
  [SMALL_STATE(731)] = 9582,
  [SMALL_STATE(732)] = 9595,
  [SMALL_STATE(733)] = 9608,
  [SMALL_STATE(734)] = 9621,
  [SMALL_STATE(735)] = 9628,
  [SMALL_STATE(736)] = 9635,
  [SMALL_STATE(737)] = 9648,
  [SMALL_STATE(738)] = 9655,
  [SMALL_STATE(739)] = 9662,
  [SMALL_STATE(740)] = 9669,
  [SMALL_STATE(741)] = 9682,
  [SMALL_STATE(742)] = 9689,
  [SMALL_STATE(743)] = 9696,
  [SMALL_STATE(744)] = 9709,
  [SMALL_STATE(745)] = 9716,
  [SMALL_STATE(746)] = 9723,
  [SMALL_STATE(747)] = 9730,
  [SMALL_STATE(748)] = 9737,
  [SMALL_STATE(749)] = 9744,
  [SMALL_STATE(750)] = 9755,
  [SMALL_STATE(751)] = 9766,
  [SMALL_STATE(752)] = 9773,
  [SMALL_STATE(753)] = 9784,
  [SMALL_STATE(754)] = 9795,
  [SMALL_STATE(755)] = 9802,
  [SMALL_STATE(756)] = 9811,
  [SMALL_STATE(757)] = 9824,
  [SMALL_STATE(758)] = 9835,
  [SMALL_STATE(759)] = 9846,
  [SMALL_STATE(760)] = 9857,
  [SMALL_STATE(761)] = 9866,
  [SMALL_STATE(762)] = 9873,
  [SMALL_STATE(763)] = 9880,
  [SMALL_STATE(764)] = 9887,
  [SMALL_STATE(765)] = 9894,
  [SMALL_STATE(766)] = 9900,
  [SMALL_STATE(767)] = 9910,
  [SMALL_STATE(768)] = 9920,
  [SMALL_STATE(769)] = 9930,
  [SMALL_STATE(770)] = 9940,
  [SMALL_STATE(771)] = 9950,
  [SMALL_STATE(772)] = 9956,
  [SMALL_STATE(773)] = 9966,
  [SMALL_STATE(774)] = 9972,
  [SMALL_STATE(775)] = 9982,
  [SMALL_STATE(776)] = 9988,
  [SMALL_STATE(777)] = 9998,
  [SMALL_STATE(778)] = 10008,
  [SMALL_STATE(779)] = 10018,
  [SMALL_STATE(780)] = 10028,
  [SMALL_STATE(781)] = 10034,
  [SMALL_STATE(782)] = 10044,
  [SMALL_STATE(783)] = 10054,
  [SMALL_STATE(784)] = 10064,
  [SMALL_STATE(785)] = 10074,
  [SMALL_STATE(786)] = 10084,
  [SMALL_STATE(787)] = 10094,
  [SMALL_STATE(788)] = 10104,
  [SMALL_STATE(789)] = 10114,
  [SMALL_STATE(790)] = 10124,
  [SMALL_STATE(791)] = 10134,
  [SMALL_STATE(792)] = 10144,
  [SMALL_STATE(793)] = 10154,
  [SMALL_STATE(794)] = 10162,
  [SMALL_STATE(795)] = 10172,
  [SMALL_STATE(796)] = 10178,
  [SMALL_STATE(797)] = 10184,
  [SMALL_STATE(798)] = 10190,
  [SMALL_STATE(799)] = 10196,
  [SMALL_STATE(800)] = 10202,
  [SMALL_STATE(801)] = 10210,
  [SMALL_STATE(802)] = 10216,
  [SMALL_STATE(803)] = 10222,
  [SMALL_STATE(804)] = 10228,
  [SMALL_STATE(805)] = 10238,
  [SMALL_STATE(806)] = 10248,
  [SMALL_STATE(807)] = 10258,
  [SMALL_STATE(808)] = 10268,
  [SMALL_STATE(809)] = 10274,
  [SMALL_STATE(810)] = 10284,
  [SMALL_STATE(811)] = 10290,
  [SMALL_STATE(812)] = 10296,
  [SMALL_STATE(813)] = 10306,
  [SMALL_STATE(814)] = 10316,
  [SMALL_STATE(815)] = 10322,
  [SMALL_STATE(816)] = 10328,
  [SMALL_STATE(817)] = 10334,
  [SMALL_STATE(818)] = 10340,
  [SMALL_STATE(819)] = 10346,
  [SMALL_STATE(820)] = 10352,
  [SMALL_STATE(821)] = 10358,
  [SMALL_STATE(822)] = 10364,
  [SMALL_STATE(823)] = 10374,
  [SMALL_STATE(824)] = 10380,
  [SMALL_STATE(825)] = 10386,
  [SMALL_STATE(826)] = 10392,
  [SMALL_STATE(827)] = 10398,
  [SMALL_STATE(828)] = 10404,
  [SMALL_STATE(829)] = 10410,
  [SMALL_STATE(830)] = 10416,
  [SMALL_STATE(831)] = 10422,
  [SMALL_STATE(832)] = 10428,
  [SMALL_STATE(833)] = 10434,
  [SMALL_STATE(834)] = 10440,
  [SMALL_STATE(835)] = 10450,
  [SMALL_STATE(836)] = 10456,
  [SMALL_STATE(837)] = 10462,
  [SMALL_STATE(838)] = 10468,
  [SMALL_STATE(839)] = 10474,
  [SMALL_STATE(840)] = 10480,
  [SMALL_STATE(841)] = 10490,
  [SMALL_STATE(842)] = 10496,
  [SMALL_STATE(843)] = 10506,
  [SMALL_STATE(844)] = 10516,
  [SMALL_STATE(845)] = 10526,
  [SMALL_STATE(846)] = 10536,
  [SMALL_STATE(847)] = 10542,
  [SMALL_STATE(848)] = 10548,
  [SMALL_STATE(849)] = 10556,
  [SMALL_STATE(850)] = 10566,
  [SMALL_STATE(851)] = 10576,
  [SMALL_STATE(852)] = 10586,
  [SMALL_STATE(853)] = 10594,
  [SMALL_STATE(854)] = 10604,
  [SMALL_STATE(855)] = 10612,
  [SMALL_STATE(856)] = 10618,
  [SMALL_STATE(857)] = 10624,
  [SMALL_STATE(858)] = 10632,
  [SMALL_STATE(859)] = 10642,
  [SMALL_STATE(860)] = 10652,
  [SMALL_STATE(861)] = 10662,
  [SMALL_STATE(862)] = 10672,
  [SMALL_STATE(863)] = 10680,
  [SMALL_STATE(864)] = 10690,
  [SMALL_STATE(865)] = 10700,
  [SMALL_STATE(866)] = 10710,
  [SMALL_STATE(867)] = 10720,
  [SMALL_STATE(868)] = 10730,
  [SMALL_STATE(869)] = 10740,
  [SMALL_STATE(870)] = 10746,
  [SMALL_STATE(871)] = 10756,
  [SMALL_STATE(872)] = 10766,
  [SMALL_STATE(873)] = 10776,
  [SMALL_STATE(874)] = 10784,
  [SMALL_STATE(875)] = 10794,
  [SMALL_STATE(876)] = 10804,
  [SMALL_STATE(877)] = 10814,
  [SMALL_STATE(878)] = 10822,
  [SMALL_STATE(879)] = 10830,
  [SMALL_STATE(880)] = 10838,
  [SMALL_STATE(881)] = 10848,
  [SMALL_STATE(882)] = 10858,
  [SMALL_STATE(883)] = 10868,
  [SMALL_STATE(884)] = 10878,
  [SMALL_STATE(885)] = 10888,
  [SMALL_STATE(886)] = 10898,
  [SMALL_STATE(887)] = 10908,
  [SMALL_STATE(888)] = 10918,
  [SMALL_STATE(889)] = 10928,
  [SMALL_STATE(890)] = 10938,
  [SMALL_STATE(891)] = 10948,
  [SMALL_STATE(892)] = 10958,
  [SMALL_STATE(893)] = 10966,
  [SMALL_STATE(894)] = 10976,
  [SMALL_STATE(895)] = 10986,
  [SMALL_STATE(896)] = 10996,
  [SMALL_STATE(897)] = 11006,
  [SMALL_STATE(898)] = 11016,
  [SMALL_STATE(899)] = 11026,
  [SMALL_STATE(900)] = 11036,
  [SMALL_STATE(901)] = 11046,
  [SMALL_STATE(902)] = 11056,
  [SMALL_STATE(903)] = 11066,
  [SMALL_STATE(904)] = 11076,
  [SMALL_STATE(905)] = 11086,
  [SMALL_STATE(906)] = 11096,
  [SMALL_STATE(907)] = 11106,
  [SMALL_STATE(908)] = 11116,
  [SMALL_STATE(909)] = 11126,
  [SMALL_STATE(910)] = 11136,
  [SMALL_STATE(911)] = 11146,
  [SMALL_STATE(912)] = 11156,
  [SMALL_STATE(913)] = 11166,
  [SMALL_STATE(914)] = 11176,
  [SMALL_STATE(915)] = 11186,
  [SMALL_STATE(916)] = 11196,
  [SMALL_STATE(917)] = 11206,
  [SMALL_STATE(918)] = 11216,
  [SMALL_STATE(919)] = 11226,
  [SMALL_STATE(920)] = 11236,
  [SMALL_STATE(921)] = 11246,
  [SMALL_STATE(922)] = 11256,
  [SMALL_STATE(923)] = 11266,
  [SMALL_STATE(924)] = 11276,
  [SMALL_STATE(925)] = 11286,
  [SMALL_STATE(926)] = 11292,
  [SMALL_STATE(927)] = 11302,
  [SMALL_STATE(928)] = 11312,
  [SMALL_STATE(929)] = 11318,
  [SMALL_STATE(930)] = 11328,
  [SMALL_STATE(931)] = 11338,
  [SMALL_STATE(932)] = 11344,
  [SMALL_STATE(933)] = 11354,
  [SMALL_STATE(934)] = 11364,
  [SMALL_STATE(935)] = 11370,
  [SMALL_STATE(936)] = 11380,
  [SMALL_STATE(937)] = 11390,
  [SMALL_STATE(938)] = 11398,
  [SMALL_STATE(939)] = 11408,
  [SMALL_STATE(940)] = 11418,
  [SMALL_STATE(941)] = 11428,
  [SMALL_STATE(942)] = 11438,
  [SMALL_STATE(943)] = 11448,
  [SMALL_STATE(944)] = 11458,
  [SMALL_STATE(945)] = 11468,
  [SMALL_STATE(946)] = 11478,
  [SMALL_STATE(947)] = 11488,
  [SMALL_STATE(948)] = 11496,
  [SMALL_STATE(949)] = 11506,
  [SMALL_STATE(950)] = 11516,
  [SMALL_STATE(951)] = 11526,
  [SMALL_STATE(952)] = 11536,
  [SMALL_STATE(953)] = 11546,
  [SMALL_STATE(954)] = 11556,
  [SMALL_STATE(955)] = 11564,
  [SMALL_STATE(956)] = 11569,
  [SMALL_STATE(957)] = 11574,
  [SMALL_STATE(958)] = 11581,
  [SMALL_STATE(959)] = 11586,
  [SMALL_STATE(960)] = 11593,
  [SMALL_STATE(961)] = 11598,
  [SMALL_STATE(962)] = 11605,
  [SMALL_STATE(963)] = 11612,
  [SMALL_STATE(964)] = 11619,
  [SMALL_STATE(965)] = 11624,
  [SMALL_STATE(966)] = 11631,
  [SMALL_STATE(967)] = 11638,
  [SMALL_STATE(968)] = 11645,
  [SMALL_STATE(969)] = 11652,
  [SMALL_STATE(970)] = 11657,
  [SMALL_STATE(971)] = 11664,
  [SMALL_STATE(972)] = 11671,
  [SMALL_STATE(973)] = 11676,
  [SMALL_STATE(974)] = 11681,
  [SMALL_STATE(975)] = 11688,
  [SMALL_STATE(976)] = 11695,
  [SMALL_STATE(977)] = 11702,
  [SMALL_STATE(978)] = 11709,
  [SMALL_STATE(979)] = 11716,
  [SMALL_STATE(980)] = 11723,
  [SMALL_STATE(981)] = 11730,
  [SMALL_STATE(982)] = 11737,
  [SMALL_STATE(983)] = 11742,
  [SMALL_STATE(984)] = 11749,
  [SMALL_STATE(985)] = 11756,
  [SMALL_STATE(986)] = 11763,
  [SMALL_STATE(987)] = 11768,
  [SMALL_STATE(988)] = 11775,
  [SMALL_STATE(989)] = 11780,
  [SMALL_STATE(990)] = 11787,
  [SMALL_STATE(991)] = 11794,
  [SMALL_STATE(992)] = 11799,
  [SMALL_STATE(993)] = 11804,
  [SMALL_STATE(994)] = 11811,
  [SMALL_STATE(995)] = 11818,
  [SMALL_STATE(996)] = 11825,
  [SMALL_STATE(997)] = 11830,
  [SMALL_STATE(998)] = 11837,
  [SMALL_STATE(999)] = 11844,
  [SMALL_STATE(1000)] = 11851,
  [SMALL_STATE(1001)] = 11858,
  [SMALL_STATE(1002)] = 11865,
  [SMALL_STATE(1003)] = 11872,
  [SMALL_STATE(1004)] = 11879,
  [SMALL_STATE(1005)] = 11886,
  [SMALL_STATE(1006)] = 11891,
  [SMALL_STATE(1007)] = 11896,
  [SMALL_STATE(1008)] = 11903,
  [SMALL_STATE(1009)] = 11910,
  [SMALL_STATE(1010)] = 11917,
  [SMALL_STATE(1011)] = 11924,
  [SMALL_STATE(1012)] = 11931,
  [SMALL_STATE(1013)] = 11938,
  [SMALL_STATE(1014)] = 11945,
  [SMALL_STATE(1015)] = 11952,
  [SMALL_STATE(1016)] = 11959,
  [SMALL_STATE(1017)] = 11966,
  [SMALL_STATE(1018)] = 11973,
  [SMALL_STATE(1019)] = 11980,
  [SMALL_STATE(1020)] = 11987,
  [SMALL_STATE(1021)] = 11994,
  [SMALL_STATE(1022)] = 12001,
  [SMALL_STATE(1023)] = 12008,
  [SMALL_STATE(1024)] = 12015,
  [SMALL_STATE(1025)] = 12022,
  [SMALL_STATE(1026)] = 12029,
  [SMALL_STATE(1027)] = 12034,
  [SMALL_STATE(1028)] = 12041,
  [SMALL_STATE(1029)] = 12046,
  [SMALL_STATE(1030)] = 12053,
  [SMALL_STATE(1031)] = 12060,
  [SMALL_STATE(1032)] = 12065,
  [SMALL_STATE(1033)] = 12072,
  [SMALL_STATE(1034)] = 12079,
  [SMALL_STATE(1035)] = 12086,
  [SMALL_STATE(1036)] = 12091,
  [SMALL_STATE(1037)] = 12096,
  [SMALL_STATE(1038)] = 12103,
  [SMALL_STATE(1039)] = 12110,
  [SMALL_STATE(1040)] = 12117,
  [SMALL_STATE(1041)] = 12124,
  [SMALL_STATE(1042)] = 12131,
  [SMALL_STATE(1043)] = 12138,
  [SMALL_STATE(1044)] = 12145,
  [SMALL_STATE(1045)] = 12152,
  [SMALL_STATE(1046)] = 12159,
  [SMALL_STATE(1047)] = 12166,
  [SMALL_STATE(1048)] = 12173,
  [SMALL_STATE(1049)] = 12180,
  [SMALL_STATE(1050)] = 12187,
  [SMALL_STATE(1051)] = 12194,
  [SMALL_STATE(1052)] = 12201,
  [SMALL_STATE(1053)] = 12208,
  [SMALL_STATE(1054)] = 12215,
  [SMALL_STATE(1055)] = 12222,
  [SMALL_STATE(1056)] = 12227,
  [SMALL_STATE(1057)] = 12234,
  [SMALL_STATE(1058)] = 12241,
  [SMALL_STATE(1059)] = 12245,
  [SMALL_STATE(1060)] = 12249,
  [SMALL_STATE(1061)] = 12253,
  [SMALL_STATE(1062)] = 12257,
  [SMALL_STATE(1063)] = 12261,
  [SMALL_STATE(1064)] = 12265,
  [SMALL_STATE(1065)] = 12269,
  [SMALL_STATE(1066)] = 12273,
  [SMALL_STATE(1067)] = 12277,
  [SMALL_STATE(1068)] = 12281,
  [SMALL_STATE(1069)] = 12285,
  [SMALL_STATE(1070)] = 12289,
  [SMALL_STATE(1071)] = 12293,
  [SMALL_STATE(1072)] = 12297,
  [SMALL_STATE(1073)] = 12301,
  [SMALL_STATE(1074)] = 12305,
  [SMALL_STATE(1075)] = 12309,
  [SMALL_STATE(1076)] = 12313,
  [SMALL_STATE(1077)] = 12317,
  [SMALL_STATE(1078)] = 12321,
  [SMALL_STATE(1079)] = 12325,
  [SMALL_STATE(1080)] = 12329,
  [SMALL_STATE(1081)] = 12333,
  [SMALL_STATE(1082)] = 12337,
  [SMALL_STATE(1083)] = 12341,
  [SMALL_STATE(1084)] = 12345,
  [SMALL_STATE(1085)] = 12349,
  [SMALL_STATE(1086)] = 12353,
  [SMALL_STATE(1087)] = 12357,
  [SMALL_STATE(1088)] = 12361,
  [SMALL_STATE(1089)] = 12365,
  [SMALL_STATE(1090)] = 12369,
  [SMALL_STATE(1091)] = 12373,
  [SMALL_STATE(1092)] = 12377,
  [SMALL_STATE(1093)] = 12381,
  [SMALL_STATE(1094)] = 12385,
  [SMALL_STATE(1095)] = 12389,
  [SMALL_STATE(1096)] = 12393,
  [SMALL_STATE(1097)] = 12397,
  [SMALL_STATE(1098)] = 12401,
  [SMALL_STATE(1099)] = 12405,
  [SMALL_STATE(1100)] = 12409,
  [SMALL_STATE(1101)] = 12413,
  [SMALL_STATE(1102)] = 12417,
  [SMALL_STATE(1103)] = 12421,
  [SMALL_STATE(1104)] = 12425,
  [SMALL_STATE(1105)] = 12429,
  [SMALL_STATE(1106)] = 12433,
  [SMALL_STATE(1107)] = 12437,
  [SMALL_STATE(1108)] = 12441,
  [SMALL_STATE(1109)] = 12445,
  [SMALL_STATE(1110)] = 12449,
  [SMALL_STATE(1111)] = 12453,
  [SMALL_STATE(1112)] = 12457,
  [SMALL_STATE(1113)] = 12461,
  [SMALL_STATE(1114)] = 12465,
  [SMALL_STATE(1115)] = 12469,
  [SMALL_STATE(1116)] = 12473,
  [SMALL_STATE(1117)] = 12477,
  [SMALL_STATE(1118)] = 12481,
  [SMALL_STATE(1119)] = 12485,
  [SMALL_STATE(1120)] = 12489,
  [SMALL_STATE(1121)] = 12493,
  [SMALL_STATE(1122)] = 12497,
  [SMALL_STATE(1123)] = 12501,
  [SMALL_STATE(1124)] = 12505,
  [SMALL_STATE(1125)] = 12509,
  [SMALL_STATE(1126)] = 12513,
  [SMALL_STATE(1127)] = 12517,
  [SMALL_STATE(1128)] = 12521,
  [SMALL_STATE(1129)] = 12525,
  [SMALL_STATE(1130)] = 12529,
  [SMALL_STATE(1131)] = 12533,
  [SMALL_STATE(1132)] = 12537,
  [SMALL_STATE(1133)] = 12541,
  [SMALL_STATE(1134)] = 12545,
  [SMALL_STATE(1135)] = 12549,
  [SMALL_STATE(1136)] = 12553,
  [SMALL_STATE(1137)] = 12557,
  [SMALL_STATE(1138)] = 12561,
  [SMALL_STATE(1139)] = 12565,
  [SMALL_STATE(1140)] = 12569,
  [SMALL_STATE(1141)] = 12573,
  [SMALL_STATE(1142)] = 12577,
  [SMALL_STATE(1143)] = 12581,
  [SMALL_STATE(1144)] = 12585,
  [SMALL_STATE(1145)] = 12589,
  [SMALL_STATE(1146)] = 12593,
  [SMALL_STATE(1147)] = 12597,
  [SMALL_STATE(1148)] = 12601,
  [SMALL_STATE(1149)] = 12605,
  [SMALL_STATE(1150)] = 12609,
  [SMALL_STATE(1151)] = 12613,
  [SMALL_STATE(1152)] = 12617,
  [SMALL_STATE(1153)] = 12621,
  [SMALL_STATE(1154)] = 12625,
  [SMALL_STATE(1155)] = 12629,
  [SMALL_STATE(1156)] = 12633,
  [SMALL_STATE(1157)] = 12637,
  [SMALL_STATE(1158)] = 12641,
  [SMALL_STATE(1159)] = 12645,
  [SMALL_STATE(1160)] = 12649,
  [SMALL_STATE(1161)] = 12653,
  [SMALL_STATE(1162)] = 12657,
  [SMALL_STATE(1163)] = 12661,
  [SMALL_STATE(1164)] = 12665,
  [SMALL_STATE(1165)] = 12669,
  [SMALL_STATE(1166)] = 12673,
  [SMALL_STATE(1167)] = 12677,
  [SMALL_STATE(1168)] = 12681,
  [SMALL_STATE(1169)] = 12685,
  [SMALL_STATE(1170)] = 12689,
  [SMALL_STATE(1171)] = 12693,
  [SMALL_STATE(1172)] = 12697,
  [SMALL_STATE(1173)] = 12701,
  [SMALL_STATE(1174)] = 12705,
  [SMALL_STATE(1175)] = 12709,
  [SMALL_STATE(1176)] = 12713,
  [SMALL_STATE(1177)] = 12717,
  [SMALL_STATE(1178)] = 12721,
  [SMALL_STATE(1179)] = 12725,
  [SMALL_STATE(1180)] = 12729,
  [SMALL_STATE(1181)] = 12733,
  [SMALL_STATE(1182)] = 12737,
  [SMALL_STATE(1183)] = 12741,
  [SMALL_STATE(1184)] = 12745,
  [SMALL_STATE(1185)] = 12749,
  [SMALL_STATE(1186)] = 12753,
  [SMALL_STATE(1187)] = 12757,
  [SMALL_STATE(1188)] = 12761,
  [SMALL_STATE(1189)] = 12765,
  [SMALL_STATE(1190)] = 12769,
  [SMALL_STATE(1191)] = 12773,
  [SMALL_STATE(1192)] = 12777,
  [SMALL_STATE(1193)] = 12781,
  [SMALL_STATE(1194)] = 12785,
  [SMALL_STATE(1195)] = 12789,
  [SMALL_STATE(1196)] = 12793,
  [SMALL_STATE(1197)] = 12797,
  [SMALL_STATE(1198)] = 12801,
  [SMALL_STATE(1199)] = 12805,
  [SMALL_STATE(1200)] = 12809,
  [SMALL_STATE(1201)] = 12813,
  [SMALL_STATE(1202)] = 12817,
  [SMALL_STATE(1203)] = 12821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1173),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(995),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1149),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1150),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1146),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1063),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(926),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1101),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1133),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1131),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(962),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(897),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(900),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1182),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1184),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1186),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(938),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(68),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(151),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(983),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 77),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(983),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 84),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(80),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(157),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(4),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(984),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1169),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(116),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(153),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 10),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(340),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(129),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(153),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(966),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(994),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1152),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1013),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1075),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1122),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(788),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(667),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 48),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(988),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(864),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1132),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(992),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(908),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 50),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 39),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 55),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 42),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 56),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 51),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 42),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 58),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 59),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 59),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 42),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 60),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 36),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 66),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 67),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 68),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 69),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 71),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 39),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 58),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 73),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 58),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 51),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 42),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 58),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 46),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 74),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 76),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 76),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 71),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 73),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 58),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 78),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 79),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 70),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 81),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 81),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 85),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 86),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 81),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 81),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 88),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 91),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 92),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1108),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(906),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 88),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 95),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 96),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 91),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 97),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 95),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 101),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 98),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 103),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [1164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [1167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1060),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(366),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 65),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(392),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(846),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 48),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 29),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(881),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 30),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 77),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 36),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 37),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 37),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 38),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 39),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 40),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 41),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 42),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 40),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 40),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 44),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 64),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 65),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 50),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 51),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 52),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 72),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 37),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 37),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 53),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 31),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 54),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 49),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 63),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 75),
  [1408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(947),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1096),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(889),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 46),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 80),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 82),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 87),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 94),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [1542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [1548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 89),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 50),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 89),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 49),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [1630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1154),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 70),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(785),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(695),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [1700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 51),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable, 1, 0, 0),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 51),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 83),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1199),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_reference, 1, 0, 0),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 43),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1175),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 57),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1126),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1157),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 61),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1200),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [2056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [2082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [2108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 62),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [2164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [2186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1188),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
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

static const bool ts_external_scanner_states[37][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__flow_raw_text] = true,
  },
  [13] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__text_indent] = true,
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
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [19] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
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
    [ts_external_token__text_indent] = true,
  },
  [22] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [24] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [25] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
  },
  [26] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
  },
  [27] = {
    [ts_external_token__variable_name] = true,
  },
  [28] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [29] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [30] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
  },
  [31] = {
    [ts_external_token__line_start] = true,
  },
  [32] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__until_start] = true,
  },
  [33] = {
    [ts_external_token__from_start] = true,
  },
  [34] = {
    [ts_external_token__comment_end] = true,
  },
  [35] = {
    [ts_external_token__reduce_text_start] = true,
  },
  [36] = {
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
