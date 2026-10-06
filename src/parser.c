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
#define STATE_COUNT 1212
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 294
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
  [53] = {.index = 118, .length = 1},
  [54] = {.index = 119, .length = 2},
  [55] = {.index = 121, .length = 3},
  [56] = {.index = 124, .length = 1},
  [57] = {.index = 125, .length = 2},
  [58] = {.index = 127, .length = 2},
  [59] = {.index = 129, .length = 2},
  [60] = {.index = 131, .length = 1},
  [61] = {.index = 132, .length = 3},
  [62] = {.index = 135, .length = 1},
  [63] = {.index = 136, .length = 1},
  [64] = {.index = 137, .length = 2},
  [65] = {.index = 139, .length = 3},
  [66] = {.index = 139, .length = 3},
  [67] = {.index = 118, .length = 1},
  [68] = {.index = 142, .length = 2},
  [69] = {.index = 144, .length = 2},
  [70] = {.index = 70, .length = 2},
  [71] = {.index = 146, .length = 2},
  [72] = {.index = 148, .length = 1},
  [73] = {.index = 149, .length = 5},
  [74] = {.index = 154, .length = 1},
  [75] = {.index = 155, .length = 2},
  [76] = {.index = 157, .length = 1},
  [77] = {.index = 158, .length = 3},
  [78] = {.index = 161, .length = 3},
  [79] = {.index = 164, .length = 1},
  [80] = {.index = 165, .length = 2},
  [81] = {.index = 167, .length = 2},
  [82] = {.index = 169, .length = 4},
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
  [65] = {
    [1] = sym_directive_key,
  },
  [67] = {
    [2] = sym_text_line,
  },
  [70] = {
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
  [41] = 28,
  [42] = 42,
  [43] = 33,
  [44] = 34,
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
  [57] = 56,
  [58] = 52,
  [59] = 55,
  [60] = 60,
  [61] = 61,
  [62] = 50,
  [63] = 51,
  [64] = 53,
  [65] = 65,
  [66] = 49,
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
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 67,
  [84] = 84,
  [85] = 85,
  [86] = 71,
  [87] = 87,
  [88] = 72,
  [89] = 89,
  [90] = 73,
  [91] = 91,
  [92] = 75,
  [93] = 81,
  [94] = 82,
  [95] = 84,
  [96] = 96,
  [97] = 97,
  [98] = 98,
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
  [114] = 96,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 97,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 99,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 69,
  [127] = 127,
  [128] = 68,
  [129] = 129,
  [130] = 78,
  [131] = 77,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 70,
  [138] = 76,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 87,
  [148] = 104,
  [149] = 149,
  [150] = 150,
  [151] = 143,
  [152] = 152,
  [153] = 143,
  [154] = 143,
  [155] = 143,
  [156] = 143,
  [157] = 143,
  [158] = 143,
  [159] = 143,
  [160] = 143,
  [161] = 161,
  [162] = 117,
  [163] = 120,
  [164] = 121,
  [165] = 125,
  [166] = 100,
  [167] = 167,
  [168] = 85,
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
  [179] = 179,
  [180] = 132,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 142,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 141,
  [193] = 129,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 140,
  [202] = 179,
  [203] = 183,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 134,
  [210] = 178,
  [211] = 211,
  [212] = 212,
  [213] = 196,
  [214] = 214,
  [215] = 200,
  [216] = 206,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 205,
  [221] = 173,
  [222] = 174,
  [223] = 176,
  [224] = 177,
  [225] = 225,
  [226] = 169,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 204,
  [231] = 217,
  [232] = 218,
  [233] = 233,
  [234] = 211,
  [235] = 207,
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
  [301] = 184,
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
  [349] = 129,
  [350] = 334,
  [351] = 335,
  [352] = 336,
  [353] = 338,
  [354] = 339,
  [355] = 340,
  [356] = 194,
  [357] = 357,
  [358] = 195,
  [359] = 359,
  [360] = 360,
  [361] = 129,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 334,
  [366] = 335,
  [367] = 336,
  [368] = 338,
  [369] = 369,
  [370] = 340,
  [371] = 129,
  [372] = 12,
  [373] = 373,
  [374] = 194,
  [375] = 195,
  [376] = 194,
  [377] = 195,
  [378] = 334,
  [379] = 335,
  [380] = 336,
  [381] = 338,
  [382] = 339,
  [383] = 340,
  [384] = 194,
  [385] = 195,
  [386] = 194,
  [387] = 195,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 289,
  [392] = 237,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 186,
  [399] = 399,
  [400] = 237,
  [401] = 401,
  [402] = 402,
  [403] = 402,
  [404] = 404,
  [405] = 140,
  [406] = 141,
  [407] = 142,
  [408] = 187,
  [409] = 404,
  [410] = 410,
  [411] = 411,
  [412] = 129,
  [413] = 411,
  [414] = 414,
  [415] = 259,
  [416] = 279,
  [417] = 294,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 318,
  [422] = 342,
  [423] = 347,
  [424] = 348,
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
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 395,
  [443] = 428,
  [444] = 444,
  [445] = 445,
  [446] = 304,
  [447] = 373,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 399,
  [452] = 452,
  [453] = 453,
  [454] = 289,
  [455] = 237,
  [456] = 456,
  [457] = 289,
  [458] = 458,
  [459] = 459,
  [460] = 432,
  [461] = 461,
  [462] = 433,
  [463] = 463,
  [464] = 464,
  [465] = 393,
  [466] = 397,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 469,
  [471] = 388,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 436,
  [477] = 477,
  [478] = 410,
  [479] = 463,
  [480] = 472,
  [481] = 390,
  [482] = 482,
  [483] = 339,
  [484] = 329,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 261,
  [493] = 262,
  [494] = 263,
  [495] = 264,
  [496] = 265,
  [497] = 266,
  [498] = 267,
  [499] = 499,
  [500] = 268,
  [501] = 269,
  [502] = 270,
  [503] = 271,
  [504] = 272,
  [505] = 273,
  [506] = 274,
  [507] = 275,
  [508] = 276,
  [509] = 277,
  [510] = 510,
  [511] = 278,
  [512] = 280,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 281,
  [518] = 282,
  [519] = 283,
  [520] = 520,
  [521] = 284,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 285,
  [527] = 527,
  [528] = 528,
  [529] = 286,
  [530] = 530,
  [531] = 287,
  [532] = 288,
  [533] = 290,
  [534] = 291,
  [535] = 535,
  [536] = 292,
  [537] = 293,
  [538] = 295,
  [539] = 539,
  [540] = 296,
  [541] = 297,
  [542] = 298,
  [543] = 299,
  [544] = 300,
  [545] = 545,
  [546] = 546,
  [547] = 302,
  [548] = 548,
  [549] = 303,
  [550] = 550,
  [551] = 305,
  [552] = 306,
  [553] = 307,
  [554] = 308,
  [555] = 309,
  [556] = 310,
  [557] = 311,
  [558] = 558,
  [559] = 559,
  [560] = 312,
  [561] = 561,
  [562] = 314,
  [563] = 315,
  [564] = 316,
  [565] = 565,
  [566] = 317,
  [567] = 567,
  [568] = 319,
  [569] = 569,
  [570] = 320,
  [571] = 321,
  [572] = 322,
  [573] = 323,
  [574] = 324,
  [575] = 325,
  [576] = 326,
  [577] = 327,
  [578] = 328,
  [579] = 338,
  [580] = 330,
  [581] = 331,
  [582] = 332,
  [583] = 333,
  [584] = 357,
  [585] = 339,
  [586] = 359,
  [587] = 360,
  [588] = 362,
  [589] = 340,
  [590] = 362,
  [591] = 591,
  [592] = 592,
  [593] = 363,
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
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 357,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 341,
  [618] = 414,
  [619] = 418,
  [620] = 419,
  [621] = 429,
  [622] = 430,
  [623] = 420,
  [624] = 425,
  [625] = 343,
  [626] = 626,
  [627] = 627,
  [628] = 344,
  [629] = 629,
  [630] = 630,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 635,
  [636] = 363,
  [637] = 637,
  [638] = 638,
  [639] = 639,
  [640] = 12,
  [641] = 458,
  [642] = 642,
  [643] = 643,
  [644] = 644,
  [645] = 334,
  [646] = 646,
  [647] = 647,
  [648] = 648,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 652,
  [653] = 434,
  [654] = 654,
  [655] = 655,
  [656] = 656,
  [657] = 435,
  [658] = 437,
  [659] = 659,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 194,
  [664] = 359,
  [665] = 665,
  [666] = 438,
  [667] = 195,
  [668] = 360,
  [669] = 669,
  [670] = 670,
  [671] = 345,
  [672] = 440,
  [673] = 346,
  [674] = 674,
  [675] = 441,
  [676] = 335,
  [677] = 445,
  [678] = 678,
  [679] = 448,
  [680] = 450,
  [681] = 453,
  [682] = 336,
  [683] = 334,
  [684] = 335,
  [685] = 336,
  [686] = 338,
  [687] = 339,
  [688] = 340,
  [689] = 194,
  [690] = 195,
  [691] = 334,
  [692] = 335,
  [693] = 336,
  [694] = 338,
  [695] = 339,
  [696] = 340,
  [697] = 260,
  [698] = 456,
  [699] = 699,
  [700] = 194,
  [701] = 195,
  [702] = 473,
  [703] = 703,
  [704] = 704,
  [705] = 705,
  [706] = 609,
  [707] = 707,
  [708] = 708,
  [709] = 709,
  [710] = 710,
  [711] = 626,
  [712] = 337,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 716,
  [717] = 674,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 722,
  [723] = 723,
  [724] = 474,
  [725] = 475,
  [726] = 477,
  [727] = 482,
  [728] = 369,
  [729] = 722,
  [730] = 723,
  [731] = 731,
  [732] = 238,
  [733] = 733,
  [734] = 239,
  [735] = 240,
  [736] = 241,
  [737] = 513,
  [738] = 520,
  [739] = 522,
  [740] = 524,
  [741] = 525,
  [742] = 242,
  [743] = 243,
  [744] = 546,
  [745] = 745,
  [746] = 244,
  [747] = 245,
  [748] = 246,
  [749] = 247,
  [750] = 609,
  [751] = 248,
  [752] = 609,
  [753] = 249,
  [754] = 250,
  [755] = 251,
  [756] = 252,
  [757] = 253,
  [758] = 665,
  [759] = 499,
  [760] = 613,
  [761] = 614,
  [762] = 642,
  [763] = 643,
  [764] = 665,
  [765] = 499,
  [766] = 665,
  [767] = 499,
  [768] = 598,
  [769] = 254,
  [770] = 255,
  [771] = 256,
  [772] = 731,
  [773] = 773,
  [774] = 774,
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
  [787] = 787,
  [788] = 648,
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
  [801] = 654,
  [802] = 655,
  [803] = 357,
  [804] = 804,
  [805] = 805,
  [806] = 359,
  [807] = 360,
  [808] = 808,
  [809] = 809,
  [810] = 362,
  [811] = 363,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 334,
  [818] = 818,
  [819] = 819,
  [820] = 335,
  [821] = 821,
  [822] = 194,
  [823] = 195,
  [824] = 336,
  [825] = 337,
  [826] = 338,
  [827] = 339,
  [828] = 340,
  [829] = 194,
  [830] = 830,
  [831] = 341,
  [832] = 832,
  [833] = 343,
  [834] = 344,
  [835] = 195,
  [836] = 836,
  [837] = 194,
  [838] = 195,
  [839] = 334,
  [840] = 335,
  [841] = 336,
  [842] = 338,
  [843] = 339,
  [844] = 340,
  [845] = 845,
  [846] = 334,
  [847] = 335,
  [848] = 336,
  [849] = 338,
  [850] = 339,
  [851] = 340,
  [852] = 345,
  [853] = 346,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 592,
  [864] = 864,
  [865] = 865,
  [866] = 861,
  [867] = 795,
  [868] = 796,
  [869] = 797,
  [870] = 799,
  [871] = 871,
  [872] = 872,
  [873] = 12,
  [874] = 874,
  [875] = 875,
  [876] = 876,
  [877] = 814,
  [878] = 652,
  [879] = 879,
  [880] = 818,
  [881] = 819,
  [882] = 821,
  [883] = 883,
  [884] = 884,
  [885] = 857,
  [886] = 874,
  [887] = 875,
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
  [901] = 888,
  [902] = 793,
  [903] = 798,
  [904] = 904,
  [905] = 836,
  [906] = 906,
  [907] = 889,
  [908] = 830,
  [909] = 832,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 890,
  [914] = 914,
  [915] = 912,
  [916] = 916,
  [917] = 815,
  [918] = 859,
  [919] = 872,
  [920] = 883,
  [921] = 894,
  [922] = 898,
  [923] = 904,
  [924] = 911,
  [925] = 862,
  [926] = 926,
  [927] = 927,
  [928] = 775,
  [929] = 929,
  [930] = 930,
  [931] = 789,
  [932] = 932,
  [933] = 891,
  [934] = 794,
  [935] = 935,
  [936] = 936,
  [937] = 862,
  [938] = 892,
  [939] = 862,
  [940] = 940,
  [941] = 893,
  [942] = 942,
  [943] = 943,
  [944] = 895,
  [945] = 914,
  [946] = 926,
  [947] = 947,
  [948] = 800,
  [949] = 805,
  [950] = 845,
  [951] = 951,
  [952] = 952,
  [953] = 860,
  [954] = 951,
  [955] = 897,
  [956] = 952,
  [957] = 899,
  [958] = 927,
  [959] = 809,
  [960] = 929,
  [961] = 961,
  [962] = 962,
  [963] = 774,
  [964] = 964,
  [965] = 809,
  [966] = 809,
  [967] = 967,
  [968] = 968,
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
  [981] = 981,
  [982] = 982,
  [983] = 983,
  [984] = 984,
  [985] = 985,
  [986] = 986,
  [987] = 968,
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
  [1000] = 194,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 1003,
  [1004] = 195,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 1007,
  [1008] = 1008,
  [1009] = 983,
  [1010] = 1010,
  [1011] = 1011,
  [1012] = 1012,
  [1013] = 1013,
  [1014] = 968,
  [1015] = 992,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 1018,
  [1019] = 468,
  [1020] = 464,
  [1021] = 992,
  [1022] = 968,
  [1023] = 992,
  [1024] = 997,
  [1025] = 968,
  [1026] = 992,
  [1027] = 1027,
  [1028] = 968,
  [1029] = 992,
  [1030] = 968,
  [1031] = 992,
  [1032] = 968,
  [1033] = 992,
  [1034] = 968,
  [1035] = 992,
  [1036] = 968,
  [1037] = 992,
  [1038] = 989,
  [1039] = 1039,
  [1040] = 1040,
  [1041] = 1011,
  [1042] = 1042,
  [1043] = 1043,
  [1044] = 1044,
  [1045] = 1001,
  [1046] = 969,
  [1047] = 1047,
  [1048] = 1048,
  [1049] = 1049,
  [1050] = 1010,
  [1051] = 1013,
  [1052] = 989,
  [1053] = 1053,
  [1054] = 989,
  [1055] = 998,
  [1056] = 989,
  [1057] = 989,
  [1058] = 989,
  [1059] = 989,
  [1060] = 989,
  [1061] = 989,
  [1062] = 978,
  [1063] = 979,
  [1064] = 982,
  [1065] = 986,
  [1066] = 1053,
  [1067] = 1043,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1070,
  [1071] = 1071,
  [1072] = 1072,
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
  [1085] = 629,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1078,
  [1090] = 1079,
  [1091] = 1080,
  [1092] = 1081,
  [1093] = 871,
  [1094] = 1094,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1099,
  [1100] = 1078,
  [1101] = 1079,
  [1102] = 1080,
  [1103] = 1081,
  [1104] = 1104,
  [1105] = 1105,
  [1106] = 1106,
  [1107] = 1078,
  [1108] = 1079,
  [1109] = 1080,
  [1110] = 1081,
  [1111] = 1111,
  [1112] = 1112,
  [1113] = 1113,
  [1114] = 1078,
  [1115] = 1079,
  [1116] = 1080,
  [1117] = 1081,
  [1118] = 1118,
  [1119] = 1119,
  [1120] = 1120,
  [1121] = 1078,
  [1122] = 1079,
  [1123] = 1080,
  [1124] = 1081,
  [1125] = 1078,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1078,
  [1129] = 1079,
  [1130] = 1080,
  [1131] = 1081,
  [1132] = 1132,
  [1133] = 1133,
  [1134] = 1074,
  [1135] = 1078,
  [1136] = 1079,
  [1137] = 1080,
  [1138] = 1081,
  [1139] = 1081,
  [1140] = 1081,
  [1141] = 1081,
  [1142] = 1081,
  [1143] = 1143,
  [1144] = 1144,
  [1145] = 1079,
  [1146] = 1146,
  [1147] = 1080,
  [1148] = 1081,
  [1149] = 1149,
  [1150] = 1150,
  [1151] = 1151,
  [1152] = 1152,
  [1153] = 1153,
  [1154] = 1154,
  [1155] = 1098,
  [1156] = 1156,
  [1157] = 1157,
  [1158] = 1151,
  [1159] = 1154,
  [1160] = 1160,
  [1161] = 1078,
  [1162] = 1162,
  [1163] = 1126,
  [1164] = 1106,
  [1165] = 1150,
  [1166] = 1166,
  [1167] = 1167,
  [1168] = 1080,
  [1169] = 1167,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1097,
  [1173] = 1173,
  [1174] = 1174,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1179,
  [1180] = 1180,
  [1181] = 1144,
  [1182] = 1182,
  [1183] = 1183,
  [1184] = 1184,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1143,
  [1189] = 1189,
  [1190] = 1190,
  [1191] = 1191,
  [1192] = 1120,
  [1193] = 1193,
  [1194] = 1083,
  [1195] = 1195,
  [1196] = 1196,
  [1197] = 1175,
  [1198] = 1198,
  [1199] = 1079,
  [1200] = 1200,
  [1201] = 1170,
  [1202] = 1202,
  [1203] = 1174,
  [1204] = 1204,
  [1205] = 12,
  [1206] = 1206,
  [1207] = 1186,
  [1208] = 1075,
  [1209] = 1209,
  [1210] = 1149,
  [1211] = 1211,
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
          lookahead == ' ') SKIP(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
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
          lookahead == ' ') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(767);
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
  [28] = {.lex_state = 2, .external_lex_state = 7},
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
  [41] = {.lex_state = 2, .external_lex_state = 7},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 8},
  [46] = {.lex_state = 0, .external_lex_state = 8},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 7, .external_lex_state = 7},
  [50] = {.lex_state = 5, .external_lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 5, .external_lex_state = 7},
  [54] = {.lex_state = 0, .external_lex_state = 8},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 3, .external_lex_state = 7},
  [57] = {.lex_state = 3, .external_lex_state = 7},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 0, .external_lex_state = 8},
  [62] = {.lex_state = 5, .external_lex_state = 7},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 8},
  [66] = {.lex_state = 7, .external_lex_state = 7},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0, .external_lex_state = 9},
  [69] = {.lex_state = 0, .external_lex_state = 10},
  [70] = {.lex_state = 0, .external_lex_state = 11},
  [71] = {.lex_state = 5, .external_lex_state = 7},
  [72] = {.lex_state = 5, .external_lex_state = 7},
  [73] = {.lex_state = 5, .external_lex_state = 7},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0, .external_lex_state = 12},
  [76] = {.lex_state = 0, .external_lex_state = 11},
  [77] = {.lex_state = 0, .external_lex_state = 9},
  [78] = {.lex_state = 0, .external_lex_state = 9},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 12},
  [82] = {.lex_state = 0, .external_lex_state = 12},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 12},
  [85] = {.lex_state = 0, .external_lex_state = 11},
  [86] = {.lex_state = 5, .external_lex_state = 7},
  [87] = {.lex_state = 0, .external_lex_state = 13},
  [88] = {.lex_state = 5, .external_lex_state = 7},
  [89] = {.lex_state = 0, .external_lex_state = 13},
  [90] = {.lex_state = 5, .external_lex_state = 7},
  [91] = {.lex_state = 0, .external_lex_state = 13},
  [92] = {.lex_state = 0, .external_lex_state = 12},
  [93] = {.lex_state = 0, .external_lex_state = 12},
  [94] = {.lex_state = 0, .external_lex_state = 12},
  [95] = {.lex_state = 0, .external_lex_state = 12},
  [96] = {.lex_state = 0, .external_lex_state = 10},
  [97] = {.lex_state = 0, .external_lex_state = 10},
  [98] = {.lex_state = 0, .external_lex_state = 8},
  [99] = {.lex_state = 0, .external_lex_state = 10},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 14},
  [102] = {.lex_state = 16, .external_lex_state = 7},
  [103] = {.lex_state = 0, .external_lex_state = 12},
  [104] = {.lex_state = 0, .external_lex_state = 15},
  [105] = {.lex_state = 0, .external_lex_state = 16},
  [106] = {.lex_state = 0, .external_lex_state = 17},
  [107] = {.lex_state = 0, .external_lex_state = 12},
  [108] = {.lex_state = 0, .external_lex_state = 12},
  [109] = {.lex_state = 0, .external_lex_state = 12},
  [110] = {.lex_state = 0, .external_lex_state = 18},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 17},
  [113] = {.lex_state = 0, .external_lex_state = 14},
  [114] = {.lex_state = 0, .external_lex_state = 19},
  [115] = {.lex_state = 0, .external_lex_state = 12},
  [116] = {.lex_state = 0, .external_lex_state = 16},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 19},
  [119] = {.lex_state = 0, .external_lex_state = 12},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 19},
  [123] = {.lex_state = 16, .external_lex_state = 7},
  [124] = {.lex_state = 16, .external_lex_state = 7},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 19},
  [127] = {.lex_state = 0, .external_lex_state = 18},
  [128] = {.lex_state = 0, .external_lex_state = 20},
  [129] = {.lex_state = 0, .external_lex_state = 14},
  [130] = {.lex_state = 0, .external_lex_state = 20},
  [131] = {.lex_state = 0, .external_lex_state = 20},
  [132] = {.lex_state = 0, .external_lex_state = 13},
  [133] = {.lex_state = 0, .external_lex_state = 14},
  [134] = {.lex_state = 0, .external_lex_state = 13},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 12},
  [137] = {.lex_state = 0, .external_lex_state = 12},
  [138] = {.lex_state = 0, .external_lex_state = 12},
  [139] = {.lex_state = 0, .external_lex_state = 16},
  [140] = {.lex_state = 8, .external_lex_state = 7},
  [141] = {.lex_state = 8, .external_lex_state = 7},
  [142] = {.lex_state = 8, .external_lex_state = 7},
  [143] = {.lex_state = 0, .external_lex_state = 21},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 14},
  [146] = {.lex_state = 0, .external_lex_state = 16},
  [147] = {.lex_state = 0, .external_lex_state = 17},
  [148] = {.lex_state = 0, .external_lex_state = 15},
  [149] = {.lex_state = 0, .external_lex_state = 12},
  [150] = {.lex_state = 0, .external_lex_state = 12},
  [151] = {.lex_state = 0, .external_lex_state = 21},
  [152] = {.lex_state = 0, .external_lex_state = 12},
  [153] = {.lex_state = 0, .external_lex_state = 21},
  [154] = {.lex_state = 0, .external_lex_state = 21},
  [155] = {.lex_state = 0, .external_lex_state = 21},
  [156] = {.lex_state = 0, .external_lex_state = 21},
  [157] = {.lex_state = 0, .external_lex_state = 21},
  [158] = {.lex_state = 0, .external_lex_state = 21},
  [159] = {.lex_state = 0, .external_lex_state = 21},
  [160] = {.lex_state = 0, .external_lex_state = 21},
  [161] = {.lex_state = 0, .external_lex_state = 18},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 16, .external_lex_state = 7},
  [168] = {.lex_state = 0, .external_lex_state = 12},
  [169] = {.lex_state = 16, .external_lex_state = 7},
  [170] = {.lex_state = 0, .external_lex_state = 22},
  [171] = {.lex_state = 16, .external_lex_state = 7},
  [172] = {.lex_state = 0, .external_lex_state = 22},
  [173] = {.lex_state = 0, .external_lex_state = 22},
  [174] = {.lex_state = 16, .external_lex_state = 7},
  [175] = {.lex_state = 0, .external_lex_state = 22},
  [176] = {.lex_state = 16, .external_lex_state = 7},
  [177] = {.lex_state = 16, .external_lex_state = 7},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 16, .external_lex_state = 7},
  [180] = {.lex_state = 0, .external_lex_state = 17},
  [181] = {.lex_state = 0, .external_lex_state = 22},
  [182] = {.lex_state = 0, .external_lex_state = 22},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 13},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 13},
  [187] = {.lex_state = 0, .external_lex_state = 13},
  [188] = {.lex_state = 0, .external_lex_state = 18},
  [189] = {.lex_state = 0, .external_lex_state = 22},
  [190] = {.lex_state = 0, .external_lex_state = 22},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 12},
  [194] = {.lex_state = 0, .external_lex_state = 10},
  [195] = {.lex_state = 0, .external_lex_state = 10},
  [196] = {.lex_state = 0, .external_lex_state = 22},
  [197] = {.lex_state = 0, .external_lex_state = 22},
  [198] = {.lex_state = 0, .external_lex_state = 22},
  [199] = {.lex_state = 0, .external_lex_state = 22},
  [200] = {.lex_state = 16, .external_lex_state = 7},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 16, .external_lex_state = 7},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 13, .external_lex_state = 7},
  [205] = {.lex_state = 16, .external_lex_state = 7},
  [206] = {.lex_state = 10, .external_lex_state = 7},
  [207] = {.lex_state = 16, .external_lex_state = 7},
  [208] = {.lex_state = 0, .external_lex_state = 22},
  [209] = {.lex_state = 0, .external_lex_state = 17},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0, .external_lex_state = 22},
  [213] = {.lex_state = 0, .external_lex_state = 22},
  [214] = {.lex_state = 0, .external_lex_state = 22},
  [215] = {.lex_state = 16, .external_lex_state = 7},
  [216] = {.lex_state = 10, .external_lex_state = 7},
  [217] = {.lex_state = 0, .external_lex_state = 22},
  [218] = {.lex_state = 0, .external_lex_state = 22},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 16, .external_lex_state = 7},
  [221] = {.lex_state = 0, .external_lex_state = 22},
  [222] = {.lex_state = 16, .external_lex_state = 7},
  [223] = {.lex_state = 16, .external_lex_state = 7},
  [224] = {.lex_state = 16, .external_lex_state = 7},
  [225] = {.lex_state = 0, .external_lex_state = 18},
  [226] = {.lex_state = 16, .external_lex_state = 7},
  [227] = {.lex_state = 0, .external_lex_state = 22},
  [228] = {.lex_state = 0, .external_lex_state = 22},
  [229] = {.lex_state = 0, .external_lex_state = 22},
  [230] = {.lex_state = 13, .external_lex_state = 7},
  [231] = {.lex_state = 0, .external_lex_state = 22},
  [232] = {.lex_state = 0, .external_lex_state = 22},
  [233] = {.lex_state = 16, .external_lex_state = 7},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 16, .external_lex_state = 7},
  [236] = {.lex_state = 0, .external_lex_state = 22},
  [237] = {.lex_state = 0, .external_lex_state = 23},
  [238] = {.lex_state = 0, .external_lex_state = 11},
  [239] = {.lex_state = 0, .external_lex_state = 11},
  [240] = {.lex_state = 0, .external_lex_state = 11},
  [241] = {.lex_state = 0, .external_lex_state = 11},
  [242] = {.lex_state = 0, .external_lex_state = 11},
  [243] = {.lex_state = 0, .external_lex_state = 11},
  [244] = {.lex_state = 0, .external_lex_state = 11},
  [245] = {.lex_state = 0, .external_lex_state = 11},
  [246] = {.lex_state = 0, .external_lex_state = 11},
  [247] = {.lex_state = 0, .external_lex_state = 11},
  [248] = {.lex_state = 0, .external_lex_state = 11},
  [249] = {.lex_state = 0, .external_lex_state = 11},
  [250] = {.lex_state = 0, .external_lex_state = 11},
  [251] = {.lex_state = 0, .external_lex_state = 11},
  [252] = {.lex_state = 0, .external_lex_state = 11},
  [253] = {.lex_state = 0, .external_lex_state = 11},
  [254] = {.lex_state = 0, .external_lex_state = 11},
  [255] = {.lex_state = 0, .external_lex_state = 11},
  [256] = {.lex_state = 0, .external_lex_state = 11},
  [257] = {.lex_state = 0, .external_lex_state = 8},
  [258] = {.lex_state = 0, .external_lex_state = 18},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 11},
  [261] = {.lex_state = 0, .external_lex_state = 11},
  [262] = {.lex_state = 0, .external_lex_state = 11},
  [263] = {.lex_state = 0, .external_lex_state = 11},
  [264] = {.lex_state = 0, .external_lex_state = 11},
  [265] = {.lex_state = 0, .external_lex_state = 11},
  [266] = {.lex_state = 0, .external_lex_state = 11},
  [267] = {.lex_state = 0, .external_lex_state = 11},
  [268] = {.lex_state = 0, .external_lex_state = 11},
  [269] = {.lex_state = 0, .external_lex_state = 11},
  [270] = {.lex_state = 0, .external_lex_state = 11},
  [271] = {.lex_state = 0, .external_lex_state = 11},
  [272] = {.lex_state = 0, .external_lex_state = 11},
  [273] = {.lex_state = 0, .external_lex_state = 11},
  [274] = {.lex_state = 0, .external_lex_state = 11},
  [275] = {.lex_state = 0, .external_lex_state = 11},
  [276] = {.lex_state = 0, .external_lex_state = 11},
  [277] = {.lex_state = 0, .external_lex_state = 11},
  [278] = {.lex_state = 0, .external_lex_state = 11},
  [279] = {.lex_state = 19},
  [280] = {.lex_state = 0, .external_lex_state = 11},
  [281] = {.lex_state = 0, .external_lex_state = 11},
  [282] = {.lex_state = 0, .external_lex_state = 11},
  [283] = {.lex_state = 0, .external_lex_state = 11},
  [284] = {.lex_state = 0, .external_lex_state = 11},
  [285] = {.lex_state = 0, .external_lex_state = 11},
  [286] = {.lex_state = 0, .external_lex_state = 11},
  [287] = {.lex_state = 0, .external_lex_state = 11},
  [288] = {.lex_state = 0, .external_lex_state = 11},
  [289] = {.lex_state = 0, .external_lex_state = 23},
  [290] = {.lex_state = 0, .external_lex_state = 11},
  [291] = {.lex_state = 0, .external_lex_state = 11},
  [292] = {.lex_state = 0, .external_lex_state = 11},
  [293] = {.lex_state = 0, .external_lex_state = 11},
  [294] = {.lex_state = 6, .external_lex_state = 7},
  [295] = {.lex_state = 0, .external_lex_state = 11},
  [296] = {.lex_state = 0, .external_lex_state = 11},
  [297] = {.lex_state = 0, .external_lex_state = 11},
  [298] = {.lex_state = 0, .external_lex_state = 11},
  [299] = {.lex_state = 0, .external_lex_state = 11},
  [300] = {.lex_state = 0, .external_lex_state = 11},
  [301] = {.lex_state = 0, .external_lex_state = 17},
  [302] = {.lex_state = 0, .external_lex_state = 11},
  [303] = {.lex_state = 0, .external_lex_state = 11},
  [304] = {.lex_state = 0, .external_lex_state = 24},
  [305] = {.lex_state = 0, .external_lex_state = 11},
  [306] = {.lex_state = 0, .external_lex_state = 11},
  [307] = {.lex_state = 0, .external_lex_state = 11},
  [308] = {.lex_state = 0, .external_lex_state = 11},
  [309] = {.lex_state = 0, .external_lex_state = 11},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 0, .external_lex_state = 11},
  [312] = {.lex_state = 0, .external_lex_state = 11},
  [313] = {.lex_state = 0, .external_lex_state = 25},
  [314] = {.lex_state = 0, .external_lex_state = 11},
  [315] = {.lex_state = 0, .external_lex_state = 11},
  [316] = {.lex_state = 0, .external_lex_state = 11},
  [317] = {.lex_state = 0, .external_lex_state = 11},
  [318] = {.lex_state = 0, .external_lex_state = 24},
  [319] = {.lex_state = 0, .external_lex_state = 11},
  [320] = {.lex_state = 0, .external_lex_state = 11},
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
  [334] = {.lex_state = 0, .external_lex_state = 14},
  [335] = {.lex_state = 0, .external_lex_state = 14},
  [336] = {.lex_state = 0, .external_lex_state = 14},
  [337] = {.lex_state = 8, .external_lex_state = 7},
  [338] = {.lex_state = 0, .external_lex_state = 14},
  [339] = {.lex_state = 0, .external_lex_state = 14},
  [340] = {.lex_state = 0, .external_lex_state = 14},
  [341] = {.lex_state = 8, .external_lex_state = 7},
  [342] = {.lex_state = 0, .external_lex_state = 24},
  [343] = {.lex_state = 8, .external_lex_state = 7},
  [344] = {.lex_state = 8, .external_lex_state = 7},
  [345] = {.lex_state = 8, .external_lex_state = 7},
  [346] = {.lex_state = 8, .external_lex_state = 7},
  [347] = {.lex_state = 19},
  [348] = {.lex_state = 6, .external_lex_state = 7},
  [349] = {.lex_state = 0, .external_lex_state = 24},
  [350] = {.lex_state = 0, .external_lex_state = 8},
  [351] = {.lex_state = 0, .external_lex_state = 8},
  [352] = {.lex_state = 0, .external_lex_state = 8},
  [353] = {.lex_state = 0, .external_lex_state = 8},
  [354] = {.lex_state = 0, .external_lex_state = 8},
  [355] = {.lex_state = 0, .external_lex_state = 8},
  [356] = {.lex_state = 0, .external_lex_state = 14},
  [357] = {.lex_state = 0, .external_lex_state = 11},
  [358] = {.lex_state = 0, .external_lex_state = 14},
  [359] = {.lex_state = 0, .external_lex_state = 11},
  [360] = {.lex_state = 0, .external_lex_state = 11},
  [361] = {.lex_state = 0, .external_lex_state = 25},
  [362] = {.lex_state = 0, .external_lex_state = 11},
  [363] = {.lex_state = 0, .external_lex_state = 11},
  [364] = {.lex_state = 0, .external_lex_state = 22},
  [365] = {.lex_state = 0, .external_lex_state = 9},
  [366] = {.lex_state = 0, .external_lex_state = 9},
  [367] = {.lex_state = 0, .external_lex_state = 9},
  [368] = {.lex_state = 0, .external_lex_state = 9},
  [369] = {.lex_state = 0, .external_lex_state = 11},
  [370] = {.lex_state = 0, .external_lex_state = 9},
  [371] = {.lex_state = 0, .external_lex_state = 2},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 0, .external_lex_state = 24},
  [374] = {.lex_state = 0, .external_lex_state = 9},
  [375] = {.lex_state = 0, .external_lex_state = 9},
  [376] = {.lex_state = 0, .external_lex_state = 19},
  [377] = {.lex_state = 0, .external_lex_state = 19},
  [378] = {.lex_state = 0, .external_lex_state = 11},
  [379] = {.lex_state = 0, .external_lex_state = 11},
  [380] = {.lex_state = 0, .external_lex_state = 11},
  [381] = {.lex_state = 0, .external_lex_state = 11},
  [382] = {.lex_state = 0, .external_lex_state = 11},
  [383] = {.lex_state = 0, .external_lex_state = 11},
  [384] = {.lex_state = 0, .external_lex_state = 8},
  [385] = {.lex_state = 0, .external_lex_state = 8},
  [386] = {.lex_state = 0, .external_lex_state = 11},
  [387] = {.lex_state = 0, .external_lex_state = 11},
  [388] = {.lex_state = 0, .external_lex_state = 26},
  [389] = {.lex_state = 0, .external_lex_state = 8},
  [390] = {.lex_state = 0, .external_lex_state = 22},
  [391] = {.lex_state = 0, .external_lex_state = 23},
  [392] = {.lex_state = 0, .external_lex_state = 23},
  [393] = {.lex_state = 16, .external_lex_state = 27},
  [394] = {.lex_state = 0, .external_lex_state = 23},
  [395] = {.lex_state = 9, .external_lex_state = 7},
  [396] = {.lex_state = 1, .external_lex_state = 28},
  [397] = {.lex_state = 17, .external_lex_state = 7},
  [398] = {.lex_state = 0, .external_lex_state = 17},
  [399] = {.lex_state = 0, .external_lex_state = 24},
  [400] = {.lex_state = 0, .external_lex_state = 23},
  [401] = {.lex_state = 0, .external_lex_state = 22},
  [402] = {.lex_state = 19},
  [403] = {.lex_state = 19},
  [404] = {.lex_state = 19},
  [405] = {.lex_state = 1, .external_lex_state = 7},
  [406] = {.lex_state = 1, .external_lex_state = 7},
  [407] = {.lex_state = 1, .external_lex_state = 7},
  [408] = {.lex_state = 0, .external_lex_state = 17},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 19},
  [411] = {.lex_state = 16, .external_lex_state = 7},
  [412] = {.lex_state = 0, .external_lex_state = 22},
  [413] = {.lex_state = 16, .external_lex_state = 7},
  [414] = {.lex_state = 0, .external_lex_state = 11},
  [415] = {.lex_state = 1},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 6, .external_lex_state = 7},
  [418] = {.lex_state = 0, .external_lex_state = 11},
  [419] = {.lex_state = 0, .external_lex_state = 11},
  [420] = {.lex_state = 0, .external_lex_state = 11},
  [421] = {.lex_state = 0, .external_lex_state = 24},
  [422] = {.lex_state = 0, .external_lex_state = 24},
  [423] = {.lex_state = 19},
  [424] = {.lex_state = 6, .external_lex_state = 7},
  [425] = {.lex_state = 0, .external_lex_state = 11},
  [426] = {.lex_state = 0, .external_lex_state = 25},
  [427] = {.lex_state = 0, .external_lex_state = 23},
  [428] = {.lex_state = 0, .external_lex_state = 24},
  [429] = {.lex_state = 0, .external_lex_state = 9},
  [430] = {.lex_state = 0, .external_lex_state = 9},
  [431] = {.lex_state = 0, .external_lex_state = 23},
  [432] = {.lex_state = 16, .external_lex_state = 7},
  [433] = {.lex_state = 0, .external_lex_state = 24},
  [434] = {.lex_state = 0, .external_lex_state = 11},
  [435] = {.lex_state = 0, .external_lex_state = 11},
  [436] = {.lex_state = 9, .external_lex_state = 7},
  [437] = {.lex_state = 0, .external_lex_state = 11},
  [438] = {.lex_state = 0, .external_lex_state = 11},
  [439] = {.lex_state = 0, .external_lex_state = 22},
  [440] = {.lex_state = 0, .external_lex_state = 11},
  [441] = {.lex_state = 0, .external_lex_state = 11},
  [442] = {.lex_state = 9, .external_lex_state = 7},
  [443] = {.lex_state = 0, .external_lex_state = 24},
  [444] = {.lex_state = 0, .external_lex_state = 18},
  [445] = {.lex_state = 0, .external_lex_state = 11},
  [446] = {.lex_state = 0, .external_lex_state = 24},
  [447] = {.lex_state = 0, .external_lex_state = 24},
  [448] = {.lex_state = 0, .external_lex_state = 11},
  [449] = {.lex_state = 0, .external_lex_state = 24},
  [450] = {.lex_state = 0, .external_lex_state = 11},
  [451] = {.lex_state = 0, .external_lex_state = 24},
  [452] = {.lex_state = 0, .external_lex_state = 18},
  [453] = {.lex_state = 0, .external_lex_state = 11},
  [454] = {.lex_state = 0, .external_lex_state = 23},
  [455] = {.lex_state = 0, .external_lex_state = 23},
  [456] = {.lex_state = 0, .external_lex_state = 11},
  [457] = {.lex_state = 0, .external_lex_state = 23},
  [458] = {.lex_state = 0, .external_lex_state = 11},
  [459] = {.lex_state = 0, .external_lex_state = 25},
  [460] = {.lex_state = 16, .external_lex_state = 7},
  [461] = {.lex_state = 0, .external_lex_state = 25},
  [462] = {.lex_state = 0, .external_lex_state = 24},
  [463] = {.lex_state = 0, .external_lex_state = 22},
  [464] = {.lex_state = 1},
  [465] = {.lex_state = 16, .external_lex_state = 27},
  [466] = {.lex_state = 17, .external_lex_state = 7},
  [467] = {.lex_state = 0, .external_lex_state = 24},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 26},
  [470] = {.lex_state = 0, .external_lex_state = 26},
  [471] = {.lex_state = 0, .external_lex_state = 26},
  [472] = {.lex_state = 0, .external_lex_state = 22},
  [473] = {.lex_state = 0, .external_lex_state = 11},
  [474] = {.lex_state = 0, .external_lex_state = 11},
  [475] = {.lex_state = 0, .external_lex_state = 11},
  [476] = {.lex_state = 9, .external_lex_state = 7},
  [477] = {.lex_state = 0, .external_lex_state = 11},
  [478] = {.lex_state = 19},
  [479] = {.lex_state = 0, .external_lex_state = 22},
  [480] = {.lex_state = 0, .external_lex_state = 22},
  [481] = {.lex_state = 0, .external_lex_state = 22},
  [482] = {.lex_state = 0, .external_lex_state = 11},
  [483] = {.lex_state = 0, .external_lex_state = 9},
  [484] = {.lex_state = 0, .external_lex_state = 12},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 1, .external_lex_state = 7},
  [490] = {.lex_state = 1, .external_lex_state = 7},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 12},
  [493] = {.lex_state = 0, .external_lex_state = 12},
  [494] = {.lex_state = 0, .external_lex_state = 12},
  [495] = {.lex_state = 0, .external_lex_state = 12},
  [496] = {.lex_state = 0, .external_lex_state = 12},
  [497] = {.lex_state = 0, .external_lex_state = 12},
  [498] = {.lex_state = 0, .external_lex_state = 12},
  [499] = {.lex_state = 0, .external_lex_state = 29},
  [500] = {.lex_state = 0, .external_lex_state = 12},
  [501] = {.lex_state = 0, .external_lex_state = 12},
  [502] = {.lex_state = 0, .external_lex_state = 12},
  [503] = {.lex_state = 0, .external_lex_state = 12},
  [504] = {.lex_state = 0, .external_lex_state = 12},
  [505] = {.lex_state = 0, .external_lex_state = 12},
  [506] = {.lex_state = 0, .external_lex_state = 12},
  [507] = {.lex_state = 0, .external_lex_state = 12},
  [508] = {.lex_state = 0, .external_lex_state = 12},
  [509] = {.lex_state = 0, .external_lex_state = 12},
  [510] = {.lex_state = 0, .external_lex_state = 30},
  [511] = {.lex_state = 0, .external_lex_state = 12},
  [512] = {.lex_state = 0, .external_lex_state = 12},
  [513] = {.lex_state = 16, .external_lex_state = 7},
  [514] = {.lex_state = 0, .external_lex_state = 12},
  [515] = {.lex_state = 1, .external_lex_state = 7},
  [516] = {.lex_state = 1, .external_lex_state = 7},
  [517] = {.lex_state = 0, .external_lex_state = 12},
  [518] = {.lex_state = 0, .external_lex_state = 12},
  [519] = {.lex_state = 0, .external_lex_state = 12},
  [520] = {.lex_state = 16, .external_lex_state = 7},
  [521] = {.lex_state = 0, .external_lex_state = 12},
  [522] = {.lex_state = 16, .external_lex_state = 7},
  [523] = {.lex_state = 1},
  [524] = {.lex_state = 16, .external_lex_state = 7},
  [525] = {.lex_state = 16, .external_lex_state = 7},
  [526] = {.lex_state = 0, .external_lex_state = 12},
  [527] = {.lex_state = 0, .external_lex_state = 29},
  [528] = {.lex_state = 0, .external_lex_state = 15},
  [529] = {.lex_state = 0, .external_lex_state = 12},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 12},
  [532] = {.lex_state = 0, .external_lex_state = 12},
  [533] = {.lex_state = 0, .external_lex_state = 12},
  [534] = {.lex_state = 0, .external_lex_state = 12},
  [535] = {.lex_state = 0, .external_lex_state = 2},
  [536] = {.lex_state = 0, .external_lex_state = 12},
  [537] = {.lex_state = 0, .external_lex_state = 12},
  [538] = {.lex_state = 0, .external_lex_state = 12},
  [539] = {.lex_state = 0, .external_lex_state = 12},
  [540] = {.lex_state = 0, .external_lex_state = 12},
  [541] = {.lex_state = 0, .external_lex_state = 12},
  [542] = {.lex_state = 0, .external_lex_state = 12},
  [543] = {.lex_state = 0, .external_lex_state = 12},
  [544] = {.lex_state = 0, .external_lex_state = 12},
  [545] = {.lex_state = 0, .external_lex_state = 15},
  [546] = {.lex_state = 19},
  [547] = {.lex_state = 0, .external_lex_state = 12},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 12},
  [550] = {.lex_state = 0, .external_lex_state = 2},
  [551] = {.lex_state = 0, .external_lex_state = 12},
  [552] = {.lex_state = 0, .external_lex_state = 12},
  [553] = {.lex_state = 0, .external_lex_state = 12},
  [554] = {.lex_state = 0, .external_lex_state = 12},
  [555] = {.lex_state = 0, .external_lex_state = 12},
  [556] = {.lex_state = 0, .external_lex_state = 12},
  [557] = {.lex_state = 0, .external_lex_state = 12},
  [558] = {.lex_state = 0, .external_lex_state = 15},
  [559] = {.lex_state = 0, .external_lex_state = 15},
  [560] = {.lex_state = 0, .external_lex_state = 12},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 0, .external_lex_state = 12},
  [563] = {.lex_state = 0, .external_lex_state = 12},
  [564] = {.lex_state = 0, .external_lex_state = 12},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 12},
  [567] = {.lex_state = 0, .external_lex_state = 29},
  [568] = {.lex_state = 0, .external_lex_state = 12},
  [569] = {.lex_state = 0, .external_lex_state = 15},
  [570] = {.lex_state = 0, .external_lex_state = 12},
  [571] = {.lex_state = 0, .external_lex_state = 12},
  [572] = {.lex_state = 0, .external_lex_state = 12},
  [573] = {.lex_state = 0, .external_lex_state = 12},
  [574] = {.lex_state = 0, .external_lex_state = 12},
  [575] = {.lex_state = 0, .external_lex_state = 12},
  [576] = {.lex_state = 0, .external_lex_state = 12},
  [577] = {.lex_state = 0, .external_lex_state = 12},
  [578] = {.lex_state = 0, .external_lex_state = 12},
  [579] = {.lex_state = 0, .external_lex_state = 2},
  [580] = {.lex_state = 0, .external_lex_state = 12},
  [581] = {.lex_state = 0, .external_lex_state = 12},
  [582] = {.lex_state = 0, .external_lex_state = 12},
  [583] = {.lex_state = 0, .external_lex_state = 12},
  [584] = {.lex_state = 0, .external_lex_state = 12},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 12},
  [587] = {.lex_state = 0, .external_lex_state = 12},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 12},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 9, .external_lex_state = 7},
  [593] = {.lex_state = 0, .external_lex_state = 12},
  [594] = {.lex_state = 16, .external_lex_state = 7},
  [595] = {.lex_state = 0, .external_lex_state = 12},
  [596] = {.lex_state = 9, .external_lex_state = 7},
  [597] = {.lex_state = 16, .external_lex_state = 7},
  [598] = {.lex_state = 1},
  [599] = {.lex_state = 0, .external_lex_state = 2},
  [600] = {.lex_state = 0, .external_lex_state = 7},
  [601] = {.lex_state = 0, .external_lex_state = 7},
  [602] = {.lex_state = 0, .external_lex_state = 30},
  [603] = {.lex_state = 0, .external_lex_state = 7},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 0, .external_lex_state = 7},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 15, .external_lex_state = 7},
  [609] = {.lex_state = 0, .external_lex_state = 31},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 9, .external_lex_state = 7},
  [614] = {.lex_state = 18, .external_lex_state = 7},
  [615] = {.lex_state = 0, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 1},
  [618] = {.lex_state = 0, .external_lex_state = 12},
  [619] = {.lex_state = 0, .external_lex_state = 12},
  [620] = {.lex_state = 0, .external_lex_state = 12},
  [621] = {.lex_state = 0, .external_lex_state = 20},
  [622] = {.lex_state = 0, .external_lex_state = 20},
  [623] = {.lex_state = 0, .external_lex_state = 12},
  [624] = {.lex_state = 0, .external_lex_state = 12},
  [625] = {.lex_state = 1},
  [626] = {.lex_state = 16, .external_lex_state = 7},
  [627] = {.lex_state = 0, .external_lex_state = 2},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 1},
  [630] = {.lex_state = 0, .external_lex_state = 2},
  [631] = {.lex_state = 0, .external_lex_state = 2},
  [632] = {.lex_state = 1},
  [633] = {.lex_state = 0, .external_lex_state = 2},
  [634] = {.lex_state = 0, .external_lex_state = 2},
  [635] = {.lex_state = 0, .external_lex_state = 2},
  [636] = {.lex_state = 0, .external_lex_state = 2},
  [637] = {.lex_state = 0, .external_lex_state = 7},
  [638] = {.lex_state = 0, .external_lex_state = 7},
  [639] = {.lex_state = 0, .external_lex_state = 12},
  [640] = {.lex_state = 76},
  [641] = {.lex_state = 0, .external_lex_state = 12},
  [642] = {.lex_state = 76},
  [643] = {.lex_state = 20},
  [644] = {.lex_state = 0, .external_lex_state = 2},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 12},
  [649] = {.lex_state = 0, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 2},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 6, .external_lex_state = 7},
  [653] = {.lex_state = 0, .external_lex_state = 12},
  [654] = {.lex_state = 0, .external_lex_state = 12},
  [655] = {.lex_state = 0, .external_lex_state = 12},
  [656] = {.lex_state = 10, .external_lex_state = 7},
  [657] = {.lex_state = 0, .external_lex_state = 12},
  [658] = {.lex_state = 0, .external_lex_state = 12},
  [659] = {.lex_state = 0, .external_lex_state = 2},
  [660] = {.lex_state = 0, .external_lex_state = 2},
  [661] = {.lex_state = 0, .external_lex_state = 2},
  [662] = {.lex_state = 0, .external_lex_state = 2},
  [663] = {.lex_state = 0, .external_lex_state = 2},
  [664] = {.lex_state = 0, .external_lex_state = 2},
  [665] = {.lex_state = 0, .external_lex_state = 29},
  [666] = {.lex_state = 0, .external_lex_state = 12},
  [667] = {.lex_state = 0, .external_lex_state = 2},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 0, .external_lex_state = 12},
  [673] = {.lex_state = 1},
  [674] = {.lex_state = 1, .external_lex_state = 7},
  [675] = {.lex_state = 0, .external_lex_state = 12},
  [676] = {.lex_state = 0, .external_lex_state = 2},
  [677] = {.lex_state = 0, .external_lex_state = 12},
  [678] = {.lex_state = 0, .external_lex_state = 2},
  [679] = {.lex_state = 0, .external_lex_state = 12},
  [680] = {.lex_state = 0, .external_lex_state = 12},
  [681] = {.lex_state = 0, .external_lex_state = 12},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 12},
  [684] = {.lex_state = 0, .external_lex_state = 12},
  [685] = {.lex_state = 0, .external_lex_state = 12},
  [686] = {.lex_state = 0, .external_lex_state = 12},
  [687] = {.lex_state = 0, .external_lex_state = 12},
  [688] = {.lex_state = 0, .external_lex_state = 12},
  [689] = {.lex_state = 0, .external_lex_state = 12},
  [690] = {.lex_state = 0, .external_lex_state = 12},
  [691] = {.lex_state = 0, .external_lex_state = 20},
  [692] = {.lex_state = 0, .external_lex_state = 20},
  [693] = {.lex_state = 0, .external_lex_state = 20},
  [694] = {.lex_state = 0, .external_lex_state = 20},
  [695] = {.lex_state = 0, .external_lex_state = 20},
  [696] = {.lex_state = 0, .external_lex_state = 20},
  [697] = {.lex_state = 0, .external_lex_state = 12},
  [698] = {.lex_state = 0, .external_lex_state = 12},
  [699] = {.lex_state = 1, .external_lex_state = 28},
  [700] = {.lex_state = 0, .external_lex_state = 20},
  [701] = {.lex_state = 0, .external_lex_state = 20},
  [702] = {.lex_state = 0, .external_lex_state = 12},
  [703] = {.lex_state = 0, .external_lex_state = 2},
  [704] = {.lex_state = 0, .external_lex_state = 2},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 0, .external_lex_state = 31},
  [707] = {.lex_state = 0, .external_lex_state = 2},
  [708] = {.lex_state = 0, .external_lex_state = 2},
  [709] = {.lex_state = 0, .external_lex_state = 2},
  [710] = {.lex_state = 0, .external_lex_state = 2},
  [711] = {.lex_state = 16, .external_lex_state = 7},
  [712] = {.lex_state = 1},
  [713] = {.lex_state = 0, .external_lex_state = 2},
  [714] = {.lex_state = 0, .external_lex_state = 12},
  [715] = {.lex_state = 0, .external_lex_state = 12},
  [716] = {.lex_state = 1, .external_lex_state = 7},
  [717] = {.lex_state = 1, .external_lex_state = 7},
  [718] = {.lex_state = 1, .external_lex_state = 7},
  [719] = {.lex_state = 0, .external_lex_state = 2},
  [720] = {.lex_state = 0, .external_lex_state = 2},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 16, .external_lex_state = 7},
  [723] = {.lex_state = 16, .external_lex_state = 7},
  [724] = {.lex_state = 0, .external_lex_state = 12},
  [725] = {.lex_state = 0, .external_lex_state = 12},
  [726] = {.lex_state = 0, .external_lex_state = 12},
  [727] = {.lex_state = 0, .external_lex_state = 12},
  [728] = {.lex_state = 0, .external_lex_state = 12},
  [729] = {.lex_state = 16, .external_lex_state = 7},
  [730] = {.lex_state = 16, .external_lex_state = 7},
  [731] = {.lex_state = 16, .external_lex_state = 7},
  [732] = {.lex_state = 0, .external_lex_state = 12},
  [733] = {.lex_state = 0, .external_lex_state = 2},
  [734] = {.lex_state = 0, .external_lex_state = 12},
  [735] = {.lex_state = 0, .external_lex_state = 12},
  [736] = {.lex_state = 0, .external_lex_state = 12},
  [737] = {.lex_state = 16, .external_lex_state = 7},
  [738] = {.lex_state = 16, .external_lex_state = 7},
  [739] = {.lex_state = 16, .external_lex_state = 7},
  [740] = {.lex_state = 16, .external_lex_state = 7},
  [741] = {.lex_state = 16, .external_lex_state = 7},
  [742] = {.lex_state = 0, .external_lex_state = 12},
  [743] = {.lex_state = 0, .external_lex_state = 12},
  [744] = {.lex_state = 19},
  [745] = {.lex_state = 0, .external_lex_state = 2},
  [746] = {.lex_state = 0, .external_lex_state = 12},
  [747] = {.lex_state = 0, .external_lex_state = 12},
  [748] = {.lex_state = 0, .external_lex_state = 12},
  [749] = {.lex_state = 0, .external_lex_state = 12},
  [750] = {.lex_state = 0, .external_lex_state = 31},
  [751] = {.lex_state = 0, .external_lex_state = 12},
  [752] = {.lex_state = 0, .external_lex_state = 31},
  [753] = {.lex_state = 0, .external_lex_state = 12},
  [754] = {.lex_state = 0, .external_lex_state = 12},
  [755] = {.lex_state = 0, .external_lex_state = 12},
  [756] = {.lex_state = 0, .external_lex_state = 12},
  [757] = {.lex_state = 0, .external_lex_state = 12},
  [758] = {.lex_state = 0, .external_lex_state = 29},
  [759] = {.lex_state = 0, .external_lex_state = 29},
  [760] = {.lex_state = 9, .external_lex_state = 7},
  [761] = {.lex_state = 18, .external_lex_state = 7},
  [762] = {.lex_state = 76},
  [763] = {.lex_state = 20},
  [764] = {.lex_state = 0, .external_lex_state = 29},
  [765] = {.lex_state = 0, .external_lex_state = 29},
  [766] = {.lex_state = 0, .external_lex_state = 29},
  [767] = {.lex_state = 0, .external_lex_state = 29},
  [768] = {.lex_state = 1},
  [769] = {.lex_state = 0, .external_lex_state = 12},
  [770] = {.lex_state = 0, .external_lex_state = 12},
  [771] = {.lex_state = 0, .external_lex_state = 12},
  [772] = {.lex_state = 16, .external_lex_state = 7},
  [773] = {.lex_state = 0, .external_lex_state = 2},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 0, .external_lex_state = 7},
  [776] = {.lex_state = 0, .external_lex_state = 7},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 1},
  [779] = {.lex_state = 1, .external_lex_state = 7},
  [780] = {.lex_state = 1},
  [781] = {.lex_state = 1, .external_lex_state = 7},
  [782] = {.lex_state = 19},
  [783] = {.lex_state = 1, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 0, .external_lex_state = 7},
  [787] = {.lex_state = 0, .external_lex_state = 7},
  [788] = {.lex_state = 0, .external_lex_state = 2},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 31},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 7},
  [793] = {.lex_state = 0, .external_lex_state = 7},
  [794] = {.lex_state = 0, .external_lex_state = 7},
  [795] = {.lex_state = 0, .external_lex_state = 7},
  [796] = {.lex_state = 0, .external_lex_state = 7},
  [797] = {.lex_state = 0, .external_lex_state = 7},
  [798] = {.lex_state = 0, .external_lex_state = 7},
  [799] = {.lex_state = 0, .external_lex_state = 7},
  [800] = {.lex_state = 1},
  [801] = {.lex_state = 0, .external_lex_state = 2},
  [802] = {.lex_state = 0, .external_lex_state = 2},
  [803] = {.lex_state = 0, .external_lex_state = 24},
  [804] = {.lex_state = 0, .external_lex_state = 7},
  [805] = {.lex_state = 1},
  [806] = {.lex_state = 0, .external_lex_state = 24},
  [807] = {.lex_state = 0, .external_lex_state = 24},
  [808] = {.lex_state = 19},
  [809] = {.lex_state = 0, .external_lex_state = 31},
  [810] = {.lex_state = 0, .external_lex_state = 24},
  [811] = {.lex_state = 0, .external_lex_state = 24},
  [812] = {.lex_state = 0, .external_lex_state = 7},
  [813] = {.lex_state = 6, .external_lex_state = 7},
  [814] = {.lex_state = 0, .external_lex_state = 7},
  [815] = {.lex_state = 0, .external_lex_state = 32},
  [816] = {.lex_state = 0, .external_lex_state = 7},
  [817] = {.lex_state = 0, .external_lex_state = 22},
  [818] = {.lex_state = 1},
  [819] = {.lex_state = 0, .external_lex_state = 7},
  [820] = {.lex_state = 0, .external_lex_state = 22},
  [821] = {.lex_state = 0, .external_lex_state = 7},
  [822] = {.lex_state = 0, .external_lex_state = 24},
  [823] = {.lex_state = 0, .external_lex_state = 24},
  [824] = {.lex_state = 0, .external_lex_state = 22},
  [825] = {.lex_state = 1, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 22},
  [827] = {.lex_state = 0, .external_lex_state = 22},
  [828] = {.lex_state = 0, .external_lex_state = 22},
  [829] = {.lex_state = 0, .external_lex_state = 22},
  [830] = {.lex_state = 0, .external_lex_state = 7},
  [831] = {.lex_state = 1, .external_lex_state = 7},
  [832] = {.lex_state = 0, .external_lex_state = 7},
  [833] = {.lex_state = 1, .external_lex_state = 7},
  [834] = {.lex_state = 1, .external_lex_state = 7},
  [835] = {.lex_state = 0, .external_lex_state = 22},
  [836] = {.lex_state = 1},
  [837] = {.lex_state = 0, .external_lex_state = 25},
  [838] = {.lex_state = 0, .external_lex_state = 25},
  [839] = {.lex_state = 0, .external_lex_state = 24},
  [840] = {.lex_state = 0, .external_lex_state = 24},
  [841] = {.lex_state = 0, .external_lex_state = 24},
  [842] = {.lex_state = 0, .external_lex_state = 24},
  [843] = {.lex_state = 0, .external_lex_state = 24},
  [844] = {.lex_state = 0, .external_lex_state = 24},
  [845] = {.lex_state = 0, .external_lex_state = 7},
  [846] = {.lex_state = 0, .external_lex_state = 25},
  [847] = {.lex_state = 0, .external_lex_state = 25},
  [848] = {.lex_state = 0, .external_lex_state = 25},
  [849] = {.lex_state = 0, .external_lex_state = 25},
  [850] = {.lex_state = 0, .external_lex_state = 25},
  [851] = {.lex_state = 0, .external_lex_state = 25},
  [852] = {.lex_state = 1, .external_lex_state = 7},
  [853] = {.lex_state = 1, .external_lex_state = 7},
  [854] = {.lex_state = 1, .external_lex_state = 28},
  [855] = {.lex_state = 1},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 0, .external_lex_state = 7},
  [858] = {.lex_state = 0, .external_lex_state = 23},
  [859] = {.lex_state = 0, .external_lex_state = 7},
  [860] = {.lex_state = 1},
  [861] = {.lex_state = 1},
  [862] = {.lex_state = 0, .external_lex_state = 7},
  [863] = {.lex_state = 16, .external_lex_state = 7},
  [864] = {.lex_state = 0, .external_lex_state = 7},
  [865] = {.lex_state = 16, .external_lex_state = 7},
  [866] = {.lex_state = 16, .external_lex_state = 7},
  [867] = {.lex_state = 0, .external_lex_state = 7},
  [868] = {.lex_state = 0, .external_lex_state = 7},
  [869] = {.lex_state = 0, .external_lex_state = 7},
  [870] = {.lex_state = 0, .external_lex_state = 7},
  [871] = {.lex_state = 16, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 7},
  [873] = {.lex_state = 20},
  [874] = {.lex_state = 0, .external_lex_state = 7},
  [875] = {.lex_state = 0, .external_lex_state = 7},
  [876] = {.lex_state = 1, .external_lex_state = 7},
  [877] = {.lex_state = 0, .external_lex_state = 7},
  [878] = {.lex_state = 16, .external_lex_state = 7},
  [879] = {.lex_state = 0, .external_lex_state = 7},
  [880] = {.lex_state = 1},
  [881] = {.lex_state = 0, .external_lex_state = 7},
  [882] = {.lex_state = 0, .external_lex_state = 7},
  [883] = {.lex_state = 0, .external_lex_state = 7},
  [884] = {.lex_state = 0, .external_lex_state = 7},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 0, .external_lex_state = 7},
  [887] = {.lex_state = 0, .external_lex_state = 7},
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
  [899] = {.lex_state = 0, .external_lex_state = 7},
  [900] = {.lex_state = 1},
  [901] = {.lex_state = 0, .external_lex_state = 7},
  [902] = {.lex_state = 0, .external_lex_state = 7},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 0, .external_lex_state = 7},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 46},
  [907] = {.lex_state = 0, .external_lex_state = 7},
  [908] = {.lex_state = 0, .external_lex_state = 7},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 7},
  [911] = {.lex_state = 0, .external_lex_state = 7},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 0, .external_lex_state = 7},
  [916] = {.lex_state = 0, .external_lex_state = 7},
  [917] = {.lex_state = 0, .external_lex_state = 32},
  [918] = {.lex_state = 0, .external_lex_state = 7},
  [919] = {.lex_state = 0, .external_lex_state = 7},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 7},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 7},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 0, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 32},
  [927] = {.lex_state = 0, .external_lex_state = 7},
  [928] = {.lex_state = 0, .external_lex_state = 7},
  [929] = {.lex_state = 0, .external_lex_state = 7},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 0, .external_lex_state = 7},
  [932] = {.lex_state = 0, .external_lex_state = 24},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 0, .external_lex_state = 7},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 6, .external_lex_state = 7},
  [937] = {.lex_state = 0, .external_lex_state = 7},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 33},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 1},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 0, .external_lex_state = 32},
  [947] = {.lex_state = 0, .external_lex_state = 7},
  [948] = {.lex_state = 1},
  [949] = {.lex_state = 1},
  [950] = {.lex_state = 0, .external_lex_state = 7},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 0, .external_lex_state = 7},
  [953] = {.lex_state = 1},
  [954] = {.lex_state = 0, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 0, .external_lex_state = 7},
  [958] = {.lex_state = 0, .external_lex_state = 7},
  [959] = {.lex_state = 0, .external_lex_state = 31},
  [960] = {.lex_state = 0, .external_lex_state = 7},
  [961] = {.lex_state = 0, .external_lex_state = 7},
  [962] = {.lex_state = 19},
  [963] = {.lex_state = 1},
  [964] = {.lex_state = 0, .external_lex_state = 7},
  [965] = {.lex_state = 0, .external_lex_state = 31},
  [966] = {.lex_state = 0, .external_lex_state = 31},
  [967] = {.lex_state = 0, .external_lex_state = 33},
  [968] = {.lex_state = 295, .external_lex_state = 34},
  [969] = {.lex_state = 1},
  [970] = {.lex_state = 0, .external_lex_state = 7},
  [971] = {.lex_state = 0, .external_lex_state = 7},
  [972] = {.lex_state = 0, .external_lex_state = 7},
  [973] = {.lex_state = 0, .external_lex_state = 7},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 0, .external_lex_state = 33},
  [976] = {.lex_state = 1},
  [977] = {.lex_state = 0, .external_lex_state = 35},
  [978] = {.lex_state = 0},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 6},
  [981] = {.lex_state = 1},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 1},
  [984] = {.lex_state = 294},
  [985] = {.lex_state = 0, .external_lex_state = 6},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 295, .external_lex_state = 34},
  [988] = {.lex_state = 19},
  [989] = {.lex_state = 1},
  [990] = {.lex_state = 1},
  [991] = {.lex_state = 1},
  [992] = {.lex_state = 295, .external_lex_state = 34},
  [993] = {.lex_state = 1},
  [994] = {.lex_state = 0, .external_lex_state = 35},
  [995] = {.lex_state = 1},
  [996] = {.lex_state = 19},
  [997] = {.lex_state = 0, .external_lex_state = 28},
  [998] = {.lex_state = 0, .external_lex_state = 3},
  [999] = {.lex_state = 0, .external_lex_state = 35},
  [1000] = {.lex_state = 0, .external_lex_state = 31},
  [1001] = {.lex_state = 19},
  [1002] = {.lex_state = 296},
  [1003] = {.lex_state = 296},
  [1004] = {.lex_state = 0, .external_lex_state = 31},
  [1005] = {.lex_state = 0, .external_lex_state = 35},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 19},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 0, .external_lex_state = 36},
  [1011] = {.lex_state = 46},
  [1012] = {.lex_state = 1},
  [1013] = {.lex_state = 0, .external_lex_state = 36},
  [1014] = {.lex_state = 295, .external_lex_state = 34},
  [1015] = {.lex_state = 295, .external_lex_state = 34},
  [1016] = {.lex_state = 296},
  [1017] = {.lex_state = 0, .external_lex_state = 7},
  [1018] = {.lex_state = 1},
  [1019] = {.lex_state = 0, .external_lex_state = 7},
  [1020] = {.lex_state = 0, .external_lex_state = 7},
  [1021] = {.lex_state = 295, .external_lex_state = 34},
  [1022] = {.lex_state = 295, .external_lex_state = 34},
  [1023] = {.lex_state = 295, .external_lex_state = 34},
  [1024] = {.lex_state = 0, .external_lex_state = 28},
  [1025] = {.lex_state = 295, .external_lex_state = 34},
  [1026] = {.lex_state = 295, .external_lex_state = 34},
  [1027] = {.lex_state = 296},
  [1028] = {.lex_state = 295, .external_lex_state = 34},
  [1029] = {.lex_state = 295, .external_lex_state = 34},
  [1030] = {.lex_state = 295, .external_lex_state = 34},
  [1031] = {.lex_state = 295, .external_lex_state = 34},
  [1032] = {.lex_state = 295, .external_lex_state = 34},
  [1033] = {.lex_state = 295, .external_lex_state = 34},
  [1034] = {.lex_state = 295, .external_lex_state = 34},
  [1035] = {.lex_state = 295, .external_lex_state = 34},
  [1036] = {.lex_state = 295, .external_lex_state = 34},
  [1037] = {.lex_state = 295, .external_lex_state = 34},
  [1038] = {.lex_state = 1},
  [1039] = {.lex_state = 296},
  [1040] = {.lex_state = 1},
  [1041] = {.lex_state = 46},
  [1042] = {.lex_state = 296},
  [1043] = {.lex_state = 297},
  [1044] = {.lex_state = 0, .external_lex_state = 7},
  [1045] = {.lex_state = 19},
  [1046] = {.lex_state = 1},
  [1047] = {.lex_state = 294},
  [1048] = {.lex_state = 0, .external_lex_state = 7},
  [1049] = {.lex_state = 298},
  [1050] = {.lex_state = 0, .external_lex_state = 36},
  [1051] = {.lex_state = 0, .external_lex_state = 36},
  [1052] = {.lex_state = 1},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 1},
  [1055] = {.lex_state = 0, .external_lex_state = 3},
  [1056] = {.lex_state = 1},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 1},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 0},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 0},
  [1066] = {.lex_state = 1},
  [1067] = {.lex_state = 297},
  [1068] = {.lex_state = 298},
  [1069] = {.lex_state = 294},
  [1070] = {.lex_state = 1},
  [1071] = {.lex_state = 0, .external_lex_state = 33},
  [1072] = {.lex_state = 1},
  [1073] = {.lex_state = 1},
  [1074] = {.lex_state = 0, .external_lex_state = 37},
  [1075] = {.lex_state = 0, .external_lex_state = 37},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 1},
  [1078] = {.lex_state = 0, .external_lex_state = 34},
  [1079] = {.lex_state = 0, .external_lex_state = 34},
  [1080] = {.lex_state = 0, .external_lex_state = 34},
  [1081] = {.lex_state = 0, .external_lex_state = 7},
  [1082] = {.lex_state = 0, .external_lex_state = 37},
  [1083] = {.lex_state = 0, .external_lex_state = 37},
  [1084] = {.lex_state = 1},
  [1085] = {.lex_state = 294},
  [1086] = {.lex_state = 1},
  [1087] = {.lex_state = 1},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 0, .external_lex_state = 34},
  [1090] = {.lex_state = 0, .external_lex_state = 34},
  [1091] = {.lex_state = 0, .external_lex_state = 34},
  [1092] = {.lex_state = 0, .external_lex_state = 7},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 1},
  [1095] = {.lex_state = 1},
  [1096] = {.lex_state = 0},
  [1097] = {.lex_state = 1},
  [1098] = {.lex_state = 1},
  [1099] = {.lex_state = 0, .external_lex_state = 37},
  [1100] = {.lex_state = 0, .external_lex_state = 34},
  [1101] = {.lex_state = 0, .external_lex_state = 34},
  [1102] = {.lex_state = 0, .external_lex_state = 34},
  [1103] = {.lex_state = 0, .external_lex_state = 7},
  [1104] = {.lex_state = 0, .external_lex_state = 37},
  [1105] = {.lex_state = 1},
  [1106] = {.lex_state = 1},
  [1107] = {.lex_state = 0, .external_lex_state = 34},
  [1108] = {.lex_state = 0, .external_lex_state = 34},
  [1109] = {.lex_state = 0, .external_lex_state = 34},
  [1110] = {.lex_state = 0, .external_lex_state = 7},
  [1111] = {.lex_state = 1},
  [1112] = {.lex_state = 1},
  [1113] = {.lex_state = 0, .external_lex_state = 37},
  [1114] = {.lex_state = 0, .external_lex_state = 34},
  [1115] = {.lex_state = 0, .external_lex_state = 34},
  [1116] = {.lex_state = 0, .external_lex_state = 34},
  [1117] = {.lex_state = 0, .external_lex_state = 7},
  [1118] = {.lex_state = 1},
  [1119] = {.lex_state = 0, .external_lex_state = 37},
  [1120] = {.lex_state = 0, .external_lex_state = 37},
  [1121] = {.lex_state = 0, .external_lex_state = 34},
  [1122] = {.lex_state = 0, .external_lex_state = 34},
  [1123] = {.lex_state = 0, .external_lex_state = 34},
  [1124] = {.lex_state = 0, .external_lex_state = 7},
  [1125] = {.lex_state = 0, .external_lex_state = 34},
  [1126] = {.lex_state = 1},
  [1127] = {.lex_state = 0, .external_lex_state = 37},
  [1128] = {.lex_state = 0, .external_lex_state = 34},
  [1129] = {.lex_state = 0, .external_lex_state = 34},
  [1130] = {.lex_state = 0, .external_lex_state = 34},
  [1131] = {.lex_state = 0, .external_lex_state = 7},
  [1132] = {.lex_state = 1},
  [1133] = {.lex_state = 46},
  [1134] = {.lex_state = 0, .external_lex_state = 37},
  [1135] = {.lex_state = 0, .external_lex_state = 34},
  [1136] = {.lex_state = 0, .external_lex_state = 34},
  [1137] = {.lex_state = 0, .external_lex_state = 34},
  [1138] = {.lex_state = 0, .external_lex_state = 7},
  [1139] = {.lex_state = 0, .external_lex_state = 7},
  [1140] = {.lex_state = 0, .external_lex_state = 7},
  [1141] = {.lex_state = 0, .external_lex_state = 7},
  [1142] = {.lex_state = 0, .external_lex_state = 7},
  [1143] = {.lex_state = 46},
  [1144] = {.lex_state = 0, .external_lex_state = 37},
  [1145] = {.lex_state = 0, .external_lex_state = 34},
  [1146] = {.lex_state = 0, .external_lex_state = 37},
  [1147] = {.lex_state = 0, .external_lex_state = 34},
  [1148] = {.lex_state = 0, .external_lex_state = 7},
  [1149] = {.lex_state = 0, .external_lex_state = 37},
  [1150] = {.lex_state = 0, .external_lex_state = 7},
  [1151] = {.lex_state = 1},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 46},
  [1155] = {.lex_state = 1},
  [1156] = {.lex_state = 0, .external_lex_state = 37},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 1},
  [1159] = {.lex_state = 46},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 0, .external_lex_state = 34},
  [1162] = {.lex_state = 46},
  [1163] = {.lex_state = 1},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 0, .external_lex_state = 7},
  [1166] = {.lex_state = 46},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 0, .external_lex_state = 34},
  [1169] = {.lex_state = 1},
  [1170] = {.lex_state = 1},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 1},
  [1173] = {.lex_state = 0, .external_lex_state = 37},
  [1174] = {.lex_state = 1},
  [1175] = {.lex_state = 0, .external_lex_state = 37},
  [1176] = {.lex_state = 1},
  [1177] = {.lex_state = 1},
  [1178] = {.lex_state = 1},
  [1179] = {.lex_state = 0, .external_lex_state = 37},
  [1180] = {.lex_state = 0, .external_lex_state = 7},
  [1181] = {.lex_state = 0, .external_lex_state = 37},
  [1182] = {.lex_state = 0, .external_lex_state = 7},
  [1183] = {.lex_state = 32},
  [1184] = {.lex_state = 0, .external_lex_state = 34},
  [1185] = {.lex_state = 0, .external_lex_state = 37},
  [1186] = {.lex_state = 0, .external_lex_state = 37},
  [1187] = {.lex_state = 1},
  [1188] = {.lex_state = 46},
  [1189] = {.lex_state = 1},
  [1190] = {.lex_state = 1},
  [1191] = {.lex_state = 297},
  [1192] = {.lex_state = 0, .external_lex_state = 37},
  [1193] = {.lex_state = 0, .external_lex_state = 37},
  [1194] = {.lex_state = 0, .external_lex_state = 37},
  [1195] = {.lex_state = 1},
  [1196] = {.lex_state = 1},
  [1197] = {.lex_state = 0, .external_lex_state = 37},
  [1198] = {.lex_state = 6},
  [1199] = {.lex_state = 0, .external_lex_state = 34},
  [1200] = {.lex_state = 0, .external_lex_state = 37},
  [1201] = {.lex_state = 1},
  [1202] = {.lex_state = 1},
  [1203] = {.lex_state = 1},
  [1204] = {.lex_state = 0, .external_lex_state = 37},
  [1205] = {.lex_state = 298},
  [1206] = {.lex_state = 295},
  [1207] = {.lex_state = 0, .external_lex_state = 37},
  [1208] = {.lex_state = 0, .external_lex_state = 37},
  [1209] = {.lex_state = 0, .external_lex_state = 37},
  [1210] = {.lex_state = 0, .external_lex_state = 37},
  [1211] = {.lex_state = 1},
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
    [sym_source_file] = STATE(1088),
    [sym_item] = STATE(144),
    [sym__trivia] = STATE(144),
    [aux_sym_source_file_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(618),
    [sym__collection_operation] = STATE(618),
    [sym_let_statement] = STATE(618),
    [sym_exec_statement] = STATE(618),
    [sym_spawn_statement] = STATE(618),
    [sym__invalid_exec_binding] = STATE(619),
    [sym__invalid_reserved_binding] = STATE(620),
    [sym__invalid_named_binding] = STATE(623),
    [sym_run_statement] = STATE(618),
    [sym__async_modifier] = STATE(1053),
    [sym__run] = STATE(624),
    [sym_await_statement] = STATE(618),
    [sym_implicit_run_statement] = STATE(618),
    [sym__implicit_run_line] = STATE(147),
    [sym_seek_statement] = STATE(618),
    [sym_ask_statement] = STATE(618),
    [sym_generate_statement] = STATE(618),
    [sym_reduce_statement] = STATE(618),
    [sym_map_statement] = STATE(618),
    [sym_keep_statement] = STATE(618),
    [sym_drop_statement] = STATE(618),
    [sym_sort_statement] = STATE(618),
    [sym_repeat_statement] = STATE(618),
    [sym_invalid_flow_reserved_statement] = STATE(618),
    [sym__query_directive_key] = STATE(865),
    [sym__route_directive_key] = STATE(865),
    [sym_directive_key] = STATE(626),
    [sym_role] = STATE(626),
    [sym__flow_reserved_word] = STATE(626),
    [sym__collection_binding_word] = STATE(626),
    [sym__async_await_binding_word] = STATE(626),
    [sym__reserved_binding_word] = STATE(626),
    [sym__agic_reserved_word] = STATE(626),
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
    [sym_pass_keyword] = ACTIONS(25),
    [sym_flow_run_keyword] = ACTIONS(27),
    [sym_flow_async_keyword] = ACTIONS(29),
    [sym_flow_await_keyword] = ACTIONS(31),
    [sym_flow_exec_keyword] = ACTIONS(33),
    [sym_flow_spawn_keyword] = ACTIONS(35),
    [sym_flow_let_keyword] = ACTIONS(37),
    [sym_flow_seek_keyword] = ACTIONS(39),
    [sym_flow_ask_keyword] = ACTIONS(41),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(43),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(45),
    [sym_flow_map_keyword] = ACTIONS(47),
    [sym_flow_keep_keyword] = ACTIONS(49),
    [sym_flow_drop_keyword] = ACTIONS(51),
    [sym_flow_sort_keyword] = ACTIONS(53),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(55),
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
    [sym__flow_raw_text] = ACTIONS(57),
  },
  [3] = {
    [sym__flow_operation] = STATE(618),
    [sym__collection_operation] = STATE(618),
    [sym_let_statement] = STATE(618),
    [sym_exec_statement] = STATE(618),
    [sym_spawn_statement] = STATE(618),
    [sym__invalid_exec_binding] = STATE(619),
    [sym__invalid_reserved_binding] = STATE(620),
    [sym__invalid_named_binding] = STATE(623),
    [sym_run_statement] = STATE(618),
    [sym__async_modifier] = STATE(1053),
    [sym__run] = STATE(624),
    [sym_await_statement] = STATE(618),
    [sym_implicit_run_statement] = STATE(618),
    [sym__implicit_run_line] = STATE(147),
    [sym_seek_statement] = STATE(618),
    [sym_ask_statement] = STATE(618),
    [sym_generate_statement] = STATE(618),
    [sym_reduce_statement] = STATE(618),
    [sym_map_statement] = STATE(618),
    [sym_keep_statement] = STATE(618),
    [sym_drop_statement] = STATE(618),
    [sym_sort_statement] = STATE(618),
    [sym_repeat_statement] = STATE(618),
    [sym_invalid_flow_reserved_statement] = STATE(618),
    [sym__query_directive_key] = STATE(865),
    [sym__route_directive_key] = STATE(865),
    [sym_directive_key] = STATE(626),
    [sym_role] = STATE(626),
    [sym__flow_reserved_word] = STATE(626),
    [sym__collection_binding_word] = STATE(626),
    [sym__async_await_binding_word] = STATE(626),
    [sym__reserved_binding_word] = STATE(626),
    [sym__agic_reserved_word] = STATE(626),
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
    [sym_flow_run_keyword] = ACTIONS(27),
    [sym_flow_async_keyword] = ACTIONS(29),
    [sym_flow_await_keyword] = ACTIONS(31),
    [sym_flow_exec_keyword] = ACTIONS(33),
    [sym_flow_spawn_keyword] = ACTIONS(35),
    [sym_flow_let_keyword] = ACTIONS(37),
    [sym_flow_seek_keyword] = ACTIONS(39),
    [sym_flow_ask_keyword] = ACTIONS(41),
    [sym_flow_scatter_keyword] = ACTIONS(11),
    [sym_flow_storm_keyword] = ACTIONS(11),
    [sym_flow_generate_keyword] = ACTIONS(43),
    [sym_flow_gather_keyword] = ACTIONS(11),
    [sym_flow_settle_keyword] = ACTIONS(11),
    [sym_flow_reduce_keyword] = ACTIONS(45),
    [sym_flow_map_keyword] = ACTIONS(47),
    [sym_flow_keep_keyword] = ACTIONS(49),
    [sym_flow_drop_keyword] = ACTIONS(51),
    [sym_flow_sort_keyword] = ACTIONS(53),
    [sym_flow_rank_keyword] = ACTIONS(11),
    [sym_flow_repeat_keyword] = ACTIONS(55),
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
    [sym__flow_raw_text] = ACTIONS(57),
  },
  [4] = {
    [sym__flow_operation] = STATE(414),
    [sym__collection_operation] = STATE(414),
    [sym_let_statement] = STATE(414),
    [sym_exec_statement] = STATE(414),
    [sym_spawn_statement] = STATE(414),
    [sym__invalid_exec_binding] = STATE(418),
    [sym__invalid_reserved_binding] = STATE(419),
    [sym__invalid_named_binding] = STATE(420),
    [sym_run_statement] = STATE(414),
    [sym__async_modifier] = STATE(1066),
    [sym__run] = STATE(425),
    [sym_await_statement] = STATE(414),
    [sym_implicit_run_statement] = STATE(414),
    [sym__implicit_run_line] = STATE(87),
    [sym_seek_statement] = STATE(414),
    [sym_ask_statement] = STATE(414),
    [sym_generate_statement] = STATE(414),
    [sym_reduce_statement] = STATE(414),
    [sym_map_statement] = STATE(414),
    [sym_keep_statement] = STATE(414),
    [sym_drop_statement] = STATE(414),
    [sym_sort_statement] = STATE(414),
    [sym_repeat_statement] = STATE(414),
    [sym_invalid_flow_reserved_statement] = STATE(414),
    [sym__query_directive_key] = STATE(865),
    [sym__route_directive_key] = STATE(865),
    [sym_directive_key] = STATE(711),
    [sym_role] = STATE(711),
    [sym__flow_reserved_word] = STATE(711),
    [sym__collection_binding_word] = STATE(711),
    [sym__async_await_binding_word] = STATE(711),
    [sym__reserved_binding_word] = STATE(711),
    [sym__agic_reserved_word] = STATE(711),
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
    STATE(216), 1,
      sym_local_name,
    STATE(624), 1,
      sym__run,
    STATE(1053), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(666), 14,
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
    STATE(206), 1,
      sym_local_name,
    STATE(425), 1,
      sym__run,
    STATE(1066), 1,
      sym__async_modifier,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(438), 14,
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
    STATE(495), 1,
      sym_text_inline,
    STATE(497), 1,
      sym__run,
    STATE(584), 1,
      sym_text_block,
    STATE(706), 1,
      sym_line_end,
    STATE(496), 7,
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
    STATE(752), 1,
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
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym_pass_keyword,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(127), 1,
      sym__unroled_message_line,
    STATE(596), 1,
      sym_role,
    ACTIONS(17), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(595), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(597), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(865), 2,
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
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(127), 1,
      sym__unroled_message_line,
    STATE(596), 1,
      sym_role,
    ACTIONS(17), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(595), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(597), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(865), 2,
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
    STATE(651), 12,
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
    STATE(768), 1,
      sym__query_directive_key,
    STATE(1065), 1,
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
    STATE(598), 1,
      sym__query_directive_key,
    STATE(986), 1,
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
    STATE(140), 1,
      sym_base_type,
    STATE(344), 1,
      sym_type_name,
    STATE(476), 1,
      sym_type,
    STATE(511), 1,
      sym_line_end,
    STATE(343), 2,
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
    STATE(140), 1,
      sym_base_type,
    STATE(344), 1,
      sym_type_name,
    STATE(395), 1,
      sym_type,
    STATE(536), 1,
      sym_line_end,
    STATE(343), 2,
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
    STATE(140), 1,
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
    STATE(140), 1,
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
    STATE(522), 1,
      sym__collection_binding_word,
    ACTIONS(249), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(521), 5,
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
    STATE(739), 1,
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
  [709] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(253), 1,
      sym_flow_if_keyword,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    STATE(294), 1,
      sym__named_if_complement,
    STATE(679), 1,
      sym__inline_if_complement,
    STATE(680), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(819), 1,
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
    STATE(294), 1,
      sym__named_if_complement,
    STATE(679), 1,
      sym__inline_if_complement,
    STATE(681), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(821), 1,
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
    STATE(50), 1,
      sym__required_space,
    STATE(769), 1,
      sym_line_end,
    STATE(770), 1,
      sym__invalid_modified_run_tail,
    STATE(771), 1,
      sym_inline_agic,
    STATE(772), 1,
      sym_runnable,
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
  [849] = 10,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(281), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(448), 1,
      sym__inline_if_complement,
    STATE(453), 1,
      sym__if_complements,
    STATE(880), 1,
      sym__lanes_complement,
    STATE(882), 1,
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
    STATE(417), 1,
      sym__named_if_complement,
    STATE(448), 1,
      sym__inline_if_complement,
    STATE(450), 1,
      sym__if_complements,
    STATE(880), 1,
      sym__lanes_complement,
    STATE(881), 1,
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
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1176), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [939] = 10,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(289), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_arrow,
    ACTIONS(293), 1,
      sym_colon,
    ACTIONS(295), 1,
      sym_newline,
    STATE(259), 1,
      sym__lanes_complement,
    STATE(675), 1,
      sym__runnable_complements,
    STATE(677), 1,
      sym_inline_agic,
    STATE(814), 1,
      sym__named_using_complement,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [971] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(991), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [995] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1190), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1019] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1195), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1043] = 6,
    ACTIONS(299), 1,
      sym_pascal_name,
    STATE(405), 1,
      sym_base_type,
    STATE(784), 1,
      sym_type,
    STATE(834), 1,
      sym_type_name,
    STATE(833), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(297), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1067] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1126), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1091] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1106), 1,
      sym_type,
    STATE(625), 2,
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
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1157), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1139] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1094), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1163] = 6,
    ACTIONS(299), 1,
      sym_pascal_name,
    STATE(405), 1,
      sym_base_type,
    STATE(834), 1,
      sym_type_name,
    STATE(961), 1,
      sym_type,
    STATE(833), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(297), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1187] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(993), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1211] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1202), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1235] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1132), 1,
      sym_type,
    STATE(625), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(283), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1259] = 10,
    ACTIONS(255), 1,
      sym_flow_in_keyword,
    ACTIONS(289), 1,
      sym_flow_using_keyword,
    ACTIONS(295), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(441), 1,
      sym__runnable_complements,
    STATE(445), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [1291] = 6,
    ACTIONS(285), 1,
      sym_pascal_name,
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1118), 1,
      sym_type,
    STATE(625), 2,
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
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1163), 1,
      sym_type,
    STATE(625), 2,
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
    STATE(201), 1,
      sym_base_type,
    STATE(628), 1,
      sym_type_name,
    STATE(1164), 1,
      sym_type,
    STATE(625), 2,
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
    STATE(257), 1,
      sym_property,
    STATE(1119), 1,
      sym_cap_body,
    STATE(1156), 1,
      sym__cap_text_body,
    STATE(48), 2,
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
    STATE(257), 1,
      sym_property,
    STATE(1156), 1,
      sym__cap_text_body,
    STATE(1200), 1,
      sym_cap_body,
    STATE(98), 2,
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
    STATE(257), 1,
      sym_property,
    STATE(1156), 1,
      sym__cap_text_body,
    STATE(1193), 1,
      sym_cap_body,
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
    ACTIONS(315), 1,
      sym_blank_line,
    ACTIONS(323), 1,
      sym__dedent,
    STATE(257), 1,
      sym_property,
    STATE(1146), 1,
      sym_cap_body,
    STATE(1156), 1,
      sym__cap_text_body,
    STATE(98), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1479] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(325), 1,
      sym__one_integer_literal,
    ACTIONS(327), 1,
      sym__other_integer_literal,
    ACTIONS(329), 1,
      sym_flow_windowing_keyword,
    ACTIONS(331), 1,
      sym_colon,
    STATE(774), 1,
      sym__repeat_count_complement,
    STATE(1170), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1505] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(267), 1,
      sym_snake_name,
    ACTIONS(333), 1,
      sym_arrow,
    ACTIONS(335), 1,
      sym_colon,
    ACTIONS(337), 1,
      sym_text_line,
    STATE(511), 1,
      sym_line_end,
    STATE(512), 1,
      sym_inline_agic,
    STATE(513), 1,
      sym_runnable,
  [1533] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(31), 1,
      sym_flow_await_keyword,
    ACTIONS(339), 1,
      sym_flow_run_keyword,
    STATE(525), 1,
      sym__async_await_binding_word,
    STATE(624), 1,
      sym__run,
    STATE(1053), 1,
      sym__async_modifier,
    STATE(521), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1557] = 8,
    ACTIONS(341), 1,
      sym_flow_if_keyword,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    STATE(294), 1,
      sym__named_if_complement,
    STATE(679), 1,
      sym__inline_if_complement,
    STATE(680), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(819), 1,
      sym_position,
    ACTIONS(345), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1583] = 9,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(291), 1,
      sym_arrow,
    ACTIONS(293), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    ACTIONS(349), 1,
      sym_text_line,
    STATE(542), 1,
      sym_line_end,
    STATE(658), 1,
      sym_inline_agic,
    STATE(799), 1,
      sym_runnable,
  [1611] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(351), 1,
      sym_blank_line,
    ACTIONS(353), 1,
      sym__dedent,
    STATE(1127), 1,
      sym__cap_text_body,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1635] = 8,
    ACTIONS(341), 1,
      sym_flow_if_keyword,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    STATE(294), 1,
      sym__named_if_complement,
    STATE(679), 1,
      sym__inline_if_complement,
    STATE(681), 1,
      sym__if_complements,
    STATE(818), 1,
      sym__lanes_complement,
    STATE(821), 1,
      sym_position,
    ACTIONS(345), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1661] = 8,
    ACTIONS(289), 1,
      sym_flow_using_keyword,
    ACTIONS(295), 1,
      sym_newline,
    ACTIONS(355), 1,
      sym_arrow,
    ACTIONS(357), 1,
      sym_colon,
    STATE(148), 1,
      sym__reduce_inline_block,
    STATE(440), 1,
      sym__reduce_inline_line,
    STATE(717), 1,
      sym__named_using_complement,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [1687] = 8,
    ACTIONS(289), 1,
      sym_flow_using_keyword,
    ACTIONS(295), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_arrow,
    ACTIONS(361), 1,
      sym_colon,
    STATE(104), 1,
      sym__reduce_inline_block,
    STATE(672), 1,
      sym__reduce_inline_line,
    STATE(674), 1,
      sym__named_using_complement,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [1713] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(448), 1,
      sym__inline_if_complement,
    STATE(450), 1,
      sym__if_complements,
    STATE(880), 1,
      sym__lanes_complement,
    STATE(881), 1,
      sym_position,
    ACTIONS(345), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1739] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(417), 1,
      sym__named_if_complement,
    STATE(448), 1,
      sym__inline_if_complement,
    STATE(453), 1,
      sym__if_complements,
    STATE(880), 1,
      sym__lanes_complement,
    STATE(882), 1,
      sym_position,
    ACTIONS(345), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1765] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(365), 1,
      sym_blank_line,
    ACTIONS(367), 1,
      sym__dedent,
    STATE(1113), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1789] = 7,
    ACTIONS(307), 1,
      sym__comment_start,
    ACTIONS(311), 1,
      sym__line_start,
    ACTIONS(313), 1,
      sym__cap_text_start,
    ACTIONS(367), 1,
      sym__dedent,
    ACTIONS(369), 1,
      sym_blank_line,
    STATE(1113), 1,
      sym__cap_text_body,
    STATE(65), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1813] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(267), 1,
      sym_snake_name,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(371), 1,
      sym_arrow,
    ACTIONS(373), 1,
      sym_colon,
    ACTIONS(375), 1,
      sym_text_line,
    STATE(278), 1,
      sym_line_end,
    STATE(280), 1,
      sym_inline_agic,
    STATE(737), 1,
      sym_runnable,
  [1841] = 7,
    ACTIONS(29), 1,
      sym_flow_async_keyword,
    ACTIONS(65), 1,
      sym_flow_await_keyword,
    ACTIONS(377), 1,
      sym_flow_run_keyword,
    STATE(425), 1,
      sym__run,
    STATE(741), 1,
      sym__async_await_binding_word,
    STATE(1066), 1,
      sym__async_modifier,
    STATE(284), 3,
      sym__invalid_async_await_operation,
      sym_run_statement,
      sym_await_statement,
  [1865] = 9,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    ACTIONS(379), 1,
      sym_text_line,
    STATE(298), 1,
      sym_line_end,
    STATE(437), 1,
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
    ACTIONS(365), 1,
      sym_blank_line,
    ACTIONS(381), 1,
      sym__dedent,
    STATE(1104), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1917] = 8,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(325), 1,
      sym__one_integer_literal,
    ACTIONS(327), 1,
      sym__other_integer_literal,
    ACTIONS(329), 1,
      sym_flow_windowing_keyword,
    ACTIONS(383), 1,
      sym_colon,
    STATE(963), 1,
      sym__repeat_count_complement,
    STATE(1201), 1,
      sym__window_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [1943] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    STATE(259), 1,
      sym__lanes_complement,
    STATE(677), 1,
      sym_inline_agic,
    STATE(736), 1,
      sym__runnable_complements,
    STATE(814), 1,
      sym__named_using_complement,
  [1968] = 5,
    ACTIONS(391), 1,
      sym_blank_line,
    ACTIONS(393), 1,
      sym__comment_start,
    ACTIONS(397), 1,
      sym__directive_start,
    ACTIONS(395), 2,
      sym__dedent,
      sym__line_start,
    STATE(78), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1987] = 5,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(401), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2006] = 6,
    ACTIONS(405), 1,
      sym_blank_line,
    ACTIONS(407), 1,
      sym__comment_start,
    ACTIONS(411), 1,
      sym__line_start,
    STATE(458), 1,
      sym__flow_statement,
    ACTIONS(409), 2,
      sym__dedent,
      sym__until_start,
    STATE(76), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2027] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(301), 1,
      sym_arrow,
    ACTIONS(303), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(434), 1,
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
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(435), 1,
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
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(437), 1,
      sym_inline_agic,
    STATE(870), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2096] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    STATE(259), 1,
      sym__lanes_complement,
    STATE(675), 1,
      sym__runnable_complements,
    STATE(677), 1,
      sym_inline_agic,
    STATE(814), 1,
      sym__named_using_complement,
  [2121] = 7,
    ACTIONS(413), 1,
      sym_blank_line,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(417), 1,
      sym__dedent,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1120), 1,
      sym__repeat_statements,
    STATE(81), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2144] = 6,
    ACTIONS(421), 1,
      sym_blank_line,
    ACTIONS(424), 1,
      sym__comment_start,
    ACTIONS(429), 1,
      sym__line_start,
    STATE(458), 1,
      sym__flow_statement,
    ACTIONS(427), 2,
      sym__dedent,
      sym__until_start,
    STATE(76), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2165] = 5,
    ACTIONS(432), 1,
      sym_blank_line,
    ACTIONS(435), 1,
      sym__comment_start,
    ACTIONS(440), 1,
      sym__directive_start,
    ACTIONS(438), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2184] = 5,
    ACTIONS(393), 1,
      sym__comment_start,
    ACTIONS(397), 1,
      sym__directive_start,
    ACTIONS(443), 1,
      sym_blank_line,
    ACTIONS(445), 2,
      sym__dedent,
      sym__line_start,
    STATE(77), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2203] = 5,
    ACTIONS(447), 1,
      sym_blank_line,
    ACTIONS(450), 1,
      sym__comment_start,
    ACTIONS(455), 1,
      sym__line_start,
    ACTIONS(453), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2222] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(441), 1,
      sym__runnable_complements,
    STATE(445), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
  [2247] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(462), 1,
      sym_blank_line,
    ACTIONS(464), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1186), 1,
      sym__repeat_statements,
    STATE(193), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2270] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(466), 1,
      sym_blank_line,
    ACTIONS(468), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1075), 1,
      sym__repeat_statements,
    STATE(84), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2293] = 8,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(241), 1,
      sym__runnable_complements,
    STATE(415), 1,
      sym__lanes_complement,
    STATE(445), 1,
      sym_inline_agic,
    STATE(877), 1,
      sym__named_using_complement,
  [2318] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(462), 1,
      sym_blank_line,
    ACTIONS(470), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1134), 1,
      sym__repeat_statements,
    STATE(193), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2341] = 6,
    ACTIONS(407), 1,
      sym__comment_start,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(472), 1,
      sym_blank_line,
    STATE(458), 1,
      sym__flow_statement,
    ACTIONS(474), 2,
      sym__dedent,
      sym__until_start,
    STATE(70), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2362] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(291), 1,
      sym_arrow,
    ACTIONS(293), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(795), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2385] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(476), 1,
      sym_blank_line,
    STATE(89), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(186), 1,
      sym__implicit_run_line,
    ACTIONS(478), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2404] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(291), 1,
      sym_arrow,
    ACTIONS(293), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(657), 1,
      sym_inline_agic,
    STATE(797), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2427] = 5,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    ACTIONS(480), 1,
      sym_blank_line,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(186), 1,
      sym__implicit_run_line,
    ACTIONS(482), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2446] = 7,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(291), 1,
      sym_arrow,
    ACTIONS(293), 1,
      sym_colon,
    ACTIONS(347), 1,
      sym_snake_name,
    STATE(658), 1,
      sym_inline_agic,
    STATE(799), 1,
      sym_runnable,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [2469] = 5,
    ACTIONS(484), 1,
      sym_blank_line,
    ACTIONS(489), 1,
      sym__flow_raw_text,
    STATE(91), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(186), 1,
      sym__implicit_run_line,
    ACTIONS(487), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2488] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(492), 1,
      sym_blank_line,
    ACTIONS(494), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1192), 1,
      sym__repeat_statements,
    STATE(93), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2511] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(462), 1,
      sym_blank_line,
    ACTIONS(496), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1207), 1,
      sym__repeat_statements,
    STATE(193), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2534] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(498), 1,
      sym_blank_line,
    ACTIONS(500), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1208), 1,
      sym__repeat_statements,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2557] = 7,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(462), 1,
      sym_blank_line,
    ACTIONS(502), 1,
      sym__dedent,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1074), 1,
      sym__repeat_statements,
    STATE(193), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2580] = 5,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(504), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2599] = 5,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(506), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2618] = 6,
    ACTIONS(508), 1,
      sym_blank_line,
    ACTIONS(511), 1,
      sym__comment_start,
    ACTIONS(516), 1,
      sym__line_start,
    STATE(257), 1,
      sym_property,
    ACTIONS(514), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(98), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2639] = 5,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2658] = 4,
    STATE(716), 1,
      sym_recall_source,
    STATE(887), 1,
      sym_recall_value,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(523), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2674] = 5,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(529), 1,
      sym__comment_start,
    ACTIONS(531), 1,
      sym__indent,
    ACTIONS(525), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(129), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2692] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(609), 1,
      sym_line_end,
    STATE(612), 1,
      sym_text_block,
    STATE(616), 1,
      sym_text_inline,
    STATE(670), 1,
      sym_instruct_body,
  [2714] = 5,
    ACTIONS(415), 1,
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
    STATE(318), 1,
      sym__from_complement,
    STATE(342), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2752] = 6,
    ACTIONS(397), 1,
      sym__directive_start,
    ACTIONS(549), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(103), 1,
      sym_message,
    STATE(602), 1,
      sym__directives,
    STATE(1209), 2,
      sym_messages,
      sym__pass_statement,
  [2772] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(551), 1,
      sym_blank_line,
    STATE(112), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(398), 1,
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
    ACTIONS(415), 1,
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
    STATE(452), 1,
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
    STATE(398), 1,
      sym__implicit_run_line,
    ACTIONS(487), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2898] = 5,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(529), 1,
      sym__comment_start,
    ACTIONS(608), 1,
      sym__indent,
    ACTIONS(606), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(129), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2916] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(587), 1,
      sym_text_body,
    STATE(959), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(504), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2934] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(614), 1,
      sym_blank_line,
    ACTIONS(616), 1,
      sym__dedent,
    STATE(149), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2952] = 6,
    ACTIONS(618), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(128), 1,
      sym_directive,
    STATE(967), 1,
      sym__directives,
    STATE(1204), 2,
      sym_statements,
      sym__pass_statement,
  [2972] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(622), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1144), 1,
      sym__repeat_statements,
    STATE(120), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2992] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(587), 1,
      sym_text_body,
    STATE(959), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(506), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3010] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(624), 1,
      sym_blank_line,
    ACTIONS(626), 1,
      sym__dedent,
    STATE(150), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3028] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1083), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3048] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(630), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1175), 1,
      sym__repeat_statements,
    STATE(125), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3068] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(587), 1,
      sym_text_body,
    STATE(959), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(519), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3086] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(609), 1,
      sym_line_end,
    STATE(610), 1,
      sym_context_body,
    STATE(611), 1,
      sym_text_inline,
    STATE(612), 1,
      sym_text_block,
  [3108] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(609), 1,
      sym_line_end,
    STATE(612), 1,
      sym_text_block,
    STATE(615), 1,
      sym_instruct_body,
    STATE(616), 1,
      sym_text_inline,
  [3130] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1210), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3150] = 5,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(587), 1,
      sym_text_body,
    STATE(959), 1,
      aux_sym_text_body_repeat1,
    ACTIONS(401), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3168] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(632), 1,
      sym_blank_line,
    STATE(161), 1,
      aux_sym_unroled_message_repeat1,
    STATE(452), 1,
      sym__unroled_message_line,
    ACTIONS(634), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3186] = 5,
    ACTIONS(395), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    ACTIONS(636), 1,
      sym_blank_line,
    ACTIONS(638), 1,
      sym__comment_start,
    STATE(130), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3204] = 4,
    ACTIONS(642), 1,
      sym_blank_line,
    ACTIONS(645), 1,
      sym__comment_start,
    STATE(129), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(640), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [3220] = 5,
    ACTIONS(445), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    ACTIONS(638), 1,
      sym__comment_start,
    ACTIONS(648), 1,
      sym_blank_line,
    STATE(131), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [3238] = 5,
    ACTIONS(438), 1,
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
    STATE(187), 1,
      sym__implicit_run_line,
    ACTIONS(482), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3270] = 5,
    ACTIONS(529), 1,
      sym__comment_start,
    ACTIONS(661), 1,
      sym_blank_line,
    ACTIONS(663), 1,
      sym__indent,
    ACTIONS(659), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3288] = 3,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(187), 1,
      sym__implicit_run_line,
    ACTIONS(665), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [3302] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(667), 1,
      sym_blank_line,
    ACTIONS(669), 1,
      sym__dedent,
    STATE(136), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3320] = 5,
    ACTIONS(671), 1,
      sym_blank_line,
    ACTIONS(674), 1,
      sym__comment_start,
    ACTIONS(677), 1,
      sym__dedent,
    ACTIONS(679), 1,
      sym__line_start,
    STATE(136), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3338] = 6,
    ACTIONS(409), 1,
      sym__dedent,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(682), 1,
      sym_blank_line,
    STATE(641), 1,
      sym__flow_statement,
    STATE(138), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3358] = 6,
    ACTIONS(427), 1,
      sym__dedent,
    ACTIONS(684), 1,
      sym_blank_line,
    ACTIONS(687), 1,
      sym__comment_start,
    ACTIONS(690), 1,
      sym__line_start,
    STATE(641), 1,
      sym__flow_statement,
    STATE(138), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3378] = 6,
    ACTIONS(397), 1,
      sym__directive_start,
    ACTIONS(549), 1,
      sym__line_start,
    STATE(68), 1,
      sym_directive,
    STATE(103), 1,
      sym_message,
    STATE(510), 1,
      sym__directives,
    STATE(1099), 2,
      sym_messages,
      sym__pass_statement,
  [3398] = 5,
    ACTIONS(695), 1,
      sym_array_suffix,
    ACTIONS(697), 1,
      sym_newline,
    STATE(141), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(693), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3416] = 5,
    ACTIONS(695), 1,
      sym_array_suffix,
    ACTIONS(701), 1,
      sym_newline,
    STATE(142), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(699), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3434] = 5,
    ACTIONS(705), 1,
      sym_array_suffix,
    ACTIONS(708), 1,
      sym_newline,
    STATE(142), 1,
      aux_sym_type_repeat1,
    STATE(346), 1,
      sym_type_suffix,
    ACTIONS(703), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [3452] = 5,
    ACTIONS(712), 1,
      sym__module_doc_start,
    ACTIONS(714), 1,
      sym__item_doc_start,
    ACTIONS(716), 1,
      sym__param_item_doc_start,
    ACTIONS(710), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(817), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3470] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      sym_blank_line,
    STATE(111), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3488] = 5,
    ACTIONS(529), 1,
      sym__comment_start,
    ACTIONS(724), 1,
      sym_blank_line,
    ACTIONS(726), 1,
      sym__indent,
    ACTIONS(722), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(113), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3506] = 6,
    ACTIONS(618), 1,
      sym__line_start,
    ACTIONS(620), 1,
      sym__directive_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(128), 1,
      sym_directive,
    STATE(940), 1,
      sym__directives,
    STATE(1179), 2,
      sym_statements,
      sym__pass_statement,
  [3526] = 5,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    ACTIONS(728), 1,
      sym_blank_line,
    STATE(106), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(398), 1,
      sym__implicit_run_line,
    ACTIONS(478), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3544] = 6,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(547), 1,
      sym__from_start,
    ACTIONS(730), 1,
      sym_blank_line,
    ACTIONS(732), 1,
      sym__dedent,
    STATE(421), 1,
      sym__from_complement,
    STATE(422), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3564] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(734), 1,
      sym_blank_line,
    ACTIONS(736), 1,
      sym__dedent,
    STATE(107), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3582] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(575), 1,
      sym_blank_line,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(738), 1,
      sym__dedent,
    STATE(108), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3600] = 5,
    ACTIONS(742), 1,
      sym__module_doc_start,
    ACTIONS(744), 1,
      sym__item_doc_start,
    ACTIONS(746), 1,
      sym__param_item_doc_start,
    ACTIONS(740), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(645), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3618] = 5,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(579), 1,
      sym__line_start,
    ACTIONS(738), 1,
      sym__dedent,
    ACTIONS(748), 1,
      sym_blank_line,
    STATE(109), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3636] = 5,
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
  [3654] = 5,
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
  [3672] = 5,
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
  [3690] = 5,
    ACTIONS(776), 1,
      sym__module_doc_start,
    ACTIONS(778), 1,
      sym__item_doc_start,
    ACTIONS(780), 1,
      sym__param_item_doc_start,
    ACTIONS(774), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(683), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3708] = 5,
    ACTIONS(784), 1,
      sym__module_doc_start,
    ACTIONS(786), 1,
      sym__item_doc_start,
    ACTIONS(788), 1,
      sym__param_item_doc_start,
    ACTIONS(782), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(691), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3726] = 5,
    ACTIONS(792), 1,
      sym__module_doc_start,
    ACTIONS(794), 1,
      sym__item_doc_start,
    ACTIONS(796), 1,
      sym__param_item_doc_start,
    ACTIONS(790), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(839), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3744] = 5,
    ACTIONS(800), 1,
      sym__module_doc_start,
    ACTIONS(802), 1,
      sym__item_doc_start,
    ACTIONS(804), 1,
      sym__param_item_doc_start,
    ACTIONS(798), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(846), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3762] = 5,
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
  [3780] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(814), 1,
      sym_blank_line,
    STATE(110), 1,
      aux_sym_unroled_message_repeat1,
    STATE(452), 1,
      sym__unroled_message_line,
    ACTIONS(816), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3798] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(818), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1181), 1,
      sym__repeat_statements,
    STATE(163), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3818] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1194), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3838] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(820), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1197), 1,
      sym__repeat_statements,
    STATE(165), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3858] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(628), 1,
      sym_blank_line,
    STATE(168), 1,
      sym__flow_statement,
    STATE(1149), 1,
      sym__repeat_statements,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3878] = 4,
    STATE(716), 1,
      sym_recall_source,
    STATE(875), 1,
      sym_recall_value,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(523), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3894] = 7,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(609), 1,
      sym_line_end,
    STATE(611), 1,
      sym_text_inline,
    STATE(612), 1,
      sym_text_block,
    STATE(669), 1,
      sym_context_body,
  [3916] = 6,
    ACTIONS(415), 1,
      sym__comment_start,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(474), 1,
      sym__dedent,
    ACTIONS(822), 1,
      sym_blank_line,
    STATE(641), 1,
      sym__flow_statement,
    STATE(137), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [3936] = 6,
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
    STATE(752), 1,
      sym_line_end,
  [3955] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(678), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3972] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(830), 1,
      sym_text_line,
    STATE(750), 1,
      sym_line_end,
    STATE(803), 1,
      sym_text_block,
    STATE(932), 1,
      sym_text_inline,
  [3991] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(630), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4008] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(549), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4025] = 6,
    ACTIONS(840), 1,
      sym__inline_comment,
    ACTIONS(842), 1,
      sym_text_line,
    ACTIONS(844), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(517), 1,
      sym_text_inline,
    STATE(584), 1,
      sym_text_block,
  [4044] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(591), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4061] = 6,
    ACTIONS(840), 1,
      sym__inline_comment,
    ACTIONS(844), 1,
      sym_newline,
    ACTIONS(846), 1,
      sym_text_line,
    STATE(126), 1,
      sym_line_end,
    STATE(517), 1,
      sym_text_inline,
    STATE(584), 1,
      sym_text_block,
  [4080] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(609), 1,
      sym_line_end,
    STATE(612), 1,
      sym_text_block,
    STATE(801), 1,
      sym_text_inline,
  [4099] = 6,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(848), 1,
      sym_flow_by_keyword,
    STATE(348), 1,
      sym__named_by_complement,
    STATE(756), 1,
      sym__inline_by_complement,
    STATE(757), 1,
      sym__by_complements,
    STATE(944), 1,
      sym__lanes_complement,
  [4118] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(584), 1,
      sym_text_block,
    STATE(706), 1,
      sym_line_end,
    STATE(724), 1,
      sym_text_inline,
  [4137] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(408), 1,
      sym__implicit_run_line,
    ACTIONS(482), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4150] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(485), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4167] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(850), 1,
      sym_blank_line,
    ACTIONS(852), 1,
      sym__indent,
    STATE(486), 1,
      sym_struct_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4184] = 6,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(854), 1,
      sym_arrow,
    ACTIONS(856), 1,
      sym_colon,
    STATE(104), 1,
      sym__reduce_inline_block,
    STATE(672), 1,
      sym__reduce_inline_line,
    STATE(674), 1,
      sym__named_using_complement,
  [4203] = 1,
    ACTIONS(858), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4212] = 4,
    ACTIONS(860), 1,
      sym_array_suffix,
    STATE(185), 1,
      aux_sym_type_repeat1,
    STATE(673), 1,
      sym_type_suffix,
    ACTIONS(708), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4227] = 1,
    ACTIONS(863), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4236] = 1,
    ACTIONS(865), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [4245] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(258), 1,
      sym__unroled_message_line,
    ACTIONS(867), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4258] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(646), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4275] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(647), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4292] = 6,
    ACTIONS(869), 1,
      sym_arrow,
    ACTIONS(871), 1,
      sym_colon,
    ACTIONS(873), 1,
      sym_lparen,
    ACTIONS(875), 1,
      sym_snake_name,
    STATE(561), 1,
      sym_flow_name,
    STATE(995), 1,
      sym_params,
  [4311] = 4,
    ACTIONS(877), 1,
      sym_array_suffix,
    STATE(185), 1,
      aux_sym_type_repeat1,
    STATE(673), 1,
      sym_type_suffix,
    ACTIONS(701), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4326] = 4,
    ACTIONS(879), 1,
      sym_blank_line,
    ACTIONS(882), 1,
      sym__comment_start,
    ACTIONS(640), 2,
      sym__dedent,
      sym__line_start,
    STATE(193), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4341] = 1,
    ACTIONS(885), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4350] = 1,
    ACTIONS(887), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__text_indent,
  [4359] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(509), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4376] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(604), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4393] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(530), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4410] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(535), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4427] = 6,
    ACTIONS(840), 1,
      sym__inline_comment,
    ACTIONS(844), 1,
      sym_newline,
    ACTIONS(889), 1,
      sym_text_line,
    STATE(114), 1,
      sym_line_end,
    STATE(584), 1,
      sym_text_block,
    STATE(724), 1,
      sym_text_inline,
  [4446] = 4,
    ACTIONS(877), 1,
      sym_array_suffix,
    STATE(192), 1,
      aux_sym_type_repeat1,
    STATE(673), 1,
      sym_type_suffix,
    ACTIONS(697), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4461] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(161), 1,
      sym_newline,
    ACTIONS(173), 1,
      sym_text_line,
    STATE(357), 1,
      sym_text_block,
    STATE(474), 1,
      sym_text_inline,
    STATE(752), 1,
      sym_line_end,
  [4480] = 6,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(891), 1,
      sym_arrow,
    ACTIONS(893), 1,
      sym_colon,
    STATE(148), 1,
      sym__reduce_inline_block,
    STATE(440), 1,
      sym__reduce_inline_line,
    STATE(717), 1,
      sym__named_using_complement,
  [4499] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(178), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(895), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4514] = 6,
    ACTIONS(840), 1,
      sym__inline_comment,
    ACTIONS(844), 1,
      sym_newline,
    ACTIONS(897), 1,
      sym_text_line,
    STATE(118), 1,
      sym_line_end,
    STATE(584), 1,
      sym_text_block,
    STATE(724), 1,
      sym_text_inline,
  [4533] = 6,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(899), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(901), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_assign_operator,
    STATE(238), 1,
      sym_line_end,
  [4552] = 6,
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
    STATE(752), 1,
      sym_line_end,
  [4571] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(550), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4588] = 3,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(408), 1,
      sym__implicit_run_line,
    ACTIONS(665), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4601] = 6,
    ACTIONS(343), 1,
      sym_flow_in_keyword,
    ACTIONS(903), 1,
      sym_flow_by_keyword,
    STATE(252), 1,
      sym__inline_by_complement,
    STATE(253), 1,
      sym__by_complements,
    STATE(424), 1,
      sym__named_by_complement,
    STATE(895), 1,
      sym__lanes_complement,
  [4620] = 6,
    ACTIONS(325), 1,
      sym__one_integer_literal,
    ACTIONS(905), 1,
      sym__other_integer_literal,
    ACTIONS(907), 1,
      sym_flow_windowing_keyword,
    ACTIONS(909), 1,
      sym_colon,
    STATE(774), 1,
      sym__repeat_count_complement,
    STATE(1170), 1,
      sym__window_complement,
  [4639] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(704), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4656] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(911), 1,
      sym_blank_line,
    ACTIONS(913), 1,
      sym__indent,
    STATE(277), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4673] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(705), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4690] = 6,
    ACTIONS(915), 1,
      sym__inline_comment,
    ACTIONS(917), 1,
      sym_text_line,
    ACTIONS(919), 1,
      sym_newline,
    STATE(96), 1,
      sym_line_end,
    STATE(357), 1,
      sym_text_block,
    STATE(474), 1,
      sym_text_inline,
  [4709] = 6,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(901), 1,
      anon_sym_EQ,
    ACTIONS(921), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(7), 1,
      sym_assign_operator,
    STATE(732), 1,
      sym_line_end,
  [4728] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(911), 1,
      sym_blank_line,
    ACTIONS(913), 1,
      sym__indent,
    STATE(290), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4745] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(911), 1,
      sym_blank_line,
    ACTIONS(913), 1,
      sym__indent,
    STATE(291), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4762] = 6,
    ACTIONS(873), 1,
      sym_lparen,
    ACTIONS(923), 1,
      sym_arrow,
    ACTIONS(925), 1,
      sym_colon,
    ACTIONS(927), 1,
      sym_snake_name,
    STATE(523), 1,
      sym_agic_name,
    STATE(974), 1,
      sym_params,
  [4781] = 6,
    ACTIONS(915), 1,
      sym__inline_comment,
    ACTIONS(919), 1,
      sym_newline,
    ACTIONS(929), 1,
      sym_text_line,
    STATE(97), 1,
      sym_line_end,
    STATE(357), 1,
      sym_text_block,
    STATE(474), 1,
      sym_text_inline,
  [4800] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(911), 1,
      sym_blank_line,
    ACTIONS(913), 1,
      sym__indent,
    STATE(303), 1,
      sym_repeat_body,
    STATE(480), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4817] = 6,
    ACTIONS(915), 1,
      sym__inline_comment,
    ACTIONS(919), 1,
      sym_newline,
    ACTIONS(931), 1,
      sym_text_line,
    STATE(99), 1,
      sym_line_end,
    STATE(281), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
  [4836] = 6,
    ACTIONS(915), 1,
      sym__inline_comment,
    ACTIONS(919), 1,
      sym_newline,
    ACTIONS(933), 1,
      sym_text_line,
    STATE(69), 1,
      sym_line_end,
    STATE(281), 1,
      sym_text_inline,
    STATE(357), 1,
      sym_text_block,
  [4855] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(584), 1,
      sym_text_block,
    STATE(654), 1,
      sym_text_inline,
    STATE(706), 1,
      sym_line_end,
  [4874] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(258), 1,
      sym__unroled_message_line,
    ACTIONS(816), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4887] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(517), 1,
      sym_text_inline,
    STATE(584), 1,
      sym_text_block,
    STATE(706), 1,
      sym_line_end,
  [4906] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(607), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4923] = 5,
    ACTIONS(824), 1,
      sym_blank_line,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(828), 1,
      sym__indent,
    STATE(720), 1,
      sym_agic_body,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4940] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(745), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4957] = 4,
    ACTIONS(121), 1,
      sym_newline,
    STATE(210), 1,
      sym__order_complement,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(895), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4972] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(533), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4989] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(836), 1,
      sym_blank_line,
    ACTIONS(838), 1,
      sym__indent,
    STATE(534), 1,
      sym_repeat_body,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5006] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(584), 1,
      sym_text_block,
    STATE(706), 1,
      sym_line_end,
    STATE(714), 1,
      sym_text_inline,
  [5025] = 6,
    ACTIONS(325), 1,
      sym__one_integer_literal,
    ACTIONS(905), 1,
      sym__other_integer_literal,
    ACTIONS(907), 1,
      sym_flow_windowing_keyword,
    ACTIONS(935), 1,
      sym_colon,
    STATE(963), 1,
      sym__repeat_count_complement,
    STATE(1201), 1,
      sym__window_complement,
  [5044] = 6,
    ACTIONS(157), 1,
      sym__inline_comment,
    ACTIONS(159), 1,
      sym_text_line,
    ACTIONS(161), 1,
      sym_newline,
    STATE(584), 1,
      sym_text_block,
    STATE(706), 1,
      sym_line_end,
    STATE(735), 1,
      sym_text_inline,
  [5063] = 5,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__indent,
    STATE(548), 1,
      sym_flow_body,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5080] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(939), 1,
      sym__dedent,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5094] = 1,
    ACTIONS(943), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5102] = 1,
    ACTIONS(945), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5110] = 1,
    ACTIONS(947), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5118] = 1,
    ACTIONS(949), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5126] = 1,
    ACTIONS(951), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5134] = 1,
    ACTIONS(953), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5142] = 1,
    ACTIONS(955), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5150] = 1,
    ACTIONS(957), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5158] = 1,
    ACTIONS(959), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5166] = 1,
    ACTIONS(961), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5174] = 1,
    ACTIONS(963), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5182] = 1,
    ACTIONS(965), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5190] = 1,
    ACTIONS(967), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5198] = 1,
    ACTIONS(969), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5206] = 1,
    ACTIONS(971), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5214] = 1,
    ACTIONS(973), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5222] = 1,
    ACTIONS(975), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5230] = 1,
    ACTIONS(977), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5238] = 1,
    ACTIONS(979), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5246] = 1,
    ACTIONS(981), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5254] = 1,
    ACTIONS(983), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5262] = 5,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    STATE(748), 1,
      sym_inline_agic,
    STATE(933), 1,
      sym__named_using_complement,
  [5278] = 1,
    ACTIONS(985), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5286] = 1,
    ACTIONS(987), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5294] = 1,
    ACTIONS(989), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5302] = 1,
    ACTIONS(991), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5310] = 1,
    ACTIONS(993), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5318] = 1,
    ACTIONS(995), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5326] = 1,
    ACTIONS(997), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5334] = 1,
    ACTIONS(999), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5342] = 1,
    ACTIONS(1001), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5350] = 1,
    ACTIONS(1003), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5358] = 1,
    ACTIONS(1005), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5366] = 1,
    ACTIONS(1007), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5374] = 1,
    ACTIONS(1009), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5382] = 1,
    ACTIONS(1011), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5390] = 1,
    ACTIONS(1013), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5398] = 1,
    ACTIONS(1015), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5406] = 1,
    ACTIONS(1017), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5414] = 1,
    ACTIONS(1019), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5422] = 1,
    ACTIONS(504), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5430] = 5,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(749), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
  [5446] = 1,
    ACTIONS(1023), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5454] = 1,
    ACTIONS(1025), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5462] = 1,
    ACTIONS(1027), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5470] = 1,
    ACTIONS(1029), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5478] = 1,
    ACTIONS(1031), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5486] = 1,
    ACTIONS(1033), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5494] = 1,
    ACTIONS(1035), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5502] = 1,
    ACTIONS(1037), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5510] = 1,
    ACTIONS(1039), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5518] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1041), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5532] = 1,
    ACTIONS(1043), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5540] = 1,
    ACTIONS(1045), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5548] = 1,
    ACTIONS(506), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5556] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5564] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_flow_in_keyword,
    STATE(751), 1,
      sym_line_end,
    STATE(938), 1,
      sym__lanes_complement,
  [5580] = 1,
    ACTIONS(1051), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5588] = 1,
    ACTIONS(1053), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5596] = 1,
    ACTIONS(1055), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5604] = 1,
    ACTIONS(1057), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5612] = 1,
    ACTIONS(1059), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5620] = 1,
    ACTIONS(1061), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5628] = 1,
    ACTIONS(858), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5636] = 1,
    ACTIONS(1063), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5644] = 1,
    ACTIONS(1065), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5652] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1069), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5666] = 1,
    ACTIONS(519), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5674] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5682] = 1,
    ACTIONS(1071), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5690] = 1,
    ACTIONS(1073), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5698] = 1,
    ACTIONS(1075), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5706] = 1,
    ACTIONS(1077), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5714] = 1,
    ACTIONS(1079), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5722] = 1,
    ACTIONS(1081), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5730] = 4,
    ACTIONS(1083), 1,
      sym_blank_line,
    ACTIONS(1085), 1,
      sym__comment_start,
    ACTIONS(1087), 1,
      sym__reduce_indent,
    STATE(461), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5744] = 1,
    ACTIONS(1089), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5752] = 1,
    ACTIONS(1091), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5760] = 1,
    ACTIONS(1093), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5768] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5776] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1095), 1,
      sym_blank_line,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5790] = 1,
    ACTIONS(401), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5798] = 1,
    ACTIONS(1099), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5806] = 1,
    ACTIONS(1101), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5814] = 1,
    ACTIONS(1103), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5822] = 1,
    ACTIONS(1105), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5830] = 1,
    ACTIONS(1107), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5838] = 1,
    ACTIONS(1109), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5846] = 1,
    ACTIONS(1111), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5854] = 1,
    ACTIONS(1047), 5,
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
    ACTIONS(1115), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5878] = 1,
    ACTIONS(1117), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5886] = 1,
    ACTIONS(1119), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5894] = 1,
    ACTIONS(1121), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5902] = 1,
    ACTIONS(1123), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5910] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5918] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5926] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5934] = 2,
    ACTIONS(1133), 1,
      sym_newline,
    ACTIONS(1131), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5944] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5952] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5960] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5968] = 2,
    ACTIONS(1143), 1,
      sym_newline,
    ACTIONS(1141), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [5978] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1145), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5992] = 2,
    ACTIONS(1149), 1,
      sym_newline,
    ACTIONS(1147), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6002] = 2,
    ACTIONS(1153), 1,
      sym_newline,
    ACTIONS(1151), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6012] = 2,
    ACTIONS(1157), 1,
      sym_newline,
    ACTIONS(1155), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6022] = 2,
    ACTIONS(1161), 1,
      sym_newline,
    ACTIONS(1159), 4,
      sym__inline_comment,
      sym_array_suffix,
      sym_colon,
      sym_text_line,
  [6032] = 5,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(506), 1,
      sym_inline_agic,
    STATE(813), 1,
      sym_runnable,
  [6048] = 5,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_flow_in_keyword,
    STATE(507), 1,
      sym_line_end,
    STATE(830), 1,
      sym__lanes_complement,
  [6064] = 4,
    ACTIONS(640), 1,
      sym__dedent,
    ACTIONS(1163), 1,
      sym_blank_line,
    ACTIONS(1166), 1,
      sym__comment_start,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6078] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
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
    ACTIONS(1135), 5,
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
    ACTIONS(885), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6134] = 1,
    ACTIONS(1169), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6142] = 1,
    ACTIONS(887), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6150] = 1,
    ACTIONS(1047), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6158] = 1,
    ACTIONS(1171), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6166] = 4,
    ACTIONS(640), 1,
      sym__reduce_indent,
    ACTIONS(1173), 1,
      sym_blank_line,
    ACTIONS(1176), 1,
      sym__comment_start,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6180] = 1,
    ACTIONS(1179), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6188] = 1,
    ACTIONS(1181), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6196] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1185), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6210] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
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
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6242] = 1,
    ACTIONS(1187), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6250] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6258] = 4,
    ACTIONS(640), 1,
      sym__line_start,
    ACTIONS(1189), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__comment_start,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6272] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6280] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1195), 1,
      sym_blank_line,
    ACTIONS(1197), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6294] = 1,
    ACTIONS(885), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6302] = 1,
    ACTIONS(887), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6310] = 1,
    ACTIONS(885), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6318] = 1,
    ACTIONS(887), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__text_indent,
  [6326] = 1,
    ACTIONS(1125), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6334] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6342] = 1,
    ACTIONS(1129), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6350] = 1,
    ACTIONS(1135), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6358] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6366] = 1,
    ACTIONS(1139), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6374] = 1,
    ACTIONS(885), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6382] = 1,
    ACTIONS(887), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6390] = 1,
    ACTIONS(885), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6398] = 1,
    ACTIONS(887), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6406] = 5,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(1199), 1,
      sym__until_start,
    STATE(85), 1,
      sym__flow_statement,
    STATE(121), 1,
      sym_until_clause,
    STATE(946), 1,
      sym__repeat_statements,
  [6422] = 1,
    ACTIONS(1201), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [6430] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1203), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6444] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1205), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6458] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1207), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6472] = 4,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1211), 1,
      sym_newline,
    STATE(796), 1,
      sym_local_name,
    ACTIONS(1209), 2,
      sym__inline_comment,
      sym_text_line,
  [6486] = 4,
    ACTIONS(1213), 1,
      sym_blank_line,
    ACTIONS(1216), 1,
      sym__dedent,
    ACTIONS(1218), 1,
      sym_indented_raw_text,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6500] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1221), 1,
      sym_colon,
    ACTIONS(1223), 1,
      sym_text_line,
    STATE(551), 1,
      sym_line_end,
  [6516] = 4,
    ACTIONS(1227), 1,
      sym_rparen,
    STATE(632), 1,
      sym_param_name,
    STATE(780), 1,
      sym_param,
    ACTIONS(1225), 2,
      sym__variable_name,
      anon_sym__,
  [6530] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1229), 1,
      sym_snake_name,
    STATE(478), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [6544] = 1,
    ACTIONS(863), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6552] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1231), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6566] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1233), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6580] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1235), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6594] = 5,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(653), 1,
      sym_inline_agic,
    STATE(795), 1,
      sym_runnable,
  [6610] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(434), 1,
      sym_inline_agic,
    STATE(867), 1,
      sym_runnable,
  [6626] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(437), 1,
      sym_inline_agic,
    STATE(870), 1,
      sym_runnable,
  [6642] = 4,
    ACTIONS(1237), 1,
      sym_array_suffix,
    STATE(406), 1,
      aux_sym_type_repeat1,
    STATE(853), 1,
      sym_type_suffix,
    ACTIONS(697), 2,
      sym_newline,
      sym__inline_comment,
  [6656] = 4,
    ACTIONS(1237), 1,
      sym_array_suffix,
    STATE(407), 1,
      aux_sym_type_repeat1,
    STATE(853), 1,
      sym_type_suffix,
    ACTIONS(701), 2,
      sym_newline,
      sym__inline_comment,
  [6670] = 4,
    ACTIONS(1239), 1,
      sym_array_suffix,
    STATE(407), 1,
      aux_sym_type_repeat1,
    STATE(853), 1,
      sym_type_suffix,
    ACTIONS(708), 2,
      sym_newline,
      sym__inline_comment,
  [6684] = 1,
    ACTIONS(865), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6692] = 5,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(658), 1,
      sym_inline_agic,
    STATE(799), 1,
      sym_runnable,
  [6708] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(239), 1,
      sym_inline_agic,
    STATE(889), 1,
      sym_runnable,
  [6724] = 5,
    ACTIONS(1242), 1,
      sym__inline_comment,
    ACTIONS(1244), 1,
      sym_text_line,
    ACTIONS(1246), 1,
      sym_newline,
    STATE(313), 1,
      sym_line_end,
    STATE(742), 1,
      sym__reduce_line,
  [6740] = 4,
    ACTIONS(640), 1,
      sym__indent,
    ACTIONS(1248), 1,
      sym_blank_line,
    ACTIONS(1251), 1,
      sym__comment_start,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6754] = 5,
    ACTIONS(1242), 1,
      sym__inline_comment,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1254), 1,
      sym_text_line,
    STATE(242), 1,
      sym__reduce_line,
    STATE(313), 1,
      sym_line_end,
  [6770] = 1,
    ACTIONS(1256), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6778] = 5,
    ACTIONS(385), 1,
      sym_flow_using_keyword,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    STATE(246), 1,
      sym_inline_agic,
    STATE(891), 1,
      sym__named_using_complement,
  [6794] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(247), 1,
      sym_inline_agic,
    STATE(936), 1,
      sym_runnable,
  [6810] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_flow_in_keyword,
    STATE(248), 1,
      sym_line_end,
    STATE(892), 1,
      sym__lanes_complement,
  [6826] = 1,
    ACTIONS(1258), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6834] = 1,
    ACTIONS(1258), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6842] = 1,
    ACTIONS(1258), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6850] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1260), 1,
      sym_blank_line,
    ACTIONS(1262), 1,
      sym__dedent,
    STATE(433), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6864] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1264), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6878] = 5,
    ACTIONS(458), 1,
      sym_arrow,
    ACTIONS(460), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(274), 1,
      sym_inline_agic,
    STATE(813), 1,
      sym_runnable,
  [6894] = 5,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1049), 1,
      sym_flow_in_keyword,
    STATE(275), 1,
      sym_line_end,
    STATE(908), 1,
      sym__lanes_complement,
  [6910] = 1,
    ACTIONS(1266), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6918] = 4,
    ACTIONS(1085), 1,
      sym__comment_start,
    ACTIONS(1268), 1,
      sym_blank_line,
    ACTIONS(1270), 1,
      sym__reduce_indent,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6932] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1272), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6946] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1274), 1,
      sym_blank_line,
    ACTIONS(1276), 1,
      sym__dedent,
    STATE(304), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6960] = 1,
    ACTIONS(1278), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6968] = 1,
    ACTIONS(1280), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6976] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6990] = 5,
    ACTIONS(1242), 1,
      sym__inline_comment,
    ACTIONS(1246), 1,
      sym_newline,
    ACTIONS(1254), 1,
      sym_text_line,
    STATE(285), 1,
      sym__reduce_line,
    STATE(459), 1,
      sym_line_end,
  [7006] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1284), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7020] = 1,
    ACTIONS(1286), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7028] = 1,
    ACTIONS(1288), 5,
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
    ACTIONS(1290), 1,
      sym_colon,
    ACTIONS(1292), 1,
      sym_text_line,
    STATE(292), 1,
      sym_line_end,
  [7052] = 1,
    ACTIONS(1294), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7060] = 1,
    ACTIONS(1296), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7068] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1298), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7082] = 1,
    ACTIONS(1300), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7090] = 1,
    ACTIONS(1302), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7098] = 5,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1304), 1,
      sym_colon,
    ACTIONS(1306), 1,
      sym_text_line,
    STATE(305), 1,
      sym_line_end,
  [7114] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1308), 1,
      sym_blank_line,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(446), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7128] = 1,
    ACTIONS(1312), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7136] = 1,
    ACTIONS(1314), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7144] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7158] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1318), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__dedent,
    STATE(451), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7172] = 1,
    ACTIONS(1322), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7180] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1324), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(467), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7194] = 1,
    ACTIONS(1328), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7202] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7216] = 1,
    ACTIONS(1332), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7224] = 1,
    ACTIONS(1334), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7232] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1336), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7246] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1338), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7260] = 1,
    ACTIONS(1340), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7268] = 4,
    ACTIONS(937), 1,
      sym_blank_line,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1342), 1,
      sym__dedent,
    STATE(394), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7282] = 1,
    ACTIONS(1344), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7290] = 4,
    ACTIONS(1085), 1,
      sym__comment_start,
    ACTIONS(1346), 1,
      sym_blank_line,
    ACTIONS(1348), 1,
      sym__reduce_indent,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7304] = 5,
    ACTIONS(1242), 1,
      sym__inline_comment,
    ACTIONS(1244), 1,
      sym_text_line,
    ACTIONS(1246), 1,
      sym_newline,
    STATE(459), 1,
      sym_line_end,
    STATE(526), 1,
      sym__reduce_line,
  [7320] = 4,
    ACTIONS(1085), 1,
      sym__comment_start,
    ACTIONS(1268), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__reduce_indent,
    STATE(361), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7334] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1352), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7348] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1354), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__indent,
    STATE(390), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7362] = 1,
    ACTIONS(1358), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7370] = 4,
    ACTIONS(127), 1,
      sym__variable_name,
    ACTIONS(1211), 1,
      sym_newline,
    STATE(868), 1,
      sym_local_name,
    ACTIONS(1209), 2,
      sym__inline_comment,
      sym_text_line,
  [7384] = 4,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1229), 1,
      sym_snake_name,
    STATE(410), 1,
      sym_agent,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [7398] = 4,
    ACTIONS(543), 1,
      sym__comment_start,
    ACTIONS(1067), 1,
      sym_blank_line,
    ACTIONS(1360), 1,
      sym__dedent,
    STATE(349), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7412] = 1,
    ACTIONS(1362), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [7420] = 5,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(1199), 1,
      sym__until_start,
    STATE(85), 1,
      sym__flow_statement,
    STATE(162), 1,
      sym_until_clause,
    STATE(917), 1,
      sym__repeat_statements,
  [7436] = 5,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(1199), 1,
      sym__until_start,
    STATE(85), 1,
      sym__flow_statement,
    STATE(117), 1,
      sym_until_clause,
    STATE(815), 1,
      sym__repeat_statements,
  [7452] = 5,
    ACTIONS(411), 1,
      sym__line_start,
    ACTIONS(1199), 1,
      sym__until_start,
    STATE(85), 1,
      sym__flow_statement,
    STATE(164), 1,
      sym_until_clause,
    STATE(926), 1,
      sym__repeat_statements,
  [7468] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1364), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7482] = 1,
    ACTIONS(1366), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7490] = 1,
    ACTIONS(1368), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7498] = 1,
    ACTIONS(1370), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7506] = 5,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1372), 1,
      sym_colon,
    ACTIONS(1374), 1,
      sym_text_line,
    STATE(536), 1,
      sym_line_end,
  [7522] = 1,
    ACTIONS(1376), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7530] = 5,
    ACTIONS(387), 1,
      sym_arrow,
    ACTIONS(389), 1,
      sym_colon,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(734), 1,
      sym_inline_agic,
    STATE(907), 1,
      sym_runnable,
  [7546] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1378), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__indent,
    STATE(481), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7560] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1382), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7574] = 4,
    ACTIONS(826), 1,
      sym__comment_start,
    ACTIONS(1183), 1,
      sym_blank_line,
    ACTIONS(1384), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7588] = 1,
    ACTIONS(1386), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [7596] = 1,
    ACTIONS(1137), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [7604] = 1,
    ACTIONS(1115), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7611] = 1,
    ACTIONS(1388), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7618] = 1,
    ACTIONS(1390), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7625] = 1,
    ACTIONS(1392), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7632] = 1,
    ACTIONS(1394), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7639] = 3,
    ACTIONS(1398), 1,
      sym_comma,
    STATE(515), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1396), 2,
      sym_newline,
      sym__inline_comment,
  [7650] = 3,
    ACTIONS(1402), 1,
      sym_comma,
    STATE(516), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1400), 2,
      sym_newline,
      sym__inline_comment,
  [7661] = 1,
    ACTIONS(1404), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7668] = 1,
    ACTIONS(987), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7675] = 1,
    ACTIONS(989), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7682] = 1,
    ACTIONS(991), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7689] = 1,
    ACTIONS(993), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7696] = 1,
    ACTIONS(995), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7703] = 1,
    ACTIONS(997), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7710] = 1,
    ACTIONS(999), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7717] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1406), 1,
      sym_blank_line,
    STATE(400), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7728] = 1,
    ACTIONS(1001), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7735] = 1,
    ACTIONS(1003), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7742] = 1,
    ACTIONS(1005), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7749] = 1,
    ACTIONS(1007), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7756] = 1,
    ACTIONS(1009), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7763] = 1,
    ACTIONS(1011), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7770] = 1,
    ACTIONS(1013), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7777] = 1,
    ACTIONS(1015), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7784] = 1,
    ACTIONS(1017), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7791] = 1,
    ACTIONS(1019), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7798] = 4,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(1408), 1,
      sym__dedent,
    STATE(103), 1,
      sym_message,
    STATE(1209), 1,
      sym_messages,
  [7811] = 1,
    ACTIONS(504), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7818] = 1,
    ACTIONS(1023), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7825] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1374), 1,
      sym_text_line,
    STATE(538), 1,
      sym_line_end,
  [7838] = 1,
    ACTIONS(1410), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7845] = 3,
    ACTIONS(1414), 1,
      sym_comma,
    STATE(515), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1412), 2,
      sym_newline,
      sym__inline_comment,
  [7856] = 3,
    ACTIONS(1419), 1,
      sym_comma,
    STATE(516), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1417), 2,
      sym_newline,
      sym__inline_comment,
  [7867] = 1,
    ACTIONS(1025), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7874] = 1,
    ACTIONS(1027), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7881] = 1,
    ACTIONS(1029), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7888] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1422), 1,
      sym_text_line,
    STATE(540), 1,
      sym_line_end,
  [7901] = 1,
    ACTIONS(1031), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7908] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1424), 1,
      sym_text_line,
    STATE(541), 1,
      sym_line_end,
  [7921] = 4,
    ACTIONS(873), 1,
      sym_lparen,
    ACTIONS(1426), 1,
      sym_arrow,
    ACTIONS(1428), 1,
      sym_colon,
    STATE(990), 1,
      sym_params,
  [7934] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1430), 1,
      sym_text_line,
    STATE(543), 1,
      sym_line_end,
  [7947] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1432), 1,
      sym_text_line,
    STATE(544), 1,
      sym_line_end,
  [7960] = 1,
    ACTIONS(1033), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7967] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1434), 1,
      sym_blank_line,
    STATE(427), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7978] = 1,
    ACTIONS(1436), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7985] = 1,
    ACTIONS(1035), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7992] = 1,
    ACTIONS(1438), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7999] = 1,
    ACTIONS(1037), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8006] = 1,
    ACTIONS(1039), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8013] = 1,
    ACTIONS(1043), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8020] = 1,
    ACTIONS(1045), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8027] = 1,
    ACTIONS(1440), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8034] = 1,
    ACTIONS(506), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8041] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8048] = 1,
    ACTIONS(1051), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8055] = 1,
    ACTIONS(1442), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8062] = 1,
    ACTIONS(1053), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8069] = 1,
    ACTIONS(1055), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8076] = 1,
    ACTIONS(1057), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8083] = 1,
    ACTIONS(1059), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8090] = 1,
    ACTIONS(1061), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8097] = 1,
    ACTIONS(1444), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8104] = 4,
    ACTIONS(1021), 1,
      sym_snake_name,
    ACTIONS(1446), 1,
      sym_colon,
    STATE(788), 1,
      sym_inline_agic_body,
    STATE(789), 1,
      sym_runnable,
  [8117] = 1,
    ACTIONS(1063), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8124] = 1,
    ACTIONS(1448), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8131] = 1,
    ACTIONS(1065), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8138] = 1,
    ACTIONS(1450), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8145] = 1,
    ACTIONS(519), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8152] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8159] = 1,
    ACTIONS(1071), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8166] = 1,
    ACTIONS(1073), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8173] = 1,
    ACTIONS(1075), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8180] = 1,
    ACTIONS(1077), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8187] = 1,
    ACTIONS(1079), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8194] = 1,
    ACTIONS(1452), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8201] = 1,
    ACTIONS(1454), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8208] = 1,
    ACTIONS(1081), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8215] = 4,
    ACTIONS(873), 1,
      sym_lparen,
    ACTIONS(1456), 1,
      sym_arrow,
    ACTIONS(1458), 1,
      sym_colon,
    STATE(981), 1,
      sym_params,
  [8228] = 1,
    ACTIONS(1089), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8235] = 1,
    ACTIONS(1091), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8242] = 1,
    ACTIONS(1093), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8249] = 1,
    ACTIONS(1460), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8256] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8263] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1462), 1,
      sym_blank_line,
    STATE(431), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8274] = 1,
    ACTIONS(401), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8281] = 1,
    ACTIONS(1464), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8288] = 1,
    ACTIONS(1099), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8295] = 1,
    ACTIONS(1101), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8302] = 1,
    ACTIONS(1103), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8309] = 1,
    ACTIONS(1105), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8316] = 1,
    ACTIONS(1107), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8323] = 1,
    ACTIONS(1109), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8330] = 1,
    ACTIONS(1111), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8337] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8344] = 1,
    ACTIONS(1113), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8351] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8358] = 1,
    ACTIONS(1117), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8365] = 1,
    ACTIONS(1119), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8372] = 1,
    ACTIONS(1121), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8379] = 1,
    ACTIONS(1123), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8386] = 1,
    ACTIONS(1169), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8393] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8400] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8407] = 1,
    ACTIONS(1171), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8414] = 1,
    ACTIONS(1179), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8421] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8428] = 1,
    ACTIONS(1179), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8435] = 1,
    ACTIONS(1466), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8442] = 2,
    ACTIONS(1470), 1,
      sym_newline,
    ACTIONS(1468), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [8451] = 1,
    ACTIONS(1181), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8458] = 4,
    ACTIONS(1472), 1,
      sym__inline_comment,
    ACTIONS(1474), 1,
      sym_text_line,
    ACTIONS(1476), 1,
      sym_newline,
    STATE(449), 1,
      sym_line_end,
  [8471] = 1,
    ACTIONS(1478), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8478] = 3,
    ACTIONS(1480), 1,
      sym_colon,
    ACTIONS(1482), 1,
      sym_newline,
    ACTIONS(1474), 2,
      sym__inline_comment,
      sym_text_line,
  [8489] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1484), 1,
      sym_text_line,
    STATE(639), 1,
      sym_line_end,
  [8502] = 2,
    STATE(1067), 1,
      sym_directive_op,
    ACTIONS(1486), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8511] = 1,
    ACTIONS(1488), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8518] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(659), 1,
      sym__cap_definition,
  [8531] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(660), 1,
      sym__cap_definition,
  [8544] = 4,
    ACTIONS(539), 1,
      sym__line_start,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(103), 1,
      sym_message,
    STATE(1185), 1,
      sym_messages,
  [8557] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(661), 1,
      sym__cap_definition,
  [8570] = 1,
    ACTIONS(1496), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8577] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(133), 1,
      sym_line_end,
    STATE(662), 1,
      sym__cap_definition,
  [8590] = 1,
    ACTIONS(1498), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8597] = 1,
    ACTIONS(1500), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8604] = 3,
    ACTIONS(1211), 1,
      sym_newline,
    ACTIONS(1502), 1,
      sym_flow_run_keyword,
    ACTIONS(1209), 2,
      sym__inline_comment,
      sym_text_line,
  [8615] = 4,
    ACTIONS(1504), 1,
      sym_blank_line,
    ACTIONS(1506), 1,
      sym__text_indent,
    STATE(668), 1,
      sym_text_body,
    STATE(809), 1,
      aux_sym_text_body_repeat1,
  [8628] = 1,
    ACTIONS(1508), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8635] = 1,
    ACTIONS(1510), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8642] = 1,
    ACTIONS(1169), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8649] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1512), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [8660] = 3,
    ACTIONS(295), 1,
      sym_newline,
    ACTIONS(1514), 1,
      sym_integer_literal,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [8671] = 1,
    ACTIONS(1516), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8678] = 1,
    ACTIONS(1518), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8685] = 1,
    ACTIONS(1143), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8692] = 1,
    ACTIONS(1256), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8699] = 1,
    ACTIONS(1258), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8706] = 1,
    ACTIONS(1258), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8713] = 1,
    ACTIONS(1278), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8720] = 1,
    ACTIONS(1280), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8727] = 1,
    ACTIONS(1258), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8734] = 1,
    ACTIONS(1266), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8741] = 1,
    ACTIONS(1149), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8748] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1520), 1,
      sym_text_line,
    STATE(702), 1,
      sym_line_end,
  [8761] = 1,
    ACTIONS(1522), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8768] = 1,
    ACTIONS(1153), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8775] = 1,
    ACTIONS(1524), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8782] = 1,
    ACTIONS(1526), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8789] = 1,
    ACTIONS(1528), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8796] = 3,
    ACTIONS(1530), 1,
      sym_optional_marker,
    ACTIONS(1532), 1,
      sym_colon,
    ACTIONS(1534), 2,
      sym_rparen,
      sym_comma,
  [8807] = 1,
    ACTIONS(1536), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8814] = 1,
    ACTIONS(1538), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8821] = 1,
    ACTIONS(1540), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8828] = 1,
    ACTIONS(1181), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8835] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(145), 1,
      sym_line_end,
    STATE(713), 1,
      sym_job_body,
  [8848] = 4,
    ACTIONS(1490), 1,
      sym__inline_comment,
    ACTIONS(1492), 1,
      sym_newline,
    STATE(145), 1,
      sym_line_end,
    STATE(733), 1,
      sym_job_body,
  [8861] = 1,
    ACTIONS(1542), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8868] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8877] = 1,
    ACTIONS(1344), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8884] = 2,
    STATE(875), 1,
      sym_text_ref,
    ACTIONS(1544), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8893] = 4,
    ACTIONS(1546), 1,
      sym_runnable_ref,
    ACTIONS(1548), 1,
      sym_none_keyword,
    ACTIONS(1550), 1,
      sym_all_keyword,
    STATE(874), 1,
      sym_route_value,
  [8906] = 1,
    ACTIONS(1552), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8913] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8920] = 1,
    ACTIONS(1554), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8927] = 1,
    ACTIONS(1556), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8934] = 1,
    ACTIONS(1558), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8941] = 1,
    ACTIONS(1560), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8948] = 1,
    ACTIONS(1562), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8955] = 1,
    ACTIONS(1564), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8962] = 1,
    ACTIONS(1566), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [8969] = 1,
    ACTIONS(1286), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8976] = 1,
    ACTIONS(1568), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8983] = 1,
    ACTIONS(1570), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8990] = 2,
    ACTIONS(1574), 1,
      aux_sym__invalid_named_binding_token1,
    ACTIONS(1572), 3,
      sym_newline,
      sym__inline_comment,
      anon_sym_EQ,
  [8999] = 1,
    ACTIONS(1288), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9006] = 1,
    ACTIONS(1294), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9013] = 1,
    ACTIONS(1576), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9020] = 1,
    ACTIONS(1578), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9027] = 1,
    ACTIONS(1580), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9034] = 1,
    ACTIONS(1582), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9041] = 1,
    ACTIONS(885), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9048] = 1,
    ACTIONS(1047), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9055] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1584), 1,
      sym_blank_line,
    STATE(289), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9066] = 1,
    ACTIONS(1296), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9073] = 1,
    ACTIONS(887), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9080] = 1,
    ACTIONS(1171), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9087] = 1,
    ACTIONS(1586), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9094] = 1,
    ACTIONS(1588), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9101] = 1,
    ACTIONS(1157), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9108] = 1,
    ACTIONS(1300), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9115] = 1,
    ACTIONS(1161), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9122] = 4,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(1590), 1,
      sym_colon,
    STATE(746), 1,
      sym_line_end,
  [9135] = 1,
    ACTIONS(1302), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9142] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9149] = 1,
    ACTIONS(1314), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9156] = 1,
    ACTIONS(1592), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9163] = 1,
    ACTIONS(1322), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9170] = 1,
    ACTIONS(1328), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9177] = 1,
    ACTIONS(1334), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9184] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9191] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9198] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9205] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9212] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9219] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9226] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9233] = 1,
    ACTIONS(885), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9240] = 1,
    ACTIONS(887), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9247] = 1,
    ACTIONS(1125), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9254] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9261] = 1,
    ACTIONS(1129), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9268] = 1,
    ACTIONS(1135), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9275] = 1,
    ACTIONS(1137), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9282] = 1,
    ACTIONS(1139), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9289] = 1,
    ACTIONS(985), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9296] = 1,
    ACTIONS(1340), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9303] = 3,
    STATE(632), 1,
      sym_param_name,
    STATE(1018), 1,
      sym_param,
    ACTIONS(1225), 2,
      sym__variable_name,
      anon_sym__,
  [9314] = 1,
    ACTIONS(885), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9321] = 1,
    ACTIONS(887), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9328] = 1,
    ACTIONS(1366), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9335] = 1,
    ACTIONS(1594), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9342] = 1,
    ACTIONS(1596), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9349] = 1,
    ACTIONS(1598), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9356] = 4,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__text_indent,
    STATE(587), 1,
      sym_text_body,
    STATE(959), 1,
      aux_sym_text_body_repeat1,
  [9369] = 1,
    ACTIONS(1600), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9376] = 1,
    ACTIONS(1602), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9383] = 1,
    ACTIONS(1604), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9390] = 1,
    ACTIONS(1606), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9397] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1608), 1,
      sym_text_line,
    STATE(473), 1,
      sym_line_end,
  [9410] = 1,
    ACTIONS(1133), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9417] = 1,
    ACTIONS(1610), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9424] = 1,
    ACTIONS(1612), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9431] = 1,
    ACTIONS(1614), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9438] = 3,
    ACTIONS(1398), 1,
      sym_comma,
    STATE(489), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1616), 2,
      sym_newline,
      sym__inline_comment,
  [9449] = 4,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(1618), 1,
      sym_colon,
    STATE(244), 1,
      sym_line_end,
  [9462] = 3,
    ACTIONS(1402), 1,
      sym_comma,
    STATE(490), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1620), 2,
      sym_newline,
      sym__inline_comment,
  [9473] = 1,
    ACTIONS(1622), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9480] = 1,
    ACTIONS(1624), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9487] = 1,
    ACTIONS(1626), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9494] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1628), 1,
      sym_text_line,
    STATE(261), 1,
      sym_line_end,
  [9507] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1630), 1,
      sym_text_line,
    STATE(262), 1,
      sym_line_end,
  [9520] = 1,
    ACTIONS(1368), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9527] = 1,
    ACTIONS(1370), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9534] = 1,
    ACTIONS(1376), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9541] = 1,
    ACTIONS(1386), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9548] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9555] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1632), 1,
      sym_text_line,
    STATE(492), 1,
      sym_line_end,
  [9568] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(1634), 1,
      sym_text_line,
    STATE(493), 1,
      sym_line_end,
  [9581] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(375), 1,
      sym_text_line,
    STATE(278), 1,
      sym_line_end,
  [9594] = 1,
    ACTIONS(943), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9601] = 1,
    ACTIONS(1636), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9608] = 1,
    ACTIONS(945), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9615] = 1,
    ACTIONS(947), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9622] = 1,
    ACTIONS(949), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9629] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1292), 1,
      sym_text_line,
    STATE(295), 1,
      sym_line_end,
  [9642] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1638), 1,
      sym_text_line,
    STATE(296), 1,
      sym_line_end,
  [9655] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1640), 1,
      sym_text_line,
    STATE(297), 1,
      sym_line_end,
  [9668] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1642), 1,
      sym_text_line,
    STATE(299), 1,
      sym_line_end,
  [9681] = 4,
    ACTIONS(247), 1,
      sym_newline,
    ACTIONS(271), 1,
      sym__inline_comment,
    ACTIONS(1644), 1,
      sym_text_line,
    STATE(300), 1,
      sym_line_end,
  [9694] = 1,
    ACTIONS(951), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9701] = 1,
    ACTIONS(953), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9708] = 4,
    ACTIONS(1021), 1,
      sym_snake_name,
    ACTIONS(1646), 1,
      sym_colon,
    STATE(648), 1,
      sym_inline_agic_body,
    STATE(931), 1,
      sym_runnable,
  [9721] = 1,
    ACTIONS(1648), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9728] = 1,
    ACTIONS(955), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9735] = 1,
    ACTIONS(957), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9742] = 1,
    ACTIONS(959), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9749] = 1,
    ACTIONS(961), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9756] = 4,
    ACTIONS(1650), 1,
      sym_blank_line,
    ACTIONS(1652), 1,
      sym__text_indent,
    STATE(807), 1,
      sym_text_body,
    STATE(965), 1,
      aux_sym_text_body_repeat1,
  [9769] = 1,
    ACTIONS(963), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9776] = 4,
    ACTIONS(399), 1,
      sym_blank_line,
    ACTIONS(403), 1,
      sym__text_indent,
    STATE(360), 1,
      sym_text_body,
    STATE(966), 1,
      aux_sym_text_body_repeat1,
  [9789] = 1,
    ACTIONS(965), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9796] = 1,
    ACTIONS(967), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9803] = 1,
    ACTIONS(969), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9810] = 1,
    ACTIONS(971), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9817] = 1,
    ACTIONS(973), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9824] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1654), 1,
      sym_blank_line,
    STATE(391), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9835] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1656), 1,
      sym_blank_line,
    STATE(392), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9846] = 3,
    ACTIONS(121), 1,
      sym_newline,
    ACTIONS(1658), 1,
      sym_colon,
    ACTIONS(93), 2,
      sym__inline_comment,
      sym_text_line,
  [9857] = 3,
    ACTIONS(295), 1,
      sym_newline,
    ACTIONS(1660), 1,
      sym_integer_literal,
    ACTIONS(287), 2,
      sym__inline_comment,
      sym_text_line,
  [9868] = 2,
    STATE(887), 1,
      sym_text_ref,
    ACTIONS(1544), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9877] = 4,
    ACTIONS(1546), 1,
      sym_runnable_ref,
    ACTIONS(1548), 1,
      sym_none_keyword,
    ACTIONS(1550), 1,
      sym_all_keyword,
    STATE(886), 1,
      sym_route_value,
  [9890] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1662), 1,
      sym_blank_line,
    STATE(454), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9901] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1664), 1,
      sym_blank_line,
    STATE(455), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9912] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1666), 1,
      sym_blank_line,
    STATE(457), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9923] = 3,
    ACTIONS(941), 1,
      sym_indented_raw_text,
    ACTIONS(1668), 1,
      sym_blank_line,
    STATE(237), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9934] = 2,
    STATE(1043), 1,
      sym_directive_op,
    ACTIONS(1486), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9943] = 1,
    ACTIONS(975), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9950] = 1,
    ACTIONS(977), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9957] = 1,
    ACTIONS(979), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9964] = 4,
    ACTIONS(243), 1,
      sym_newline,
    ACTIONS(259), 1,
      sym__inline_comment,
    ACTIONS(337), 1,
      sym_text_line,
    STATE(511), 1,
      sym_line_end,
  [9977] = 1,
    ACTIONS(1670), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9984] = 3,
    ACTIONS(907), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1672), 1,
      sym_colon,
    STATE(1174), 1,
      sym__window_complement,
  [9994] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(479), 1,
      sym_line_end,
  [10004] = 3,
    ACTIONS(1678), 1,
      sym__inline_comment,
    ACTIONS(1680), 1,
      sym_newline,
    STATE(389), 1,
      sym_line_end,
  [10014] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(181), 1,
      sym_line_end,
  [10024] = 3,
    ACTIONS(1682), 1,
      sym_rparen,
    ACTIONS(1684), 1,
      sym_comma,
    STATE(778), 1,
      aux_sym_params_repeat1,
  [10034] = 1,
    ACTIONS(1412), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10040] = 3,
    ACTIONS(1687), 1,
      sym_rparen,
    ACTIONS(1689), 1,
      sym_comma,
    STATE(855), 1,
      aux_sym_params_repeat1,
  [10050] = 1,
    ACTIONS(1691), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [10056] = 3,
    ACTIONS(1693), 1,
      sym_colon,
    ACTIONS(1695), 1,
      sym_snake_name,
    STATE(1086), 1,
      sym_instruct_name,
  [10066] = 1,
    ACTIONS(1417), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10072] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(514), 1,
      sym_line_end,
  [10082] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(198), 1,
      sym_line_end,
  [10092] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(199), 1,
      sym_line_end,
  [10102] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(715), 1,
      sym_line_end,
  [10112] = 1,
    ACTIONS(1558), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10118] = 3,
    ACTIONS(1697), 1,
      sym__inline_comment,
    ACTIONS(1699), 1,
      sym_newline,
    STATE(802), 1,
      sym_line_end,
  [10128] = 3,
    ACTIONS(1701), 1,
      sym_blank_line,
    ACTIONS(1704), 1,
      sym__text_indent,
    STATE(790), 1,
      aux_sym_text_body_repeat1,
  [10138] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(236), 1,
      sym_line_end,
  [10148] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(208), 1,
      sym_line_end,
  [10158] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(518), 1,
      sym_line_end,
  [10168] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(577), 1,
      sym_line_end,
  [10178] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(725), 1,
      sym_line_end,
  [10188] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(726), 1,
      sym_line_end,
  [10198] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(727), 1,
      sym_line_end,
  [10208] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(519), 1,
      sym_line_end,
  [10218] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(728), 1,
      sym_line_end,
  [10228] = 2,
    STATE(730), 1,
      sym__reserved_binding_word,
    ACTIONS(1706), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [10236] = 1,
    ACTIONS(1568), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10242] = 1,
    ACTIONS(1570), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [10248] = 1,
    ACTIONS(1169), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10254] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(189), 1,
      sym_line_end,
  [10264] = 2,
    STATE(178), 1,
      sym__order_complement,
    ACTIONS(1708), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [10272] = 1,
    ACTIONS(1047), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10278] = 1,
    ACTIONS(1171), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10284] = 1,
    ACTIONS(1710), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10290] = 3,
    ACTIONS(1712), 1,
      sym_blank_line,
    ACTIONS(1714), 1,
      sym__text_indent,
    STATE(790), 1,
      aux_sym_text_body_repeat1,
  [10300] = 1,
    ACTIONS(1179), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10306] = 1,
    ACTIONS(1181), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10312] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [10322] = 1,
    ACTIONS(1716), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10328] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(747), 1,
      sym_line_end,
  [10338] = 3,
    ACTIONS(1718), 1,
      sym__dedent,
    ACTIONS(1720), 1,
      sym__until_start,
    STATE(75), 1,
      sym_until_clause,
  [10348] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(190), 1,
      sym_line_end,
  [10358] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10364] = 3,
    ACTIONS(341), 1,
      sym_flow_if_keyword,
    STATE(753), 1,
      sym__inline_if_complement,
    STATE(941), 1,
      sym__named_if_complement,
  [10374] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(754), 1,
      sym_line_end,
  [10384] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10390] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(755), 1,
      sym_line_end,
  [10400] = 1,
    ACTIONS(885), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10406] = 1,
    ACTIONS(887), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10412] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10418] = 1,
    ACTIONS(1133), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10424] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10430] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10436] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10442] = 1,
    ACTIONS(885), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10448] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(531), 1,
      sym_line_end,
  [10458] = 1,
    ACTIONS(1143), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10464] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(532), 1,
      sym_line_end,
  [10474] = 1,
    ACTIONS(1149), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10480] = 1,
    ACTIONS(1153), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10486] = 1,
    ACTIONS(887), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [10492] = 2,
    ACTIONS(1722), 1,
      sym_flow_spawn_keyword,
    STATE(521), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [10500] = 1,
    ACTIONS(885), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10506] = 1,
    ACTIONS(887), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10512] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10518] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10524] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10530] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10536] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10542] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10548] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(196), 1,
      sym_line_end,
  [10558] = 1,
    ACTIONS(1125), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10564] = 1,
    ACTIONS(1127), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10570] = 1,
    ACTIONS(1129), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10576] = 1,
    ACTIONS(1135), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10582] = 1,
    ACTIONS(1137), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10588] = 1,
    ACTIONS(1139), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [10594] = 1,
    ACTIONS(1157), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10600] = 1,
    ACTIONS(1161), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [10606] = 2,
    STATE(984), 1,
      sym_param_name,
    ACTIONS(1724), 2,
      sym__variable_name,
      anon_sym__,
  [10614] = 3,
    ACTIONS(1689), 1,
      sym_comma,
    ACTIONS(1726), 1,
      sym_rparen,
    STATE(778), 1,
      aux_sym_params_repeat1,
  [10624] = 2,
    ACTIONS(1728), 1,
      sym_colon,
    ACTIONS(1730), 2,
      sym_rparen,
      sym_comma,
  [10632] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(697), 1,
      sym_line_end,
  [10642] = 1,
    ACTIONS(1732), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [10648] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(551), 1,
      sym_line_end,
  [10658] = 2,
    STATE(524), 1,
      sym__reserved_binding_word,
    ACTIONS(1734), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [10666] = 1,
    ACTIONS(1736), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10672] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(586), 1,
      sym_line_end,
  [10682] = 2,
    ACTIONS(1470), 1,
      sym_newline,
    ACTIONS(1468), 2,
      sym__inline_comment,
      sym_text_line,
  [10690] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [10700] = 2,
    ACTIONS(1740), 1,
      sym_newline,
    ACTIONS(1738), 2,
      sym__inline_comment,
      sym_text_line,
  [10708] = 2,
    ACTIONS(1736), 1,
      sym_newline,
    ACTIONS(1742), 2,
      sym__inline_comment,
      sym_text_line,
  [10716] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(475), 1,
      sym_line_end,
  [10726] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(477), 1,
      sym_line_end,
  [10736] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(482), 1,
      sym_line_end,
  [10746] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(369), 1,
      sym_line_end,
  [10756] = 2,
    ACTIONS(1746), 1,
      sym_newline,
    ACTIONS(1744), 2,
      sym__inline_comment,
      sym_text_line,
  [10764] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(552), 1,
      sym_line_end,
  [10774] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [10782] = 3,
    ACTIONS(1748), 1,
      sym__inline_comment,
    ACTIONS(1750), 1,
      sym_newline,
    STATE(429), 1,
      sym_line_end,
  [10792] = 3,
    ACTIONS(1748), 1,
      sym__inline_comment,
    ACTIONS(1750), 1,
      sym_newline,
    STATE(430), 1,
      sym_line_end,
  [10802] = 1,
    ACTIONS(1752), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [10808] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(245), 1,
      sym_line_end,
  [10818] = 2,
    ACTIONS(1566), 1,
      sym_newline,
    ACTIONS(1754), 2,
      sym__inline_comment,
      sym_text_line,
  [10826] = 3,
    ACTIONS(1697), 1,
      sym__inline_comment,
    ACTIONS(1699), 1,
      sym_newline,
    STATE(650), 1,
      sym_line_end,
  [10836] = 3,
    ACTIONS(363), 1,
      sym_flow_if_keyword,
    STATE(249), 1,
      sym__inline_if_complement,
    STATE(893), 1,
      sym__named_if_complement,
  [10846] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(250), 1,
      sym_line_end,
  [10856] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(251), 1,
      sym_line_end,
  [10866] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(553), 1,
      sym_line_end,
  [10876] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(170), 1,
      sym_line_end,
  [10886] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(260), 1,
      sym_line_end,
  [10896] = 3,
    ACTIONS(1756), 1,
      sym__inline_comment,
    ACTIONS(1758), 1,
      sym_newline,
    STATE(621), 1,
      sym_line_end,
  [10906] = 3,
    ACTIONS(1756), 1,
      sym__inline_comment,
    ACTIONS(1758), 1,
      sym_newline,
    STATE(622), 1,
      sym_line_end,
  [10916] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
  [10926] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
  [10936] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [10946] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(271), 1,
      sym_line_end,
  [10956] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(272), 1,
      sym_line_end,
  [10966] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
  [10976] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(554), 1,
      sym_line_end,
  [10986] = 3,
    ACTIONS(903), 1,
      sym_flow_by_keyword,
    STATE(276), 1,
      sym__inline_by_complement,
    STATE(909), 1,
      sym__named_by_complement,
  [10996] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(182), 1,
      sym_line_end,
  [11006] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [11016] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(555), 1,
      sym_line_end,
  [11026] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [11036] = 2,
    STATE(779), 1,
      sym_recall_source,
    ACTIONS(521), 2,
      anon_sym_far,
      anon_sym_near,
  [11044] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(494), 1,
      sym_line_end,
  [11054] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [11064] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [11074] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(556), 1,
      sym_line_end,
  [11084] = 2,
    ACTIONS(1760), 1,
      sym_flow_spawn_keyword,
    STATE(284), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [11092] = 3,
    ACTIONS(1762), 1,
      sym_pascal_name,
    STATE(1111), 1,
      sym_type_name,
    STATE(1171), 1,
      sym_struct_name,
  [11102] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(498), 1,
      sym_line_end,
  [11112] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(287), 1,
      sym_line_end,
  [11122] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(288), 1,
      sym_line_end,
  [11132] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(228), 1,
      sym_line_end,
  [11142] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(557), 1,
      sym_line_end,
  [11152] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(293), 1,
      sym_line_end,
  [11162] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(500), 1,
      sym_line_end,
  [11172] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(292), 1,
      sym_line_end,
  [11182] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(537), 1,
      sym_line_end,
  [11192] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(227), 1,
      sym_line_end,
  [11202] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1764), 1,
      sym__dedent,
    STATE(92), 1,
      sym_until_clause,
  [11212] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(305), 1,
      sym_line_end,
  [11222] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(306), 1,
      sym_line_end,
  [11232] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(307), 1,
      sym_line_end,
  [11242] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(308), 1,
      sym_line_end,
  [11252] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(309), 1,
      sym_line_end,
  [11262] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(310), 1,
      sym_line_end,
  [11272] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(311), 1,
      sym_line_end,
  [11282] = 3,
    ACTIONS(1697), 1,
      sym__inline_comment,
    ACTIONS(1699), 1,
      sym_newline,
    STATE(664), 1,
      sym_line_end,
  [11292] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1766), 1,
      sym__dedent,
    STATE(94), 1,
      sym_until_clause,
  [11302] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(317), 1,
      sym_line_end,
  [11312] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(463), 1,
      sym_line_end,
  [11322] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(319), 1,
      sym_line_end,
  [11332] = 1,
    ACTIONS(1768), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11338] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(655), 1,
      sym_line_end,
  [11348] = 1,
    ACTIONS(1770), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11354] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(503), 1,
      sym_line_end,
  [11364] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(327), 1,
      sym_line_end,
  [11374] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(229), 1,
      sym_line_end,
  [11384] = 1,
    ACTIONS(1772), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11390] = 3,
    ACTIONS(1476), 1,
      sym_newline,
    ACTIONS(1774), 1,
      sym__inline_comment,
    STATE(806), 1,
      sym_line_end,
  [11400] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(504), 1,
      sym_line_end,
  [11410] = 3,
    ACTIONS(245), 1,
      sym__inline_comment,
    ACTIONS(247), 1,
      sym_newline,
    STATE(359), 1,
      sym_line_end,
  [11420] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1204), 1,
      sym_statements,
  [11430] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(505), 1,
      sym_line_end,
  [11440] = 1,
    ACTIONS(1776), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11446] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(212), 1,
      sym_line_end,
  [11456] = 3,
    ACTIONS(848), 1,
      sym_flow_by_keyword,
    STATE(508), 1,
      sym__inline_by_complement,
    STATE(832), 1,
      sym__named_by_complement,
  [11466] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(536), 1,
      sym_line_end,
  [11476] = 3,
    ACTIONS(1720), 1,
      sym__until_start,
    ACTIONS(1778), 1,
      sym__dedent,
    STATE(82), 1,
      sym_until_clause,
  [11486] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(214), 1,
      sym_line_end,
  [11496] = 2,
    STATE(723), 1,
      sym__reserved_binding_word,
    ACTIONS(1780), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11504] = 2,
    STATE(210), 1,
      sym__order_complement,
    ACTIONS(1708), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11512] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(213), 1,
      sym_line_end,
  [11522] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [11532] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(218), 1,
      sym_line_end,
  [11542] = 2,
    STATE(740), 1,
      sym__reserved_binding_word,
    ACTIONS(1782), 2,
      anon_sym__,
      sym_flow_until_keyword,
  [11550] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(231), 1,
      sym_line_end,
  [11560] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(221), 1,
      sym_line_end,
  [11570] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(232), 1,
      sym_line_end,
  [11580] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(511), 1,
      sym_line_end,
  [11590] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(566), 1,
      sym_line_end,
  [11600] = 3,
    ACTIONS(1712), 1,
      sym_blank_line,
    ACTIONS(1784), 1,
      sym__text_indent,
    STATE(790), 1,
      aux_sym_text_body_repeat1,
  [11610] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(568), 1,
      sym_line_end,
  [11620] = 3,
    ACTIONS(237), 1,
      sym__inline_comment,
    ACTIONS(243), 1,
      sym_newline,
    STATE(539), 1,
      sym_line_end,
  [11630] = 3,
    ACTIONS(1786), 1,
      sym_colon,
    ACTIONS(1788), 1,
      sym_snake_name,
    STATE(1084), 1,
      sym_context_name,
  [11640] = 3,
    ACTIONS(907), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1790), 1,
      sym_colon,
    STATE(1203), 1,
      sym__window_complement,
  [11650] = 3,
    ACTIONS(1674), 1,
      sym__inline_comment,
    ACTIONS(1676), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [11660] = 3,
    ACTIONS(1712), 1,
      sym_blank_line,
    ACTIONS(1792), 1,
      sym__text_indent,
    STATE(790), 1,
      aux_sym_text_body_repeat1,
  [11670] = 3,
    ACTIONS(1712), 1,
      sym_blank_line,
    ACTIONS(1794), 1,
      sym__text_indent,
    STATE(790), 1,
      aux_sym_text_body_repeat1,
  [11680] = 3,
    ACTIONS(419), 1,
      sym__line_start,
    STATE(115), 1,
      sym__flow_statement,
    STATE(1082), 1,
      sym_statements,
  [11690] = 2,
    ACTIONS(1796), 1,
      sym_comment_text,
    ACTIONS(1798), 1,
      sym__comment_end,
  [11697] = 2,
    ACTIONS(1800), 1,
      sym__one_integer_literal,
    ACTIONS(1802), 1,
      sym__other_integer_literal,
  [11704] = 1,
    ACTIONS(1804), 2,
      sym_newline,
      sym__inline_comment,
  [11709] = 1,
    ACTIONS(1616), 2,
      sym_newline,
      sym__inline_comment,
  [11714] = 1,
    ACTIONS(1806), 2,
      sym_newline,
      sym__inline_comment,
  [11719] = 1,
    ACTIONS(1620), 2,
      sym_newline,
      sym__inline_comment,
  [11724] = 2,
    ACTIONS(1808), 1,
      sym_arrow,
    ACTIONS(1810), 1,
      sym_colon,
  [11731] = 2,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(152), 1,
      sym_field,
  [11738] = 1,
    ACTIONS(1812), 2,
      sym_optional_marker,
      sym_colon,
  [11743] = 2,
    ACTIONS(1814), 1,
      sym__reduce_text_start,
    STATE(569), 1,
      sym__reduce_text_body,
  [11750] = 2,
    ACTIONS(1816), 1,
      anon_sym_EQ,
    STATE(1011), 1,
      sym_assign_operator,
  [11757] = 2,
    ACTIONS(1816), 1,
      anon_sym_EQ,
    STATE(642), 1,
      sym_assign_operator,
  [11764] = 1,
    ACTIONS(1818), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [11769] = 2,
    ACTIONS(1820), 1,
      sym_arrow,
    ACTIONS(1822), 1,
      sym_colon,
  [11776] = 2,
    ACTIONS(1824), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_assign_operator,
  [11783] = 2,
    ACTIONS(1826), 1,
      anon_sym_lanes,
    STATE(1020), 1,
      sym_flow_lanes_keyword,
  [11790] = 2,
    ACTIONS(1828), 1,
      aux_sym__doc_space_token1,
    STATE(1206), 1,
      sym__doc_space,
  [11797] = 2,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(258), 1,
      sym__unroled_message_line,
  [11804] = 2,
    ACTIONS(1830), 1,
      anon_sym_EQ,
    STATE(643), 1,
      sym_assign_operator,
  [11811] = 2,
    ACTIONS(1832), 1,
      sym_comment_text,
    ACTIONS(1834), 1,
      sym__comment_end,
  [11818] = 2,
    ACTIONS(1836), 1,
      sym_snake_name,
    STATE(1006), 1,
      sym_property_key,
  [11825] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1168), 1,
      sym_param_doc_tag,
  [11832] = 2,
    ACTIONS(1840), 1,
      sym_arrow,
    ACTIONS(1842), 1,
      sym_colon,
  [11839] = 1,
    ACTIONS(1844), 2,
      sym_rparen,
      sym_comma,
  [11844] = 2,
    ACTIONS(1846), 1,
      sym_comment_text,
    ACTIONS(1848), 1,
      sym__comment_end,
  [11851] = 1,
    ACTIONS(1850), 2,
      sym_rparen,
      sym_comma,
  [11856] = 2,
    ACTIONS(1814), 1,
      sym__reduce_text_start,
    STATE(528), 1,
      sym__reduce_text_body,
  [11863] = 2,
    ACTIONS(1852), 1,
      sym_arrow,
    ACTIONS(1854), 1,
      sym_colon,
  [11870] = 2,
    ACTIONS(1021), 1,
      sym_snake_name,
    STATE(781), 1,
      sym_runnable,
  [11877] = 2,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(796), 1,
      sym_local_name,
  [11884] = 2,
    ACTIONS(91), 1,
      sym__flow_raw_text,
    STATE(187), 1,
      sym__implicit_run_line,
  [11891] = 2,
    ACTIONS(1814), 1,
      sym__reduce_text_start,
    STATE(558), 1,
      sym__reduce_text_body,
  [11898] = 1,
    ACTIONS(885), 2,
      sym_blank_line,
      sym__text_indent,
  [11903] = 2,
    ACTIONS(1856), 1,
      sym_snake_name,
    STATE(478), 1,
      sym_agent,
  [11910] = 2,
    ACTIONS(1858), 1,
      sym__snake_kebab_name,
    STATE(1177), 1,
      sym_cap_name,
  [11917] = 2,
    ACTIONS(1860), 1,
      sym__snake_kebab_name,
    STATE(1178), 1,
      sym_job_name,
  [11924] = 1,
    ACTIONS(887), 2,
      sym_blank_line,
      sym__text_indent,
  [11929] = 2,
    ACTIONS(1814), 1,
      sym__reduce_text_start,
    STATE(545), 1,
      sym__reduce_text_body,
  [11936] = 2,
    ACTIONS(1862), 1,
      anon_sym_EQ,
    STATE(1049), 1,
      sym_assign_operator,
  [11943] = 1,
    ACTIONS(1864), 2,
      sym_arrow,
      sym_colon,
  [11948] = 2,
    ACTIONS(1866), 1,
      sym_snake_name,
    STATE(1012), 1,
      sym_field_name,
  [11955] = 2,
    ACTIONS(1868), 1,
      anon_sym_lanes,
    STATE(464), 1,
      sym_flow_lanes_keyword,
  [11962] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(428), 1,
      sym__from_complement,
  [11969] = 1,
    ACTIONS(1870), 2,
      sym_integer_literal,
      sym_default_keyword,
  [11974] = 2,
    ACTIONS(1872), 1,
      sym_optional_marker,
    ACTIONS(1874), 1,
      sym_colon,
  [11981] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(373), 1,
      sym__from_complement,
  [11988] = 2,
    ACTIONS(1876), 1,
      sym_comment_text,
    ACTIONS(1878), 1,
      sym__comment_end,
  [11995] = 2,
    ACTIONS(1880), 1,
      sym_comment_text,
    ACTIONS(1882), 1,
      sym__comment_end,
  [12002] = 2,
    ACTIONS(1858), 1,
      sym__snake_kebab_name,
    STATE(1073), 1,
      sym_cap_name,
  [12009] = 1,
    ACTIONS(1884), 2,
      sym_newline,
      sym__inline_comment,
  [12014] = 1,
    ACTIONS(1886), 2,
      sym_rparen,
      sym_comma,
  [12019] = 1,
    ACTIONS(1362), 2,
      sym_newline,
      sym__inline_comment,
  [12024] = 1,
    ACTIONS(1358), 2,
      sym_newline,
      sym__inline_comment,
  [12029] = 2,
    ACTIONS(1888), 1,
      sym_comment_text,
    ACTIONS(1890), 1,
      sym__comment_end,
  [12036] = 2,
    ACTIONS(1892), 1,
      sym_comment_text,
    ACTIONS(1894), 1,
      sym__comment_end,
  [12043] = 2,
    ACTIONS(1896), 1,
      sym_comment_text,
    ACTIONS(1898), 1,
      sym__comment_end,
  [12050] = 2,
    ACTIONS(127), 1,
      sym__variable_name,
    STATE(868), 1,
      sym_local_name,
  [12057] = 2,
    ACTIONS(1900), 1,
      sym_comment_text,
    ACTIONS(1902), 1,
      sym__comment_end,
  [12064] = 2,
    ACTIONS(1904), 1,
      sym_comment_text,
    ACTIONS(1906), 1,
      sym__comment_end,
  [12071] = 2,
    ACTIONS(1858), 1,
      sym__snake_kebab_name,
    STATE(1105), 1,
      sym_cap_name,
  [12078] = 2,
    ACTIONS(1908), 1,
      sym_comment_text,
    ACTIONS(1910), 1,
      sym__comment_end,
  [12085] = 2,
    ACTIONS(1912), 1,
      sym_comment_text,
    ACTIONS(1914), 1,
      sym__comment_end,
  [12092] = 2,
    ACTIONS(1916), 1,
      sym_comment_text,
    ACTIONS(1918), 1,
      sym__comment_end,
  [12099] = 2,
    ACTIONS(1920), 1,
      sym_comment_text,
    ACTIONS(1922), 1,
      sym__comment_end,
  [12106] = 2,
    ACTIONS(1924), 1,
      sym_comment_text,
    ACTIONS(1926), 1,
      sym__comment_end,
  [12113] = 2,
    ACTIONS(1928), 1,
      sym_comment_text,
    ACTIONS(1930), 1,
      sym__comment_end,
  [12120] = 2,
    ACTIONS(1932), 1,
      sym_comment_text,
    ACTIONS(1934), 1,
      sym__comment_end,
  [12127] = 2,
    ACTIONS(1936), 1,
      sym_comment_text,
    ACTIONS(1938), 1,
      sym__comment_end,
  [12134] = 2,
    ACTIONS(1940), 1,
      sym_comment_text,
    ACTIONS(1942), 1,
      sym__comment_end,
  [12141] = 2,
    ACTIONS(1944), 1,
      sym_comment_text,
    ACTIONS(1946), 1,
      sym__comment_end,
  [12148] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1147), 1,
      sym_param_doc_tag,
  [12155] = 2,
    ACTIONS(1858), 1,
      sym__snake_kebab_name,
    STATE(1187), 1,
      sym_cap_name,
  [12162] = 1,
    ACTIONS(1948), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12167] = 1,
    ACTIONS(1950), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12172] = 2,
    ACTIONS(1860), 1,
      sym__snake_kebab_name,
    STATE(1076), 1,
      sym_job_name,
  [12179] = 2,
    ACTIONS(1952), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(886), 1,
      sym_directive_value,
  [12186] = 1,
    ACTIONS(1954), 2,
      sym_newline,
      sym__inline_comment,
  [12191] = 2,
    ACTIONS(1856), 1,
      sym_snake_name,
    STATE(410), 1,
      sym_agent,
  [12198] = 2,
    ACTIONS(1956), 1,
      sym__one_integer_literal,
    ACTIONS(1958), 1,
      sym__other_integer_literal,
  [12205] = 2,
    ACTIONS(1960), 1,
      aux_sym__doc_space_token1,
    STATE(854), 1,
      sym__doc_space,
  [12212] = 1,
    ACTIONS(1962), 2,
      sym_newline,
      sym__inline_comment,
  [12217] = 2,
    ACTIONS(1964), 1,
      sym_text_line,
    STATE(776), 1,
      sym_property_value,
  [12224] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(443), 1,
      sym__from_complement,
  [12231] = 2,
    ACTIONS(547), 1,
      sym__from_start,
    STATE(447), 1,
      sym__from_complement,
  [12238] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1080), 1,
      sym_param_doc_tag,
  [12245] = 2,
    ACTIONS(1966), 1,
      sym_flow_run_keyword,
    STATE(698), 1,
      sym__run_after_modifier,
  [12252] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1091), 1,
      sym_param_doc_tag,
  [12259] = 2,
    ACTIONS(57), 1,
      sym__flow_raw_text,
    STATE(408), 1,
      sym__implicit_run_line,
  [12266] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1102), 1,
      sym_param_doc_tag,
  [12273] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1109), 1,
      sym_param_doc_tag,
  [12280] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1116), 1,
      sym_param_doc_tag,
  [12287] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1123), 1,
      sym_param_doc_tag,
  [12294] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1130), 1,
      sym_param_doc_tag,
  [12301] = 2,
    ACTIONS(1838), 1,
      anon_sym_ATparam,
    STATE(1137), 1,
      sym_param_doc_tag,
  [12308] = 2,
    ACTIONS(1816), 1,
      anon_sym_EQ,
    STATE(1041), 1,
      sym_assign_operator,
  [12315] = 2,
    ACTIONS(1816), 1,
      anon_sym_EQ,
    STATE(762), 1,
      sym_assign_operator,
  [12322] = 2,
    ACTIONS(1824), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_assign_operator,
  [12329] = 2,
    ACTIONS(1830), 1,
      anon_sym_EQ,
    STATE(763), 1,
      sym_assign_operator,
  [12336] = 2,
    ACTIONS(1968), 1,
      sym_flow_run_keyword,
    STATE(456), 1,
      sym__run_after_modifier,
  [12343] = 2,
    ACTIONS(1952), 1,
      aux_sym__invalid_named_binding_token1,
    STATE(874), 1,
      sym_directive_value,
  [12350] = 2,
    ACTIONS(1970), 1,
      sym_text_line,
    STATE(879), 1,
      sym_cap_ref,
  [12357] = 2,
    ACTIONS(1972), 1,
      aux_sym__doc_space_token1,
    STATE(996), 1,
      sym__required_space,
  [12364] = 1,
    ACTIONS(1974), 2,
      sym_arrow,
      sym_colon,
  [12369] = 2,
    ACTIONS(579), 1,
      sym__line_start,
    STATE(119), 1,
      sym_field,
  [12376] = 1,
    ACTIONS(1976), 2,
      sym_arrow,
      sym_colon,
  [12381] = 1,
    ACTIONS(1978), 1,
      sym_colon,
  [12385] = 1,
    ACTIONS(1980), 1,
      sym__dedent,
  [12389] = 1,
    ACTIONS(1982), 1,
      sym__dedent,
  [12393] = 1,
    ACTIONS(1984), 1,
      sym_colon,
  [12397] = 1,
    ACTIONS(1986), 1,
      sym_flow_times_keyword,
  [12401] = 1,
    ACTIONS(1988), 1,
      sym__comment_end,
  [12405] = 1,
    ACTIONS(1990), 1,
      sym__comment_end,
  [12409] = 1,
    ACTIONS(1992), 1,
      sym__comment_end,
  [12413] = 1,
    ACTIONS(1994), 1,
      sym_newline,
  [12417] = 1,
    ACTIONS(1996), 1,
      sym__dedent,
  [12421] = 1,
    ACTIONS(1998), 1,
      sym__dedent,
  [12425] = 1,
    ACTIONS(2000), 1,
      sym_colon,
  [12429] = 1,
    ACTIONS(1524), 1,
      aux_sym__doc_space_token1,
  [12433] = 1,
    ACTIONS(2002), 1,
      sym_colon,
  [12437] = 1,
    ACTIONS(2004), 1,
      sym_colon,
  [12441] = 1,
    ACTIONS(2006), 1,
      ts_builtin_sym_end,
  [12445] = 1,
    ACTIONS(2008), 1,
      sym__comment_end,
  [12449] = 1,
    ACTIONS(2010), 1,
      sym__comment_end,
  [12453] = 1,
    ACTIONS(2012), 1,
      sym__comment_end,
  [12457] = 1,
    ACTIONS(2014), 1,
      sym_newline,
  [12461] = 1,
    ACTIONS(1746), 1,
      anon_sym_EQ,
  [12465] = 1,
    ACTIONS(2016), 1,
      sym_colon,
  [12469] = 1,
    ACTIONS(2018), 1,
      sym_colon,
  [12473] = 1,
    ACTIONS(2020), 1,
      anon_sym_EQ,
  [12477] = 1,
    ACTIONS(2022), 1,
      sym_flow_until_keyword,
  [12481] = 1,
    ACTIONS(2024), 1,
      sym_flow_exec_keyword,
  [12485] = 1,
    ACTIONS(1408), 1,
      sym__dedent,
  [12489] = 1,
    ACTIONS(2026), 1,
      sym__comment_end,
  [12493] = 1,
    ACTIONS(2028), 1,
      sym__comment_end,
  [12497] = 1,
    ACTIONS(2030), 1,
      sym__comment_end,
  [12501] = 1,
    ACTIONS(2032), 1,
      sym_newline,
  [12505] = 1,
    ACTIONS(2034), 1,
      sym__dedent,
  [12509] = 1,
    ACTIONS(2036), 1,
      sym_colon,
  [12513] = 1,
    ACTIONS(2038), 1,
      sym_colon,
  [12517] = 1,
    ACTIONS(2040), 1,
      sym__comment_end,
  [12521] = 1,
    ACTIONS(2042), 1,
      sym__comment_end,
  [12525] = 1,
    ACTIONS(2044), 1,
      sym__comment_end,
  [12529] = 1,
    ACTIONS(2046), 1,
      sym_newline,
  [12533] = 1,
    ACTIONS(2048), 1,
      sym_colon,
  [12537] = 1,
    ACTIONS(2050), 1,
      sym_flow_run_keyword,
  [12541] = 1,
    ACTIONS(381), 1,
      sym__dedent,
  [12545] = 1,
    ACTIONS(2052), 1,
      sym__comment_end,
  [12549] = 1,
    ACTIONS(2054), 1,
      sym__comment_end,
  [12553] = 1,
    ACTIONS(2056), 1,
      sym__comment_end,
  [12557] = 1,
    ACTIONS(2058), 1,
      sym_newline,
  [12561] = 1,
    ACTIONS(2060), 1,
      sym_colon,
  [12565] = 1,
    ACTIONS(2062), 1,
      sym__dedent,
  [12569] = 1,
    ACTIONS(2064), 1,
      sym__dedent,
  [12573] = 1,
    ACTIONS(2066), 1,
      sym__comment_end,
  [12577] = 1,
    ACTIONS(2068), 1,
      sym__comment_end,
  [12581] = 1,
    ACTIONS(2070), 1,
      sym__comment_end,
  [12585] = 1,
    ACTIONS(2072), 1,
      sym_newline,
  [12589] = 1,
    ACTIONS(2074), 1,
      sym__comment_end,
  [12593] = 1,
    ACTIONS(2076), 1,
      sym_colon,
  [12597] = 1,
    ACTIONS(367), 1,
      sym__dedent,
  [12601] = 1,
    ACTIONS(2078), 1,
      sym__comment_end,
  [12605] = 1,
    ACTIONS(2080), 1,
      sym__comment_end,
  [12609] = 1,
    ACTIONS(2082), 1,
      sym__comment_end,
  [12613] = 1,
    ACTIONS(2084), 1,
      sym_newline,
  [12617] = 1,
    ACTIONS(2086), 1,
      sym_colon,
  [12621] = 1,
    ACTIONS(2088), 1,
      sym_integer_literal,
  [12625] = 1,
    ACTIONS(2090), 1,
      sym__dedent,
  [12629] = 1,
    ACTIONS(2092), 1,
      sym__comment_end,
  [12633] = 1,
    ACTIONS(2094), 1,
      sym__comment_end,
  [12637] = 1,
    ACTIONS(2096), 1,
      sym__comment_end,
  [12641] = 1,
    ACTIONS(2098), 1,
      sym_newline,
  [12645] = 1,
    ACTIONS(2100), 1,
      sym_newline,
  [12649] = 1,
    ACTIONS(2102), 1,
      sym_newline,
  [12653] = 1,
    ACTIONS(2104), 1,
      sym_newline,
  [12657] = 1,
    ACTIONS(2106), 1,
      sym_newline,
  [12661] = 1,
    ACTIONS(2108), 1,
      sym_flow_lane_keyword,
  [12665] = 1,
    ACTIONS(2110), 1,
      sym__dedent,
  [12669] = 1,
    ACTIONS(2112), 1,
      sym__comment_end,
  [12673] = 1,
    ACTIONS(2114), 1,
      sym__dedent,
  [12677] = 1,
    ACTIONS(2116), 1,
      sym__comment_end,
  [12681] = 1,
    ACTIONS(2118), 1,
      sym_newline,
  [12685] = 1,
    ACTIONS(2120), 1,
      sym__dedent,
  [12689] = 1,
    ACTIONS(2122), 1,
      sym_newline,
  [12693] = 1,
    ACTIONS(2124), 1,
      sym_colon,
  [12697] = 1,
    ACTIONS(2126), 1,
      sym_colon,
  [12701] = 1,
    ACTIONS(2128), 1,
      sym_flow_from_keyword,
  [12705] = 1,
    ACTIONS(2130), 1,
      sym_integer_literal,
  [12709] = 1,
    ACTIONS(2132), 1,
      sym_flow_exec_keyword,
  [12713] = 1,
    ACTIONS(2134), 1,
      sym__dedent,
  [12717] = 1,
    ACTIONS(2136), 1,
      sym_colon,
  [12721] = 1,
    ACTIONS(2138), 1,
      sym_colon,
  [12725] = 1,
    ACTIONS(2140), 1,
      sym_integer_literal,
  [12729] = 1,
    ACTIONS(2142), 1,
      sym_colon,
  [12733] = 1,
    ACTIONS(2144), 1,
      sym__comment_end,
  [12737] = 1,
    ACTIONS(1986), 1,
      sym_flow_time_keyword,
  [12741] = 1,
    ACTIONS(2146), 1,
      sym_colon,
  [12745] = 1,
    ACTIONS(2148), 1,
      sym_colon,
  [12749] = 1,
    ACTIONS(2150), 1,
      sym_newline,
  [12753] = 1,
    ACTIONS(2152), 1,
      sym_integer_literal,
  [12757] = 1,
    ACTIONS(2154), 1,
      sym_flow_exec_keyword,
  [12761] = 1,
    ACTIONS(2156), 1,
      sym__comment_end,
  [12765] = 1,
    ACTIONS(2158), 1,
      sym_flow_exec_keyword,
  [12769] = 1,
    ACTIONS(2160), 1,
      sym_colon,
  [12773] = 1,
    ACTIONS(2162), 1,
      sym_colon,
  [12777] = 1,
    ACTIONS(2164), 1,
      sym_flow_until_keyword,
  [12781] = 1,
    ACTIONS(2166), 1,
      sym__dedent,
  [12785] = 1,
    ACTIONS(2168), 1,
      sym_colon,
  [12789] = 1,
    ACTIONS(2170), 1,
      sym__dedent,
  [12793] = 1,
    ACTIONS(2172), 1,
      sym_colon,
  [12797] = 1,
    ACTIONS(2174), 1,
      sym_colon,
  [12801] = 1,
    ACTIONS(2176), 1,
      sym_colon,
  [12805] = 1,
    ACTIONS(2178), 1,
      sym__dedent,
  [12809] = 1,
    ACTIONS(2180), 1,
      sym_newline,
  [12813] = 1,
    ACTIONS(2182), 1,
      sym__dedent,
  [12817] = 1,
    ACTIONS(2184), 1,
      sym_newline,
  [12821] = 1,
    ACTIONS(2186), 1,
      sym_runnable_ref,
  [12825] = 1,
    ACTIONS(2188), 1,
      sym__comment_end,
  [12829] = 1,
    ACTIONS(2190), 1,
      sym__dedent,
  [12833] = 1,
    ACTIONS(2192), 1,
      sym__dedent,
  [12837] = 1,
    ACTIONS(2194), 1,
      sym_colon,
  [12841] = 1,
    ACTIONS(2196), 1,
      sym_flow_lane_keyword,
  [12845] = 1,
    ACTIONS(2198), 1,
      sym_colon,
  [12849] = 1,
    ACTIONS(2200), 1,
      sym_colon,
  [12853] = 1,
    ACTIONS(2202), 1,
      aux_sym__invalid_named_binding_token1,
  [12857] = 1,
    ACTIONS(2204), 1,
      sym__dedent,
  [12861] = 1,
    ACTIONS(2206), 1,
      sym__dedent,
  [12865] = 1,
    ACTIONS(2208), 1,
      sym__dedent,
  [12869] = 1,
    ACTIONS(2210), 1,
      sym_colon,
  [12873] = 1,
    ACTIONS(2212), 1,
      sym_colon,
  [12877] = 1,
    ACTIONS(2214), 1,
      sym__dedent,
  [12881] = 1,
    ACTIONS(2216), 1,
      sym_cap_kind,
  [12885] = 1,
    ACTIONS(2218), 1,
      sym__comment_end,
  [12889] = 1,
    ACTIONS(2220), 1,
      sym__dedent,
  [12893] = 1,
    ACTIONS(2222), 1,
      sym_colon,
  [12897] = 1,
    ACTIONS(2224), 1,
      sym_colon,
  [12901] = 1,
    ACTIONS(2226), 1,
      sym_colon,
  [12905] = 1,
    ACTIONS(2228), 1,
      sym__dedent,
  [12909] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [12913] = 1,
    ACTIONS(2230), 1,
      sym_comment_text,
  [12917] = 1,
    ACTIONS(2232), 1,
      sym__dedent,
  [12921] = 1,
    ACTIONS(2234), 1,
      sym__dedent,
  [12925] = 1,
    ACTIONS(1494), 1,
      sym__dedent,
  [12929] = 1,
    ACTIONS(2236), 1,
      sym__dedent,
  [12933] = 1,
    ACTIONS(2238), 1,
      sym_colon,
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
  [SMALL_STATE(42)] = 1291,
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
  [SMALL_STATE(53)] = 1583,
  [SMALL_STATE(54)] = 1611,
  [SMALL_STATE(55)] = 1635,
  [SMALL_STATE(56)] = 1661,
  [SMALL_STATE(57)] = 1687,
  [SMALL_STATE(58)] = 1713,
  [SMALL_STATE(59)] = 1739,
  [SMALL_STATE(60)] = 1765,
  [SMALL_STATE(61)] = 1789,
  [SMALL_STATE(62)] = 1813,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1865,
  [SMALL_STATE(65)] = 1893,
  [SMALL_STATE(66)] = 1917,
  [SMALL_STATE(67)] = 1943,
  [SMALL_STATE(68)] = 1968,
  [SMALL_STATE(69)] = 1987,
  [SMALL_STATE(70)] = 2006,
  [SMALL_STATE(71)] = 2027,
  [SMALL_STATE(72)] = 2050,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2096,
  [SMALL_STATE(75)] = 2121,
  [SMALL_STATE(76)] = 2144,
  [SMALL_STATE(77)] = 2165,
  [SMALL_STATE(78)] = 2184,
  [SMALL_STATE(79)] = 2203,
  [SMALL_STATE(80)] = 2222,
  [SMALL_STATE(81)] = 2247,
  [SMALL_STATE(82)] = 2270,
  [SMALL_STATE(83)] = 2293,
  [SMALL_STATE(84)] = 2318,
  [SMALL_STATE(85)] = 2341,
  [SMALL_STATE(86)] = 2362,
  [SMALL_STATE(87)] = 2385,
  [SMALL_STATE(88)] = 2404,
  [SMALL_STATE(89)] = 2427,
  [SMALL_STATE(90)] = 2446,
  [SMALL_STATE(91)] = 2469,
  [SMALL_STATE(92)] = 2488,
  [SMALL_STATE(93)] = 2511,
  [SMALL_STATE(94)] = 2534,
  [SMALL_STATE(95)] = 2557,
  [SMALL_STATE(96)] = 2580,
  [SMALL_STATE(97)] = 2599,
  [SMALL_STATE(98)] = 2618,
  [SMALL_STATE(99)] = 2639,
  [SMALL_STATE(100)] = 2658,
  [SMALL_STATE(101)] = 2674,
  [SMALL_STATE(102)] = 2692,
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
  [SMALL_STATE(115)] = 2934,
  [SMALL_STATE(116)] = 2952,
  [SMALL_STATE(117)] = 2972,
  [SMALL_STATE(118)] = 2992,
  [SMALL_STATE(119)] = 3010,
  [SMALL_STATE(120)] = 3028,
  [SMALL_STATE(121)] = 3048,
  [SMALL_STATE(122)] = 3068,
  [SMALL_STATE(123)] = 3086,
  [SMALL_STATE(124)] = 3108,
  [SMALL_STATE(125)] = 3130,
  [SMALL_STATE(126)] = 3150,
  [SMALL_STATE(127)] = 3168,
  [SMALL_STATE(128)] = 3186,
  [SMALL_STATE(129)] = 3204,
  [SMALL_STATE(130)] = 3220,
  [SMALL_STATE(131)] = 3238,
  [SMALL_STATE(132)] = 3256,
  [SMALL_STATE(133)] = 3270,
  [SMALL_STATE(134)] = 3288,
  [SMALL_STATE(135)] = 3302,
  [SMALL_STATE(136)] = 3320,
  [SMALL_STATE(137)] = 3338,
  [SMALL_STATE(138)] = 3358,
  [SMALL_STATE(139)] = 3378,
  [SMALL_STATE(140)] = 3398,
  [SMALL_STATE(141)] = 3416,
  [SMALL_STATE(142)] = 3434,
  [SMALL_STATE(143)] = 3452,
  [SMALL_STATE(144)] = 3470,
  [SMALL_STATE(145)] = 3488,
  [SMALL_STATE(146)] = 3506,
  [SMALL_STATE(147)] = 3526,
  [SMALL_STATE(148)] = 3544,
  [SMALL_STATE(149)] = 3564,
  [SMALL_STATE(150)] = 3582,
  [SMALL_STATE(151)] = 3600,
  [SMALL_STATE(152)] = 3618,
  [SMALL_STATE(153)] = 3636,
  [SMALL_STATE(154)] = 3654,
  [SMALL_STATE(155)] = 3672,
  [SMALL_STATE(156)] = 3690,
  [SMALL_STATE(157)] = 3708,
  [SMALL_STATE(158)] = 3726,
  [SMALL_STATE(159)] = 3744,
  [SMALL_STATE(160)] = 3762,
  [SMALL_STATE(161)] = 3780,
  [SMALL_STATE(162)] = 3798,
  [SMALL_STATE(163)] = 3818,
  [SMALL_STATE(164)] = 3838,
  [SMALL_STATE(165)] = 3858,
  [SMALL_STATE(166)] = 3878,
  [SMALL_STATE(167)] = 3894,
  [SMALL_STATE(168)] = 3916,
  [SMALL_STATE(169)] = 3936,
  [SMALL_STATE(170)] = 3955,
  [SMALL_STATE(171)] = 3972,
  [SMALL_STATE(172)] = 3991,
  [SMALL_STATE(173)] = 4008,
  [SMALL_STATE(174)] = 4025,
  [SMALL_STATE(175)] = 4044,
  [SMALL_STATE(176)] = 4061,
  [SMALL_STATE(177)] = 4080,
  [SMALL_STATE(178)] = 4099,
  [SMALL_STATE(179)] = 4118,
  [SMALL_STATE(180)] = 4137,
  [SMALL_STATE(181)] = 4150,
  [SMALL_STATE(182)] = 4167,
  [SMALL_STATE(183)] = 4184,
  [SMALL_STATE(184)] = 4203,
  [SMALL_STATE(185)] = 4212,
  [SMALL_STATE(186)] = 4227,
  [SMALL_STATE(187)] = 4236,
  [SMALL_STATE(188)] = 4245,
  [SMALL_STATE(189)] = 4258,
  [SMALL_STATE(190)] = 4275,
  [SMALL_STATE(191)] = 4292,
  [SMALL_STATE(192)] = 4311,
  [SMALL_STATE(193)] = 4326,
  [SMALL_STATE(194)] = 4341,
  [SMALL_STATE(195)] = 4350,
  [SMALL_STATE(196)] = 4359,
  [SMALL_STATE(197)] = 4376,
  [SMALL_STATE(198)] = 4393,
  [SMALL_STATE(199)] = 4410,
  [SMALL_STATE(200)] = 4427,
  [SMALL_STATE(201)] = 4446,
  [SMALL_STATE(202)] = 4461,
  [SMALL_STATE(203)] = 4480,
  [SMALL_STATE(204)] = 4499,
  [SMALL_STATE(205)] = 4514,
  [SMALL_STATE(206)] = 4533,
  [SMALL_STATE(207)] = 4552,
  [SMALL_STATE(208)] = 4571,
  [SMALL_STATE(209)] = 4588,
  [SMALL_STATE(210)] = 4601,
  [SMALL_STATE(211)] = 4620,
  [SMALL_STATE(212)] = 4639,
  [SMALL_STATE(213)] = 4656,
  [SMALL_STATE(214)] = 4673,
  [SMALL_STATE(215)] = 4690,
  [SMALL_STATE(216)] = 4709,
  [SMALL_STATE(217)] = 4728,
  [SMALL_STATE(218)] = 4745,
  [SMALL_STATE(219)] = 4762,
  [SMALL_STATE(220)] = 4781,
  [SMALL_STATE(221)] = 4800,
  [SMALL_STATE(222)] = 4817,
  [SMALL_STATE(223)] = 4836,
  [SMALL_STATE(224)] = 4855,
  [SMALL_STATE(225)] = 4874,
  [SMALL_STATE(226)] = 4887,
  [SMALL_STATE(227)] = 4906,
  [SMALL_STATE(228)] = 4923,
  [SMALL_STATE(229)] = 4940,
  [SMALL_STATE(230)] = 4957,
  [SMALL_STATE(231)] = 4972,
  [SMALL_STATE(232)] = 4989,
  [SMALL_STATE(233)] = 5006,
  [SMALL_STATE(234)] = 5025,
  [SMALL_STATE(235)] = 5044,
  [SMALL_STATE(236)] = 5063,
  [SMALL_STATE(237)] = 5080,
  [SMALL_STATE(238)] = 5094,
  [SMALL_STATE(239)] = 5102,
  [SMALL_STATE(240)] = 5110,
  [SMALL_STATE(241)] = 5118,
  [SMALL_STATE(242)] = 5126,
  [SMALL_STATE(243)] = 5134,
  [SMALL_STATE(244)] = 5142,
  [SMALL_STATE(245)] = 5150,
  [SMALL_STATE(246)] = 5158,
  [SMALL_STATE(247)] = 5166,
  [SMALL_STATE(248)] = 5174,
  [SMALL_STATE(249)] = 5182,
  [SMALL_STATE(250)] = 5190,
  [SMALL_STATE(251)] = 5198,
  [SMALL_STATE(252)] = 5206,
  [SMALL_STATE(253)] = 5214,
  [SMALL_STATE(254)] = 5222,
  [SMALL_STATE(255)] = 5230,
  [SMALL_STATE(256)] = 5238,
  [SMALL_STATE(257)] = 5246,
  [SMALL_STATE(258)] = 5254,
  [SMALL_STATE(259)] = 5262,
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
  [SMALL_STATE(280)] = 5446,
  [SMALL_STATE(281)] = 5454,
  [SMALL_STATE(282)] = 5462,
  [SMALL_STATE(283)] = 5470,
  [SMALL_STATE(284)] = 5478,
  [SMALL_STATE(285)] = 5486,
  [SMALL_STATE(286)] = 5494,
  [SMALL_STATE(287)] = 5502,
  [SMALL_STATE(288)] = 5510,
  [SMALL_STATE(289)] = 5518,
  [SMALL_STATE(290)] = 5532,
  [SMALL_STATE(291)] = 5540,
  [SMALL_STATE(292)] = 5548,
  [SMALL_STATE(293)] = 5556,
  [SMALL_STATE(294)] = 5564,
  [SMALL_STATE(295)] = 5580,
  [SMALL_STATE(296)] = 5588,
  [SMALL_STATE(297)] = 5596,
  [SMALL_STATE(298)] = 5604,
  [SMALL_STATE(299)] = 5612,
  [SMALL_STATE(300)] = 5620,
  [SMALL_STATE(301)] = 5628,
  [SMALL_STATE(302)] = 5636,
  [SMALL_STATE(303)] = 5644,
  [SMALL_STATE(304)] = 5652,
  [SMALL_STATE(305)] = 5666,
  [SMALL_STATE(306)] = 5674,
  [SMALL_STATE(307)] = 5682,
  [SMALL_STATE(308)] = 5690,
  [SMALL_STATE(309)] = 5698,
  [SMALL_STATE(310)] = 5706,
  [SMALL_STATE(311)] = 5714,
  [SMALL_STATE(312)] = 5722,
  [SMALL_STATE(313)] = 5730,
  [SMALL_STATE(314)] = 5744,
  [SMALL_STATE(315)] = 5752,
  [SMALL_STATE(316)] = 5760,
  [SMALL_STATE(317)] = 5768,
  [SMALL_STATE(318)] = 5776,
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
  [SMALL_STATE(335)] = 5918,
  [SMALL_STATE(336)] = 5926,
  [SMALL_STATE(337)] = 5934,
  [SMALL_STATE(338)] = 5944,
  [SMALL_STATE(339)] = 5952,
  [SMALL_STATE(340)] = 5960,
  [SMALL_STATE(341)] = 5968,
  [SMALL_STATE(342)] = 5978,
  [SMALL_STATE(343)] = 5992,
  [SMALL_STATE(344)] = 6002,
  [SMALL_STATE(345)] = 6012,
  [SMALL_STATE(346)] = 6022,
  [SMALL_STATE(347)] = 6032,
  [SMALL_STATE(348)] = 6048,
  [SMALL_STATE(349)] = 6064,
  [SMALL_STATE(350)] = 6078,
  [SMALL_STATE(351)] = 6086,
  [SMALL_STATE(352)] = 6094,
  [SMALL_STATE(353)] = 6102,
  [SMALL_STATE(354)] = 6110,
  [SMALL_STATE(355)] = 6118,
  [SMALL_STATE(356)] = 6126,
  [SMALL_STATE(357)] = 6134,
  [SMALL_STATE(358)] = 6142,
  [SMALL_STATE(359)] = 6150,
  [SMALL_STATE(360)] = 6158,
  [SMALL_STATE(361)] = 6166,
  [SMALL_STATE(362)] = 6180,
  [SMALL_STATE(363)] = 6188,
  [SMALL_STATE(364)] = 6196,
  [SMALL_STATE(365)] = 6210,
  [SMALL_STATE(366)] = 6218,
  [SMALL_STATE(367)] = 6226,
  [SMALL_STATE(368)] = 6234,
  [SMALL_STATE(369)] = 6242,
  [SMALL_STATE(370)] = 6250,
  [SMALL_STATE(371)] = 6258,
  [SMALL_STATE(372)] = 6272,
  [SMALL_STATE(373)] = 6280,
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
  [SMALL_STATE(384)] = 6374,
  [SMALL_STATE(385)] = 6382,
  [SMALL_STATE(386)] = 6390,
  [SMALL_STATE(387)] = 6398,
  [SMALL_STATE(388)] = 6406,
  [SMALL_STATE(389)] = 6422,
  [SMALL_STATE(390)] = 6430,
  [SMALL_STATE(391)] = 6444,
  [SMALL_STATE(392)] = 6458,
  [SMALL_STATE(393)] = 6472,
  [SMALL_STATE(394)] = 6486,
  [SMALL_STATE(395)] = 6500,
  [SMALL_STATE(396)] = 6516,
  [SMALL_STATE(397)] = 6530,
  [SMALL_STATE(398)] = 6544,
  [SMALL_STATE(399)] = 6552,
  [SMALL_STATE(400)] = 6566,
  [SMALL_STATE(401)] = 6580,
  [SMALL_STATE(402)] = 6594,
  [SMALL_STATE(403)] = 6610,
  [SMALL_STATE(404)] = 6626,
  [SMALL_STATE(405)] = 6642,
  [SMALL_STATE(406)] = 6656,
  [SMALL_STATE(407)] = 6670,
  [SMALL_STATE(408)] = 6684,
  [SMALL_STATE(409)] = 6692,
  [SMALL_STATE(410)] = 6708,
  [SMALL_STATE(411)] = 6724,
  [SMALL_STATE(412)] = 6740,
  [SMALL_STATE(413)] = 6754,
  [SMALL_STATE(414)] = 6770,
  [SMALL_STATE(415)] = 6778,
  [SMALL_STATE(416)] = 6794,
  [SMALL_STATE(417)] = 6810,
  [SMALL_STATE(418)] = 6826,
  [SMALL_STATE(419)] = 6834,
  [SMALL_STATE(420)] = 6842,
  [SMALL_STATE(421)] = 6850,
  [SMALL_STATE(422)] = 6864,
  [SMALL_STATE(423)] = 6878,
  [SMALL_STATE(424)] = 6894,
  [SMALL_STATE(425)] = 6910,
  [SMALL_STATE(426)] = 6918,
  [SMALL_STATE(427)] = 6932,
  [SMALL_STATE(428)] = 6946,
  [SMALL_STATE(429)] = 6960,
  [SMALL_STATE(430)] = 6968,
  [SMALL_STATE(431)] = 6976,
  [SMALL_STATE(432)] = 6990,
  [SMALL_STATE(433)] = 7006,
  [SMALL_STATE(434)] = 7020,
  [SMALL_STATE(435)] = 7028,
  [SMALL_STATE(436)] = 7036,
  [SMALL_STATE(437)] = 7052,
  [SMALL_STATE(438)] = 7060,
  [SMALL_STATE(439)] = 7068,
  [SMALL_STATE(440)] = 7082,
  [SMALL_STATE(441)] = 7090,
  [SMALL_STATE(442)] = 7098,
  [SMALL_STATE(443)] = 7114,
  [SMALL_STATE(444)] = 7128,
  [SMALL_STATE(445)] = 7136,
  [SMALL_STATE(446)] = 7144,
  [SMALL_STATE(447)] = 7158,
  [SMALL_STATE(448)] = 7172,
  [SMALL_STATE(449)] = 7180,
  [SMALL_STATE(450)] = 7194,
  [SMALL_STATE(451)] = 7202,
  [SMALL_STATE(452)] = 7216,
  [SMALL_STATE(453)] = 7224,
  [SMALL_STATE(454)] = 7232,
  [SMALL_STATE(455)] = 7246,
  [SMALL_STATE(456)] = 7260,
  [SMALL_STATE(457)] = 7268,
  [SMALL_STATE(458)] = 7282,
  [SMALL_STATE(459)] = 7290,
  [SMALL_STATE(460)] = 7304,
  [SMALL_STATE(461)] = 7320,
  [SMALL_STATE(462)] = 7334,
  [SMALL_STATE(463)] = 7348,
  [SMALL_STATE(464)] = 7362,
  [SMALL_STATE(465)] = 7370,
  [SMALL_STATE(466)] = 7384,
  [SMALL_STATE(467)] = 7398,
  [SMALL_STATE(468)] = 7412,
  [SMALL_STATE(469)] = 7420,
  [SMALL_STATE(470)] = 7436,
  [SMALL_STATE(471)] = 7452,
  [SMALL_STATE(472)] = 7468,
  [SMALL_STATE(473)] = 7482,
  [SMALL_STATE(474)] = 7490,
  [SMALL_STATE(475)] = 7498,
  [SMALL_STATE(476)] = 7506,
  [SMALL_STATE(477)] = 7522,
  [SMALL_STATE(478)] = 7530,
  [SMALL_STATE(479)] = 7546,
  [SMALL_STATE(480)] = 7560,
  [SMALL_STATE(481)] = 7574,
  [SMALL_STATE(482)] = 7588,
  [SMALL_STATE(483)] = 7596,
  [SMALL_STATE(484)] = 7604,
  [SMALL_STATE(485)] = 7611,
  [SMALL_STATE(486)] = 7618,
  [SMALL_STATE(487)] = 7625,
  [SMALL_STATE(488)] = 7632,
  [SMALL_STATE(489)] = 7639,
  [SMALL_STATE(490)] = 7650,
  [SMALL_STATE(491)] = 7661,
  [SMALL_STATE(492)] = 7668,
  [SMALL_STATE(493)] = 7675,
  [SMALL_STATE(494)] = 7682,
  [SMALL_STATE(495)] = 7689,
  [SMALL_STATE(496)] = 7696,
  [SMALL_STATE(497)] = 7703,
  [SMALL_STATE(498)] = 7710,
  [SMALL_STATE(499)] = 7717,
  [SMALL_STATE(500)] = 7728,
  [SMALL_STATE(501)] = 7735,
  [SMALL_STATE(502)] = 7742,
  [SMALL_STATE(503)] = 7749,
  [SMALL_STATE(504)] = 7756,
  [SMALL_STATE(505)] = 7763,
  [SMALL_STATE(506)] = 7770,
  [SMALL_STATE(507)] = 7777,
  [SMALL_STATE(508)] = 7784,
  [SMALL_STATE(509)] = 7791,
  [SMALL_STATE(510)] = 7798,
  [SMALL_STATE(511)] = 7811,
  [SMALL_STATE(512)] = 7818,
  [SMALL_STATE(513)] = 7825,
  [SMALL_STATE(514)] = 7838,
  [SMALL_STATE(515)] = 7845,
  [SMALL_STATE(516)] = 7856,
  [SMALL_STATE(517)] = 7867,
  [SMALL_STATE(518)] = 7874,
  [SMALL_STATE(519)] = 7881,
  [SMALL_STATE(520)] = 7888,
  [SMALL_STATE(521)] = 7901,
  [SMALL_STATE(522)] = 7908,
  [SMALL_STATE(523)] = 7921,
  [SMALL_STATE(524)] = 7934,
  [SMALL_STATE(525)] = 7947,
  [SMALL_STATE(526)] = 7960,
  [SMALL_STATE(527)] = 7967,
  [SMALL_STATE(528)] = 7978,
  [SMALL_STATE(529)] = 7985,
  [SMALL_STATE(530)] = 7992,
  [SMALL_STATE(531)] = 7999,
  [SMALL_STATE(532)] = 8006,
  [SMALL_STATE(533)] = 8013,
  [SMALL_STATE(534)] = 8020,
  [SMALL_STATE(535)] = 8027,
  [SMALL_STATE(536)] = 8034,
  [SMALL_STATE(537)] = 8041,
  [SMALL_STATE(538)] = 8048,
  [SMALL_STATE(539)] = 8055,
  [SMALL_STATE(540)] = 8062,
  [SMALL_STATE(541)] = 8069,
  [SMALL_STATE(542)] = 8076,
  [SMALL_STATE(543)] = 8083,
  [SMALL_STATE(544)] = 8090,
  [SMALL_STATE(545)] = 8097,
  [SMALL_STATE(546)] = 8104,
  [SMALL_STATE(547)] = 8117,
  [SMALL_STATE(548)] = 8124,
  [SMALL_STATE(549)] = 8131,
  [SMALL_STATE(550)] = 8138,
  [SMALL_STATE(551)] = 8145,
  [SMALL_STATE(552)] = 8152,
  [SMALL_STATE(553)] = 8159,
  [SMALL_STATE(554)] = 8166,
  [SMALL_STATE(555)] = 8173,
  [SMALL_STATE(556)] = 8180,
  [SMALL_STATE(557)] = 8187,
  [SMALL_STATE(558)] = 8194,
  [SMALL_STATE(559)] = 8201,
  [SMALL_STATE(560)] = 8208,
  [SMALL_STATE(561)] = 8215,
  [SMALL_STATE(562)] = 8228,
  [SMALL_STATE(563)] = 8235,
  [SMALL_STATE(564)] = 8242,
  [SMALL_STATE(565)] = 8249,
  [SMALL_STATE(566)] = 8256,
  [SMALL_STATE(567)] = 8263,
  [SMALL_STATE(568)] = 8274,
  [SMALL_STATE(569)] = 8281,
  [SMALL_STATE(570)] = 8288,
  [SMALL_STATE(571)] = 8295,
  [SMALL_STATE(572)] = 8302,
  [SMALL_STATE(573)] = 8309,
  [SMALL_STATE(574)] = 8316,
  [SMALL_STATE(575)] = 8323,
  [SMALL_STATE(576)] = 8330,
  [SMALL_STATE(577)] = 8337,
  [SMALL_STATE(578)] = 8344,
  [SMALL_STATE(579)] = 8351,
  [SMALL_STATE(580)] = 8358,
  [SMALL_STATE(581)] = 8365,
  [SMALL_STATE(582)] = 8372,
  [SMALL_STATE(583)] = 8379,
  [SMALL_STATE(584)] = 8386,
  [SMALL_STATE(585)] = 8393,
  [SMALL_STATE(586)] = 8400,
  [SMALL_STATE(587)] = 8407,
  [SMALL_STATE(588)] = 8414,
  [SMALL_STATE(589)] = 8421,
  [SMALL_STATE(590)] = 8428,
  [SMALL_STATE(591)] = 8435,
  [SMALL_STATE(592)] = 8442,
  [SMALL_STATE(593)] = 8451,
  [SMALL_STATE(594)] = 8458,
  [SMALL_STATE(595)] = 8471,
  [SMALL_STATE(596)] = 8478,
  [SMALL_STATE(597)] = 8489,
  [SMALL_STATE(598)] = 8502,
  [SMALL_STATE(599)] = 8511,
  [SMALL_STATE(600)] = 8518,
  [SMALL_STATE(601)] = 8531,
  [SMALL_STATE(602)] = 8544,
  [SMALL_STATE(603)] = 8557,
  [SMALL_STATE(604)] = 8570,
  [SMALL_STATE(605)] = 8577,
  [SMALL_STATE(606)] = 8590,
  [SMALL_STATE(607)] = 8597,
  [SMALL_STATE(608)] = 8604,
  [SMALL_STATE(609)] = 8615,
  [SMALL_STATE(610)] = 8628,
  [SMALL_STATE(611)] = 8635,
  [SMALL_STATE(612)] = 8642,
  [SMALL_STATE(613)] = 8649,
  [SMALL_STATE(614)] = 8660,
  [SMALL_STATE(615)] = 8671,
  [SMALL_STATE(616)] = 8678,
  [SMALL_STATE(617)] = 8685,
  [SMALL_STATE(618)] = 8692,
  [SMALL_STATE(619)] = 8699,
  [SMALL_STATE(620)] = 8706,
  [SMALL_STATE(621)] = 8713,
  [SMALL_STATE(622)] = 8720,
  [SMALL_STATE(623)] = 8727,
  [SMALL_STATE(624)] = 8734,
  [SMALL_STATE(625)] = 8741,
  [SMALL_STATE(626)] = 8748,
  [SMALL_STATE(627)] = 8761,
  [SMALL_STATE(628)] = 8768,
  [SMALL_STATE(629)] = 8775,
  [SMALL_STATE(630)] = 8782,
  [SMALL_STATE(631)] = 8789,
  [SMALL_STATE(632)] = 8796,
  [SMALL_STATE(633)] = 8807,
  [SMALL_STATE(634)] = 8814,
  [SMALL_STATE(635)] = 8821,
  [SMALL_STATE(636)] = 8828,
  [SMALL_STATE(637)] = 8835,
  [SMALL_STATE(638)] = 8848,
  [SMALL_STATE(639)] = 8861,
  [SMALL_STATE(640)] = 8868,
  [SMALL_STATE(641)] = 8877,
  [SMALL_STATE(642)] = 8884,
  [SMALL_STATE(643)] = 8893,
  [SMALL_STATE(644)] = 8906,
  [SMALL_STATE(645)] = 8913,
  [SMALL_STATE(646)] = 8920,
  [SMALL_STATE(647)] = 8927,
  [SMALL_STATE(648)] = 8934,
  [SMALL_STATE(649)] = 8941,
  [SMALL_STATE(650)] = 8948,
  [SMALL_STATE(651)] = 8955,
  [SMALL_STATE(652)] = 8962,
  [SMALL_STATE(653)] = 8969,
  [SMALL_STATE(654)] = 8976,
  [SMALL_STATE(655)] = 8983,
  [SMALL_STATE(656)] = 8990,
  [SMALL_STATE(657)] = 8999,
  [SMALL_STATE(658)] = 9006,
  [SMALL_STATE(659)] = 9013,
  [SMALL_STATE(660)] = 9020,
  [SMALL_STATE(661)] = 9027,
  [SMALL_STATE(662)] = 9034,
  [SMALL_STATE(663)] = 9041,
  [SMALL_STATE(664)] = 9048,
  [SMALL_STATE(665)] = 9055,
  [SMALL_STATE(666)] = 9066,
  [SMALL_STATE(667)] = 9073,
  [SMALL_STATE(668)] = 9080,
  [SMALL_STATE(669)] = 9087,
  [SMALL_STATE(670)] = 9094,
  [SMALL_STATE(671)] = 9101,
  [SMALL_STATE(672)] = 9108,
  [SMALL_STATE(673)] = 9115,
  [SMALL_STATE(674)] = 9122,
  [SMALL_STATE(675)] = 9135,
  [SMALL_STATE(676)] = 9142,
  [SMALL_STATE(677)] = 9149,
  [SMALL_STATE(678)] = 9156,
  [SMALL_STATE(679)] = 9163,
  [SMALL_STATE(680)] = 9170,
  [SMALL_STATE(681)] = 9177,
  [SMALL_STATE(682)] = 9184,
  [SMALL_STATE(683)] = 9191,
  [SMALL_STATE(684)] = 9198,
  [SMALL_STATE(685)] = 9205,
  [SMALL_STATE(686)] = 9212,
  [SMALL_STATE(687)] = 9219,
  [SMALL_STATE(688)] = 9226,
  [SMALL_STATE(689)] = 9233,
  [SMALL_STATE(690)] = 9240,
  [SMALL_STATE(691)] = 9247,
  [SMALL_STATE(692)] = 9254,
  [SMALL_STATE(693)] = 9261,
  [SMALL_STATE(694)] = 9268,
  [SMALL_STATE(695)] = 9275,
  [SMALL_STATE(696)] = 9282,
  [SMALL_STATE(697)] = 9289,
  [SMALL_STATE(698)] = 9296,
  [SMALL_STATE(699)] = 9303,
  [SMALL_STATE(700)] = 9314,
  [SMALL_STATE(701)] = 9321,
  [SMALL_STATE(702)] = 9328,
  [SMALL_STATE(703)] = 9335,
  [SMALL_STATE(704)] = 9342,
  [SMALL_STATE(705)] = 9349,
  [SMALL_STATE(706)] = 9356,
  [SMALL_STATE(707)] = 9369,
  [SMALL_STATE(708)] = 9376,
  [SMALL_STATE(709)] = 9383,
  [SMALL_STATE(710)] = 9390,
  [SMALL_STATE(711)] = 9397,
  [SMALL_STATE(712)] = 9410,
  [SMALL_STATE(713)] = 9417,
  [SMALL_STATE(714)] = 9424,
  [SMALL_STATE(715)] = 9431,
  [SMALL_STATE(716)] = 9438,
  [SMALL_STATE(717)] = 9449,
  [SMALL_STATE(718)] = 9462,
  [SMALL_STATE(719)] = 9473,
  [SMALL_STATE(720)] = 9480,
  [SMALL_STATE(721)] = 9487,
  [SMALL_STATE(722)] = 9494,
  [SMALL_STATE(723)] = 9507,
  [SMALL_STATE(724)] = 9520,
  [SMALL_STATE(725)] = 9527,
  [SMALL_STATE(726)] = 9534,
  [SMALL_STATE(727)] = 9541,
  [SMALL_STATE(728)] = 9548,
  [SMALL_STATE(729)] = 9555,
  [SMALL_STATE(730)] = 9568,
  [SMALL_STATE(731)] = 9581,
  [SMALL_STATE(732)] = 9594,
  [SMALL_STATE(733)] = 9601,
  [SMALL_STATE(734)] = 9608,
  [SMALL_STATE(735)] = 9615,
  [SMALL_STATE(736)] = 9622,
  [SMALL_STATE(737)] = 9629,
  [SMALL_STATE(738)] = 9642,
  [SMALL_STATE(739)] = 9655,
  [SMALL_STATE(740)] = 9668,
  [SMALL_STATE(741)] = 9681,
  [SMALL_STATE(742)] = 9694,
  [SMALL_STATE(743)] = 9701,
  [SMALL_STATE(744)] = 9708,
  [SMALL_STATE(745)] = 9721,
  [SMALL_STATE(746)] = 9728,
  [SMALL_STATE(747)] = 9735,
  [SMALL_STATE(748)] = 9742,
  [SMALL_STATE(749)] = 9749,
  [SMALL_STATE(750)] = 9756,
  [SMALL_STATE(751)] = 9769,
  [SMALL_STATE(752)] = 9776,
  [SMALL_STATE(753)] = 9789,
  [SMALL_STATE(754)] = 9796,
  [SMALL_STATE(755)] = 9803,
  [SMALL_STATE(756)] = 9810,
  [SMALL_STATE(757)] = 9817,
  [SMALL_STATE(758)] = 9824,
  [SMALL_STATE(759)] = 9835,
  [SMALL_STATE(760)] = 9846,
  [SMALL_STATE(761)] = 9857,
  [SMALL_STATE(762)] = 9868,
  [SMALL_STATE(763)] = 9877,
  [SMALL_STATE(764)] = 9890,
  [SMALL_STATE(765)] = 9901,
  [SMALL_STATE(766)] = 9912,
  [SMALL_STATE(767)] = 9923,
  [SMALL_STATE(768)] = 9934,
  [SMALL_STATE(769)] = 9943,
  [SMALL_STATE(770)] = 9950,
  [SMALL_STATE(771)] = 9957,
  [SMALL_STATE(772)] = 9964,
  [SMALL_STATE(773)] = 9977,
  [SMALL_STATE(774)] = 9984,
  [SMALL_STATE(775)] = 9994,
  [SMALL_STATE(776)] = 10004,
  [SMALL_STATE(777)] = 10014,
  [SMALL_STATE(778)] = 10024,
  [SMALL_STATE(779)] = 10034,
  [SMALL_STATE(780)] = 10040,
  [SMALL_STATE(781)] = 10050,
  [SMALL_STATE(782)] = 10056,
  [SMALL_STATE(783)] = 10066,
  [SMALL_STATE(784)] = 10072,
  [SMALL_STATE(785)] = 10082,
  [SMALL_STATE(786)] = 10092,
  [SMALL_STATE(787)] = 10102,
  [SMALL_STATE(788)] = 10112,
  [SMALL_STATE(789)] = 10118,
  [SMALL_STATE(790)] = 10128,
  [SMALL_STATE(791)] = 10138,
  [SMALL_STATE(792)] = 10148,
  [SMALL_STATE(793)] = 10158,
  [SMALL_STATE(794)] = 10168,
  [SMALL_STATE(795)] = 10178,
  [SMALL_STATE(796)] = 10188,
  [SMALL_STATE(797)] = 10198,
  [SMALL_STATE(798)] = 10208,
  [SMALL_STATE(799)] = 10218,
  [SMALL_STATE(800)] = 10228,
  [SMALL_STATE(801)] = 10236,
  [SMALL_STATE(802)] = 10242,
  [SMALL_STATE(803)] = 10248,
  [SMALL_STATE(804)] = 10254,
  [SMALL_STATE(805)] = 10264,
  [SMALL_STATE(806)] = 10272,
  [SMALL_STATE(807)] = 10278,
  [SMALL_STATE(808)] = 10284,
  [SMALL_STATE(809)] = 10290,
  [SMALL_STATE(810)] = 10300,
  [SMALL_STATE(811)] = 10306,
  [SMALL_STATE(812)] = 10312,
  [SMALL_STATE(813)] = 10322,
  [SMALL_STATE(814)] = 10328,
  [SMALL_STATE(815)] = 10338,
  [SMALL_STATE(816)] = 10348,
  [SMALL_STATE(817)] = 10358,
  [SMALL_STATE(818)] = 10364,
  [SMALL_STATE(819)] = 10374,
  [SMALL_STATE(820)] = 10384,
  [SMALL_STATE(821)] = 10390,
  [SMALL_STATE(822)] = 10400,
  [SMALL_STATE(823)] = 10406,
  [SMALL_STATE(824)] = 10412,
  [SMALL_STATE(825)] = 10418,
  [SMALL_STATE(826)] = 10424,
  [SMALL_STATE(827)] = 10430,
  [SMALL_STATE(828)] = 10436,
  [SMALL_STATE(829)] = 10442,
  [SMALL_STATE(830)] = 10448,
  [SMALL_STATE(831)] = 10458,
  [SMALL_STATE(832)] = 10464,
  [SMALL_STATE(833)] = 10474,
  [SMALL_STATE(834)] = 10480,
  [SMALL_STATE(835)] = 10486,
  [SMALL_STATE(836)] = 10492,
  [SMALL_STATE(837)] = 10500,
  [SMALL_STATE(838)] = 10506,
  [SMALL_STATE(839)] = 10512,
  [SMALL_STATE(840)] = 10518,
  [SMALL_STATE(841)] = 10524,
  [SMALL_STATE(842)] = 10530,
  [SMALL_STATE(843)] = 10536,
  [SMALL_STATE(844)] = 10542,
  [SMALL_STATE(845)] = 10548,
  [SMALL_STATE(846)] = 10558,
  [SMALL_STATE(847)] = 10564,
  [SMALL_STATE(848)] = 10570,
  [SMALL_STATE(849)] = 10576,
  [SMALL_STATE(850)] = 10582,
  [SMALL_STATE(851)] = 10588,
  [SMALL_STATE(852)] = 10594,
  [SMALL_STATE(853)] = 10600,
  [SMALL_STATE(854)] = 10606,
  [SMALL_STATE(855)] = 10614,
  [SMALL_STATE(856)] = 10624,
  [SMALL_STATE(857)] = 10632,
  [SMALL_STATE(858)] = 10642,
  [SMALL_STATE(859)] = 10648,
  [SMALL_STATE(860)] = 10658,
  [SMALL_STATE(861)] = 10666,
  [SMALL_STATE(862)] = 10672,
  [SMALL_STATE(863)] = 10682,
  [SMALL_STATE(864)] = 10690,
  [SMALL_STATE(865)] = 10700,
  [SMALL_STATE(866)] = 10708,
  [SMALL_STATE(867)] = 10716,
  [SMALL_STATE(868)] = 10726,
  [SMALL_STATE(869)] = 10736,
  [SMALL_STATE(870)] = 10746,
  [SMALL_STATE(871)] = 10756,
  [SMALL_STATE(872)] = 10764,
  [SMALL_STATE(873)] = 10774,
  [SMALL_STATE(874)] = 10782,
  [SMALL_STATE(875)] = 10792,
  [SMALL_STATE(876)] = 10802,
  [SMALL_STATE(877)] = 10808,
  [SMALL_STATE(878)] = 10818,
  [SMALL_STATE(879)] = 10826,
  [SMALL_STATE(880)] = 10836,
  [SMALL_STATE(881)] = 10846,
  [SMALL_STATE(882)] = 10856,
  [SMALL_STATE(883)] = 10866,
  [SMALL_STATE(884)] = 10876,
  [SMALL_STATE(885)] = 10886,
  [SMALL_STATE(886)] = 10896,
  [SMALL_STATE(887)] = 10906,
  [SMALL_STATE(888)] = 10916,
  [SMALL_STATE(889)] = 10926,
  [SMALL_STATE(890)] = 10936,
  [SMALL_STATE(891)] = 10946,
  [SMALL_STATE(892)] = 10956,
  [SMALL_STATE(893)] = 10966,
  [SMALL_STATE(894)] = 10976,
  [SMALL_STATE(895)] = 10986,
  [SMALL_STATE(896)] = 10996,
  [SMALL_STATE(897)] = 11006,
  [SMALL_STATE(898)] = 11016,
  [SMALL_STATE(899)] = 11026,
  [SMALL_STATE(900)] = 11036,
  [SMALL_STATE(901)] = 11044,
  [SMALL_STATE(902)] = 11054,
  [SMALL_STATE(903)] = 11064,
  [SMALL_STATE(904)] = 11074,
  [SMALL_STATE(905)] = 11084,
  [SMALL_STATE(906)] = 11092,
  [SMALL_STATE(907)] = 11102,
  [SMALL_STATE(908)] = 11112,
  [SMALL_STATE(909)] = 11122,
  [SMALL_STATE(910)] = 11132,
  [SMALL_STATE(911)] = 11142,
  [SMALL_STATE(912)] = 11152,
  [SMALL_STATE(913)] = 11162,
  [SMALL_STATE(914)] = 11172,
  [SMALL_STATE(915)] = 11182,
  [SMALL_STATE(916)] = 11192,
  [SMALL_STATE(917)] = 11202,
  [SMALL_STATE(918)] = 11212,
  [SMALL_STATE(919)] = 11222,
  [SMALL_STATE(920)] = 11232,
  [SMALL_STATE(921)] = 11242,
  [SMALL_STATE(922)] = 11252,
  [SMALL_STATE(923)] = 11262,
  [SMALL_STATE(924)] = 11272,
  [SMALL_STATE(925)] = 11282,
  [SMALL_STATE(926)] = 11292,
  [SMALL_STATE(927)] = 11302,
  [SMALL_STATE(928)] = 11312,
  [SMALL_STATE(929)] = 11322,
  [SMALL_STATE(930)] = 11332,
  [SMALL_STATE(931)] = 11338,
  [SMALL_STATE(932)] = 11348,
  [SMALL_STATE(933)] = 11354,
  [SMALL_STATE(934)] = 11364,
  [SMALL_STATE(935)] = 11374,
  [SMALL_STATE(936)] = 11384,
  [SMALL_STATE(937)] = 11390,
  [SMALL_STATE(938)] = 11400,
  [SMALL_STATE(939)] = 11410,
  [SMALL_STATE(940)] = 11420,
  [SMALL_STATE(941)] = 11430,
  [SMALL_STATE(942)] = 11440,
  [SMALL_STATE(943)] = 11446,
  [SMALL_STATE(944)] = 11456,
  [SMALL_STATE(945)] = 11466,
  [SMALL_STATE(946)] = 11476,
  [SMALL_STATE(947)] = 11486,
  [SMALL_STATE(948)] = 11496,
  [SMALL_STATE(949)] = 11504,
  [SMALL_STATE(950)] = 11512,
  [SMALL_STATE(951)] = 11522,
  [SMALL_STATE(952)] = 11532,
  [SMALL_STATE(953)] = 11542,
  [SMALL_STATE(954)] = 11550,
  [SMALL_STATE(955)] = 11560,
  [SMALL_STATE(956)] = 11570,
  [SMALL_STATE(957)] = 11580,
  [SMALL_STATE(958)] = 11590,
  [SMALL_STATE(959)] = 11600,
  [SMALL_STATE(960)] = 11610,
  [SMALL_STATE(961)] = 11620,
  [SMALL_STATE(962)] = 11630,
  [SMALL_STATE(963)] = 11640,
  [SMALL_STATE(964)] = 11650,
  [SMALL_STATE(965)] = 11660,
  [SMALL_STATE(966)] = 11670,
  [SMALL_STATE(967)] = 11680,
  [SMALL_STATE(968)] = 11690,
  [SMALL_STATE(969)] = 11697,
  [SMALL_STATE(970)] = 11704,
  [SMALL_STATE(971)] = 11709,
  [SMALL_STATE(972)] = 11714,
  [SMALL_STATE(973)] = 11719,
  [SMALL_STATE(974)] = 11724,
  [SMALL_STATE(975)] = 11731,
  [SMALL_STATE(976)] = 11738,
  [SMALL_STATE(977)] = 11743,
  [SMALL_STATE(978)] = 11750,
  [SMALL_STATE(979)] = 11757,
  [SMALL_STATE(980)] = 11764,
  [SMALL_STATE(981)] = 11769,
  [SMALL_STATE(982)] = 11776,
  [SMALL_STATE(983)] = 11783,
  [SMALL_STATE(984)] = 11790,
  [SMALL_STATE(985)] = 11797,
  [SMALL_STATE(986)] = 11804,
  [SMALL_STATE(987)] = 11811,
  [SMALL_STATE(988)] = 11818,
  [SMALL_STATE(989)] = 11825,
  [SMALL_STATE(990)] = 11832,
  [SMALL_STATE(991)] = 11839,
  [SMALL_STATE(992)] = 11844,
  [SMALL_STATE(993)] = 11851,
  [SMALL_STATE(994)] = 11856,
  [SMALL_STATE(995)] = 11863,
  [SMALL_STATE(996)] = 11870,
  [SMALL_STATE(997)] = 11877,
  [SMALL_STATE(998)] = 11884,
  [SMALL_STATE(999)] = 11891,
  [SMALL_STATE(1000)] = 11898,
  [SMALL_STATE(1001)] = 11903,
  [SMALL_STATE(1002)] = 11910,
  [SMALL_STATE(1003)] = 11917,
  [SMALL_STATE(1004)] = 11924,
  [SMALL_STATE(1005)] = 11929,
  [SMALL_STATE(1006)] = 11936,
  [SMALL_STATE(1007)] = 11943,
  [SMALL_STATE(1008)] = 11948,
  [SMALL_STATE(1009)] = 11955,
  [SMALL_STATE(1010)] = 11962,
  [SMALL_STATE(1011)] = 11969,
  [SMALL_STATE(1012)] = 11974,
  [SMALL_STATE(1013)] = 11981,
  [SMALL_STATE(1014)] = 11988,
  [SMALL_STATE(1015)] = 11995,
  [SMALL_STATE(1016)] = 12002,
  [SMALL_STATE(1017)] = 12009,
  [SMALL_STATE(1018)] = 12014,
  [SMALL_STATE(1019)] = 12019,
  [SMALL_STATE(1020)] = 12024,
  [SMALL_STATE(1021)] = 12029,
  [SMALL_STATE(1022)] = 12036,
  [SMALL_STATE(1023)] = 12043,
  [SMALL_STATE(1024)] = 12050,
  [SMALL_STATE(1025)] = 12057,
  [SMALL_STATE(1026)] = 12064,
  [SMALL_STATE(1027)] = 12071,
  [SMALL_STATE(1028)] = 12078,
  [SMALL_STATE(1029)] = 12085,
  [SMALL_STATE(1030)] = 12092,
  [SMALL_STATE(1031)] = 12099,
  [SMALL_STATE(1032)] = 12106,
  [SMALL_STATE(1033)] = 12113,
  [SMALL_STATE(1034)] = 12120,
  [SMALL_STATE(1035)] = 12127,
  [SMALL_STATE(1036)] = 12134,
  [SMALL_STATE(1037)] = 12141,
  [SMALL_STATE(1038)] = 12148,
  [SMALL_STATE(1039)] = 12155,
  [SMALL_STATE(1040)] = 12162,
  [SMALL_STATE(1041)] = 12167,
  [SMALL_STATE(1042)] = 12172,
  [SMALL_STATE(1043)] = 12179,
  [SMALL_STATE(1044)] = 12186,
  [SMALL_STATE(1045)] = 12191,
  [SMALL_STATE(1046)] = 12198,
  [SMALL_STATE(1047)] = 12205,
  [SMALL_STATE(1048)] = 12212,
  [SMALL_STATE(1049)] = 12217,
  [SMALL_STATE(1050)] = 12224,
  [SMALL_STATE(1051)] = 12231,
  [SMALL_STATE(1052)] = 12238,
  [SMALL_STATE(1053)] = 12245,
  [SMALL_STATE(1054)] = 12252,
  [SMALL_STATE(1055)] = 12259,
  [SMALL_STATE(1056)] = 12266,
  [SMALL_STATE(1057)] = 12273,
  [SMALL_STATE(1058)] = 12280,
  [SMALL_STATE(1059)] = 12287,
  [SMALL_STATE(1060)] = 12294,
  [SMALL_STATE(1061)] = 12301,
  [SMALL_STATE(1062)] = 12308,
  [SMALL_STATE(1063)] = 12315,
  [SMALL_STATE(1064)] = 12322,
  [SMALL_STATE(1065)] = 12329,
  [SMALL_STATE(1066)] = 12336,
  [SMALL_STATE(1067)] = 12343,
  [SMALL_STATE(1068)] = 12350,
  [SMALL_STATE(1069)] = 12357,
  [SMALL_STATE(1070)] = 12364,
  [SMALL_STATE(1071)] = 12369,
  [SMALL_STATE(1072)] = 12376,
  [SMALL_STATE(1073)] = 12381,
  [SMALL_STATE(1074)] = 12385,
  [SMALL_STATE(1075)] = 12389,
  [SMALL_STATE(1076)] = 12393,
  [SMALL_STATE(1077)] = 12397,
  [SMALL_STATE(1078)] = 12401,
  [SMALL_STATE(1079)] = 12405,
  [SMALL_STATE(1080)] = 12409,
  [SMALL_STATE(1081)] = 12413,
  [SMALL_STATE(1082)] = 12417,
  [SMALL_STATE(1083)] = 12421,
  [SMALL_STATE(1084)] = 12425,
  [SMALL_STATE(1085)] = 12429,
  [SMALL_STATE(1086)] = 12433,
  [SMALL_STATE(1087)] = 12437,
  [SMALL_STATE(1088)] = 12441,
  [SMALL_STATE(1089)] = 12445,
  [SMALL_STATE(1090)] = 12449,
  [SMALL_STATE(1091)] = 12453,
  [SMALL_STATE(1092)] = 12457,
  [SMALL_STATE(1093)] = 12461,
  [SMALL_STATE(1094)] = 12465,
  [SMALL_STATE(1095)] = 12469,
  [SMALL_STATE(1096)] = 12473,
  [SMALL_STATE(1097)] = 12477,
  [SMALL_STATE(1098)] = 12481,
  [SMALL_STATE(1099)] = 12485,
  [SMALL_STATE(1100)] = 12489,
  [SMALL_STATE(1101)] = 12493,
  [SMALL_STATE(1102)] = 12497,
  [SMALL_STATE(1103)] = 12501,
  [SMALL_STATE(1104)] = 12505,
  [SMALL_STATE(1105)] = 12509,
  [SMALL_STATE(1106)] = 12513,
  [SMALL_STATE(1107)] = 12517,
  [SMALL_STATE(1108)] = 12521,
  [SMALL_STATE(1109)] = 12525,
  [SMALL_STATE(1110)] = 12529,
  [SMALL_STATE(1111)] = 12533,
  [SMALL_STATE(1112)] = 12537,
  [SMALL_STATE(1113)] = 12541,
  [SMALL_STATE(1114)] = 12545,
  [SMALL_STATE(1115)] = 12549,
  [SMALL_STATE(1116)] = 12553,
  [SMALL_STATE(1117)] = 12557,
  [SMALL_STATE(1118)] = 12561,
  [SMALL_STATE(1119)] = 12565,
  [SMALL_STATE(1120)] = 12569,
  [SMALL_STATE(1121)] = 12573,
  [SMALL_STATE(1122)] = 12577,
  [SMALL_STATE(1123)] = 12581,
  [SMALL_STATE(1124)] = 12585,
  [SMALL_STATE(1125)] = 12589,
  [SMALL_STATE(1126)] = 12593,
  [SMALL_STATE(1127)] = 12597,
  [SMALL_STATE(1128)] = 12601,
  [SMALL_STATE(1129)] = 12605,
  [SMALL_STATE(1130)] = 12609,
  [SMALL_STATE(1131)] = 12613,
  [SMALL_STATE(1132)] = 12617,
  [SMALL_STATE(1133)] = 12621,
  [SMALL_STATE(1134)] = 12625,
  [SMALL_STATE(1135)] = 12629,
  [SMALL_STATE(1136)] = 12633,
  [SMALL_STATE(1137)] = 12637,
  [SMALL_STATE(1138)] = 12641,
  [SMALL_STATE(1139)] = 12645,
  [SMALL_STATE(1140)] = 12649,
  [SMALL_STATE(1141)] = 12653,
  [SMALL_STATE(1142)] = 12657,
  [SMALL_STATE(1143)] = 12661,
  [SMALL_STATE(1144)] = 12665,
  [SMALL_STATE(1145)] = 12669,
  [SMALL_STATE(1146)] = 12673,
  [SMALL_STATE(1147)] = 12677,
  [SMALL_STATE(1148)] = 12681,
  [SMALL_STATE(1149)] = 12685,
  [SMALL_STATE(1150)] = 12689,
  [SMALL_STATE(1151)] = 12693,
  [SMALL_STATE(1152)] = 12697,
  [SMALL_STATE(1153)] = 12701,
  [SMALL_STATE(1154)] = 12705,
  [SMALL_STATE(1155)] = 12709,
  [SMALL_STATE(1156)] = 12713,
  [SMALL_STATE(1157)] = 12717,
  [SMALL_STATE(1158)] = 12721,
  [SMALL_STATE(1159)] = 12725,
  [SMALL_STATE(1160)] = 12729,
  [SMALL_STATE(1161)] = 12733,
  [SMALL_STATE(1162)] = 12737,
  [SMALL_STATE(1163)] = 12741,
  [SMALL_STATE(1164)] = 12745,
  [SMALL_STATE(1165)] = 12749,
  [SMALL_STATE(1166)] = 12753,
  [SMALL_STATE(1167)] = 12757,
  [SMALL_STATE(1168)] = 12761,
  [SMALL_STATE(1169)] = 12765,
  [SMALL_STATE(1170)] = 12769,
  [SMALL_STATE(1171)] = 12773,
  [SMALL_STATE(1172)] = 12777,
  [SMALL_STATE(1173)] = 12781,
  [SMALL_STATE(1174)] = 12785,
  [SMALL_STATE(1175)] = 12789,
  [SMALL_STATE(1176)] = 12793,
  [SMALL_STATE(1177)] = 12797,
  [SMALL_STATE(1178)] = 12801,
  [SMALL_STATE(1179)] = 12805,
  [SMALL_STATE(1180)] = 12809,
  [SMALL_STATE(1181)] = 12813,
  [SMALL_STATE(1182)] = 12817,
  [SMALL_STATE(1183)] = 12821,
  [SMALL_STATE(1184)] = 12825,
  [SMALL_STATE(1185)] = 12829,
  [SMALL_STATE(1186)] = 12833,
  [SMALL_STATE(1187)] = 12837,
  [SMALL_STATE(1188)] = 12841,
  [SMALL_STATE(1189)] = 12845,
  [SMALL_STATE(1190)] = 12849,
  [SMALL_STATE(1191)] = 12853,
  [SMALL_STATE(1192)] = 12857,
  [SMALL_STATE(1193)] = 12861,
  [SMALL_STATE(1194)] = 12865,
  [SMALL_STATE(1195)] = 12869,
  [SMALL_STATE(1196)] = 12873,
  [SMALL_STATE(1197)] = 12877,
  [SMALL_STATE(1198)] = 12881,
  [SMALL_STATE(1199)] = 12885,
  [SMALL_STATE(1200)] = 12889,
  [SMALL_STATE(1201)] = 12893,
  [SMALL_STATE(1202)] = 12897,
  [SMALL_STATE(1203)] = 12901,
  [SMALL_STATE(1204)] = 12905,
  [SMALL_STATE(1205)] = 12909,
  [SMALL_STATE(1206)] = 12913,
  [SMALL_STATE(1207)] = 12917,
  [SMALL_STATE(1208)] = 12921,
  [SMALL_STATE(1209)] = 12925,
  [SMALL_STATE(1210)] = 12929,
  [SMALL_STATE(1211)] = 12933,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1112),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(997),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1001),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1151),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1154),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1024),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1045),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1158),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1159),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1142),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(862),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1169),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(939),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1167),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1180),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1093),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1140),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1166),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1110),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(957),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1140),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1069),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(831),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1162),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1077),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1133),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(950),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 5, -2, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 85),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(76),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(160),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(4),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(988),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 79),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(998),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1165),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 2, -2, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 3, -2, 0),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(98),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(154),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 33), SHIFT_REPEAT(988),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 4, -2, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(108),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(156),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1008),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(985),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1180),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1055),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1150),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(138),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(156),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 91), SHIFT_REPEAT(3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 4),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 10),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(345),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1038),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(992),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1037),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1131),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(958),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(671),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 48),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(915),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(980),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(888),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1141),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(927),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 3, -2, 53),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 54),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 31),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 55),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 50),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 39),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 56),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 42),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 57),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 51),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 42),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 59),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 60),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 60),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 42),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 61),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_modified_run_tail, 1, -2, 0),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 0),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 2, 0, 36),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 48),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 4, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_named_binding, 4, -2, 67),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 68),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 69),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 1, 0, 70),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 71),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 73),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 39),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 59),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 75),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 59),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 51),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 42),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 59),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 46),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 3, 0, 76),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 78),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 5, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 78),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 73),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 75),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 59),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 80),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 81),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run_after_modifier, 4, 0, 72),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 53),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 6, 0, 53),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 2, -2, 0),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 86),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 87),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 53),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_reserved_binding, 7, 0, 53),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_async_await_operation, 3, -2, 0),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 89),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 92),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 93),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 94),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 89),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 96),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 97),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 92),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 98),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 99),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 100),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 96),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 101),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 102),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 99),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 103),
  [1123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 104),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1, 0, 0),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_type, 1, 0, 0),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 37),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [1192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 66),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_await_binding_word, 1, 0, 0),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(394),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1182),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(852),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [1251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(890),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 29),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 1, 0, 30),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(977),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 65),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 66),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 2, 0, 36),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 37),
  [1290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(918),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 37),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 38),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 39),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 40),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 41),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 42),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 40),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [1334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 40),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 44),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 79),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 74),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 50),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__run, 3, 0, 51),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_await_statement, 3, 0, 52),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 37),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 49),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 64),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [1404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 77),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(900),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1183),
  [1422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [1432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(911),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 46),
  [1438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 82),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 83),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 88),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 95),
  [1466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [1474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(787),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1191),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(857),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 31),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 32),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(970),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(973),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 34),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 35),
  [1558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 90),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 50),
  [1570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 90),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [1574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_name, 1, 0, 0),
  [1576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 35),
  [1598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 34),
  [1600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 45),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 46),
  [1606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 47),
  [1608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [1610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 49),
  [1626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [1630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [1632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [1636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(920),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(921),
  [1642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [1644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [1660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1148),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(699),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 72),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1196),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(790),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 51),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1124),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_runnable, 1, 0, 0),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 84),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 51),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1103),
  [1776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1188),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1, 0, 0),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 43),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1019),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1206),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1095),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1205),
  [1864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 58),
  [1886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1125),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1128),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1135),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1136),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 62),
  [1950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1143),
  [1958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [1988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [2000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [2004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2006] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [2010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [2014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [2018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [2024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [2026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [2028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [2030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [2032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [2034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [2036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [2038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [2042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [2044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [2046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [2048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [2050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__async_modifier, 1, 0, 28),
  [2052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [2054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [2058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [2060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(943),
  [2062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [2066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [2068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [2070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [2072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [2074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [2076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [2078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [2080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [2084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [2086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [2088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [2090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [2096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [2104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [2106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [2108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1020),
  [2110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [2112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [2114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [2116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [2120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [2122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [2124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [2126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [2134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [2140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [2142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [2150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [2154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [2160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [2170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [2174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [2176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [2178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [2180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [2182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [2184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [2192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [2194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [2196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [2198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [2202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [2210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [2212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [2216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [2218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [2220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [2222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [2224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [2228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [2230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [2232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 63),
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
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__dedent] = true,
    [ts_external_token_indented_raw_text] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
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
    [ts_external_token__reduce_text_start] = true,
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
