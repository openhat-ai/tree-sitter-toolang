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
#define STATE_COUNT 1126
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 291
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
  sym_await_statement = 209,
  sym_implicit_run_statement = 210,
  sym__implicit_run_line = 211,
  sym_seek_statement = 212,
  sym_ask_statement = 213,
  sym_generate_statement = 214,
  sym_reduce_statement = 215,
  sym__reduce_inline_line = 216,
  sym__reduce_line = 217,
  sym__reduce_inline_block = 218,
  sym__reduce_text_body = 219,
  sym__from_complement = 220,
  sym_map_statement = 221,
  sym_keep_statement = 222,
  sym_drop_statement = 223,
  sym_sort_statement = 224,
  sym__named_using_complement = 225,
  sym__required_space = 226,
  sym__named_if_complement = 227,
  sym__inline_if_complement = 228,
  sym__named_by_complement = 229,
  sym__inline_by_complement = 230,
  sym__runnable_complements = 231,
  sym__if_complements = 232,
  sym__by_complements = 233,
  sym__lanes_complement = 234,
  sym__order_complement = 235,
  sym_repeat_statement = 236,
  sym_repeat_body = 237,
  sym__repeat_statements = 238,
  sym__window_complement = 239,
  sym__repeat_count_complement = 240,
  sym_until_clause = 241,
  sym_invalid_flow_reserved_statement = 242,
  sym_inline_agic = 243,
  sym_inline_agic_body = 244,
  sym_position = 245,
  sym_runnable = 246,
  sym_agent = 247,
  sym_local_name = 248,
  sym_local_reference = 249,
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
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 31,
  [37] = 26,
  [38] = 25,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 44,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 52,
  [57] = 53,
  [58] = 49,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 63,
  [77] = 71,
  [78] = 78,
  [79] = 66,
  [80] = 73,
  [81] = 75,
  [82] = 78,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 74,
  [87] = 59,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 64,
  [96] = 96,
  [97] = 83,
  [98] = 88,
  [99] = 69,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 61,
  [105] = 65,
  [106] = 72,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 85,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 60,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 84,
  [131] = 108,
  [132] = 108,
  [133] = 108,
  [134] = 108,
  [135] = 108,
  [136] = 108,
  [137] = 108,
  [138] = 108,
  [139] = 139,
  [140] = 139,
  [141] = 108,
  [142] = 142,
  [143] = 143,
  [144] = 92,
  [145] = 145,
  [146] = 146,
  [147] = 142,
  [148] = 143,
  [149] = 122,
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
  [195] = 192,
  [196] = 171,
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
  [216] = 216,
  [217] = 201,
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
  [308] = 308,
  [309] = 309,
  [310] = 96,
  [311] = 304,
  [312] = 305,
  [313] = 306,
  [314] = 307,
  [315] = 308,
  [316] = 309,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 96,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 304,
  [327] = 305,
  [328] = 328,
  [329] = 307,
  [330] = 308,
  [331] = 309,
  [332] = 96,
  [333] = 12,
  [334] = 334,
  [335] = 317,
  [336] = 319,
  [337] = 304,
  [338] = 305,
  [339] = 306,
  [340] = 307,
  [341] = 308,
  [342] = 309,
  [343] = 317,
  [344] = 319,
  [345] = 317,
  [346] = 319,
  [347] = 347,
  [348] = 242,
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
  [366] = 241,
  [367] = 367,
  [368] = 368,
  [369] = 334,
  [370] = 208,
  [371] = 358,
  [372] = 362,
  [373] = 364,
  [374] = 96,
  [375] = 368,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 216,
  [383] = 383,
  [384] = 384,
  [385] = 199,
  [386] = 347,
  [387] = 351,
  [388] = 388,
  [389] = 197,
  [390] = 390,
  [391] = 391,
  [392] = 383,
  [393] = 393,
  [394] = 391,
  [395] = 393,
  [396] = 349,
  [397] = 360,
  [398] = 361,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 242,
  [403] = 349,
  [404] = 399,
  [405] = 242,
  [406] = 349,
  [407] = 407,
  [408] = 408,
  [409] = 205,
  [410] = 186,
  [411] = 193,
  [412] = 412,
  [413] = 413,
  [414] = 325,
  [415] = 377,
  [416] = 416,
  [417] = 355,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 378,
  [422] = 379,
  [423] = 380,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 352,
  [428] = 356,
  [429] = 365,
  [430] = 430,
  [431] = 306,
  [432] = 300,
  [433] = 433,
  [434] = 227,
  [435] = 228,
  [436] = 229,
  [437] = 230,
  [438] = 231,
  [439] = 232,
  [440] = 233,
  [441] = 234,
  [442] = 235,
  [443] = 236,
  [444] = 444,
  [445] = 237,
  [446] = 238,
  [447] = 239,
  [448] = 243,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 244,
  [458] = 245,
  [459] = 246,
  [460] = 247,
  [461] = 248,
  [462] = 249,
  [463] = 225,
  [464] = 250,
  [465] = 251,
  [466] = 252,
  [467] = 467,
  [468] = 253,
  [469] = 254,
  [470] = 255,
  [471] = 256,
  [472] = 257,
  [473] = 258,
  [474] = 259,
  [475] = 260,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 261,
  [481] = 262,
  [482] = 263,
  [483] = 483,
  [484] = 264,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 265,
  [489] = 489,
  [490] = 490,
  [491] = 266,
  [492] = 267,
  [493] = 268,
  [494] = 270,
  [495] = 271,
  [496] = 496,
  [497] = 272,
  [498] = 498,
  [499] = 273,
  [500] = 274,
  [501] = 275,
  [502] = 276,
  [503] = 277,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 279,
  [508] = 508,
  [509] = 280,
  [510] = 281,
  [511] = 282,
  [512] = 283,
  [513] = 284,
  [514] = 285,
  [515] = 515,
  [516] = 516,
  [517] = 286,
  [518] = 288,
  [519] = 289,
  [520] = 290,
  [521] = 521,
  [522] = 291,
  [523] = 292,
  [524] = 293,
  [525] = 294,
  [526] = 295,
  [527] = 296,
  [528] = 528,
  [529] = 297,
  [530] = 298,
  [531] = 299,
  [532] = 301,
  [533] = 302,
  [534] = 303,
  [535] = 318,
  [536] = 536,
  [537] = 320,
  [538] = 321,
  [539] = 323,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 324,
  [544] = 307,
  [545] = 308,
  [546] = 323,
  [547] = 309,
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
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 269,
  [565] = 278,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 318,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 416,
  [577] = 418,
  [578] = 419,
  [579] = 420,
  [580] = 226,
  [581] = 581,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 384,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 324,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 12,
  [600] = 600,
  [601] = 601,
  [602] = 602,
  [603] = 304,
  [604] = 604,
  [605] = 317,
  [606] = 319,
  [607] = 607,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 424,
  [613] = 425,
  [614] = 426,
  [615] = 615,
  [616] = 304,
  [617] = 305,
  [618] = 306,
  [619] = 307,
  [620] = 308,
  [621] = 309,
  [622] = 317,
  [623] = 319,
  [624] = 624,
  [625] = 304,
  [626] = 305,
  [627] = 306,
  [628] = 307,
  [629] = 308,
  [630] = 309,
  [631] = 317,
  [632] = 319,
  [633] = 633,
  [634] = 634,
  [635] = 320,
  [636] = 636,
  [637] = 430,
  [638] = 321,
  [639] = 567,
  [640] = 640,
  [641] = 641,
  [642] = 328,
  [643] = 643,
  [644] = 644,
  [645] = 581,
  [646] = 209,
  [647] = 647,
  [648] = 210,
  [649] = 305,
  [650] = 211,
  [651] = 212,
  [652] = 213,
  [653] = 644,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 306,
  [658] = 214,
  [659] = 659,
  [660] = 218,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 483,
  [665] = 485,
  [666] = 486,
  [667] = 487,
  [668] = 506,
  [669] = 669,
  [670] = 670,
  [671] = 671,
  [672] = 672,
  [673] = 567,
  [674] = 567,
  [675] = 675,
  [676] = 676,
  [677] = 677,
  [678] = 636,
  [679] = 467,
  [680] = 680,
  [681] = 681,
  [682] = 571,
  [683] = 572,
  [684] = 600,
  [685] = 685,
  [686] = 601,
  [687] = 687,
  [688] = 688,
  [689] = 219,
  [690] = 220,
  [691] = 636,
  [692] = 467,
  [693] = 636,
  [694] = 467,
  [695] = 554,
  [696] = 221,
  [697] = 222,
  [698] = 223,
  [699] = 655,
  [700] = 656,
  [701] = 701,
  [702] = 224,
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
  [737] = 318,
  [738] = 320,
  [739] = 321,
  [740] = 740,
  [741] = 323,
  [742] = 324,
  [743] = 592,
  [744] = 744,
  [745] = 745,
  [746] = 746,
  [747] = 747,
  [748] = 748,
  [749] = 317,
  [750] = 319,
  [751] = 751,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 757,
  [758] = 758,
  [759] = 595,
  [760] = 596,
  [761] = 761,
  [762] = 317,
  [763] = 319,
  [764] = 304,
  [765] = 305,
  [766] = 306,
  [767] = 307,
  [768] = 308,
  [769] = 309,
  [770] = 304,
  [771] = 305,
  [772] = 306,
  [773] = 307,
  [774] = 308,
  [775] = 309,
  [776] = 776,
  [777] = 777,
  [778] = 778,
  [779] = 710,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 785,
  [786] = 304,
  [787] = 305,
  [788] = 306,
  [789] = 745,
  [790] = 746,
  [791] = 747,
  [792] = 748,
  [793] = 675,
  [794] = 751,
  [795] = 307,
  [796] = 796,
  [797] = 309,
  [798] = 798,
  [799] = 799,
  [800] = 317,
  [801] = 801,
  [802] = 802,
  [803] = 785,
  [804] = 575,
  [805] = 798,
  [806] = 799,
  [807] = 801,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 703,
  [814] = 814,
  [815] = 776,
  [816] = 816,
  [817] = 583,
  [818] = 753,
  [819] = 819,
  [820] = 820,
  [821] = 724,
  [822] = 319,
  [823] = 823,
  [824] = 809,
  [825] = 709,
  [826] = 713,
  [827] = 827,
  [828] = 714,
  [829] = 829,
  [830] = 830,
  [831] = 757,
  [832] = 761,
  [833] = 643,
  [834] = 647,
  [835] = 784,
  [836] = 711,
  [837] = 715,
  [838] = 716,
  [839] = 717,
  [840] = 718,
  [841] = 719,
  [842] = 842,
  [843] = 843,
  [844] = 731,
  [845] = 744,
  [846] = 549,
  [847] = 847,
  [848] = 710,
  [849] = 849,
  [850] = 710,
  [851] = 810,
  [852] = 811,
  [853] = 853,
  [854] = 854,
  [855] = 12,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 777,
  [860] = 808,
  [861] = 734,
  [862] = 735,
  [863] = 780,
  [864] = 864,
  [865] = 843,
  [866] = 866,
  [867] = 867,
  [868] = 819,
  [869] = 781,
  [870] = 870,
  [871] = 871,
  [872] = 820,
  [873] = 816,
  [874] = 781,
  [875] = 781,
  [876] = 814,
  [877] = 706,
  [878] = 308,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 882,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 353,
  [889] = 354,
  [890] = 890,
  [891] = 891,
  [892] = 892,
  [893] = 317,
  [894] = 894,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 886,
  [900] = 900,
  [901] = 901,
  [902] = 902,
  [903] = 900,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 908,
  [909] = 909,
  [910] = 883,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 898,
  [923] = 880,
  [924] = 880,
  [925] = 925,
  [926] = 926,
  [927] = 898,
  [928] = 880,
  [929] = 929,
  [930] = 930,
  [931] = 898,
  [932] = 880,
  [933] = 898,
  [934] = 880,
  [935] = 935,
  [936] = 898,
  [937] = 880,
  [938] = 938,
  [939] = 898,
  [940] = 880,
  [941] = 941,
  [942] = 898,
  [943] = 880,
  [944] = 944,
  [945] = 898,
  [946] = 880,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 950,
  [951] = 885,
  [952] = 952,
  [953] = 953,
  [954] = 941,
  [955] = 955,
  [956] = 884,
  [957] = 957,
  [958] = 947,
  [959] = 959,
  [960] = 916,
  [961] = 918,
  [962] = 947,
  [963] = 319,
  [964] = 947,
  [965] = 965,
  [966] = 947,
  [967] = 947,
  [968] = 947,
  [969] = 947,
  [970] = 947,
  [971] = 947,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 879,
  [976] = 955,
  [977] = 972,
  [978] = 973,
  [979] = 974,
  [980] = 898,
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
  [999] = 999,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 1003,
  [1004] = 993,
  [1005] = 994,
  [1006] = 995,
  [1007] = 996,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 1010,
  [1011] = 995,
  [1012] = 1012,
  [1013] = 989,
  [1014] = 1014,
  [1015] = 993,
  [1016] = 994,
  [1017] = 995,
  [1018] = 996,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 993,
  [1023] = 994,
  [1024] = 995,
  [1025] = 996,
  [1026] = 1026,
  [1027] = 1027,
  [1028] = 1028,
  [1029] = 993,
  [1030] = 994,
  [1031] = 995,
  [1032] = 996,
  [1033] = 1033,
  [1034] = 584,
  [1035] = 1035,
  [1036] = 993,
  [1037] = 994,
  [1038] = 995,
  [1039] = 996,
  [1040] = 993,
  [1041] = 1041,
  [1042] = 1042,
  [1043] = 993,
  [1044] = 994,
  [1045] = 995,
  [1046] = 996,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 1049,
  [1050] = 993,
  [1051] = 994,
  [1052] = 995,
  [1053] = 996,
  [1054] = 996,
  [1055] = 1055,
  [1056] = 1056,
  [1057] = 1057,
  [1058] = 866,
  [1059] = 1059,
  [1060] = 1060,
  [1061] = 996,
  [1062] = 1062,
  [1063] = 1063,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1002,
  [1067] = 1067,
  [1068] = 1041,
  [1069] = 1042,
  [1070] = 1070,
  [1071] = 1056,
  [1072] = 1072,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 983,
  [1076] = 1076,
  [1077] = 1077,
  [1078] = 1020,
  [1079] = 985,
  [1080] = 1080,
  [1081] = 987,
  [1082] = 1082,
  [1083] = 1082,
  [1084] = 1072,
  [1085] = 994,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 1077,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1049,
  [1094] = 986,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 996,
  [1101] = 12,
  [1102] = 1021,
  [1103] = 1103,
  [1104] = 1104,
  [1105] = 1105,
  [1106] = 1106,
  [1107] = 1092,
  [1108] = 1108,
  [1109] = 988,
  [1110] = 1110,
  [1111] = 995,
  [1112] = 1112,
  [1113] = 1086,
  [1114] = 1114,
  [1115] = 1009,
  [1116] = 1116,
  [1117] = 1110,
  [1118] = 1118,
  [1119] = 1048,
  [1120] = 1120,
  [1121] = 1121,
  [1122] = 1067,
  [1123] = 993,
  [1124] = 994,
  [1125] = 1125,
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
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2, .external_lex_state = 7},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2, .external_lex_state = 7},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 8},
  [40] = {.lex_state = 0, .external_lex_state = 8},
  [41] = {.lex_state = 0, .external_lex_state = 8},
  [42] = {.lex_state = 0, .external_lex_state = 8},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3, .external_lex_state = 7},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 4, .external_lex_state = 7},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 6, .external_lex_state = 7},
  [50] = {.lex_state = 0, .external_lex_state = 8},
  [51] = {.lex_state = 3, .external_lex_state = 7},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0, .external_lex_state = 8},
  [55] = {.lex_state = 4, .external_lex_state = 7},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6, .external_lex_state = 7},
  [59] = {.lex_state = 4, .external_lex_state = 7},
  [60] = {.lex_state = 0, .external_lex_state = 9},
  [61] = {.lex_state = 0, .external_lex_state = 10},
  [62] = {.lex_state = 4, .external_lex_state = 7},
  [63] = {.lex_state = 4, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 11},
  [65] = {.lex_state = 0, .external_lex_state = 10},
  [66] = {.lex_state = 0, .external_lex_state = 12},
  [67] = {.lex_state = 0, .external_lex_state = 8},
  [68] = {.lex_state = 4, .external_lex_state = 7},
  [69] = {.lex_state = 0, .external_lex_state = 11},
  [70] = {.lex_state = 0, .external_lex_state = 8},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 10},
  [73] = {.lex_state = 0, .external_lex_state = 12},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 12},
  [76] = {.lex_state = 4, .external_lex_state = 7},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0, .external_lex_state = 12},
  [79] = {.lex_state = 0, .external_lex_state = 12},
  [80] = {.lex_state = 0, .external_lex_state = 12},
  [81] = {.lex_state = 0, .external_lex_state = 12},
  [82] = {.lex_state = 0, .external_lex_state = 12},
  [83] = {.lex_state = 0, .external_lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 9},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 4, .external_lex_state = 7},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 12},
  [90] = {.lex_state = 0, .external_lex_state = 12},
  [91] = {.lex_state = 0, .external_lex_state = 13},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 14},
  [95] = {.lex_state = 0, .external_lex_state = 15},
  [96] = {.lex_state = 0, .external_lex_state = 16},
  [97] = {.lex_state = 0, .external_lex_state = 15},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 15},
  [100] = {.lex_state = 0, .external_lex_state = 9},
  [101] = {.lex_state = 0, .external_lex_state = 14},
  [102] = {.lex_state = 0, .external_lex_state = 9},
  [103] = {.lex_state = 0, .external_lex_state = 12},
  [104] = {.lex_state = 0, .external_lex_state = 12},
  [105] = {.lex_state = 0, .external_lex_state = 12},
  [106] = {.lex_state = 0, .external_lex_state = 12},
  [107] = {.lex_state = 14, .external_lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 17},
  [109] = {.lex_state = 0, .external_lex_state = 16},
  [110] = {.lex_state = 0, .external_lex_state = 12},
  [111] = {.lex_state = 14, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 16},
  [113] = {.lex_state = 0, .external_lex_state = 13},
  [114] = {.lex_state = 0, .external_lex_state = 12},
  [115] = {.lex_state = 0, .external_lex_state = 13},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 18},
  [118] = {.lex_state = 0, .external_lex_state = 12},
  [119] = {.lex_state = 14, .external_lex_state = 7},
  [120] = {.lex_state = 0, .external_lex_state = 12},
  [121] = {.lex_state = 0, .external_lex_state = 12},
  [122] = {.lex_state = 0, .external_lex_state = 19},
  [123] = {.lex_state = 0, .external_lex_state = 14},
  [124] = {.lex_state = 14, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 18},
  [126] = {.lex_state = 0, .external_lex_state = 16},
  [127] = {.lex_state = 0, .external_lex_state = 16},
  [128] = {.lex_state = 0, .external_lex_state = 12},
  [129] = {.lex_state = 0, .external_lex_state = 13},
  [130] = {.lex_state = 0, .external_lex_state = 18},
  [131] = {.lex_state = 0, .external_lex_state = 17},
  [132] = {.lex_state = 0, .external_lex_state = 17},
  [133] = {.lex_state = 0, .external_lex_state = 17},
  [134] = {.lex_state = 0, .external_lex_state = 17},
  [135] = {.lex_state = 0, .external_lex_state = 17},
  [136] = {.lex_state = 0, .external_lex_state = 17},
  [137] = {.lex_state = 0, .external_lex_state = 17},
  [138] = {.lex_state = 0, .external_lex_state = 17},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 17},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 12},
  [146] = {.lex_state = 0, .external_lex_state = 12},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 19},
  [150] = {.lex_state = 0, .external_lex_state = 20},
  [151] = {.lex_state = 0, .external_lex_state = 14},
  [152] = {.lex_state = 0, .external_lex_state = 12},
  [153] = {.lex_state = 0, .external_lex_state = 20},
  [154] = {.lex_state = 0, .external_lex_state = 20},
  [155] = {.lex_state = 0, .external_lex_state = 20},
  [156] = {.lex_state = 0, .external_lex_state = 18},
  [157] = {.lex_state = 0, .external_lex_state = 20},
  [158] = {.lex_state = 0, .external_lex_state = 20},
  [159] = {.lex_state = 14, .external_lex_state = 7},
  [160] = {.lex_state = 0, .external_lex_state = 14},
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
  [195] = {.lex_state = 11, .external_lex_state = 7},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 9},
  [198] = {.lex_state = 0, .external_lex_state = 18},
  [199] = {.lex_state = 0, .external_lex_state = 9},
  [200] = {.lex_state = 0, .external_lex_state = 20},
  [201] = {.lex_state = 0, .external_lex_state = 9},
  [202] = {.lex_state = 0, .external_lex_state = 20},
  [203] = {.lex_state = 0, .external_lex_state = 20},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 20},
  [207] = {.lex_state = 0, .external_lex_state = 20},
  [208] = {.lex_state = 0, .external_lex_state = 21},
  [209] = {.lex_state = 0, .external_lex_state = 10},
  [210] = {.lex_state = 0, .external_lex_state = 10},
  [211] = {.lex_state = 0, .external_lex_state = 10},
  [212] = {.lex_state = 0, .external_lex_state = 10},
  [213] = {.lex_state = 0, .external_lex_state = 10},
  [214] = {.lex_state = 0, .external_lex_state = 10},
  [215] = {.lex_state = 0, .external_lex_state = 14},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 0, .external_lex_state = 18},
  [218] = {.lex_state = 0, .external_lex_state = 10},
  [219] = {.lex_state = 0, .external_lex_state = 10},
  [220] = {.lex_state = 0, .external_lex_state = 10},
  [221] = {.lex_state = 0, .external_lex_state = 10},
  [222] = {.lex_state = 0, .external_lex_state = 10},
  [223] = {.lex_state = 0, .external_lex_state = 10},
  [224] = {.lex_state = 0, .external_lex_state = 10},
  [225] = {.lex_state = 0, .external_lex_state = 10},
  [226] = {.lex_state = 0, .external_lex_state = 10},
  [227] = {.lex_state = 0, .external_lex_state = 10},
  [228] = {.lex_state = 0, .external_lex_state = 10},
  [229] = {.lex_state = 0, .external_lex_state = 10},
  [230] = {.lex_state = 0, .external_lex_state = 10},
  [231] = {.lex_state = 0, .external_lex_state = 10},
  [232] = {.lex_state = 0, .external_lex_state = 10},
  [233] = {.lex_state = 0, .external_lex_state = 10},
  [234] = {.lex_state = 0, .external_lex_state = 10},
  [235] = {.lex_state = 0, .external_lex_state = 10},
  [236] = {.lex_state = 0, .external_lex_state = 10},
  [237] = {.lex_state = 0, .external_lex_state = 10},
  [238] = {.lex_state = 0, .external_lex_state = 10},
  [239] = {.lex_state = 0, .external_lex_state = 10},
  [240] = {.lex_state = 0, .external_lex_state = 20},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 0, .external_lex_state = 22},
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
  [253] = {.lex_state = 0, .external_lex_state = 10},
  [254] = {.lex_state = 0, .external_lex_state = 10},
  [255] = {.lex_state = 0, .external_lex_state = 10},
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
  [269] = {.lex_state = 0, .external_lex_state = 11},
  [270] = {.lex_state = 0, .external_lex_state = 10},
  [271] = {.lex_state = 0, .external_lex_state = 10},
  [272] = {.lex_state = 0, .external_lex_state = 10},
  [273] = {.lex_state = 0, .external_lex_state = 10},
  [274] = {.lex_state = 0, .external_lex_state = 10},
  [275] = {.lex_state = 0, .external_lex_state = 10},
  [276] = {.lex_state = 0, .external_lex_state = 10},
  [277] = {.lex_state = 0, .external_lex_state = 10},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 0, .external_lex_state = 10},
  [280] = {.lex_state = 0, .external_lex_state = 10},
  [281] = {.lex_state = 0, .external_lex_state = 10},
  [282] = {.lex_state = 0, .external_lex_state = 10},
  [283] = {.lex_state = 0, .external_lex_state = 10},
  [284] = {.lex_state = 0, .external_lex_state = 10},
  [285] = {.lex_state = 0, .external_lex_state = 10},
  [286] = {.lex_state = 0, .external_lex_state = 10},
  [287] = {.lex_state = 0, .external_lex_state = 20},
  [288] = {.lex_state = 0, .external_lex_state = 10},
  [289] = {.lex_state = 0, .external_lex_state = 10},
  [290] = {.lex_state = 0, .external_lex_state = 10},
  [291] = {.lex_state = 0, .external_lex_state = 10},
  [292] = {.lex_state = 0, .external_lex_state = 10},
  [293] = {.lex_state = 0, .external_lex_state = 10},
  [294] = {.lex_state = 0, .external_lex_state = 10},
  [295] = {.lex_state = 0, .external_lex_state = 10},
  [296] = {.lex_state = 0, .external_lex_state = 10},
  [297] = {.lex_state = 0, .external_lex_state = 10},
  [298] = {.lex_state = 0, .external_lex_state = 10},
  [299] = {.lex_state = 0, .external_lex_state = 10},
  [300] = {.lex_state = 0, .external_lex_state = 10},
  [301] = {.lex_state = 0, .external_lex_state = 10},
  [302] = {.lex_state = 0, .external_lex_state = 10},
  [303] = {.lex_state = 0, .external_lex_state = 10},
  [304] = {.lex_state = 0, .external_lex_state = 16},
  [305] = {.lex_state = 0, .external_lex_state = 16},
  [306] = {.lex_state = 0, .external_lex_state = 16},
  [307] = {.lex_state = 0, .external_lex_state = 16},
  [308] = {.lex_state = 0, .external_lex_state = 16},
  [309] = {.lex_state = 0, .external_lex_state = 16},
  [310] = {.lex_state = 0, .external_lex_state = 23},
  [311] = {.lex_state = 0, .external_lex_state = 8},
  [312] = {.lex_state = 0, .external_lex_state = 8},
  [313] = {.lex_state = 0, .external_lex_state = 8},
  [314] = {.lex_state = 0, .external_lex_state = 8},
  [315] = {.lex_state = 0, .external_lex_state = 8},
  [316] = {.lex_state = 0, .external_lex_state = 8},
  [317] = {.lex_state = 0, .external_lex_state = 16},
  [318] = {.lex_state = 0, .external_lex_state = 10},
  [319] = {.lex_state = 0, .external_lex_state = 16},
  [320] = {.lex_state = 0, .external_lex_state = 10},
  [321] = {.lex_state = 0, .external_lex_state = 10},
  [322] = {.lex_state = 0, .external_lex_state = 24},
  [323] = {.lex_state = 0, .external_lex_state = 10},
  [324] = {.lex_state = 0, .external_lex_state = 10},
  [325] = {.lex_state = 15, .external_lex_state = 7},
  [326] = {.lex_state = 0, .external_lex_state = 11},
  [327] = {.lex_state = 0, .external_lex_state = 11},
  [328] = {.lex_state = 0, .external_lex_state = 10},
  [329] = {.lex_state = 0, .external_lex_state = 11},
  [330] = {.lex_state = 0, .external_lex_state = 11},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 14, .external_lex_state = 7},
  [335] = {.lex_state = 0, .external_lex_state = 11},
  [336] = {.lex_state = 0, .external_lex_state = 11},
  [337] = {.lex_state = 0, .external_lex_state = 10},
  [338] = {.lex_state = 0, .external_lex_state = 10},
  [339] = {.lex_state = 0, .external_lex_state = 10},
  [340] = {.lex_state = 0, .external_lex_state = 10},
  [341] = {.lex_state = 0, .external_lex_state = 10},
  [342] = {.lex_state = 0, .external_lex_state = 10},
  [343] = {.lex_state = 0, .external_lex_state = 8},
  [344] = {.lex_state = 0, .external_lex_state = 8},
  [345] = {.lex_state = 0, .external_lex_state = 10},
  [346] = {.lex_state = 0, .external_lex_state = 10},
  [347] = {.lex_state = 14, .external_lex_state = 7},
  [348] = {.lex_state = 0, .external_lex_state = 22},
  [349] = {.lex_state = 0, .external_lex_state = 22},
  [350] = {.lex_state = 0, .external_lex_state = 24},
  [351] = {.lex_state = 0, .external_lex_state = 23},
  [352] = {.lex_state = 0, .external_lex_state = 20},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 21},
  [356] = {.lex_state = 0, .external_lex_state = 20},
  [357] = {.lex_state = 0, .external_lex_state = 8},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 8},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 17},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 0, .external_lex_state = 24},
  [364] = {.lex_state = 5, .external_lex_state = 7},
  [365] = {.lex_state = 0, .external_lex_state = 20},
  [366] = {.lex_state = 17},
  [367] = {.lex_state = 0, .external_lex_state = 20},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 14, .external_lex_state = 7},
  [370] = {.lex_state = 0, .external_lex_state = 21},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 5, .external_lex_state = 7},
  [374] = {.lex_state = 0, .external_lex_state = 20},
  [375] = {.lex_state = 19},
  [376] = {.lex_state = 0, .external_lex_state = 24},
  [377] = {.lex_state = 0, .external_lex_state = 23},
  [378] = {.lex_state = 0, .external_lex_state = 23},
  [379] = {.lex_state = 17},
  [380] = {.lex_state = 5, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 22},
  [382] = {.lex_state = 17},
  [383] = {.lex_state = 0, .external_lex_state = 23},
  [384] = {.lex_state = 0, .external_lex_state = 10},
  [385] = {.lex_state = 0, .external_lex_state = 18},
  [386] = {.lex_state = 14, .external_lex_state = 7},
  [387] = {.lex_state = 0, .external_lex_state = 23},
  [388] = {.lex_state = 0, .external_lex_state = 22},
  [389] = {.lex_state = 0, .external_lex_state = 18},
  [390] = {.lex_state = 0, .external_lex_state = 22},
  [391] = {.lex_state = 0, .external_lex_state = 23},
  [392] = {.lex_state = 0, .external_lex_state = 23},
  [393] = {.lex_state = 0, .external_lex_state = 23},
  [394] = {.lex_state = 0, .external_lex_state = 23},
  [395] = {.lex_state = 0, .external_lex_state = 23},
  [396] = {.lex_state = 0, .external_lex_state = 22},
  [397] = {.lex_state = 17},
  [398] = {.lex_state = 17},
  [399] = {.lex_state = 0, .external_lex_state = 23},
  [400] = {.lex_state = 0, .external_lex_state = 23},
  [401] = {.lex_state = 0, .external_lex_state = 14},
  [402] = {.lex_state = 0, .external_lex_state = 22},
  [403] = {.lex_state = 0, .external_lex_state = 22},
  [404] = {.lex_state = 0, .external_lex_state = 23},
  [405] = {.lex_state = 0, .external_lex_state = 22},
  [406] = {.lex_state = 0, .external_lex_state = 22},
  [407] = {.lex_state = 0, .external_lex_state = 14},
  [408] = {.lex_state = 0, .external_lex_state = 23},
  [409] = {.lex_state = 1, .external_lex_state = 7},
  [410] = {.lex_state = 1, .external_lex_state = 7},
  [411] = {.lex_state = 1, .external_lex_state = 7},
  [412] = {.lex_state = 1, .external_lex_state = 25},
  [413] = {.lex_state = 0, .external_lex_state = 24},
  [414] = {.lex_state = 15, .external_lex_state = 7},
  [415] = {.lex_state = 0, .external_lex_state = 23},
  [416] = {.lex_state = 0, .external_lex_state = 10},
  [417] = {.lex_state = 0, .external_lex_state = 21},
  [418] = {.lex_state = 0, .external_lex_state = 10},
  [419] = {.lex_state = 0, .external_lex_state = 10},
  [420] = {.lex_state = 0, .external_lex_state = 10},
  [421] = {.lex_state = 0, .external_lex_state = 23},
  [422] = {.lex_state = 17},
  [423] = {.lex_state = 5, .external_lex_state = 7},
  [424] = {.lex_state = 0, .external_lex_state = 10},
  [425] = {.lex_state = 0, .external_lex_state = 10},
  [426] = {.lex_state = 0, .external_lex_state = 10},
  [427] = {.lex_state = 0, .external_lex_state = 20},
  [428] = {.lex_state = 0, .external_lex_state = 20},
  [429] = {.lex_state = 0, .external_lex_state = 20},
  [430] = {.lex_state = 0, .external_lex_state = 10},
  [431] = {.lex_state = 0, .external_lex_state = 11},
  [432] = {.lex_state = 0, .external_lex_state = 12},
  [433] = {.lex_state = 0, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 12},
  [435] = {.lex_state = 0, .external_lex_state = 12},
  [436] = {.lex_state = 0, .external_lex_state = 12},
  [437] = {.lex_state = 0, .external_lex_state = 12},
  [438] = {.lex_state = 0, .external_lex_state = 12},
  [439] = {.lex_state = 0, .external_lex_state = 12},
  [440] = {.lex_state = 0, .external_lex_state = 12},
  [441] = {.lex_state = 0, .external_lex_state = 12},
  [442] = {.lex_state = 0, .external_lex_state = 12},
  [443] = {.lex_state = 0, .external_lex_state = 12},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 12},
  [446] = {.lex_state = 0, .external_lex_state = 12},
  [447] = {.lex_state = 0, .external_lex_state = 12},
  [448] = {.lex_state = 0, .external_lex_state = 12},
  [449] = {.lex_state = 0, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 2},
  [453] = {.lex_state = 1, .external_lex_state = 7},
  [454] = {.lex_state = 1, .external_lex_state = 7},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 12},
  [458] = {.lex_state = 0, .external_lex_state = 12},
  [459] = {.lex_state = 0, .external_lex_state = 12},
  [460] = {.lex_state = 0, .external_lex_state = 12},
  [461] = {.lex_state = 0, .external_lex_state = 12},
  [462] = {.lex_state = 0, .external_lex_state = 12},
  [463] = {.lex_state = 0, .external_lex_state = 12},
  [464] = {.lex_state = 0, .external_lex_state = 12},
  [465] = {.lex_state = 0, .external_lex_state = 12},
  [466] = {.lex_state = 0, .external_lex_state = 12},
  [467] = {.lex_state = 0, .external_lex_state = 26},
  [468] = {.lex_state = 0, .external_lex_state = 12},
  [469] = {.lex_state = 0, .external_lex_state = 12},
  [470] = {.lex_state = 0, .external_lex_state = 12},
  [471] = {.lex_state = 0, .external_lex_state = 12},
  [472] = {.lex_state = 0, .external_lex_state = 12},
  [473] = {.lex_state = 0, .external_lex_state = 12},
  [474] = {.lex_state = 0, .external_lex_state = 12},
  [475] = {.lex_state = 0, .external_lex_state = 12},
  [476] = {.lex_state = 0, .external_lex_state = 12},
  [477] = {.lex_state = 0, .external_lex_state = 27},
  [478] = {.lex_state = 1, .external_lex_state = 7},
  [479] = {.lex_state = 1, .external_lex_state = 7},
  [480] = {.lex_state = 0, .external_lex_state = 12},
  [481] = {.lex_state = 0, .external_lex_state = 12},
  [482] = {.lex_state = 0, .external_lex_state = 12},
  [483] = {.lex_state = 14, .external_lex_state = 7},
  [484] = {.lex_state = 0, .external_lex_state = 12},
  [485] = {.lex_state = 14, .external_lex_state = 7},
  [486] = {.lex_state = 14, .external_lex_state = 7},
  [487] = {.lex_state = 14, .external_lex_state = 7},
  [488] = {.lex_state = 0, .external_lex_state = 12},
  [489] = {.lex_state = 0, .external_lex_state = 26},
  [490] = {.lex_state = 0, .external_lex_state = 19},
  [491] = {.lex_state = 0, .external_lex_state = 12},
  [492] = {.lex_state = 0, .external_lex_state = 12},
  [493] = {.lex_state = 0, .external_lex_state = 12},
  [494] = {.lex_state = 0, .external_lex_state = 12},
  [495] = {.lex_state = 0, .external_lex_state = 12},
  [496] = {.lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 12},
  [498] = {.lex_state = 0, .external_lex_state = 12},
  [499] = {.lex_state = 0, .external_lex_state = 12},
  [500] = {.lex_state = 0, .external_lex_state = 12},
  [501] = {.lex_state = 0, .external_lex_state = 12},
  [502] = {.lex_state = 0, .external_lex_state = 12},
  [503] = {.lex_state = 0, .external_lex_state = 12},
  [504] = {.lex_state = 0, .external_lex_state = 19},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 17},
  [507] = {.lex_state = 0, .external_lex_state = 12},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 12},
  [510] = {.lex_state = 0, .external_lex_state = 12},
  [511] = {.lex_state = 0, .external_lex_state = 12},
  [512] = {.lex_state = 0, .external_lex_state = 12},
  [513] = {.lex_state = 0, .external_lex_state = 12},
  [514] = {.lex_state = 0, .external_lex_state = 12},
  [515] = {.lex_state = 0, .external_lex_state = 19},
  [516] = {.lex_state = 0, .external_lex_state = 19},
  [517] = {.lex_state = 0, .external_lex_state = 12},
  [518] = {.lex_state = 0, .external_lex_state = 12},
  [519] = {.lex_state = 0, .external_lex_state = 12},
  [520] = {.lex_state = 0, .external_lex_state = 12},
  [521] = {.lex_state = 0, .external_lex_state = 19},
  [522] = {.lex_state = 0, .external_lex_state = 12},
  [523] = {.lex_state = 0, .external_lex_state = 12},
  [524] = {.lex_state = 0, .external_lex_state = 12},
  [525] = {.lex_state = 0, .external_lex_state = 12},
  [526] = {.lex_state = 0, .external_lex_state = 12},
  [527] = {.lex_state = 0, .external_lex_state = 12},
  [528] = {.lex_state = 0, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 12},
  [530] = {.lex_state = 0, .external_lex_state = 12},
  [531] = {.lex_state = 0, .external_lex_state = 12},
  [532] = {.lex_state = 0, .external_lex_state = 12},
  [533] = {.lex_state = 0, .external_lex_state = 12},
  [534] = {.lex_state = 0, .external_lex_state = 12},
  [535] = {.lex_state = 0, .external_lex_state = 12},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 12},
  [538] = {.lex_state = 0, .external_lex_state = 12},
  [539] = {.lex_state = 0, .external_lex_state = 12},
  [540] = {.lex_state = 1},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 26},
  [543] = {.lex_state = 0, .external_lex_state = 12},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 2},
  [546] = {.lex_state = 0, .external_lex_state = 2},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 7, .external_lex_state = 7},
  [550] = {.lex_state = 14, .external_lex_state = 7},
  [551] = {.lex_state = 0, .external_lex_state = 12},
  [552] = {.lex_state = 7, .external_lex_state = 7},
  [553] = {.lex_state = 14, .external_lex_state = 7},
  [554] = {.lex_state = 1},
  [555] = {.lex_state = 0, .external_lex_state = 2},
  [556] = {.lex_state = 0, .external_lex_state = 7},
  [557] = {.lex_state = 0, .external_lex_state = 7},
  [558] = {.lex_state = 0, .external_lex_state = 27},
  [559] = {.lex_state = 0, .external_lex_state = 7},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 0, .external_lex_state = 7},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 0, .external_lex_state = 15},
  [565] = {.lex_state = 0, .external_lex_state = 15},
  [566] = {.lex_state = 13, .external_lex_state = 7},
  [567] = {.lex_state = 0, .external_lex_state = 28},
  [568] = {.lex_state = 0, .external_lex_state = 2},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 7, .external_lex_state = 7},
  [572] = {.lex_state = 16, .external_lex_state = 7},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 0, .external_lex_state = 2},
  [575] = {.lex_state = 1},
  [576] = {.lex_state = 0, .external_lex_state = 12},
  [577] = {.lex_state = 0, .external_lex_state = 12},
  [578] = {.lex_state = 0, .external_lex_state = 12},
  [579] = {.lex_state = 0, .external_lex_state = 12},
  [580] = {.lex_state = 0, .external_lex_state = 12},
  [581] = {.lex_state = 14, .external_lex_state = 7},
  [582] = {.lex_state = 0, .external_lex_state = 2},
  [583] = {.lex_state = 1},
  [584] = {.lex_state = 1},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 12},
  [588] = {.lex_state = 1},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 12},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 12},
  [596] = {.lex_state = 0, .external_lex_state = 12},
  [597] = {.lex_state = 0, .external_lex_state = 7},
  [598] = {.lex_state = 0, .external_lex_state = 12},
  [599] = {.lex_state = 75},
  [600] = {.lex_state = 75},
  [601] = {.lex_state = 18},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 0, .external_lex_state = 2},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 2},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 5, .external_lex_state = 7},
  [612] = {.lex_state = 0, .external_lex_state = 12},
  [613] = {.lex_state = 0, .external_lex_state = 12},
  [614] = {.lex_state = 0, .external_lex_state = 12},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 12},
  [617] = {.lex_state = 0, .external_lex_state = 12},
  [618] = {.lex_state = 0, .external_lex_state = 12},
  [619] = {.lex_state = 0, .external_lex_state = 12},
  [620] = {.lex_state = 0, .external_lex_state = 12},
  [621] = {.lex_state = 0, .external_lex_state = 12},
  [622] = {.lex_state = 0, .external_lex_state = 12},
  [623] = {.lex_state = 0, .external_lex_state = 12},
  [624] = {.lex_state = 0, .external_lex_state = 2},
  [625] = {.lex_state = 0, .external_lex_state = 15},
  [626] = {.lex_state = 0, .external_lex_state = 15},
  [627] = {.lex_state = 0, .external_lex_state = 15},
  [628] = {.lex_state = 0, .external_lex_state = 15},
  [629] = {.lex_state = 0, .external_lex_state = 15},
  [630] = {.lex_state = 0, .external_lex_state = 15},
  [631] = {.lex_state = 0, .external_lex_state = 15},
  [632] = {.lex_state = 0, .external_lex_state = 15},
  [633] = {.lex_state = 0, .external_lex_state = 2},
  [634] = {.lex_state = 0, .external_lex_state = 2},
  [635] = {.lex_state = 0, .external_lex_state = 2},
  [636] = {.lex_state = 0, .external_lex_state = 26},
  [637] = {.lex_state = 0, .external_lex_state = 12},
  [638] = {.lex_state = 0, .external_lex_state = 2},
  [639] = {.lex_state = 0, .external_lex_state = 28},
  [640] = {.lex_state = 0, .external_lex_state = 2},
  [641] = {.lex_state = 0, .external_lex_state = 2},
  [642] = {.lex_state = 0, .external_lex_state = 12},
  [643] = {.lex_state = 1},
  [644] = {.lex_state = 1, .external_lex_state = 7},
  [645] = {.lex_state = 14, .external_lex_state = 7},
  [646] = {.lex_state = 0, .external_lex_state = 12},
  [647] = {.lex_state = 1},
  [648] = {.lex_state = 0, .external_lex_state = 12},
  [649] = {.lex_state = 0, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 12},
  [651] = {.lex_state = 0, .external_lex_state = 12},
  [652] = {.lex_state = 0, .external_lex_state = 12},
  [653] = {.lex_state = 1, .external_lex_state = 7},
  [654] = {.lex_state = 0, .external_lex_state = 2},
  [655] = {.lex_state = 14, .external_lex_state = 7},
  [656] = {.lex_state = 14, .external_lex_state = 7},
  [657] = {.lex_state = 0, .external_lex_state = 2},
  [658] = {.lex_state = 0, .external_lex_state = 12},
  [659] = {.lex_state = 1, .external_lex_state = 25},
  [660] = {.lex_state = 0, .external_lex_state = 12},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 14, .external_lex_state = 7},
  [665] = {.lex_state = 14, .external_lex_state = 7},
  [666] = {.lex_state = 14, .external_lex_state = 7},
  [667] = {.lex_state = 14, .external_lex_state = 7},
  [668] = {.lex_state = 17},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 2},
  [672] = {.lex_state = 0, .external_lex_state = 2},
  [673] = {.lex_state = 0, .external_lex_state = 28},
  [674] = {.lex_state = 0, .external_lex_state = 28},
  [675] = {.lex_state = 1},
  [676] = {.lex_state = 0, .external_lex_state = 12},
  [677] = {.lex_state = 0, .external_lex_state = 12},
  [678] = {.lex_state = 0, .external_lex_state = 26},
  [679] = {.lex_state = 0, .external_lex_state = 26},
  [680] = {.lex_state = 1, .external_lex_state = 7},
  [681] = {.lex_state = 1, .external_lex_state = 7},
  [682] = {.lex_state = 7, .external_lex_state = 7},
  [683] = {.lex_state = 16, .external_lex_state = 7},
  [684] = {.lex_state = 75},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 18},
  [687] = {.lex_state = 0, .external_lex_state = 2},
  [688] = {.lex_state = 0, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 12},
  [690] = {.lex_state = 0, .external_lex_state = 12},
  [691] = {.lex_state = 0, .external_lex_state = 26},
  [692] = {.lex_state = 0, .external_lex_state = 26},
  [693] = {.lex_state = 0, .external_lex_state = 26},
  [694] = {.lex_state = 0, .external_lex_state = 26},
  [695] = {.lex_state = 1},
  [696] = {.lex_state = 0, .external_lex_state = 12},
  [697] = {.lex_state = 0, .external_lex_state = 12},
  [698] = {.lex_state = 0, .external_lex_state = 12},
  [699] = {.lex_state = 14, .external_lex_state = 7},
  [700] = {.lex_state = 14, .external_lex_state = 7},
  [701] = {.lex_state = 0, .external_lex_state = 2},
  [702] = {.lex_state = 0, .external_lex_state = 12},
  [703] = {.lex_state = 1},
  [704] = {.lex_state = 1, .external_lex_state = 7},
  [705] = {.lex_state = 45},
  [706] = {.lex_state = 0, .external_lex_state = 7},
  [707] = {.lex_state = 1},
  [708] = {.lex_state = 0, .external_lex_state = 7},
  [709] = {.lex_state = 0, .external_lex_state = 7},
  [710] = {.lex_state = 0, .external_lex_state = 7},
  [711] = {.lex_state = 0, .external_lex_state = 29},
  [712] = {.lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 7},
  [714] = {.lex_state = 1},
  [715] = {.lex_state = 0, .external_lex_state = 7},
  [716] = {.lex_state = 0, .external_lex_state = 7},
  [717] = {.lex_state = 0, .external_lex_state = 7},
  [718] = {.lex_state = 0, .external_lex_state = 7},
  [719] = {.lex_state = 0, .external_lex_state = 7},
  [720] = {.lex_state = 17},
  [721] = {.lex_state = 0, .external_lex_state = 30},
  [722] = {.lex_state = 0, .external_lex_state = 7},
  [723] = {.lex_state = 0, .external_lex_state = 7},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 0, .external_lex_state = 23},
  [726] = {.lex_state = 1},
  [727] = {.lex_state = 17},
  [728] = {.lex_state = 0, .external_lex_state = 7},
  [729] = {.lex_state = 0, .external_lex_state = 7},
  [730] = {.lex_state = 0, .external_lex_state = 7},
  [731] = {.lex_state = 0, .external_lex_state = 29},
  [732] = {.lex_state = 0, .external_lex_state = 7},
  [733] = {.lex_state = 0, .external_lex_state = 7},
  [734] = {.lex_state = 0, .external_lex_state = 7},
  [735] = {.lex_state = 0, .external_lex_state = 7},
  [736] = {.lex_state = 0, .external_lex_state = 28},
  [737] = {.lex_state = 0, .external_lex_state = 23},
  [738] = {.lex_state = 0, .external_lex_state = 23},
  [739] = {.lex_state = 0, .external_lex_state = 23},
  [740] = {.lex_state = 0, .external_lex_state = 7},
  [741] = {.lex_state = 0, .external_lex_state = 23},
  [742] = {.lex_state = 0, .external_lex_state = 23},
  [743] = {.lex_state = 0, .external_lex_state = 2},
  [744] = {.lex_state = 0, .external_lex_state = 7},
  [745] = {.lex_state = 0, .external_lex_state = 7},
  [746] = {.lex_state = 0, .external_lex_state = 7},
  [747] = {.lex_state = 0, .external_lex_state = 7},
  [748] = {.lex_state = 0, .external_lex_state = 7},
  [749] = {.lex_state = 0, .external_lex_state = 23},
  [750] = {.lex_state = 0, .external_lex_state = 23},
  [751] = {.lex_state = 17},
  [752] = {.lex_state = 0, .external_lex_state = 7},
  [753] = {.lex_state = 0, .external_lex_state = 7},
  [754] = {.lex_state = 0, .external_lex_state = 30},
  [755] = {.lex_state = 1},
  [756] = {.lex_state = 5, .external_lex_state = 7},
  [757] = {.lex_state = 0, .external_lex_state = 7},
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
  [770] = {.lex_state = 0, .external_lex_state = 24},
  [771] = {.lex_state = 0, .external_lex_state = 24},
  [772] = {.lex_state = 0, .external_lex_state = 24},
  [773] = {.lex_state = 0, .external_lex_state = 24},
  [774] = {.lex_state = 0, .external_lex_state = 24},
  [775] = {.lex_state = 0, .external_lex_state = 24},
  [776] = {.lex_state = 0, .external_lex_state = 7},
  [777] = {.lex_state = 1},
  [778] = {.lex_state = 17},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 0, .external_lex_state = 7},
  [781] = {.lex_state = 0, .external_lex_state = 28},
  [782] = {.lex_state = 0, .external_lex_state = 7},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 0, .external_lex_state = 20},
  [787] = {.lex_state = 0, .external_lex_state = 20},
  [788] = {.lex_state = 0, .external_lex_state = 20},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 1, .external_lex_state = 7},
  [794] = {.lex_state = 17},
  [795] = {.lex_state = 0, .external_lex_state = 20},
  [796] = {.lex_state = 0, .external_lex_state = 7},
  [797] = {.lex_state = 0, .external_lex_state = 20},
  [798] = {.lex_state = 1},
  [799] = {.lex_state = 0, .external_lex_state = 7},
  [800] = {.lex_state = 0, .external_lex_state = 20},
  [801] = {.lex_state = 0, .external_lex_state = 7},
  [802] = {.lex_state = 0, .external_lex_state = 7},
  [803] = {.lex_state = 0, .external_lex_state = 7},
  [804] = {.lex_state = 1, .external_lex_state = 7},
  [805] = {.lex_state = 1},
  [806] = {.lex_state = 0, .external_lex_state = 7},
  [807] = {.lex_state = 0, .external_lex_state = 7},
  [808] = {.lex_state = 0, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 7},
  [810] = {.lex_state = 0, .external_lex_state = 7},
  [811] = {.lex_state = 0, .external_lex_state = 7},
  [812] = {.lex_state = 5, .external_lex_state = 7},
  [813] = {.lex_state = 1, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 7},
  [815] = {.lex_state = 0, .external_lex_state = 7},
  [816] = {.lex_state = 1},
  [817] = {.lex_state = 1, .external_lex_state = 7},
  [818] = {.lex_state = 0, .external_lex_state = 7},
  [819] = {.lex_state = 0, .external_lex_state = 7},
  [820] = {.lex_state = 0, .external_lex_state = 7},
  [821] = {.lex_state = 1},
  [822] = {.lex_state = 0, .external_lex_state = 20},
  [823] = {.lex_state = 1},
  [824] = {.lex_state = 0, .external_lex_state = 7},
  [825] = {.lex_state = 0, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 7},
  [827] = {.lex_state = 0, .external_lex_state = 7},
  [828] = {.lex_state = 1},
  [829] = {.lex_state = 1},
  [830] = {.lex_state = 1, .external_lex_state = 7},
  [831] = {.lex_state = 0, .external_lex_state = 7},
  [832] = {.lex_state = 0, .external_lex_state = 7},
  [833] = {.lex_state = 1, .external_lex_state = 7},
  [834] = {.lex_state = 1, .external_lex_state = 7},
  [835] = {.lex_state = 0, .external_lex_state = 7},
  [836] = {.lex_state = 0, .external_lex_state = 29},
  [837] = {.lex_state = 0, .external_lex_state = 7},
  [838] = {.lex_state = 0, .external_lex_state = 7},
  [839] = {.lex_state = 0, .external_lex_state = 7},
  [840] = {.lex_state = 0, .external_lex_state = 7},
  [841] = {.lex_state = 0, .external_lex_state = 7},
  [842] = {.lex_state = 0, .external_lex_state = 7},
  [843] = {.lex_state = 1},
  [844] = {.lex_state = 0, .external_lex_state = 29},
  [845] = {.lex_state = 0, .external_lex_state = 7},
  [846] = {.lex_state = 14, .external_lex_state = 7},
  [847] = {.lex_state = 1, .external_lex_state = 7},
  [848] = {.lex_state = 0, .external_lex_state = 7},
  [849] = {.lex_state = 0, .external_lex_state = 7},
  [850] = {.lex_state = 0, .external_lex_state = 7},
  [851] = {.lex_state = 0, .external_lex_state = 7},
  [852] = {.lex_state = 0, .external_lex_state = 7},
  [853] = {.lex_state = 1, .external_lex_state = 7},
  [854] = {.lex_state = 0, .external_lex_state = 7},
  [855] = {.lex_state = 18},
  [856] = {.lex_state = 0, .external_lex_state = 7},
  [857] = {.lex_state = 1, .external_lex_state = 25},
  [858] = {.lex_state = 0, .external_lex_state = 22},
  [859] = {.lex_state = 1},
  [860] = {.lex_state = 0, .external_lex_state = 7},
  [861] = {.lex_state = 0, .external_lex_state = 7},
  [862] = {.lex_state = 0, .external_lex_state = 7},
  [863] = {.lex_state = 0, .external_lex_state = 7},
  [864] = {.lex_state = 14, .external_lex_state = 7},
  [865] = {.lex_state = 14, .external_lex_state = 7},
  [866] = {.lex_state = 14, .external_lex_state = 7},
  [867] = {.lex_state = 1},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 0, .external_lex_state = 28},
  [870] = {.lex_state = 0, .external_lex_state = 7},
  [871] = {.lex_state = 0, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 7},
  [873] = {.lex_state = 1},
  [874] = {.lex_state = 0, .external_lex_state = 28},
  [875] = {.lex_state = 0, .external_lex_state = 28},
  [876] = {.lex_state = 0, .external_lex_state = 7},
  [877] = {.lex_state = 0, .external_lex_state = 7},
  [878] = {.lex_state = 0, .external_lex_state = 20},
  [879] = {.lex_state = 1},
  [880] = {.lex_state = 293, .external_lex_state = 31},
  [881] = {.lex_state = 294},
  [882] = {.lex_state = 19},
  [883] = {.lex_state = 0, .external_lex_state = 3},
  [884] = {.lex_state = 1},
  [885] = {.lex_state = 45},
  [886] = {.lex_state = 1},
  [887] = {.lex_state = 294},
  [888] = {.lex_state = 0, .external_lex_state = 7},
  [889] = {.lex_state = 0, .external_lex_state = 7},
  [890] = {.lex_state = 294},
  [891] = {.lex_state = 0, .external_lex_state = 32},
  [892] = {.lex_state = 294},
  [893] = {.lex_state = 0, .external_lex_state = 28},
  [894] = {.lex_state = 5},
  [895] = {.lex_state = 1},
  [896] = {.lex_state = 19},
  [897] = {.lex_state = 294},
  [898] = {.lex_state = 293, .external_lex_state = 31},
  [899] = {.lex_state = 1},
  [900] = {.lex_state = 1},
  [901] = {.lex_state = 1},
  [902] = {.lex_state = 0, .external_lex_state = 7},
  [903] = {.lex_state = 1},
  [904] = {.lex_state = 0, .external_lex_state = 32},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 1},
  [907] = {.lex_state = 1},
  [908] = {.lex_state = 1},
  [909] = {.lex_state = 1},
  [910] = {.lex_state = 0, .external_lex_state = 3},
  [911] = {.lex_state = 1},
  [912] = {.lex_state = 17},
  [913] = {.lex_state = 0, .external_lex_state = 32},
  [914] = {.lex_state = 1},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 0, .external_lex_state = 33},
  [917] = {.lex_state = 1},
  [918] = {.lex_state = 0, .external_lex_state = 33},
  [919] = {.lex_state = 19},
  [920] = {.lex_state = 295},
  [921] = {.lex_state = 1},
  [922] = {.lex_state = 293, .external_lex_state = 31},
  [923] = {.lex_state = 293, .external_lex_state = 31},
  [924] = {.lex_state = 293, .external_lex_state = 31},
  [925] = {.lex_state = 0, .external_lex_state = 30},
  [926] = {.lex_state = 295},
  [927] = {.lex_state = 293, .external_lex_state = 31},
  [928] = {.lex_state = 293, .external_lex_state = 31},
  [929] = {.lex_state = 0, .external_lex_state = 7},
  [930] = {.lex_state = 17},
  [931] = {.lex_state = 293, .external_lex_state = 31},
  [932] = {.lex_state = 293, .external_lex_state = 31},
  [933] = {.lex_state = 293, .external_lex_state = 31},
  [934] = {.lex_state = 293, .external_lex_state = 31},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 293, .external_lex_state = 31},
  [937] = {.lex_state = 293, .external_lex_state = 31},
  [938] = {.lex_state = 1},
  [939] = {.lex_state = 293, .external_lex_state = 31},
  [940] = {.lex_state = 293, .external_lex_state = 31},
  [941] = {.lex_state = 17},
  [942] = {.lex_state = 293, .external_lex_state = 31},
  [943] = {.lex_state = 293, .external_lex_state = 31},
  [944] = {.lex_state = 0, .external_lex_state = 7},
  [945] = {.lex_state = 293, .external_lex_state = 31},
  [946] = {.lex_state = 293, .external_lex_state = 31},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 0, .external_lex_state = 6},
  [949] = {.lex_state = 1},
  [950] = {.lex_state = 0, .external_lex_state = 7},
  [951] = {.lex_state = 45},
  [952] = {.lex_state = 294},
  [953] = {.lex_state = 0, .external_lex_state = 30},
  [954] = {.lex_state = 17},
  [955] = {.lex_state = 1},
  [956] = {.lex_state = 1},
  [957] = {.lex_state = 17},
  [958] = {.lex_state = 1},
  [959] = {.lex_state = 0, .external_lex_state = 7},
  [960] = {.lex_state = 0, .external_lex_state = 33},
  [961] = {.lex_state = 0, .external_lex_state = 33},
  [962] = {.lex_state = 1},
  [963] = {.lex_state = 0, .external_lex_state = 28},
  [964] = {.lex_state = 1},
  [965] = {.lex_state = 0, .external_lex_state = 32},
  [966] = {.lex_state = 1},
  [967] = {.lex_state = 1},
  [968] = {.lex_state = 1},
  [969] = {.lex_state = 1},
  [970] = {.lex_state = 1},
  [971] = {.lex_state = 1},
  [972] = {.lex_state = 1},
  [973] = {.lex_state = 1},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 1},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 1},
  [978] = {.lex_state = 1},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 293, .external_lex_state = 31},
  [981] = {.lex_state = 0, .external_lex_state = 7},
  [982] = {.lex_state = 1},
  [983] = {.lex_state = 0, .external_lex_state = 34},
  [984] = {.lex_state = 0, .external_lex_state = 34},
  [985] = {.lex_state = 0, .external_lex_state = 34},
  [986] = {.lex_state = 0, .external_lex_state = 34},
  [987] = {.lex_state = 1},
  [988] = {.lex_state = 0, .external_lex_state = 34},
  [989] = {.lex_state = 0, .external_lex_state = 34},
  [990] = {.lex_state = 0, .external_lex_state = 34},
  [991] = {.lex_state = 45},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 0, .external_lex_state = 31},
  [994] = {.lex_state = 0, .external_lex_state = 31},
  [995] = {.lex_state = 0, .external_lex_state = 31},
  [996] = {.lex_state = 0, .external_lex_state = 7},
  [997] = {.lex_state = 1},
  [998] = {.lex_state = 1},
  [999] = {.lex_state = 1},
  [1000] = {.lex_state = 1},
  [1001] = {.lex_state = 296},
  [1002] = {.lex_state = 296},
  [1003] = {.lex_state = 1},
  [1004] = {.lex_state = 0, .external_lex_state = 31},
  [1005] = {.lex_state = 0, .external_lex_state = 31},
  [1006] = {.lex_state = 0, .external_lex_state = 31},
  [1007] = {.lex_state = 0, .external_lex_state = 7},
  [1008] = {.lex_state = 0, .external_lex_state = 34},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 0, .external_lex_state = 7},
  [1011] = {.lex_state = 0, .external_lex_state = 31},
  [1012] = {.lex_state = 0, .external_lex_state = 34},
  [1013] = {.lex_state = 0, .external_lex_state = 34},
  [1014] = {.lex_state = 0, .external_lex_state = 34},
  [1015] = {.lex_state = 0, .external_lex_state = 31},
  [1016] = {.lex_state = 0, .external_lex_state = 31},
  [1017] = {.lex_state = 0, .external_lex_state = 31},
  [1018] = {.lex_state = 0, .external_lex_state = 7},
  [1019] = {.lex_state = 1},
  [1020] = {.lex_state = 1},
  [1021] = {.lex_state = 45},
  [1022] = {.lex_state = 0, .external_lex_state = 31},
  [1023] = {.lex_state = 0, .external_lex_state = 31},
  [1024] = {.lex_state = 0, .external_lex_state = 31},
  [1025] = {.lex_state = 0, .external_lex_state = 7},
  [1026] = {.lex_state = 0, .external_lex_state = 34},
  [1027] = {.lex_state = 0, .external_lex_state = 34},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 0, .external_lex_state = 31},
  [1030] = {.lex_state = 0, .external_lex_state = 31},
  [1031] = {.lex_state = 0, .external_lex_state = 31},
  [1032] = {.lex_state = 0, .external_lex_state = 7},
  [1033] = {.lex_state = 1},
  [1034] = {.lex_state = 19},
  [1035] = {.lex_state = 45},
  [1036] = {.lex_state = 0, .external_lex_state = 31},
  [1037] = {.lex_state = 0, .external_lex_state = 31},
  [1038] = {.lex_state = 0, .external_lex_state = 31},
  [1039] = {.lex_state = 0, .external_lex_state = 7},
  [1040] = {.lex_state = 0, .external_lex_state = 31},
  [1041] = {.lex_state = 1},
  [1042] = {.lex_state = 1},
  [1043] = {.lex_state = 0, .external_lex_state = 31},
  [1044] = {.lex_state = 0, .external_lex_state = 31},
  [1045] = {.lex_state = 0, .external_lex_state = 31},
  [1046] = {.lex_state = 0, .external_lex_state = 7},
  [1047] = {.lex_state = 1},
  [1048] = {.lex_state = 0, .external_lex_state = 34},
  [1049] = {.lex_state = 0, .external_lex_state = 7},
  [1050] = {.lex_state = 0, .external_lex_state = 31},
  [1051] = {.lex_state = 0, .external_lex_state = 31},
  [1052] = {.lex_state = 0, .external_lex_state = 31},
  [1053] = {.lex_state = 0, .external_lex_state = 7},
  [1054] = {.lex_state = 0, .external_lex_state = 7},
  [1055] = {.lex_state = 0, .external_lex_state = 34},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 1},
  [1059] = {.lex_state = 0, .external_lex_state = 34},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 0, .external_lex_state = 7},
  [1062] = {.lex_state = 0, .external_lex_state = 34},
  [1063] = {.lex_state = 0, .external_lex_state = 34},
  [1064] = {.lex_state = 1},
  [1065] = {.lex_state = 293},
  [1066] = {.lex_state = 296},
  [1067] = {.lex_state = 0, .external_lex_state = 34},
  [1068] = {.lex_state = 1},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 1},
  [1072] = {.lex_state = 45},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 0, .external_lex_state = 34},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 1},
  [1078] = {.lex_state = 1},
  [1079] = {.lex_state = 0, .external_lex_state = 34},
  [1080] = {.lex_state = 1},
  [1081] = {.lex_state = 1},
  [1082] = {.lex_state = 1},
  [1083] = {.lex_state = 1},
  [1084] = {.lex_state = 45},
  [1085] = {.lex_state = 0, .external_lex_state = 31},
  [1086] = {.lex_state = 1},
  [1087] = {.lex_state = 0, .external_lex_state = 34},
  [1088] = {.lex_state = 0, .external_lex_state = 34},
  [1089] = {.lex_state = 0, .external_lex_state = 31},
  [1090] = {.lex_state = 1},
  [1091] = {.lex_state = 0, .external_lex_state = 7},
  [1092] = {.lex_state = 0, .external_lex_state = 34},
  [1093] = {.lex_state = 0, .external_lex_state = 7},
  [1094] = {.lex_state = 0, .external_lex_state = 34},
  [1095] = {.lex_state = 1},
  [1096] = {.lex_state = 1},
  [1097] = {.lex_state = 1},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 1},
  [1100] = {.lex_state = 0, .external_lex_state = 7},
  [1101] = {.lex_state = 295},
  [1102] = {.lex_state = 45},
  [1103] = {.lex_state = 1},
  [1104] = {.lex_state = 45},
  [1105] = {.lex_state = 1},
  [1106] = {.lex_state = 1},
  [1107] = {.lex_state = 0, .external_lex_state = 34},
  [1108] = {.lex_state = 1},
  [1109] = {.lex_state = 0, .external_lex_state = 34},
  [1110] = {.lex_state = 1},
  [1111] = {.lex_state = 0, .external_lex_state = 31},
  [1112] = {.lex_state = 31},
  [1113] = {.lex_state = 1},
  [1114] = {.lex_state = 1},
  [1115] = {.lex_state = 1},
  [1116] = {.lex_state = 5},
  [1117] = {.lex_state = 1},
  [1118] = {.lex_state = 1},
  [1119] = {.lex_state = 0, .external_lex_state = 34},
  [1120] = {.lex_state = 1},
  [1121] = {.lex_state = 0, .external_lex_state = 34},
  [1122] = {.lex_state = 0, .external_lex_state = 34},
  [1123] = {.lex_state = 0, .external_lex_state = 31},
  [1124] = {.lex_state = 0, .external_lex_state = 31},
  [1125] = {.lex_state = 0, .external_lex_state = 34},
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
    [sym_source_file] = STATE(1073),
    [sym_item] = STATE(116),
    [sym__trivia] = STATE(116),
    [aux_sym_source_file_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(576),
    [sym__collection_operation] = STATE(576),
    [sym_let_statement] = STATE(576),
    [sym_exec_statement] = STATE(576),
    [sym_spawn_statement] = STATE(576),
    [sym__invalid_exec_binding] = STATE(577),
    [sym__invalid_until_binding] = STATE(578),
    [sym_run_statement] = STATE(576),
    [sym__async_modifier] = STATE(899),
    [sym__run] = STATE(579),
    [sym_await_statement] = STATE(576),
    [sym_implicit_run_statement] = STATE(576),
    [sym__implicit_run_line] = STATE(130),
    [sym_seek_statement] = STATE(576),
    [sym_ask_statement] = STATE(576),
    [sym_generate_statement] = STATE(576),
    [sym_reduce_statement] = STATE(576),
    [sym_map_statement] = STATE(576),
    [sym_keep_statement] = STATE(576),
    [sym_drop_statement] = STATE(576),
    [sym_sort_statement] = STATE(576),
    [sym_repeat_statement] = STATE(576),
    [sym_invalid_flow_reserved_statement] = STATE(576),
    [sym__query_directive_key] = STATE(864),
    [sym__route_directive_key] = STATE(864),
    [sym_directive_key] = STATE(581),
    [sym_role] = STATE(581),
    [sym__flow_reserved_word] = STATE(581),
    [sym__collection_binding_word] = STATE(581),
    [sym__async_await_binding_word] = STATE(581),
    [sym__agic_reserved_word] = STATE(581),
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
    [sym__flow_operation] = STATE(576),
    [sym__collection_operation] = STATE(576),
    [sym_let_statement] = STATE(576),
    [sym_exec_statement] = STATE(576),
    [sym_spawn_statement] = STATE(576),
    [sym__invalid_exec_binding] = STATE(577),
    [sym__invalid_until_binding] = STATE(578),
    [sym_run_statement] = STATE(576),
    [sym__async_modifier] = STATE(899),
    [sym__run] = STATE(579),
    [sym_await_statement] = STATE(576),
    [sym_implicit_run_statement] = STATE(576),
    [sym__implicit_run_line] = STATE(130),
    [sym_seek_statement] = STATE(576),
    [sym_ask_statement] = STATE(576),
    [sym_generate_statement] = STATE(576),
    [sym_reduce_statement] = STATE(576),
    [sym_map_statement] = STATE(576),
    [sym_keep_statement] = STATE(576),
    [sym_drop_statement] = STATE(576),
    [sym_sort_statement] = STATE(576),
    [sym_repeat_statement] = STATE(576),
    [sym_invalid_flow_reserved_statement] = STATE(576),
    [sym__query_directive_key] = STATE(864),
    [sym__route_directive_key] = STATE(864),
    [sym_directive_key] = STATE(581),
    [sym_role] = STATE(581),
    [sym__flow_reserved_word] = STATE(581),
    [sym__collection_binding_word] = STATE(581),
    [sym__async_await_binding_word] = STATE(581),
    [sym__agic_reserved_word] = STATE(581),
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
    [sym__flow_operation] = STATE(416),
    [sym__collection_operation] = STATE(416),
    [sym_let_statement] = STATE(416),
    [sym_exec_statement] = STATE(416),
    [sym_spawn_statement] = STATE(416),
    [sym__invalid_exec_binding] = STATE(418),
    [sym__invalid_until_binding] = STATE(419),
    [sym_run_statement] = STATE(416),
    [sym__async_modifier] = STATE(886),
    [sym__run] = STATE(420),
    [sym_await_statement] = STATE(416),
    [sym_implicit_run_statement] = STATE(416),
    [sym__implicit_run_line] = STATE(84),
    [sym_seek_statement] = STATE(416),
    [sym_ask_statement] = STATE(416),
    [sym_generate_statement] = STATE(416),
    [sym_reduce_statement] = STATE(416),
    [sym_map_statement] = STATE(416),
    [sym_keep_statement] = STATE(416),
    [sym_drop_statement] = STATE(416),
    [sym_sort_statement] = STATE(416),
    [sym_repeat_statement] = STATE(416),
    [sym_invalid_flow_reserved_statement] = STATE(416),
    [sym__query_directive_key] = STATE(864),
    [sym__route_directive_key] = STATE(864),
    [sym_directive_key] = STATE(645),
    [sym_role] = STATE(645),
    [sym__flow_reserved_word] = STATE(645),
    [sym__collection_binding_word] = STATE(645),
    [sym__async_await_binding_word] = STATE(645),
    [sym__agic_reserved_word] = STATE(645),
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
    STATE(420), 1,
      sym__run,
    STATE(886), 1,
      sym__async_modifier,
    STATE(955), 1,
      sym_local_name,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(430), 14,
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
    STATE(579), 1,
      sym__run,
    STATE(899), 1,
      sym__async_modifier,
    STATE(976), 1,
      sym_local_name,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(637), 14,
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
    STATE(459), 1,
      sym_text_inline,
    STATE(461), 1,
      sym__run,
    STATE(535), 1,
      sym_text_block,
    STATE(639), 1,
      sym_line_end,
    STATE(460), 7,
      sym__bound_operation,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [229] = 20,
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
    STATE(246), 1,
      sym_text_inline,
    STATE(248), 1,
      sym__run,
    STATE(318), 1,
      sym_text_block,
    STATE(674), 1,
      sym_line_end,
    STATE(247), 7,
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
    STATE(101), 1,
      sym__unroled_message_line,
    STATE(552), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(551), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(553), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(864), 2,
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
    STATE(101), 1,
      sym__unroled_message_line,
    STATE(552), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(551), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(553), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(864), 2,
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
    STATE(610), 12,
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
    STATE(554), 1,
      sym__query_directive_key,
    STATE(975), 1,
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
    STATE(695), 1,
      sym__query_directive_key,
    STATE(879), 1,
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
  [525] = 6,
    ACTIONS(41), 1,
      sym_flow_generate_keyword,
    ACTIONS(43), 1,
      sym_flow_reduce_keyword,
    ACTIONS(45), 1,
      sym_flow_map_keyword,
    STATE(485), 1,
      sym__collection_binding_word,
    ACTIONS(237), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(484), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [551] = 6,
    ACTIONS(77), 1,
      sym_flow_generate_keyword,
    ACTIONS(79), 1,
      sym_flow_reduce_keyword,
    ACTIONS(81), 1,
      sym_flow_map_keyword,
    STATE(665), 1,
      sym__collection_binding_word,
    ACTIONS(239), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(264), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [577] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_flow_if_keyword,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    STATE(364), 1,
      sym__named_if_complement,
    STATE(650), 1,
      sym__inline_if_complement,
    STATE(652), 1,
      sym__if_complements,
    STATE(798), 1,
      sym__lanes_complement,
    STATE(801), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(245), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [610] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_flow_if_keyword,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    STATE(364), 1,
      sym__named_if_complement,
    STATE(650), 1,
      sym__inline_if_complement,
    STATE(651), 1,
      sym__if_complements,
    STATE(798), 1,
      sym__lanes_complement,
    STATE(799), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(245), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [643] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    ACTIONS(247), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(213), 1,
      sym__if_complements,
    STATE(373), 1,
      sym__named_if_complement,
    STATE(805), 1,
      sym__lanes_complement,
    STATE(807), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(245), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [676] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    ACTIONS(247), 1,
      sym_flow_if_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(212), 1,
      sym__if_complements,
    STATE(373), 1,
      sym__named_if_complement,
    STATE(805), 1,
      sym__lanes_complement,
    STATE(806), 1,
      sym_position,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(245), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [709] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1095), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [733] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1076), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [757] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(999), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [781] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1080), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [805] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1090), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [829] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1020), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [853] = 6,
    ACTIONS(255), 1,
      sym_pascal_name,
    STATE(409), 1,
      sym_base_type,
    STATE(817), 1,
      sym_type_name,
    STATE(842), 1,
      sym_type,
    STATE(813), 2,
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
    STATE(409), 1,
      sym_base_type,
    STATE(802), 1,
      sym_type,
    STATE(817), 1,
      sym_type_name,
    STATE(813), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(253), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [901] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1103), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [925] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(907), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [949] = 10,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(265), 1,
      sym_newline,
    STATE(209), 1,
      sym__runnable_complements,
    STATE(210), 1,
      sym_inline_agic,
    STATE(371), 1,
      sym__lanes_complement,
    STATE(803), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [981] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1000), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1005] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(992), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1029] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1070), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1053] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(906), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1077] = 10,
    ACTIONS(243), 1,
      sym_flow_in_keyword,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(646), 1,
      sym__runnable_complements,
    STATE(648), 1,
      sym_inline_agic,
    STATE(785), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1109] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1078), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1133] = 6,
    ACTIONS(251), 1,
      sym_pascal_name,
    STATE(205), 1,
      sym_base_type,
    STATE(583), 1,
      sym_type_name,
    STATE(1077), 1,
      sym_type,
    STATE(703), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(249), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1157] = 9,
    ACTIONS(271), 1,
      sym_blank_line,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(275), 1,
      sym__dedent,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    STATE(357), 1,
      sym_property,
    STATE(990), 1,
      sym_cap_body,
    STATE(1125), 1,
      sym__cap_text_body,
    STATE(67), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1186] = 9,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(281), 1,
      sym_blank_line,
    ACTIONS(283), 1,
      sym__dedent,
    STATE(357), 1,
      sym_property,
    STATE(1012), 1,
      sym_cap_body,
    STATE(1125), 1,
      sym__cap_text_body,
    STATE(42), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1215] = 9,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(285), 1,
      sym_blank_line,
    ACTIONS(287), 1,
      sym__dedent,
    STATE(357), 1,
      sym_property,
    STATE(1059), 1,
      sym_cap_body,
    STATE(1125), 1,
      sym__cap_text_body,
    STATE(39), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1244] = 9,
    ACTIONS(271), 1,
      sym_blank_line,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(289), 1,
      sym__dedent,
    STATE(357), 1,
      sym_property,
    STATE(1008), 1,
      sym_cap_body,
    STATE(1125), 1,
      sym__cap_text_body,
    STATE(67), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1273] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(291), 1,
      sym_flow_run_keyword,
    STATE(420), 1,
      sym__run,
    STATE(667), 1,
      sym__async_await_binding_word,
    STATE(886), 1,
      sym__async_modifier,
    STATE(264), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1297] = 8,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(293), 1,
      sym_arrow,
    ACTIONS(295), 1,
      sym_colon,
    STATE(149), 1,
      sym__reduce_inline_block,
    STATE(642), 1,
      sym__reduce_inline_line,
    STATE(644), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1323] = 7,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(297), 1,
      sym_blank_line,
    ACTIONS(299), 1,
      sym__dedent,
    STATE(1014), 1,
      sym__cap_text_body,
    STATE(48), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1347] = 7,
    ACTIONS(27), 1,
      sym_flow_async_keyword,
    ACTIONS(29), 1,
      sym_flow_await_keyword,
    ACTIONS(301), 1,
      sym_flow_run_keyword,
    STATE(487), 1,
      sym__async_await_binding_word,
    STATE(579), 1,
      sym__run,
    STATE(899), 1,
      sym__async_modifier,
    STATE(484), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1371] = 9,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(305), 1,
      sym_snake_name,
    ACTIONS(307), 1,
      sym_text_line,
    ACTIONS(309), 1,
      sym_newline,
    STATE(501), 1,
      sym_line_end,
    STATE(614), 1,
      sym_inline_agic,
    STATE(748), 1,
      sym_runnable,
  [1399] = 7,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(311), 1,
      sym_blank_line,
    ACTIONS(313), 1,
      sym__dedent,
    STATE(984), 1,
      sym__cap_text_body,
    STATE(70), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1423] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym__one_integer_literal,
    ACTIONS(317), 1,
      sym__other_integer_literal,
    ACTIONS(319), 1,
      sym_flow_windowing_keyword,
    ACTIONS(321), 1,
      sym_colon,
    STATE(816), 1,
      sym__repeat_count_complement,
    STATE(1009), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1449] = 7,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(313), 1,
      sym__dedent,
    ACTIONS(323), 1,
      sym_blank_line,
    STATE(984), 1,
      sym__cap_text_body,
    STATE(54), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1473] = 8,
    ACTIONS(259), 1,
      sym_flow_using_keyword,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(325), 1,
      sym_arrow,
    ACTIONS(327), 1,
      sym_colon,
    STATE(122), 1,
      sym__reduce_inline_block,
    STATE(328), 1,
      sym__reduce_inline_line,
    STATE(653), 1,
      sym__named_using_complement,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [1499] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(212), 1,
      sym__if_complements,
    STATE(373), 1,
      sym__named_if_complement,
    STATE(805), 1,
      sym__lanes_complement,
    STATE(806), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1525] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(211), 1,
      sym__inline_if_complement,
    STATE(213), 1,
      sym__if_complements,
    STATE(373), 1,
      sym__named_if_complement,
    STATE(805), 1,
      sym__lanes_complement,
    STATE(807), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1551] = 7,
    ACTIONS(273), 1,
      sym__comment_start,
    ACTIONS(277), 1,
      sym__line_start,
    ACTIONS(279), 1,
      sym__cap_text_start,
    ACTIONS(311), 1,
      sym_blank_line,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(1088), 1,
      sym__cap_text_body,
    STATE(70), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1575] = 9,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(339), 1,
      sym_text_line,
    ACTIONS(341), 1,
      sym_newline,
    STATE(275), 1,
      sym_line_end,
    STATE(426), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [1603] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(364), 1,
      sym__named_if_complement,
    STATE(650), 1,
      sym__inline_if_complement,
    STATE(651), 1,
      sym__if_complements,
    STATE(798), 1,
      sym__lanes_complement,
    STATE(799), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1629] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(364), 1,
      sym__named_if_complement,
    STATE(650), 1,
      sym__inline_if_complement,
    STATE(652), 1,
      sym__if_complements,
    STATE(798), 1,
      sym__lanes_complement,
    STATE(801), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1655] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(315), 1,
      sym__one_integer_literal,
    ACTIONS(317), 1,
      sym__other_integer_literal,
    ACTIONS(319), 1,
      sym_flow_windowing_keyword,
    ACTIONS(345), 1,
      sym_colon,
    STATE(873), 1,
      sym__repeat_count_complement,
    STATE(1115), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1681] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(426), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1704] = 5,
    ACTIONS(347), 1,
      sym_blank_line,
    ACTIONS(352), 1,
      sym__flow_raw_text,
    STATE(60), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(350), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1723] = 6,
    ACTIONS(355), 1,
      sym_blank_line,
    ACTIONS(357), 1,
      sym__comment_start,
    ACTIONS(361), 1,
      sym__line_start,
    STATE(384), 1,
      sym__flow_statement,
    ACTIONS(359), 2,
      sym__dedent,
      sym__until_start,
    STATE(65), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1744] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(789), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1767] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(425), 1,
      sym_inline_agic,
    STATE(791), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1790] = 5,
    ACTIONS(363), 1,
      sym_blank_line,
    ACTIONS(365), 1,
      sym__comment_start,
    ACTIONS(369), 1,
      sym__directive_start,
    ACTIONS(367), 2,
      sym__dedent,
      sym__line_start,
    STATE(83), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1809] = 6,
    ACTIONS(357), 1,
      sym__comment_start,
    ACTIONS(361), 1,
      sym__line_start,
    ACTIONS(371), 1,
      sym_blank_line,
    STATE(384), 1,
      sym__flow_statement,
    ACTIONS(373), 2,
      sym__dedent,
      sym__until_start,
    STATE(72), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1830] = 7,
    ACTIONS(375), 1,
      sym_blank_line,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(379), 1,
      sym__dedent,
    ACTIONS(381), 1,
      sym__line_start,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1048), 1,
      sym__repeat_statements,
    STATE(73), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1853] = 6,
    ACTIONS(383), 1,
      sym_blank_line,
    ACTIONS(386), 1,
      sym__comment_start,
    ACTIONS(391), 1,
      sym__line_start,
    STATE(357), 1,
      sym_property,
    ACTIONS(389), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(67), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1874] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(612), 1,
      sym_inline_agic,
    STATE(745), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1897] = 5,
    ACTIONS(394), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__comment_start,
    ACTIONS(402), 1,
      sym__directive_start,
    ACTIONS(400), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1916] = 5,
    ACTIONS(405), 1,
      sym_blank_line,
    ACTIONS(408), 1,
      sym__comment_start,
    ACTIONS(413), 1,
      sym__line_start,
    ACTIONS(411), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(70), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1935] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(209), 1,
      sym__runnable_complements,
    STATE(210), 1,
      sym_inline_agic,
    STATE(371), 1,
      sym__lanes_complement,
    STATE(803), 1,
      sym__named_using_complement,
  [1960] = 6,
    ACTIONS(422), 1,
      sym_blank_line,
    ACTIONS(425), 1,
      sym__comment_start,
    ACTIONS(430), 1,
      sym__line_start,
    STATE(384), 1,
      sym__flow_statement,
    ACTIONS(428), 2,
      sym__dedent,
      sym__until_start,
    STATE(72), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1981] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(435), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1079), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2004] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(210), 1,
      sym_inline_agic,
    STATE(226), 1,
      sym__runnable_complements,
    STATE(371), 1,
      sym__lanes_complement,
    STATE(803), 1,
      sym__named_using_complement,
  [2029] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(437), 1,
      sym_blank_line,
    ACTIONS(439), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1094), 1,
      sym__repeat_statements,
    STATE(78), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2052] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(613), 1,
      sym_inline_agic,
    STATE(747), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2075] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(646), 1,
      sym__runnable_complements,
    STATE(648), 1,
      sym_inline_agic,
    STATE(785), 1,
      sym__named_using_complement,
  [2100] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(445), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1013), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2123] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(447), 1,
      sym_blank_line,
    ACTIONS(449), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1119), 1,
      sym__repeat_statements,
    STATE(80), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2146] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(451), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(985), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2169] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(453), 1,
      sym_blank_line,
    ACTIONS(455), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(986), 1,
      sym__repeat_statements,
    STATE(82), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2192] = 7,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(433), 1,
      sym_blank_line,
    ACTIONS(457), 1,
      sym__dedent,
    STATE(104), 1,
      sym__flow_statement,
    STATE(989), 1,
      sym__repeat_statements,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2215] = 5,
    ACTIONS(365), 1,
      sym__comment_start,
    ACTIONS(369), 1,
      sym__directive_start,
    ACTIONS(459), 1,
      sym_blank_line,
    ACTIONS(461), 2,
      sym__dedent,
      sym__line_start,
    STATE(69), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2234] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(463), 1,
      sym_blank_line,
    STATE(85), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(465), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2253] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(467), 1,
      sym_blank_line,
    STATE(60), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(199), 1,
      sym__implicit_run_line,
    ACTIONS(469), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2272] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(580), 1,
      sym__runnable_complements,
    STATE(648), 1,
      sym_inline_agic,
    STATE(785), 1,
      sym__named_using_complement,
  [2297] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    ACTIONS(305), 1,
      sym_snake_name,
    STATE(614), 1,
      sym_inline_agic,
    STATE(748), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2320] = 4,
    STATE(680), 1,
      sym_recall_source,
    STATE(811), 1,
      sym_recall_value,
    ACTIONS(471), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(473), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2336] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym_blank_line,
    ACTIONS(477), 1,
      sym__dedent,
    ACTIONS(479), 1,
      sym__line_start,
    STATE(120), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2354] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(477), 1,
      sym__dedent,
    ACTIONS(479), 1,
      sym__line_start,
    ACTIONS(481), 1,
      sym_blank_line,
    STATE(121), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2372] = 6,
    ACTIONS(483), 1,
      sym__line_start,
    ACTIONS(485), 1,
      sym__directive_start,
    STATE(95), 1,
      sym_directive,
    STATE(128), 1,
      sym__flow_statement,
    STATE(754), 1,
      sym__directives,
    STATE(1027), 2,
      sym_statements,
      sym__pass_statement,
  [2392] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1109), 1,
      sym__repeat_statements,
    STATE(332), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2412] = 5,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(491), 1,
      sym_blank_line,
    ACTIONS(494), 1,
      sym__comment_start,
    ACTIONS(497), 1,
      sym__line_start,
    STATE(93), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2430] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(500), 1,
      sym_blank_line,
    STATE(123), 1,
      aux_sym_unroled_message_repeat1,
    STATE(215), 1,
      sym__unroled_message_line,
    ACTIONS(502), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2448] = 5,
    ACTIONS(367), 1,
      sym__line_start,
    ACTIONS(485), 1,
      sym__directive_start,
    ACTIONS(504), 1,
      sym_blank_line,
    ACTIONS(506), 1,
      sym__comment_start,
    STATE(97), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2466] = 4,
    ACTIONS(510), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__comment_start,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(508), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2482] = 5,
    ACTIONS(461), 1,
      sym__line_start,
    ACTIONS(485), 1,
      sym__directive_start,
    ACTIONS(506), 1,
      sym__comment_start,
    ACTIONS(516), 1,
      sym_blank_line,
    STATE(99), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2500] = 4,
    STATE(680), 1,
      sym_recall_source,
    STATE(852), 1,
      sym_recall_value,
    ACTIONS(471), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(473), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2516] = 5,
    ACTIONS(400), 1,
      sym__line_start,
    ACTIONS(518), 1,
      sym_blank_line,
    ACTIONS(521), 1,
      sym__comment_start,
    ACTIONS(524), 1,
      sym__directive_start,
    STATE(99), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2534] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(469), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2548] = 5,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    ACTIONS(527), 1,
      sym_blank_line,
    STATE(94), 1,
      aux_sym_unroled_message_repeat1,
    STATE(215), 1,
      sym__unroled_message_line,
    ACTIONS(529), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2566] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
    ACTIONS(531), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2580] = 5,
    ACTIONS(533), 1,
      sym_blank_line,
    ACTIONS(536), 1,
      sym__comment_start,
    ACTIONS(539), 1,
      sym__dedent,
    ACTIONS(541), 1,
      sym__line_start,
    STATE(103), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2598] = 6,
    ACTIONS(359), 1,
      sym__dedent,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(544), 1,
      sym_blank_line,
    STATE(587), 1,
      sym__flow_statement,
    STATE(105), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2618] = 6,
    ACTIONS(373), 1,
      sym__dedent,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(546), 1,
      sym_blank_line,
    STATE(587), 1,
      sym__flow_statement,
    STATE(106), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2638] = 6,
    ACTIONS(428), 1,
      sym__dedent,
    ACTIONS(548), 1,
      sym_blank_line,
    ACTIONS(551), 1,
      sym__comment_start,
    ACTIONS(554), 1,
      sym__line_start,
    STATE(587), 1,
      sym__flow_statement,
    STATE(106), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2658] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(557), 1,
      sym_text_line,
    STATE(567), 1,
      sym_line_end,
    STATE(568), 1,
      sym_context_body,
    STATE(569), 1,
      sym_text_inline,
    STATE(570), 1,
      sym_text_block,
  [2680] = 5,
    ACTIONS(561), 1,
      sym__module_doc_start,
    ACTIONS(563), 1,
      sym__item_doc_start,
    ACTIONS(565), 1,
      sym__param_item_doc_start,
    ACTIONS(559), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(786), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2698] = 5,
    ACTIONS(569), 1,
      sym_blank_line,
    ACTIONS(571), 1,
      sym__comment_start,
    ACTIONS(573), 1,
      sym__indent,
    ACTIONS(567), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2716] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(575), 1,
      sym_blank_line,
    ACTIONS(577), 1,
      sym__dedent,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(103), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2734] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(557), 1,
      sym_text_line,
    STATE(567), 1,
      sym_line_end,
    STATE(569), 1,
      sym_text_inline,
    STATE(570), 1,
      sym_text_block,
    STATE(640), 1,
      sym_context_body,
  [2756] = 5,
    ACTIONS(571), 1,
      sym__comment_start,
    ACTIONS(583), 1,
      sym_blank_line,
    ACTIONS(585), 1,
      sym__indent,
    ACTIONS(581), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(109), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2774] = 6,
    ACTIONS(369), 1,
      sym__directive_start,
    ACTIONS(587), 1,
      sym__line_start,
    STATE(64), 1,
      sym_directive,
    STATE(114), 1,
      sym_message,
    STATE(477), 1,
      sym__directives,
    STATE(1087), 2,
      sym_messages,
      sym__pass_statement,
  [2794] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(589), 1,
      sym_blank_line,
    ACTIONS(591), 1,
      sym__dedent,
    STATE(110), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2812] = 6,
    ACTIONS(369), 1,
      sym__directive_start,
    ACTIONS(587), 1,
      sym__line_start,
    STATE(64), 1,
      sym_directive,
    STATE(114), 1,
      sym_message,
    STATE(558), 1,
      sym__directives,
    STATE(1062), 2,
      sym_messages,
      sym__pass_statement,
  [2832] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 1,
      sym_blank_line,
    STATE(93), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2850] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(597), 1,
      sym_blank_line,
    STATE(125), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(385), 1,
      sym__implicit_run_line,
    ACTIONS(469), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2868] = 5,
    ACTIONS(599), 1,
      sym_blank_line,
    ACTIONS(602), 1,
      sym__comment_start,
    ACTIONS(605), 1,
      sym__dedent,
    ACTIONS(607), 1,
      sym__line_start,
    STATE(118), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2886] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(557), 1,
      sym_text_line,
    STATE(567), 1,
      sym_line_end,
    STATE(570), 1,
      sym_text_block,
    STATE(574), 1,
      sym_text_inline,
    STATE(641), 1,
      sym_instruct_body,
  [2908] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(613), 1,
      sym__comment_start,
    ACTIONS(616), 1,
      sym__dedent,
    ACTIONS(618), 1,
      sym__line_start,
    STATE(120), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2926] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym_blank_line,
    ACTIONS(479), 1,
      sym__line_start,
    ACTIONS(621), 1,
      sym__dedent,
    STATE(120), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2944] = 6,
    ACTIONS(623), 1,
      sym_blank_line,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(627), 1,
      sym__dedent,
    ACTIONS(629), 1,
      sym__from_start,
    STATE(377), 1,
      sym__from_complement,
    STATE(378), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2964] = 5,
    ACTIONS(631), 1,
      sym_blank_line,
    ACTIONS(636), 1,
      sym__agic_raw_text,
    STATE(123), 1,
      aux_sym_unroled_message_repeat1,
    STATE(215), 1,
      sym__unroled_message_line,
    ACTIONS(634), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2982] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(557), 1,
      sym_text_line,
    STATE(567), 1,
      sym_line_end,
    STATE(570), 1,
      sym_text_block,
    STATE(573), 1,
      sym_instruct_body,
    STATE(574), 1,
      sym_text_inline,
  [3004] = 5,
    ACTIONS(639), 1,
      sym_blank_line,
    ACTIONS(642), 1,
      sym__flow_raw_text,
    STATE(125), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(385), 1,
      sym__implicit_run_line,
    ACTIONS(350), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3022] = 5,
    ACTIONS(569), 1,
      sym_blank_line,
    ACTIONS(571), 1,
      sym__comment_start,
    ACTIONS(647), 1,
      sym__indent,
    ACTIONS(645), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3040] = 5,
    ACTIONS(571), 1,
      sym__comment_start,
    ACTIONS(651), 1,
      sym_blank_line,
    ACTIONS(653), 1,
      sym__indent,
    ACTIONS(649), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(126), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3058] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(655), 1,
      sym_blank_line,
    ACTIONS(657), 1,
      sym__dedent,
    STATE(146), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3076] = 6,
    ACTIONS(483), 1,
      sym__line_start,
    ACTIONS(485), 1,
      sym__directive_start,
    STATE(95), 1,
      sym_directive,
    STATE(128), 1,
      sym__flow_statement,
    STATE(721), 1,
      sym__directives,
    STATE(1055), 2,
      sym_statements,
      sym__pass_statement,
  [3096] = 5,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    ACTIONS(659), 1,
      sym_blank_line,
    STATE(117), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(385), 1,
      sym__implicit_run_line,
    ACTIONS(465), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3114] = 5,
    ACTIONS(663), 1,
      sym__module_doc_start,
    ACTIONS(665), 1,
      sym__item_doc_start,
    ACTIONS(667), 1,
      sym__param_item_doc_start,
    ACTIONS(661), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(304), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3132] = 5,
    ACTIONS(671), 1,
      sym__module_doc_start,
    ACTIONS(673), 1,
      sym__item_doc_start,
    ACTIONS(675), 1,
      sym__param_item_doc_start,
    ACTIONS(669), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(311), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3150] = 5,
    ACTIONS(679), 1,
      sym__module_doc_start,
    ACTIONS(681), 1,
      sym__item_doc_start,
    ACTIONS(683), 1,
      sym__param_item_doc_start,
    ACTIONS(677), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(326), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3168] = 5,
    ACTIONS(687), 1,
      sym__module_doc_start,
    ACTIONS(689), 1,
      sym__item_doc_start,
    ACTIONS(691), 1,
      sym__param_item_doc_start,
    ACTIONS(685), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(616), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3186] = 5,
    ACTIONS(695), 1,
      sym__module_doc_start,
    ACTIONS(697), 1,
      sym__item_doc_start,
    ACTIONS(699), 1,
      sym__param_item_doc_start,
    ACTIONS(693), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(625), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3204] = 5,
    ACTIONS(703), 1,
      sym__module_doc_start,
    ACTIONS(705), 1,
      sym__item_doc_start,
    ACTIONS(707), 1,
      sym__param_item_doc_start,
    ACTIONS(701), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(764), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3222] = 5,
    ACTIONS(711), 1,
      sym__module_doc_start,
    ACTIONS(713), 1,
      sym__item_doc_start,
    ACTIONS(715), 1,
      sym__param_item_doc_start,
    ACTIONS(709), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(770), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3240] = 5,
    ACTIONS(719), 1,
      sym__module_doc_start,
    ACTIONS(721), 1,
      sym__item_doc_start,
    ACTIONS(723), 1,
      sym__param_item_doc_start,
    ACTIONS(717), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(337), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3258] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(725), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1092), 1,
      sym__repeat_statements,
    STATE(147), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3278] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(727), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1107), 1,
      sym__repeat_statements,
    STATE(142), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3298] = 5,
    ACTIONS(731), 1,
      sym__module_doc_start,
    ACTIONS(733), 1,
      sym__item_doc_start,
    ACTIONS(735), 1,
      sym__param_item_doc_start,
    ACTIONS(729), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(603), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3316] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1122), 1,
      sym__repeat_statements,
    STATE(332), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3336] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(737), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(983), 1,
      sym__repeat_statements,
    STATE(144), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3356] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(988), 1,
      sym__repeat_statements,
    STATE(332), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3376] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(479), 1,
      sym__line_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__dedent,
    STATE(89), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3394] = 5,
    ACTIONS(377), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(743), 1,
      sym_blank_line,
    ACTIONS(745), 1,
      sym__dedent,
    STATE(118), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3412] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(487), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1067), 1,
      sym__repeat_statements,
    STATE(332), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3432] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(381), 1,
      sym__line_start,
    ACTIONS(747), 1,
      sym_blank_line,
    STATE(104), 1,
      sym__flow_statement,
    STATE(1075), 1,
      sym__repeat_statements,
    STATE(92), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3452] = 6,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(629), 1,
      sym__from_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__dedent,
    STATE(415), 1,
      sym__from_complement,
    STATE(421), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3472] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(509), 1,
      sym_repeat_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3489] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(401), 1,
      sym__unroled_message_line,
    ACTIONS(759), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3502] = 4,
    ACTIONS(761), 1,
      sym_blank_line,
    ACTIONS(764), 1,
      sym__comment_start,
    ACTIONS(508), 2,
      sym__dedent,
      sym__line_start,
    STATE(152), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3517] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(508), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3534] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(654), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3551] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(474), 1,
      sym_repeat_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3568] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(217), 1,
      sym__implicit_run_line,
    ACTIONS(531), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3581] = 5,
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
  [3598] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(607), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3615] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(480), 1,
      sym_text_inline,
    STATE(535), 1,
      sym_text_block,
    STATE(639), 1,
      sym_line_end,
  [3634] = 3,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(401), 1,
      sym__unroled_message_line,
    ACTIONS(502), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3647] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(771), 1,
      sym_blank_line,
    ACTIONS(773), 1,
      sym__indent,
    STATE(456), 1,
      sym_struct_body,
    STATE(367), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3664] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(494), 1,
      sym_repeat_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3681] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(219), 1,
      sym_text_inline,
    STATE(318), 1,
      sym_text_block,
    STATE(674), 1,
      sym_line_end,
  [3700] = 6,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(775), 1,
      sym_arrow,
    ACTIONS(777), 1,
      sym_colon,
    STATE(122), 1,
      sym__reduce_inline_block,
    STATE(328), 1,
      sym__reduce_inline_line,
    STATE(653), 1,
      sym__named_using_complement,
  [3719] = 5,
    ACTIONS(753), 1,
      sym_blank_line,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(757), 1,
      sym__indent,
    STATE(495), 1,
      sym_repeat_body,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3736] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(535), 1,
      sym_text_block,
    STATE(639), 1,
      sym_line_end,
    STATE(676), 1,
      sym_text_inline,
  [3755] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(779), 1,
      sym_text_line,
    STATE(673), 1,
      sym_line_end,
    STATE(725), 1,
      sym_text_inline,
    STATE(737), 1,
      sym_text_block,
  [3774] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(225), 1,
      sym_text_inline,
    STATE(318), 1,
      sym_text_block,
    STATE(674), 1,
      sym_line_end,
  [3793] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(560), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3810] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(528), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3827] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(785), 1,
      sym_flow_by_keyword,
    STATE(237), 1,
      sym__inline_by_complement,
    STATE(238), 1,
      sym__by_complements,
    STATE(380), 1,
      sym__named_by_complement,
    STATE(821), 1,
      sym__lanes_complement,
  [3846] = 4,
    ACTIONS(791), 1,
      sym_newline,
    STATE(746), 1,
      sym_local_reference,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(789), 2,
      anon_sym__,
      sym_snake_name,
  [3861] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(259), 1,
      sym_repeat_body,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3878] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(261), 1,
      sym_text_inline,
    STATE(318), 1,
      sym_text_block,
    STATE(674), 1,
      sym_line_end,
  [3897] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(687), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3914] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(536), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3931] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(270), 1,
      sym_repeat_body,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3948] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(663), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3965] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(563), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3982] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(280), 1,
      sym_repeat_body,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3999] = 6,
    ACTIONS(797), 1,
      sym_arrow,
    ACTIONS(799), 1,
      sym_colon,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(803), 1,
      sym_snake_name,
    STATE(540), 1,
      sym_flow_name,
    STATE(911), 1,
      sym_params,
  [4018] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(535), 1,
      sym_text_block,
    STATE(595), 1,
      sym_text_inline,
    STATE(639), 1,
      sym_line_end,
  [4037] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(557), 1,
      sym_text_line,
    STATE(567), 1,
      sym_line_end,
    STATE(570), 1,
      sym_text_block,
    STATE(759), 1,
      sym_text_inline,
  [4056] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(535), 1,
      sym_text_block,
    STATE(639), 1,
      sym_line_end,
    STATE(689), 1,
      sym_text_inline,
  [4075] = 6,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(805), 1,
      sym_arrow,
    ACTIONS(807), 1,
      sym_colon,
    STATE(149), 1,
      sym__reduce_inline_block,
    STATE(642), 1,
      sym__reduce_inline_line,
    STATE(644), 1,
      sym__named_using_complement,
  [4094] = 4,
    ACTIONS(809), 1,
      sym_array_suffix,
    STATE(193), 1,
      aux_sym_type_repeat1,
    STATE(647), 1,
      sym_type_suffix,
    ACTIONS(811), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4109] = 6,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(813), 1,
      sym_arrow,
    ACTIONS(815), 1,
      sym_colon,
    ACTIONS(817), 1,
      sym_snake_name,
    STATE(496), 1,
      sym_agic_name,
    STATE(938), 1,
      sym_params,
  [4128] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(585), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4145] = 6,
    ACTIONS(315), 1,
      sym__one_integer_literal,
    ACTIONS(819), 1,
      sym__other_integer_literal,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(823), 1,
      sym_colon,
    STATE(816), 1,
      sym__repeat_count_complement,
    STATE(1009), 1,
      sym__window_complement,
  [4164] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(463), 1,
      sym_text_inline,
    STATE(535), 1,
      sym_text_block,
    STATE(639), 1,
      sym_line_end,
  [4183] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(767), 1,
      sym_blank_line,
    ACTIONS(769), 1,
      sym__indent,
    STATE(548), 1,
      sym_agic_body,
    STATE(240), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4200] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(196), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(825), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4215] = 4,
    ACTIONS(827), 1,
      sym_array_suffix,
    STATE(193), 1,
      aux_sym_type_repeat1,
    STATE(647), 1,
      sym_type_suffix,
    ACTIONS(830), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4230] = 4,
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
  [4245] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(171), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(825), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4260] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(832), 1,
      sym_flow_by_keyword,
    STATE(423), 1,
      sym__named_by_complement,
    STATE(445), 1,
      sym__inline_by_complement,
    STATE(446), 1,
      sym__by_complements,
    STATE(724), 1,
      sym__lanes_complement,
  [4279] = 1,
    ACTIONS(834), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4288] = 3,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(217), 1,
      sym__implicit_run_line,
    ACTIONS(469), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4301] = 1,
    ACTIONS(836), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4310] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(444), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4327] = 1,
    ACTIONS(838), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4336] = 5,
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
  [4353] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(450), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4370] = 6,
    ACTIONS(315), 1,
      sym__one_integer_literal,
    ACTIONS(819), 1,
      sym__other_integer_literal,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(840), 1,
      sym_colon,
    STATE(873), 1,
      sym__repeat_count_complement,
    STATE(1115), 1,
      sym__window_complement,
  [4389] = 4,
    ACTIONS(809), 1,
      sym_array_suffix,
    STATE(186), 1,
      aux_sym_type_repeat1,
    STATE(647), 1,
      sym_type_suffix,
    ACTIONS(842), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4404] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(781), 1,
      sym_blank_line,
    ACTIONS(783), 1,
      sym__indent,
    STATE(662), 1,
      sym_flow_body,
    STATE(287), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4421] = 5,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(793), 1,
      sym_blank_line,
    ACTIONS(795), 1,
      sym__indent,
    STATE(271), 1,
      sym_repeat_body,
    STATE(428), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4438] = 5,
    ACTIONS(361), 1,
      sym__line_start,
    ACTIONS(844), 1,
      sym__until_start,
    STATE(61), 1,
      sym__flow_statement,
    STATE(143), 1,
      sym_until_clause,
    STATE(844), 1,
      sym__repeat_statements,
  [4454] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4462] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4470] = 1,
    ACTIONS(850), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4478] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4486] = 1,
    ACTIONS(854), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4494] = 1,
    ACTIONS(856), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4502] = 1,
    ACTIONS(858), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [4510] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(475), 1,
      sym_inline_agic,
    STATE(784), 1,
      sym_runnable,
  [4526] = 1,
    ACTIONS(838), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [4534] = 1,
    ACTIONS(862), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4542] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4550] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4558] = 1,
    ACTIONS(868), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4566] = 1,
    ACTIONS(870), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4574] = 1,
    ACTIONS(872), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4582] = 1,
    ACTIONS(874), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4590] = 1,
    ACTIONS(876), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4598] = 1,
    ACTIONS(878), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4606] = 1,
    ACTIONS(880), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4614] = 1,
    ACTIONS(882), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4622] = 1,
    ACTIONS(884), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4630] = 1,
    ACTIONS(886), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4638] = 1,
    ACTIONS(888), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4646] = 1,
    ACTIONS(890), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4654] = 1,
    ACTIONS(892), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4662] = 1,
    ACTIONS(894), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4670] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4678] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4686] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4694] = 1,
    ACTIONS(902), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4702] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4710] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(908), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4724] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(702), 1,
      sym_inline_agic,
    STATE(876), 1,
      sym_runnable,
  [4740] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(912), 1,
      sym__dedent,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4754] = 1,
    ACTIONS(916), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4762] = 1,
    ACTIONS(918), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4770] = 1,
    ACTIONS(920), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4778] = 1,
    ACTIONS(922), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4786] = 1,
    ACTIONS(924), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4794] = 1,
    ACTIONS(926), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4802] = 1,
    ACTIONS(928), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4810] = 1,
    ACTIONS(930), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4818] = 1,
    ACTIONS(932), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4826] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4834] = 1,
    ACTIONS(936), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4842] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4850] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4858] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4866] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4874] = 1,
    ACTIONS(946), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4882] = 1,
    ACTIONS(948), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4890] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4898] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4906] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4914] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4922] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4930] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4938] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4946] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4954] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4962] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [4970] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4978] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4986] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4994] = 1,
    ACTIONS(976), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5002] = 1,
    ACTIONS(978), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5010] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5018] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5026] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5034] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5042] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5050] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5058] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5066] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5074] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5082] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5090] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5098] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5106] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1004), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5120] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5128] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5136] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5144] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5152] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5160] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5168] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5176] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5184] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5192] = 1,
    ACTIONS(1024), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5200] = 1,
    ACTIONS(1026), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5208] = 1,
    ACTIONS(1028), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5216] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5224] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5232] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5240] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5248] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5256] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5264] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5272] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5280] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5288] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5296] = 4,
    ACTIONS(508), 1,
      sym__dedent,
    ACTIONS(1050), 1,
      sym_blank_line,
    ACTIONS(1053), 1,
      sym__comment_start,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5310] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5318] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5326] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5334] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5342] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5350] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5358] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5366] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5382] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 4,
    ACTIONS(508), 1,
      sym__reduce_indent,
    ACTIONS(1066), 1,
      sym_blank_line,
    ACTIONS(1069), 1,
      sym__comment_start,
    STATE(322), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5412] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5420] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5428] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1076), 1,
      sym_snake_name,
    STATE(241), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [5442] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5450] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5458] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5466] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5474] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5482] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5490] = 4,
    ACTIONS(508), 1,
      sym__line_start,
    ACTIONS(1080), 1,
      sym_blank_line,
    ACTIONS(1083), 1,
      sym__comment_start,
    STATE(332), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5504] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5512] = 5,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1088), 1,
      sym_text_line,
    ACTIONS(1090), 1,
      sym_newline,
    STATE(413), 1,
      sym_line_end,
    STATE(434), 1,
      sym__reduce_line,
  [5528] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5536] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5544] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5552] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5560] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5568] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5576] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5584] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5592] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5600] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5608] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5616] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5624] = 5,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1088), 1,
      sym_text_line,
    ACTIONS(1090), 1,
      sym_newline,
    STATE(363), 1,
      sym_line_end,
    STATE(488), 1,
      sym__reduce_line,
  [5640] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1092), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5654] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1094), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5668] = 4,
    ACTIONS(1096), 1,
      sym_blank_line,
    ACTIONS(1098), 1,
      sym__comment_start,
    ACTIONS(1100), 1,
      sym__reduce_indent,
    STATE(322), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5682] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1104), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5696] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(1106), 1,
      sym_blank_line,
    ACTIONS(1108), 1,
      sym__indent,
    STATE(365), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5710] = 1,
    ACTIONS(1110), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5718] = 1,
    ACTIONS(1112), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5726] = 5,
    ACTIONS(361), 1,
      sym__line_start,
    ACTIONS(844), 1,
      sym__until_start,
    STATE(61), 1,
      sym__flow_statement,
    STATE(139), 1,
      sym_until_clause,
    STATE(711), 1,
      sym__repeat_statements,
  [5742] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1114), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5756] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5764] = 5,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    STATE(438), 1,
      sym_inline_agic,
    STATE(753), 1,
      sym__named_using_complement,
  [5780] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5788] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(424), 1,
      sym_inline_agic,
    STATE(789), 1,
      sym_runnable,
  [5804] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(426), 1,
      sym_inline_agic,
    STATE(792), 1,
      sym_runnable,
  [5820] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(439), 1,
      sym_inline_agic,
    STATE(812), 1,
      sym_runnable,
  [5836] = 4,
    ACTIONS(1098), 1,
      sym__comment_start,
    ACTIONS(1120), 1,
      sym_blank_line,
    ACTIONS(1122), 1,
      sym__reduce_indent,
    STATE(376), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5850] = 5,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    ACTIONS(1126), 1,
      sym_flow_in_keyword,
    STATE(440), 1,
      sym_line_end,
    STATE(868), 1,
      sym__lanes_complement,
  [5866] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1128), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5880] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(224), 1,
      sym_inline_agic,
    STATE(814), 1,
      sym_runnable,
  [5896] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1130), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5910] = 5,
    ACTIONS(267), 1,
      sym_arrow,
    ACTIONS(269), 1,
      sym_colon,
    ACTIONS(1132), 1,
      aux_sym__doc_space_token1,
    STATE(216), 1,
      sym__required_space,
    STATE(447), 1,
      sym_inline_agic,
  [5926] = 5,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1090), 1,
      sym_newline,
    ACTIONS(1134), 1,
      sym_text_line,
    STATE(227), 1,
      sym__reduce_line,
    STATE(413), 1,
      sym_line_end,
  [5942] = 5,
    ACTIONS(361), 1,
      sym__line_start,
    ACTIONS(844), 1,
      sym__until_start,
    STATE(61), 1,
      sym__flow_statement,
    STATE(148), 1,
      sym_until_clause,
    STATE(731), 1,
      sym__repeat_statements,
  [5958] = 5,
    ACTIONS(416), 1,
      sym_flow_using_keyword,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    STATE(231), 1,
      sym_inline_agic,
    STATE(818), 1,
      sym__named_using_complement,
  [5974] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(232), 1,
      sym_inline_agic,
    STATE(812), 1,
      sym_runnable,
  [5990] = 5,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1126), 1,
      sym_flow_in_keyword,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(233), 1,
      sym_line_end,
    STATE(819), 1,
      sym__lanes_complement,
  [6006] = 4,
    ACTIONS(508), 1,
      sym__indent,
    ACTIONS(1138), 1,
      sym_blank_line,
    ACTIONS(1141), 1,
      sym__comment_start,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6020] = 5,
    ACTIONS(261), 1,
      sym_arrow,
    ACTIONS(263), 1,
      sym_colon,
    ACTIONS(1144), 1,
      aux_sym__doc_space_token1,
    STATE(239), 1,
      sym_inline_agic,
    STATE(382), 1,
      sym__required_space,
  [6036] = 4,
    ACTIONS(1096), 1,
      sym_blank_line,
    ACTIONS(1098), 1,
      sym__comment_start,
    ACTIONS(1146), 1,
      sym__reduce_indent,
    STATE(322), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6050] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1148), 1,
      sym_blank_line,
    ACTIONS(1150), 1,
      sym__dedent,
    STATE(387), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6064] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1152), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6078] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(256), 1,
      sym_inline_agic,
    STATE(756), 1,
      sym_runnable,
  [6094] = 5,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1126), 1,
      sym_flow_in_keyword,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(257), 1,
      sym_line_end,
    STATE(831), 1,
      sym__lanes_complement,
  [6110] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1154), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6124] = 5,
    ACTIONS(418), 1,
      sym_arrow,
    ACTIONS(420), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(260), 1,
      sym_inline_agic,
    STATE(835), 1,
      sym_runnable,
  [6140] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1156), 1,
      sym_blank_line,
    ACTIONS(1158), 1,
      sym__dedent,
    STATE(391), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6154] = 1,
    ACTIONS(1160), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6162] = 1,
    ACTIONS(836), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6170] = 5,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1090), 1,
      sym_newline,
    ACTIONS(1134), 1,
      sym_text_line,
    STATE(265), 1,
      sym__reduce_line,
    STATE(363), 1,
      sym_line_end,
  [6186] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1162), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6200] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1164), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6214] = 1,
    ACTIONS(834), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6222] = 4,
    ACTIONS(1166), 1,
      sym_blank_line,
    ACTIONS(1169), 1,
      sym__dedent,
    ACTIONS(1171), 1,
      sym_indented_raw_text,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6236] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1174), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6250] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1176), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym__dedent,
    STATE(394), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6264] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1180), 1,
      sym_blank_line,
    ACTIONS(1182), 1,
      sym__dedent,
    STATE(404), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6278] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1184), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6292] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1186), 1,
      sym_blank_line,
    ACTIONS(1188), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6306] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1190), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6320] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(612), 1,
      sym_inline_agic,
    STATE(745), 1,
      sym_runnable,
  [6336] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(614), 1,
      sym_inline_agic,
    STATE(748), 1,
      sym_runnable,
  [6352] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6366] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1194), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6380] = 1,
    ACTIONS(1196), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6388] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1198), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6402] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1200), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6416] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1202), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6430] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1204), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6444] = 4,
    ACTIONS(910), 1,
      sym_blank_line,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1206), 1,
      sym__dedent,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6458] = 1,
    ACTIONS(1208), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6466] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1210), 1,
      sym_blank_line,
    ACTIONS(1212), 1,
      sym__dedent,
    STATE(400), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6480] = 4,
    ACTIONS(1214), 1,
      sym_array_suffix,
    STATE(410), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(842), 2,
      sym_newline,
      sym__inline_comment,
  [6494] = 4,
    ACTIONS(1214), 1,
      sym_array_suffix,
    STATE(411), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(811), 2,
      sym_newline,
      sym__inline_comment,
  [6508] = 4,
    ACTIONS(1216), 1,
      sym_array_suffix,
    STATE(411), 1,
      aux_sym_type_repeat1,
    STATE(834), 1,
      sym_type_suffix,
    ACTIONS(830), 2,
      sym_newline,
      sym__inline_comment,
  [6522] = 4,
    ACTIONS(1221), 1,
      sym_rparen,
    STATE(588), 1,
      sym_param_name,
    STATE(726), 1,
      sym_param,
    ACTIONS(1219), 2,
      sym__variable_name,
      anon_sym__,
  [6536] = 4,
    ACTIONS(1098), 1,
      sym__comment_start,
    ACTIONS(1223), 1,
      sym_blank_line,
    ACTIONS(1225), 1,
      sym__reduce_indent,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6550] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1076), 1,
      sym_snake_name,
    STATE(366), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [6564] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1227), 1,
      sym_blank_line,
    ACTIONS(1229), 1,
      sym__dedent,
    STATE(351), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6578] = 1,
    ACTIONS(1231), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6586] = 5,
    ACTIONS(361), 1,
      sym__line_start,
    ACTIONS(844), 1,
      sym__until_start,
    STATE(61), 1,
      sym__flow_statement,
    STATE(140), 1,
      sym_until_clause,
    STATE(836), 1,
      sym__repeat_statements,
  [6602] = 1,
    ACTIONS(1233), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6610] = 1,
    ACTIONS(1233), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6618] = 1,
    ACTIONS(1235), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6626] = 4,
    ACTIONS(625), 1,
      sym__comment_start,
    ACTIONS(1102), 1,
      sym_blank_line,
    ACTIONS(1237), 1,
      sym__dedent,
    STATE(310), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6640] = 5,
    ACTIONS(441), 1,
      sym_arrow,
    ACTIONS(443), 1,
      sym_colon,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(471), 1,
      sym_inline_agic,
    STATE(756), 1,
      sym_runnable,
  [6656] = 5,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    ACTIONS(1126), 1,
      sym_flow_in_keyword,
    STATE(472), 1,
      sym_line_end,
    STATE(757), 1,
      sym__lanes_complement,
  [6672] = 1,
    ACTIONS(1239), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6680] = 1,
    ACTIONS(1241), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6688] = 1,
    ACTIONS(1243), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6696] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(1245), 1,
      sym_blank_line,
    ACTIONS(1247), 1,
      sym__indent,
    STATE(429), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6710] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1249), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6724] = 4,
    ACTIONS(755), 1,
      sym__comment_start,
    ACTIONS(906), 1,
      sym_blank_line,
    ACTIONS(1251), 1,
      sym__indent,
    STATE(374), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6738] = 1,
    ACTIONS(1253), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6746] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6754] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6761] = 1,
    ACTIONS(1255), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6768] = 1,
    ACTIONS(880), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6775] = 1,
    ACTIONS(882), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6782] = 1,
    ACTIONS(884), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6789] = 1,
    ACTIONS(886), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6796] = 1,
    ACTIONS(888), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6803] = 1,
    ACTIONS(890), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6810] = 1,
    ACTIONS(892), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6817] = 1,
    ACTIONS(894), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6824] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6831] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6838] = 1,
    ACTIONS(1257), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6845] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6852] = 1,
    ACTIONS(902), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6859] = 1,
    ACTIONS(904), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6866] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6873] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6880] = 1,
    ACTIONS(1261), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6887] = 1,
    ACTIONS(1263), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6894] = 1,
    ACTIONS(1265), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6901] = 3,
    ACTIONS(1269), 1,
      sym_comma,
    STATE(478), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1267), 2,
      sym_newline,
      sym__inline_comment,
  [6912] = 3,
    ACTIONS(1273), 1,
      sym_comma,
    STATE(479), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1271), 2,
      sym_newline,
      sym__inline_comment,
  [6923] = 1,
    ACTIONS(1275), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6930] = 1,
    ACTIONS(1277), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6937] = 1,
    ACTIONS(918), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6944] = 1,
    ACTIONS(920), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6951] = 1,
    ACTIONS(922), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6958] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6965] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6972] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6979] = 1,
    ACTIONS(876), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6986] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6993] = 1,
    ACTIONS(932), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7000] = 1,
    ACTIONS(934), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7007] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1279), 1,
      sym_blank_line,
    STATE(396), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7018] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7025] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7032] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7039] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7046] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7053] = 1,
    ACTIONS(946), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7060] = 1,
    ACTIONS(948), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7067] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7074] = 1,
    ACTIONS(1281), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7081] = 4,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(1283), 1,
      sym__dedent,
    STATE(114), 1,
      sym_message,
    STATE(1062), 1,
      sym_messages,
  [7094] = 3,
    ACTIONS(1287), 1,
      sym_comma,
    STATE(478), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1285), 2,
      sym_newline,
      sym__inline_comment,
  [7105] = 3,
    ACTIONS(1292), 1,
      sym_comma,
    STATE(479), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1290), 2,
      sym_newline,
      sym__inline_comment,
  [7116] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7123] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7130] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7137] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1295), 1,
      sym_text_line,
    STATE(499), 1,
      sym_line_end,
  [7150] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7157] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1297), 1,
      sym_text_line,
    STATE(500), 1,
      sym_line_end,
  [7170] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1299), 1,
      sym_text_line,
    STATE(502), 1,
      sym_line_end,
  [7183] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1301), 1,
      sym_text_line,
    STATE(503), 1,
      sym_line_end,
  [7196] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7203] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1303), 1,
      sym_blank_line,
    STATE(381), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7214] = 1,
    ACTIONS(1305), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7221] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7228] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7235] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7242] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7249] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7256] = 4,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(1307), 1,
      sym_arrow,
    ACTIONS(1309), 1,
      sym_colon,
    STATE(949), 1,
      sym_params,
  [7269] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7276] = 1,
    ACTIONS(1311), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7283] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7290] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7297] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7304] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7311] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7318] = 1,
    ACTIONS(1313), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7325] = 1,
    ACTIONS(1315), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7332] = 4,
    ACTIONS(860), 1,
      sym_snake_name,
    ACTIONS(1317), 1,
      sym_colon,
    STATE(743), 1,
      sym_inline_agic_body,
    STATE(744), 1,
      sym_runnable,
  [7345] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7352] = 1,
    ACTIONS(1319), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7359] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7366] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7373] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7380] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7387] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7394] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7401] = 1,
    ACTIONS(1321), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7408] = 1,
    ACTIONS(1323), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7415] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7422] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7429] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7436] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7443] = 1,
    ACTIONS(1325), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7450] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7457] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7464] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7471] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7478] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7485] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7492] = 1,
    ACTIONS(1327), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7499] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7506] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7513] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7520] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7527] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7534] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7541] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7548] = 1,
    ACTIONS(1329), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7555] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7562] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7569] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7576] = 4,
    ACTIONS(801), 1,
      sym_lparen,
    ACTIONS(1331), 1,
      sym_arrow,
    ACTIONS(1333), 1,
      sym_colon,
    STATE(895), 1,
      sym_params,
  [7589] = 1,
    ACTIONS(1335), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7596] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1337), 1,
      sym_blank_line,
    STATE(388), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7607] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7614] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7621] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7628] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7635] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7642] = 1,
    ACTIONS(1339), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7649] = 2,
    ACTIONS(1343), 1,
      sym_newline,
    ACTIONS(1341), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [7658] = 4,
    ACTIONS(1345), 1,
      sym__inline_comment,
    ACTIONS(1347), 1,
      sym_text_line,
    ACTIONS(1349), 1,
      sym_newline,
    STATE(408), 1,
      sym_line_end,
  [7671] = 1,
    ACTIONS(1351), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7678] = 3,
    ACTIONS(1353), 1,
      sym_colon,
    ACTIONS(1355), 1,
      sym_newline,
    ACTIONS(1347), 2,
      sym__inline_comment,
      sym_text_line,
  [7689] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1357), 1,
      sym_text_line,
    STATE(598), 1,
      sym_line_end,
  [7702] = 2,
    STATE(1002), 1,
      sym_directive_op,
    ACTIONS(1359), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [7711] = 1,
    ACTIONS(1361), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7718] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(615), 1,
      sym__cap_definition,
  [7731] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(624), 1,
      sym__cap_definition,
  [7744] = 4,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(1367), 1,
      sym__dedent,
    STATE(114), 1,
      sym_message,
    STATE(1026), 1,
      sym_messages,
  [7757] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(633), 1,
      sym__cap_definition,
  [7770] = 1,
    ACTIONS(1369), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7777] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(112), 1,
      sym_line_end,
    STATE(634), 1,
      sym__cap_definition,
  [7790] = 1,
    ACTIONS(1371), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7797] = 1,
    ACTIONS(1373), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7804] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7811] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7818] = 3,
    ACTIONS(791), 1,
      sym_newline,
    ACTIONS(1375), 1,
      sym_flow_run_keyword,
    ACTIONS(787), 2,
      sym__inline_comment,
      sym_text_line,
  [7829] = 4,
    ACTIONS(1377), 1,
      sym_blank_line,
    ACTIONS(1379), 1,
      sym__text_indent,
    STATE(638), 1,
      sym_text_body,
    STATE(781), 1,
      aux_sym_text_body_repeat1,
  [7842] = 1,
    ACTIONS(1381), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7849] = 1,
    ACTIONS(1383), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7856] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7863] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1385), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7874] = 3,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(1387), 1,
      sym_integer_literal,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [7885] = 1,
    ACTIONS(1389), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7892] = 1,
    ACTIONS(1391), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7899] = 1,
    ACTIONS(1393), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7906] = 1,
    ACTIONS(1231), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7913] = 1,
    ACTIONS(1233), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7920] = 1,
    ACTIONS(1233), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7927] = 1,
    ACTIONS(1235), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7934] = 1,
    ACTIONS(878), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7941] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1395), 1,
      sym_text_line,
    STATE(660), 1,
      sym_line_end,
  [7954] = 1,
    ACTIONS(1397), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7961] = 1,
    ACTIONS(1399), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7968] = 1,
    ACTIONS(1401), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7975] = 1,
    ACTIONS(1403), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7982] = 1,
    ACTIONS(1405), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7989] = 1,
    ACTIONS(1160), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7996] = 3,
    ACTIONS(1407), 1,
      sym_optional_marker,
    ACTIONS(1409), 1,
      sym_colon,
    ACTIONS(1411), 2,
      sym_rparen,
      sym_comma,
  [8007] = 1,
    ACTIONS(1413), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8014] = 1,
    ACTIONS(1415), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8021] = 1,
    ACTIONS(1417), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8028] = 1,
    ACTIONS(1419), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8035] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8042] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(127), 1,
      sym_line_end,
    STATE(701), 1,
      sym_job_body,
  [8055] = 1,
    ACTIONS(1421), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8062] = 1,
    ACTIONS(1423), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8069] = 4,
    ACTIONS(1363), 1,
      sym__inline_comment,
    ACTIONS(1365), 1,
      sym_newline,
    STATE(127), 1,
      sym_line_end,
    STATE(433), 1,
      sym_job_body,
  [8082] = 1,
    ACTIONS(1425), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8089] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8098] = 2,
    STATE(852), 1,
      sym_text_ref,
    ACTIONS(1427), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8107] = 4,
    ACTIONS(1429), 1,
      sym_runnable_ref,
    ACTIONS(1431), 1,
      sym_none_keyword,
    ACTIONS(1433), 1,
      sym_all_keyword,
    STATE(851), 1,
      sym_route_value,
  [8120] = 1,
    ACTIONS(1435), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8127] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8134] = 1,
    ACTIONS(1437), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8141] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8148] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8155] = 1,
    ACTIONS(1439), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8162] = 1,
    ACTIONS(1441), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8169] = 1,
    ACTIONS(1443), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8176] = 1,
    ACTIONS(1445), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8183] = 1,
    ACTIONS(1447), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8190] = 1,
    ACTIONS(1239), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8197] = 1,
    ACTIONS(1241), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8204] = 1,
    ACTIONS(1243), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8211] = 1,
    ACTIONS(1449), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8218] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8225] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8232] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8239] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8246] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8253] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8260] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8267] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8274] = 1,
    ACTIONS(1451), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8281] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8288] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8295] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8302] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8309] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8316] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8323] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8330] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8337] = 1,
    ACTIONS(1453), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8344] = 1,
    ACTIONS(1455), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8351] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8358] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1457), 1,
      sym_blank_line,
    STATE(242), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8369] = 1,
    ACTIONS(1253), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8376] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8383] = 4,
    ACTIONS(1459), 1,
      sym_blank_line,
    ACTIONS(1461), 1,
      sym__text_indent,
    STATE(538), 1,
      sym_text_body,
    STATE(869), 1,
      aux_sym_text_body_repeat1,
  [8396] = 1,
    ACTIONS(1463), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8403] = 1,
    ACTIONS(1465), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8410] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8417] = 1,
    ACTIONS(1467), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8424] = 4,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    ACTIONS(1469), 1,
      sym_colon,
    STATE(436), 1,
      sym_line_end,
  [8437] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1471), 1,
      sym_text_line,
    STATE(218), 1,
      sym_line_end,
  [8450] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8457] = 1,
    ACTIONS(1473), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8464] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8471] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8478] = 1,
    ACTIONS(850), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8485] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8492] = 1,
    ACTIONS(854), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8499] = 4,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    ACTIONS(1475), 1,
      sym_colon,
    STATE(229), 1,
      sym_line_end,
  [8512] = 1,
    ACTIONS(1477), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8519] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1479), 1,
      sym_text_line,
    STATE(244), 1,
      sym_line_end,
  [8532] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1481), 1,
      sym_text_line,
    STATE(245), 1,
      sym_line_end,
  [8545] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8552] = 1,
    ACTIONS(856), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8559] = 3,
    STATE(588), 1,
      sym_param_name,
    STATE(901), 1,
      sym_param,
    ACTIONS(1219), 2,
      sym__variable_name,
      anon_sym__,
  [8570] = 1,
    ACTIONS(862), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8577] = 1,
    ACTIONS(1483), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8584] = 1,
    ACTIONS(1485), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8591] = 1,
    ACTIONS(1487), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8598] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1489), 1,
      sym_text_line,
    STATE(273), 1,
      sym_line_end,
  [8611] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1491), 1,
      sym_text_line,
    STATE(274), 1,
      sym_line_end,
  [8624] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1493), 1,
      sym_text_line,
    STATE(276), 1,
      sym_line_end,
  [8637] = 4,
    ACTIONS(337), 1,
      sym__inline_comment,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1495), 1,
      sym_text_line,
    STATE(277), 1,
      sym_line_end,
  [8650] = 4,
    ACTIONS(860), 1,
      sym_snake_name,
    ACTIONS(1497), 1,
      sym_colon,
    STATE(592), 1,
      sym_inline_agic_body,
    STATE(845), 1,
      sym_runnable,
  [8663] = 1,
    ACTIONS(1499), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8670] = 1,
    ACTIONS(1501), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8677] = 1,
    ACTIONS(1503), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8684] = 1,
    ACTIONS(1505), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8691] = 4,
    ACTIONS(1507), 1,
      sym_blank_line,
    ACTIONS(1509), 1,
      sym__text_indent,
    STATE(739), 1,
      sym_text_body,
    STATE(874), 1,
      aux_sym_text_body_repeat1,
  [8704] = 4,
    ACTIONS(1511), 1,
      sym_blank_line,
    ACTIONS(1513), 1,
      sym__text_indent,
    STATE(321), 1,
      sym_text_body,
    STATE(875), 1,
      aux_sym_text_body_repeat1,
  [8717] = 1,
    ACTIONS(1515), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8724] = 1,
    ACTIONS(1517), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8731] = 1,
    ACTIONS(1519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8738] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1521), 1,
      sym_blank_line,
    STATE(348), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8749] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1523), 1,
      sym_blank_line,
    STATE(349), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8760] = 3,
    ACTIONS(1269), 1,
      sym_comma,
    STATE(453), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1525), 2,
      sym_newline,
      sym__inline_comment,
  [8771] = 3,
    ACTIONS(1273), 1,
      sym_comma,
    STATE(454), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1527), 2,
      sym_newline,
      sym__inline_comment,
  [8782] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1529), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8793] = 3,
    ACTIONS(265), 1,
      sym_newline,
    ACTIONS(1531), 1,
      sym_integer_literal,
    ACTIONS(257), 2,
      sym__inline_comment,
      sym_text_line,
  [8804] = 2,
    STATE(811), 1,
      sym_text_ref,
    ACTIONS(1427), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8813] = 1,
    ACTIONS(1533), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8820] = 4,
    ACTIONS(1429), 1,
      sym_runnable_ref,
    ACTIONS(1431), 1,
      sym_none_keyword,
    ACTIONS(1433), 1,
      sym_all_keyword,
    STATE(810), 1,
      sym_route_value,
  [8833] = 1,
    ACTIONS(1535), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8840] = 1,
    ACTIONS(1537), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8847] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8854] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8861] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1539), 1,
      sym_blank_line,
    STATE(402), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8872] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1541), 1,
      sym_blank_line,
    STATE(403), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8883] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1543), 1,
      sym_blank_line,
    STATE(405), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8894] = 3,
    ACTIONS(914), 1,
      sym_indented_raw_text,
    ACTIONS(1545), 1,
      sym_blank_line,
    STATE(406), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8905] = 2,
    STATE(1066), 1,
      sym_directive_op,
    ACTIONS(1359), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8914] = 1,
    ACTIONS(868), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8921] = 1,
    ACTIONS(870), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8928] = 1,
    ACTIONS(872), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8935] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1547), 1,
      sym_text_line,
    STATE(457), 1,
      sym_line_end,
  [8948] = 4,
    ACTIONS(303), 1,
      sym__inline_comment,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1549), 1,
      sym_text_line,
    STATE(458), 1,
      sym_line_end,
  [8961] = 1,
    ACTIONS(1551), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8968] = 1,
    ACTIONS(874), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8975] = 1,
    ACTIONS(1553), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8982] = 1,
    ACTIONS(1555), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [8988] = 3,
    ACTIONS(1557), 1,
      sym_pascal_name,
    STATE(1098), 1,
      sym_type_name,
    STATE(1120), 1,
      sym_struct_name,
  [8998] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(352), 1,
      sym_line_end,
  [9008] = 1,
    ACTIONS(1563), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9014] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [9024] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(481), 1,
      sym_line_end,
  [9034] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(635), 1,
      sym_line_end,
  [9044] = 3,
    ACTIONS(1569), 1,
      sym__dedent,
    ACTIONS(1571), 1,
      sym__until_start,
    STATE(66), 1,
      sym_until_clause,
  [9054] = 3,
    ACTIONS(1573), 1,
      sym_rparen,
    ACTIONS(1575), 1,
      sym_comma,
    STATE(712), 1,
      aux_sym_params_repeat1,
  [9064] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(482), 1,
      sym_line_end,
  [9074] = 2,
    ACTIONS(1578), 1,
      sym_flow_spawn_keyword,
    STATE(484), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [9082] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(510), 1,
      sym_line_end,
  [9092] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(511), 1,
      sym_line_end,
  [9102] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(512), 1,
      sym_line_end,
  [9112] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(513), 1,
      sym_line_end,
  [9122] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(514), 1,
      sym_line_end,
  [9132] = 3,
    ACTIONS(1580), 1,
      sym_colon,
    ACTIONS(1582), 1,
      sym_snake_name,
    STATE(1074), 1,
      sym_context_name,
  [9142] = 3,
    ACTIONS(381), 1,
      sym__line_start,
    STATE(128), 1,
      sym__flow_statement,
    STATE(1063), 1,
      sym_statements,
  [9152] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(157), 1,
      sym_line_end,
  [9162] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(203), 1,
      sym_line_end,
  [9172] = 3,
    ACTIONS(832), 1,
      sym_flow_by_keyword,
    STATE(473), 1,
      sym__inline_by_complement,
    STATE(761), 1,
      sym__named_by_complement,
  [9182] = 1,
    ACTIONS(1584), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9188] = 3,
    ACTIONS(1586), 1,
      sym_rparen,
    ACTIONS(1588), 1,
      sym_comma,
    STATE(823), 1,
      aux_sym_params_repeat1,
  [9198] = 3,
    ACTIONS(1590), 1,
      sym_colon,
    ACTIONS(1592), 1,
      sym_snake_name,
    STATE(1105), 1,
      sym_instruct_name,
  [9208] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [9218] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(158), 1,
      sym_line_end,
  [9228] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(153), 1,
      sym_line_end,
  [9238] = 3,
    ACTIONS(1571), 1,
      sym__until_start,
    ACTIONS(1594), 1,
      sym__dedent,
    STATE(75), 1,
      sym_until_clause,
  [9248] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(677), 1,
      sym_line_end,
  [9258] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [9268] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(162), 1,
      sym_line_end,
  [9278] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(165), 1,
      sym_line_end,
  [9288] = 3,
    ACTIONS(1596), 1,
      sym_blank_line,
    ACTIONS(1599), 1,
      sym__text_indent,
    STATE(736), 1,
      aux_sym_text_body_repeat1,
  [9298] = 1,
    ACTIONS(1058), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9304] = 1,
    ACTIONS(1062), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9310] = 1,
    ACTIONS(1064), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9316] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(176), 1,
      sym_line_end,
  [9326] = 1,
    ACTIONS(1072), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9332] = 1,
    ACTIONS(1074), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9338] = 1,
    ACTIONS(1419), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9344] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(760), 1,
      sym_line_end,
  [9354] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(690), 1,
      sym_line_end,
  [9364] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(696), 1,
      sym_line_end,
  [9374] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(697), 1,
      sym_line_end,
  [9384] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(698), 1,
      sym_line_end,
  [9394] = 1,
    ACTIONS(1056), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9400] = 1,
    ACTIONS(1060), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9406] = 2,
    STATE(746), 1,
      sym_local_reference,
    ACTIONS(1601), 2,
      anon_sym__,
      sym_snake_name,
  [9414] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [9424] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(468), 1,
      sym_line_end,
  [9434] = 3,
    ACTIONS(381), 1,
      sym__line_start,
    STATE(128), 1,
      sym__flow_statement,
    STATE(1055), 1,
      sym_statements,
  [9444] = 1,
    ACTIONS(1603), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9450] = 1,
    ACTIONS(1605), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [9456] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(492), 1,
      sym_line_end,
  [9466] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(206), 1,
      sym_line_end,
  [9476] = 1,
    ACTIONS(1421), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9482] = 1,
    ACTIONS(1423), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9488] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(493), 1,
      sym_line_end,
  [9498] = 1,
    ACTIONS(1056), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9504] = 1,
    ACTIONS(1060), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9510] = 1,
    ACTIONS(1038), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9516] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9522] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9528] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9534] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9540] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9546] = 1,
    ACTIONS(1038), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9552] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9558] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9564] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9570] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9576] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9582] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(464), 1,
      sym_line_end,
  [9592] = 2,
    STATE(196), 1,
      sym__order_complement,
    ACTIONS(1607), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [9600] = 1,
    ACTIONS(1609), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [9606] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(537), 1,
      sym_line_end,
  [9616] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(150), 1,
      sym_line_end,
  [9626] = 3,
    ACTIONS(1611), 1,
      sym_blank_line,
    ACTIONS(1613), 1,
      sym__text_indent,
    STATE(736), 1,
      aux_sym_text_body_repeat1,
  [9636] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(178), 1,
      sym_line_end,
  [9646] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(191), 1,
      sym_line_end,
  [9656] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(497), 1,
      sym_line_end,
  [9666] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(437), 1,
      sym_line_end,
  [9676] = 1,
    ACTIONS(1038), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9682] = 1,
    ACTIONS(1040), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9688] = 1,
    ACTIONS(1042), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9694] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(220), 1,
      sym_line_end,
  [9704] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(221), 1,
      sym_line_end,
  [9714] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(222), 1,
      sym_line_end,
  [9724] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(223), 1,
      sym_line_end,
  [9734] = 1,
    ACTIONS(1515), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9740] = 2,
    STATE(790), 1,
      sym_local_reference,
    ACTIONS(1601), 2,
      anon_sym__,
      sym_snake_name,
  [9748] = 1,
    ACTIONS(1044), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9754] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(161), 1,
      sym_line_end,
  [9764] = 1,
    ACTIONS(1048), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9770] = 3,
    ACTIONS(343), 1,
      sym_flow_if_keyword,
    STATE(441), 1,
      sym__inline_if_complement,
    STATE(872), 1,
      sym__named_if_complement,
  [9780] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(442), 1,
      sym_line_end,
  [9790] = 1,
    ACTIONS(1056), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9796] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(443), 1,
      sym_line_end,
  [9806] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(498), 1,
      sym_line_end,
  [9816] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(230), 1,
      sym_line_end,
  [9826] = 1,
    ACTIONS(1393), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9832] = 3,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(820), 1,
      sym__named_if_complement,
  [9842] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(235), 1,
      sym_line_end,
  [9852] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(236), 1,
      sym_line_end,
  [9862] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(155), 1,
      sym_line_end,
  [9872] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(243), 1,
      sym_line_end,
  [9882] = 3,
    ACTIONS(1615), 1,
      sym__inline_comment,
    ACTIONS(1617), 1,
      sym_newline,
    STATE(564), 1,
      sym_line_end,
  [9892] = 3,
    ACTIONS(1615), 1,
      sym__inline_comment,
    ACTIONS(1617), 1,
      sym_newline,
    STATE(565), 1,
      sym_line_end,
  [9902] = 1,
    ACTIONS(1619), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [9908] = 1,
    ACTIONS(1553), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9914] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(249), 1,
      sym_line_end,
  [9924] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(250), 1,
      sym_line_end,
  [9934] = 3,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1621), 1,
      sym_colon,
    STATE(1110), 1,
      sym__window_complement,
  [9944] = 1,
    ACTIONS(1399), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9950] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(253), 1,
      sym_line_end,
  [9960] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(254), 1,
      sym_line_end,
  [9970] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(255), 1,
      sym_line_end,
  [9980] = 3,
    ACTIONS(785), 1,
      sym_flow_by_keyword,
    STATE(258), 1,
      sym__inline_by_complement,
    STATE(832), 1,
      sym__named_by_complement,
  [9990] = 1,
    ACTIONS(1060), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9996] = 3,
    ACTIONS(1588), 1,
      sym_comma,
    ACTIONS(1623), 1,
      sym_rparen,
    STATE(712), 1,
      aux_sym_params_repeat1,
  [10006] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(448), 1,
      sym_line_end,
  [10016] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(262), 1,
      sym_line_end,
  [10026] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(263), 1,
      sym_line_end,
  [10036] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(188), 1,
      sym_line_end,
  [10046] = 2,
    ACTIONS(1625), 1,
      sym_flow_spawn_keyword,
    STATE(264), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10054] = 2,
    ACTIONS(1627), 1,
      sym_colon,
    ACTIONS(1629), 2,
      sym_rparen,
      sym_comma,
  [10062] = 1,
    ACTIONS(1285), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10068] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(267), 1,
      sym_line_end,
  [10078] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(268), 1,
      sym_line_end,
  [10088] = 1,
    ACTIONS(1467), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10094] = 1,
    ACTIONS(1473), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10100] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(272), 1,
      sym_line_end,
  [10110] = 3,
    ACTIONS(1571), 1,
      sym__until_start,
    ACTIONS(1631), 1,
      sym__dedent,
    STATE(79), 1,
      sym_until_clause,
  [10120] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(281), 1,
      sym_line_end,
  [10130] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(282), 1,
      sym_line_end,
  [10140] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(283), 1,
      sym_line_end,
  [10150] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(284), 1,
      sym_line_end,
  [10160] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(285), 1,
      sym_line_end,
  [10170] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(476), 1,
      sym_line_end,
  [10180] = 1,
    ACTIONS(1633), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10186] = 3,
    ACTIONS(1571), 1,
      sym__until_start,
    ACTIONS(1635), 1,
      sym__dedent,
    STATE(81), 1,
      sym_until_clause,
  [10196] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(596), 1,
      sym_line_end,
  [10206] = 2,
    ACTIONS(1343), 1,
      sym_newline,
    ACTIONS(1341), 2,
      sym__inline_comment,
      sym_text_line,
  [10214] = 1,
    ACTIONS(1290), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10220] = 3,
    ACTIONS(1349), 1,
      sym_newline,
    ACTIONS(1637), 1,
      sym__inline_comment,
    STATE(738), 1,
      sym_line_end,
  [10230] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(169), 1,
      sym_line_end,
  [10240] = 3,
    ACTIONS(341), 1,
      sym_newline,
    ACTIONS(1136), 1,
      sym__inline_comment,
    STATE(320), 1,
      sym_line_end,
  [10250] = 3,
    ACTIONS(1639), 1,
      sym__inline_comment,
    ACTIONS(1641), 1,
      sym_newline,
    STATE(269), 1,
      sym_line_end,
  [10260] = 3,
    ACTIONS(1639), 1,
      sym__inline_comment,
    ACTIONS(1641), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [10270] = 1,
    ACTIONS(1643), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10276] = 3,
    ACTIONS(1645), 1,
      sym__inline_comment,
    ACTIONS(1647), 1,
      sym_newline,
    STATE(359), 1,
      sym_line_end,
  [10286] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10294] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(179), 1,
      sym_line_end,
  [10304] = 2,
    STATE(896), 1,
      sym_param_name,
    ACTIONS(1649), 2,
      sym__variable_name,
      anon_sym__,
  [10312] = 1,
    ACTIONS(1651), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10318] = 2,
    STATE(171), 1,
      sym__order_complement,
    ACTIONS(1607), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10326] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [10336] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(177), 1,
      sym_line_end,
  [10346] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(207), 1,
      sym_line_end,
  [10356] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(180), 1,
      sym_line_end,
  [10366] = 2,
    ACTIONS(1655), 1,
      sym_newline,
    ACTIONS(1653), 2,
      sym__inline_comment,
      sym_text_line,
  [10374] = 2,
    ACTIONS(1633), 1,
      sym_newline,
    ACTIONS(1657), 2,
      sym__inline_comment,
      sym_text_line,
  [10382] = 2,
    ACTIONS(1661), 1,
      sym_newline,
    ACTIONS(1659), 2,
      sym__inline_comment,
      sym_text_line,
  [10390] = 2,
    STATE(830), 1,
      sym_recall_source,
    ACTIONS(471), 2,
      anon_sym_far,
      anon_sym_near,
  [10398] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(469), 1,
      sym_line_end,
  [10408] = 3,
    ACTIONS(1611), 1,
      sym_blank_line,
    ACTIONS(1663), 1,
      sym__text_indent,
    STATE(736), 1,
      aux_sym_text_body_repeat1,
  [10418] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(154), 1,
      sym_line_end,
  [10428] = 3,
    ACTIONS(1565), 1,
      sym__inline_comment,
    ACTIONS(1567), 1,
      sym_newline,
    STATE(609), 1,
      sym_line_end,
  [10438] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(470), 1,
      sym_line_end,
  [10448] = 3,
    ACTIONS(821), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1665), 1,
      sym_colon,
    STATE(1117), 1,
      sym__window_complement,
  [10458] = 3,
    ACTIONS(1611), 1,
      sym_blank_line,
    ACTIONS(1667), 1,
      sym__text_indent,
    STATE(736), 1,
      aux_sym_text_body_repeat1,
  [10468] = 3,
    ACTIONS(1611), 1,
      sym_blank_line,
    ACTIONS(1669), 1,
      sym__text_indent,
    STATE(736), 1,
      aux_sym_text_body_repeat1,
  [10478] = 3,
    ACTIONS(309), 1,
      sym_newline,
    ACTIONS(1124), 1,
      sym__inline_comment,
    STATE(462), 1,
      sym_line_end,
  [10488] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(427), 1,
      sym_line_end,
  [10498] = 1,
    ACTIONS(1046), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10504] = 2,
    ACTIONS(1671), 1,
      anon_sym_EQ,
    STATE(686), 1,
      sym_assign_operator,
  [10511] = 2,
    ACTIONS(1673), 1,
      sym_comment_text,
    ACTIONS(1675), 1,
      sym__comment_end,
  [10518] = 2,
    ACTIONS(1677), 1,
      sym__snake_kebab_name,
    STATE(1114), 1,
      sym_job_name,
  [10525] = 2,
    ACTIONS(1679), 1,
      aux_sym__doc_space_token1,
    STATE(957), 1,
      sym__required_space,
  [10532] = 2,
    ACTIONS(55), 1,
      sym__flow_raw_text,
    STATE(217), 1,
      sym__implicit_run_line,
  [10539] = 2,
    ACTIONS(1681), 1,
      sym__one_integer_literal,
    ACTIONS(1683), 1,
      sym__other_integer_literal,
  [10546] = 1,
    ACTIONS(1685), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10551] = 2,
    ACTIONS(1687), 1,
      sym_flow_run_keyword,
    STATE(214), 1,
      sym__run_after_modifier,
  [10558] = 2,
    ACTIONS(1677), 1,
      sym__snake_kebab_name,
    STATE(998), 1,
      sym_job_name,
  [10565] = 1,
    ACTIONS(1110), 2,
      sym_newline,
      sym__inline_comment,
  [10570] = 1,
    ACTIONS(1112), 2,
      sym_newline,
      sym__inline_comment,
  [10575] = 2,
    ACTIONS(1689), 1,
      sym__snake_kebab_name,
    STATE(1019), 1,
      sym_cap_name,
  [10582] = 2,
    ACTIONS(1691), 1,
      sym__reduce_text_start,
    STATE(521), 1,
      sym__reduce_text_body,
  [10589] = 2,
    ACTIONS(1689), 1,
      sym__snake_kebab_name,
    STATE(1064), 1,
      sym_cap_name,
  [10596] = 1,
    ACTIONS(1056), 2,
      sym_blank_line,
      sym__text_indent,
  [10601] = 1,
    ACTIONS(1693), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [10606] = 2,
    ACTIONS(1695), 1,
      sym_arrow,
    ACTIONS(1697), 1,
      sym_colon,
  [10613] = 2,
    ACTIONS(1699), 1,
      aux_sym__doc_space_token1,
    STATE(1065), 1,
      sym__doc_space,
  [10620] = 2,
    ACTIONS(1689), 1,
      sym__snake_kebab_name,
    STATE(1099), 1,
      sym_cap_name,
  [10627] = 2,
    ACTIONS(1701), 1,
      sym_comment_text,
    ACTIONS(1703), 1,
      sym__comment_end,
  [10634] = 2,
    ACTIONS(1705), 1,
      sym_flow_run_keyword,
    STATE(658), 1,
      sym__run_after_modifier,
  [10641] = 2,
    ACTIONS(1707), 1,
      anon_sym_lanes,
    STATE(353), 1,
      sym_flow_lanes_keyword,
  [10648] = 1,
    ACTIONS(1709), 2,
      sym_rparen,
      sym_comma,
  [10653] = 1,
    ACTIONS(1711), 2,
      sym_newline,
      sym__inline_comment,
  [10658] = 2,
    ACTIONS(1713), 1,
      anon_sym_lanes,
    STATE(888), 1,
      sym_flow_lanes_keyword,
  [10665] = 2,
    ACTIONS(1691), 1,
      sym__reduce_text_start,
    STATE(515), 1,
      sym__reduce_text_body,
  [10672] = 1,
    ACTIONS(1715), 2,
      sym_arrow,
      sym_colon,
  [10677] = 1,
    ACTIONS(1717), 2,
      sym_rparen,
      sym_comma,
  [10682] = 1,
    ACTIONS(1719), 2,
      sym_rparen,
      sym_comma,
  [10687] = 1,
    ACTIONS(1721), 2,
      sym_arrow,
      sym_colon,
  [10692] = 1,
    ACTIONS(1723), 2,
      sym_arrow,
      sym_colon,
  [10697] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(201), 1,
      sym__implicit_run_line,
  [10704] = 2,
    ACTIONS(1725), 1,
      sym_arrow,
    ACTIONS(1727), 1,
      sym_colon,
  [10711] = 2,
    ACTIONS(1729), 1,
      sym_snake_name,
    STATE(915), 1,
      sym_field_name,
  [10718] = 2,
    ACTIONS(1691), 1,
      sym__reduce_text_start,
    STATE(504), 1,
      sym__reduce_text_body,
  [10725] = 1,
    ACTIONS(1731), 2,
      sym_optional_marker,
      sym_colon,
  [10730] = 2,
    ACTIONS(1733), 1,
      sym_optional_marker,
    ACTIONS(1735), 1,
      sym_colon,
  [10737] = 2,
    ACTIONS(629), 1,
      sym__from_start,
    STATE(383), 1,
      sym__from_complement,
  [10744] = 1,
    ACTIONS(1737), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [10749] = 2,
    ACTIONS(629), 1,
      sym__from_start,
    STATE(393), 1,
      sym__from_complement,
  [10756] = 2,
    ACTIONS(1739), 1,
      aux_sym__doc_space_token1,
    STATE(857), 1,
      sym__doc_space,
  [10763] = 2,
    ACTIONS(1741), 1,
      sym_text_line,
    STATE(854), 1,
      sym_property_value,
  [10770] = 2,
    ACTIONS(1743), 1,
      anon_sym_EQ,
    STATE(920), 1,
      sym_assign_operator,
  [10777] = 2,
    ACTIONS(1745), 1,
      sym_comment_text,
    ACTIONS(1747), 1,
      sym__comment_end,
  [10784] = 2,
    ACTIONS(1749), 1,
      sym_comment_text,
    ACTIONS(1751), 1,
      sym__comment_end,
  [10791] = 2,
    ACTIONS(1753), 1,
      sym_comment_text,
    ACTIONS(1755), 1,
      sym__comment_end,
  [10798] = 2,
    ACTIONS(479), 1,
      sym__line_start,
    STATE(90), 1,
      sym_field,
  [10805] = 2,
    ACTIONS(1757), 1,
      sym_text_line,
    STATE(871), 1,
      sym_cap_ref,
  [10812] = 2,
    ACTIONS(1759), 1,
      sym_comment_text,
    ACTIONS(1761), 1,
      sym__comment_end,
  [10819] = 2,
    ACTIONS(1763), 1,
      sym_comment_text,
    ACTIONS(1765), 1,
      sym__comment_end,
  [10826] = 1,
    ACTIONS(1767), 2,
      sym_newline,
      sym__inline_comment,
  [10831] = 2,
    ACTIONS(1769), 1,
      sym_snake_name,
    STATE(921), 1,
      sym_property_key,
  [10838] = 2,
    ACTIONS(1771), 1,
      sym_comment_text,
    ACTIONS(1773), 1,
      sym__comment_end,
  [10845] = 2,
    ACTIONS(1775), 1,
      sym_comment_text,
    ACTIONS(1777), 1,
      sym__comment_end,
  [10852] = 2,
    ACTIONS(1779), 1,
      sym_comment_text,
    ACTIONS(1781), 1,
      sym__comment_end,
  [10859] = 2,
    ACTIONS(1783), 1,
      sym_comment_text,
    ACTIONS(1785), 1,
      sym__comment_end,
  [10866] = 1,
    ACTIONS(1787), 2,
      sym_newline,
      sym__inline_comment,
  [10871] = 2,
    ACTIONS(1789), 1,
      sym_comment_text,
    ACTIONS(1791), 1,
      sym__comment_end,
  [10878] = 2,
    ACTIONS(1793), 1,
      sym_comment_text,
    ACTIONS(1795), 1,
      sym__comment_end,
  [10885] = 2,
    ACTIONS(1797), 1,
      sym_arrow,
    ACTIONS(1799), 1,
      sym_colon,
  [10892] = 2,
    ACTIONS(1801), 1,
      sym_comment_text,
    ACTIONS(1803), 1,
      sym__comment_end,
  [10899] = 2,
    ACTIONS(1805), 1,
      sym_comment_text,
    ACTIONS(1807), 1,
      sym__comment_end,
  [10906] = 2,
    ACTIONS(1809), 1,
      sym_snake_name,
    STATE(241), 1,
      sym_agent,
  [10913] = 2,
    ACTIONS(1811), 1,
      sym_comment_text,
    ACTIONS(1813), 1,
      sym__comment_end,
  [10920] = 2,
    ACTIONS(1815), 1,
      sym_comment_text,
    ACTIONS(1817), 1,
      sym__comment_end,
  [10927] = 1,
    ACTIONS(1525), 2,
      sym_newline,
      sym__inline_comment,
  [10932] = 2,
    ACTIONS(1819), 1,
      sym_comment_text,
    ACTIONS(1821), 1,
      sym__comment_end,
  [10939] = 2,
    ACTIONS(1823), 1,
      sym_comment_text,
    ACTIONS(1825), 1,
      sym__comment_end,
  [10946] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1011), 1,
      sym_param_doc_tag,
  [10953] = 2,
    ACTIONS(189), 1,
      sym__agic_raw_text,
    STATE(401), 1,
      sym__unroled_message_line,
  [10960] = 2,
    ACTIONS(1829), 1,
      sym_arrow,
    ACTIONS(1831), 1,
      sym_colon,
  [10967] = 1,
    ACTIONS(1527), 2,
      sym_newline,
      sym__inline_comment,
  [10972] = 1,
    ACTIONS(1833), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10977] = 2,
    ACTIONS(1689), 1,
      sym__snake_kebab_name,
    STATE(1108), 1,
      sym_cap_name,
  [10984] = 2,
    ACTIONS(479), 1,
      sym__line_start,
    STATE(145), 1,
      sym_field,
  [10991] = 2,
    ACTIONS(1809), 1,
      sym_snake_name,
    STATE(366), 1,
      sym_agent,
  [10998] = 2,
    ACTIONS(1835), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
  [11005] = 2,
    ACTIONS(1837), 1,
      sym__one_integer_literal,
    ACTIONS(1839), 1,
      sym__other_integer_literal,
  [11012] = 2,
    ACTIONS(860), 1,
      sym_snake_name,
    STATE(704), 1,
      sym_runnable,
  [11019] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1111), 1,
      sym_param_doc_tag,
  [11026] = 1,
    ACTIONS(1841), 2,
      sym_newline,
      sym__inline_comment,
  [11031] = 2,
    ACTIONS(629), 1,
      sym__from_start,
    STATE(392), 1,
      sym__from_complement,
  [11038] = 2,
    ACTIONS(629), 1,
      sym__from_start,
    STATE(395), 1,
      sym__from_complement,
  [11045] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(995), 1,
      sym_param_doc_tag,
  [11052] = 1,
    ACTIONS(1060), 2,
      sym_blank_line,
      sym__text_indent,
  [11057] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1006), 1,
      sym_param_doc_tag,
  [11064] = 2,
    ACTIONS(1691), 1,
      sym__reduce_text_start,
    STATE(490), 1,
      sym__reduce_text_body,
  [11071] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1017), 1,
      sym_param_doc_tag,
  [11078] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1024), 1,
      sym_param_doc_tag,
  [11085] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1031), 1,
      sym_param_doc_tag,
  [11092] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1038), 1,
      sym_param_doc_tag,
  [11099] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1045), 1,
      sym_param_doc_tag,
  [11106] = 2,
    ACTIONS(1827), 1,
      anon_sym_ATparam,
    STATE(1052), 1,
      sym_param_doc_tag,
  [11113] = 2,
    ACTIONS(1843), 1,
      anon_sym_EQ,
    STATE(951), 1,
      sym_assign_operator,
  [11120] = 2,
    ACTIONS(1843), 1,
      anon_sym_EQ,
    STATE(684), 1,
      sym_assign_operator,
  [11127] = 2,
    ACTIONS(1845), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym_assign_operator,
  [11134] = 2,
    ACTIONS(1671), 1,
      anon_sym_EQ,
    STATE(601), 1,
      sym_assign_operator,
  [11141] = 2,
    ACTIONS(1835), 1,
      anon_sym_EQ,
    STATE(7), 1,
      sym_assign_operator,
  [11148] = 2,
    ACTIONS(1843), 1,
      anon_sym_EQ,
    STATE(885), 1,
      sym_assign_operator,
  [11155] = 2,
    ACTIONS(1843), 1,
      anon_sym_EQ,
    STATE(600), 1,
      sym_assign_operator,
  [11162] = 2,
    ACTIONS(1845), 1,
      anon_sym_EQ,
    STATE(98), 1,
      sym_assign_operator,
  [11169] = 2,
    ACTIONS(1847), 1,
      sym_comment_text,
    ACTIONS(1849), 1,
      sym__comment_end,
  [11176] = 1,
    ACTIONS(1851), 2,
      sym_newline,
      sym__inline_comment,
  [11181] = 1,
    ACTIONS(1853), 1,
      sym_colon,
  [11185] = 1,
    ACTIONS(1855), 1,
      sym__dedent,
  [11189] = 1,
    ACTIONS(335), 1,
      sym__dedent,
  [11193] = 1,
    ACTIONS(1857), 1,
      sym__dedent,
  [11197] = 1,
    ACTIONS(1859), 1,
      sym__dedent,
  [11201] = 1,
    ACTIONS(1861), 1,
      sym_flow_exec_keyword,
  [11205] = 1,
    ACTIONS(1863), 1,
      sym__dedent,
  [11209] = 1,
    ACTIONS(1865), 1,
      sym__dedent,
  [11213] = 1,
    ACTIONS(1867), 1,
      sym__dedent,
  [11217] = 1,
    ACTIONS(1869), 1,
      sym_integer_literal,
  [11221] = 1,
    ACTIONS(1871), 1,
      sym_colon,
  [11225] = 1,
    ACTIONS(1873), 1,
      sym__comment_end,
  [11229] = 1,
    ACTIONS(1875), 1,
      sym__comment_end,
  [11233] = 1,
    ACTIONS(1877), 1,
      sym__comment_end,
  [11237] = 1,
    ACTIONS(1879), 1,
      sym_newline,
  [11241] = 1,
    ACTIONS(1881), 1,
      sym_flow_from_keyword,
  [11245] = 1,
    ACTIONS(1883), 1,
      sym_colon,
  [11249] = 1,
    ACTIONS(1885), 1,
      sym_colon,
  [11253] = 1,
    ACTIONS(1887), 1,
      sym_colon,
  [11257] = 1,
    ACTIONS(1889), 1,
      sym_directive_value,
  [11261] = 1,
    ACTIONS(1685), 1,
      sym_directive_value,
  [11265] = 1,
    ACTIONS(1891), 1,
      sym_colon,
  [11269] = 1,
    ACTIONS(1893), 1,
      sym__comment_end,
  [11273] = 1,
    ACTIONS(1895), 1,
      sym__comment_end,
  [11277] = 1,
    ACTIONS(1897), 1,
      sym__comment_end,
  [11281] = 1,
    ACTIONS(1899), 1,
      sym_newline,
  [11285] = 1,
    ACTIONS(1901), 1,
      sym__dedent,
  [11289] = 1,
    ACTIONS(1903), 1,
      sym_colon,
  [11293] = 1,
    ACTIONS(1905), 1,
      sym_newline,
  [11297] = 1,
    ACTIONS(1907), 1,
      sym__comment_end,
  [11301] = 1,
    ACTIONS(1909), 1,
      sym__dedent,
  [11305] = 1,
    ACTIONS(1911), 1,
      sym__dedent,
  [11309] = 1,
    ACTIONS(313), 1,
      sym__dedent,
  [11313] = 1,
    ACTIONS(1913), 1,
      sym__comment_end,
  [11317] = 1,
    ACTIONS(1915), 1,
      sym__comment_end,
  [11321] = 1,
    ACTIONS(1917), 1,
      sym__comment_end,
  [11325] = 1,
    ACTIONS(1919), 1,
      sym_newline,
  [11329] = 1,
    ACTIONS(1921), 1,
      sym_colon,
  [11333] = 1,
    ACTIONS(1923), 1,
      sym_colon,
  [11337] = 1,
    ACTIONS(1925), 1,
      sym_flow_lane_keyword,
  [11341] = 1,
    ACTIONS(1927), 1,
      sym__comment_end,
  [11345] = 1,
    ACTIONS(1929), 1,
      sym__comment_end,
  [11349] = 1,
    ACTIONS(1931), 1,
      sym__comment_end,
  [11353] = 1,
    ACTIONS(1933), 1,
      sym_newline,
  [11357] = 1,
    ACTIONS(1935), 1,
      sym__dedent,
  [11361] = 1,
    ACTIONS(1937), 1,
      sym__dedent,
  [11365] = 1,
    ACTIONS(1939), 1,
      sym_colon,
  [11369] = 1,
    ACTIONS(1941), 1,
      sym__comment_end,
  [11373] = 1,
    ACTIONS(1943), 1,
      sym__comment_end,
  [11377] = 1,
    ACTIONS(1945), 1,
      sym__comment_end,
  [11381] = 1,
    ACTIONS(1947), 1,
      sym_newline,
  [11385] = 1,
    ACTIONS(1949), 1,
      sym_colon,
  [11389] = 1,
    ACTIONS(1401), 1,
      aux_sym__doc_space_token1,
  [11393] = 1,
    ACTIONS(1951), 1,
      sym_integer_literal,
  [11397] = 1,
    ACTIONS(1953), 1,
      sym__comment_end,
  [11401] = 1,
    ACTIONS(1955), 1,
      sym__comment_end,
  [11405] = 1,
    ACTIONS(1957), 1,
      sym__comment_end,
  [11409] = 1,
    ACTIONS(1959), 1,
      sym_newline,
  [11413] = 1,
    ACTIONS(1961), 1,
      sym__comment_end,
  [11417] = 1,
    ACTIONS(1963), 1,
      sym_flow_exec_keyword,
  [11421] = 1,
    ACTIONS(1965), 1,
      sym_flow_until_keyword,
  [11425] = 1,
    ACTIONS(1967), 1,
      sym__comment_end,
  [11429] = 1,
    ACTIONS(1969), 1,
      sym__comment_end,
  [11433] = 1,
    ACTIONS(1971), 1,
      sym__comment_end,
  [11437] = 1,
    ACTIONS(1973), 1,
      sym_newline,
  [11441] = 1,
    ACTIONS(1975), 1,
      anon_sym_EQ,
  [11445] = 1,
    ACTIONS(1977), 1,
      sym__dedent,
  [11449] = 1,
    ACTIONS(1979), 1,
      sym_newline,
  [11453] = 1,
    ACTIONS(1981), 1,
      sym__comment_end,
  [11457] = 1,
    ACTIONS(1983), 1,
      sym__comment_end,
  [11461] = 1,
    ACTIONS(1985), 1,
      sym__comment_end,
  [11465] = 1,
    ACTIONS(1987), 1,
      sym_newline,
  [11469] = 1,
    ACTIONS(1989), 1,
      sym_newline,
  [11473] = 1,
    ACTIONS(1991), 1,
      sym__dedent,
  [11477] = 1,
    ACTIONS(1993), 1,
      sym_colon,
  [11481] = 1,
    ACTIONS(1995), 1,
      sym_colon,
  [11485] = 1,
    ACTIONS(1661), 1,
      anon_sym_EQ,
  [11489] = 1,
    ACTIONS(1997), 1,
      sym__dedent,
  [11493] = 1,
    ACTIONS(1999), 1,
      sym_flow_run_keyword,
  [11497] = 1,
    ACTIONS(2001), 1,
      sym_newline,
  [11501] = 1,
    ACTIONS(1367), 1,
      sym__dedent,
  [11505] = 1,
    ACTIONS(2003), 1,
      sym__dedent,
  [11509] = 1,
    ACTIONS(2005), 1,
      sym_colon,
  [11513] = 1,
    ACTIONS(2007), 1,
      sym_comment_text,
  [11517] = 1,
    ACTIONS(1833), 1,
      sym_directive_value,
  [11521] = 1,
    ACTIONS(2009), 1,
      sym__dedent,
  [11525] = 1,
    ACTIONS(2011), 1,
      sym_flow_exec_keyword,
  [11529] = 1,
    ACTIONS(2013), 1,
      sym_flow_until_keyword,
  [11533] = 1,
    ACTIONS(2015), 1,
      sym_colon,
  [11537] = 1,
    ACTIONS(2017), 1,
      sym_colon,
  [11541] = 1,
    ACTIONS(2019), 1,
      sym_integer_literal,
  [11545] = 1,
    ACTIONS(2021), 1,
      ts_builtin_sym_end,
  [11549] = 1,
    ACTIONS(2023), 1,
      sym_colon,
  [11553] = 1,
    ACTIONS(2025), 1,
      sym__dedent,
  [11557] = 1,
    ACTIONS(2027), 1,
      sym_colon,
  [11561] = 1,
    ACTIONS(2029), 1,
      sym_colon,
  [11565] = 1,
    ACTIONS(2031), 1,
      sym_colon,
  [11569] = 1,
    ACTIONS(2033), 1,
      sym__dedent,
  [11573] = 1,
    ACTIONS(2035), 1,
      sym_colon,
  [11577] = 1,
    ACTIONS(2037), 1,
      sym_flow_exec_keyword,
  [11581] = 1,
    ACTIONS(2039), 1,
      sym_flow_until_keyword,
  [11585] = 1,
    ACTIONS(2041), 1,
      sym_flow_until_keyword,
  [11589] = 1,
    ACTIONS(2043), 1,
      sym_integer_literal,
  [11593] = 1,
    ACTIONS(2045), 1,
      sym__comment_end,
  [11597] = 1,
    ACTIONS(2047), 1,
      sym_flow_until_keyword,
  [11601] = 1,
    ACTIONS(1283), 1,
      sym__dedent,
  [11605] = 1,
    ACTIONS(2049), 1,
      sym__dedent,
  [11609] = 1,
    ACTIONS(2051), 1,
      sym__comment_end,
  [11613] = 1,
    ACTIONS(2053), 1,
      sym_colon,
  [11617] = 1,
    ACTIONS(2055), 1,
      sym_newline,
  [11621] = 1,
    ACTIONS(2057), 1,
      sym__dedent,
  [11625] = 1,
    ACTIONS(2059), 1,
      sym_newline,
  [11629] = 1,
    ACTIONS(2061), 1,
      sym__dedent,
  [11633] = 1,
    ACTIONS(2063), 1,
      sym_colon,
  [11637] = 1,
    ACTIONS(2065), 1,
      sym_colon,
  [11641] = 1,
    ACTIONS(2067), 1,
      sym_colon,
  [11645] = 1,
    ACTIONS(2069), 1,
      sym_colon,
  [11649] = 1,
    ACTIONS(2071), 1,
      sym_colon,
  [11653] = 1,
    ACTIONS(2073), 1,
      sym_newline,
  [11657] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [11661] = 1,
    ACTIONS(2075), 1,
      sym_flow_lane_keyword,
  [11665] = 1,
    ACTIONS(2077), 1,
      sym_colon,
  [11669] = 1,
    ACTIONS(2079), 1,
      sym_flow_time_keyword,
  [11673] = 1,
    ACTIONS(2081), 1,
      sym_colon,
  [11677] = 1,
    ACTIONS(2079), 1,
      sym_flow_times_keyword,
  [11681] = 1,
    ACTIONS(2083), 1,
      sym__dedent,
  [11685] = 1,
    ACTIONS(2085), 1,
      sym_colon,
  [11689] = 1,
    ACTIONS(2087), 1,
      sym__dedent,
  [11693] = 1,
    ACTIONS(2089), 1,
      sym_colon,
  [11697] = 1,
    ACTIONS(2091), 1,
      sym__comment_end,
  [11701] = 1,
    ACTIONS(2093), 1,
      sym_runnable_ref,
  [11705] = 1,
    ACTIONS(2095), 1,
      sym_flow_until_keyword,
  [11709] = 1,
    ACTIONS(2097), 1,
      sym_colon,
  [11713] = 1,
    ACTIONS(2099), 1,
      sym_colon,
  [11717] = 1,
    ACTIONS(2101), 1,
      sym_cap_kind,
  [11721] = 1,
    ACTIONS(2103), 1,
      sym_colon,
  [11725] = 1,
    ACTIONS(2105), 1,
      anon_sym_EQ,
  [11729] = 1,
    ACTIONS(2107), 1,
      sym__dedent,
  [11733] = 1,
    ACTIONS(2109), 1,
      sym_colon,
  [11737] = 1,
    ACTIONS(2111), 1,
      sym__dedent,
  [11741] = 1,
    ACTIONS(2113), 1,
      sym__dedent,
  [11745] = 1,
    ACTIONS(2115), 1,
      sym__comment_end,
  [11749] = 1,
    ACTIONS(2117), 1,
      sym__comment_end,
  [11753] = 1,
    ACTIONS(2119), 1,
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
  [SMALL_STATE(16)] = 551,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 610,
  [SMALL_STATE(19)] = 643,
  [SMALL_STATE(20)] = 676,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 733,
  [SMALL_STATE(23)] = 757,
  [SMALL_STATE(24)] = 781,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 829,
  [SMALL_STATE(27)] = 853,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 901,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 949,
  [SMALL_STATE(32)] = 981,
  [SMALL_STATE(33)] = 1005,
  [SMALL_STATE(34)] = 1029,
  [SMALL_STATE(35)] = 1053,
  [SMALL_STATE(36)] = 1077,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1157,
  [SMALL_STATE(40)] = 1186,
  [SMALL_STATE(41)] = 1215,
  [SMALL_STATE(42)] = 1244,
  [SMALL_STATE(43)] = 1273,
  [SMALL_STATE(44)] = 1297,
  [SMALL_STATE(45)] = 1323,
  [SMALL_STATE(46)] = 1347,
  [SMALL_STATE(47)] = 1371,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1423,
  [SMALL_STATE(50)] = 1449,
  [SMALL_STATE(51)] = 1473,
  [SMALL_STATE(52)] = 1499,
  [SMALL_STATE(53)] = 1525,
  [SMALL_STATE(54)] = 1551,
  [SMALL_STATE(55)] = 1575,
  [SMALL_STATE(56)] = 1603,
  [SMALL_STATE(57)] = 1629,
  [SMALL_STATE(58)] = 1655,
  [SMALL_STATE(59)] = 1681,
  [SMALL_STATE(60)] = 1704,
  [SMALL_STATE(61)] = 1723,
  [SMALL_STATE(62)] = 1744,
  [SMALL_STATE(63)] = 1767,
  [SMALL_STATE(64)] = 1790,
  [SMALL_STATE(65)] = 1809,
  [SMALL_STATE(66)] = 1830,
  [SMALL_STATE(67)] = 1853,
  [SMALL_STATE(68)] = 1874,
  [SMALL_STATE(69)] = 1897,
  [SMALL_STATE(70)] = 1916,
  [SMALL_STATE(71)] = 1935,
  [SMALL_STATE(72)] = 1960,
  [SMALL_STATE(73)] = 1981,
  [SMALL_STATE(74)] = 2004,
  [SMALL_STATE(75)] = 2029,
  [SMALL_STATE(76)] = 2052,
  [SMALL_STATE(77)] = 2075,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2123,
  [SMALL_STATE(80)] = 2146,
  [SMALL_STATE(81)] = 2169,
  [SMALL_STATE(82)] = 2192,
  [SMALL_STATE(83)] = 2215,
  [SMALL_STATE(84)] = 2234,
  [SMALL_STATE(85)] = 2253,
  [SMALL_STATE(86)] = 2272,
  [SMALL_STATE(87)] = 2297,
  [SMALL_STATE(88)] = 2320,
  [SMALL_STATE(89)] = 2336,
  [SMALL_STATE(90)] = 2354,
  [SMALL_STATE(91)] = 2372,
  [SMALL_STATE(92)] = 2392,
  [SMALL_STATE(93)] = 2412,
  [SMALL_STATE(94)] = 2430,
  [SMALL_STATE(95)] = 2448,
  [SMALL_STATE(96)] = 2466,
  [SMALL_STATE(97)] = 2482,
  [SMALL_STATE(98)] = 2500,
  [SMALL_STATE(99)] = 2516,
  [SMALL_STATE(100)] = 2534,
  [SMALL_STATE(101)] = 2548,
  [SMALL_STATE(102)] = 2566,
  [SMALL_STATE(103)] = 2580,
  [SMALL_STATE(104)] = 2598,
  [SMALL_STATE(105)] = 2618,
  [SMALL_STATE(106)] = 2638,
  [SMALL_STATE(107)] = 2658,
  [SMALL_STATE(108)] = 2680,
  [SMALL_STATE(109)] = 2698,
  [SMALL_STATE(110)] = 2716,
  [SMALL_STATE(111)] = 2734,
  [SMALL_STATE(112)] = 2756,
  [SMALL_STATE(113)] = 2774,
  [SMALL_STATE(114)] = 2794,
  [SMALL_STATE(115)] = 2812,
  [SMALL_STATE(116)] = 2832,
  [SMALL_STATE(117)] = 2850,
  [SMALL_STATE(118)] = 2868,
  [SMALL_STATE(119)] = 2886,
  [SMALL_STATE(120)] = 2908,
  [SMALL_STATE(121)] = 2926,
  [SMALL_STATE(122)] = 2944,
  [SMALL_STATE(123)] = 2964,
  [SMALL_STATE(124)] = 2982,
  [SMALL_STATE(125)] = 3004,
  [SMALL_STATE(126)] = 3022,
  [SMALL_STATE(127)] = 3040,
  [SMALL_STATE(128)] = 3058,
  [SMALL_STATE(129)] = 3076,
  [SMALL_STATE(130)] = 3096,
  [SMALL_STATE(131)] = 3114,
  [SMALL_STATE(132)] = 3132,
  [SMALL_STATE(133)] = 3150,
  [SMALL_STATE(134)] = 3168,
  [SMALL_STATE(135)] = 3186,
  [SMALL_STATE(136)] = 3204,
  [SMALL_STATE(137)] = 3222,
  [SMALL_STATE(138)] = 3240,
  [SMALL_STATE(139)] = 3258,
  [SMALL_STATE(140)] = 3278,
  [SMALL_STATE(141)] = 3298,
  [SMALL_STATE(142)] = 3316,
  [SMALL_STATE(143)] = 3336,
  [SMALL_STATE(144)] = 3356,
  [SMALL_STATE(145)] = 3376,
  [SMALL_STATE(146)] = 3394,
  [SMALL_STATE(147)] = 3412,
  [SMALL_STATE(148)] = 3432,
  [SMALL_STATE(149)] = 3452,
  [SMALL_STATE(150)] = 3472,
  [SMALL_STATE(151)] = 3489,
  [SMALL_STATE(152)] = 3502,
  [SMALL_STATE(153)] = 3517,
  [SMALL_STATE(154)] = 3534,
  [SMALL_STATE(155)] = 3551,
  [SMALL_STATE(156)] = 3568,
  [SMALL_STATE(157)] = 3581,
  [SMALL_STATE(158)] = 3598,
  [SMALL_STATE(159)] = 3615,
  [SMALL_STATE(160)] = 3634,
  [SMALL_STATE(161)] = 3647,
  [SMALL_STATE(162)] = 3664,
  [SMALL_STATE(163)] = 3681,
  [SMALL_STATE(164)] = 3700,
  [SMALL_STATE(165)] = 3719,
  [SMALL_STATE(166)] = 3736,
  [SMALL_STATE(167)] = 3755,
  [SMALL_STATE(168)] = 3774,
  [SMALL_STATE(169)] = 3793,
  [SMALL_STATE(170)] = 3810,
  [SMALL_STATE(171)] = 3827,
  [SMALL_STATE(172)] = 3846,
  [SMALL_STATE(173)] = 3861,
  [SMALL_STATE(174)] = 3878,
  [SMALL_STATE(175)] = 3897,
  [SMALL_STATE(176)] = 3914,
  [SMALL_STATE(177)] = 3931,
  [SMALL_STATE(178)] = 3948,
  [SMALL_STATE(179)] = 3965,
  [SMALL_STATE(180)] = 3982,
  [SMALL_STATE(181)] = 3999,
  [SMALL_STATE(182)] = 4018,
  [SMALL_STATE(183)] = 4037,
  [SMALL_STATE(184)] = 4056,
  [SMALL_STATE(185)] = 4075,
  [SMALL_STATE(186)] = 4094,
  [SMALL_STATE(187)] = 4109,
  [SMALL_STATE(188)] = 4128,
  [SMALL_STATE(189)] = 4145,
  [SMALL_STATE(190)] = 4164,
  [SMALL_STATE(191)] = 4183,
  [SMALL_STATE(192)] = 4200,
  [SMALL_STATE(193)] = 4215,
  [SMALL_STATE(194)] = 4230,
  [SMALL_STATE(195)] = 4245,
  [SMALL_STATE(196)] = 4260,
  [SMALL_STATE(197)] = 4279,
  [SMALL_STATE(198)] = 4288,
  [SMALL_STATE(199)] = 4301,
  [SMALL_STATE(200)] = 4310,
  [SMALL_STATE(201)] = 4327,
  [SMALL_STATE(202)] = 4336,
  [SMALL_STATE(203)] = 4353,
  [SMALL_STATE(204)] = 4370,
  [SMALL_STATE(205)] = 4389,
  [SMALL_STATE(206)] = 4404,
  [SMALL_STATE(207)] = 4421,
  [SMALL_STATE(208)] = 4438,
  [SMALL_STATE(209)] = 4454,
  [SMALL_STATE(210)] = 4462,
  [SMALL_STATE(211)] = 4470,
  [SMALL_STATE(212)] = 4478,
  [SMALL_STATE(213)] = 4486,
  [SMALL_STATE(214)] = 4494,
  [SMALL_STATE(215)] = 4502,
  [SMALL_STATE(216)] = 4510,
  [SMALL_STATE(217)] = 4526,
  [SMALL_STATE(218)] = 4534,
  [SMALL_STATE(219)] = 4542,
  [SMALL_STATE(220)] = 4550,
  [SMALL_STATE(221)] = 4558,
  [SMALL_STATE(222)] = 4566,
  [SMALL_STATE(223)] = 4574,
  [SMALL_STATE(224)] = 4582,
  [SMALL_STATE(225)] = 4590,
  [SMALL_STATE(226)] = 4598,
  [SMALL_STATE(227)] = 4606,
  [SMALL_STATE(228)] = 4614,
  [SMALL_STATE(229)] = 4622,
  [SMALL_STATE(230)] = 4630,
  [SMALL_STATE(231)] = 4638,
  [SMALL_STATE(232)] = 4646,
  [SMALL_STATE(233)] = 4654,
  [SMALL_STATE(234)] = 4662,
  [SMALL_STATE(235)] = 4670,
  [SMALL_STATE(236)] = 4678,
  [SMALL_STATE(237)] = 4686,
  [SMALL_STATE(238)] = 4694,
  [SMALL_STATE(239)] = 4702,
  [SMALL_STATE(240)] = 4710,
  [SMALL_STATE(241)] = 4724,
  [SMALL_STATE(242)] = 4740,
  [SMALL_STATE(243)] = 4754,
  [SMALL_STATE(244)] = 4762,
  [SMALL_STATE(245)] = 4770,
  [SMALL_STATE(246)] = 4778,
  [SMALL_STATE(247)] = 4786,
  [SMALL_STATE(248)] = 4794,
  [SMALL_STATE(249)] = 4802,
  [SMALL_STATE(250)] = 4810,
  [SMALL_STATE(251)] = 4818,
  [SMALL_STATE(252)] = 4826,
  [SMALL_STATE(253)] = 4834,
  [SMALL_STATE(254)] = 4842,
  [SMALL_STATE(255)] = 4850,
  [SMALL_STATE(256)] = 4858,
  [SMALL_STATE(257)] = 4866,
  [SMALL_STATE(258)] = 4874,
  [SMALL_STATE(259)] = 4882,
  [SMALL_STATE(260)] = 4890,
  [SMALL_STATE(261)] = 4898,
  [SMALL_STATE(262)] = 4906,
  [SMALL_STATE(263)] = 4914,
  [SMALL_STATE(264)] = 4922,
  [SMALL_STATE(265)] = 4930,
  [SMALL_STATE(266)] = 4938,
  [SMALL_STATE(267)] = 4946,
  [SMALL_STATE(268)] = 4954,
  [SMALL_STATE(269)] = 4962,
  [SMALL_STATE(270)] = 4970,
  [SMALL_STATE(271)] = 4978,
  [SMALL_STATE(272)] = 4986,
  [SMALL_STATE(273)] = 4994,
  [SMALL_STATE(274)] = 5002,
  [SMALL_STATE(275)] = 5010,
  [SMALL_STATE(276)] = 5018,
  [SMALL_STATE(277)] = 5026,
  [SMALL_STATE(278)] = 5034,
  [SMALL_STATE(279)] = 5042,
  [SMALL_STATE(280)] = 5050,
  [SMALL_STATE(281)] = 5058,
  [SMALL_STATE(282)] = 5066,
  [SMALL_STATE(283)] = 5074,
  [SMALL_STATE(284)] = 5082,
  [SMALL_STATE(285)] = 5090,
  [SMALL_STATE(286)] = 5098,
  [SMALL_STATE(287)] = 5106,
  [SMALL_STATE(288)] = 5120,
  [SMALL_STATE(289)] = 5128,
  [SMALL_STATE(290)] = 5136,
  [SMALL_STATE(291)] = 5144,
  [SMALL_STATE(292)] = 5152,
  [SMALL_STATE(293)] = 5160,
  [SMALL_STATE(294)] = 5168,
  [SMALL_STATE(295)] = 5176,
  [SMALL_STATE(296)] = 5184,
  [SMALL_STATE(297)] = 5192,
  [SMALL_STATE(298)] = 5200,
  [SMALL_STATE(299)] = 5208,
  [SMALL_STATE(300)] = 5216,
  [SMALL_STATE(301)] = 5224,
  [SMALL_STATE(302)] = 5232,
  [SMALL_STATE(303)] = 5240,
  [SMALL_STATE(304)] = 5248,
  [SMALL_STATE(305)] = 5256,
  [SMALL_STATE(306)] = 5264,
  [SMALL_STATE(307)] = 5272,
  [SMALL_STATE(308)] = 5280,
  [SMALL_STATE(309)] = 5288,
  [SMALL_STATE(310)] = 5296,
  [SMALL_STATE(311)] = 5310,
  [SMALL_STATE(312)] = 5318,
  [SMALL_STATE(313)] = 5326,
  [SMALL_STATE(314)] = 5334,
  [SMALL_STATE(315)] = 5342,
  [SMALL_STATE(316)] = 5350,
  [SMALL_STATE(317)] = 5358,
  [SMALL_STATE(318)] = 5366,
  [SMALL_STATE(319)] = 5374,
  [SMALL_STATE(320)] = 5382,
  [SMALL_STATE(321)] = 5390,
  [SMALL_STATE(322)] = 5398,
  [SMALL_STATE(323)] = 5412,
  [SMALL_STATE(324)] = 5420,
  [SMALL_STATE(325)] = 5428,
  [SMALL_STATE(326)] = 5442,
  [SMALL_STATE(327)] = 5450,
  [SMALL_STATE(328)] = 5458,
  [SMALL_STATE(329)] = 5466,
  [SMALL_STATE(330)] = 5474,
  [SMALL_STATE(331)] = 5482,
  [SMALL_STATE(332)] = 5490,
  [SMALL_STATE(333)] = 5504,
  [SMALL_STATE(334)] = 5512,
  [SMALL_STATE(335)] = 5528,
  [SMALL_STATE(336)] = 5536,
  [SMALL_STATE(337)] = 5544,
  [SMALL_STATE(338)] = 5552,
  [SMALL_STATE(339)] = 5560,
  [SMALL_STATE(340)] = 5568,
  [SMALL_STATE(341)] = 5576,
  [SMALL_STATE(342)] = 5584,
  [SMALL_STATE(343)] = 5592,
  [SMALL_STATE(344)] = 5600,
  [SMALL_STATE(345)] = 5608,
  [SMALL_STATE(346)] = 5616,
  [SMALL_STATE(347)] = 5624,
  [SMALL_STATE(348)] = 5640,
  [SMALL_STATE(349)] = 5654,
  [SMALL_STATE(350)] = 5668,
  [SMALL_STATE(351)] = 5682,
  [SMALL_STATE(352)] = 5696,
  [SMALL_STATE(353)] = 5710,
  [SMALL_STATE(354)] = 5718,
  [SMALL_STATE(355)] = 5726,
  [SMALL_STATE(356)] = 5742,
  [SMALL_STATE(357)] = 5756,
  [SMALL_STATE(358)] = 5764,
  [SMALL_STATE(359)] = 5780,
  [SMALL_STATE(360)] = 5788,
  [SMALL_STATE(361)] = 5804,
  [SMALL_STATE(362)] = 5820,
  [SMALL_STATE(363)] = 5836,
  [SMALL_STATE(364)] = 5850,
  [SMALL_STATE(365)] = 5866,
  [SMALL_STATE(366)] = 5880,
  [SMALL_STATE(367)] = 5896,
  [SMALL_STATE(368)] = 5910,
  [SMALL_STATE(369)] = 5926,
  [SMALL_STATE(370)] = 5942,
  [SMALL_STATE(371)] = 5958,
  [SMALL_STATE(372)] = 5974,
  [SMALL_STATE(373)] = 5990,
  [SMALL_STATE(374)] = 6006,
  [SMALL_STATE(375)] = 6020,
  [SMALL_STATE(376)] = 6036,
  [SMALL_STATE(377)] = 6050,
  [SMALL_STATE(378)] = 6064,
  [SMALL_STATE(379)] = 6078,
  [SMALL_STATE(380)] = 6094,
  [SMALL_STATE(381)] = 6110,
  [SMALL_STATE(382)] = 6124,
  [SMALL_STATE(383)] = 6140,
  [SMALL_STATE(384)] = 6154,
  [SMALL_STATE(385)] = 6162,
  [SMALL_STATE(386)] = 6170,
  [SMALL_STATE(387)] = 6186,
  [SMALL_STATE(388)] = 6200,
  [SMALL_STATE(389)] = 6214,
  [SMALL_STATE(390)] = 6222,
  [SMALL_STATE(391)] = 6236,
  [SMALL_STATE(392)] = 6250,
  [SMALL_STATE(393)] = 6264,
  [SMALL_STATE(394)] = 6278,
  [SMALL_STATE(395)] = 6292,
  [SMALL_STATE(396)] = 6306,
  [SMALL_STATE(397)] = 6320,
  [SMALL_STATE(398)] = 6336,
  [SMALL_STATE(399)] = 6352,
  [SMALL_STATE(400)] = 6366,
  [SMALL_STATE(401)] = 6380,
  [SMALL_STATE(402)] = 6388,
  [SMALL_STATE(403)] = 6402,
  [SMALL_STATE(404)] = 6416,
  [SMALL_STATE(405)] = 6430,
  [SMALL_STATE(406)] = 6444,
  [SMALL_STATE(407)] = 6458,
  [SMALL_STATE(408)] = 6466,
  [SMALL_STATE(409)] = 6480,
  [SMALL_STATE(410)] = 6494,
  [SMALL_STATE(411)] = 6508,
  [SMALL_STATE(412)] = 6522,
  [SMALL_STATE(413)] = 6536,
  [SMALL_STATE(414)] = 6550,
  [SMALL_STATE(415)] = 6564,
  [SMALL_STATE(416)] = 6578,
  [SMALL_STATE(417)] = 6586,
  [SMALL_STATE(418)] = 6602,
  [SMALL_STATE(419)] = 6610,
  [SMALL_STATE(420)] = 6618,
  [SMALL_STATE(421)] = 6626,
  [SMALL_STATE(422)] = 6640,
  [SMALL_STATE(423)] = 6656,
  [SMALL_STATE(424)] = 6672,
  [SMALL_STATE(425)] = 6680,
  [SMALL_STATE(426)] = 6688,
  [SMALL_STATE(427)] = 6696,
  [SMALL_STATE(428)] = 6710,
  [SMALL_STATE(429)] = 6724,
  [SMALL_STATE(430)] = 6738,
  [SMALL_STATE(431)] = 6746,
  [SMALL_STATE(432)] = 6754,
  [SMALL_STATE(433)] = 6761,
  [SMALL_STATE(434)] = 6768,
  [SMALL_STATE(435)] = 6775,
  [SMALL_STATE(436)] = 6782,
  [SMALL_STATE(437)] = 6789,
  [SMALL_STATE(438)] = 6796,
  [SMALL_STATE(439)] = 6803,
  [SMALL_STATE(440)] = 6810,
  [SMALL_STATE(441)] = 6817,
  [SMALL_STATE(442)] = 6824,
  [SMALL_STATE(443)] = 6831,
  [SMALL_STATE(444)] = 6838,
  [SMALL_STATE(445)] = 6845,
  [SMALL_STATE(446)] = 6852,
  [SMALL_STATE(447)] = 6859,
  [SMALL_STATE(448)] = 6866,
  [SMALL_STATE(449)] = 6873,
  [SMALL_STATE(450)] = 6880,
  [SMALL_STATE(451)] = 6887,
  [SMALL_STATE(452)] = 6894,
  [SMALL_STATE(453)] = 6901,
  [SMALL_STATE(454)] = 6912,
  [SMALL_STATE(455)] = 6923,
  [SMALL_STATE(456)] = 6930,
  [SMALL_STATE(457)] = 6937,
  [SMALL_STATE(458)] = 6944,
  [SMALL_STATE(459)] = 6951,
  [SMALL_STATE(460)] = 6958,
  [SMALL_STATE(461)] = 6965,
  [SMALL_STATE(462)] = 6972,
  [SMALL_STATE(463)] = 6979,
  [SMALL_STATE(464)] = 6986,
  [SMALL_STATE(465)] = 6993,
  [SMALL_STATE(466)] = 7000,
  [SMALL_STATE(467)] = 7007,
  [SMALL_STATE(468)] = 7018,
  [SMALL_STATE(469)] = 7025,
  [SMALL_STATE(470)] = 7032,
  [SMALL_STATE(471)] = 7039,
  [SMALL_STATE(472)] = 7046,
  [SMALL_STATE(473)] = 7053,
  [SMALL_STATE(474)] = 7060,
  [SMALL_STATE(475)] = 7067,
  [SMALL_STATE(476)] = 7074,
  [SMALL_STATE(477)] = 7081,
  [SMALL_STATE(478)] = 7094,
  [SMALL_STATE(479)] = 7105,
  [SMALL_STATE(480)] = 7116,
  [SMALL_STATE(481)] = 7123,
  [SMALL_STATE(482)] = 7130,
  [SMALL_STATE(483)] = 7137,
  [SMALL_STATE(484)] = 7150,
  [SMALL_STATE(485)] = 7157,
  [SMALL_STATE(486)] = 7170,
  [SMALL_STATE(487)] = 7183,
  [SMALL_STATE(488)] = 7196,
  [SMALL_STATE(489)] = 7203,
  [SMALL_STATE(490)] = 7214,
  [SMALL_STATE(491)] = 7221,
  [SMALL_STATE(492)] = 7228,
  [SMALL_STATE(493)] = 7235,
  [SMALL_STATE(494)] = 7242,
  [SMALL_STATE(495)] = 7249,
  [SMALL_STATE(496)] = 7256,
  [SMALL_STATE(497)] = 7269,
  [SMALL_STATE(498)] = 7276,
  [SMALL_STATE(499)] = 7283,
  [SMALL_STATE(500)] = 7290,
  [SMALL_STATE(501)] = 7297,
  [SMALL_STATE(502)] = 7304,
  [SMALL_STATE(503)] = 7311,
  [SMALL_STATE(504)] = 7318,
  [SMALL_STATE(505)] = 7325,
  [SMALL_STATE(506)] = 7332,
  [SMALL_STATE(507)] = 7345,
  [SMALL_STATE(508)] = 7352,
  [SMALL_STATE(509)] = 7359,
  [SMALL_STATE(510)] = 7366,
  [SMALL_STATE(511)] = 7373,
  [SMALL_STATE(512)] = 7380,
  [SMALL_STATE(513)] = 7387,
  [SMALL_STATE(514)] = 7394,
  [SMALL_STATE(515)] = 7401,
  [SMALL_STATE(516)] = 7408,
  [SMALL_STATE(517)] = 7415,
  [SMALL_STATE(518)] = 7422,
  [SMALL_STATE(519)] = 7429,
  [SMALL_STATE(520)] = 7436,
  [SMALL_STATE(521)] = 7443,
  [SMALL_STATE(522)] = 7450,
  [SMALL_STATE(523)] = 7457,
  [SMALL_STATE(524)] = 7464,
  [SMALL_STATE(525)] = 7471,
  [SMALL_STATE(526)] = 7478,
  [SMALL_STATE(527)] = 7485,
  [SMALL_STATE(528)] = 7492,
  [SMALL_STATE(529)] = 7499,
  [SMALL_STATE(530)] = 7506,
  [SMALL_STATE(531)] = 7513,
  [SMALL_STATE(532)] = 7520,
  [SMALL_STATE(533)] = 7527,
  [SMALL_STATE(534)] = 7534,
  [SMALL_STATE(535)] = 7541,
  [SMALL_STATE(536)] = 7548,
  [SMALL_STATE(537)] = 7555,
  [SMALL_STATE(538)] = 7562,
  [SMALL_STATE(539)] = 7569,
  [SMALL_STATE(540)] = 7576,
  [SMALL_STATE(541)] = 7589,
  [SMALL_STATE(542)] = 7596,
  [SMALL_STATE(543)] = 7607,
  [SMALL_STATE(544)] = 7614,
  [SMALL_STATE(545)] = 7621,
  [SMALL_STATE(546)] = 7628,
  [SMALL_STATE(547)] = 7635,
  [SMALL_STATE(548)] = 7642,
  [SMALL_STATE(549)] = 7649,
  [SMALL_STATE(550)] = 7658,
  [SMALL_STATE(551)] = 7671,
  [SMALL_STATE(552)] = 7678,
  [SMALL_STATE(553)] = 7689,
  [SMALL_STATE(554)] = 7702,
  [SMALL_STATE(555)] = 7711,
  [SMALL_STATE(556)] = 7718,
  [SMALL_STATE(557)] = 7731,
  [SMALL_STATE(558)] = 7744,
  [SMALL_STATE(559)] = 7757,
  [SMALL_STATE(560)] = 7770,
  [SMALL_STATE(561)] = 7777,
  [SMALL_STATE(562)] = 7790,
  [SMALL_STATE(563)] = 7797,
  [SMALL_STATE(564)] = 7804,
  [SMALL_STATE(565)] = 7811,
  [SMALL_STATE(566)] = 7818,
  [SMALL_STATE(567)] = 7829,
  [SMALL_STATE(568)] = 7842,
  [SMALL_STATE(569)] = 7849,
  [SMALL_STATE(570)] = 7856,
  [SMALL_STATE(571)] = 7863,
  [SMALL_STATE(572)] = 7874,
  [SMALL_STATE(573)] = 7885,
  [SMALL_STATE(574)] = 7892,
  [SMALL_STATE(575)] = 7899,
  [SMALL_STATE(576)] = 7906,
  [SMALL_STATE(577)] = 7913,
  [SMALL_STATE(578)] = 7920,
  [SMALL_STATE(579)] = 7927,
  [SMALL_STATE(580)] = 7934,
  [SMALL_STATE(581)] = 7941,
  [SMALL_STATE(582)] = 7954,
  [SMALL_STATE(583)] = 7961,
  [SMALL_STATE(584)] = 7968,
  [SMALL_STATE(585)] = 7975,
  [SMALL_STATE(586)] = 7982,
  [SMALL_STATE(587)] = 7989,
  [SMALL_STATE(588)] = 7996,
  [SMALL_STATE(589)] = 8007,
  [SMALL_STATE(590)] = 8014,
  [SMALL_STATE(591)] = 8021,
  [SMALL_STATE(592)] = 8028,
  [SMALL_STATE(593)] = 8035,
  [SMALL_STATE(594)] = 8042,
  [SMALL_STATE(595)] = 8055,
  [SMALL_STATE(596)] = 8062,
  [SMALL_STATE(597)] = 8069,
  [SMALL_STATE(598)] = 8082,
  [SMALL_STATE(599)] = 8089,
  [SMALL_STATE(600)] = 8098,
  [SMALL_STATE(601)] = 8107,
  [SMALL_STATE(602)] = 8120,
  [SMALL_STATE(603)] = 8127,
  [SMALL_STATE(604)] = 8134,
  [SMALL_STATE(605)] = 8141,
  [SMALL_STATE(606)] = 8148,
  [SMALL_STATE(607)] = 8155,
  [SMALL_STATE(608)] = 8162,
  [SMALL_STATE(609)] = 8169,
  [SMALL_STATE(610)] = 8176,
  [SMALL_STATE(611)] = 8183,
  [SMALL_STATE(612)] = 8190,
  [SMALL_STATE(613)] = 8197,
  [SMALL_STATE(614)] = 8204,
  [SMALL_STATE(615)] = 8211,
  [SMALL_STATE(616)] = 8218,
  [SMALL_STATE(617)] = 8225,
  [SMALL_STATE(618)] = 8232,
  [SMALL_STATE(619)] = 8239,
  [SMALL_STATE(620)] = 8246,
  [SMALL_STATE(621)] = 8253,
  [SMALL_STATE(622)] = 8260,
  [SMALL_STATE(623)] = 8267,
  [SMALL_STATE(624)] = 8274,
  [SMALL_STATE(625)] = 8281,
  [SMALL_STATE(626)] = 8288,
  [SMALL_STATE(627)] = 8295,
  [SMALL_STATE(628)] = 8302,
  [SMALL_STATE(629)] = 8309,
  [SMALL_STATE(630)] = 8316,
  [SMALL_STATE(631)] = 8323,
  [SMALL_STATE(632)] = 8330,
  [SMALL_STATE(633)] = 8337,
  [SMALL_STATE(634)] = 8344,
  [SMALL_STATE(635)] = 8351,
  [SMALL_STATE(636)] = 8358,
  [SMALL_STATE(637)] = 8369,
  [SMALL_STATE(638)] = 8376,
  [SMALL_STATE(639)] = 8383,
  [SMALL_STATE(640)] = 8396,
  [SMALL_STATE(641)] = 8403,
  [SMALL_STATE(642)] = 8410,
  [SMALL_STATE(643)] = 8417,
  [SMALL_STATE(644)] = 8424,
  [SMALL_STATE(645)] = 8437,
  [SMALL_STATE(646)] = 8450,
  [SMALL_STATE(647)] = 8457,
  [SMALL_STATE(648)] = 8464,
  [SMALL_STATE(649)] = 8471,
  [SMALL_STATE(650)] = 8478,
  [SMALL_STATE(651)] = 8485,
  [SMALL_STATE(652)] = 8492,
  [SMALL_STATE(653)] = 8499,
  [SMALL_STATE(654)] = 8512,
  [SMALL_STATE(655)] = 8519,
  [SMALL_STATE(656)] = 8532,
  [SMALL_STATE(657)] = 8545,
  [SMALL_STATE(658)] = 8552,
  [SMALL_STATE(659)] = 8559,
  [SMALL_STATE(660)] = 8570,
  [SMALL_STATE(661)] = 8577,
  [SMALL_STATE(662)] = 8584,
  [SMALL_STATE(663)] = 8591,
  [SMALL_STATE(664)] = 8598,
  [SMALL_STATE(665)] = 8611,
  [SMALL_STATE(666)] = 8624,
  [SMALL_STATE(667)] = 8637,
  [SMALL_STATE(668)] = 8650,
  [SMALL_STATE(669)] = 8663,
  [SMALL_STATE(670)] = 8670,
  [SMALL_STATE(671)] = 8677,
  [SMALL_STATE(672)] = 8684,
  [SMALL_STATE(673)] = 8691,
  [SMALL_STATE(674)] = 8704,
  [SMALL_STATE(675)] = 8717,
  [SMALL_STATE(676)] = 8724,
  [SMALL_STATE(677)] = 8731,
  [SMALL_STATE(678)] = 8738,
  [SMALL_STATE(679)] = 8749,
  [SMALL_STATE(680)] = 8760,
  [SMALL_STATE(681)] = 8771,
  [SMALL_STATE(682)] = 8782,
  [SMALL_STATE(683)] = 8793,
  [SMALL_STATE(684)] = 8804,
  [SMALL_STATE(685)] = 8813,
  [SMALL_STATE(686)] = 8820,
  [SMALL_STATE(687)] = 8833,
  [SMALL_STATE(688)] = 8840,
  [SMALL_STATE(689)] = 8847,
  [SMALL_STATE(690)] = 8854,
  [SMALL_STATE(691)] = 8861,
  [SMALL_STATE(692)] = 8872,
  [SMALL_STATE(693)] = 8883,
  [SMALL_STATE(694)] = 8894,
  [SMALL_STATE(695)] = 8905,
  [SMALL_STATE(696)] = 8914,
  [SMALL_STATE(697)] = 8921,
  [SMALL_STATE(698)] = 8928,
  [SMALL_STATE(699)] = 8935,
  [SMALL_STATE(700)] = 8948,
  [SMALL_STATE(701)] = 8961,
  [SMALL_STATE(702)] = 8968,
  [SMALL_STATE(703)] = 8975,
  [SMALL_STATE(704)] = 8982,
  [SMALL_STATE(705)] = 8988,
  [SMALL_STATE(706)] = 8998,
  [SMALL_STATE(707)] = 9008,
  [SMALL_STATE(708)] = 9014,
  [SMALL_STATE(709)] = 9024,
  [SMALL_STATE(710)] = 9034,
  [SMALL_STATE(711)] = 9044,
  [SMALL_STATE(712)] = 9054,
  [SMALL_STATE(713)] = 9064,
  [SMALL_STATE(714)] = 9074,
  [SMALL_STATE(715)] = 9082,
  [SMALL_STATE(716)] = 9092,
  [SMALL_STATE(717)] = 9102,
  [SMALL_STATE(718)] = 9112,
  [SMALL_STATE(719)] = 9122,
  [SMALL_STATE(720)] = 9132,
  [SMALL_STATE(721)] = 9142,
  [SMALL_STATE(722)] = 9152,
  [SMALL_STATE(723)] = 9162,
  [SMALL_STATE(724)] = 9172,
  [SMALL_STATE(725)] = 9182,
  [SMALL_STATE(726)] = 9188,
  [SMALL_STATE(727)] = 9198,
  [SMALL_STATE(728)] = 9208,
  [SMALL_STATE(729)] = 9218,
  [SMALL_STATE(730)] = 9228,
  [SMALL_STATE(731)] = 9238,
  [SMALL_STATE(732)] = 9248,
  [SMALL_STATE(733)] = 9258,
  [SMALL_STATE(734)] = 9268,
  [SMALL_STATE(735)] = 9278,
  [SMALL_STATE(736)] = 9288,
  [SMALL_STATE(737)] = 9298,
  [SMALL_STATE(738)] = 9304,
  [SMALL_STATE(739)] = 9310,
  [SMALL_STATE(740)] = 9316,
  [SMALL_STATE(741)] = 9326,
  [SMALL_STATE(742)] = 9332,
  [SMALL_STATE(743)] = 9338,
  [SMALL_STATE(744)] = 9344,
  [SMALL_STATE(745)] = 9354,
  [SMALL_STATE(746)] = 9364,
  [SMALL_STATE(747)] = 9374,
  [SMALL_STATE(748)] = 9384,
  [SMALL_STATE(749)] = 9394,
  [SMALL_STATE(750)] = 9400,
  [SMALL_STATE(751)] = 9406,
  [SMALL_STATE(752)] = 9414,
  [SMALL_STATE(753)] = 9424,
  [SMALL_STATE(754)] = 9434,
  [SMALL_STATE(755)] = 9444,
  [SMALL_STATE(756)] = 9450,
  [SMALL_STATE(757)] = 9456,
  [SMALL_STATE(758)] = 9466,
  [SMALL_STATE(759)] = 9476,
  [SMALL_STATE(760)] = 9482,
  [SMALL_STATE(761)] = 9488,
  [SMALL_STATE(762)] = 9498,
  [SMALL_STATE(763)] = 9504,
  [SMALL_STATE(764)] = 9510,
  [SMALL_STATE(765)] = 9516,
  [SMALL_STATE(766)] = 9522,
  [SMALL_STATE(767)] = 9528,
  [SMALL_STATE(768)] = 9534,
  [SMALL_STATE(769)] = 9540,
  [SMALL_STATE(770)] = 9546,
  [SMALL_STATE(771)] = 9552,
  [SMALL_STATE(772)] = 9558,
  [SMALL_STATE(773)] = 9564,
  [SMALL_STATE(774)] = 9570,
  [SMALL_STATE(775)] = 9576,
  [SMALL_STATE(776)] = 9582,
  [SMALL_STATE(777)] = 9592,
  [SMALL_STATE(778)] = 9600,
  [SMALL_STATE(779)] = 9606,
  [SMALL_STATE(780)] = 9616,
  [SMALL_STATE(781)] = 9626,
  [SMALL_STATE(782)] = 9636,
  [SMALL_STATE(783)] = 9646,
  [SMALL_STATE(784)] = 9656,
  [SMALL_STATE(785)] = 9666,
  [SMALL_STATE(786)] = 9676,
  [SMALL_STATE(787)] = 9682,
  [SMALL_STATE(788)] = 9688,
  [SMALL_STATE(789)] = 9694,
  [SMALL_STATE(790)] = 9704,
  [SMALL_STATE(791)] = 9714,
  [SMALL_STATE(792)] = 9724,
  [SMALL_STATE(793)] = 9734,
  [SMALL_STATE(794)] = 9740,
  [SMALL_STATE(795)] = 9748,
  [SMALL_STATE(796)] = 9754,
  [SMALL_STATE(797)] = 9764,
  [SMALL_STATE(798)] = 9770,
  [SMALL_STATE(799)] = 9780,
  [SMALL_STATE(800)] = 9790,
  [SMALL_STATE(801)] = 9796,
  [SMALL_STATE(802)] = 9806,
  [SMALL_STATE(803)] = 9816,
  [SMALL_STATE(804)] = 9826,
  [SMALL_STATE(805)] = 9832,
  [SMALL_STATE(806)] = 9842,
  [SMALL_STATE(807)] = 9852,
  [SMALL_STATE(808)] = 9862,
  [SMALL_STATE(809)] = 9872,
  [SMALL_STATE(810)] = 9882,
  [SMALL_STATE(811)] = 9892,
  [SMALL_STATE(812)] = 9902,
  [SMALL_STATE(813)] = 9908,
  [SMALL_STATE(814)] = 9914,
  [SMALL_STATE(815)] = 9924,
  [SMALL_STATE(816)] = 9934,
  [SMALL_STATE(817)] = 9944,
  [SMALL_STATE(818)] = 9950,
  [SMALL_STATE(819)] = 9960,
  [SMALL_STATE(820)] = 9970,
  [SMALL_STATE(821)] = 9980,
  [SMALL_STATE(822)] = 9990,
  [SMALL_STATE(823)] = 9996,
  [SMALL_STATE(824)] = 10006,
  [SMALL_STATE(825)] = 10016,
  [SMALL_STATE(826)] = 10026,
  [SMALL_STATE(827)] = 10036,
  [SMALL_STATE(828)] = 10046,
  [SMALL_STATE(829)] = 10054,
  [SMALL_STATE(830)] = 10062,
  [SMALL_STATE(831)] = 10068,
  [SMALL_STATE(832)] = 10078,
  [SMALL_STATE(833)] = 10088,
  [SMALL_STATE(834)] = 10094,
  [SMALL_STATE(835)] = 10100,
  [SMALL_STATE(836)] = 10110,
  [SMALL_STATE(837)] = 10120,
  [SMALL_STATE(838)] = 10130,
  [SMALL_STATE(839)] = 10140,
  [SMALL_STATE(840)] = 10150,
  [SMALL_STATE(841)] = 10160,
  [SMALL_STATE(842)] = 10170,
  [SMALL_STATE(843)] = 10180,
  [SMALL_STATE(844)] = 10186,
  [SMALL_STATE(845)] = 10196,
  [SMALL_STATE(846)] = 10206,
  [SMALL_STATE(847)] = 10214,
  [SMALL_STATE(848)] = 10220,
  [SMALL_STATE(849)] = 10230,
  [SMALL_STATE(850)] = 10240,
  [SMALL_STATE(851)] = 10250,
  [SMALL_STATE(852)] = 10260,
  [SMALL_STATE(853)] = 10270,
  [SMALL_STATE(854)] = 10276,
  [SMALL_STATE(855)] = 10286,
  [SMALL_STATE(856)] = 10294,
  [SMALL_STATE(857)] = 10304,
  [SMALL_STATE(858)] = 10312,
  [SMALL_STATE(859)] = 10318,
  [SMALL_STATE(860)] = 10326,
  [SMALL_STATE(861)] = 10336,
  [SMALL_STATE(862)] = 10346,
  [SMALL_STATE(863)] = 10356,
  [SMALL_STATE(864)] = 10366,
  [SMALL_STATE(865)] = 10374,
  [SMALL_STATE(866)] = 10382,
  [SMALL_STATE(867)] = 10390,
  [SMALL_STATE(868)] = 10398,
  [SMALL_STATE(869)] = 10408,
  [SMALL_STATE(870)] = 10418,
  [SMALL_STATE(871)] = 10428,
  [SMALL_STATE(872)] = 10438,
  [SMALL_STATE(873)] = 10448,
  [SMALL_STATE(874)] = 10458,
  [SMALL_STATE(875)] = 10468,
  [SMALL_STATE(876)] = 10478,
  [SMALL_STATE(877)] = 10488,
  [SMALL_STATE(878)] = 10498,
  [SMALL_STATE(879)] = 10504,
  [SMALL_STATE(880)] = 10511,
  [SMALL_STATE(881)] = 10518,
  [SMALL_STATE(882)] = 10525,
  [SMALL_STATE(883)] = 10532,
  [SMALL_STATE(884)] = 10539,
  [SMALL_STATE(885)] = 10546,
  [SMALL_STATE(886)] = 10551,
  [SMALL_STATE(887)] = 10558,
  [SMALL_STATE(888)] = 10565,
  [SMALL_STATE(889)] = 10570,
  [SMALL_STATE(890)] = 10575,
  [SMALL_STATE(891)] = 10582,
  [SMALL_STATE(892)] = 10589,
  [SMALL_STATE(893)] = 10596,
  [SMALL_STATE(894)] = 10601,
  [SMALL_STATE(895)] = 10606,
  [SMALL_STATE(896)] = 10613,
  [SMALL_STATE(897)] = 10620,
  [SMALL_STATE(898)] = 10627,
  [SMALL_STATE(899)] = 10634,
  [SMALL_STATE(900)] = 10641,
  [SMALL_STATE(901)] = 10648,
  [SMALL_STATE(902)] = 10653,
  [SMALL_STATE(903)] = 10658,
  [SMALL_STATE(904)] = 10665,
  [SMALL_STATE(905)] = 10672,
  [SMALL_STATE(906)] = 10677,
  [SMALL_STATE(907)] = 10682,
  [SMALL_STATE(908)] = 10687,
  [SMALL_STATE(909)] = 10692,
  [SMALL_STATE(910)] = 10697,
  [SMALL_STATE(911)] = 10704,
  [SMALL_STATE(912)] = 10711,
  [SMALL_STATE(913)] = 10718,
  [SMALL_STATE(914)] = 10725,
  [SMALL_STATE(915)] = 10730,
  [SMALL_STATE(916)] = 10737,
  [SMALL_STATE(917)] = 10744,
  [SMALL_STATE(918)] = 10749,
  [SMALL_STATE(919)] = 10756,
  [SMALL_STATE(920)] = 10763,
  [SMALL_STATE(921)] = 10770,
  [SMALL_STATE(922)] = 10777,
  [SMALL_STATE(923)] = 10784,
  [SMALL_STATE(924)] = 10791,
  [SMALL_STATE(925)] = 10798,
  [SMALL_STATE(926)] = 10805,
  [SMALL_STATE(927)] = 10812,
  [SMALL_STATE(928)] = 10819,
  [SMALL_STATE(929)] = 10826,
  [SMALL_STATE(930)] = 10831,
  [SMALL_STATE(931)] = 10838,
  [SMALL_STATE(932)] = 10845,
  [SMALL_STATE(933)] = 10852,
  [SMALL_STATE(934)] = 10859,
  [SMALL_STATE(935)] = 10866,
  [SMALL_STATE(936)] = 10871,
  [SMALL_STATE(937)] = 10878,
  [SMALL_STATE(938)] = 10885,
  [SMALL_STATE(939)] = 10892,
  [SMALL_STATE(940)] = 10899,
  [SMALL_STATE(941)] = 10906,
  [SMALL_STATE(942)] = 10913,
  [SMALL_STATE(943)] = 10920,
  [SMALL_STATE(944)] = 10927,
  [SMALL_STATE(945)] = 10932,
  [SMALL_STATE(946)] = 10939,
  [SMALL_STATE(947)] = 10946,
  [SMALL_STATE(948)] = 10953,
  [SMALL_STATE(949)] = 10960,
  [SMALL_STATE(950)] = 10967,
  [SMALL_STATE(951)] = 10972,
  [SMALL_STATE(952)] = 10977,
  [SMALL_STATE(953)] = 10984,
  [SMALL_STATE(954)] = 10991,
  [SMALL_STATE(955)] = 10998,
  [SMALL_STATE(956)] = 11005,
  [SMALL_STATE(957)] = 11012,
  [SMALL_STATE(958)] = 11019,
  [SMALL_STATE(959)] = 11026,
  [SMALL_STATE(960)] = 11031,
  [SMALL_STATE(961)] = 11038,
  [SMALL_STATE(962)] = 11045,
  [SMALL_STATE(963)] = 11052,
  [SMALL_STATE(964)] = 11057,
  [SMALL_STATE(965)] = 11064,
  [SMALL_STATE(966)] = 11071,
  [SMALL_STATE(967)] = 11078,
  [SMALL_STATE(968)] = 11085,
  [SMALL_STATE(969)] = 11092,
  [SMALL_STATE(970)] = 11099,
  [SMALL_STATE(971)] = 11106,
  [SMALL_STATE(972)] = 11113,
  [SMALL_STATE(973)] = 11120,
  [SMALL_STATE(974)] = 11127,
  [SMALL_STATE(975)] = 11134,
  [SMALL_STATE(976)] = 11141,
  [SMALL_STATE(977)] = 11148,
  [SMALL_STATE(978)] = 11155,
  [SMALL_STATE(979)] = 11162,
  [SMALL_STATE(980)] = 11169,
  [SMALL_STATE(981)] = 11176,
  [SMALL_STATE(982)] = 11181,
  [SMALL_STATE(983)] = 11185,
  [SMALL_STATE(984)] = 11189,
  [SMALL_STATE(985)] = 11193,
  [SMALL_STATE(986)] = 11197,
  [SMALL_STATE(987)] = 11201,
  [SMALL_STATE(988)] = 11205,
  [SMALL_STATE(989)] = 11209,
  [SMALL_STATE(990)] = 11213,
  [SMALL_STATE(991)] = 11217,
  [SMALL_STATE(992)] = 11221,
  [SMALL_STATE(993)] = 11225,
  [SMALL_STATE(994)] = 11229,
  [SMALL_STATE(995)] = 11233,
  [SMALL_STATE(996)] = 11237,
  [SMALL_STATE(997)] = 11241,
  [SMALL_STATE(998)] = 11245,
  [SMALL_STATE(999)] = 11249,
  [SMALL_STATE(1000)] = 11253,
  [SMALL_STATE(1001)] = 11257,
  [SMALL_STATE(1002)] = 11261,
  [SMALL_STATE(1003)] = 11265,
  [SMALL_STATE(1004)] = 11269,
  [SMALL_STATE(1005)] = 11273,
  [SMALL_STATE(1006)] = 11277,
  [SMALL_STATE(1007)] = 11281,
  [SMALL_STATE(1008)] = 11285,
  [SMALL_STATE(1009)] = 11289,
  [SMALL_STATE(1010)] = 11293,
  [SMALL_STATE(1011)] = 11297,
  [SMALL_STATE(1012)] = 11301,
  [SMALL_STATE(1013)] = 11305,
  [SMALL_STATE(1014)] = 11309,
  [SMALL_STATE(1015)] = 11313,
  [SMALL_STATE(1016)] = 11317,
  [SMALL_STATE(1017)] = 11321,
  [SMALL_STATE(1018)] = 11325,
  [SMALL_STATE(1019)] = 11329,
  [SMALL_STATE(1020)] = 11333,
  [SMALL_STATE(1021)] = 11337,
  [SMALL_STATE(1022)] = 11341,
  [SMALL_STATE(1023)] = 11345,
  [SMALL_STATE(1024)] = 11349,
  [SMALL_STATE(1025)] = 11353,
  [SMALL_STATE(1026)] = 11357,
  [SMALL_STATE(1027)] = 11361,
  [SMALL_STATE(1028)] = 11365,
  [SMALL_STATE(1029)] = 11369,
  [SMALL_STATE(1030)] = 11373,
  [SMALL_STATE(1031)] = 11377,
  [SMALL_STATE(1032)] = 11381,
  [SMALL_STATE(1033)] = 11385,
  [SMALL_STATE(1034)] = 11389,
  [SMALL_STATE(1035)] = 11393,
  [SMALL_STATE(1036)] = 11397,
  [SMALL_STATE(1037)] = 11401,
  [SMALL_STATE(1038)] = 11405,
  [SMALL_STATE(1039)] = 11409,
  [SMALL_STATE(1040)] = 11413,
  [SMALL_STATE(1041)] = 11417,
  [SMALL_STATE(1042)] = 11421,
  [SMALL_STATE(1043)] = 11425,
  [SMALL_STATE(1044)] = 11429,
  [SMALL_STATE(1045)] = 11433,
  [SMALL_STATE(1046)] = 11437,
  [SMALL_STATE(1047)] = 11441,
  [SMALL_STATE(1048)] = 11445,
  [SMALL_STATE(1049)] = 11449,
  [SMALL_STATE(1050)] = 11453,
  [SMALL_STATE(1051)] = 11457,
  [SMALL_STATE(1052)] = 11461,
  [SMALL_STATE(1053)] = 11465,
  [SMALL_STATE(1054)] = 11469,
  [SMALL_STATE(1055)] = 11473,
  [SMALL_STATE(1056)] = 11477,
  [SMALL_STATE(1057)] = 11481,
  [SMALL_STATE(1058)] = 11485,
  [SMALL_STATE(1059)] = 11489,
  [SMALL_STATE(1060)] = 11493,
  [SMALL_STATE(1061)] = 11497,
  [SMALL_STATE(1062)] = 11501,
  [SMALL_STATE(1063)] = 11505,
  [SMALL_STATE(1064)] = 11509,
  [SMALL_STATE(1065)] = 11513,
  [SMALL_STATE(1066)] = 11517,
  [SMALL_STATE(1067)] = 11521,
  [SMALL_STATE(1068)] = 11525,
  [SMALL_STATE(1069)] = 11529,
  [SMALL_STATE(1070)] = 11533,
  [SMALL_STATE(1071)] = 11537,
  [SMALL_STATE(1072)] = 11541,
  [SMALL_STATE(1073)] = 11545,
  [SMALL_STATE(1074)] = 11549,
  [SMALL_STATE(1075)] = 11553,
  [SMALL_STATE(1076)] = 11557,
  [SMALL_STATE(1077)] = 11561,
  [SMALL_STATE(1078)] = 11565,
  [SMALL_STATE(1079)] = 11569,
  [SMALL_STATE(1080)] = 11573,
  [SMALL_STATE(1081)] = 11577,
  [SMALL_STATE(1082)] = 11581,
  [SMALL_STATE(1083)] = 11585,
  [SMALL_STATE(1084)] = 11589,
  [SMALL_STATE(1085)] = 11593,
  [SMALL_STATE(1086)] = 11597,
  [SMALL_STATE(1087)] = 11601,
  [SMALL_STATE(1088)] = 11605,
  [SMALL_STATE(1089)] = 11609,
  [SMALL_STATE(1090)] = 11613,
  [SMALL_STATE(1091)] = 11617,
  [SMALL_STATE(1092)] = 11621,
  [SMALL_STATE(1093)] = 11625,
  [SMALL_STATE(1094)] = 11629,
  [SMALL_STATE(1095)] = 11633,
  [SMALL_STATE(1096)] = 11637,
  [SMALL_STATE(1097)] = 11641,
  [SMALL_STATE(1098)] = 11645,
  [SMALL_STATE(1099)] = 11649,
  [SMALL_STATE(1100)] = 11653,
  [SMALL_STATE(1101)] = 11657,
  [SMALL_STATE(1102)] = 11661,
  [SMALL_STATE(1103)] = 11665,
  [SMALL_STATE(1104)] = 11669,
  [SMALL_STATE(1105)] = 11673,
  [SMALL_STATE(1106)] = 11677,
  [SMALL_STATE(1107)] = 11681,
  [SMALL_STATE(1108)] = 11685,
  [SMALL_STATE(1109)] = 11689,
  [SMALL_STATE(1110)] = 11693,
  [SMALL_STATE(1111)] = 11697,
  [SMALL_STATE(1112)] = 11701,
  [SMALL_STATE(1113)] = 11705,
  [SMALL_STATE(1114)] = 11709,
  [SMALL_STATE(1115)] = 11713,
  [SMALL_STATE(1116)] = 11717,
  [SMALL_STATE(1117)] = 11721,
  [SMALL_STATE(1118)] = 11725,
  [SMALL_STATE(1119)] = 11729,
  [SMALL_STATE(1120)] = 11733,
  [SMALL_STATE(1121)] = 11737,
  [SMALL_STATE(1122)] = 11741,
  [SMALL_STATE(1123)] = 11745,
  [SMALL_STATE(1124)] = 11749,
  [SMALL_STATE(1125)] = 11753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(645),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1060),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1071),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1084),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1100),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(779),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(884),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1035),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(882),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1104),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1106),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1054),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(860),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(910),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1093),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 77),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 84),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(67),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(132),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(930),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(930),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(72),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(138),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(106),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(134),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 90), SHIFT_REPEAT(2),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(120),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(134),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(912),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(948),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1091),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(883),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1049),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(991),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(643),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 48),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 40),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 41),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 42),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 40),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 40),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 44),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 50),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 51),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 52),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 37),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 37),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 53),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 31),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 54),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 50),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 39),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 55),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 42),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 56),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 51),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 42),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 58),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 59),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 59),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 42),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 60),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 36),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 66),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 67),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 68),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 69),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 71),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 39),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 58),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 73),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 58),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 51),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 42),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 58),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 46),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 74),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 76),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 76),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 71),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 73),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 58),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 64),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 78),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 79),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 70),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 81),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 81),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 65),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 85),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 86),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 81),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 81),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 88),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 91),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 92),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 88),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 95),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 96),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 91),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 97),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 95),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 100),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 101),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 98),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 103),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [1053] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(322),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 39),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(332),
  [1083] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 72),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 65),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 77),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1010),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 48),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(833),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 29),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 30),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 36),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 37),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 37),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 38),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 49),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 63),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 75),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(867),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1112),
  [1295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 46),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 80),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 82),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 87),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 94),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [1347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 89),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 50),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 89),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(935),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(681),
  [1431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(809),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [1481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(826),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [1493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 49),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(713),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 70),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(659),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 83),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(736),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 51),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 51),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1018),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1102),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 43),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_reference, 1, 0, 0),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 61),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 57),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1021),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 62),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [2021] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [2051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(917),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [2105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [2111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
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
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
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
  },
  [13] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [14] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
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
    [ts_external_token_plain_comment] = true,
    [ts_external_token_shebang_comment] = true,
    [ts_external_token__module_doc_start] = true,
    [ts_external_token__item_doc_start] = true,
    [ts_external_token__param_item_doc_start] = true,
  },
  [18] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
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
    [ts_external_token__indent] = true,
  },
  [21] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
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
    [ts_external_token__variable_name] = true,
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
