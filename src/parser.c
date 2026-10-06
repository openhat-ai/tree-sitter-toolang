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
#define STATE_COUNT 1208
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 291
#define ALIAS_COUNT 0
#define TOKEN_COUNT 138
#define EXTERNAL_TOKEN_COUNT 29
#define FIELD_COUNT 37
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 105

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
  sym_directive = 250,
  sym__query_directive_key = 251,
  sym__route_directive_key = 252,
  sym_directive_key = 253,
  sym_directive_op = 254,
  sym_route_value = 255,
  sym_recall_value = 256,
  sym_recall_source = 257,
  sym__directives = 258,
  sym_text_ref = 259,
  sym_messages = 260,
  sym_message = 261,
  sym_unroled_message = 262,
  sym__unroled_message_line = 263,
  sym_invalid_agic_reserved_message = 264,
  sym_role = 265,
  sym__pass_statement = 266,
  sym_flow_lanes_keyword = 267,
  sym__flow_reserved_word = 268,
  sym__collection_binding_word = 269,
  sym__async_await_binding_word = 270,
  sym__agic_reserved_word = 271,
  sym_assign_operator = 272,
  sym_type_name = 273,
  aux_sym_source_file_repeat1 = 274,
  aux_sym_type_repeat1 = 275,
  aux_sym_struct_body_repeat1 = 276,
  aux_sym_struct_body_repeat2 = 277,
  aux_sym__cap_definition_repeat1 = 278,
  aux_sym__cap_text_body_repeat1 = 279,
  aux_sym_job_body_repeat1 = 280,
  aux_sym_text_body_repeat1 = 281,
  aux_sym_params_repeat1 = 282,
  aux_sym_statements_repeat1 = 283,
  aux_sym_implicit_run_statement_repeat1 = 284,
  aux_sym__repeat_statements_repeat1 = 285,
  aux_sym_route_value_repeat1 = 286,
  aux_sym_recall_value_repeat1 = 287,
  aux_sym__directives_repeat1 = 288,
  aux_sym_messages_repeat1 = 289,
  aux_sym_unroled_message_repeat1 = 290,
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
  [54] = {.index = 118, .length = 2},
  [55] = {.index = 120, .length = 3},
  [56] = {.index = 123, .length = 1},
  [57] = {.index = 124, .length = 2},
  [58] = {.index = 126, .length = 2},
  [59] = {.index = 128, .length = 2},
  [60] = {.index = 130, .length = 1},
  [61] = {.index = 131, .length = 3},
  [62] = {.index = 134, .length = 1},
  [63] = {.index = 135, .length = 1},
  [64] = {.index = 136, .length = 2},
  [65] = {.index = 138, .length = 3},
  [66] = {.index = 138, .length = 3},
  [67] = {.index = 141, .length = 2},
  [68] = {.index = 143, .length = 2},
  [69] = {.index = 70, .length = 2},
  [70] = {.index = 145, .length = 2},
  [71] = {.index = 147, .length = 1},
  [72] = {.index = 148, .length = 5},
  [73] = {.index = 153, .length = 1},
  [74] = {.index = 154, .length = 2},
  [75] = {.index = 156, .length = 1},
  [76] = {.index = 157, .length = 3},
  [77] = {.index = 160, .length = 3},
  [78] = {.index = 163, .length = 1},
  [79] = {.index = 164, .length = 2},
  [80] = {.index = 166, .length = 2},
  [81] = {.index = 168, .length = 4},
  [82] = {.index = 172, .length = 1},
  [83] = {.index = 173, .length = 1},
  [84] = {.index = 174, .length = 1},
  [85] = {.index = 175, .length = 2},
  [86] = {.index = 177, .length = 1},
  [87] = {.index = 178, .length = 3},
  [88] = {.index = 181, .length = 3},
  [89] = {.index = 184, .length = 2},
  [90] = {.index = 186, .length = 1},
  [91] = {.index = 187, .length = 2},
  [92] = {.index = 189, .length = 2},
  [93] = {.index = 191, .length = 2},
  [94] = {.index = 193, .length = 1},
  [95] = {.index = 194, .length = 3},
  [96] = {.index = 197, .length = 2},
  [97] = {.index = 199, .length = 3},
  [98] = {.index = 202, .length = 2},
  [99] = {.index = 204, .length = 2},
  [100] = {.index = 206, .length = 2},
  [101] = {.index = 208, .length = 3},
  [102] = {.index = 211, .length = 3},
  [103] = {.index = 214, .length = 2},
  [104] = {.index = 216, .length = 3},
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
  [52] = {
    [1] = sym_local_name,
  },
  [65] = {
    [1] = sym_directive_key,
  },
  [69] = {
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 22,
  [26] = 21,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
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
  [42] = 31,
  [43] = 32,
  [44] = 39,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 50,
  [62] = 60,
  [63] = 52,
  [64] = 54,
  [65] = 55,
  [66] = 57,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 73,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 70,
  [85] = 71,
  [86] = 86,
  [87] = 72,
  [88] = 88,
  [89] = 89,
  [90] = 67,
  [91] = 83,
  [92] = 88,
  [93] = 89,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 95,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 96,
  [111] = 111,
  [112] = 112,
  [113] = 97,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 98,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 99,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 68,
  [126] = 77,
  [127] = 127,
  [128] = 76,
  [129] = 69,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 78,
  [135] = 81,
  [136] = 86,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 100,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 101,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 100,
  [155] = 100,
  [156] = 100,
  [157] = 100,
  [158] = 100,
  [159] = 100,
  [160] = 100,
  [161] = 100,
  [162] = 149,
  [163] = 116,
  [164] = 119,
  [165] = 120,
  [166] = 124,
  [167] = 167,
  [168] = 94,
  [169] = 169,
  [170] = 170,
  [171] = 127,
  [172] = 172,
  [173] = 173,
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
  [186] = 140,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 176,
  [193] = 193,
  [194] = 138,
  [195] = 195,
  [196] = 196,
  [197] = 182,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 175,
  [203] = 177,
  [204] = 204,
  [205] = 205,
  [206] = 184,
  [207] = 207,
  [208] = 208,
  [209] = 185,
  [210] = 205,
  [211] = 174,
  [212] = 139,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 131,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 207,
  [221] = 208,
  [222] = 222,
  [223] = 130,
  [224] = 188,
  [225] = 170,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 199,
  [231] = 189,
  [232] = 232,
  [233] = 215,
  [234] = 195,
  [235] = 235,
  [236] = 191,
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
  [301] = 127,
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
  [339] = 217,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 213,
  [345] = 345,
  [346] = 127,
  [347] = 331,
  [348] = 332,
  [349] = 333,
  [350] = 335,
  [351] = 336,
  [352] = 337,
  [353] = 172,
  [354] = 354,
  [355] = 173,
  [356] = 356,
  [357] = 357,
  [358] = 127,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 331,
  [363] = 332,
  [364] = 333,
  [365] = 335,
  [366] = 336,
  [367] = 337,
  [368] = 127,
  [369] = 369,
  [370] = 370,
  [371] = 172,
  [372] = 173,
  [373] = 172,
  [374] = 173,
  [375] = 331,
  [376] = 332,
  [377] = 333,
  [378] = 335,
  [379] = 336,
  [380] = 337,
  [381] = 172,
  [382] = 173,
  [383] = 172,
  [384] = 173,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 385,
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
  [400] = 387,
  [401] = 390,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
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
  [417] = 407,
  [418] = 408,
  [419] = 410,
  [420] = 416,
  [421] = 421,
  [422] = 406,
  [423] = 388,
  [424] = 424,
  [425] = 219,
  [426] = 237,
  [427] = 427,
  [428] = 428,
  [429] = 255,
  [430] = 138,
  [431] = 139,
  [432] = 310,
  [433] = 140,
  [434] = 409,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 394,
  [439] = 398,
  [440] = 440,
  [441] = 441,
  [442] = 414,
  [443] = 415,
  [444] = 444,
  [445] = 445,
  [446] = 411,
  [447] = 412,
  [448] = 448,
  [449] = 449,
  [450] = 388,
  [451] = 385,
  [452] = 452,
  [453] = 388,
  [454] = 385,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 427,
  [463] = 463,
  [464] = 413,
  [465] = 286,
  [466] = 428,
  [467] = 391,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 256,
  [476] = 291,
  [477] = 386,
  [478] = 478,
  [479] = 12,
  [480] = 480,
  [481] = 258,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 259,
  [491] = 260,
  [492] = 261,
  [493] = 262,
  [494] = 263,
  [495] = 264,
  [496] = 265,
  [497] = 497,
  [498] = 266,
  [499] = 267,
  [500] = 268,
  [501] = 269,
  [502] = 270,
  [503] = 271,
  [504] = 272,
  [505] = 273,
  [506] = 274,
  [507] = 507,
  [508] = 275,
  [509] = 277,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 278,
  [515] = 279,
  [516] = 280,
  [517] = 517,
  [518] = 281,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 282,
  [524] = 524,
  [525] = 525,
  [526] = 283,
  [527] = 284,
  [528] = 285,
  [529] = 529,
  [530] = 287,
  [531] = 288,
  [532] = 532,
  [533] = 289,
  [534] = 290,
  [535] = 292,
  [536] = 536,
  [537] = 293,
  [538] = 294,
  [539] = 295,
  [540] = 296,
  [541] = 297,
  [542] = 542,
  [543] = 299,
  [544] = 544,
  [545] = 300,
  [546] = 546,
  [547] = 302,
  [548] = 303,
  [549] = 304,
  [550] = 305,
  [551] = 306,
  [552] = 307,
  [553] = 308,
  [554] = 554,
  [555] = 555,
  [556] = 309,
  [557] = 557,
  [558] = 311,
  [559] = 312,
  [560] = 313,
  [561] = 561,
  [562] = 314,
  [563] = 563,
  [564] = 316,
  [565] = 565,
  [566] = 317,
  [567] = 318,
  [568] = 319,
  [569] = 320,
  [570] = 321,
  [571] = 322,
  [572] = 323,
  [573] = 324,
  [574] = 325,
  [575] = 326,
  [576] = 327,
  [577] = 328,
  [578] = 329,
  [579] = 330,
  [580] = 354,
  [581] = 335,
  [582] = 356,
  [583] = 357,
  [584] = 336,
  [585] = 359,
  [586] = 359,
  [587] = 337,
  [588] = 588,
  [589] = 360,
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
  [609] = 354,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 338,
  [615] = 437,
  [616] = 436,
  [617] = 445,
  [618] = 440,
  [619] = 441,
  [620] = 444,
  [621] = 340,
  [622] = 622,
  [623] = 623,
  [624] = 341,
  [625] = 625,
  [626] = 626,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 360,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 636,
  [637] = 12,
  [638] = 638,
  [639] = 639,
  [640] = 640,
  [641] = 331,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 448,
  [652] = 449,
  [653] = 452,
  [654] = 654,
  [655] = 655,
  [656] = 172,
  [657] = 657,
  [658] = 658,
  [659] = 356,
  [660] = 173,
  [661] = 661,
  [662] = 455,
  [663] = 357,
  [664] = 664,
  [665] = 665,
  [666] = 456,
  [667] = 342,
  [668] = 668,
  [669] = 457,
  [670] = 343,
  [671] = 458,
  [672] = 332,
  [673] = 459,
  [674] = 460,
  [675] = 461,
  [676] = 331,
  [677] = 332,
  [678] = 333,
  [679] = 335,
  [680] = 336,
  [681] = 337,
  [682] = 172,
  [683] = 173,
  [684] = 331,
  [685] = 332,
  [686] = 333,
  [687] = 335,
  [688] = 336,
  [689] = 337,
  [690] = 690,
  [691] = 333,
  [692] = 463,
  [693] = 172,
  [694] = 173,
  [695] = 695,
  [696] = 469,
  [697] = 697,
  [698] = 606,
  [699] = 699,
  [700] = 700,
  [701] = 701,
  [702] = 622,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 334,
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
  [717] = 470,
  [718] = 471,
  [719] = 472,
  [720] = 473,
  [721] = 636,
  [722] = 474,
  [723] = 478,
  [724] = 712,
  [725] = 713,
  [726] = 726,
  [727] = 369,
  [728] = 238,
  [729] = 239,
  [730] = 510,
  [731] = 517,
  [732] = 519,
  [733] = 520,
  [734] = 521,
  [735] = 735,
  [736] = 240,
  [737] = 241,
  [738] = 480,
  [739] = 242,
  [740] = 243,
  [741] = 244,
  [742] = 606,
  [743] = 245,
  [744] = 606,
  [745] = 246,
  [746] = 247,
  [747] = 248,
  [748] = 249,
  [749] = 749,
  [750] = 661,
  [751] = 497,
  [752] = 250,
  [753] = 251,
  [754] = 610,
  [755] = 611,
  [756] = 638,
  [757] = 639,
  [758] = 661,
  [759] = 497,
  [760] = 661,
  [761] = 497,
  [762] = 595,
  [763] = 252,
  [764] = 253,
  [765] = 254,
  [766] = 402,
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
  [780] = 780,
  [781] = 781,
  [782] = 643,
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
  [797] = 354,
  [798] = 648,
  [799] = 649,
  [800] = 800,
  [801] = 356,
  [802] = 357,
  [803] = 803,
  [804] = 804,
  [805] = 359,
  [806] = 360,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 172,
  [815] = 173,
  [816] = 816,
  [817] = 817,
  [818] = 331,
  [819] = 332,
  [820] = 333,
  [821] = 334,
  [822] = 335,
  [823] = 336,
  [824] = 337,
  [825] = 172,
  [826] = 338,
  [827] = 827,
  [828] = 340,
  [829] = 341,
  [830] = 172,
  [831] = 173,
  [832] = 331,
  [833] = 332,
  [834] = 333,
  [835] = 335,
  [836] = 336,
  [837] = 337,
  [838] = 331,
  [839] = 332,
  [840] = 333,
  [841] = 335,
  [842] = 336,
  [843] = 337,
  [844] = 767,
  [845] = 845,
  [846] = 173,
  [847] = 847,
  [848] = 848,
  [849] = 342,
  [850] = 343,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 590,
  [861] = 790,
  [862] = 791,
  [863] = 792,
  [864] = 794,
  [865] = 795,
  [866] = 796,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 859,
  [872] = 809,
  [873] = 873,
  [874] = 874,
  [875] = 812,
  [876] = 813,
  [877] = 817,
  [878] = 12,
  [879] = 852,
  [880] = 869,
  [881] = 870,
  [882] = 882,
  [883] = 650,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 888,
  [889] = 889,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 793,
  [894] = 800,
  [895] = 853,
  [896] = 896,
  [897] = 897,
  [898] = 827,
  [899] = 847,
  [900] = 900,
  [901] = 884,
  [902] = 902,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 816,
  [909] = 885,
  [910] = 910,
  [911] = 858,
  [912] = 903,
  [913] = 874,
  [914] = 891,
  [915] = 896,
  [916] = 902,
  [917] = 905,
  [918] = 910,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 768,
  [923] = 867,
  [924] = 783,
  [925] = 789,
  [926] = 886,
  [927] = 856,
  [928] = 856,
  [929] = 929,
  [930] = 856,
  [931] = 931,
  [932] = 887,
  [933] = 888,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 937,
  [938] = 938,
  [939] = 939,
  [940] = 889,
  [941] = 803,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 900,
  [946] = 943,
  [947] = 944,
  [948] = 919,
  [949] = 949,
  [950] = 807,
  [951] = 904,
  [952] = 892,
  [953] = 920,
  [954] = 845,
  [955] = 955,
  [956] = 807,
  [957] = 807,
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
  [973] = 959,
  [974] = 974,
  [975] = 975,
  [976] = 976,
  [977] = 977,
  [978] = 978,
  [979] = 979,
  [980] = 980,
  [981] = 276,
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
  [998] = 172,
  [999] = 999,
  [1000] = 975,
  [1001] = 1001,
  [1002] = 983,
  [1003] = 972,
  [1004] = 173,
  [1005] = 1005,
  [1006] = 983,
  [1007] = 972,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 257,
  [1011] = 1011,
  [1012] = 983,
  [1013] = 972,
  [1014] = 1014,
  [1015] = 983,
  [1016] = 972,
  [1017] = 983,
  [1018] = 972,
  [1019] = 1019,
  [1020] = 983,
  [1021] = 972,
  [1022] = 1022,
  [1023] = 983,
  [1024] = 972,
  [1025] = 983,
  [1026] = 972,
  [1027] = 995,
  [1028] = 983,
  [1029] = 972,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1032,
  [1033] = 1033,
  [1034] = 996,
  [1035] = 1035,
  [1036] = 967,
  [1037] = 1037,
  [1038] = 1035,
  [1039] = 966,
  [1040] = 1019,
  [1041] = 995,
  [1042] = 1042,
  [1043] = 995,
  [1044] = 995,
  [1045] = 995,
  [1046] = 995,
  [1047] = 995,
  [1048] = 995,
  [1049] = 995,
  [1050] = 1031,
  [1051] = 979,
  [1052] = 980,
  [1053] = 982,
  [1054] = 1054,
  [1055] = 985,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 1056,
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
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1062,
  [1076] = 1064,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1066,
  [1083] = 1083,
  [1084] = 1073,
  [1085] = 1074,
  [1086] = 1062,
  [1087] = 1064,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1090,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1093,
  [1094] = 1094,
  [1095] = 1073,
  [1096] = 1074,
  [1097] = 1062,
  [1098] = 1064,
  [1099] = 1099,
  [1100] = 1100,
  [1101] = 1101,
  [1102] = 1073,
  [1103] = 1074,
  [1104] = 1104,
  [1105] = 1064,
  [1106] = 1106,
  [1107] = 1107,
  [1108] = 1073,
  [1109] = 1073,
  [1110] = 1074,
  [1111] = 1062,
  [1112] = 1064,
  [1113] = 1113,
  [1114] = 1114,
  [1115] = 1115,
  [1116] = 1073,
  [1117] = 1074,
  [1118] = 1062,
  [1119] = 1064,
  [1120] = 1069,
  [1121] = 1121,
  [1122] = 1122,
  [1123] = 1073,
  [1124] = 1074,
  [1125] = 1062,
  [1126] = 1064,
  [1127] = 1127,
  [1128] = 1128,
  [1129] = 1129,
  [1130] = 1073,
  [1131] = 1074,
  [1132] = 1062,
  [1133] = 1064,
  [1134] = 1064,
  [1135] = 1064,
  [1136] = 1064,
  [1137] = 1137,
  [1138] = 1138,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1073,
  [1142] = 1107,
  [1143] = 1074,
  [1144] = 1062,
  [1145] = 1145,
  [1146] = 1146,
  [1147] = 12,
  [1148] = 1113,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1151,
  [1152] = 1152,
  [1153] = 1153,
  [1154] = 1154,
  [1155] = 1064,
  [1156] = 1156,
  [1157] = 1150,
  [1158] = 625,
  [1159] = 1071,
  [1160] = 1145,
  [1161] = 1065,
  [1162] = 1162,
  [1163] = 1093,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1151,
  [1168] = 1099,
  [1169] = 1169,
  [1170] = 1078,
  [1171] = 989,
  [1172] = 1074,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1181,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1184,
  [1185] = 1176,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1153,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1154,
  [1192] = 1068,
  [1193] = 1193,
  [1194] = 1062,
  [1195] = 1195,
  [1196] = 1196,
  [1197] = 1189,
  [1198] = 1198,
  [1199] = 1173,
  [1200] = 1200,
  [1201] = 1181,
  [1202] = 1072,
  [1203] = 882,
  [1204] = 1204,
  [1205] = 1205,
  [1206] = 1164,
  [1207] = 1196,
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 297:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(297);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(666);
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
  [21] = {.lex_state = 14, .external_lex_state = 7},
  [22] = {.lex_state = 14, .external_lex_state = 7},
  [23] = {.lex_state = 4, .external_lex_state = 7},
  [24] = {.lex_state = 4, .external_lex_state = 7},
  [25] = {.lex_state = 14, .external_lex_state = 7},
  [26] = {.lex_state = 14, .external_lex_state = 7},
  [27] = {.lex_state = 1},
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
  [39] = {.lex_state = 2, .external_lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 2, .external_lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 0, .external_lex_state = 8},
  [50] = {.lex_state = 3, .external_lex_state = 7},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 7, .external_lex_state = 7},
  [53] = {.lex_state = 0, .external_lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 5, .external_lex_state = 7},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 8},
  [60] = {.lex_state = 5, .external_lex_state = 7},
  [61] = {.lex_state = 3, .external_lex_state = 7},
  [62] = {.lex_state = 5, .external_lex_state = 7},
  [63] = {.lex_state = 7, .external_lex_state = 7},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 5, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 9},
  [68] = {.lex_state = 0, .external_lex_state = 10},
  [69] = {.lex_state = 0, .external_lex_state = 11},
  [70] = {.lex_state = 5, .external_lex_state = 7},
  [71] = {.lex_state = 5, .external_lex_state = 7},
  [72] = {.lex_state = 5, .external_lex_state = 7},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0, .external_lex_state = 8},
  [75] = {.lex_state = 0, .external_lex_state = 8},
  [76] = {.lex_state = 0, .external_lex_state = 11},
  [77] = {.lex_state = 0, .external_lex_state = 11},
  [78] = {.lex_state = 0, .external_lex_state = 12},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 12},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0, .external_lex_state = 9},
  [84] = {.lex_state = 5, .external_lex_state = 7},
  [85] = {.lex_state = 5, .external_lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 12},
  [87] = {.lex_state = 5, .external_lex_state = 7},
  [88] = {.lex_state = 0, .external_lex_state = 9},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 9},
  [91] = {.lex_state = 0, .external_lex_state = 9},
  [92] = {.lex_state = 0, .external_lex_state = 9},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 13},
  [95] = {.lex_state = 0, .external_lex_state = 13},
  [96] = {.lex_state = 0, .external_lex_state = 13},
  [97] = {.lex_state = 0, .external_lex_state = 10},
  [98] = {.lex_state = 0, .external_lex_state = 10},
  [99] = {.lex_state = 0, .external_lex_state = 10},
  [100] = {.lex_state = 0, .external_lex_state = 14},
  [101] = {.lex_state = 0, .external_lex_state = 15},
  [102] = {.lex_state = 0, .external_lex_state = 16},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 16, .external_lex_state = 7},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 17},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 18},
  [110] = {.lex_state = 0, .external_lex_state = 16},
  [111] = {.lex_state = 0, .external_lex_state = 9},
  [112] = {.lex_state = 16, .external_lex_state = 7},
  [113] = {.lex_state = 0, .external_lex_state = 19},
  [114] = {.lex_state = 0, .external_lex_state = 17},
  [115] = {.lex_state = 0, .external_lex_state = 20},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 19},
  [118] = {.lex_state = 0, .external_lex_state = 9},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 19},
  [122] = {.lex_state = 0, .external_lex_state = 18},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 19},
  [126] = {.lex_state = 0, .external_lex_state = 21},
  [127] = {.lex_state = 0, .external_lex_state = 20},
  [128] = {.lex_state = 0, .external_lex_state = 21},
  [129] = {.lex_state = 0, .external_lex_state = 21},
  [130] = {.lex_state = 0, .external_lex_state = 13},
  [131] = {.lex_state = 0, .external_lex_state = 13},
  [132] = {.lex_state = 0, .external_lex_state = 20},
  [133] = {.lex_state = 0, .external_lex_state = 18},
  [134] = {.lex_state = 0, .external_lex_state = 9},
  [135] = {.lex_state = 0, .external_lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 9},
  [137] = {.lex_state = 16, .external_lex_state = 7},
  [138] = {.lex_state = 8, .external_lex_state = 7},
  [139] = {.lex_state = 8, .external_lex_state = 7},
  [140] = {.lex_state = 8, .external_lex_state = 7},
  [141] = {.lex_state = 0, .external_lex_state = 14},
  [142] = {.lex_state = 16, .external_lex_state = 7},
  [143] = {.lex_state = 0, .external_lex_state = 20},
  [144] = {.lex_state = 0, .external_lex_state = 9},
  [145] = {.lex_state = 0, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 9},
  [147] = {.lex_state = 0, .external_lex_state = 17},
  [148] = {.lex_state = 0, .external_lex_state = 15},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 9},
  [151] = {.lex_state = 0, .external_lex_state = 9},
  [152] = {.lex_state = 0, .external_lex_state = 18},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 14},
  [155] = {.lex_state = 0, .external_lex_state = 14},
  [156] = {.lex_state = 0, .external_lex_state = 14},
  [157] = {.lex_state = 0, .external_lex_state = 14},
  [158] = {.lex_state = 0, .external_lex_state = 14},
  [159] = {.lex_state = 0, .external_lex_state = 14},
  [160] = {.lex_state = 0, .external_lex_state = 14},
  [161] = {.lex_state = 0, .external_lex_state = 14},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 20},
  [168] = {.lex_state = 0, .external_lex_state = 16},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 13, .external_lex_state = 7},
  [171] = {.lex_state = 0, .external_lex_state = 9},
  [172] = {.lex_state = 0, .external_lex_state = 10},
  [173] = {.lex_state = 0, .external_lex_state = 10},
  [174] = {.lex_state = 16, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 22},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 22},
  [178] = {.lex_state = 0, .external_lex_state = 22},
  [179] = {.lex_state = 0, .external_lex_state = 22},
  [180] = {.lex_state = 0, .external_lex_state = 22},
  [181] = {.lex_state = 0, .external_lex_state = 17},
  [182] = {.lex_state = 16, .external_lex_state = 7},
  [183] = {.lex_state = 0, .external_lex_state = 22},
  [184] = {.lex_state = 16, .external_lex_state = 7},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 17},
  [188] = {.lex_state = 10, .external_lex_state = 23},
  [189] = {.lex_state = 16, .external_lex_state = 7},
  [190] = {.lex_state = 16, .external_lex_state = 7},
  [191] = {.lex_state = 16, .external_lex_state = 7},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 0, .external_lex_state = 22},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 22},
  [196] = {.lex_state = 16, .external_lex_state = 7},
  [197] = {.lex_state = 16, .external_lex_state = 7},
  [198] = {.lex_state = 0, .external_lex_state = 22},
  [199] = {.lex_state = 16, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 22},
  [201] = {.lex_state = 19},
  [202] = {.lex_state = 0, .external_lex_state = 22},
  [203] = {.lex_state = 0, .external_lex_state = 22},
  [204] = {.lex_state = 0, .external_lex_state = 22},
  [205] = {.lex_state = 16, .external_lex_state = 7},
  [206] = {.lex_state = 16, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 22},
  [208] = {.lex_state = 16, .external_lex_state = 7},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 16, .external_lex_state = 7},
  [211] = {.lex_state = 16, .external_lex_state = 7},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0, .external_lex_state = 13},
  [214] = {.lex_state = 0, .external_lex_state = 22},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 16},
  [217] = {.lex_state = 0, .external_lex_state = 13},
  [218] = {.lex_state = 0, .external_lex_state = 22},
  [219] = {.lex_state = 0, .external_lex_state = 13},
  [220] = {.lex_state = 0, .external_lex_state = 22},
  [221] = {.lex_state = 16, .external_lex_state = 7},
  [222] = {.lex_state = 0, .external_lex_state = 22},
  [223] = {.lex_state = 0, .external_lex_state = 16},
  [224] = {.lex_state = 10, .external_lex_state = 23},
  [225] = {.lex_state = 13, .external_lex_state = 7},
  [226] = {.lex_state = 0, .external_lex_state = 22},
  [227] = {.lex_state = 0, .external_lex_state = 22},
  [228] = {.lex_state = 0, .external_lex_state = 22},
  [229] = {.lex_state = 0, .external_lex_state = 22},
  [230] = {.lex_state = 16, .external_lex_state = 7},
  [231] = {.lex_state = 16, .external_lex_state = 7},
  [232] = {.lex_state = 0, .external_lex_state = 22},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 22},
  [235] = {.lex_state = 0, .external_lex_state = 22},
  [236] = {.lex_state = 16, .external_lex_state = 7},
  [237] = {.lex_state = 0, .external_lex_state = 24},
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
  [255] = {.lex_state = 0, .external_lex_state = 24},
  [256] = {.lex_state = 0, .external_lex_state = 22},
  [257] = {.lex_state = 1},
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
  [268] = {.lex_state = 0, .external_lex_state = 12},
  [269] = {.lex_state = 0, .external_lex_state = 12},
  [270] = {.lex_state = 0, .external_lex_state = 12},
  [271] = {.lex_state = 0, .external_lex_state = 12},
  [272] = {.lex_state = 0, .external_lex_state = 12},
  [273] = {.lex_state = 0, .external_lex_state = 12},
  [274] = {.lex_state = 0, .external_lex_state = 12},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 12},
  [278] = {.lex_state = 0, .external_lex_state = 12},
  [279] = {.lex_state = 0, .external_lex_state = 12},
  [280] = {.lex_state = 0, .external_lex_state = 12},
  [281] = {.lex_state = 0, .external_lex_state = 12},
  [282] = {.lex_state = 0, .external_lex_state = 12},
  [283] = {.lex_state = 0, .external_lex_state = 12},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 0, .external_lex_state = 12},
  [286] = {.lex_state = 0, .external_lex_state = 25},
  [287] = {.lex_state = 0, .external_lex_state = 12},
  [288] = {.lex_state = 0, .external_lex_state = 12},
  [289] = {.lex_state = 0, .external_lex_state = 12},
  [290] = {.lex_state = 0, .external_lex_state = 12},
  [291] = {.lex_state = 0, .external_lex_state = 22},
  [292] = {.lex_state = 0, .external_lex_state = 12},
  [293] = {.lex_state = 0, .external_lex_state = 12},
  [294] = {.lex_state = 0, .external_lex_state = 12},
  [295] = {.lex_state = 0, .external_lex_state = 12},
  [296] = {.lex_state = 0, .external_lex_state = 12},
  [297] = {.lex_state = 0, .external_lex_state = 12},
  [298] = {.lex_state = 0, .external_lex_state = 22},
  [299] = {.lex_state = 0, .external_lex_state = 12},
  [300] = {.lex_state = 0, .external_lex_state = 12},
  [301] = {.lex_state = 0, .external_lex_state = 22},
  [302] = {.lex_state = 0, .external_lex_state = 12},
  [303] = {.lex_state = 0, .external_lex_state = 12},
  [304] = {.lex_state = 0, .external_lex_state = 12},
  [305] = {.lex_state = 0, .external_lex_state = 12},
  [306] = {.lex_state = 0, .external_lex_state = 12},
  [307] = {.lex_state = 0, .external_lex_state = 12},
  [308] = {.lex_state = 0, .external_lex_state = 12},
  [309] = {.lex_state = 0, .external_lex_state = 12},
  [310] = {.lex_state = 9, .external_lex_state = 7},
  [311] = {.lex_state = 0, .external_lex_state = 12},
  [312] = {.lex_state = 0, .external_lex_state = 12},
  [313] = {.lex_state = 0, .external_lex_state = 12},
  [314] = {.lex_state = 0, .external_lex_state = 12},
  [315] = {.lex_state = 0, .external_lex_state = 26},
  [316] = {.lex_state = 0, .external_lex_state = 12},
  [317] = {.lex_state = 0, .external_lex_state = 12},
  [318] = {.lex_state = 0, .external_lex_state = 12},
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
  [331] = {.lex_state = 0, .external_lex_state = 20},
  [332] = {.lex_state = 0, .external_lex_state = 20},
  [333] = {.lex_state = 0, .external_lex_state = 20},
  [334] = {.lex_state = 8, .external_lex_state = 7},
  [335] = {.lex_state = 0, .external_lex_state = 20},
  [336] = {.lex_state = 0, .external_lex_state = 20},
  [337] = {.lex_state = 0, .external_lex_state = 20},
  [338] = {.lex_state = 8, .external_lex_state = 7},
  [339] = {.lex_state = 0, .external_lex_state = 16},
  [340] = {.lex_state = 8, .external_lex_state = 7},
  [341] = {.lex_state = 8, .external_lex_state = 7},
  [342] = {.lex_state = 8, .external_lex_state = 7},
  [343] = {.lex_state = 8, .external_lex_state = 7},
  [344] = {.lex_state = 0, .external_lex_state = 16},
  [345] = {.lex_state = 0, .external_lex_state = 8},
  [346] = {.lex_state = 0, .external_lex_state = 24},
  [347] = {.lex_state = 0, .external_lex_state = 8},
  [348] = {.lex_state = 0, .external_lex_state = 8},
  [349] = {.lex_state = 0, .external_lex_state = 8},
  [350] = {.lex_state = 0, .external_lex_state = 8},
  [351] = {.lex_state = 0, .external_lex_state = 8},
  [352] = {.lex_state = 0, .external_lex_state = 8},
  [353] = {.lex_state = 0, .external_lex_state = 20},
  [354] = {.lex_state = 0, .external_lex_state = 12},
  [355] = {.lex_state = 0, .external_lex_state = 20},
  [356] = {.lex_state = 0, .external_lex_state = 12},
  [357] = {.lex_state = 0, .external_lex_state = 12},
  [358] = {.lex_state = 0, .external_lex_state = 27},
  [359] = {.lex_state = 0, .external_lex_state = 12},
  [360] = {.lex_state = 0, .external_lex_state = 12},
  [361] = {.lex_state = 0, .external_lex_state = 26},
  [362] = {.lex_state = 0, .external_lex_state = 11},
  [363] = {.lex_state = 0, .external_lex_state = 11},
  [364] = {.lex_state = 0, .external_lex_state = 11},
  [365] = {.lex_state = 0, .external_lex_state = 11},
  [366] = {.lex_state = 0, .external_lex_state = 11},
  [367] = {.lex_state = 0, .external_lex_state = 11},
  [368] = {.lex_state = 0, .external_lex_state = 2},
  [369] = {.lex_state = 0, .external_lex_state = 12},
  [370] = {.lex_state = 0, .external_lex_state = 27},
  [371] = {.lex_state = 0, .external_lex_state = 11},
  [372] = {.lex_state = 0, .external_lex_state = 11},
  [373] = {.lex_state = 0, .external_lex_state = 19},
  [374] = {.lex_state = 0, .external_lex_state = 19},
  [375] = {.lex_state = 0, .external_lex_state = 12},
  [376] = {.lex_state = 0, .external_lex_state = 12},
  [377] = {.lex_state = 0, .external_lex_state = 12},
  [378] = {.lex_state = 0, .external_lex_state = 12},
  [379] = {.lex_state = 0, .external_lex_state = 12},
  [380] = {.lex_state = 0, .external_lex_state = 12},
  [381] = {.lex_state = 0, .external_lex_state = 8},
  [382] = {.lex_state = 0, .external_lex_state = 8},
  [383] = {.lex_state = 0, .external_lex_state = 12},
  [384] = {.lex_state = 0, .external_lex_state = 12},
  [385] = {.lex_state = 0, .external_lex_state = 26},
  [386] = {.lex_state = 0, .external_lex_state = 22},
  [387] = {.lex_state = 19},
  [388] = {.lex_state = 0, .external_lex_state = 26},
  [389] = {.lex_state = 0, .external_lex_state = 26},
  [390] = {.lex_state = 19},
  [391] = {.lex_state = 0, .external_lex_state = 25},
  [392] = {.lex_state = 0, .external_lex_state = 17},
  [393] = {.lex_state = 0, .external_lex_state = 24},
  [394] = {.lex_state = 9, .external_lex_state = 7},
  [395] = {.lex_state = 0, .external_lex_state = 17},
  [396] = {.lex_state = 0, .external_lex_state = 27},
  [397] = {.lex_state = 0, .external_lex_state = 26},
  [398] = {.lex_state = 0, .external_lex_state = 24},
  [399] = {.lex_state = 0, .external_lex_state = 24},
  [400] = {.lex_state = 19},
  [401] = {.lex_state = 19},
  [402] = {.lex_state = 0, .external_lex_state = 12},
  [403] = {.lex_state = 1, .external_lex_state = 28},
  [404] = {.lex_state = 0, .external_lex_state = 17},
  [405] = {.lex_state = 0, .external_lex_state = 27},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 0, .external_lex_state = 24},
  [408] = {.lex_state = 0, .external_lex_state = 24},
  [409] = {.lex_state = 16, .external_lex_state = 7},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 19},
  [413] = {.lex_state = 6, .external_lex_state = 7},
  [414] = {.lex_state = 0, .external_lex_state = 24},
  [415] = {.lex_state = 0, .external_lex_state = 24},
  [416] = {.lex_state = 6, .external_lex_state = 7},
  [417] = {.lex_state = 0, .external_lex_state = 24},
  [418] = {.lex_state = 0, .external_lex_state = 24},
  [419] = {.lex_state = 19},
  [420] = {.lex_state = 6, .external_lex_state = 7},
  [421] = {.lex_state = 0, .external_lex_state = 22},
  [422] = {.lex_state = 19},
  [423] = {.lex_state = 0, .external_lex_state = 26},
  [424] = {.lex_state = 0, .external_lex_state = 22},
  [425] = {.lex_state = 0, .external_lex_state = 16},
  [426] = {.lex_state = 0, .external_lex_state = 24},
  [427] = {.lex_state = 17, .external_lex_state = 7},
  [428] = {.lex_state = 16, .external_lex_state = 7},
  [429] = {.lex_state = 0, .external_lex_state = 24},
  [430] = {.lex_state = 1, .external_lex_state = 7},
  [431] = {.lex_state = 1, .external_lex_state = 7},
  [432] = {.lex_state = 9, .external_lex_state = 7},
  [433] = {.lex_state = 1, .external_lex_state = 7},
  [434] = {.lex_state = 16, .external_lex_state = 7},
  [435] = {.lex_state = 0, .external_lex_state = 8},
  [436] = {.lex_state = 0, .external_lex_state = 11},
  [437] = {.lex_state = 0, .external_lex_state = 12},
  [438] = {.lex_state = 9, .external_lex_state = 7},
  [439] = {.lex_state = 0, .external_lex_state = 24},
  [440] = {.lex_state = 0, .external_lex_state = 12},
  [441] = {.lex_state = 0, .external_lex_state = 12},
  [442] = {.lex_state = 0, .external_lex_state = 24},
  [443] = {.lex_state = 0, .external_lex_state = 24},
  [444] = {.lex_state = 0, .external_lex_state = 12},
  [445] = {.lex_state = 0, .external_lex_state = 11},
  [446] = {.lex_state = 1},
  [447] = {.lex_state = 19},
  [448] = {.lex_state = 0, .external_lex_state = 12},
  [449] = {.lex_state = 0, .external_lex_state = 12},
  [450] = {.lex_state = 0, .external_lex_state = 26},
  [451] = {.lex_state = 0, .external_lex_state = 26},
  [452] = {.lex_state = 0, .external_lex_state = 12},
  [453] = {.lex_state = 0, .external_lex_state = 26},
  [454] = {.lex_state = 0, .external_lex_state = 26},
  [455] = {.lex_state = 0, .external_lex_state = 12},
  [456] = {.lex_state = 0, .external_lex_state = 12},
  [457] = {.lex_state = 0, .external_lex_state = 12},
  [458] = {.lex_state = 0, .external_lex_state = 12},
  [459] = {.lex_state = 0, .external_lex_state = 12},
  [460] = {.lex_state = 0, .external_lex_state = 12},
  [461] = {.lex_state = 0, .external_lex_state = 12},
  [462] = {.lex_state = 17, .external_lex_state = 7},
  [463] = {.lex_state = 0, .external_lex_state = 12},
  [464] = {.lex_state = 6, .external_lex_state = 7},
  [465] = {.lex_state = 0, .external_lex_state = 25},
  [466] = {.lex_state = 16, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 25},
  [468] = {.lex_state = 0, .external_lex_state = 27},
  [469] = {.lex_state = 0, .external_lex_state = 12},
  [470] = {.lex_state = 0, .external_lex_state = 12},
  [471] = {.lex_state = 0, .external_lex_state = 12},
  [472] = {.lex_state = 0, .external_lex_state = 12},
  [473] = {.lex_state = 0, .external_lex_state = 12},
  [474] = {.lex_state = 0, .external_lex_state = 12},
  [475] = {.lex_state = 0, .external_lex_state = 22},
  [476] = {.lex_state = 0, .external_lex_state = 22},
  [477] = {.lex_state = 0, .external_lex_state = 22},
  [478] = {.lex_state = 0, .external_lex_state = 12},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 19},
  [481] = {.lex_state = 0, .external_lex_state = 9},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 1, .external_lex_state = 7},
  [488] = {.lex_state = 1, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 0, .external_lex_state = 9},
  [493] = {.lex_state = 0, .external_lex_state = 9},
  [494] = {.lex_state = 0, .external_lex_state = 9},
  [495] = {.lex_state = 0, .external_lex_state = 9},
  [496] = {.lex_state = 0, .external_lex_state = 9},
  [497] = {.lex_state = 0, .external_lex_state = 29},
  [498] = {.lex_state = 0, .external_lex_state = 9},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 9},
  [501] = {.lex_state = 0, .external_lex_state = 9},
  [502] = {.lex_state = 0, .external_lex_state = 9},
  [503] = {.lex_state = 0, .external_lex_state = 9},
  [504] = {.lex_state = 0, .external_lex_state = 9},
  [505] = {.lex_state = 0, .external_lex_state = 9},
  [506] = {.lex_state = 0, .external_lex_state = 9},
  [507] = {.lex_state = 0, .external_lex_state = 30},
  [508] = {.lex_state = 0, .external_lex_state = 9},
  [509] = {.lex_state = 0, .external_lex_state = 9},
  [510] = {.lex_state = 16, .external_lex_state = 7},
  [511] = {.lex_state = 0, .external_lex_state = 9},
  [512] = {.lex_state = 1, .external_lex_state = 7},
  [513] = {.lex_state = 1, .external_lex_state = 7},
  [514] = {.lex_state = 0, .external_lex_state = 9},
  [515] = {.lex_state = 0, .external_lex_state = 9},
  [516] = {.lex_state = 0, .external_lex_state = 9},
  [517] = {.lex_state = 16, .external_lex_state = 7},
  [518] = {.lex_state = 0, .external_lex_state = 9},
  [519] = {.lex_state = 16, .external_lex_state = 7},
  [520] = {.lex_state = 16, .external_lex_state = 7},
  [521] = {.lex_state = 16, .external_lex_state = 7},
  [522] = {.lex_state = 1},
  [523] = {.lex_state = 0, .external_lex_state = 9},
  [524] = {.lex_state = 0, .external_lex_state = 29},
  [525] = {.lex_state = 0, .external_lex_state = 15},
  [526] = {.lex_state = 0, .external_lex_state = 9},
  [527] = {.lex_state = 0, .external_lex_state = 9},
  [528] = {.lex_state = 0, .external_lex_state = 9},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 0, .external_lex_state = 9},
  [531] = {.lex_state = 0, .external_lex_state = 9},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 9},
  [534] = {.lex_state = 0, .external_lex_state = 9},
  [535] = {.lex_state = 0, .external_lex_state = 9},
  [536] = {.lex_state = 0, .external_lex_state = 9},
  [537] = {.lex_state = 0, .external_lex_state = 9},
  [538] = {.lex_state = 0, .external_lex_state = 9},
  [539] = {.lex_state = 0, .external_lex_state = 9},
  [540] = {.lex_state = 0, .external_lex_state = 9},
  [541] = {.lex_state = 0, .external_lex_state = 9},
  [542] = {.lex_state = 0, .external_lex_state = 15},
  [543] = {.lex_state = 0, .external_lex_state = 9},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 9},
  [546] = {.lex_state = 0, .external_lex_state = 2},
  [547] = {.lex_state = 0, .external_lex_state = 9},
  [548] = {.lex_state = 0, .external_lex_state = 9},
  [549] = {.lex_state = 0, .external_lex_state = 9},
  [550] = {.lex_state = 0, .external_lex_state = 9},
  [551] = {.lex_state = 0, .external_lex_state = 9},
  [552] = {.lex_state = 0, .external_lex_state = 9},
  [553] = {.lex_state = 0, .external_lex_state = 9},
  [554] = {.lex_state = 0, .external_lex_state = 15},
  [555] = {.lex_state = 0, .external_lex_state = 15},
  [556] = {.lex_state = 0, .external_lex_state = 9},
  [557] = {.lex_state = 1},
  [558] = {.lex_state = 0, .external_lex_state = 9},
  [559] = {.lex_state = 0, .external_lex_state = 9},
  [560] = {.lex_state = 0, .external_lex_state = 9},
  [561] = {.lex_state = 0, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 9},
  [563] = {.lex_state = 0, .external_lex_state = 29},
  [564] = {.lex_state = 0, .external_lex_state = 9},
  [565] = {.lex_state = 0, .external_lex_state = 15},
  [566] = {.lex_state = 0, .external_lex_state = 9},
  [567] = {.lex_state = 0, .external_lex_state = 9},
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
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 0, .external_lex_state = 9},
  [583] = {.lex_state = 0, .external_lex_state = 9},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 9},
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
  [599] = {.lex_state = 0, .external_lex_state = 30},
  [600] = {.lex_state = 0, .external_lex_state = 7},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 7},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 15, .external_lex_state = 7},
  [606] = {.lex_state = 0, .external_lex_state = 31},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 2},
  [610] = {.lex_state = 9, .external_lex_state = 7},
  [611] = {.lex_state = 18, .external_lex_state = 7},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 1},
  [615] = {.lex_state = 0, .external_lex_state = 9},
  [616] = {.lex_state = 0, .external_lex_state = 21},
  [617] = {.lex_state = 0, .external_lex_state = 21},
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
  [635] = {.lex_state = 0, .external_lex_state = 9},
  [636] = {.lex_state = 16, .external_lex_state = 7},
  [637] = {.lex_state = 76},
  [638] = {.lex_state = 76},
  [639] = {.lex_state = 20},
  [640] = {.lex_state = 0, .external_lex_state = 2},
  [641] = {.lex_state = 0, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 2},
  [643] = {.lex_state = 0, .external_lex_state = 9},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 9},
  [649] = {.lex_state = 0, .external_lex_state = 9},
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
  [661] = {.lex_state = 0, .external_lex_state = 29},
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
  [684] = {.lex_state = 0, .external_lex_state = 21},
  [685] = {.lex_state = 0, .external_lex_state = 21},
  [686] = {.lex_state = 0, .external_lex_state = 21},
  [687] = {.lex_state = 0, .external_lex_state = 21},
  [688] = {.lex_state = 0, .external_lex_state = 21},
  [689] = {.lex_state = 0, .external_lex_state = 21},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 0, .external_lex_state = 2},
  [692] = {.lex_state = 0, .external_lex_state = 9},
  [693] = {.lex_state = 0, .external_lex_state = 21},
  [694] = {.lex_state = 0, .external_lex_state = 21},
  [695] = {.lex_state = 1, .external_lex_state = 28},
  [696] = {.lex_state = 0, .external_lex_state = 9},
  [697] = {.lex_state = 0, .external_lex_state = 2},
  [698] = {.lex_state = 0, .external_lex_state = 31},
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
  [711] = {.lex_state = 1, .external_lex_state = 7},
  [712] = {.lex_state = 16, .external_lex_state = 7},
  [713] = {.lex_state = 16, .external_lex_state = 7},
  [714] = {.lex_state = 0, .external_lex_state = 2},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 0, .external_lex_state = 2},
  [717] = {.lex_state = 0, .external_lex_state = 9},
  [718] = {.lex_state = 0, .external_lex_state = 9},
  [719] = {.lex_state = 0, .external_lex_state = 9},
  [720] = {.lex_state = 0, .external_lex_state = 9},
  [721] = {.lex_state = 16, .external_lex_state = 7},
  [722] = {.lex_state = 0, .external_lex_state = 9},
  [723] = {.lex_state = 0, .external_lex_state = 9},
  [724] = {.lex_state = 16, .external_lex_state = 7},
  [725] = {.lex_state = 16, .external_lex_state = 7},
  [726] = {.lex_state = 0, .external_lex_state = 2},
  [727] = {.lex_state = 0, .external_lex_state = 9},
  [728] = {.lex_state = 0, .external_lex_state = 9},
  [729] = {.lex_state = 0, .external_lex_state = 9},
  [730] = {.lex_state = 16, .external_lex_state = 7},
  [731] = {.lex_state = 16, .external_lex_state = 7},
  [732] = {.lex_state = 16, .external_lex_state = 7},
  [733] = {.lex_state = 16, .external_lex_state = 7},
  [734] = {.lex_state = 16, .external_lex_state = 7},
  [735] = {.lex_state = 0, .external_lex_state = 2},
  [736] = {.lex_state = 0, .external_lex_state = 9},
  [737] = {.lex_state = 0, .external_lex_state = 9},
  [738] = {.lex_state = 19},
  [739] = {.lex_state = 0, .external_lex_state = 9},
  [740] = {.lex_state = 0, .external_lex_state = 9},
  [741] = {.lex_state = 0, .external_lex_state = 9},
  [742] = {.lex_state = 0, .external_lex_state = 31},
  [743] = {.lex_state = 0, .external_lex_state = 9},
  [744] = {.lex_state = 0, .external_lex_state = 31},
  [745] = {.lex_state = 0, .external_lex_state = 9},
  [746] = {.lex_state = 0, .external_lex_state = 9},
  [747] = {.lex_state = 0, .external_lex_state = 9},
  [748] = {.lex_state = 0, .external_lex_state = 9},
  [749] = {.lex_state = 0, .external_lex_state = 2},
  [750] = {.lex_state = 0, .external_lex_state = 29},
  [751] = {.lex_state = 0, .external_lex_state = 29},
  [752] = {.lex_state = 0, .external_lex_state = 9},
  [753] = {.lex_state = 0, .external_lex_state = 9},
  [754] = {.lex_state = 9, .external_lex_state = 7},
  [755] = {.lex_state = 18, .external_lex_state = 7},
  [756] = {.lex_state = 76},
  [757] = {.lex_state = 20},
  [758] = {.lex_state = 0, .external_lex_state = 29},
  [759] = {.lex_state = 0, .external_lex_state = 29},
  [760] = {.lex_state = 0, .external_lex_state = 29},
  [761] = {.lex_state = 0, .external_lex_state = 29},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 0, .external_lex_state = 9},
  [764] = {.lex_state = 0, .external_lex_state = 9},
  [765] = {.lex_state = 0, .external_lex_state = 9},
  [766] = {.lex_state = 0, .external_lex_state = 9},
  [767] = {.lex_state = 0, .external_lex_state = 7},
  [768] = {.lex_state = 0, .external_lex_state = 7},
  [769] = {.lex_state = 19},
  [770] = {.lex_state = 0, .external_lex_state = 32},
  [771] = {.lex_state = 0, .external_lex_state = 7},
  [772] = {.lex_state = 0, .external_lex_state = 7},
  [773] = {.lex_state = 1},
  [774] = {.lex_state = 19},
  [775] = {.lex_state = 1, .external_lex_state = 7},
  [776] = {.lex_state = 1, .external_lex_state = 7},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 1, .external_lex_state = 7},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 0, .external_lex_state = 7},
  [781] = {.lex_state = 0, .external_lex_state = 7},
  [782] = {.lex_state = 0, .external_lex_state = 2},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 0, .external_lex_state = 7},
  [787] = {.lex_state = 0, .external_lex_state = 31},
  [788] = {.lex_state = 1},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 0, .external_lex_state = 7},
  [794] = {.lex_state = 0, .external_lex_state = 7},
  [795] = {.lex_state = 0, .external_lex_state = 7},
  [796] = {.lex_state = 1, .external_lex_state = 28},
  [797] = {.lex_state = 0, .external_lex_state = 24},
  [798] = {.lex_state = 0, .external_lex_state = 2},
  [799] = {.lex_state = 0, .external_lex_state = 2},
  [800] = {.lex_state = 0, .external_lex_state = 7},
  [801] = {.lex_state = 0, .external_lex_state = 24},
  [802] = {.lex_state = 0, .external_lex_state = 24},
  [803] = {.lex_state = 1},
  [804] = {.lex_state = 19},
  [805] = {.lex_state = 0, .external_lex_state = 24},
  [806] = {.lex_state = 0, .external_lex_state = 24},
  [807] = {.lex_state = 0, .external_lex_state = 31},
  [808] = {.lex_state = 0, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 7},
  [810] = {.lex_state = 0, .external_lex_state = 7},
  [811] = {.lex_state = 6, .external_lex_state = 7},
  [812] = {.lex_state = 1},
  [813] = {.lex_state = 0, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 24},
  [815] = {.lex_state = 0, .external_lex_state = 24},
  [816] = {.lex_state = 0, .external_lex_state = 33},
  [817] = {.lex_state = 0, .external_lex_state = 7},
  [818] = {.lex_state = 0, .external_lex_state = 22},
  [819] = {.lex_state = 0, .external_lex_state = 22},
  [820] = {.lex_state = 0, .external_lex_state = 22},
  [821] = {.lex_state = 1, .external_lex_state = 7},
  [822] = {.lex_state = 0, .external_lex_state = 22},
  [823] = {.lex_state = 0, .external_lex_state = 22},
  [824] = {.lex_state = 0, .external_lex_state = 22},
  [825] = {.lex_state = 0, .external_lex_state = 22},
  [826] = {.lex_state = 1, .external_lex_state = 7},
  [827] = {.lex_state = 0, .external_lex_state = 7},
  [828] = {.lex_state = 1, .external_lex_state = 7},
  [829] = {.lex_state = 1, .external_lex_state = 7},
  [830] = {.lex_state = 0, .external_lex_state = 27},
  [831] = {.lex_state = 0, .external_lex_state = 27},
  [832] = {.lex_state = 0, .external_lex_state = 24},
  [833] = {.lex_state = 0, .external_lex_state = 24},
  [834] = {.lex_state = 0, .external_lex_state = 24},
  [835] = {.lex_state = 0, .external_lex_state = 24},
  [836] = {.lex_state = 0, .external_lex_state = 24},
  [837] = {.lex_state = 0, .external_lex_state = 24},
  [838] = {.lex_state = 0, .external_lex_state = 27},
  [839] = {.lex_state = 0, .external_lex_state = 27},
  [840] = {.lex_state = 0, .external_lex_state = 27},
  [841] = {.lex_state = 0, .external_lex_state = 27},
  [842] = {.lex_state = 0, .external_lex_state = 27},
  [843] = {.lex_state = 0, .external_lex_state = 27},
  [844] = {.lex_state = 0, .external_lex_state = 7},
  [845] = {.lex_state = 1},
  [846] = {.lex_state = 0, .external_lex_state = 22},
  [847] = {.lex_state = 0, .external_lex_state = 7},
  [848] = {.lex_state = 0, .external_lex_state = 7},
  [849] = {.lex_state = 1, .external_lex_state = 7},
  [850] = {.lex_state = 1, .external_lex_state = 7},
  [851] = {.lex_state = 1},
  [852] = {.lex_state = 0, .external_lex_state = 7},
  [853] = {.lex_state = 1},
  [854] = {.lex_state = 1},
  [855] = {.lex_state = 1, .external_lex_state = 28},
  [856] = {.lex_state = 0, .external_lex_state = 7},
  [857] = {.lex_state = 0, .external_lex_state = 26},
  [858] = {.lex_state = 0, .external_lex_state = 7},
  [859] = {.lex_state = 1},
  [860] = {.lex_state = 16, .external_lex_state = 7},
  [861] = {.lex_state = 0, .external_lex_state = 7},
  [862] = {.lex_state = 0, .external_lex_state = 7},
  [863] = {.lex_state = 0, .external_lex_state = 7},
  [864] = {.lex_state = 0, .external_lex_state = 7},
  [865] = {.lex_state = 0, .external_lex_state = 7},
  [866] = {.lex_state = 1, .external_lex_state = 28},
  [867] = {.lex_state = 0, .external_lex_state = 7},
  [868] = {.lex_state = 16, .external_lex_state = 7},
  [869] = {.lex_state = 0, .external_lex_state = 7},
  [870] = {.lex_state = 0, .external_lex_state = 7},
  [871] = {.lex_state = 16, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 7},
  [873] = {.lex_state = 1, .external_lex_state = 7},
  [874] = {.lex_state = 0, .external_lex_state = 7},
  [875] = {.lex_state = 1},
  [876] = {.lex_state = 0, .external_lex_state = 7},
  [877] = {.lex_state = 0, .external_lex_state = 7},
  [878] = {.lex_state = 20},
  [879] = {.lex_state = 0, .external_lex_state = 7},
  [880] = {.lex_state = 0, .external_lex_state = 7},
  [881] = {.lex_state = 0, .external_lex_state = 7},
  [882] = {.lex_state = 16, .external_lex_state = 7},
  [883] = {.lex_state = 16, .external_lex_state = 7},
  [884] = {.lex_state = 0, .external_lex_state = 7},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 0, .external_lex_state = 7},
  [887] = {.lex_state = 0, .external_lex_state = 7},
  [888] = {.lex_state = 0, .external_lex_state = 7},
  [889] = {.lex_state = 1},
  [890] = {.lex_state = 0, .external_lex_state = 7},
  [891] = {.lex_state = 0, .external_lex_state = 7},
  [892] = {.lex_state = 0, .external_lex_state = 7},
  [893] = {.lex_state = 0, .external_lex_state = 7},
  [894] = {.lex_state = 0, .external_lex_state = 7},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 0, .external_lex_state = 7},
  [897] = {.lex_state = 0, .external_lex_state = 7},
  [898] = {.lex_state = 0, .external_lex_state = 7},
  [899] = {.lex_state = 0, .external_lex_state = 7},
  [900] = {.lex_state = 0, .external_lex_state = 7},
  [901] = {.lex_state = 0, .external_lex_state = 7},
  [902] = {.lex_state = 0, .external_lex_state = 7},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 0, .external_lex_state = 7},
  [905] = {.lex_state = 0, .external_lex_state = 7},
  [906] = {.lex_state = 0, .external_lex_state = 7},
  [907] = {.lex_state = 0, .external_lex_state = 7},
  [908] = {.lex_state = 0, .external_lex_state = 33},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 7},
  [911] = {.lex_state = 0, .external_lex_state = 7},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 0, .external_lex_state = 7},
  [916] = {.lex_state = 0, .external_lex_state = 7},
  [917] = {.lex_state = 0, .external_lex_state = 7},
  [918] = {.lex_state = 0, .external_lex_state = 7},
  [919] = {.lex_state = 0, .external_lex_state = 33},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 0, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 7},
  [927] = {.lex_state = 0, .external_lex_state = 7},
  [928] = {.lex_state = 0, .external_lex_state = 7},
  [929] = {.lex_state = 6, .external_lex_state = 7},
  [930] = {.lex_state = 0, .external_lex_state = 7},
  [931] = {.lex_state = 46},
  [932] = {.lex_state = 0, .external_lex_state = 7},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 0, .external_lex_state = 24},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 0, .external_lex_state = 32},
  [937] = {.lex_state = 1},
  [938] = {.lex_state = 1},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 1},
  [941] = {.lex_state = 1},
  [942] = {.lex_state = 0, .external_lex_state = 7},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 0, .external_lex_state = 7},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 0, .external_lex_state = 7},
  [947] = {.lex_state = 0, .external_lex_state = 7},
  [948] = {.lex_state = 0, .external_lex_state = 33},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 0, .external_lex_state = 31},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 0, .external_lex_state = 7},
  [953] = {.lex_state = 0, .external_lex_state = 7},
  [954] = {.lex_state = 1},
  [955] = {.lex_state = 1},
  [956] = {.lex_state = 0, .external_lex_state = 31},
  [957] = {.lex_state = 0, .external_lex_state = 31},
  [958] = {.lex_state = 0, .external_lex_state = 7},
  [959] = {.lex_state = 0, .external_lex_state = 3},
  [960] = {.lex_state = 1},
  [961] = {.lex_state = 0, .external_lex_state = 32},
  [962] = {.lex_state = 0, .external_lex_state = 7},
  [963] = {.lex_state = 294},
  [964] = {.lex_state = 295},
  [965] = {.lex_state = 0, .external_lex_state = 7},
  [966] = {.lex_state = 0, .external_lex_state = 34},
  [967] = {.lex_state = 1},
  [968] = {.lex_state = 0, .external_lex_state = 7},
  [969] = {.lex_state = 1},
  [970] = {.lex_state = 0, .external_lex_state = 35},
  [971] = {.lex_state = 0, .external_lex_state = 7},
  [972] = {.lex_state = 296, .external_lex_state = 36},
  [973] = {.lex_state = 0, .external_lex_state = 3},
  [974] = {.lex_state = 0, .external_lex_state = 32},
  [975] = {.lex_state = 1},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 1},
  [978] = {.lex_state = 294},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 1},
  [981] = {.lex_state = 0, .external_lex_state = 7},
  [982] = {.lex_state = 1},
  [983] = {.lex_state = 296, .external_lex_state = 36},
  [984] = {.lex_state = 6},
  [985] = {.lex_state = 1},
  [986] = {.lex_state = 1},
  [987] = {.lex_state = 19},
  [988] = {.lex_state = 1},
  [989] = {.lex_state = 0, .external_lex_state = 7},
  [990] = {.lex_state = 19},
  [991] = {.lex_state = 1},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 0, .external_lex_state = 35},
  [994] = {.lex_state = 1},
  [995] = {.lex_state = 1},
  [996] = {.lex_state = 19},
  [997] = {.lex_state = 0, .external_lex_state = 35},
  [998] = {.lex_state = 0, .external_lex_state = 31},
  [999] = {.lex_state = 0, .external_lex_state = 6},
  [1000] = {.lex_state = 1},
  [1001] = {.lex_state = 1},
  [1002] = {.lex_state = 296, .external_lex_state = 36},
  [1003] = {.lex_state = 296, .external_lex_state = 36},
  [1004] = {.lex_state = 0, .external_lex_state = 31},
  [1005] = {.lex_state = 0, .external_lex_state = 7},
  [1006] = {.lex_state = 296, .external_lex_state = 36},
  [1007] = {.lex_state = 296, .external_lex_state = 36},
  [1008] = {.lex_state = 297},
  [1009] = {.lex_state = 297},
  [1010] = {.lex_state = 0, .external_lex_state = 7},
  [1011] = {.lex_state = 297},
  [1012] = {.lex_state = 296, .external_lex_state = 36},
  [1013] = {.lex_state = 296, .external_lex_state = 36},
  [1014] = {.lex_state = 19},
  [1015] = {.lex_state = 296, .external_lex_state = 36},
  [1016] = {.lex_state = 296, .external_lex_state = 36},
  [1017] = {.lex_state = 296, .external_lex_state = 36},
  [1018] = {.lex_state = 296, .external_lex_state = 36},
  [1019] = {.lex_state = 0, .external_lex_state = 34},
  [1020] = {.lex_state = 296, .external_lex_state = 36},
  [1021] = {.lex_state = 296, .external_lex_state = 36},
  [1022] = {.lex_state = 297},
  [1023] = {.lex_state = 296, .external_lex_state = 36},
  [1024] = {.lex_state = 296, .external_lex_state = 36},
  [1025] = {.lex_state = 296, .external_lex_state = 36},
  [1026] = {.lex_state = 296, .external_lex_state = 36},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 296, .external_lex_state = 36},
  [1029] = {.lex_state = 296, .external_lex_state = 36},
  [1030] = {.lex_state = 297},
  [1031] = {.lex_state = 46},
  [1032] = {.lex_state = 1},
  [1033] = {.lex_state = 297},
  [1034] = {.lex_state = 19},
  [1035] = {.lex_state = 1},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 0, .external_lex_state = 35},
  [1038] = {.lex_state = 1},
  [1039] = {.lex_state = 0, .external_lex_state = 34},
  [1040] = {.lex_state = 0, .external_lex_state = 34},
  [1041] = {.lex_state = 1},
  [1042] = {.lex_state = 1},
  [1043] = {.lex_state = 1},
  [1044] = {.lex_state = 1},
  [1045] = {.lex_state = 1},
  [1046] = {.lex_state = 1},
  [1047] = {.lex_state = 1},
  [1048] = {.lex_state = 1},
  [1049] = {.lex_state = 1},
  [1050] = {.lex_state = 46},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 1},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 294},
  [1055] = {.lex_state = 1},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 295},
  [1058] = {.lex_state = 1},
  [1059] = {.lex_state = 0, .external_lex_state = 7},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 0, .external_lex_state = 36},
  [1063] = {.lex_state = 32},
  [1064] = {.lex_state = 0, .external_lex_state = 7},
  [1065] = {.lex_state = 0, .external_lex_state = 37},
  [1066] = {.lex_state = 0, .external_lex_state = 37},
  [1067] = {.lex_state = 0, .external_lex_state = 37},
  [1068] = {.lex_state = 0, .external_lex_state = 37},
  [1069] = {.lex_state = 0, .external_lex_state = 37},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 1},
  [1072] = {.lex_state = 0, .external_lex_state = 37},
  [1073] = {.lex_state = 0, .external_lex_state = 36},
  [1074] = {.lex_state = 0, .external_lex_state = 36},
  [1075] = {.lex_state = 0, .external_lex_state = 36},
  [1076] = {.lex_state = 0, .external_lex_state = 7},
  [1077] = {.lex_state = 0, .external_lex_state = 37},
  [1078] = {.lex_state = 0, .external_lex_state = 7},
  [1079] = {.lex_state = 1},
  [1080] = {.lex_state = 0, .external_lex_state = 7},
  [1081] = {.lex_state = 0, .external_lex_state = 37},
  [1082] = {.lex_state = 0, .external_lex_state = 37},
  [1083] = {.lex_state = 1},
  [1084] = {.lex_state = 0, .external_lex_state = 36},
  [1085] = {.lex_state = 0, .external_lex_state = 36},
  [1086] = {.lex_state = 0, .external_lex_state = 36},
  [1087] = {.lex_state = 0, .external_lex_state = 7},
  [1088] = {.lex_state = 0, .external_lex_state = 37},
  [1089] = {.lex_state = 1},
  [1090] = {.lex_state = 298},
  [1091] = {.lex_state = 1},
  [1092] = {.lex_state = 0, .external_lex_state = 36},
  [1093] = {.lex_state = 1},
  [1094] = {.lex_state = 1},
  [1095] = {.lex_state = 0, .external_lex_state = 36},
  [1096] = {.lex_state = 0, .external_lex_state = 36},
  [1097] = {.lex_state = 0, .external_lex_state = 36},
  [1098] = {.lex_state = 0, .external_lex_state = 7},
  [1099] = {.lex_state = 1},
  [1100] = {.lex_state = 46},
  [1101] = {.lex_state = 0, .external_lex_state = 7},
  [1102] = {.lex_state = 0, .external_lex_state = 36},
  [1103] = {.lex_state = 0, .external_lex_state = 36},
  [1104] = {.lex_state = 1},
  [1105] = {.lex_state = 0, .external_lex_state = 7},
  [1106] = {.lex_state = 0, .external_lex_state = 37},
  [1107] = {.lex_state = 0, .external_lex_state = 37},
  [1108] = {.lex_state = 0, .external_lex_state = 36},
  [1109] = {.lex_state = 0, .external_lex_state = 36},
  [1110] = {.lex_state = 0, .external_lex_state = 36},
  [1111] = {.lex_state = 0, .external_lex_state = 36},
  [1112] = {.lex_state = 0, .external_lex_state = 7},
  [1113] = {.lex_state = 298},
  [1114] = {.lex_state = 0, .external_lex_state = 37},
  [1115] = {.lex_state = 0, .external_lex_state = 37},
  [1116] = {.lex_state = 0, .external_lex_state = 36},
  [1117] = {.lex_state = 0, .external_lex_state = 36},
  [1118] = {.lex_state = 0, .external_lex_state = 36},
  [1119] = {.lex_state = 0, .external_lex_state = 7},
  [1120] = {.lex_state = 0, .external_lex_state = 37},
  [1121] = {.lex_state = 0, .external_lex_state = 37},
  [1122] = {.lex_state = 0, .external_lex_state = 37},
  [1123] = {.lex_state = 0, .external_lex_state = 36},
  [1124] = {.lex_state = 0, .external_lex_state = 36},
  [1125] = {.lex_state = 0, .external_lex_state = 36},
  [1126] = {.lex_state = 0, .external_lex_state = 7},
  [1127] = {.lex_state = 1},
  [1128] = {.lex_state = 1},
  [1129] = {.lex_state = 0, .external_lex_state = 37},
  [1130] = {.lex_state = 0, .external_lex_state = 36},
  [1131] = {.lex_state = 0, .external_lex_state = 36},
  [1132] = {.lex_state = 0, .external_lex_state = 36},
  [1133] = {.lex_state = 0, .external_lex_state = 7},
  [1134] = {.lex_state = 0, .external_lex_state = 7},
  [1135] = {.lex_state = 0, .external_lex_state = 7},
  [1136] = {.lex_state = 0, .external_lex_state = 7},
  [1137] = {.lex_state = 1},
  [1138] = {.lex_state = 0, .external_lex_state = 37},
  [1139] = {.lex_state = 296},
  [1140] = {.lex_state = 0, .external_lex_state = 37},
  [1141] = {.lex_state = 0, .external_lex_state = 36},
  [1142] = {.lex_state = 0, .external_lex_state = 37},
  [1143] = {.lex_state = 0, .external_lex_state = 36},
  [1144] = {.lex_state = 0, .external_lex_state = 36},
  [1145] = {.lex_state = 1},
  [1146] = {.lex_state = 1},
  [1147] = {.lex_state = 295},
  [1148] = {.lex_state = 298},
  [1149] = {.lex_state = 0},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 1},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 46},
  [1155] = {.lex_state = 0, .external_lex_state = 7},
  [1156] = {.lex_state = 6},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 294},
  [1159] = {.lex_state = 1},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 0, .external_lex_state = 37},
  [1162] = {.lex_state = 46},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 1},
  [1169] = {.lex_state = 1},
  [1170] = {.lex_state = 0, .external_lex_state = 7},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 0, .external_lex_state = 36},
  [1173] = {.lex_state = 1},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 1},
  [1176] = {.lex_state = 0, .external_lex_state = 37},
  [1177] = {.lex_state = 1},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 1},
  [1180] = {.lex_state = 1},
  [1181] = {.lex_state = 46},
  [1182] = {.lex_state = 0, .external_lex_state = 37},
  [1183] = {.lex_state = 0, .external_lex_state = 37},
  [1184] = {.lex_state = 1},
  [1185] = {.lex_state = 0, .external_lex_state = 37},
  [1186] = {.lex_state = 1},
  [1187] = {.lex_state = 46},
  [1188] = {.lex_state = 1},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 1},
  [1191] = {.lex_state = 46},
  [1192] = {.lex_state = 0, .external_lex_state = 37},
  [1193] = {.lex_state = 1},
  [1194] = {.lex_state = 0, .external_lex_state = 36},
  [1195] = {.lex_state = 1},
  [1196] = {.lex_state = 0, .external_lex_state = 37},
  [1197] = {.lex_state = 1},
  [1198] = {.lex_state = 0, .external_lex_state = 37},
  [1199] = {.lex_state = 1},
  [1200] = {.lex_state = 1},
  [1201] = {.lex_state = 46},
  [1202] = {.lex_state = 0, .external_lex_state = 37},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 1},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 1},
  [1207] = {.lex_state = 0, .external_lex_state = 37},
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
    [sym_source_file] = STATE(1149),
    [sym_item] = STATE(123),
    [sym__trivia] = STATE(123),
    [aux_sym_source_file_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(615),
    [sym__collection_operation] = STATE(615),
    [sym_let_statement] = STATE(615),
    [sym_exec_statement] = STATE(615),
    [sym_spawn_statement] = STATE(615),
    [sym__invalid_exec_binding] = STATE(618),
    [sym__invalid_until_binding] = STATE(619),
    [sym_run_statement] = STATE(615),
    [sym__async_modifier] = STATE(1056),
    [sym__run] = STATE(620),
    [sym_await_statement] = STATE(615),
    [sym_implicit_run_statement] = STATE(615),
    [sym__implicit_run_line] = STATE(168),
    [sym_seek_statement] = STATE(615),
    [sym_ask_statement] = STATE(615),
    [sym_generate_statement] = STATE(615),
    [sym_reduce_statement] = STATE(615),
    [sym_map_statement] = STATE(615),
    [sym_keep_statement] = STATE(615),
    [sym_drop_statement] = STATE(615),
    [sym_sort_statement] = STATE(615),
    [sym_repeat_statement] = STATE(615),
    [sym_invalid_flow_reserved_statement] = STATE(615),
    [sym__query_directive_key] = STATE(868),
    [sym__route_directive_key] = STATE(868),
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
    [sym__flow_operation] = STATE(615),
    [sym__collection_operation] = STATE(615),
    [sym_let_statement] = STATE(615),
    [sym_exec_statement] = STATE(615),
    [sym_spawn_statement] = STATE(615),
    [sym__invalid_exec_binding] = STATE(618),
    [sym__invalid_until_binding] = STATE(619),
    [sym_run_statement] = STATE(615),
    [sym__async_modifier] = STATE(1056),
    [sym__run] = STATE(620),
    [sym_await_statement] = STATE(615),
    [sym_implicit_run_statement] = STATE(615),
    [sym__implicit_run_line] = STATE(168),
    [sym_seek_statement] = STATE(615),
    [sym_ask_statement] = STATE(615),
    [sym_generate_statement] = STATE(615),
    [sym_reduce_statement] = STATE(615),
    [sym_map_statement] = STATE(615),
    [sym_keep_statement] = STATE(615),
    [sym_drop_statement] = STATE(615),
    [sym_sort_statement] = STATE(615),
    [sym_repeat_statement] = STATE(615),
    [sym_invalid_flow_reserved_statement] = STATE(615),
    [sym__query_directive_key] = STATE(868),
    [sym__route_directive_key] = STATE(868),
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
    [sym__flow_operation] = STATE(437),
    [sym__collection_operation] = STATE(437),
    [sym_let_statement] = STATE(437),
    [sym_exec_statement] = STATE(437),
    [sym_spawn_statement] = STATE(437),
    [sym__invalid_exec_binding] = STATE(440),
    [sym__invalid_until_binding] = STATE(441),
    [sym_run_statement] = STATE(437),
    [sym__async_modifier] = STATE(1058),
    [sym__run] = STATE(444),
    [sym_await_statement] = STATE(437),
    [sym_implicit_run_statement] = STATE(437),
    [sym__implicit_run_line] = STATE(94),
    [sym_seek_statement] = STATE(437),
    [sym_ask_statement] = STATE(437),
    [sym_generate_statement] = STATE(437),
    [sym_reduce_statement] = STATE(437),
    [sym_map_statement] = STATE(437),
    [sym_keep_statement] = STATE(437),
    [sym_drop_statement] = STATE(437),
    [sym_sort_statement] = STATE(437),
    [sym_repeat_statement] = STATE(437),
    [sym_invalid_flow_reserved_statement] = STATE(437),
    [sym__query_directive_key] = STATE(868),
    [sym__route_directive_key] = STATE(868),
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
    STATE(620), 1,
      sym__run,
    STATE(1038), 1,
      sym_local_name,
    STATE(1056), 1,
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
    STATE(444), 1,
      sym__run,
    STATE(1035), 1,
      sym_local_name,
    STATE(1058), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(455), 14,
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
    STATE(492), 1,
      sym_text_inline,
    STATE(494), 1,
      sym__run,
    STATE(580), 1,
      sym_text_block,
    STATE(698), 1,
      sym_line_end,
    STATE(493), 7,
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
    STATE(261), 1,
      sym_text_inline,
    STATE(263), 1,
      sym__run,
    STATE(354), 1,
      sym_text_block,
    STATE(744), 1,
      sym_line_end,
    STATE(262), 7,
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
    STATE(114), 1,
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
    STATE(868), 2,
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
    STATE(114), 1,
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
    STATE(868), 2,
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
    STATE(647), 12,
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
    STATE(985), 1,
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
    STATE(762), 1,
      sym__query_directive_key,
    STATE(1055), 1,
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
    STATE(138), 1,
      sym_base_type,
    STATE(310), 1,
      sym_type,
    STATE(341), 1,
      sym_type_name,
    STATE(508), 1,
      sym_line_end,
    STATE(340), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [558] = 9,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(243), 1,
      sym_newline,
    STATE(138), 1,
      sym_base_type,
    STATE(341), 1,
      sym_type_name,
    STATE(394), 1,
      sym_type,
    STATE(533), 1,
      sym_line_end,
    STATE(340), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [591] = 9,
    ACTIONS(241), 1,
      sym_pascal_name,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(138), 1,
      sym_base_type,
    STATE(275), 1,
      sym_line_end,
    STATE(341), 1,
      sym_type_name,
    STATE(432), 1,
      sym_type,
    STATE(340), 2,
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
    STATE(138), 1,
      sym_base_type,
    STATE(289), 1,
      sym_line_end,
    STATE(341), 1,
      sym_type_name,
    STATE(438), 1,
      sym_type,
    STATE(340), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(239), 5,
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
    STATE(519), 1,
      sym__collection_binding_word,
    ACTIONS(249), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(518), 5,
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
    STATE(732), 1,
      sym__collection_binding_word,
    ACTIONS(251), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(281), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [709] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym_flow_if_keyword,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    STATE(464), 1,
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
    ACTIONS(257), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [742] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym_flow_if_keyword,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    STATE(464), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(675), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(817), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(257), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [775] = 12,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(261), 1,
      aux_sym__doc_space_token1,
    ACTIONS(263), 1,
      sym_arrow,
    ACTIONS(265), 1,
      sym_colon,
    ACTIONS(267), 1,
      sym_snake_name,
    ACTIONS(269), 1,
      sym_text_line,
    STATE(66), 1,
      sym__required_space,
    STATE(636), 1,
      sym_runnable,
    STATE(763), 1,
      sym_line_end,
    STATE(764), 1,
      sym__invalid_modified_run_tail,
    STATE(765), 1,
      sym_inline_agic,
  [812] = 12,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(267), 1,
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
    STATE(57), 1,
      sym__required_space,
    STATE(252), 1,
      sym_line_end,
    STATE(253), 1,
      sym__invalid_modified_run_tail,
    STATE(254), 1,
      sym_inline_agic,
    STATE(721), 1,
      sym_runnable,
  [849] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(413), 1,
      sym__named_if_complement,
    STATE(459), 1,
      sym__inline_if_complement,
    STATE(461), 1,
      sym__if_complements,
    STATE(875), 1,
      sym__lanes_complement,
    STATE(877), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(257), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [882] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(413), 1,
      sym__named_if_complement,
    STATE(459), 1,
      sym__inline_if_complement,
    STATE(460), 1,
      sym__if_complements,
    STATE(875), 1,
      sym__lanes_complement,
    STATE(876), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(257), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [915] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(960), 1,
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
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1104), 1,
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
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1089), 1,
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
  [987] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1180), 1,
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
  [1011] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1071), 1,
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
  [1035] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1145), 1,
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
  [1059] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(430), 1,
      sym_base_type,
    STATE(785), 1,
      sym_type,
    STATE(829), 1,
      sym_type_name,
    STATE(828), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1083] = 6,
    ACTIONS(289), 1,
      sym_pascal_name,
    STATE(430), 1,
      sym_base_type,
    STATE(772), 1,
      sym_type,
    STATE(829), 1,
      sym_type_name,
    STATE(828), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(287), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1107] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(992), 1,
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
  [1131] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1169), 1,
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
  [1155] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1146), 1,
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
  [1179] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1204), 1,
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
  [1203] = 10,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(299), 1,
      sym_newline,
    STATE(411), 1,
      sym__lanes_complement,
    STATE(457), 1,
      sym__runnable_complements,
    STATE(458), 1,
      sym_inline_agic,
    STATE(872), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1235] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1193), 1,
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
  [1259] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1079), 1,
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
  [1283] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1159), 1,
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
  [1307] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(194), 1,
      sym_base_type,
    STATE(624), 1,
      sym_type_name,
    STATE(1160), 1,
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
  [1331] = 10,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(669), 1,
      sym__runnable_complements,
    STATE(671), 1,
      sym_inline_agic,
    STATE(809), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
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
    STATE(435), 1,
      sym_property,
    STATE(1121), 1,
      sym__cap_text_body,
    STATE(1182), 1,
      sym_cap_body,
    STATE(75), 2,
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
    STATE(435), 1,
      sym_property,
    STATE(1077), 1,
      sym_cap_body,
    STATE(1121), 1,
      sym__cap_text_body,
    STATE(48), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1421] = 9,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(319), 1,
      sym_blank_line,
    ACTIONS(321), 1,
      sym__dedent,
    STATE(435), 1,
      sym_property,
    STATE(1121), 1,
      sym__cap_text_body,
    STATE(1129), 1,
      sym_cap_body,
    STATE(45), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1450] = 9,
    ACTIONS(305), 1,
      sym_blank_line,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(323), 1,
      sym__dedent,
    STATE(435), 1,
      sym_property,
    STATE(1114), 1,
      sym_cap_body,
    STATE(1121), 1,
      sym__cap_text_body,
    STATE(75), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1479] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(325), 1,
      sym_blank_line,
    ACTIONS(327), 1,
      sym__dedent,
    STATE(1081), 1,
      sym__cap_text_body,
    STATE(51), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1503] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(329), 1,
      sym_arrow,
    ACTIONS(331), 1,
      sym_colon,
    STATE(148), 1,
      sym__reduce_inline_block,
    STATE(456), 1,
      sym__reduce_inline_line,
    STATE(709), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1529] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(333), 1,
      sym_blank_line,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(1067), 1,
      sym__cap_text_body,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1553] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(337), 1,
      sym__one_integer_literal,
    ACTIONS(339), 1,
      sym__other_integer_literal,
    ACTIONS(341), 1,
      sym_flow_windowing_keyword,
    ACTIONS(343), 1,
      sym_colon,
    STATE(845), 1,
      sym__repeat_count_complement,
    STATE(1189), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1579] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(327), 1,
      sym__dedent,
    ACTIONS(333), 1,
      sym_blank_line,
    STATE(1081), 1,
      sym__cap_text_body,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1603] = 8,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    STATE(413), 1,
      sym__named_if_complement,
    STATE(459), 1,
      sym__inline_if_complement,
    STATE(460), 1,
      sym__if_complements,
    STATE(875), 1,
      sym__lanes_complement,
    STATE(876), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1629] = 8,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    STATE(413), 1,
      sym__named_if_complement,
    STATE(459), 1,
      sym__inline_if_complement,
    STATE(461), 1,
      sym__if_complements,
    STATE(875), 1,
      sym__lanes_complement,
    STATE(877), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1655] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(31), 1,
      sym_flow_await_keyword,
    ACTIONS(351), 1,
      sym_flow_run_keyword,
    STATE(521), 1,
      sym__async_await_binding_word,
    STATE(620), 1,
      sym__run,
    STATE(1056), 1,
      sym__async_modifier,
    STATE(518), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1679] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_colon,
    ACTIONS(357), 1,
      sym_text_line,
    STATE(275), 1,
      sym_line_end,
    STATE(277), 1,
      sym_inline_agic,
    STATE(730), 1,
      sym_runnable,
  [1707] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(359), 1,
      sym_flow_run_keyword,
    STATE(444), 1,
      sym__run,
    STATE(734), 1,
      sym__async_await_binding_word,
    STATE(1058), 1,
      sym__async_modifier,
    STATE(281), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1731] = 7,
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
    STATE(1183), 1,
      sym__cap_text_body,
    STATE(53), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1755] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    ACTIONS(367), 1,
      sym_text_line,
    STATE(295), 1,
      sym_line_end,
    STATE(452), 1,
      sym_inline_agic,
    STATE(865), 1,
      sym_runnable,
  [1783] = 8,
    ACTIONS(293), 1,
      sym_flow_using_keyword,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    STATE(101), 1,
      sym__reduce_inline_block,
    STATE(666), 1,
      sym__reduce_inline_line,
    STATE(668), 1,
      sym__named_using_complement,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [1809] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    ACTIONS(373), 1,
      sym_text_line,
    STATE(539), 1,
      sym_line_end,
    STATE(653), 1,
      sym_inline_agic,
    STATE(795), 1,
      sym_runnable,
  [1837] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(337), 1,
      sym__one_integer_literal,
    ACTIONS(339), 1,
      sym__other_integer_literal,
    ACTIONS(341), 1,
      sym_flow_windowing_keyword,
    ACTIONS(375), 1,
      sym_colon,
    STATE(954), 1,
      sym__repeat_count_complement,
    STATE(1197), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1863] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(377), 1,
      sym_flow_if_keyword,
    STATE(464), 1,
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
  [1889] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(377), 1,
      sym_flow_if_keyword,
    STATE(464), 1,
      sym__named_if_complement,
    STATE(673), 1,
      sym__inline_if_complement,
    STATE(675), 1,
      sym__if_complements,
    STATE(812), 1,
      sym__lanes_complement,
    STATE(817), 1,
      sym_position,
    ACTIONS(349), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1915] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(267), 1,
      sym_snake_name,
    ACTIONS(379), 1,
      sym_arrow,
    ACTIONS(381), 1,
      sym_colon,
    ACTIONS(383), 1,
      sym_text_line,
    STATE(508), 1,
      sym_line_end,
    STATE(509), 1,
      sym_inline_agic,
    STATE(510), 1,
      sym_runnable,
  [1943] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(389), 1,
      sym__dedent,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1069), 1,
      sym__repeat_statements,
    STATE(171), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1966] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(357), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(395), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1985] = 5,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(402), 1,
      sym__comment_start,
    ACTIONS(407), 1,
      sym__directive_start,
    ACTIONS(405), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2004] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(448), 1,
      sym_inline_agic,
    STATE(861), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2027] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(449), 1,
      sym_inline_agic,
    STATE(864), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2050] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(295), 1,
      sym_arrow,
    ACTIONS(297), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(452), 1,
      sym_inline_agic,
    STATE(865), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2073] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(669), 1,
      sym__runnable_complements,
    STATE(671), 1,
      sym_inline_agic,
    STATE(809), 1,
      sym__named_using_complement,
  [2098] = 5,
    ACTIONS(416), 1,
      sym_blank_line,
    ACTIONS(419), 1,
      sym__comment_start,
    ACTIONS(424), 1,
      sym__line_start,
    ACTIONS(422), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(74), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2117] = 6,
    ACTIONS(427), 1,
      sym_blank_line,
    ACTIONS(430), 1,
      sym__comment_start,
    ACTIONS(435), 1,
      sym__line_start,
    STATE(435), 1,
      sym_property,
    ACTIONS(433), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(75), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2138] = 5,
    ACTIONS(438), 1,
      sym_blank_line,
    ACTIONS(440), 1,
      sym__comment_start,
    ACTIONS(444), 1,
      sym__directive_start,
    ACTIONS(442), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2157] = 5,
    ACTIONS(440), 1,
      sym__comment_start,
    ACTIONS(444), 1,
      sym__directive_start,
    ACTIONS(446), 1,
      sym_blank_line,
    ACTIONS(448), 2,
      sym__dedent,
      sym__line_start,
    STATE(76), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2176] = 6,
    ACTIONS(450), 1,
      sym_blank_line,
    ACTIONS(452), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__line_start,
    STATE(402), 1,
      sym__flow_statement,
    ACTIONS(454), 2,
      sym__dedent,
      sym__until_start,
    STATE(81), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2197] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(411), 1,
      sym__lanes_complement,
    STATE(457), 1,
      sym__runnable_complements,
    STATE(458), 1,
      sym_inline_agic,
    STATE(872), 1,
      sym__named_using_complement,
  [2222] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(446), 1,
      sym__lanes_complement,
    STATE(671), 1,
      sym_inline_agic,
    STATE(729), 1,
      sym__runnable_complements,
    STATE(809), 1,
      sym__named_using_complement,
  [2247] = 6,
    ACTIONS(452), 1,
      sym__comment_start,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(462), 1,
      sym_blank_line,
    STATE(402), 1,
      sym__flow_statement,
    ACTIONS(464), 2,
      sym__dedent,
      sym__until_start,
    STATE(86), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2268] = 8,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(239), 1,
      sym__runnable_complements,
    STATE(411), 1,
      sym__lanes_complement,
    STATE(458), 1,
      sym_inline_agic,
    STATE(872), 1,
      sym__named_using_complement,
  [2293] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(468), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1207), 1,
      sym__repeat_statements,
    STATE(88), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2316] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(651), 1,
      sym_inline_agic,
    STATE(790), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2339] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(652), 1,
      sym_inline_agic,
    STATE(794), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2362] = 6,
    ACTIONS(470), 1,
      sym_blank_line,
    ACTIONS(473), 1,
      sym__comment_start,
    ACTIONS(478), 1,
      sym__line_start,
    STATE(402), 1,
      sym__flow_statement,
    ACTIONS(476), 2,
      sym__dedent,
      sym__until_start,
    STATE(86), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2383] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(365), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(795), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2406] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(481), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1161), 1,
      sym__repeat_statements,
    STATE(171), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2429] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(483), 1,
      sym_blank_line,
    ACTIONS(485), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1082), 1,
      sym__repeat_statements,
    STATE(90), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2452] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1120), 1,
      sym__repeat_statements,
    STATE(171), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2475] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(489), 1,
      sym_blank_line,
    ACTIONS(491), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1196), 1,
      sym__repeat_statements,
    STATE(92), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2498] = 7,
    ACTIONS(385), 1,
      sym_blank_line,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(493), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1065), 1,
      sym__repeat_statements,
    STATE(171), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2521] = 7,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(495), 1,
      sym_blank_line,
    ACTIONS(497), 1,
      sym__dedent,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1066), 1,
      sym__repeat_statements,
    STATE(67), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2544] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(499), 1,
      sym_blank_line,
    STATE(95), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(217), 1,
      sym__implicit_run_line,
    ACTIONS(501), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2563] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(503), 1,
      sym_blank_line,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(217), 1,
      sym__implicit_run_line,
    ACTIONS(505), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2582] = 5,
    ACTIONS(507), 1,
      sym_blank_line,
    ACTIONS(512), 1,
      sym__flow_raw_text,
    STATE(96), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(217), 1,
      sym__implicit_run_line,
    ACTIONS(510), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2601] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(357), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(515), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2620] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(357), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2639] = 5,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(357), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2658] = 5,
    ACTIONS(523), 1,
      sym__module_doc_start,
    ACTIONS(525), 1,
      sym__item_doc_start,
    ACTIONS(527), 1,
      sym__param_item_doc_start,
    ACTIONS(521), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(375), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2676] = 6,
    ACTIONS(529), 1,
      sym_blank_line,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(533), 1,
      sym__dedent,
    ACTIONS(535), 1,
      sym__from_start,
    STATE(407), 1,
      sym__from_complement,
    STATE(408), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2696] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(537), 1,
      sym_blank_line,
    STATE(110), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(339), 1,
      sym__implicit_run_line,
    ACTIONS(505), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2714] = 5,
    ACTIONS(539), 1,
      sym_blank_line,
    ACTIONS(542), 1,
      sym__comment_start,
    ACTIONS(545), 1,
      sym__dedent,
    ACTIONS(547), 1,
      sym__line_start,
    STATE(103), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2732] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(550), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(607), 1,
      sym_context_body,
    STATE(608), 1,
      sym_text_inline,
    STATE(609), 1,
      sym_text_block,
  [2754] = 5,
    ACTIONS(552), 1,
      sym_blank_line,
    ACTIONS(555), 1,
      sym__comment_start,
    ACTIONS(558), 1,
      sym__dedent,
    ACTIONS(560), 1,
      sym__line_start,
    STATE(105), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2772] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(563), 1,
      sym_blank_line,
    ACTIONS(565), 1,
      sym__dedent,
    ACTIONS(567), 1,
      sym__line_start,
    STATE(105), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2790] = 5,
    ACTIONS(569), 1,
      sym_blank_line,
    ACTIONS(574), 1,
      sym__agic_raw_text,
    STATE(107), 1,
      aux_sym_unroled_message_repeat1,
    STATE(404), 1,
      sym__unroled_message_line,
    ACTIONS(572), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2808] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(577), 1,
      sym_blank_line,
    ACTIONS(579), 1,
      sym__dedent,
    STATE(144), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2826] = 6,
    ACTIONS(581), 1,
      sym__line_start,
    ACTIONS(583), 1,
      sym__directive_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(126), 1,
      sym_directive,
    STATE(770), 1,
      sym__directives,
    STATE(1115), 2,
      sym_statements,
      sym__pass_statement,
  [2846] = 5,
    ACTIONS(585), 1,
      sym_blank_line,
    ACTIONS(588), 1,
      sym__flow_raw_text,
    STATE(110), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(339), 1,
      sym__implicit_run_line,
    ACTIONS(510), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2864] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(567), 1,
      sym__line_start,
    ACTIONS(591), 1,
      sym_blank_line,
    ACTIONS(593), 1,
      sym__dedent,
    STATE(145), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2882] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(550), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(612), 1,
      sym_instruct_body,
    STATE(613), 1,
      sym_text_inline,
  [2904] = 5,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__text_indent,
    STATE(583), 1,
      sym_text_body,
    STATE(950), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(515), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2922] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(599), 1,
      sym_blank_line,
    STATE(147), 1,
      aux_sym_unroled_message_repeat1,
    STATE(404), 1,
      sym__unroled_message_line,
    ACTIONS(601), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2940] = 5,
    ACTIONS(605), 1,
      sym_blank_line,
    ACTIONS(607), 1,
      sym__comment_start,
    ACTIONS(609), 1,
      sym__indent,
    ACTIONS(603), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(143), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2958] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(611), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1176), 1,
      sym__repeat_statements,
    STATE(119), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2978] = 5,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__text_indent,
    STATE(583), 1,
      sym_text_body,
    STATE(950), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(517), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2996] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(613), 1,
      sym_blank_line,
    ACTIONS(615), 1,
      sym__dedent,
    ACTIONS(617), 1,
      sym__line_start,
    STATE(150), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3014] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(619), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1072), 1,
      sym__repeat_statements,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3034] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(621), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1107), 1,
      sym__repeat_statements,
    STATE(124), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3054] = 5,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__text_indent,
    STATE(583), 1,
      sym_text_body,
    STATE(950), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3072] = 6,
    ACTIONS(444), 1,
      sym__directive_start,
    ACTIONS(623), 1,
      sym__line_start,
    STATE(77), 1,
      sym_directive,
    STATE(151), 1,
      sym_message,
    STATE(507), 1,
      sym__directives,
    STATE(1088), 2,
      sym_messages,
      sym__pass_statement,
  [3092] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(625), 1,
      ts_builtin_sym_end,
    ACTIONS(627), 1,
      sym_blank_line,
    STATE(153), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3110] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(619), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1192), 1,
      sym__repeat_statements,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3130] = 5,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__text_indent,
    STATE(583), 1,
      sym_text_body,
    STATE(950), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(395), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3148] = 5,
    ACTIONS(448), 1,
      sym__line_start,
    ACTIONS(583), 1,
      sym__directive_start,
    ACTIONS(629), 1,
      sym_blank_line,
    ACTIONS(631), 1,
      sym__comment_start,
    STATE(128), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3166] = 4,
    ACTIONS(635), 1,
      sym_blank_line,
    ACTIONS(638), 1,
      sym__comment_start,
    STATE(127), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(633), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [3182] = 5,
    ACTIONS(442), 1,
      sym__line_start,
    ACTIONS(583), 1,
      sym__directive_start,
    ACTIONS(631), 1,
      sym__comment_start,
    ACTIONS(641), 1,
      sym_blank_line,
    STATE(129), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3200] = 5,
    ACTIONS(405), 1,
      sym__line_start,
    ACTIONS(643), 1,
      sym_blank_line,
    ACTIONS(646), 1,
      sym__comment_start,
    ACTIONS(649), 1,
      sym__directive_start,
    STATE(129), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3218] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(219), 1,
      sym__implicit_run_line,
    ACTIONS(505), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3232] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(219), 1,
      sym__implicit_run_line,
    ACTIONS(652), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3246] = 5,
    ACTIONS(607), 1,
      sym__comment_start,
    ACTIONS(656), 1,
      sym_blank_line,
    ACTIONS(658), 1,
      sym__indent,
    ACTIONS(654), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(167), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3264] = 6,
    ACTIONS(581), 1,
      sym__line_start,
    ACTIONS(583), 1,
      sym__directive_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(126), 1,
      sym_directive,
    STATE(936), 1,
      sym__directives,
    STATE(1106), 2,
      sym_statements,
      sym__pass_statement,
  [3284] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(454), 1,
      sym__dedent,
    ACTIONS(660), 1,
      sym_blank_line,
    STATE(766), 1,
      sym__flow_statement,
    STATE(135), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3304] = 6,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(464), 1,
      sym__dedent,
    ACTIONS(662), 1,
      sym_blank_line,
    STATE(766), 1,
      sym__flow_statement,
    STATE(136), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3324] = 6,
    ACTIONS(476), 1,
      sym__dedent,
    ACTIONS(664), 1,
      sym_blank_line,
    ACTIONS(667), 1,
      sym__comment_start,
    ACTIONS(670), 1,
      sym__line_start,
    STATE(766), 1,
      sym__flow_statement,
    STATE(136), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3344] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(550), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(608), 1,
      sym_text_inline,
    STATE(609), 1,
      sym_text_block,
    STATE(664), 1,
      sym_context_body,
  [3366] = 5,
    ACTIONS(675), 1,
      sym_array_suffix,
    ACTIONS(677), 1,
      sym_newline,
    STATE(139), 1,
      aux_sym_type_repeat1,
    STATE(343), 1,
      sym_type_suffix,
    ACTIONS(673), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3384] = 5,
    ACTIONS(675), 1,
      sym_array_suffix,
    ACTIONS(681), 1,
      sym_newline,
    STATE(140), 1,
      aux_sym_type_repeat1,
    STATE(343), 1,
      sym_type_suffix,
    ACTIONS(679), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3402] = 5,
    ACTIONS(685), 1,
      sym_array_suffix,
    ACTIONS(688), 1,
      sym_newline,
    STATE(140), 1,
      aux_sym_type_repeat1,
    STATE(343), 1,
      sym_type_suffix,
    ACTIONS(683), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3420] = 5,
    ACTIONS(692), 1,
      sym__module_doc_start,
    ACTIONS(694), 1,
      sym__item_doc_start,
    ACTIONS(696), 1,
      sym__param_item_doc_start,
    ACTIONS(690), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(818), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3438] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(550), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(613), 1,
      sym_text_inline,
    STATE(665), 1,
      sym_instruct_body,
  [3460] = 5,
    ACTIONS(607), 1,
      sym__comment_start,
    ACTIONS(700), 1,
      sym_blank_line,
    ACTIONS(702), 1,
      sym__indent,
    ACTIONS(698), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(127), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3478] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(704), 1,
      sym_blank_line,
    ACTIONS(706), 1,
      sym__dedent,
    STATE(103), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3496] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(563), 1,
      sym_blank_line,
    ACTIONS(567), 1,
      sym__line_start,
    ACTIONS(708), 1,
      sym__dedent,
    STATE(105), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3514] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(567), 1,
      sym__line_start,
    ACTIONS(708), 1,
      sym__dedent,
    ACTIONS(710), 1,
      sym_blank_line,
    STATE(106), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3532] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(712), 1,
      sym_blank_line,
    STATE(107), 1,
      aux_sym_unroled_message_repeat1,
    STATE(404), 1,
      sym__unroled_message_line,
    ACTIONS(714), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3550] = 6,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym__from_start,
    ACTIONS(716), 1,
      sym_blank_line,
    ACTIONS(718), 1,
      sym__dedent,
    STATE(417), 1,
      sym__from_complement,
    STATE(418), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3570] = 4,
    STATE(710), 1,
      sym_recall_source,
    STATE(870), 1,
      sym_recall_value,
    ACTIONS(720), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(722), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3586] = 5,
    ACTIONS(724), 1,
      sym_blank_line,
    ACTIONS(727), 1,
      sym__comment_start,
    ACTIONS(730), 1,
      sym__dedent,
    ACTIONS(732), 1,
      sym__line_start,
    STATE(150), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3604] = 5,
    ACTIONS(387), 1,
      sym__comment_start,
    ACTIONS(617), 1,
      sym__line_start,
    ACTIONS(735), 1,
      sym_blank_line,
    ACTIONS(737), 1,
      sym__dedent,
    STATE(118), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3622] = 6,
    ACTIONS(444), 1,
      sym__directive_start,
    ACTIONS(623), 1,
      sym__line_start,
    STATE(77), 1,
      sym_directive,
    STATE(151), 1,
      sym_message,
    STATE(599), 1,
      sym__directives,
    STATE(1122), 2,
      sym_messages,
      sym__pass_statement,
  [3642] = 5,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
    ACTIONS(741), 1,
      sym_blank_line,
    ACTIONS(744), 1,
      sym__comment_start,
    ACTIONS(747), 1,
      sym__line_start,
    STATE(153), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3660] = 5,
    ACTIONS(752), 1,
      sym__module_doc_start,
    ACTIONS(754), 1,
      sym__item_doc_start,
    ACTIONS(756), 1,
      sym__param_item_doc_start,
    ACTIONS(750), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(331), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3678] = 5,
    ACTIONS(760), 1,
      sym__module_doc_start,
    ACTIONS(762), 1,
      sym__item_doc_start,
    ACTIONS(764), 1,
      sym__param_item_doc_start,
    ACTIONS(758), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(347), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3696] = 5,
    ACTIONS(768), 1,
      sym__module_doc_start,
    ACTIONS(770), 1,
      sym__item_doc_start,
    ACTIONS(772), 1,
      sym__param_item_doc_start,
    ACTIONS(766), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(362), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3714] = 5,
    ACTIONS(776), 1,
      sym__module_doc_start,
    ACTIONS(778), 1,
      sym__item_doc_start,
    ACTIONS(780), 1,
      sym__param_item_doc_start,
    ACTIONS(774), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(676), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3732] = 5,
    ACTIONS(784), 1,
      sym__module_doc_start,
    ACTIONS(786), 1,
      sym__item_doc_start,
    ACTIONS(788), 1,
      sym__param_item_doc_start,
    ACTIONS(782), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(684), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3750] = 5,
    ACTIONS(792), 1,
      sym__module_doc_start,
    ACTIONS(794), 1,
      sym__item_doc_start,
    ACTIONS(796), 1,
      sym__param_item_doc_start,
    ACTIONS(790), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(832), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3768] = 5,
    ACTIONS(800), 1,
      sym__module_doc_start,
    ACTIONS(802), 1,
      sym__item_doc_start,
    ACTIONS(804), 1,
      sym__param_item_doc_start,
    ACTIONS(798), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(838), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3786] = 5,
    ACTIONS(808), 1,
      sym__module_doc_start,
    ACTIONS(810), 1,
      sym__item_doc_start,
    ACTIONS(812), 1,
      sym__param_item_doc_start,
    ACTIONS(806), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(641), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3804] = 4,
    STATE(710), 1,
      sym_recall_source,
    STATE(881), 1,
      sym_recall_value,
    ACTIONS(720), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(722), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3820] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(814), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1185), 1,
      sym__repeat_statements,
    STATE(164), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3840] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(619), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1202), 1,
      sym__repeat_statements,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3860] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(816), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1142), 1,
      sym__repeat_statements,
    STATE(166), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3880] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    ACTIONS(619), 1,
      sym_blank_line,
    STATE(134), 1,
      sym__flow_statement,
    STATE(1068), 1,
      sym__repeat_statements,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3900] = 5,
    ACTIONS(607), 1,
      sym__comment_start,
    ACTIONS(700), 1,
      sym_blank_line,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(818), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(127), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3918] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(822), 1,
      sym_blank_line,
    STATE(102), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(339), 1,
      sym__implicit_run_line,
    ACTIONS(501), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3936] = 6,
    ACTIONS(824), 1,
      sym_arrow,
    ACTIONS(826), 1,
      sym_colon,
    ACTIONS(828), 1,
      sym_lparen,
    ACTIONS(830), 1,
      sym_snake_name,
    STATE(522), 1,
      sym_agic_name,
    STATE(986), 1,
      sym_params,
  [3955] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(176), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(832), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [3970] = 4,
    ACTIONS(834), 1,
      sym_blank_line,
    ACTIONS(837), 1,
      sym__comment_start,
    ACTIONS(633), 2,
      sym__dedent,
      sym__line_start,
    STATE(171), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3985] = 1,
    ACTIONS(840), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [3994] = 1,
    ACTIONS(842), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4003] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(550), 1,
      sym_text_line,
    STATE(606), 1,
      sym_line_end,
    STATE(609), 1,
      sym_text_block,
    STATE(798), 1,
      sym_text_inline,
  [4022] = 5,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(848), 1,
      sym__indent,
    STATE(530), 1,
      sym_repeat_body,
    STATE(291), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4039] = 6,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(850), 1,
      sym_flow_by_keyword,
    STATE(416), 1,
      sym__named_by_complement,
    STATE(752), 1,
      sym__inline_by_complement,
    STATE(753), 1,
      sym__by_complements,
    STATE(940), 1,
      sym__lanes_complement,
  [4058] = 5,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(848), 1,
      sym__indent,
    STATE(531), 1,
      sym_repeat_body,
    STATE(291), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4075] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(529), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4092] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(699), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4109] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(700), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4126] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(395), 1,
      sym__unroled_message_line,
    ACTIONS(860), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4139] = 6,
    ACTIONS(862), 1,
      sym__inline_comment,
    ACTIONS(864), 1,
      sym_text_line,
    ACTIONS(866), 1,
      sym_newline,
    STATE(113), 1,
      sym_line_end,
    STATE(580), 1,
      sym_text_block,
    STATE(717), 1,
      sym_text_inline,
  [4158] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(588), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4175] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(354), 1,
      sym_text_block,
    STATE(470), 1,
      sym_text_inline,
    STATE(744), 1,
      sym_line_end,
  [4194] = 6,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(868), 1,
      sym_arrow,
    ACTIONS(870), 1,
      sym_colon,
    STATE(148), 1,
      sym__reduce_inline_block,
    STATE(456), 1,
      sym__reduce_inline_line,
    STATE(709), 1,
      sym__named_using_complement,
  [4213] = 4,
    ACTIONS(872), 1,
      sym_array_suffix,
    STATE(186), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(688), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4228] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(395), 1,
      sym__unroled_message_line,
    ACTIONS(714), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4241] = 5,
    ACTIONS(877), 1,
      anon_sym__,
    ACTIONS(879), 1,
      sym_newline,
    ACTIONS(881), 1,
      sym__variable_name,
    STATE(792), 1,
      sym_local_name,
    ACTIONS(875), 2,
      sym__inline_comment,
      sym_text_line,
  [4258] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(238), 1,
      sym_text_inline,
    STATE(354), 1,
      sym_text_block,
    STATE(744), 1,
      sym_line_end,
  [4277] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(698), 1,
      sym_line_end,
    STATE(707), 1,
      sym_text_inline,
  [4296] = 6,
    ACTIONS(862), 1,
      sym__inline_comment,
    ACTIONS(866), 1,
      sym_newline,
    ACTIONS(883), 1,
      sym_text_line,
    STATE(117), 1,
      sym_line_end,
    STATE(580), 1,
      sym_text_block,
    STATE(717), 1,
      sym_text_inline,
  [4315] = 6,
    ACTIONS(347), 1,
      sym_flow_in_keyword,
    ACTIONS(885), 1,
      sym_flow_by_keyword,
    STATE(250), 1,
      sym__inline_by_complement,
    STATE(251), 1,
      sym__by_complements,
    STATE(420), 1,
      sym__named_by_complement,
    STATE(889), 1,
      sym__lanes_complement,
  [4334] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(626), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4351] = 4,
    ACTIONS(887), 1,
      sym_array_suffix,
    STATE(212), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(677), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4366] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(889), 1,
      sym_blank_line,
    ACTIONS(891), 1,
      sym__indent,
    STATE(274), 1,
      sym_repeat_body,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4383] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(893), 1,
      sym_text_line,
    STATE(742), 1,
      sym_line_end,
    STATE(797), 1,
      sym_text_block,
    STATE(934), 1,
      sym_text_inline,
  [4402] = 6,
    ACTIONS(895), 1,
      sym__inline_comment,
    ACTIONS(897), 1,
      sym_text_line,
    ACTIONS(899), 1,
      sym_newline,
    STATE(97), 1,
      sym_line_end,
    STATE(354), 1,
      sym_text_block,
    STATE(470), 1,
      sym_text_inline,
  [4421] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(715), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4438] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(278), 1,
      sym_text_inline,
    STATE(354), 1,
      sym_text_block,
    STATE(744), 1,
      sym_line_end,
  [4457] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(690), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4474] = 6,
    ACTIONS(828), 1,
      sym_lparen,
    ACTIONS(901), 1,
      sym_arrow,
    ACTIONS(903), 1,
      sym_colon,
    ACTIONS(905), 1,
      sym_snake_name,
    STATE(557), 1,
      sym_flow_name,
    STATE(1061), 1,
      sym_params,
  [4493] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(889), 1,
      sym_blank_line,
    ACTIONS(891), 1,
      sym__indent,
    STATE(287), 1,
      sym_repeat_body,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4510] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(889), 1,
      sym_blank_line,
    ACTIONS(891), 1,
      sym__indent,
    STATE(288), 1,
      sym_repeat_body,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4527] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(604), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4544] = 6,
    ACTIONS(862), 1,
      sym__inline_comment,
    ACTIONS(866), 1,
      sym_newline,
    ACTIONS(907), 1,
      sym_text_line,
    STATE(125), 1,
      sym_line_end,
    STATE(514), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
  [4563] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(698), 1,
      sym_line_end,
    STATE(717), 1,
      sym_text_inline,
  [4582] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(889), 1,
      sym_blank_line,
    ACTIONS(891), 1,
      sym__indent,
    STATE(300), 1,
      sym_repeat_body,
    STATE(476), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4599] = 6,
    ACTIONS(895), 1,
      sym__inline_comment,
    ACTIONS(899), 1,
      sym_newline,
    ACTIONS(909), 1,
      sym_text_line,
    STATE(99), 1,
      sym_line_end,
    STATE(278), 1,
      sym_text_inline,
    STATE(354), 1,
      sym_text_block,
  [4618] = 6,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(911), 1,
      sym_arrow,
    ACTIONS(913), 1,
      sym_colon,
    STATE(101), 1,
      sym__reduce_inline_block,
    STATE(666), 1,
      sym__reduce_inline_line,
    STATE(668), 1,
      sym__named_using_complement,
  [4637] = 6,
    ACTIONS(895), 1,
      sym__inline_comment,
    ACTIONS(899), 1,
      sym_newline,
    ACTIONS(915), 1,
      sym_text_line,
    STATE(68), 1,
      sym_line_end,
    STATE(278), 1,
      sym_text_inline,
    STATE(354), 1,
      sym_text_block,
  [4656] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(648), 1,
      sym_text_inline,
    STATE(698), 1,
      sym_line_end,
  [4675] = 4,
    ACTIONS(887), 1,
      sym_array_suffix,
    STATE(186), 1,
      aux_sym_type_repeat1,
    STATE(670), 1,
      sym_type_suffix,
    ACTIONS(681), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4690] = 1,
    ACTIONS(917), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4699] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(601), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4716] = 6,
    ACTIONS(337), 1,
      sym__one_integer_literal,
    ACTIONS(919), 1,
      sym__other_integer_literal,
    ACTIONS(921), 1,
      sym_flow_windowing_keyword,
    ACTIONS(923), 1,
      sym_colon,
    STATE(845), 1,
      sym__repeat_count_complement,
    STATE(1189), 1,
      sym__window_complement,
  [4735] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(425), 1,
      sym__implicit_run_line,
    ACTIONS(652), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4748] = 1,
    ACTIONS(925), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4757] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(532), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4774] = 1,
    ACTIONS(927), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4783] = 5,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(848), 1,
      sym__indent,
    STATE(545), 1,
      sym_repeat_body,
    STATE(291), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4800] = 6,
    ACTIONS(862), 1,
      sym__inline_comment,
    ACTIONS(866), 1,
      sym_newline,
    ACTIONS(929), 1,
      sym_text_line,
    STATE(121), 1,
      sym_line_end,
    STATE(514), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
  [4819] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(483), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4836] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(425), 1,
      sym__implicit_run_line,
    ACTIONS(505), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4849] = 5,
    ACTIONS(879), 1,
      sym_newline,
    ACTIONS(881), 1,
      sym__variable_name,
    ACTIONS(931), 1,
      anon_sym__,
    STATE(863), 1,
      sym_local_name,
    ACTIONS(875), 2,
      sym__inline_comment,
      sym_text_line,
  [4866] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(192), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(832), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4881] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(544), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4898] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(642), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4915] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(546), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4932] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(852), 1,
      sym_blank_line,
    ACTIONS(854), 1,
      sym__indent,
    STATE(644), 1,
      sym_agic_body,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4949] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(514), 1,
      sym_text_inline,
    STATE(580), 1,
      sym_text_block,
    STATE(698), 1,
      sym_line_end,
  [4968] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(580), 1,
      sym_text_block,
    STATE(698), 1,
      sym_line_end,
    STATE(728), 1,
      sym_text_inline,
  [4987] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(856), 1,
      sym_blank_line,
    ACTIONS(858), 1,
      sym__indent,
    STATE(749), 1,
      sym_flow_body,
    STATE(424), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5004] = 6,
    ACTIONS(337), 1,
      sym__one_integer_literal,
    ACTIONS(919), 1,
      sym__other_integer_literal,
    ACTIONS(921), 1,
      sym_flow_windowing_keyword,
    ACTIONS(933), 1,
      sym_colon,
    STATE(954), 1,
      sym__repeat_count_complement,
    STATE(1197), 1,
      sym__window_complement,
  [5023] = 5,
    ACTIONS(844), 1,
      sym_blank_line,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(848), 1,
      sym__indent,
    STATE(506), 1,
      sym_repeat_body,
    STATE(291), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5040] = 5,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(935), 1,
      sym_blank_line,
    ACTIONS(937), 1,
      sym__indent,
    STATE(486), 1,
      sym_struct_body,
    STATE(298), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5057] = 6,
    ACTIONS(895), 1,
      sym__inline_comment,
    ACTIONS(899), 1,
      sym_newline,
    ACTIONS(939), 1,
      sym_text_line,
    STATE(98), 1,
      sym_line_end,
    STATE(354), 1,
      sym_text_block,
    STATE(470), 1,
      sym_text_inline,
  [5076] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(943), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5090] = 1,
    ACTIONS(945), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5098] = 1,
    ACTIONS(947), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5106] = 1,
    ACTIONS(949), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5114] = 1,
    ACTIONS(951), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5122] = 1,
    ACTIONS(953), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5130] = 1,
    ACTIONS(955), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5138] = 1,
    ACTIONS(957), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5146] = 1,
    ACTIONS(959), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5154] = 1,
    ACTIONS(961), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5162] = 1,
    ACTIONS(963), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5170] = 1,
    ACTIONS(965), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5178] = 1,
    ACTIONS(967), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5186] = 1,
    ACTIONS(969), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5194] = 1,
    ACTIONS(971), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5202] = 1,
    ACTIONS(973), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5210] = 1,
    ACTIONS(975), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5218] = 1,
    ACTIONS(977), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5226] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(979), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5240] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(981), 1,
      sym_blank_line,
    ACTIONS(983), 1,
      sym__indent,
    STATE(386), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5254] = 1,
    ACTIONS(985), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
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
    ACTIONS(1013), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1015), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1017), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1019), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(515), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1021), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5414] = 1,
    ACTIONS(1023), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(1025), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 1,
    ACTIONS(1027), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5438] = 1,
    ACTIONS(1029), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5446] = 1,
    ACTIONS(1031), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1033), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1035), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1037), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1039), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 5,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(1041), 1,
      sym__until_start,
    STATE(78), 1,
      sym__flow_statement,
    STATE(116), 1,
      sym_until_clause,
    STATE(816), 1,
      sym__repeat_statements,
  [5502] = 1,
    ACTIONS(1043), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1045), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 1,
    ACTIONS(517), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5526] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5534] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1051), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5548] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5556] = 1,
    ACTIONS(1055), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5564] = 1,
    ACTIONS(1057), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5572] = 1,
    ACTIONS(1059), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5580] = 1,
    ACTIONS(1061), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5588] = 1,
    ACTIONS(1063), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5596] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1065), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
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
    ACTIONS(633), 1,
      sym__indent,
    ACTIONS(1071), 1,
      sym_blank_line,
    ACTIONS(1074), 1,
      sym__comment_start,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5640] = 1,
    ACTIONS(519), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5648] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5656] = 1,
    ACTIONS(1077), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5664] = 1,
    ACTIONS(1079), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5672] = 1,
    ACTIONS(1081), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5680] = 1,
    ACTIONS(1083), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5688] = 1,
    ACTIONS(1085), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5696] = 1,
    ACTIONS(1087), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5704] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1089), 1,
      sym_colon,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(533), 1,
      sym_line_end,
  [5720] = 1,
    ACTIONS(1093), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5728] = 1,
    ACTIONS(1095), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5736] = 1,
    ACTIONS(1097), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5744] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5752] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1101), 1,
      sym__dedent,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5766] = 1,
    ACTIONS(395), 5,
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
    ACTIONS(1113), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5814] = 1,
    ACTIONS(1115), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5822] = 1,
    ACTIONS(1117), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5830] = 1,
    ACTIONS(1047), 5,
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
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5870] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5878] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5886] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5894] = 1,
    ACTIONS(1133), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5902] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5910] = 2,
    ACTIONS(1139), 1,
      sym_newline,
    ACTIONS(1137), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5920] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5928] = 1,
    ACTIONS(1143), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5936] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5944] = 2,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1147), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5954] = 1,
    ACTIONS(925), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5962] = 2,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1151), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5972] = 2,
    ACTIONS(1157), 1,
      sym_newline,
    ACTIONS(1155), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5982] = 2,
    ACTIONS(1161), 1,
      sym_newline,
    ACTIONS(1159), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5992] = 2,
    ACTIONS(1165), 1,
      sym_newline,
    ACTIONS(1163), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6002] = 1,
    ACTIONS(917), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6010] = 1,
    ACTIONS(1167), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6018] = 4,
    ACTIONS(633), 1,
      sym__dedent,
    ACTIONS(1169), 1,
      sym_blank_line,
    ACTIONS(1172), 1,
      sym__comment_start,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6032] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6040] = 1,
    ACTIONS(1133), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6048] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6056] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6064] = 1,
    ACTIONS(1143), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6072] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6080] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6088] = 1,
    ACTIONS(1175), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6096] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6104] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6112] = 1,
    ACTIONS(1177), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6120] = 4,
    ACTIONS(633), 1,
      sym__reduce_indent,
    ACTIONS(1179), 1,
      sym_blank_line,
    ACTIONS(1182), 1,
      sym__comment_start,
    STATE(358), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6134] = 1,
    ACTIONS(1185), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6142] = 1,
    ACTIONS(1187), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6150] = 4,
    ACTIONS(1189), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__dedent,
    ACTIONS(1194), 1,
      sym_indented_raw_text,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6164] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6172] = 1,
    ACTIONS(1133), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6180] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6188] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6196] = 1,
    ACTIONS(1143), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6204] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6212] = 4,
    ACTIONS(633), 1,
      sym__line_start,
    ACTIONS(1197), 1,
      sym_blank_line,
    ACTIONS(1200), 1,
      sym__comment_start,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6226] = 1,
    ACTIONS(1203), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6234] = 4,
    ACTIONS(1205), 1,
      sym_blank_line,
    ACTIONS(1207), 1,
      sym__comment_start,
    ACTIONS(1209), 1,
      sym__reduce_indent,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6248] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6256] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6264] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6272] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6280] = 1,
    ACTIONS(1131), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6288] = 1,
    ACTIONS(1133), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6296] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6304] = 1,
    ACTIONS(1141), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6312] = 1,
    ACTIONS(1143), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6320] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6328] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6336] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6344] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6352] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6360] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6374] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1213), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6388] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(651), 1,
      sym_inline_agic,
    STATE(790), 1,
      sym_runnable,
  [6404] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1217), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6418] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1219), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6432] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(795), 1,
      sym_runnable,
  [6448] = 5,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(1041), 1,
      sym__until_start,
    STATE(78), 1,
      sym__flow_statement,
    STATE(120), 1,
      sym_until_clause,
    STATE(948), 1,
      sym__repeat_statements,
  [6464] = 1,
    ACTIONS(1221), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6472] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1223), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6486] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1225), 1,
      sym_colon,
    ACTIONS(1227), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
  [6502] = 1,
    ACTIONS(1229), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6510] = 4,
    ACTIONS(1207), 1,
      sym__comment_start,
    ACTIONS(1231), 1,
      sym_blank_line,
    ACTIONS(1233), 1,
      sym__reduce_indent,
    STATE(358), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6524] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1235), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6538] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1237), 1,
      sym_blank_line,
    ACTIONS(1239), 1,
      sym__dedent,
    STATE(414), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6552] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1241), 1,
      sym_blank_line,
    ACTIONS(1243), 1,
      sym__dedent,
    STATE(393), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6566] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(448), 1,
      sym_inline_agic,
    STATE(861), 1,
      sym_runnable,
  [6582] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(452), 1,
      sym_inline_agic,
    STATE(865), 1,
      sym_runnable,
  [6598] = 1,
    ACTIONS(1245), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6606] = 4,
    ACTIONS(1249), 1,
      sym_rparen,
    STATE(628), 1,
      sym_param_name,
    STATE(773), 1,
      sym_param,
    ACTIONS(1247), 2,
      sym__variable_name,
      anon_sym__,
  [6620] = 1,
    ACTIONS(1251), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6628] = 4,
    ACTIONS(1207), 1,
      sym__comment_start,
    ACTIONS(1253), 1,
      sym_blank_line,
    ACTIONS(1255), 1,
      sym__reduce_indent,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6642] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(369), 1,
      sym_inline_agic,
    STATE(884), 1,
      sym_runnable,
  [6658] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1257), 1,
      sym_blank_line,
    ACTIONS(1259), 1,
      sym__dedent,
    STATE(255), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6672] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1261), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6686] = 5,
    ACTIONS(1263), 1,
      sym__inline_comment,
    ACTIONS(1265), 1,
      sym_text_line,
    ACTIONS(1267), 1,
      sym_newline,
    STATE(240), 1,
      sym__reduce_line,
    STATE(405), 1,
      sym_line_end,
  [6702] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(503), 1,
      sym_inline_agic,
    STATE(811), 1,
      sym_runnable,
  [6718] = 5,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(244), 1,
      sym_inline_agic,
    STATE(886), 1,
      sym__named_using_complement,
  [6734] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(245), 1,
      sym_inline_agic,
    STATE(929), 1,
      sym_runnable,
  [6750] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1269), 1,
      sym_flow_in_keyword,
    STATE(246), 1,
      sym_line_end,
    STATE(887), 1,
      sym__lanes_complement,
  [6766] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1271), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6780] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1273), 1,
      sym_blank_line,
    ACTIONS(1275), 1,
      sym__dedent,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6794] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1269), 1,
      sym_flow_in_keyword,
    STATE(504), 1,
      sym_line_end,
    STATE(827), 1,
      sym__lanes_complement,
  [6810] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1277), 1,
      sym_blank_line,
    ACTIONS(1279), 1,
      sym__dedent,
    STATE(429), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6824] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1281), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6838] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(271), 1,
      sym_inline_agic,
    STATE(811), 1,
      sym_runnable,
  [6854] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1269), 1,
      sym_flow_in_keyword,
    STATE(272), 1,
      sym_line_end,
    STATE(898), 1,
      sym__lanes_complement,
  [6870] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1283), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6884] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(727), 1,
      sym_inline_agic,
    STATE(901), 1,
      sym_runnable,
  [6900] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1285), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6914] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1287), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6928] = 1,
    ACTIONS(927), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6936] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1289), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6950] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1291), 1,
      sym_snake_name,
    STATE(422), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [6964] = 5,
    ACTIONS(1263), 1,
      sym__inline_comment,
    ACTIONS(1265), 1,
      sym_text_line,
    ACTIONS(1267), 1,
      sym_newline,
    STATE(282), 1,
      sym__reduce_line,
    STATE(370), 1,
      sym_line_end,
  [6980] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1293), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6994] = 4,
    ACTIONS(1295), 1,
      sym_array_suffix,
    STATE(431), 1,
      aux_sym_type_repeat1,
    STATE(850), 1,
      sym_type_suffix,
    ACTIONS(677), 2,
      sym_newline,
      sym__inline_comment,
  [7008] = 4,
    ACTIONS(1295), 1,
      sym_array_suffix,
    STATE(433), 1,
      aux_sym_type_repeat1,
    STATE(850), 1,
      sym_type_suffix,
    ACTIONS(681), 2,
      sym_newline,
      sym__inline_comment,
  [7022] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1297), 1,
      sym_colon,
    ACTIONS(1299), 1,
      sym_text_line,
    STATE(289), 1,
      sym_line_end,
  [7038] = 4,
    ACTIONS(1301), 1,
      sym_array_suffix,
    STATE(433), 1,
      aux_sym_type_repeat1,
    STATE(850), 1,
      sym_type_suffix,
    ACTIONS(688), 2,
      sym_newline,
      sym__inline_comment,
  [7052] = 5,
    ACTIONS(1263), 1,
      sym__inline_comment,
    ACTIONS(1267), 1,
      sym_newline,
    ACTIONS(1304), 1,
      sym_text_line,
    STATE(405), 1,
      sym_line_end,
    STATE(736), 1,
      sym__reduce_line,
  [7068] = 1,
    ACTIONS(1306), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7076] = 1,
    ACTIONS(1308), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7084] = 1,
    ACTIONS(1310), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7092] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1312), 1,
      sym_colon,
    ACTIONS(1314), 1,
      sym_text_line,
    STATE(302), 1,
      sym_line_end,
  [7108] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1316), 1,
      sym_blank_line,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(442), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7122] = 1,
    ACTIONS(1320), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7130] = 1,
    ACTIONS(1320), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7138] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(941), 1,
      sym_blank_line,
    ACTIONS(1322), 1,
      sym__dedent,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7152] = 4,
    ACTIONS(531), 1,
      sym__comment_start,
    ACTIONS(1324), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(237), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7166] = 1,
    ACTIONS(1328), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7174] = 1,
    ACTIONS(1330), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7182] = 5,
    ACTIONS(410), 1,
      sym_flow_using_keyword,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    STATE(741), 1,
      sym_inline_agic,
    STATE(926), 1,
      sym__named_using_complement,
  [7198] = 5,
    ACTIONS(412), 1,
      sym_arrow,
    ACTIONS(414), 1,
      sym_colon,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(743), 1,
      sym_inline_agic,
    STATE(929), 1,
      sym_runnable,
  [7214] = 1,
    ACTIONS(1332), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7222] = 1,
    ACTIONS(1334), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7230] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7244] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1338), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7258] = 1,
    ACTIONS(1340), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7266] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7280] = 4,
    ACTIONS(1099), 1,
      sym_blank_line,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(361), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7294] = 1,
    ACTIONS(1346), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7302] = 1,
    ACTIONS(1348), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7310] = 1,
    ACTIONS(1350), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7318] = 1,
    ACTIONS(1352), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7326] = 1,
    ACTIONS(1354), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7334] = 1,
    ACTIONS(1356), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7342] = 1,
    ACTIONS(1358), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7350] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1291), 1,
      sym_snake_name,
    STATE(406), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7364] = 1,
    ACTIONS(1360), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7372] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1269), 1,
      sym_flow_in_keyword,
    STATE(745), 1,
      sym_line_end,
    STATE(932), 1,
      sym__lanes_complement,
  [7388] = 5,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(1041), 1,
      sym__until_start,
    STATE(78), 1,
      sym__flow_statement,
    STATE(163), 1,
      sym_until_clause,
    STATE(908), 1,
      sym__repeat_statements,
  [7404] = 5,
    ACTIONS(1263), 1,
      sym__inline_comment,
    ACTIONS(1267), 1,
      sym_newline,
    ACTIONS(1304), 1,
      sym_text_line,
    STATE(370), 1,
      sym_line_end,
    STATE(523), 1,
      sym__reduce_line,
  [7420] = 5,
    ACTIONS(456), 1,
      sym__line_start,
    ACTIONS(1041), 1,
      sym__until_start,
    STATE(78), 1,
      sym__flow_statement,
    STATE(165), 1,
      sym_until_clause,
    STATE(919), 1,
      sym__repeat_statements,
  [7436] = 4,
    ACTIONS(1207), 1,
      sym__comment_start,
    ACTIONS(1231), 1,
      sym_blank_line,
    ACTIONS(1362), 1,
      sym__reduce_indent,
    STATE(358), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7450] = 1,
    ACTIONS(1364), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7458] = 1,
    ACTIONS(1366), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7466] = 1,
    ACTIONS(1368), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7474] = 1,
    ACTIONS(1370), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7482] = 1,
    ACTIONS(1372), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7490] = 1,
    ACTIONS(1374), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7498] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1376), 1,
      sym_blank_line,
    ACTIONS(1378), 1,
      sym__indent,
    STATE(477), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7512] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7526] = 4,
    ACTIONS(846), 1,
      sym__comment_start,
    ACTIONS(1049), 1,
      sym_blank_line,
    ACTIONS(1382), 1,
      sym__indent,
    STATE(301), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7540] = 1,
    ACTIONS(1384), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7548] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [7556] = 4,
    ACTIONS(1215), 1,
      sym_snake_name,
    ACTIONS(1386), 1,
      sym_colon,
    STATE(782), 1,
      sym_inline_agic_body,
    STATE(783), 1,
      sym_runnable,
  [7569] = 1,
    ACTIONS(987), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7576] = 1,
    ACTIONS(1388), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7583] = 1,
    ACTIONS(1390), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7590] = 1,
    ACTIONS(1392), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7597] = 1,
    ACTIONS(1394), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7604] = 1,
    ACTIONS(1396), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7611] = 3,
    ACTIONS(1400), 1,
      sym_comma,
    STATE(512), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1398), 2,
      sym_newline,
      sym__inline_comment,
  [7622] = 3,
    ACTIONS(1404), 1,
      sym_comma,
    STATE(513), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1402), 2,
      sym_newline,
      sym__inline_comment,
  [7633] = 1,
    ACTIONS(1406), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7640] = 1,
    ACTIONS(989), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7647] = 1,
    ACTIONS(991), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7654] = 1,
    ACTIONS(993), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7661] = 1,
    ACTIONS(995), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7668] = 1,
    ACTIONS(997), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7675] = 1,
    ACTIONS(999), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7682] = 1,
    ACTIONS(1001), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7689] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1408), 1,
      sym_blank_line,
    STATE(385), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7700] = 1,
    ACTIONS(1003), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7707] = 1,
    ACTIONS(1005), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7714] = 1,
    ACTIONS(1007), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7721] = 1,
    ACTIONS(1009), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7728] = 1,
    ACTIONS(1011), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7735] = 1,
    ACTIONS(1013), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7742] = 1,
    ACTIONS(1015), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7749] = 1,
    ACTIONS(1017), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7756] = 1,
    ACTIONS(1019), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7763] = 4,
    ACTIONS(617), 1,
      sym__line_start,
    ACTIONS(1410), 1,
      sym__dedent,
    STATE(151), 1,
      sym_message,
    STATE(1122), 1,
      sym_messages,
  [7776] = 1,
    ACTIONS(515), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7783] = 1,
    ACTIONS(1023), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7790] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1091), 1,
      sym_text_line,
    STATE(535), 1,
      sym_line_end,
  [7803] = 1,
    ACTIONS(1412), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7810] = 3,
    ACTIONS(1416), 1,
      sym_comma,
    STATE(512), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1414), 2,
      sym_newline,
      sym__inline_comment,
  [7821] = 3,
    ACTIONS(1421), 1,
      sym_comma,
    STATE(513), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1419), 2,
      sym_newline,
      sym__inline_comment,
  [7832] = 1,
    ACTIONS(1025), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7839] = 1,
    ACTIONS(1027), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7846] = 1,
    ACTIONS(1029), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7853] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1424), 1,
      sym_text_line,
    STATE(537), 1,
      sym_line_end,
  [7866] = 1,
    ACTIONS(1031), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7873] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1426), 1,
      sym_text_line,
    STATE(538), 1,
      sym_line_end,
  [7886] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1428), 1,
      sym_text_line,
    STATE(540), 1,
      sym_line_end,
  [7899] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_text_line,
    STATE(541), 1,
      sym_line_end,
  [7912] = 4,
    ACTIONS(828), 1,
      sym_lparen,
    ACTIONS(1432), 1,
      sym_arrow,
    ACTIONS(1434), 1,
      sym_colon,
    STATE(991), 1,
      sym_params,
  [7925] = 1,
    ACTIONS(1033), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7932] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1436), 1,
      sym_blank_line,
    STATE(397), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7943] = 1,
    ACTIONS(1438), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7950] = 1,
    ACTIONS(1035), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7957] = 1,
    ACTIONS(1037), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7964] = 1,
    ACTIONS(1039), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7971] = 1,
    ACTIONS(1440), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7978] = 1,
    ACTIONS(1043), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7985] = 1,
    ACTIONS(1045), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7992] = 1,
    ACTIONS(1442), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7999] = 1,
    ACTIONS(517), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8006] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8013] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8020] = 1,
    ACTIONS(1444), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8027] = 1,
    ACTIONS(1055), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8034] = 1,
    ACTIONS(1057), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8041] = 1,
    ACTIONS(1059), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8048] = 1,
    ACTIONS(1061), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8055] = 1,
    ACTIONS(1063), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8062] = 1,
    ACTIONS(1446), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8069] = 1,
    ACTIONS(1067), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8076] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8083] = 1,
    ACTIONS(1069), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8090] = 1,
    ACTIONS(1450), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8097] = 1,
    ACTIONS(519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8104] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8111] = 1,
    ACTIONS(1077), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8118] = 1,
    ACTIONS(1079), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8125] = 1,
    ACTIONS(1081), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8132] = 1,
    ACTIONS(1083), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8139] = 1,
    ACTIONS(1085), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8146] = 1,
    ACTIONS(1452), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8153] = 1,
    ACTIONS(1454), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8160] = 1,
    ACTIONS(1087), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8167] = 4,
    ACTIONS(828), 1,
      sym_lparen,
    ACTIONS(1456), 1,
      sym_arrow,
    ACTIONS(1458), 1,
      sym_colon,
    STATE(977), 1,
      sym_params,
  [8180] = 1,
    ACTIONS(1093), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8187] = 1,
    ACTIONS(1095), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8194] = 1,
    ACTIONS(1097), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8201] = 1,
    ACTIONS(1460), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8208] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8215] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1462), 1,
      sym_blank_line,
    STATE(315), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8226] = 1,
    ACTIONS(395), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8233] = 1,
    ACTIONS(1464), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8240] = 1,
    ACTIONS(1105), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8247] = 1,
    ACTIONS(1107), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8254] = 1,
    ACTIONS(1109), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8261] = 1,
    ACTIONS(1111), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8268] = 1,
    ACTIONS(1113), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8275] = 1,
    ACTIONS(1115), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8282] = 1,
    ACTIONS(1117), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8289] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8296] = 1,
    ACTIONS(1119), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8303] = 1,
    ACTIONS(1121), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8310] = 1,
    ACTIONS(1123), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8317] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8324] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8331] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8338] = 1,
    ACTIONS(1175), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8345] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8352] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8359] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8366] = 1,
    ACTIONS(1143), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8373] = 1,
    ACTIONS(1185), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8380] = 1,
    ACTIONS(1185), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8387] = 1,
    ACTIONS(1145), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8394] = 1,
    ACTIONS(1466), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8401] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8408] = 2,
    ACTIONS(1470), 1,
      sym_newline,
    ACTIONS(1468), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [8417] = 4,
    ACTIONS(1472), 1,
      sym__inline_comment,
    ACTIONS(1474), 1,
      sym_text_line,
    ACTIONS(1476), 1,
      sym_newline,
    STATE(399), 1,
      sym_line_end,
  [8430] = 1,
    ACTIONS(1478), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8437] = 3,
    ACTIONS(1480), 1,
      sym_colon,
    ACTIONS(1482), 1,
      sym_newline,
    ACTIONS(1474), 2,
      sym__inline_comment,
      sym_text_line,
  [8448] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1484), 1,
      sym_text_line,
    STATE(635), 1,
      sym_line_end,
  [8461] = 2,
    STATE(1113), 1,
      sym_directive_op,
    ACTIONS(1486), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8470] = 1,
    ACTIONS(1488), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8477] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(654), 1,
      sym__cap_definition,
  [8490] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(655), 1,
      sym__cap_definition,
  [8503] = 4,
    ACTIONS(617), 1,
      sym__line_start,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(151), 1,
      sym_message,
    STATE(1140), 1,
      sym_messages,
  [8516] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(657), 1,
      sym__cap_definition,
  [8529] = 1,
    ACTIONS(1496), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8536] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(115), 1,
      sym_line_end,
    STATE(658), 1,
      sym__cap_definition,
  [8549] = 1,
    ACTIONS(1498), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8556] = 1,
    ACTIONS(1500), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8563] = 3,
    ACTIONS(879), 1,
      sym_newline,
    ACTIONS(1502), 1,
      sym_flow_run_keyword,
    ACTIONS(875), 2,
      sym__inline_comment,
      sym_text_line,
  [8574] = 4,
    ACTIONS(1504), 1,
      sym_blank_line,
    ACTIONS(1506), 1,
      sym__text_indent,
    STATE(663), 1,
      sym_text_body,
    STATE(807), 1,
      aux_sym_text_body_repeat1,
  [8587] = 1,
    ACTIONS(1508), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8594] = 1,
    ACTIONS(1510), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8601] = 1,
    ACTIONS(1175), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8608] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1512), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8619] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1514), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [8630] = 1,
    ACTIONS(1516), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8637] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8644] = 1,
    ACTIONS(1149), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8651] = 1,
    ACTIONS(1310), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8658] = 1,
    ACTIONS(1308), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8665] = 1,
    ACTIONS(1330), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8672] = 1,
    ACTIONS(1320), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8679] = 1,
    ACTIONS(1320), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8686] = 1,
    ACTIONS(1328), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8693] = 1,
    ACTIONS(1153), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8700] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1520), 1,
      sym_text_line,
    STATE(696), 1,
      sym_line_end,
  [8713] = 1,
    ACTIONS(1522), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8720] = 1,
    ACTIONS(1157), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8727] = 1,
    ACTIONS(1524), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8734] = 1,
    ACTIONS(1526), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8741] = 1,
    ACTIONS(1528), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8748] = 3,
    ACTIONS(1530), 1,
      sym_optional_marker,
    ACTIONS(1532), 1,
      sym_colon,
    ACTIONS(1534), 2,
      sym_rparen,
      sym_comma,
  [8759] = 1,
    ACTIONS(1536), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8766] = 1,
    ACTIONS(1538), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8773] = 1,
    ACTIONS(1540), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8780] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8787] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(132), 1,
      sym_line_end,
    STATE(726), 1,
      sym_job_body,
  [8800] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(132), 1,
      sym_line_end,
    STATE(735), 1,
      sym_job_body,
  [8813] = 1,
    ACTIONS(1542), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8820] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(383), 1,
      sym_text_line,
    STATE(508), 1,
      sym_line_end,
  [8833] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8842] = 2,
    STATE(870), 1,
      sym_text_ref,
    ACTIONS(1544), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8851] = 4,
    ACTIONS(1546), 1,
      sym_runnable_ref,
    ACTIONS(1548), 1,
      sym_none_keyword,
    ACTIONS(1550), 1,
      sym_all_keyword,
    STATE(869), 1,
      sym_route_value,
  [8864] = 1,
    ACTIONS(1552), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8871] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8878] = 1,
    ACTIONS(1554), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8885] = 1,
    ACTIONS(1556), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8892] = 1,
    ACTIONS(1558), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8899] = 1,
    ACTIONS(1560), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8906] = 1,
    ACTIONS(1562), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8913] = 1,
    ACTIONS(1564), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8920] = 1,
    ACTIONS(1566), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8927] = 1,
    ACTIONS(1568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8934] = 1,
    ACTIONS(1570), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8941] = 1,
    ACTIONS(1332), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8948] = 1,
    ACTIONS(1334), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8955] = 1,
    ACTIONS(1340), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8962] = 1,
    ACTIONS(1572), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8969] = 1,
    ACTIONS(1574), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8976] = 1,
    ACTIONS(840), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8983] = 1,
    ACTIONS(1576), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8990] = 1,
    ACTIONS(1578), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8997] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9004] = 1,
    ACTIONS(842), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9011] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1580), 1,
      sym_blank_line,
    STATE(423), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9022] = 1,
    ACTIONS(1346), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9029] = 1,
    ACTIONS(1177), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9036] = 1,
    ACTIONS(1582), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9043] = 1,
    ACTIONS(1584), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9050] = 1,
    ACTIONS(1348), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9057] = 1,
    ACTIONS(1161), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9064] = 4,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1586), 1,
      sym_colon,
    STATE(739), 1,
      sym_line_end,
  [9077] = 1,
    ACTIONS(1350), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9084] = 1,
    ACTIONS(1165), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9091] = 1,
    ACTIONS(1352), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9098] = 1,
    ACTIONS(1133), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9105] = 1,
    ACTIONS(1354), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9112] = 1,
    ACTIONS(1356), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9119] = 1,
    ACTIONS(1358), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9126] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9133] = 1,
    ACTIONS(1133), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9140] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9147] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9154] = 1,
    ACTIONS(1143), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9161] = 1,
    ACTIONS(1145), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9168] = 1,
    ACTIONS(840), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9175] = 1,
    ACTIONS(842), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9182] = 1,
    ACTIONS(1131), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9189] = 1,
    ACTIONS(1133), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9196] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9203] = 1,
    ACTIONS(1141), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9210] = 1,
    ACTIONS(1143), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9217] = 1,
    ACTIONS(1145), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9224] = 1,
    ACTIONS(1588), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9231] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9238] = 1,
    ACTIONS(1360), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9245] = 1,
    ACTIONS(840), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9252] = 1,
    ACTIONS(842), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9259] = 3,
    STATE(628), 1,
      sym_param_name,
    STATE(1042), 1,
      sym_param,
    ACTIONS(1247), 2,
      sym__variable_name,
      anon_sym__,
  [9270] = 1,
    ACTIONS(1364), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9277] = 1,
    ACTIONS(1590), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9284] = 4,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(597), 1,
      sym__text_indent,
    STATE(583), 1,
      sym_text_body,
    STATE(950), 1,
      aux_sym_text_body_repeat1,
  [9297] = 1,
    ACTIONS(1592), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9304] = 1,
    ACTIONS(1594), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9311] = 1,
    ACTIONS(1596), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9318] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1598), 1,
      sym_text_line,
    STATE(469), 1,
      sym_line_end,
  [9331] = 1,
    ACTIONS(1600), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9338] = 1,
    ACTIONS(1602), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9345] = 1,
    ACTIONS(1604), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9352] = 1,
    ACTIONS(1139), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9359] = 1,
    ACTIONS(1606), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9366] = 1,
    ACTIONS(1608), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9373] = 4,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1610), 1,
      sym_colon,
    STATE(242), 1,
      sym_line_end,
  [9386] = 3,
    ACTIONS(1400), 1,
      sym_comma,
    STATE(487), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1612), 2,
      sym_newline,
      sym__inline_comment,
  [9397] = 3,
    ACTIONS(1404), 1,
      sym_comma,
    STATE(488), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1614), 2,
      sym_newline,
      sym__inline_comment,
  [9408] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1616), 1,
      sym_text_line,
    STATE(259), 1,
      sym_line_end,
  [9421] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1618), 1,
      sym_text_line,
    STATE(260), 1,
      sym_line_end,
  [9434] = 1,
    ACTIONS(1620), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9441] = 1,
    ACTIONS(1622), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9448] = 1,
    ACTIONS(1624), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9455] = 1,
    ACTIONS(1366), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9462] = 1,
    ACTIONS(1368), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9469] = 1,
    ACTIONS(1370), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9476] = 1,
    ACTIONS(1372), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9483] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(357), 1,
      sym_text_line,
    STATE(275), 1,
      sym_line_end,
  [9496] = 1,
    ACTIONS(1374), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9503] = 1,
    ACTIONS(1384), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9510] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1626), 1,
      sym_text_line,
    STATE(490), 1,
      sym_line_end,
  [9523] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1628), 1,
      sym_text_line,
    STATE(491), 1,
      sym_line_end,
  [9536] = 1,
    ACTIONS(1630), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9543] = 1,
    ACTIONS(1203), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9550] = 1,
    ACTIONS(945), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9557] = 1,
    ACTIONS(947), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9564] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1299), 1,
      sym_text_line,
    STATE(292), 1,
      sym_line_end,
  [9577] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1632), 1,
      sym_text_line,
    STATE(293), 1,
      sym_line_end,
  [9590] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1634), 1,
      sym_text_line,
    STATE(294), 1,
      sym_line_end,
  [9603] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1636), 1,
      sym_text_line,
    STATE(296), 1,
      sym_line_end,
  [9616] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1638), 1,
      sym_text_line,
    STATE(297), 1,
      sym_line_end,
  [9629] = 1,
    ACTIONS(1640), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9636] = 1,
    ACTIONS(949), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9643] = 1,
    ACTIONS(951), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9650] = 4,
    ACTIONS(1215), 1,
      sym_snake_name,
    ACTIONS(1642), 1,
      sym_colon,
    STATE(643), 1,
      sym_inline_agic_body,
    STATE(924), 1,
      sym_runnable,
  [9663] = 1,
    ACTIONS(953), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9670] = 1,
    ACTIONS(955), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9677] = 1,
    ACTIONS(957), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9684] = 4,
    ACTIONS(1644), 1,
      sym_blank_line,
    ACTIONS(1646), 1,
      sym__text_indent,
    STATE(802), 1,
      sym_text_body,
    STATE(956), 1,
      aux_sym_text_body_repeat1,
  [9697] = 1,
    ACTIONS(959), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9704] = 4,
    ACTIONS(393), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__text_indent,
    STATE(357), 1,
      sym_text_body,
    STATE(957), 1,
      aux_sym_text_body_repeat1,
  [9717] = 1,
    ACTIONS(961), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9724] = 1,
    ACTIONS(963), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9731] = 1,
    ACTIONS(965), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9738] = 1,
    ACTIONS(967), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9745] = 1,
    ACTIONS(1648), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9752] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1650), 1,
      sym_blank_line,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9763] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1652), 1,
      sym_blank_line,
    STATE(389), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9774] = 1,
    ACTIONS(969), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9781] = 1,
    ACTIONS(971), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9788] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1654), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [9799] = 3,
    ACTIONS(299), 1,
      sym_newline,
    ACTIONS(1656), 1,
      sym_integer_literal,
    ACTIONS(291), 2,
      sym__inline_comment,
      sym_text_line,
  [9810] = 2,
    STATE(881), 1,
      sym_text_ref,
    ACTIONS(1544), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9819] = 4,
    ACTIONS(1546), 1,
      sym_runnable_ref,
    ACTIONS(1548), 1,
      sym_none_keyword,
    ACTIONS(1550), 1,
      sym_all_keyword,
    STATE(880), 1,
      sym_route_value,
  [9832] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1658), 1,
      sym_blank_line,
    STATE(450), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9843] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1660), 1,
      sym_blank_line,
    STATE(451), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9854] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1662), 1,
      sym_blank_line,
    STATE(453), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9865] = 3,
    ACTIONS(1103), 1,
      sym_indented_raw_text,
    ACTIONS(1664), 1,
      sym_blank_line,
    STATE(454), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9876] = 2,
    STATE(1148), 1,
      sym_directive_op,
    ACTIONS(1486), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9885] = 1,
    ACTIONS(973), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9892] = 1,
    ACTIONS(975), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9899] = 1,
    ACTIONS(977), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9906] = 1,
    ACTIONS(1245), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9913] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(195), 1,
      sym_line_end,
  [9923] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(564), 1,
      sym_line_end,
  [9933] = 3,
    ACTIONS(1670), 1,
      sym_colon,
    ACTIONS(1672), 1,
      sym_snake_name,
    STATE(1152), 1,
      sym_context_name,
  [9943] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1138), 1,
      sym_statements,
  [9953] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(222), 1,
      sym_line_end,
  [9963] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(536), 1,
      sym_line_end,
  [9973] = 3,
    ACTIONS(1674), 1,
      sym_rparen,
    ACTIONS(1676), 1,
      sym_comma,
    STATE(851), 1,
      aux_sym_params_repeat1,
  [9983] = 3,
    ACTIONS(1678), 1,
      sym_colon,
    ACTIONS(1680), 1,
      sym_snake_name,
    STATE(1166), 1,
      sym_instruct_name,
  [9993] = 1,
    ACTIONS(1414), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9999] = 1,
    ACTIONS(1682), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [10005] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(178), 1,
      sym_line_end,
  [10015] = 1,
    ACTIONS(1419), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10021] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [10031] = 3,
    ACTIONS(1684), 1,
      sym__inline_comment,
    ACTIONS(1686), 1,
      sym_newline,
    STATE(345), 1,
      sym_line_end,
  [10041] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(708), 1,
      sym_line_end,
  [10051] = 1,
    ACTIONS(1556), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10057] = 3,
    ACTIONS(1688), 1,
      sym__inline_comment,
    ACTIONS(1690), 1,
      sym_newline,
    STATE(799), 1,
      sym_line_end,
  [10067] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(226), 1,
      sym_line_end,
  [10077] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(511), 1,
      sym_line_end,
  [10087] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [10097] = 3,
    ACTIONS(1692), 1,
      sym_blank_line,
    ACTIONS(1695), 1,
      sym__text_indent,
    STATE(787), 1,
      aux_sym_text_body_repeat1,
  [10107] = 3,
    ACTIONS(1697), 1,
      sym_rparen,
    ACTIONS(1699), 1,
      sym_comma,
    STATE(788), 1,
      aux_sym_params_repeat1,
  [10117] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(573), 1,
      sym_line_end,
  [10127] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(718), 1,
      sym_line_end,
  [10137] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(719), 1,
      sym_line_end,
  [10147] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(720), 1,
      sym_line_end,
  [10157] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(515), 1,
      sym_line_end,
  [10167] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(722), 1,
      sym_line_end,
  [10177] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(723), 1,
      sym_line_end,
  [10187] = 3,
    ACTIONS(881), 1,
      sym__variable_name,
    ACTIONS(1702), 1,
      anon_sym__,
    STATE(792), 1,
      sym_local_name,
  [10197] = 1,
    ACTIONS(1175), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10203] = 1,
    ACTIONS(1566), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10209] = 1,
    ACTIONS(1568), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10215] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(516), 1,
      sym_line_end,
  [10225] = 1,
    ACTIONS(1047), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10231] = 1,
    ACTIONS(1177), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10237] = 2,
    STATE(176), 1,
      sym__order_complement,
    ACTIONS(1704), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10245] = 1,
    ACTIONS(1706), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10251] = 1,
    ACTIONS(1185), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10257] = 1,
    ACTIONS(1187), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10263] = 3,
    ACTIONS(1708), 1,
      sym_blank_line,
    ACTIONS(1710), 1,
      sym__text_indent,
    STATE(787), 1,
      aux_sym_text_body_repeat1,
  [10273] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(183), 1,
      sym_line_end,
  [10283] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(740), 1,
      sym_line_end,
  [10293] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(227), 1,
      sym_line_end,
  [10303] = 1,
    ACTIONS(1712), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10309] = 3,
    ACTIONS(377), 1,
      sym_flow_if_keyword,
    STATE(746), 1,
      sym__inline_if_complement,
    STATE(933), 1,
      sym__named_if_complement,
  [10319] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(747), 1,
      sym_line_end,
  [10329] = 1,
    ACTIONS(840), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10335] = 1,
    ACTIONS(842), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10341] = 3,
    ACTIONS(1714), 1,
      sym__dedent,
    ACTIONS(1716), 1,
      sym__until_start,
    STATE(83), 1,
      sym_until_clause,
  [10351] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(748), 1,
      sym_line_end,
  [10361] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10367] = 1,
    ACTIONS(1133), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10373] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10379] = 1,
    ACTIONS(1139), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10385] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10391] = 1,
    ACTIONS(1143), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10397] = 1,
    ACTIONS(1145), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10403] = 1,
    ACTIONS(840), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10409] = 1,
    ACTIONS(1149), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10415] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(527), 1,
      sym_line_end,
  [10425] = 1,
    ACTIONS(1153), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10431] = 1,
    ACTIONS(1157), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10437] = 1,
    ACTIONS(840), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10443] = 1,
    ACTIONS(842), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10449] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10455] = 1,
    ACTIONS(1133), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10461] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10467] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10473] = 1,
    ACTIONS(1143), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10479] = 1,
    ACTIONS(1145), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10485] = 1,
    ACTIONS(1131), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10491] = 1,
    ACTIONS(1133), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10497] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10503] = 1,
    ACTIONS(1141), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10509] = 1,
    ACTIONS(1143), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10515] = 1,
    ACTIONS(1145), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10521] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(234), 1,
      sym_line_end,
  [10531] = 3,
    ACTIONS(921), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1718), 1,
      sym_colon,
    STATE(1173), 1,
      sym__window_complement,
  [10541] = 1,
    ACTIONS(842), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10547] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(528), 1,
      sym_line_end,
  [10557] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [10567] = 1,
    ACTIONS(1161), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10573] = 1,
    ACTIONS(1165), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10579] = 3,
    ACTIONS(1676), 1,
      sym_comma,
    ACTIONS(1720), 1,
      sym_rparen,
    STATE(788), 1,
      aux_sym_params_repeat1,
  [10589] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(481), 1,
      sym_line_end,
  [10599] = 2,
    ACTIONS(1722), 1,
      sym_flow_spawn_keyword,
    STATE(518), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10607] = 2,
    ACTIONS(1724), 1,
      sym_colon,
    ACTIONS(1726), 2,
      sym_rparen,
      sym_comma,
  [10615] = 2,
    STATE(978), 1,
      sym_param_name,
    ACTIONS(1728), 2,
      sym__variable_name,
      anon_sym__,
  [10623] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(582), 1,
      sym_line_end,
  [10633] = 1,
    ACTIONS(1730), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10639] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(547), 1,
      sym_line_end,
  [10649] = 1,
    ACTIONS(1732), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10655] = 2,
    ACTIONS(1470), 1,
      sym_newline,
    ACTIONS(1468), 2,
      sym__inline_comment,
      sym_text_line,
  [10663] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(471), 1,
      sym_line_end,
  [10673] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(472), 1,
      sym_line_end,
  [10683] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(473), 1,
      sym_line_end,
  [10693] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(474), 1,
      sym_line_end,
  [10703] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(478), 1,
      sym_line_end,
  [10713] = 3,
    ACTIONS(881), 1,
      sym__variable_name,
    ACTIONS(1734), 1,
      anon_sym__,
    STATE(863), 1,
      sym_local_name,
  [10723] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(475), 1,
      sym_line_end,
  [10733] = 2,
    ACTIONS(1738), 1,
      sym_newline,
    ACTIONS(1736), 2,
      sym__inline_comment,
      sym_text_line,
  [10741] = 3,
    ACTIONS(1740), 1,
      sym__inline_comment,
    ACTIONS(1742), 1,
      sym_newline,
    STATE(436), 1,
      sym_line_end,
  [10751] = 3,
    ACTIONS(1740), 1,
      sym__inline_comment,
    ACTIONS(1742), 1,
      sym_newline,
    STATE(445), 1,
      sym_line_end,
  [10761] = 2,
    ACTIONS(1732), 1,
      sym_newline,
    ACTIONS(1744), 2,
      sym__inline_comment,
      sym_text_line,
  [10769] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(243), 1,
      sym_line_end,
  [10779] = 1,
    ACTIONS(1746), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10785] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(548), 1,
      sym_line_end,
  [10795] = 3,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(247), 1,
      sym__inline_if_complement,
    STATE(888), 1,
      sym__named_if_complement,
  [10805] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(248), 1,
      sym_line_end,
  [10815] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(249), 1,
      sym_line_end,
  [10825] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10833] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(258), 1,
      sym_line_end,
  [10843] = 3,
    ACTIONS(1748), 1,
      sym__inline_comment,
    ACTIONS(1750), 1,
      sym_newline,
    STATE(616), 1,
      sym_line_end,
  [10853] = 3,
    ACTIONS(1748), 1,
      sym__inline_comment,
    ACTIONS(1750), 1,
      sym_newline,
    STATE(617), 1,
      sym_line_end,
  [10863] = 2,
    ACTIONS(1754), 1,
      sym_newline,
    ACTIONS(1752), 2,
      sym__inline_comment,
      sym_text_line,
  [10871] = 2,
    ACTIONS(1570), 1,
      sym_newline,
    ACTIONS(1756), 2,
      sym__inline_comment,
      sym_text_line,
  [10879] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(264), 1,
      sym_line_end,
  [10889] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(265), 1,
      sym_line_end,
  [10899] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [10909] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(269), 1,
      sym_line_end,
  [10919] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(270), 1,
      sym_line_end,
  [10929] = 3,
    ACTIONS(885), 1,
      sym_flow_by_keyword,
    STATE(273), 1,
      sym__inline_by_complement,
    STATE(899), 1,
      sym__named_by_complement,
  [10939] = 3,
    ACTIONS(1688), 1,
      sym__inline_comment,
    ACTIONS(1690), 1,
      sym_newline,
    STATE(646), 1,
      sym_line_end,
  [10949] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(549), 1,
      sym_line_end,
  [10959] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(275), 1,
      sym_line_end,
  [10969] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(279), 1,
      sym_line_end,
  [10979] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(280), 1,
      sym_line_end,
  [10989] = 2,
    ACTIONS(1758), 1,
      sym_flow_spawn_keyword,
    STATE(281), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10997] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(550), 1,
      sym_line_end,
  [11007] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(235), 1,
      sym_line_end,
  [11017] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(284), 1,
      sym_line_end,
  [11027] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(285), 1,
      sym_line_end,
  [11037] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(220), 1,
      sym_line_end,
  [11047] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(495), 1,
      sym_line_end,
  [11057] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(551), 1,
      sym_line_end,
  [11067] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(290), 1,
      sym_line_end,
  [11077] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(289), 1,
      sym_line_end,
  [11087] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(552), 1,
      sym_line_end,
  [11097] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [11107] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [11117] = 3,
    ACTIONS(1716), 1,
      sym__until_start,
    ACTIONS(1760), 1,
      sym__dedent,
    STATE(91), 1,
      sym_until_clause,
  [11127] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(496), 1,
      sym_line_end,
  [11137] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(553), 1,
      sym_line_end,
  [11147] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(302), 1,
      sym_line_end,
  [11157] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(534), 1,
      sym_line_end,
  [11167] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(303), 1,
      sym_line_end,
  [11177] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(304), 1,
      sym_line_end,
  [11187] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(305), 1,
      sym_line_end,
  [11197] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(306), 1,
      sym_line_end,
  [11207] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(307), 1,
      sym_line_end,
  [11217] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(308), 1,
      sym_line_end,
  [11227] = 3,
    ACTIONS(1716), 1,
      sym__until_start,
    ACTIONS(1762), 1,
      sym__dedent,
    STATE(93), 1,
      sym_until_clause,
  [11237] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(314), 1,
      sym_line_end,
  [11247] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(204), 1,
      sym_line_end,
  [11257] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(316), 1,
      sym_line_end,
  [11267] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [11277] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(649), 1,
      sym_line_end,
  [11287] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(324), 1,
      sym_line_end,
  [11297] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(500), 1,
      sym_line_end,
  [11307] = 3,
    ACTIONS(1476), 1,
      sym_newline,
    ACTIONS(1764), 1,
      sym__inline_comment,
    STATE(801), 1,
      sym_line_end,
  [11317] = 3,
    ACTIONS(1688), 1,
      sym__inline_comment,
    ACTIONS(1690), 1,
      sym_newline,
    STATE(659), 1,
      sym_line_end,
  [11327] = 1,
    ACTIONS(1766), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11333] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(356), 1,
      sym_line_end,
  [11343] = 3,
    ACTIONS(1768), 1,
      sym_pascal_name,
    STATE(1127), 1,
      sym_type_name,
    STATE(1190), 1,
      sym_struct_name,
  [11353] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(501), 1,
      sym_line_end,
  [11363] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(502), 1,
      sym_line_end,
  [11373] = 1,
    ACTIONS(1770), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11379] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(232), 1,
      sym_line_end,
  [11389] = 3,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1115), 1,
      sym_statements,
  [11399] = 1,
    ACTIONS(1772), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11405] = 1,
    ACTIONS(1774), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11411] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [11421] = 3,
    ACTIONS(850), 1,
      sym_flow_by_keyword,
    STATE(505), 1,
      sym__inline_by_complement,
    STATE(847), 1,
      sym__named_by_complement,
  [11431] = 2,
    STATE(192), 1,
      sym__order_complement,
    ACTIONS(1704), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11439] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(193), 1,
      sym_line_end,
  [11449] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [11459] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [11469] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(207), 1,
      sym_line_end,
  [11479] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [11489] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(177), 1,
      sym_line_end,
  [11499] = 3,
    ACTIONS(1716), 1,
      sym__until_start,
    ACTIONS(1776), 1,
      sym__dedent,
    STATE(89), 1,
      sym_until_clause,
  [11509] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [11519] = 3,
    ACTIONS(1708), 1,
      sym_blank_line,
    ACTIONS(1778), 1,
      sym__text_indent,
    STATE(787), 1,
      aux_sym_text_body_repeat1,
  [11529] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(533), 1,
      sym_line_end,
  [11539] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(508), 1,
      sym_line_end,
  [11549] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(562), 1,
      sym_line_end,
  [11559] = 3,
    ACTIONS(921), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1780), 1,
      sym_colon,
    STATE(1199), 1,
      sym__window_complement,
  [11569] = 2,
    STATE(775), 1,
      sym_recall_source,
    ACTIONS(720), 2,
      anon_sym_far,
      anon_sym_near,
  [11577] = 3,
    ACTIONS(1708), 1,
      sym_blank_line,
    ACTIONS(1782), 1,
      sym__text_indent,
    STATE(787), 1,
      aux_sym_text_body_repeat1,
  [11587] = 3,
    ACTIONS(1708), 1,
      sym_blank_line,
    ACTIONS(1784), 1,
      sym__text_indent,
    STATE(787), 1,
      aux_sym_text_body_repeat1,
  [11597] = 3,
    ACTIONS(1666), 1,
      sym__inline_comment,
    ACTIONS(1668), 1,
      sym_newline,
    STATE(214), 1,
      sym_line_end,
  [11607] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(219), 1,
      sym__implicit_run_line,
  [11614] = 1,
    ACTIONS(1786), 2,
      sym_rparen,
      sym_comma,
  [11619] = 2,
    ACTIONS(567), 1,
      sym__line_start,
    STATE(111), 1,
      sym_field,
  [11626] = 1,
    ACTIONS(1788), 2,
      sym_newline,
      sym__inline_comment,
  [11631] = 2,
    ACTIONS(1790), 1,
      aux_sym__doc_space_token1,
    STATE(990), 1,
      sym__required_space,
  [11638] = 2,
    ACTIONS(1792), 1,
      sym_text_line,
    STATE(890), 1,
      sym_cap_ref,
  [11645] = 1,
    ACTIONS(1794), 2,
      sym_newline,
      sym__inline_comment,
  [11650] = 2,
    ACTIONS(535), 1,
      sym__from_start,
    STATE(398), 1,
      sym__from_complement,
  [11657] = 2,
    ACTIONS(1796), 1,
      sym__one_integer_literal,
    ACTIONS(1798), 1,
      sym__other_integer_literal,
  [11664] = 1,
    ACTIONS(1612), 2,
      sym_newline,
      sym__inline_comment,
  [11669] = 2,
    ACTIONS(1800), 1,
      anon_sym_EQ,
    STATE(1057), 1,
      sym_assign_operator,
  [11676] = 2,
    ACTIONS(1802), 1,
      sym__reduce_text_start,
    STATE(525), 1,
      sym__reduce_text_body,
  [11683] = 1,
    ACTIONS(1614), 2,
      sym_newline,
      sym__inline_comment,
  [11688] = 2,
    ACTIONS(1804), 1,
      sym_comment_text,
    ACTIONS(1806), 1,
      sym__comment_end,
  [11695] = 2,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(425), 1,
      sym__implicit_run_line,
  [11702] = 2,
    ACTIONS(567), 1,
      sym__line_start,
    STATE(146), 1,
      sym_field,
  [11709] = 2,
    ACTIONS(1808), 1,
      anon_sym_lanes,
    STATE(1010), 1,
      sym_flow_lanes_keyword,
  [11716] = 1,
    ACTIONS(1810), 2,
      sym_arrow,
      sym_colon,
  [11721] = 2,
    ACTIONS(1812), 1,
      sym_arrow,
    ACTIONS(1814), 1,
      sym_colon,
  [11728] = 2,
    ACTIONS(1816), 1,
      aux_sym__doc_space_token1,
    STATE(1139), 1,
      sym__doc_space,
  [11735] = 2,
    ACTIONS(1818), 1,
      anon_sym_EQ,
    STATE(1050), 1,
      sym_assign_operator,
  [11742] = 2,
    ACTIONS(1818), 1,
      anon_sym_EQ,
    STATE(638), 1,
      sym_assign_operator,
  [11749] = 1,
    ACTIONS(1021), 2,
      sym_newline,
      sym__inline_comment,
  [11754] = 2,
    ACTIONS(1820), 1,
      anon_sym_EQ,
    STATE(149), 1,
      sym_assign_operator,
  [11761] = 2,
    ACTIONS(1822), 1,
      sym_comment_text,
    ACTIONS(1824), 1,
      sym__comment_end,
  [11768] = 1,
    ACTIONS(1826), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11773] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(639), 1,
      sym_assign_operator,
  [11780] = 2,
    ACTIONS(1830), 1,
      sym_arrow,
    ACTIONS(1832), 1,
      sym_colon,
  [11787] = 2,
    ACTIONS(1834), 1,
      sym_snake_name,
    STATE(969), 1,
      sym_property_key,
  [11794] = 1,
    ACTIONS(1836), 2,
      sym_optional_marker,
      sym_colon,
  [11799] = 1,
    ACTIONS(1838), 2,
      sym_newline,
      sym__inline_comment,
  [11804] = 2,
    ACTIONS(1215), 1,
      sym_snake_name,
    STATE(776), 1,
      sym_runnable,
  [11811] = 2,
    ACTIONS(1840), 1,
      sym_arrow,
    ACTIONS(1842), 1,
      sym_colon,
  [11818] = 1,
    ACTIONS(1844), 2,
      sym_rparen,
      sym_comma,
  [11823] = 2,
    ACTIONS(1802), 1,
      sym__reduce_text_start,
    STATE(565), 1,
      sym__reduce_text_body,
  [11830] = 2,
    ACTIONS(1846), 1,
      sym_optional_marker,
    ACTIONS(1848), 1,
      sym_colon,
  [11837] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1194), 1,
      sym_param_doc_tag,
  [11844] = 2,
    ACTIONS(1852), 1,
      sym_snake_name,
    STATE(422), 1,
      sym_agent,
  [11851] = 2,
    ACTIONS(1802), 1,
      sym__reduce_text_start,
    STATE(554), 1,
      sym__reduce_text_body,
  [11858] = 1,
    ACTIONS(840), 2,
      sym_blank_line,
      sym__text_indent,
  [11863] = 2,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(395), 1,
      sym__unroled_message_line,
  [11870] = 2,
    ACTIONS(1854), 1,
      anon_sym_lanes,
    STATE(257), 1,
      sym_flow_lanes_keyword,
  [11877] = 1,
    ACTIONS(1856), 2,
      sym_arrow,
      sym_colon,
  [11882] = 2,
    ACTIONS(1858), 1,
      sym_comment_text,
    ACTIONS(1860), 1,
      sym__comment_end,
  [11889] = 2,
    ACTIONS(1862), 1,
      sym_comment_text,
    ACTIONS(1864), 1,
      sym__comment_end,
  [11896] = 1,
    ACTIONS(842), 2,
      sym_blank_line,
      sym__text_indent,
  [11901] = 1,
    ACTIONS(1866), 2,
      sym_newline,
      sym__inline_comment,
  [11906] = 2,
    ACTIONS(1868), 1,
      sym_comment_text,
    ACTIONS(1870), 1,
      sym__comment_end,
  [11913] = 2,
    ACTIONS(1872), 1,
      sym_comment_text,
    ACTIONS(1874), 1,
      sym__comment_end,
  [11920] = 2,
    ACTIONS(1876), 1,
      sym__snake_kebab_name,
    STATE(1128), 1,
      sym_job_name,
  [11927] = 2,
    ACTIONS(1878), 1,
      sym__snake_kebab_name,
    STATE(1200), 1,
      sym_cap_name,
  [11934] = 1,
    ACTIONS(985), 2,
      sym_newline,
      sym__inline_comment,
  [11939] = 2,
    ACTIONS(1876), 1,
      sym__snake_kebab_name,
    STATE(1070), 1,
      sym_job_name,
  [11946] = 2,
    ACTIONS(1880), 1,
      sym_comment_text,
    ACTIONS(1882), 1,
      sym__comment_end,
  [11953] = 2,
    ACTIONS(1884), 1,
      sym_comment_text,
    ACTIONS(1886), 1,
      sym__comment_end,
  [11960] = 2,
    ACTIONS(1888), 1,
      sym_snake_name,
    STATE(994), 1,
      sym_field_name,
  [11967] = 2,
    ACTIONS(1890), 1,
      sym_comment_text,
    ACTIONS(1892), 1,
      sym__comment_end,
  [11974] = 2,
    ACTIONS(1894), 1,
      sym_comment_text,
    ACTIONS(1896), 1,
      sym__comment_end,
  [11981] = 2,
    ACTIONS(1898), 1,
      sym_comment_text,
    ACTIONS(1900), 1,
      sym__comment_end,
  [11988] = 2,
    ACTIONS(1902), 1,
      sym_comment_text,
    ACTIONS(1904), 1,
      sym__comment_end,
  [11995] = 2,
    ACTIONS(535), 1,
      sym__from_start,
    STATE(415), 1,
      sym__from_complement,
  [12002] = 2,
    ACTIONS(1906), 1,
      sym_comment_text,
    ACTIONS(1908), 1,
      sym__comment_end,
  [12009] = 2,
    ACTIONS(1910), 1,
      sym_comment_text,
    ACTIONS(1912), 1,
      sym__comment_end,
  [12016] = 2,
    ACTIONS(1878), 1,
      sym__snake_kebab_name,
    STATE(1205), 1,
      sym_cap_name,
  [12023] = 2,
    ACTIONS(1914), 1,
      sym_comment_text,
    ACTIONS(1916), 1,
      sym__comment_end,
  [12030] = 2,
    ACTIONS(1918), 1,
      sym_comment_text,
    ACTIONS(1920), 1,
      sym__comment_end,
  [12037] = 2,
    ACTIONS(1922), 1,
      sym_comment_text,
    ACTIONS(1924), 1,
      sym__comment_end,
  [12044] = 2,
    ACTIONS(1926), 1,
      sym_comment_text,
    ACTIONS(1928), 1,
      sym__comment_end,
  [12051] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1144), 1,
      sym_param_doc_tag,
  [12058] = 2,
    ACTIONS(1930), 1,
      sym_comment_text,
    ACTIONS(1932), 1,
      sym__comment_end,
  [12065] = 2,
    ACTIONS(1934), 1,
      sym_comment_text,
    ACTIONS(1936), 1,
      sym__comment_end,
  [12072] = 2,
    ACTIONS(1878), 1,
      sym__snake_kebab_name,
    STATE(1137), 1,
      sym_cap_name,
  [12079] = 1,
    ACTIONS(1938), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12084] = 1,
    ACTIONS(1940), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12089] = 2,
    ACTIONS(1878), 1,
      sym__snake_kebab_name,
    STATE(1091), 1,
      sym_cap_name,
  [12096] = 2,
    ACTIONS(1852), 1,
      sym_snake_name,
    STATE(406), 1,
      sym_agent,
  [12103] = 2,
    ACTIONS(1942), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [12110] = 2,
    ACTIONS(1944), 1,
      sym__one_integer_literal,
    ACTIONS(1946), 1,
      sym__other_integer_literal,
  [12117] = 2,
    ACTIONS(1802), 1,
      sym__reduce_text_start,
    STATE(542), 1,
      sym__reduce_text_body,
  [12124] = 2,
    ACTIONS(1942), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [12131] = 2,
    ACTIONS(535), 1,
      sym__from_start,
    STATE(439), 1,
      sym__from_complement,
  [12138] = 2,
    ACTIONS(535), 1,
      sym__from_start,
    STATE(443), 1,
      sym__from_complement,
  [12145] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1075), 1,
      sym_param_doc_tag,
  [12152] = 1,
    ACTIONS(1948), 2,
      sym_rparen,
      sym_comma,
  [12157] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1086), 1,
      sym_param_doc_tag,
  [12164] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1097), 1,
      sym_param_doc_tag,
  [12171] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1062), 1,
      sym_param_doc_tag,
  [12178] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1111), 1,
      sym_param_doc_tag,
  [12185] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1118), 1,
      sym_param_doc_tag,
  [12192] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1125), 1,
      sym_param_doc_tag,
  [12199] = 2,
    ACTIONS(1850), 1,
      anon_sym_ATparam,
    STATE(1132), 1,
      sym_param_doc_tag,
  [12206] = 1,
    ACTIONS(1950), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12211] = 2,
    ACTIONS(1818), 1,
      anon_sym_EQ,
    STATE(1031), 1,
      sym_assign_operator,
  [12218] = 2,
    ACTIONS(1818), 1,
      anon_sym_EQ,
    STATE(756), 1,
      sym_assign_operator,
  [12225] = 2,
    ACTIONS(1820), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_assign_operator,
  [12232] = 2,
    ACTIONS(1952), 1,
      aux_sym__doc_space_token1,
    STATE(855), 1,
      sym__doc_space,
  [12239] = 2,
    ACTIONS(1828), 1,
      anon_sym_EQ,
    STATE(757), 1,
      sym_assign_operator,
  [12246] = 2,
    ACTIONS(1954), 1,
      sym_flow_run_keyword,
    STATE(692), 1,
      sym__run_after_modifier,
  [12253] = 2,
    ACTIONS(1956), 1,
      sym_text_line,
    STATE(780), 1,
      sym_property_value,
  [12260] = 2,
    ACTIONS(1958), 1,
      sym_flow_run_keyword,
    STATE(463), 1,
      sym__run_after_modifier,
  [12267] = 1,
    ACTIONS(1960), 2,
      sym_newline,
      sym__inline_comment,
  [12272] = 1,
    ACTIONS(1962), 2,
      sym_arrow,
      sym_colon,
  [12277] = 2,
    ACTIONS(1964), 1,
      sym_arrow,
    ACTIONS(1966), 1,
      sym_colon,
  [12284] = 1,
    ACTIONS(1968), 1,
      sym__comment_end,
  [12288] = 1,
    ACTIONS(1970), 1,
      sym_runnable_ref,
  [12292] = 1,
    ACTIONS(1972), 1,
      sym_newline,
  [12296] = 1,
    ACTIONS(1974), 1,
      sym__dedent,
  [12300] = 1,
    ACTIONS(1976), 1,
      sym__dedent,
  [12304] = 1,
    ACTIONS(1978), 1,
      sym__dedent,
  [12308] = 1,
    ACTIONS(1980), 1,
      sym__dedent,
  [12312] = 1,
    ACTIONS(1982), 1,
      sym__dedent,
  [12316] = 1,
    ACTIONS(1984), 1,
      sym_colon,
  [12320] = 1,
    ACTIONS(1986), 1,
      sym_colon,
  [12324] = 1,
    ACTIONS(1988), 1,
      sym__dedent,
  [12328] = 1,
    ACTIONS(1990), 1,
      sym__comment_end,
  [12332] = 1,
    ACTIONS(1992), 1,
      sym__comment_end,
  [12336] = 1,
    ACTIONS(1994), 1,
      sym__comment_end,
  [12340] = 1,
    ACTIONS(1996), 1,
      sym_newline,
  [12344] = 1,
    ACTIONS(1998), 1,
      sym__dedent,
  [12348] = 1,
    ACTIONS(2000), 1,
      sym_newline,
  [12352] = 1,
    ACTIONS(2002), 1,
      sym_colon,
  [12356] = 1,
    ACTIONS(2004), 1,
      sym_newline,
  [12360] = 1,
    ACTIONS(335), 1,
      sym__dedent,
  [12364] = 1,
    ACTIONS(2006), 1,
      sym__dedent,
  [12368] = 1,
    ACTIONS(2008), 1,
      anon_sym_EQ,
  [12372] = 1,
    ACTIONS(2010), 1,
      sym__comment_end,
  [12376] = 1,
    ACTIONS(2012), 1,
      sym__comment_end,
  [12380] = 1,
    ACTIONS(2014), 1,
      sym__comment_end,
  [12384] = 1,
    ACTIONS(2016), 1,
      sym_newline,
  [12388] = 1,
    ACTIONS(1410), 1,
      sym__dedent,
  [12392] = 1,
    ACTIONS(2018), 1,
      sym_colon,
  [12396] = 1,
    ACTIONS(2020), 1,
      sym_directive_value,
  [12400] = 1,
    ACTIONS(2022), 1,
      sym_colon,
  [12404] = 1,
    ACTIONS(2024), 1,
      sym__comment_end,
  [12408] = 1,
    ACTIONS(2026), 1,
      sym_flow_exec_keyword,
  [12412] = 1,
    ACTIONS(2028), 1,
      sym_colon,
  [12416] = 1,
    ACTIONS(2030), 1,
      sym__comment_end,
  [12420] = 1,
    ACTIONS(2032), 1,
      sym__comment_end,
  [12424] = 1,
    ACTIONS(2034), 1,
      sym__comment_end,
  [12428] = 1,
    ACTIONS(2036), 1,
      sym_newline,
  [12432] = 1,
    ACTIONS(2038), 1,
      sym_flow_until_keyword,
  [12436] = 1,
    ACTIONS(2040), 1,
      sym_integer_literal,
  [12440] = 1,
    ACTIONS(2042), 1,
      sym_newline,
  [12444] = 1,
    ACTIONS(2044), 1,
      sym__comment_end,
  [12448] = 1,
    ACTIONS(2046), 1,
      sym__comment_end,
  [12452] = 1,
    ACTIONS(2048), 1,
      sym_colon,
  [12456] = 1,
    ACTIONS(2050), 1,
      sym_newline,
  [12460] = 1,
    ACTIONS(2052), 1,
      sym__dedent,
  [12464] = 1,
    ACTIONS(2054), 1,
      sym__dedent,
  [12468] = 1,
    ACTIONS(2056), 1,
      sym__comment_end,
  [12472] = 1,
    ACTIONS(2058), 1,
      sym__comment_end,
  [12476] = 1,
    ACTIONS(2060), 1,
      sym__comment_end,
  [12480] = 1,
    ACTIONS(2062), 1,
      sym__comment_end,
  [12484] = 1,
    ACTIONS(2064), 1,
      sym_newline,
  [12488] = 1,
    ACTIONS(1950), 1,
      sym_directive_value,
  [12492] = 1,
    ACTIONS(2066), 1,
      sym__dedent,
  [12496] = 1,
    ACTIONS(2068), 1,
      sym__dedent,
  [12500] = 1,
    ACTIONS(2070), 1,
      sym__comment_end,
  [12504] = 1,
    ACTIONS(2072), 1,
      sym__comment_end,
  [12508] = 1,
    ACTIONS(2074), 1,
      sym__comment_end,
  [12512] = 1,
    ACTIONS(2076), 1,
      sym_newline,
  [12516] = 1,
    ACTIONS(2078), 1,
      sym__dedent,
  [12520] = 1,
    ACTIONS(2080), 1,
      sym__dedent,
  [12524] = 1,
    ACTIONS(1494), 1,
      sym__dedent,
  [12528] = 1,
    ACTIONS(2082), 1,
      sym__comment_end,
  [12532] = 1,
    ACTIONS(2084), 1,
      sym__comment_end,
  [12536] = 1,
    ACTIONS(2086), 1,
      sym__comment_end,
  [12540] = 1,
    ACTIONS(2088), 1,
      sym_newline,
  [12544] = 1,
    ACTIONS(2090), 1,
      sym_colon,
  [12548] = 1,
    ACTIONS(2092), 1,
      sym_colon,
  [12552] = 1,
    ACTIONS(2094), 1,
      sym__dedent,
  [12556] = 1,
    ACTIONS(2096), 1,
      sym__comment_end,
  [12560] = 1,
    ACTIONS(2098), 1,
      sym__comment_end,
  [12564] = 1,
    ACTIONS(2100), 1,
      sym__comment_end,
  [12568] = 1,
    ACTIONS(2102), 1,
      sym_newline,
  [12572] = 1,
    ACTIONS(2104), 1,
      sym_newline,
  [12576] = 1,
    ACTIONS(2106), 1,
      sym_newline,
  [12580] = 1,
    ACTIONS(2108), 1,
      sym_newline,
  [12584] = 1,
    ACTIONS(2110), 1,
      sym_colon,
  [12588] = 1,
    ACTIONS(2112), 1,
      sym__dedent,
  [12592] = 1,
    ACTIONS(2114), 1,
      sym_comment_text,
  [12596] = 1,
    ACTIONS(2116), 1,
      sym__dedent,
  [12600] = 1,
    ACTIONS(2118), 1,
      sym__comment_end,
  [12604] = 1,
    ACTIONS(2120), 1,
      sym__dedent,
  [12608] = 1,
    ACTIONS(2122), 1,
      sym__comment_end,
  [12612] = 1,
    ACTIONS(2124), 1,
      sym__comment_end,
  [12616] = 1,
    ACTIONS(2126), 1,
      sym_colon,
  [12620] = 1,
    ACTIONS(2128), 1,
      sym_colon,
  [12624] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [12628] = 1,
    ACTIONS(1938), 1,
      sym_directive_value,
  [12632] = 1,
    ACTIONS(2130), 1,
      ts_builtin_sym_end,
  [12636] = 1,
    ACTIONS(2132), 1,
      sym_flow_exec_keyword,
  [12640] = 1,
    ACTIONS(2134), 1,
      sym_flow_until_keyword,
  [12644] = 1,
    ACTIONS(2136), 1,
      sym_colon,
  [12648] = 1,
    ACTIONS(2138), 1,
      sym_colon,
  [12652] = 1,
    ACTIONS(2140), 1,
      sym_integer_literal,
  [12656] = 1,
    ACTIONS(2142), 1,
      sym_newline,
  [12660] = 1,
    ACTIONS(2144), 1,
      sym_cap_kind,
  [12664] = 1,
    ACTIONS(2146), 1,
      sym_flow_exec_keyword,
  [12668] = 1,
    ACTIONS(1524), 1,
      aux_sym__doc_space_token1,
  [12672] = 1,
    ACTIONS(2148), 1,
      sym_colon,
  [12676] = 1,
    ACTIONS(2150), 1,
      sym_colon,
  [12680] = 1,
    ACTIONS(2152), 1,
      sym__dedent,
  [12684] = 1,
    ACTIONS(2154), 1,
      sym_flow_time_keyword,
  [12688] = 1,
    ACTIONS(2156), 1,
      sym_flow_exec_keyword,
  [12692] = 1,
    ACTIONS(2158), 1,
      sym_flow_until_keyword,
  [12696] = 1,
    ACTIONS(2160), 1,
      sym_colon,
  [12700] = 1,
    ACTIONS(2162), 1,
      sym_colon,
  [12704] = 1,
    ACTIONS(2164), 1,
      sym_flow_until_keyword,
  [12708] = 1,
    ACTIONS(2166), 1,
      sym_flow_until_keyword,
  [12712] = 1,
    ACTIONS(2168), 1,
      sym_colon,
  [12716] = 1,
    ACTIONS(2170), 1,
      sym_newline,
  [12720] = 1,
    ACTIONS(1838), 1,
      anon_sym_EQ,
  [12724] = 1,
    ACTIONS(2172), 1,
      sym__comment_end,
  [12728] = 1,
    ACTIONS(2174), 1,
      sym_colon,
  [12732] = 1,
    ACTIONS(2176), 1,
      sym_colon,
  [12736] = 1,
    ACTIONS(2178), 1,
      sym_flow_run_keyword,
  [12740] = 1,
    ACTIONS(2180), 1,
      sym__dedent,
  [12744] = 1,
    ACTIONS(2182), 1,
      sym_colon,
  [12748] = 1,
    ACTIONS(2184), 1,
      sym_colon,
  [12752] = 1,
    ACTIONS(2186), 1,
      sym_colon,
  [12756] = 1,
    ACTIONS(2188), 1,
      sym_colon,
  [12760] = 1,
    ACTIONS(2190), 1,
      sym_flow_lane_keyword,
  [12764] = 1,
    ACTIONS(2192), 1,
      sym__dedent,
  [12768] = 1,
    ACTIONS(327), 1,
      sym__dedent,
  [12772] = 1,
    ACTIONS(2194), 1,
      sym_flow_from_keyword,
  [12776] = 1,
    ACTIONS(2196), 1,
      sym__dedent,
  [12780] = 1,
    ACTIONS(2154), 1,
      sym_flow_times_keyword,
  [12784] = 1,
    ACTIONS(2198), 1,
      sym_integer_literal,
  [12788] = 1,
    ACTIONS(2200), 1,
      sym_colon,
  [12792] = 1,
    ACTIONS(2202), 1,
      sym_colon,
  [12796] = 1,
    ACTIONS(2204), 1,
      sym_colon,
  [12800] = 1,
    ACTIONS(2206), 1,
      sym_integer_literal,
  [12804] = 1,
    ACTIONS(2208), 1,
      sym__dedent,
  [12808] = 1,
    ACTIONS(2210), 1,
      sym_colon,
  [12812] = 1,
    ACTIONS(2212), 1,
      sym__comment_end,
  [12816] = 1,
    ACTIONS(2214), 1,
      sym_colon,
  [12820] = 1,
    ACTIONS(2216), 1,
      sym__dedent,
  [12824] = 1,
    ACTIONS(2218), 1,
      sym_colon,
  [12828] = 1,
    ACTIONS(2220), 1,
      sym__dedent,
  [12832] = 1,
    ACTIONS(2222), 1,
      sym_colon,
  [12836] = 1,
    ACTIONS(2224), 1,
      sym_colon,
  [12840] = 1,
    ACTIONS(2226), 1,
      sym_flow_lane_keyword,
  [12844] = 1,
    ACTIONS(2228), 1,
      sym__dedent,
  [12848] = 1,
    ACTIONS(1754), 1,
      anon_sym_EQ,
  [12852] = 1,
    ACTIONS(2230), 1,
      sym_colon,
  [12856] = 1,
    ACTIONS(2232), 1,
      sym_colon,
  [12860] = 1,
    ACTIONS(2234), 1,
      sym_flow_until_keyword,
  [12864] = 1,
    ACTIONS(2236), 1,
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
  [SMALL_STATE(22)] = 742,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 812,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 939,
  [SMALL_STATE(29)] = 963,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1011,
  [SMALL_STATE(32)] = 1035,
  [SMALL_STATE(33)] = 1059,
  [SMALL_STATE(34)] = 1083,
  [SMALL_STATE(35)] = 1107,
  [SMALL_STATE(36)] = 1131,
  [SMALL_STATE(37)] = 1155,
  [SMALL_STATE(38)] = 1179,
  [SMALL_STATE(39)] = 1203,
  [SMALL_STATE(40)] = 1235,
  [SMALL_STATE(41)] = 1259,
  [SMALL_STATE(42)] = 1283,
  [SMALL_STATE(43)] = 1307,
  [SMALL_STATE(44)] = 1331,
  [SMALL_STATE(45)] = 1363,
  [SMALL_STATE(46)] = 1392,
  [SMALL_STATE(47)] = 1421,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1479,
  [SMALL_STATE(50)] = 1503,
  [SMALL_STATE(51)] = 1529,
  [SMALL_STATE(52)] = 1553,
  [SMALL_STATE(53)] = 1579,
  [SMALL_STATE(54)] = 1603,
  [SMALL_STATE(55)] = 1629,
  [SMALL_STATE(56)] = 1655,
  [SMALL_STATE(57)] = 1679,
  [SMALL_STATE(58)] = 1707,
  [SMALL_STATE(59)] = 1731,
  [SMALL_STATE(60)] = 1755,
  [SMALL_STATE(61)] = 1783,
  [SMALL_STATE(62)] = 1809,
  [SMALL_STATE(63)] = 1837,
  [SMALL_STATE(64)] = 1863,
  [SMALL_STATE(65)] = 1889,
  [SMALL_STATE(66)] = 1915,
  [SMALL_STATE(67)] = 1943,
  [SMALL_STATE(68)] = 1966,
  [SMALL_STATE(69)] = 1985,
  [SMALL_STATE(70)] = 2004,
  [SMALL_STATE(71)] = 2027,
  [SMALL_STATE(72)] = 2050,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2098,
  [SMALL_STATE(75)] = 2117,
  [SMALL_STATE(76)] = 2138,
  [SMALL_STATE(77)] = 2157,
  [SMALL_STATE(78)] = 2176,
  [SMALL_STATE(79)] = 2197,
  [SMALL_STATE(80)] = 2222,
  [SMALL_STATE(81)] = 2247,
  [SMALL_STATE(82)] = 2268,
  [SMALL_STATE(83)] = 2293,
  [SMALL_STATE(84)] = 2316,
  [SMALL_STATE(85)] = 2339,
  [SMALL_STATE(86)] = 2362,
  [SMALL_STATE(87)] = 2383,
  [SMALL_STATE(88)] = 2406,
  [SMALL_STATE(89)] = 2429,
  [SMALL_STATE(90)] = 2452,
  [SMALL_STATE(91)] = 2475,
  [SMALL_STATE(92)] = 2498,
  [SMALL_STATE(93)] = 2521,
  [SMALL_STATE(94)] = 2544,
  [SMALL_STATE(95)] = 2563,
  [SMALL_STATE(96)] = 2582,
  [SMALL_STATE(97)] = 2601,
  [SMALL_STATE(98)] = 2620,
  [SMALL_STATE(99)] = 2639,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2676,
  [SMALL_STATE(102)] = 2696,
  [SMALL_STATE(103)] = 2714,
  [SMALL_STATE(104)] = 2732,
  [SMALL_STATE(105)] = 2754,
  [SMALL_STATE(106)] = 2772,
  [SMALL_STATE(107)] = 2790,
  [SMALL_STATE(108)] = 2808,
  [SMALL_STATE(109)] = 2826,
  [SMALL_STATE(110)] = 2846,
  [SMALL_STATE(111)] = 2864,
  [SMALL_STATE(112)] = 2882,
  [SMALL_STATE(113)] = 2904,
  [SMALL_STATE(114)] = 2922,
  [SMALL_STATE(115)] = 2940,
  [SMALL_STATE(116)] = 2958,
  [SMALL_STATE(117)] = 2978,
  [SMALL_STATE(118)] = 2996,
  [SMALL_STATE(119)] = 3014,
  [SMALL_STATE(120)] = 3034,
  [SMALL_STATE(121)] = 3054,
  [SMALL_STATE(122)] = 3072,
  [SMALL_STATE(123)] = 3092,
  [SMALL_STATE(124)] = 3110,
  [SMALL_STATE(125)] = 3130,
  [SMALL_STATE(126)] = 3148,
  [SMALL_STATE(127)] = 3166,
  [SMALL_STATE(128)] = 3182,
  [SMALL_STATE(129)] = 3200,
  [SMALL_STATE(130)] = 3218,
  [SMALL_STATE(131)] = 3232,
  [SMALL_STATE(132)] = 3246,
  [SMALL_STATE(133)] = 3264,
  [SMALL_STATE(134)] = 3284,
  [SMALL_STATE(135)] = 3304,
  [SMALL_STATE(136)] = 3324,
  [SMALL_STATE(137)] = 3344,
  [SMALL_STATE(138)] = 3366,
  [SMALL_STATE(139)] = 3384,
  [SMALL_STATE(140)] = 3402,
  [SMALL_STATE(141)] = 3420,
  [SMALL_STATE(142)] = 3438,
  [SMALL_STATE(143)] = 3460,
  [SMALL_STATE(144)] = 3478,
  [SMALL_STATE(145)] = 3496,
  [SMALL_STATE(146)] = 3514,
  [SMALL_STATE(147)] = 3532,
  [SMALL_STATE(148)] = 3550,
  [SMALL_STATE(149)] = 3570,
  [SMALL_STATE(150)] = 3586,
  [SMALL_STATE(151)] = 3604,
  [SMALL_STATE(152)] = 3622,
  [SMALL_STATE(153)] = 3642,
  [SMALL_STATE(154)] = 3660,
  [SMALL_STATE(155)] = 3678,
  [SMALL_STATE(156)] = 3696,
  [SMALL_STATE(157)] = 3714,
  [SMALL_STATE(158)] = 3732,
  [SMALL_STATE(159)] = 3750,
  [SMALL_STATE(160)] = 3768,
  [SMALL_STATE(161)] = 3786,
  [SMALL_STATE(162)] = 3804,
  [SMALL_STATE(163)] = 3820,
  [SMALL_STATE(164)] = 3840,
  [SMALL_STATE(165)] = 3860,
  [SMALL_STATE(166)] = 3880,
  [SMALL_STATE(167)] = 3900,
  [SMALL_STATE(168)] = 3918,
  [SMALL_STATE(169)] = 3936,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3970,
  [SMALL_STATE(172)] = 3985,
  [SMALL_STATE(173)] = 3994,
  [SMALL_STATE(174)] = 4003,
  [SMALL_STATE(175)] = 4022,
  [SMALL_STATE(176)] = 4039,
  [SMALL_STATE(177)] = 4058,
  [SMALL_STATE(178)] = 4075,
  [SMALL_STATE(179)] = 4092,
  [SMALL_STATE(180)] = 4109,
  [SMALL_STATE(181)] = 4126,
  [SMALL_STATE(182)] = 4139,
  [SMALL_STATE(183)] = 4158,
  [SMALL_STATE(184)] = 4175,
  [SMALL_STATE(185)] = 4194,
  [SMALL_STATE(186)] = 4213,
  [SMALL_STATE(187)] = 4228,
  [SMALL_STATE(188)] = 4241,
  [SMALL_STATE(189)] = 4258,
  [SMALL_STATE(190)] = 4277,
  [SMALL_STATE(191)] = 4296,
  [SMALL_STATE(192)] = 4315,
  [SMALL_STATE(193)] = 4334,
  [SMALL_STATE(194)] = 4351,
  [SMALL_STATE(195)] = 4366,
  [SMALL_STATE(196)] = 4383,
  [SMALL_STATE(197)] = 4402,
  [SMALL_STATE(198)] = 4421,
  [SMALL_STATE(199)] = 4438,
  [SMALL_STATE(200)] = 4457,
  [SMALL_STATE(201)] = 4474,
  [SMALL_STATE(202)] = 4493,
  [SMALL_STATE(203)] = 4510,
  [SMALL_STATE(204)] = 4527,
  [SMALL_STATE(205)] = 4544,
  [SMALL_STATE(206)] = 4563,
  [SMALL_STATE(207)] = 4582,
  [SMALL_STATE(208)] = 4599,
  [SMALL_STATE(209)] = 4618,
  [SMALL_STATE(210)] = 4637,
  [SMALL_STATE(211)] = 4656,
  [SMALL_STATE(212)] = 4675,
  [SMALL_STATE(213)] = 4690,
  [SMALL_STATE(214)] = 4699,
  [SMALL_STATE(215)] = 4716,
  [SMALL_STATE(216)] = 4735,
  [SMALL_STATE(217)] = 4748,
  [SMALL_STATE(218)] = 4757,
  [SMALL_STATE(219)] = 4774,
  [SMALL_STATE(220)] = 4783,
  [SMALL_STATE(221)] = 4800,
  [SMALL_STATE(222)] = 4819,
  [SMALL_STATE(223)] = 4836,
  [SMALL_STATE(224)] = 4849,
  [SMALL_STATE(225)] = 4866,
  [SMALL_STATE(226)] = 4881,
  [SMALL_STATE(227)] = 4898,
  [SMALL_STATE(228)] = 4915,
  [SMALL_STATE(229)] = 4932,
  [SMALL_STATE(230)] = 4949,
  [SMALL_STATE(231)] = 4968,
  [SMALL_STATE(232)] = 4987,
  [SMALL_STATE(233)] = 5004,
  [SMALL_STATE(234)] = 5023,
  [SMALL_STATE(235)] = 5040,
  [SMALL_STATE(236)] = 5057,
  [SMALL_STATE(237)] = 5076,
  [SMALL_STATE(238)] = 5090,
  [SMALL_STATE(239)] = 5098,
  [SMALL_STATE(240)] = 5106,
  [SMALL_STATE(241)] = 5114,
  [SMALL_STATE(242)] = 5122,
  [SMALL_STATE(243)] = 5130,
  [SMALL_STATE(244)] = 5138,
  [SMALL_STATE(245)] = 5146,
  [SMALL_STATE(246)] = 5154,
  [SMALL_STATE(247)] = 5162,
  [SMALL_STATE(248)] = 5170,
  [SMALL_STATE(249)] = 5178,
  [SMALL_STATE(250)] = 5186,
  [SMALL_STATE(251)] = 5194,
  [SMALL_STATE(252)] = 5202,
  [SMALL_STATE(253)] = 5210,
  [SMALL_STATE(254)] = 5218,
  [SMALL_STATE(255)] = 5226,
  [SMALL_STATE(256)] = 5240,
  [SMALL_STATE(257)] = 5254,
  [SMALL_STATE(258)] = 5262,
  [SMALL_STATE(259)] = 5270,
  [SMALL_STATE(260)] = 5278,
  [SMALL_STATE(261)] = 5286,
  [SMALL_STATE(262)] = 5294,
  [SMALL_STATE(263)] = 5302,
  [SMALL_STATE(264)] = 5310,
  [SMALL_STATE(265)] = 5318,
  [SMALL_STATE(266)] = 5326,
  [SMALL_STATE(267)] = 5334,
  [SMALL_STATE(268)] = 5342,
  [SMALL_STATE(269)] = 5350,
  [SMALL_STATE(270)] = 5358,
  [SMALL_STATE(271)] = 5366,
  [SMALL_STATE(272)] = 5374,
  [SMALL_STATE(273)] = 5382,
  [SMALL_STATE(274)] = 5390,
  [SMALL_STATE(275)] = 5398,
  [SMALL_STATE(276)] = 5406,
  [SMALL_STATE(277)] = 5414,
  [SMALL_STATE(278)] = 5422,
  [SMALL_STATE(279)] = 5430,
  [SMALL_STATE(280)] = 5438,
  [SMALL_STATE(281)] = 5446,
  [SMALL_STATE(282)] = 5454,
  [SMALL_STATE(283)] = 5462,
  [SMALL_STATE(284)] = 5470,
  [SMALL_STATE(285)] = 5478,
  [SMALL_STATE(286)] = 5486,
  [SMALL_STATE(287)] = 5502,
  [SMALL_STATE(288)] = 5510,
  [SMALL_STATE(289)] = 5518,
  [SMALL_STATE(290)] = 5526,
  [SMALL_STATE(291)] = 5534,
  [SMALL_STATE(292)] = 5548,
  [SMALL_STATE(293)] = 5556,
  [SMALL_STATE(294)] = 5564,
  [SMALL_STATE(295)] = 5572,
  [SMALL_STATE(296)] = 5580,
  [SMALL_STATE(297)] = 5588,
  [SMALL_STATE(298)] = 5596,
  [SMALL_STATE(299)] = 5610,
  [SMALL_STATE(300)] = 5618,
  [SMALL_STATE(301)] = 5626,
  [SMALL_STATE(302)] = 5640,
  [SMALL_STATE(303)] = 5648,
  [SMALL_STATE(304)] = 5656,
  [SMALL_STATE(305)] = 5664,
  [SMALL_STATE(306)] = 5672,
  [SMALL_STATE(307)] = 5680,
  [SMALL_STATE(308)] = 5688,
  [SMALL_STATE(309)] = 5696,
  [SMALL_STATE(310)] = 5704,
  [SMALL_STATE(311)] = 5720,
  [SMALL_STATE(312)] = 5728,
  [SMALL_STATE(313)] = 5736,
  [SMALL_STATE(314)] = 5744,
  [SMALL_STATE(315)] = 5752,
  [SMALL_STATE(316)] = 5766,
  [SMALL_STATE(317)] = 5774,
  [SMALL_STATE(318)] = 5782,
  [SMALL_STATE(319)] = 5790,
  [SMALL_STATE(320)] = 5798,
  [SMALL_STATE(321)] = 5806,
  [SMALL_STATE(322)] = 5814,
  [SMALL_STATE(323)] = 5822,
  [SMALL_STATE(324)] = 5830,
  [SMALL_STATE(325)] = 5838,
  [SMALL_STATE(326)] = 5846,
  [SMALL_STATE(327)] = 5854,
  [SMALL_STATE(328)] = 5862,
  [SMALL_STATE(329)] = 5870,
  [SMALL_STATE(330)] = 5878,
  [SMALL_STATE(331)] = 5886,
  [SMALL_STATE(332)] = 5894,
  [SMALL_STATE(333)] = 5902,
  [SMALL_STATE(334)] = 5910,
  [SMALL_STATE(335)] = 5920,
  [SMALL_STATE(336)] = 5928,
  [SMALL_STATE(337)] = 5936,
  [SMALL_STATE(338)] = 5944,
  [SMALL_STATE(339)] = 5954,
  [SMALL_STATE(340)] = 5962,
  [SMALL_STATE(341)] = 5972,
  [SMALL_STATE(342)] = 5982,
  [SMALL_STATE(343)] = 5992,
  [SMALL_STATE(344)] = 6002,
  [SMALL_STATE(345)] = 6010,
  [SMALL_STATE(346)] = 6018,
  [SMALL_STATE(347)] = 6032,
  [SMALL_STATE(348)] = 6040,
  [SMALL_STATE(349)] = 6048,
  [SMALL_STATE(350)] = 6056,
  [SMALL_STATE(351)] = 6064,
  [SMALL_STATE(352)] = 6072,
  [SMALL_STATE(353)] = 6080,
  [SMALL_STATE(354)] = 6088,
  [SMALL_STATE(355)] = 6096,
  [SMALL_STATE(356)] = 6104,
  [SMALL_STATE(357)] = 6112,
  [SMALL_STATE(358)] = 6120,
  [SMALL_STATE(359)] = 6134,
  [SMALL_STATE(360)] = 6142,
  [SMALL_STATE(361)] = 6150,
  [SMALL_STATE(362)] = 6164,
  [SMALL_STATE(363)] = 6172,
  [SMALL_STATE(364)] = 6180,
  [SMALL_STATE(365)] = 6188,
  [SMALL_STATE(366)] = 6196,
  [SMALL_STATE(367)] = 6204,
  [SMALL_STATE(368)] = 6212,
  [SMALL_STATE(369)] = 6226,
  [SMALL_STATE(370)] = 6234,
  [SMALL_STATE(371)] = 6248,
  [SMALL_STATE(372)] = 6256,
  [SMALL_STATE(373)] = 6264,
  [SMALL_STATE(374)] = 6272,
  [SMALL_STATE(375)] = 6280,
  [SMALL_STATE(376)] = 6288,
  [SMALL_STATE(377)] = 6296,
  [SMALL_STATE(378)] = 6304,
  [SMALL_STATE(379)] = 6312,
  [SMALL_STATE(380)] = 6320,
  [SMALL_STATE(381)] = 6328,
  [SMALL_STATE(382)] = 6336,
  [SMALL_STATE(383)] = 6344,
  [SMALL_STATE(384)] = 6352,
  [SMALL_STATE(385)] = 6360,
  [SMALL_STATE(386)] = 6374,
  [SMALL_STATE(387)] = 6388,
  [SMALL_STATE(388)] = 6404,
  [SMALL_STATE(389)] = 6418,
  [SMALL_STATE(390)] = 6432,
  [SMALL_STATE(391)] = 6448,
  [SMALL_STATE(392)] = 6464,
  [SMALL_STATE(393)] = 6472,
  [SMALL_STATE(394)] = 6486,
  [SMALL_STATE(395)] = 6502,
  [SMALL_STATE(396)] = 6510,
  [SMALL_STATE(397)] = 6524,
  [SMALL_STATE(398)] = 6538,
  [SMALL_STATE(399)] = 6552,
  [SMALL_STATE(400)] = 6566,
  [SMALL_STATE(401)] = 6582,
  [SMALL_STATE(402)] = 6598,
  [SMALL_STATE(403)] = 6606,
  [SMALL_STATE(404)] = 6620,
  [SMALL_STATE(405)] = 6628,
  [SMALL_STATE(406)] = 6642,
  [SMALL_STATE(407)] = 6658,
  [SMALL_STATE(408)] = 6672,
  [SMALL_STATE(409)] = 6686,
  [SMALL_STATE(410)] = 6702,
  [SMALL_STATE(411)] = 6718,
  [SMALL_STATE(412)] = 6734,
  [SMALL_STATE(413)] = 6750,
  [SMALL_STATE(414)] = 6766,
  [SMALL_STATE(415)] = 6780,
  [SMALL_STATE(416)] = 6794,
  [SMALL_STATE(417)] = 6810,
  [SMALL_STATE(418)] = 6824,
  [SMALL_STATE(419)] = 6838,
  [SMALL_STATE(420)] = 6854,
  [SMALL_STATE(421)] = 6870,
  [SMALL_STATE(422)] = 6884,
  [SMALL_STATE(423)] = 6900,
  [SMALL_STATE(424)] = 6914,
  [SMALL_STATE(425)] = 6928,
  [SMALL_STATE(426)] = 6936,
  [SMALL_STATE(427)] = 6950,
  [SMALL_STATE(428)] = 6964,
  [SMALL_STATE(429)] = 6980,
  [SMALL_STATE(430)] = 6994,
  [SMALL_STATE(431)] = 7008,
  [SMALL_STATE(432)] = 7022,
  [SMALL_STATE(433)] = 7038,
  [SMALL_STATE(434)] = 7052,
  [SMALL_STATE(435)] = 7068,
  [SMALL_STATE(436)] = 7076,
  [SMALL_STATE(437)] = 7084,
  [SMALL_STATE(438)] = 7092,
  [SMALL_STATE(439)] = 7108,
  [SMALL_STATE(440)] = 7122,
  [SMALL_STATE(441)] = 7130,
  [SMALL_STATE(442)] = 7138,
  [SMALL_STATE(443)] = 7152,
  [SMALL_STATE(444)] = 7166,
  [SMALL_STATE(445)] = 7174,
  [SMALL_STATE(446)] = 7182,
  [SMALL_STATE(447)] = 7198,
  [SMALL_STATE(448)] = 7214,
  [SMALL_STATE(449)] = 7222,
  [SMALL_STATE(450)] = 7230,
  [SMALL_STATE(451)] = 7244,
  [SMALL_STATE(452)] = 7258,
  [SMALL_STATE(453)] = 7266,
  [SMALL_STATE(454)] = 7280,
  [SMALL_STATE(455)] = 7294,
  [SMALL_STATE(456)] = 7302,
  [SMALL_STATE(457)] = 7310,
  [SMALL_STATE(458)] = 7318,
  [SMALL_STATE(459)] = 7326,
  [SMALL_STATE(460)] = 7334,
  [SMALL_STATE(461)] = 7342,
  [SMALL_STATE(462)] = 7350,
  [SMALL_STATE(463)] = 7364,
  [SMALL_STATE(464)] = 7372,
  [SMALL_STATE(465)] = 7388,
  [SMALL_STATE(466)] = 7404,
  [SMALL_STATE(467)] = 7420,
  [SMALL_STATE(468)] = 7436,
  [SMALL_STATE(469)] = 7450,
  [SMALL_STATE(470)] = 7458,
  [SMALL_STATE(471)] = 7466,
  [SMALL_STATE(472)] = 7474,
  [SMALL_STATE(473)] = 7482,
  [SMALL_STATE(474)] = 7490,
  [SMALL_STATE(475)] = 7498,
  [SMALL_STATE(476)] = 7512,
  [SMALL_STATE(477)] = 7526,
  [SMALL_STATE(478)] = 7540,
  [SMALL_STATE(479)] = 7548,
  [SMALL_STATE(480)] = 7556,
  [SMALL_STATE(481)] = 7569,
  [SMALL_STATE(482)] = 7576,
  [SMALL_STATE(483)] = 7583,
  [SMALL_STATE(484)] = 7590,
  [SMALL_STATE(485)] = 7597,
  [SMALL_STATE(486)] = 7604,
  [SMALL_STATE(487)] = 7611,
  [SMALL_STATE(488)] = 7622,
  [SMALL_STATE(489)] = 7633,
  [SMALL_STATE(490)] = 7640,
  [SMALL_STATE(491)] = 7647,
  [SMALL_STATE(492)] = 7654,
  [SMALL_STATE(493)] = 7661,
  [SMALL_STATE(494)] = 7668,
  [SMALL_STATE(495)] = 7675,
  [SMALL_STATE(496)] = 7682,
  [SMALL_STATE(497)] = 7689,
  [SMALL_STATE(498)] = 7700,
  [SMALL_STATE(499)] = 7707,
  [SMALL_STATE(500)] = 7714,
  [SMALL_STATE(501)] = 7721,
  [SMALL_STATE(502)] = 7728,
  [SMALL_STATE(503)] = 7735,
  [SMALL_STATE(504)] = 7742,
  [SMALL_STATE(505)] = 7749,
  [SMALL_STATE(506)] = 7756,
  [SMALL_STATE(507)] = 7763,
  [SMALL_STATE(508)] = 7776,
  [SMALL_STATE(509)] = 7783,
  [SMALL_STATE(510)] = 7790,
  [SMALL_STATE(511)] = 7803,
  [SMALL_STATE(512)] = 7810,
  [SMALL_STATE(513)] = 7821,
  [SMALL_STATE(514)] = 7832,
  [SMALL_STATE(515)] = 7839,
  [SMALL_STATE(516)] = 7846,
  [SMALL_STATE(517)] = 7853,
  [SMALL_STATE(518)] = 7866,
  [SMALL_STATE(519)] = 7873,
  [SMALL_STATE(520)] = 7886,
  [SMALL_STATE(521)] = 7899,
  [SMALL_STATE(522)] = 7912,
  [SMALL_STATE(523)] = 7925,
  [SMALL_STATE(524)] = 7932,
  [SMALL_STATE(525)] = 7943,
  [SMALL_STATE(526)] = 7950,
  [SMALL_STATE(527)] = 7957,
  [SMALL_STATE(528)] = 7964,
  [SMALL_STATE(529)] = 7971,
  [SMALL_STATE(530)] = 7978,
  [SMALL_STATE(531)] = 7985,
  [SMALL_STATE(532)] = 7992,
  [SMALL_STATE(533)] = 7999,
  [SMALL_STATE(534)] = 8006,
  [SMALL_STATE(535)] = 8013,
  [SMALL_STATE(536)] = 8020,
  [SMALL_STATE(537)] = 8027,
  [SMALL_STATE(538)] = 8034,
  [SMALL_STATE(539)] = 8041,
  [SMALL_STATE(540)] = 8048,
  [SMALL_STATE(541)] = 8055,
  [SMALL_STATE(542)] = 8062,
  [SMALL_STATE(543)] = 8069,
  [SMALL_STATE(544)] = 8076,
  [SMALL_STATE(545)] = 8083,
  [SMALL_STATE(546)] = 8090,
  [SMALL_STATE(547)] = 8097,
  [SMALL_STATE(548)] = 8104,
  [SMALL_STATE(549)] = 8111,
  [SMALL_STATE(550)] = 8118,
  [SMALL_STATE(551)] = 8125,
  [SMALL_STATE(552)] = 8132,
  [SMALL_STATE(553)] = 8139,
  [SMALL_STATE(554)] = 8146,
  [SMALL_STATE(555)] = 8153,
  [SMALL_STATE(556)] = 8160,
  [SMALL_STATE(557)] = 8167,
  [SMALL_STATE(558)] = 8180,
  [SMALL_STATE(559)] = 8187,
  [SMALL_STATE(560)] = 8194,
  [SMALL_STATE(561)] = 8201,
  [SMALL_STATE(562)] = 8208,
  [SMALL_STATE(563)] = 8215,
  [SMALL_STATE(564)] = 8226,
  [SMALL_STATE(565)] = 8233,
  [SMALL_STATE(566)] = 8240,
  [SMALL_STATE(567)] = 8247,
  [SMALL_STATE(568)] = 8254,
  [SMALL_STATE(569)] = 8261,
  [SMALL_STATE(570)] = 8268,
  [SMALL_STATE(571)] = 8275,
  [SMALL_STATE(572)] = 8282,
  [SMALL_STATE(573)] = 8289,
  [SMALL_STATE(574)] = 8296,
  [SMALL_STATE(575)] = 8303,
  [SMALL_STATE(576)] = 8310,
  [SMALL_STATE(577)] = 8317,
  [SMALL_STATE(578)] = 8324,
  [SMALL_STATE(579)] = 8331,
  [SMALL_STATE(580)] = 8338,
  [SMALL_STATE(581)] = 8345,
  [SMALL_STATE(582)] = 8352,
  [SMALL_STATE(583)] = 8359,
  [SMALL_STATE(584)] = 8366,
  [SMALL_STATE(585)] = 8373,
  [SMALL_STATE(586)] = 8380,
  [SMALL_STATE(587)] = 8387,
  [SMALL_STATE(588)] = 8394,
  [SMALL_STATE(589)] = 8401,
  [SMALL_STATE(590)] = 8408,
  [SMALL_STATE(591)] = 8417,
  [SMALL_STATE(592)] = 8430,
  [SMALL_STATE(593)] = 8437,
  [SMALL_STATE(594)] = 8448,
  [SMALL_STATE(595)] = 8461,
  [SMALL_STATE(596)] = 8470,
  [SMALL_STATE(597)] = 8477,
  [SMALL_STATE(598)] = 8490,
  [SMALL_STATE(599)] = 8503,
  [SMALL_STATE(600)] = 8516,
  [SMALL_STATE(601)] = 8529,
  [SMALL_STATE(602)] = 8536,
  [SMALL_STATE(603)] = 8549,
  [SMALL_STATE(604)] = 8556,
  [SMALL_STATE(605)] = 8563,
  [SMALL_STATE(606)] = 8574,
  [SMALL_STATE(607)] = 8587,
  [SMALL_STATE(608)] = 8594,
  [SMALL_STATE(609)] = 8601,
  [SMALL_STATE(610)] = 8608,
  [SMALL_STATE(611)] = 8619,
  [SMALL_STATE(612)] = 8630,
  [SMALL_STATE(613)] = 8637,
  [SMALL_STATE(614)] = 8644,
  [SMALL_STATE(615)] = 8651,
  [SMALL_STATE(616)] = 8658,
  [SMALL_STATE(617)] = 8665,
  [SMALL_STATE(618)] = 8672,
  [SMALL_STATE(619)] = 8679,
  [SMALL_STATE(620)] = 8686,
  [SMALL_STATE(621)] = 8693,
  [SMALL_STATE(622)] = 8700,
  [SMALL_STATE(623)] = 8713,
  [SMALL_STATE(624)] = 8720,
  [SMALL_STATE(625)] = 8727,
  [SMALL_STATE(626)] = 8734,
  [SMALL_STATE(627)] = 8741,
  [SMALL_STATE(628)] = 8748,
  [SMALL_STATE(629)] = 8759,
  [SMALL_STATE(630)] = 8766,
  [SMALL_STATE(631)] = 8773,
  [SMALL_STATE(632)] = 8780,
  [SMALL_STATE(633)] = 8787,
  [SMALL_STATE(634)] = 8800,
  [SMALL_STATE(635)] = 8813,
  [SMALL_STATE(636)] = 8820,
  [SMALL_STATE(637)] = 8833,
  [SMALL_STATE(638)] = 8842,
  [SMALL_STATE(639)] = 8851,
  [SMALL_STATE(640)] = 8864,
  [SMALL_STATE(641)] = 8871,
  [SMALL_STATE(642)] = 8878,
  [SMALL_STATE(643)] = 8885,
  [SMALL_STATE(644)] = 8892,
  [SMALL_STATE(645)] = 8899,
  [SMALL_STATE(646)] = 8906,
  [SMALL_STATE(647)] = 8913,
  [SMALL_STATE(648)] = 8920,
  [SMALL_STATE(649)] = 8927,
  [SMALL_STATE(650)] = 8934,
  [SMALL_STATE(651)] = 8941,
  [SMALL_STATE(652)] = 8948,
  [SMALL_STATE(653)] = 8955,
  [SMALL_STATE(654)] = 8962,
  [SMALL_STATE(655)] = 8969,
  [SMALL_STATE(656)] = 8976,
  [SMALL_STATE(657)] = 8983,
  [SMALL_STATE(658)] = 8990,
  [SMALL_STATE(659)] = 8997,
  [SMALL_STATE(660)] = 9004,
  [SMALL_STATE(661)] = 9011,
  [SMALL_STATE(662)] = 9022,
  [SMALL_STATE(663)] = 9029,
  [SMALL_STATE(664)] = 9036,
  [SMALL_STATE(665)] = 9043,
  [SMALL_STATE(666)] = 9050,
  [SMALL_STATE(667)] = 9057,
  [SMALL_STATE(668)] = 9064,
  [SMALL_STATE(669)] = 9077,
  [SMALL_STATE(670)] = 9084,
  [SMALL_STATE(671)] = 9091,
  [SMALL_STATE(672)] = 9098,
  [SMALL_STATE(673)] = 9105,
  [SMALL_STATE(674)] = 9112,
  [SMALL_STATE(675)] = 9119,
  [SMALL_STATE(676)] = 9126,
  [SMALL_STATE(677)] = 9133,
  [SMALL_STATE(678)] = 9140,
  [SMALL_STATE(679)] = 9147,
  [SMALL_STATE(680)] = 9154,
  [SMALL_STATE(681)] = 9161,
  [SMALL_STATE(682)] = 9168,
  [SMALL_STATE(683)] = 9175,
  [SMALL_STATE(684)] = 9182,
  [SMALL_STATE(685)] = 9189,
  [SMALL_STATE(686)] = 9196,
  [SMALL_STATE(687)] = 9203,
  [SMALL_STATE(688)] = 9210,
  [SMALL_STATE(689)] = 9217,
  [SMALL_STATE(690)] = 9224,
  [SMALL_STATE(691)] = 9231,
  [SMALL_STATE(692)] = 9238,
  [SMALL_STATE(693)] = 9245,
  [SMALL_STATE(694)] = 9252,
  [SMALL_STATE(695)] = 9259,
  [SMALL_STATE(696)] = 9270,
  [SMALL_STATE(697)] = 9277,
  [SMALL_STATE(698)] = 9284,
  [SMALL_STATE(699)] = 9297,
  [SMALL_STATE(700)] = 9304,
  [SMALL_STATE(701)] = 9311,
  [SMALL_STATE(702)] = 9318,
  [SMALL_STATE(703)] = 9331,
  [SMALL_STATE(704)] = 9338,
  [SMALL_STATE(705)] = 9345,
  [SMALL_STATE(706)] = 9352,
  [SMALL_STATE(707)] = 9359,
  [SMALL_STATE(708)] = 9366,
  [SMALL_STATE(709)] = 9373,
  [SMALL_STATE(710)] = 9386,
  [SMALL_STATE(711)] = 9397,
  [SMALL_STATE(712)] = 9408,
  [SMALL_STATE(713)] = 9421,
  [SMALL_STATE(714)] = 9434,
  [SMALL_STATE(715)] = 9441,
  [SMALL_STATE(716)] = 9448,
  [SMALL_STATE(717)] = 9455,
  [SMALL_STATE(718)] = 9462,
  [SMALL_STATE(719)] = 9469,
  [SMALL_STATE(720)] = 9476,
  [SMALL_STATE(721)] = 9483,
  [SMALL_STATE(722)] = 9496,
  [SMALL_STATE(723)] = 9503,
  [SMALL_STATE(724)] = 9510,
  [SMALL_STATE(725)] = 9523,
  [SMALL_STATE(726)] = 9536,
  [SMALL_STATE(727)] = 9543,
  [SMALL_STATE(728)] = 9550,
  [SMALL_STATE(729)] = 9557,
  [SMALL_STATE(730)] = 9564,
  [SMALL_STATE(731)] = 9577,
  [SMALL_STATE(732)] = 9590,
  [SMALL_STATE(733)] = 9603,
  [SMALL_STATE(734)] = 9616,
  [SMALL_STATE(735)] = 9629,
  [SMALL_STATE(736)] = 9636,
  [SMALL_STATE(737)] = 9643,
  [SMALL_STATE(738)] = 9650,
  [SMALL_STATE(739)] = 9663,
  [SMALL_STATE(740)] = 9670,
  [SMALL_STATE(741)] = 9677,
  [SMALL_STATE(742)] = 9684,
  [SMALL_STATE(743)] = 9697,
  [SMALL_STATE(744)] = 9704,
  [SMALL_STATE(745)] = 9717,
  [SMALL_STATE(746)] = 9724,
  [SMALL_STATE(747)] = 9731,
  [SMALL_STATE(748)] = 9738,
  [SMALL_STATE(749)] = 9745,
  [SMALL_STATE(750)] = 9752,
  [SMALL_STATE(751)] = 9763,
  [SMALL_STATE(752)] = 9774,
  [SMALL_STATE(753)] = 9781,
  [SMALL_STATE(754)] = 9788,
  [SMALL_STATE(755)] = 9799,
  [SMALL_STATE(756)] = 9810,
  [SMALL_STATE(757)] = 9819,
  [SMALL_STATE(758)] = 9832,
  [SMALL_STATE(759)] = 9843,
  [SMALL_STATE(760)] = 9854,
  [SMALL_STATE(761)] = 9865,
  [SMALL_STATE(762)] = 9876,
  [SMALL_STATE(763)] = 9885,
  [SMALL_STATE(764)] = 9892,
  [SMALL_STATE(765)] = 9899,
  [SMALL_STATE(766)] = 9906,
  [SMALL_STATE(767)] = 9913,
  [SMALL_STATE(768)] = 9923,
  [SMALL_STATE(769)] = 9933,
  [SMALL_STATE(770)] = 9943,
  [SMALL_STATE(771)] = 9953,
  [SMALL_STATE(772)] = 9963,
  [SMALL_STATE(773)] = 9973,
  [SMALL_STATE(774)] = 9983,
  [SMALL_STATE(775)] = 9993,
  [SMALL_STATE(776)] = 9999,
  [SMALL_STATE(777)] = 10005,
  [SMALL_STATE(778)] = 10015,
  [SMALL_STATE(779)] = 10021,
  [SMALL_STATE(780)] = 10031,
  [SMALL_STATE(781)] = 10041,
  [SMALL_STATE(782)] = 10051,
  [SMALL_STATE(783)] = 10057,
  [SMALL_STATE(784)] = 10067,
  [SMALL_STATE(785)] = 10077,
  [SMALL_STATE(786)] = 10087,
  [SMALL_STATE(787)] = 10097,
  [SMALL_STATE(788)] = 10107,
  [SMALL_STATE(789)] = 10117,
  [SMALL_STATE(790)] = 10127,
  [SMALL_STATE(791)] = 10137,
  [SMALL_STATE(792)] = 10147,
  [SMALL_STATE(793)] = 10157,
  [SMALL_STATE(794)] = 10167,
  [SMALL_STATE(795)] = 10177,
  [SMALL_STATE(796)] = 10187,
  [SMALL_STATE(797)] = 10197,
  [SMALL_STATE(798)] = 10203,
  [SMALL_STATE(799)] = 10209,
  [SMALL_STATE(800)] = 10215,
  [SMALL_STATE(801)] = 10225,
  [SMALL_STATE(802)] = 10231,
  [SMALL_STATE(803)] = 10237,
  [SMALL_STATE(804)] = 10245,
  [SMALL_STATE(805)] = 10251,
  [SMALL_STATE(806)] = 10257,
  [SMALL_STATE(807)] = 10263,
  [SMALL_STATE(808)] = 10273,
  [SMALL_STATE(809)] = 10283,
  [SMALL_STATE(810)] = 10293,
  [SMALL_STATE(811)] = 10303,
  [SMALL_STATE(812)] = 10309,
  [SMALL_STATE(813)] = 10319,
  [SMALL_STATE(814)] = 10329,
  [SMALL_STATE(815)] = 10335,
  [SMALL_STATE(816)] = 10341,
  [SMALL_STATE(817)] = 10351,
  [SMALL_STATE(818)] = 10361,
  [SMALL_STATE(819)] = 10367,
  [SMALL_STATE(820)] = 10373,
  [SMALL_STATE(821)] = 10379,
  [SMALL_STATE(822)] = 10385,
  [SMALL_STATE(823)] = 10391,
  [SMALL_STATE(824)] = 10397,
  [SMALL_STATE(825)] = 10403,
  [SMALL_STATE(826)] = 10409,
  [SMALL_STATE(827)] = 10415,
  [SMALL_STATE(828)] = 10425,
  [SMALL_STATE(829)] = 10431,
  [SMALL_STATE(830)] = 10437,
  [SMALL_STATE(831)] = 10443,
  [SMALL_STATE(832)] = 10449,
  [SMALL_STATE(833)] = 10455,
  [SMALL_STATE(834)] = 10461,
  [SMALL_STATE(835)] = 10467,
  [SMALL_STATE(836)] = 10473,
  [SMALL_STATE(837)] = 10479,
  [SMALL_STATE(838)] = 10485,
  [SMALL_STATE(839)] = 10491,
  [SMALL_STATE(840)] = 10497,
  [SMALL_STATE(841)] = 10503,
  [SMALL_STATE(842)] = 10509,
  [SMALL_STATE(843)] = 10515,
  [SMALL_STATE(844)] = 10521,
  [SMALL_STATE(845)] = 10531,
  [SMALL_STATE(846)] = 10541,
  [SMALL_STATE(847)] = 10547,
  [SMALL_STATE(848)] = 10557,
  [SMALL_STATE(849)] = 10567,
  [SMALL_STATE(850)] = 10573,
  [SMALL_STATE(851)] = 10579,
  [SMALL_STATE(852)] = 10589,
  [SMALL_STATE(853)] = 10599,
  [SMALL_STATE(854)] = 10607,
  [SMALL_STATE(855)] = 10615,
  [SMALL_STATE(856)] = 10623,
  [SMALL_STATE(857)] = 10633,
  [SMALL_STATE(858)] = 10639,
  [SMALL_STATE(859)] = 10649,
  [SMALL_STATE(860)] = 10655,
  [SMALL_STATE(861)] = 10663,
  [SMALL_STATE(862)] = 10673,
  [SMALL_STATE(863)] = 10683,
  [SMALL_STATE(864)] = 10693,
  [SMALL_STATE(865)] = 10703,
  [SMALL_STATE(866)] = 10713,
  [SMALL_STATE(867)] = 10723,
  [SMALL_STATE(868)] = 10733,
  [SMALL_STATE(869)] = 10741,
  [SMALL_STATE(870)] = 10751,
  [SMALL_STATE(871)] = 10761,
  [SMALL_STATE(872)] = 10769,
  [SMALL_STATE(873)] = 10779,
  [SMALL_STATE(874)] = 10785,
  [SMALL_STATE(875)] = 10795,
  [SMALL_STATE(876)] = 10805,
  [SMALL_STATE(877)] = 10815,
  [SMALL_STATE(878)] = 10825,
  [SMALL_STATE(879)] = 10833,
  [SMALL_STATE(880)] = 10843,
  [SMALL_STATE(881)] = 10853,
  [SMALL_STATE(882)] = 10863,
  [SMALL_STATE(883)] = 10871,
  [SMALL_STATE(884)] = 10879,
  [SMALL_STATE(885)] = 10889,
  [SMALL_STATE(886)] = 10899,
  [SMALL_STATE(887)] = 10909,
  [SMALL_STATE(888)] = 10919,
  [SMALL_STATE(889)] = 10929,
  [SMALL_STATE(890)] = 10939,
  [SMALL_STATE(891)] = 10949,
  [SMALL_STATE(892)] = 10959,
  [SMALL_STATE(893)] = 10969,
  [SMALL_STATE(894)] = 10979,
  [SMALL_STATE(895)] = 10989,
  [SMALL_STATE(896)] = 10997,
  [SMALL_STATE(897)] = 11007,
  [SMALL_STATE(898)] = 11017,
  [SMALL_STATE(899)] = 11027,
  [SMALL_STATE(900)] = 11037,
  [SMALL_STATE(901)] = 11047,
  [SMALL_STATE(902)] = 11057,
  [SMALL_STATE(903)] = 11067,
  [SMALL_STATE(904)] = 11077,
  [SMALL_STATE(905)] = 11087,
  [SMALL_STATE(906)] = 11097,
  [SMALL_STATE(907)] = 11107,
  [SMALL_STATE(908)] = 11117,
  [SMALL_STATE(909)] = 11127,
  [SMALL_STATE(910)] = 11137,
  [SMALL_STATE(911)] = 11147,
  [SMALL_STATE(912)] = 11157,
  [SMALL_STATE(913)] = 11167,
  [SMALL_STATE(914)] = 11177,
  [SMALL_STATE(915)] = 11187,
  [SMALL_STATE(916)] = 11197,
  [SMALL_STATE(917)] = 11207,
  [SMALL_STATE(918)] = 11217,
  [SMALL_STATE(919)] = 11227,
  [SMALL_STATE(920)] = 11237,
  [SMALL_STATE(921)] = 11247,
  [SMALL_STATE(922)] = 11257,
  [SMALL_STATE(923)] = 11267,
  [SMALL_STATE(924)] = 11277,
  [SMALL_STATE(925)] = 11287,
  [SMALL_STATE(926)] = 11297,
  [SMALL_STATE(927)] = 11307,
  [SMALL_STATE(928)] = 11317,
  [SMALL_STATE(929)] = 11327,
  [SMALL_STATE(930)] = 11333,
  [SMALL_STATE(931)] = 11343,
  [SMALL_STATE(932)] = 11353,
  [SMALL_STATE(933)] = 11363,
  [SMALL_STATE(934)] = 11373,
  [SMALL_STATE(935)] = 11379,
  [SMALL_STATE(936)] = 11389,
  [SMALL_STATE(937)] = 11399,
  [SMALL_STATE(938)] = 11405,
  [SMALL_STATE(939)] = 11411,
  [SMALL_STATE(940)] = 11421,
  [SMALL_STATE(941)] = 11431,
  [SMALL_STATE(942)] = 11439,
  [SMALL_STATE(943)] = 11449,
  [SMALL_STATE(944)] = 11459,
  [SMALL_STATE(945)] = 11469,
  [SMALL_STATE(946)] = 11479,
  [SMALL_STATE(947)] = 11489,
  [SMALL_STATE(948)] = 11499,
  [SMALL_STATE(949)] = 11509,
  [SMALL_STATE(950)] = 11519,
  [SMALL_STATE(951)] = 11529,
  [SMALL_STATE(952)] = 11539,
  [SMALL_STATE(953)] = 11549,
  [SMALL_STATE(954)] = 11559,
  [SMALL_STATE(955)] = 11569,
  [SMALL_STATE(956)] = 11577,
  [SMALL_STATE(957)] = 11587,
  [SMALL_STATE(958)] = 11597,
  [SMALL_STATE(959)] = 11607,
  [SMALL_STATE(960)] = 11614,
  [SMALL_STATE(961)] = 11619,
  [SMALL_STATE(962)] = 11626,
  [SMALL_STATE(963)] = 11631,
  [SMALL_STATE(964)] = 11638,
  [SMALL_STATE(965)] = 11645,
  [SMALL_STATE(966)] = 11650,
  [SMALL_STATE(967)] = 11657,
  [SMALL_STATE(968)] = 11664,
  [SMALL_STATE(969)] = 11669,
  [SMALL_STATE(970)] = 11676,
  [SMALL_STATE(971)] = 11683,
  [SMALL_STATE(972)] = 11688,
  [SMALL_STATE(973)] = 11695,
  [SMALL_STATE(974)] = 11702,
  [SMALL_STATE(975)] = 11709,
  [SMALL_STATE(976)] = 11716,
  [SMALL_STATE(977)] = 11721,
  [SMALL_STATE(978)] = 11728,
  [SMALL_STATE(979)] = 11735,
  [SMALL_STATE(980)] = 11742,
  [SMALL_STATE(981)] = 11749,
  [SMALL_STATE(982)] = 11754,
  [SMALL_STATE(983)] = 11761,
  [SMALL_STATE(984)] = 11768,
  [SMALL_STATE(985)] = 11773,
  [SMALL_STATE(986)] = 11780,
  [SMALL_STATE(987)] = 11787,
  [SMALL_STATE(988)] = 11794,
  [SMALL_STATE(989)] = 11799,
  [SMALL_STATE(990)] = 11804,
  [SMALL_STATE(991)] = 11811,
  [SMALL_STATE(992)] = 11818,
  [SMALL_STATE(993)] = 11823,
  [SMALL_STATE(994)] = 11830,
  [SMALL_STATE(995)] = 11837,
  [SMALL_STATE(996)] = 11844,
  [SMALL_STATE(997)] = 11851,
  [SMALL_STATE(998)] = 11858,
  [SMALL_STATE(999)] = 11863,
  [SMALL_STATE(1000)] = 11870,
  [SMALL_STATE(1001)] = 11877,
  [SMALL_STATE(1002)] = 11882,
  [SMALL_STATE(1003)] = 11889,
  [SMALL_STATE(1004)] = 11896,
  [SMALL_STATE(1005)] = 11901,
  [SMALL_STATE(1006)] = 11906,
  [SMALL_STATE(1007)] = 11913,
  [SMALL_STATE(1008)] = 11920,
  [SMALL_STATE(1009)] = 11927,
  [SMALL_STATE(1010)] = 11934,
  [SMALL_STATE(1011)] = 11939,
  [SMALL_STATE(1012)] = 11946,
  [SMALL_STATE(1013)] = 11953,
  [SMALL_STATE(1014)] = 11960,
  [SMALL_STATE(1015)] = 11967,
  [SMALL_STATE(1016)] = 11974,
  [SMALL_STATE(1017)] = 11981,
  [SMALL_STATE(1018)] = 11988,
  [SMALL_STATE(1019)] = 11995,
  [SMALL_STATE(1020)] = 12002,
  [SMALL_STATE(1021)] = 12009,
  [SMALL_STATE(1022)] = 12016,
  [SMALL_STATE(1023)] = 12023,
  [SMALL_STATE(1024)] = 12030,
  [SMALL_STATE(1025)] = 12037,
  [SMALL_STATE(1026)] = 12044,
  [SMALL_STATE(1027)] = 12051,
  [SMALL_STATE(1028)] = 12058,
  [SMALL_STATE(1029)] = 12065,
  [SMALL_STATE(1030)] = 12072,
  [SMALL_STATE(1031)] = 12079,
  [SMALL_STATE(1032)] = 12084,
  [SMALL_STATE(1033)] = 12089,
  [SMALL_STATE(1034)] = 12096,
  [SMALL_STATE(1035)] = 12103,
  [SMALL_STATE(1036)] = 12110,
  [SMALL_STATE(1037)] = 12117,
  [SMALL_STATE(1038)] = 12124,
  [SMALL_STATE(1039)] = 12131,
  [SMALL_STATE(1040)] = 12138,
  [SMALL_STATE(1041)] = 12145,
  [SMALL_STATE(1042)] = 12152,
  [SMALL_STATE(1043)] = 12157,
  [SMALL_STATE(1044)] = 12164,
  [SMALL_STATE(1045)] = 12171,
  [SMALL_STATE(1046)] = 12178,
  [SMALL_STATE(1047)] = 12185,
  [SMALL_STATE(1048)] = 12192,
  [SMALL_STATE(1049)] = 12199,
  [SMALL_STATE(1050)] = 12206,
  [SMALL_STATE(1051)] = 12211,
  [SMALL_STATE(1052)] = 12218,
  [SMALL_STATE(1053)] = 12225,
  [SMALL_STATE(1054)] = 12232,
  [SMALL_STATE(1055)] = 12239,
  [SMALL_STATE(1056)] = 12246,
  [SMALL_STATE(1057)] = 12253,
  [SMALL_STATE(1058)] = 12260,
  [SMALL_STATE(1059)] = 12267,
  [SMALL_STATE(1060)] = 12272,
  [SMALL_STATE(1061)] = 12277,
  [SMALL_STATE(1062)] = 12284,
  [SMALL_STATE(1063)] = 12288,
  [SMALL_STATE(1064)] = 12292,
  [SMALL_STATE(1065)] = 12296,
  [SMALL_STATE(1066)] = 12300,
  [SMALL_STATE(1067)] = 12304,
  [SMALL_STATE(1068)] = 12308,
  [SMALL_STATE(1069)] = 12312,
  [SMALL_STATE(1070)] = 12316,
  [SMALL_STATE(1071)] = 12320,
  [SMALL_STATE(1072)] = 12324,
  [SMALL_STATE(1073)] = 12328,
  [SMALL_STATE(1074)] = 12332,
  [SMALL_STATE(1075)] = 12336,
  [SMALL_STATE(1076)] = 12340,
  [SMALL_STATE(1077)] = 12344,
  [SMALL_STATE(1078)] = 12348,
  [SMALL_STATE(1079)] = 12352,
  [SMALL_STATE(1080)] = 12356,
  [SMALL_STATE(1081)] = 12360,
  [SMALL_STATE(1082)] = 12364,
  [SMALL_STATE(1083)] = 12368,
  [SMALL_STATE(1084)] = 12372,
  [SMALL_STATE(1085)] = 12376,
  [SMALL_STATE(1086)] = 12380,
  [SMALL_STATE(1087)] = 12384,
  [SMALL_STATE(1088)] = 12388,
  [SMALL_STATE(1089)] = 12392,
  [SMALL_STATE(1090)] = 12396,
  [SMALL_STATE(1091)] = 12400,
  [SMALL_STATE(1092)] = 12404,
  [SMALL_STATE(1093)] = 12408,
  [SMALL_STATE(1094)] = 12412,
  [SMALL_STATE(1095)] = 12416,
  [SMALL_STATE(1096)] = 12420,
  [SMALL_STATE(1097)] = 12424,
  [SMALL_STATE(1098)] = 12428,
  [SMALL_STATE(1099)] = 12432,
  [SMALL_STATE(1100)] = 12436,
  [SMALL_STATE(1101)] = 12440,
  [SMALL_STATE(1102)] = 12444,
  [SMALL_STATE(1103)] = 12448,
  [SMALL_STATE(1104)] = 12452,
  [SMALL_STATE(1105)] = 12456,
  [SMALL_STATE(1106)] = 12460,
  [SMALL_STATE(1107)] = 12464,
  [SMALL_STATE(1108)] = 12468,
  [SMALL_STATE(1109)] = 12472,
  [SMALL_STATE(1110)] = 12476,
  [SMALL_STATE(1111)] = 12480,
  [SMALL_STATE(1112)] = 12484,
  [SMALL_STATE(1113)] = 12488,
  [SMALL_STATE(1114)] = 12492,
  [SMALL_STATE(1115)] = 12496,
  [SMALL_STATE(1116)] = 12500,
  [SMALL_STATE(1117)] = 12504,
  [SMALL_STATE(1118)] = 12508,
  [SMALL_STATE(1119)] = 12512,
  [SMALL_STATE(1120)] = 12516,
  [SMALL_STATE(1121)] = 12520,
  [SMALL_STATE(1122)] = 12524,
  [SMALL_STATE(1123)] = 12528,
  [SMALL_STATE(1124)] = 12532,
  [SMALL_STATE(1125)] = 12536,
  [SMALL_STATE(1126)] = 12540,
  [SMALL_STATE(1127)] = 12544,
  [SMALL_STATE(1128)] = 12548,
  [SMALL_STATE(1129)] = 12552,
  [SMALL_STATE(1130)] = 12556,
  [SMALL_STATE(1131)] = 12560,
  [SMALL_STATE(1132)] = 12564,
  [SMALL_STATE(1133)] = 12568,
  [SMALL_STATE(1134)] = 12572,
  [SMALL_STATE(1135)] = 12576,
  [SMALL_STATE(1136)] = 12580,
  [SMALL_STATE(1137)] = 12584,
  [SMALL_STATE(1138)] = 12588,
  [SMALL_STATE(1139)] = 12592,
  [SMALL_STATE(1140)] = 12596,
  [SMALL_STATE(1141)] = 12600,
  [SMALL_STATE(1142)] = 12604,
  [SMALL_STATE(1143)] = 12608,
  [SMALL_STATE(1144)] = 12612,
  [SMALL_STATE(1145)] = 12616,
  [SMALL_STATE(1146)] = 12620,
  [SMALL_STATE(1147)] = 12624,
  [SMALL_STATE(1148)] = 12628,
  [SMALL_STATE(1149)] = 12632,
  [SMALL_STATE(1150)] = 12636,
  [SMALL_STATE(1151)] = 12640,
  [SMALL_STATE(1152)] = 12644,
  [SMALL_STATE(1153)] = 12648,
  [SMALL_STATE(1154)] = 12652,
  [SMALL_STATE(1155)] = 12656,
  [SMALL_STATE(1156)] = 12660,
  [SMALL_STATE(1157)] = 12664,
  [SMALL_STATE(1158)] = 12668,
  [SMALL_STATE(1159)] = 12672,
  [SMALL_STATE(1160)] = 12676,
  [SMALL_STATE(1161)] = 12680,
  [SMALL_STATE(1162)] = 12684,
  [SMALL_STATE(1163)] = 12688,
  [SMALL_STATE(1164)] = 12692,
  [SMALL_STATE(1165)] = 12696,
  [SMALL_STATE(1166)] = 12700,
  [SMALL_STATE(1167)] = 12704,
  [SMALL_STATE(1168)] = 12708,
  [SMALL_STATE(1169)] = 12712,
  [SMALL_STATE(1170)] = 12716,
  [SMALL_STATE(1171)] = 12720,
  [SMALL_STATE(1172)] = 12724,
  [SMALL_STATE(1173)] = 12728,
  [SMALL_STATE(1174)] = 12732,
  [SMALL_STATE(1175)] = 12736,
  [SMALL_STATE(1176)] = 12740,
  [SMALL_STATE(1177)] = 12744,
  [SMALL_STATE(1178)] = 12748,
  [SMALL_STATE(1179)] = 12752,
  [SMALL_STATE(1180)] = 12756,
  [SMALL_STATE(1181)] = 12760,
  [SMALL_STATE(1182)] = 12764,
  [SMALL_STATE(1183)] = 12768,
  [SMALL_STATE(1184)] = 12772,
  [SMALL_STATE(1185)] = 12776,
  [SMALL_STATE(1186)] = 12780,
  [SMALL_STATE(1187)] = 12784,
  [SMALL_STATE(1188)] = 12788,
  [SMALL_STATE(1189)] = 12792,
  [SMALL_STATE(1190)] = 12796,
  [SMALL_STATE(1191)] = 12800,
  [SMALL_STATE(1192)] = 12804,
  [SMALL_STATE(1193)] = 12808,
  [SMALL_STATE(1194)] = 12812,
  [SMALL_STATE(1195)] = 12816,
  [SMALL_STATE(1196)] = 12820,
  [SMALL_STATE(1197)] = 12824,
  [SMALL_STATE(1198)] = 12828,
  [SMALL_STATE(1199)] = 12832,
  [SMALL_STATE(1200)] = 12836,
  [SMALL_STATE(1201)] = 12840,
  [SMALL_STATE(1202)] = 12844,
  [SMALL_STATE(1203)] = 12848,
  [SMALL_STATE(1204)] = 12852,
  [SMALL_STATE(1205)] = 12856,
  [SMALL_STATE(1206)] = 12860,
  [SMALL_STATE(1207)] = 12864,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(868),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1175),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(996),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1191),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1171),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(866),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1034),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1153),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1151),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1064),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(930),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1203),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(967),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1100),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1105),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1135),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(963),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1162),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1186),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1187),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(951),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(987),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(75),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(155),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(987),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 78),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 85),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(86),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(100),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(959),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1170),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(928),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(157),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1014),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(999),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1101),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(973),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1078),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(136),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(157),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(3),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 10),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(342),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1012),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(984),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1126),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(667),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(874),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1136),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 48),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 31),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 55),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 50),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 39),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 56),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 42),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 57),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 51),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 42),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 59),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 60),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 60),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 42),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 61),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 36),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 73),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 67),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 68),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 69),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 70),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 72),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 39),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 59),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 74),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 59),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 51),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 42),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 59),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 46),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 75),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 77),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 77),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 72),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 74),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 59),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 79),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 80),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 71),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 82),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 82),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 86),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 87),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 82),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 82),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 89),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(858),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 92),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 94),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1080),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 89),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 96),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 97),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 92),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 100),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 96),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 101),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 99),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 103),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 104),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 66),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(346),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1080),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 54),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 48),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 78),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1112),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [1301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(849),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 65),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 29),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 30),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 66),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 36),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 37),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 37),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 38),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 39),
  [1350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 40),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 41),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 42),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 40),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 40),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 44),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 50),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 51),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 52),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 53),
  [1374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 37),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 37),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 49),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 64),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 76),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(955),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1063),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [1426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(896),
  [1428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(905),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(910),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 46),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 81),
  [1446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 83),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 88),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 95),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1098),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(965),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 90),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 50),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 90),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [1618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 49),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [1636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [1640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1177),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 71),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1134),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(787),
  [1695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(695),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 51),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable, 1, 0, 0),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 51),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 84),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1201),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 43),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 58),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1174),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1131),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1141),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 62),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1181),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [2004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [2024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [2028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [2050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [2090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [2130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [2134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [2160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 63),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [2166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [2182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1195),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [2202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [2212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
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
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
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
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [16] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [17] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
  },
  [18] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__indent] = true,
    [ts_external_token__line_start] = true,
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
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__reduce_indent] = true,
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
    [ts_external_token__from_start] = true,
  },
  [35] = {
    [ts_external_token__reduce_text_start] = true,
  },
  [36] = {
    [ts_external_token__comment_end] = true,
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
