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
#define STATE_COUNT 1085
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 281
#define ALIAS_COUNT 0
#define TOKEN_COUNT 135
#define EXTERNAL_TOKEN_COUNT 28
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 98

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
  sym_flow_exec_keyword = 51,
  sym_flow_spawn_keyword = 52,
  sym_flow_let_keyword = 53,
  sym_flow_seek_keyword = 54,
  sym_flow_ask_keyword = 55,
  sym_flow_scatter_keyword = 56,
  sym_flow_storm_keyword = 57,
  sym_flow_generate_keyword = 58,
  sym_flow_gather_keyword = 59,
  sym_flow_settle_keyword = 60,
  sym_flow_reduce_keyword = 61,
  sym_flow_map_keyword = 62,
  sym_flow_keep_keyword = 63,
  sym_flow_drop_keyword = 64,
  sym_flow_sort_keyword = 65,
  sym_flow_rank_keyword = 66,
  sym_flow_repeat_keyword = 67,
  sym_flow_until_keyword = 68,
  sym_flow_from_keyword = 69,
  sym_flow_windowing_keyword = 70,
  sym_flow_using_keyword = 71,
  sym_flow_if_keyword = 72,
  sym_flow_by_keyword = 73,
  sym_flow_in_keyword = 74,
  sym_flow_lane_keyword = 75,
  sym_flow_ascending_keyword = 76,
  sym_flow_descending_keyword = 77,
  sym_flow_time_keyword = 78,
  sym_flow_times_keyword = 79,
  sym_flow_par_keyword = 80,
  sym_flow_first_keyword = 81,
  sym_flow_last_keyword = 82,
  sym_flow_top_keyword = 83,
  sym_flow_bottom_keyword = 84,
  sym_flow_think_keyword = 85,
  sym_flow_use_keyword = 86,
  sym_thunk_keyword = 87,
  sym_recall_keyword = 88,
  anon_sym_call = 89,
  anon_sym_do = 90,
  anon_sym_unfold = 91,
  anon_sym_each = 92,
  anon_sym_fold = 93,
  anon_sym_head = 94,
  anon_sym_tail = 95,
  sym_optional_marker = 96,
  sym_arrow = 97,
  sym_colon = 98,
  sym_lparen = 99,
  sym_rparen = 100,
  sym_comma = 101,
  sym_cap_kind = 102,
  sym_pascal_name = 103,
  sym_snake_name = 104,
  sym__snake_kebab_name = 105,
  sym_text_line = 106,
  sym_newline = 107,
  sym_blank_line = 108,
  sym__comment_start = 109,
  sym_plain_comment = 110,
  sym_shebang_comment = 111,
  sym__module_doc_start = 112,
  sym__item_doc_start = 113,
  sym__param_item_doc_start = 114,
  sym__comment_end = 115,
  sym__indent = 116,
  sym__dedent = 117,
  sym__line_start = 118,
  sym__directive_start = 119,
  sym__until_start = 120,
  sym__from_start = 121,
  sym__reduce_indent = 122,
  sym__reduce_text_start = 123,
  sym__text_indent = 124,
  sym__cap_text_start = 125,
  sym_indented_raw_text = 126,
  sym__flow_raw_text = 127,
  sym__agic_raw_text = 128,
  sym__error_line = 129,
  sym__exec_binding_start = 130,
  sym__collection_binding_start = 131,
  sym__spawn_binding_start = 132,
  sym__until_binding_start = 133,
  sym__variable_name = 134,
  sym_source_file = 135,
  sym_item = 136,
  sym_line_end = 137,
  sym_module_doc_comment = 138,
  sym_item_doc_comment = 139,
  sym_param_doc_tag = 140,
  sym__doc_space = 141,
  sym__trivia = 142,
  sym_with = 143,
  sym_type = 144,
  sym_base_type = 145,
  sym_builtin_type = 146,
  sym_user_type = 147,
  sym_type_suffix = 148,
  sym_struct = 149,
  sym_struct_name = 150,
  sym_struct_body = 151,
  sym_field = 152,
  sym_field_name = 153,
  sym_psyche = 154,
  sym_skill = 155,
  sym_service = 156,
  sym_prompt = 157,
  sym__cap_definition = 158,
  sym_cap_body = 159,
  sym__cap_text_body = 160,
  sym_task = 161,
  sym_chore = 162,
  sym_cap_name = 163,
  sym_cap_ref = 164,
  sym_job_name = 165,
  sym_job_body = 166,
  sym_property = 167,
  sym_property_key = 168,
  sym_property_value = 169,
  sym_instruct = 170,
  sym_instruct_name = 171,
  sym_instruct_body = 172,
  sym_context = 173,
  sym_context_name = 174,
  sym_context_body = 175,
  sym_text_inline = 176,
  sym_text_block = 177,
  sym_text_body = 178,
  sym_text_body_line = 179,
  sym_agic = 180,
  sym_agic_name = 181,
  sym_agic_body = 182,
  sym_params = 183,
  sym_param = 184,
  sym_param_name = 185,
  sym_flow = 186,
  sym_flow_name = 187,
  sym_flow_body = 188,
  sym_statements = 189,
  sym__flow_statement = 190,
  sym__flow_operation = 191,
  sym__collection_operation = 192,
  sym__bound_operation = 193,
  sym__invalid_collection_operation = 194,
  sym__invalid_spawn_operation = 195,
  sym_let_statement = 196,
  sym_exec_statement = 197,
  sym_spawn_statement = 198,
  sym__invalid_exec_binding = 199,
  sym__invalid_until_binding = 200,
  sym_run_statement = 201,
  sym_implicit_run_statement = 202,
  sym__implicit_run_line = 203,
  sym_seek_statement = 204,
  sym_ask_statement = 205,
  sym_generate_statement = 206,
  sym_reduce_statement = 207,
  sym__reduce_inline_line = 208,
  sym__reduce_line = 209,
  sym__reduce_inline_block = 210,
  sym__reduce_text_body = 211,
  sym__from_complement = 212,
  sym_map_statement = 213,
  sym_keep_statement = 214,
  sym_drop_statement = 215,
  sym_sort_statement = 216,
  sym__named_using_complement = 217,
  sym__using_space = 218,
  sym__named_if_complement = 219,
  sym__inline_if_complement = 220,
  sym__named_by_complement = 221,
  sym__inline_by_complement = 222,
  sym__runnable_complements = 223,
  sym__if_complements = 224,
  sym__by_complements = 225,
  sym__lanes_complement = 226,
  sym__order_complement = 227,
  sym_repeat_statement = 228,
  sym_repeat_body = 229,
  sym__repeat_statements = 230,
  sym__window_complement = 231,
  sym__repeat_count_complement = 232,
  sym_until_clause = 233,
  sym_invalid_flow_reserved_statement = 234,
  sym_inline_agic = 235,
  sym_inline_agic_body = 236,
  sym_position = 237,
  sym_runnable = 238,
  sym_agent = 239,
  sym_local_name = 240,
  sym_directive = 241,
  sym__query_directive_key = 242,
  sym__route_directive_key = 243,
  sym_directive_key = 244,
  sym_directive_op = 245,
  sym_route_value = 246,
  sym_recall_value = 247,
  sym_recall_source = 248,
  sym__directives = 249,
  sym_text_ref = 250,
  sym_messages = 251,
  sym_message = 252,
  sym_unroled_message = 253,
  sym__unroled_message_line = 254,
  sym_invalid_agic_reserved_message = 255,
  sym_role = 256,
  sym__pass_statement = 257,
  sym_flow_lanes_keyword = 258,
  sym__flow_reserved_word = 259,
  sym__collection_binding_word = 260,
  sym__agic_reserved_word = 261,
  sym_assign_operator = 262,
  sym_type_name = 263,
  aux_sym_source_file_repeat1 = 264,
  aux_sym_type_repeat1 = 265,
  aux_sym_struct_body_repeat1 = 266,
  aux_sym_struct_body_repeat2 = 267,
  aux_sym__cap_definition_repeat1 = 268,
  aux_sym__cap_text_body_repeat1 = 269,
  aux_sym_job_body_repeat1 = 270,
  aux_sym_text_body_repeat1 = 271,
  aux_sym_params_repeat1 = 272,
  aux_sym_statements_repeat1 = 273,
  aux_sym_implicit_run_statement_repeat1 = 274,
  aux_sym__repeat_statements_repeat1 = 275,
  aux_sym_route_value_repeat1 = 276,
  aux_sym_recall_value_repeat1 = 277,
  aux_sym__directives_repeat1 = 278,
  aux_sym_messages_repeat1 = 279,
  aux_sym_unroled_message_repeat1 = 280,
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
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_spawn_statement] = "spawn_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
  [sym__invalid_until_binding] = "invalid_flow_reserved_statement",
  [sym_run_statement] = "run_statement",
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
  [sym__using_space] = "_using_space",
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
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_spawn_statement] = sym_spawn_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
  [sym__invalid_until_binding] = sym_invalid_flow_reserved_statement,
  [sym_run_statement] = sym_run_statement,
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
  [sym__using_space] = sym__using_space,
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
  [sym__using_space] = {
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
  field_base = 4,
  field_body = 5,
  field_colon = 6,
  field_content = 7,
  field_count = 8,
  field_description = 9,
  field_from = 10,
  field_key = 11,
  field_keyword = 12,
  field_kind = 13,
  field_lanes = 14,
  field_name = 15,
  field_operator = 16,
  field_optional = 17,
  field_order = 18,
  field_param = 19,
  field_parameter = 20,
  field_params = 21,
  field_property = 22,
  field_reference = 23,
  field_return = 24,
  field_runnable = 25,
  field_selection = 26,
  field_side = 27,
  field_statement = 28,
  field_suffix = 29,
  field_target = 30,
  field_text = 31,
  field_type = 32,
  field_until = 33,
  field_value = 34,
  field_window = 35,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_agent] = "agent",
  [field_agic] = "agic",
  [field_arrow] = "arrow",
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
  [30] = {.index = 70, .length = 1},
  [31] = {.index = 71, .length = 2},
  [32] = {.index = 73, .length = 6},
  [33] = {.index = 79, .length = 6},
  [34] = {.index = 85, .length = 1},
  [35] = {.index = 86, .length = 1},
  [36] = {.index = 87, .length = 1},
  [37] = {.index = 88, .length = 4},
  [38] = {.index = 92, .length = 2},
  [39] = {.index = 94, .length = 1},
  [40] = {.index = 95, .length = 1},
  [41] = {.index = 96, .length = 1},
  [42] = {.index = 97, .length = 2},
  [43] = {.index = 99, .length = 1},
  [44] = {.index = 100, .length = 1},
  [45] = {.index = 101, .length = 1},
  [46] = {.index = 102, .length = 7},
  [47] = {.index = 109, .length = 1},
  [48] = {.index = 110, .length = 1},
  [49] = {.index = 111, .length = 2},
  [50] = {.index = 113, .length = 3},
  [51] = {.index = 116, .length = 1},
  [52] = {.index = 117, .length = 2},
  [53] = {.index = 119, .length = 2},
  [54] = {.index = 121, .length = 2},
  [55] = {.index = 123, .length = 1},
  [56] = {.index = 124, .length = 3},
  [57] = {.index = 127, .length = 1},
  [58] = {.index = 128, .length = 1},
  [59] = {.index = 129, .length = 2},
  [60] = {.index = 131, .length = 3},
  [61] = {.index = 131, .length = 3},
  [62] = {.index = 134, .length = 2},
  [63] = {.index = 136, .length = 2},
  [64] = {.index = 138, .length = 2},
  [65] = {.index = 140, .length = 1},
  [66] = {.index = 141, .length = 5},
  [67] = {.index = 146, .length = 1},
  [68] = {.index = 147, .length = 2},
  [69] = {.index = 149, .length = 3},
  [70] = {.index = 152, .length = 3},
  [71] = {.index = 155, .length = 1},
  [72] = {.index = 156, .length = 2},
  [73] = {.index = 158, .length = 2},
  [74] = {.index = 160, .length = 4},
  [75] = {.index = 164, .length = 1},
  [76] = {.index = 165, .length = 1},
  [77] = {.index = 166, .length = 1},
  [78] = {.index = 167, .length = 2},
  [79] = {.index = 169, .length = 1},
  [80] = {.index = 170, .length = 3},
  [81] = {.index = 173, .length = 3},
  [82] = {.index = 176, .length = 2},
  [83] = {.index = 178, .length = 1},
  [84] = {.index = 179, .length = 2},
  [85] = {.index = 181, .length = 2},
  [86] = {.index = 183, .length = 2},
  [87] = {.index = 185, .length = 1},
  [88] = {.index = 186, .length = 3},
  [89] = {.index = 189, .length = 2},
  [90] = {.index = 191, .length = 3},
  [91] = {.index = 194, .length = 2},
  [92] = {.index = 196, .length = 2},
  [93] = {.index = 198, .length = 2},
  [94] = {.index = 200, .length = 3},
  [95] = {.index = 203, .length = 3},
  [96] = {.index = 206, .length = 2},
  [97] = {.index = 208, .length = 3},
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
    {field_body, 2},
  [70] =
    {field_property, 2, .inherited = true},
  [71] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [73] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_name, 1},
    {field_return, 3},
  [79] =
    {field_arrow, 2},
    {field_body, 6},
    {field_colon, 4},
    {field_keyword, 0},
    {field_params, 1},
    {field_return, 3},
  [85] =
    {field_agic, 1},
  [86] =
    {field_target, 1},
  [87] =
    {field_statement, 1},
  [88] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [92] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [94] =
    {field_runnable, 0},
  [95] =
    {field_runnable, 0, .inherited = true},
  [96] =
    {field_order, 0},
  [97] =
    {field_body, 3},
    {field_property, 2, .inherited = true},
  [99] =
    {field_body, 3},
  [100] =
    {field_property, 3, .inherited = true},
  [101] =
    {field_content, 1, .inherited = true},
  [102] =
    {field_arrow, 3},
    {field_body, 7},
    {field_colon, 5},
    {field_keyword, 0},
    {field_name, 1},
    {field_params, 2},
    {field_return, 4},
  [109] =
    {field_body, 1},
  [110] =
    {field_runnable, 1},
  [111] =
    {field_agent, 1},
    {field_agic, 2},
  [113] =
    {field_count, 1},
    {field_lanes, 2, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [116] =
    {field_runnable, 1, .inherited = true},
  [117] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1},
  [119] =
    {field_count, 1},
    {field_side, 0},
  [121] =
    {field_lanes, 0, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [123] =
    {field_selection, 1},
  [124] =
    {field_lanes, 2, .inherited = true},
    {field_order, 1, .inherited = true},
    {field_runnable, 2, .inherited = true},
  [127] =
    {field_count, 0},
  [128] =
    {field_window, 1},
  [129] =
    {field_body, 4},
    {field_property, 3, .inherited = true},
  [131] =
    {field_key, 1},
    {field_operator, 2},
    {field_value, 3},
  [134] =
    {field_name, 1},
    {field_value, 3},
  [136] =
    {field_name, 1},
    {field_statement, 3},
  [138] =
    {field_agent, 1},
    {field_runnable, 2},
  [140] =
    {field_runnable, 2},
  [141] =
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_from, 2, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [146] =
    {field_lanes, 1},
  [147] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [149] =
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [152] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [155] =
    {field_statement, 0},
  [156] =
    {field_body, 4},
    {field_window, 1, .inherited = true},
  [158] =
    {field_body, 4},
    {field_count, 1, .inherited = true},
  [160] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [164] =
    {field_name, 1},
  [165] =
    {field_body, 4},
  [166] =
    {field_from, 3},
  [167] =
    {field_statement, 0},
    {field_statement, 1, .inherited = true},
  [169] =
    {field_statement, 1, .inherited = true},
  [170] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [173] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [176] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [178] =
    {field_target, 2},
  [179] =
    {field_statement, 0, .inherited = true},
    {field_statement, 1, .inherited = true},
  [181] =
    {field_statement, 1, .inherited = true},
    {field_until, 2},
  [183] =
    {field_statement, 2, .inherited = true},
    {field_until, 1},
  [185] =
    {field_statement, 2, .inherited = true},
  [186] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [189] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [191] =
    {field_statement, 1, .inherited = true},
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [194] =
    {field_statement, 3, .inherited = true},
    {field_until, 1},
  [196] =
    {field_statement, 2, .inherited = true},
    {field_until, 3},
  [198] =
    {field_statement, 3, .inherited = true},
    {field_until, 2},
  [200] =
    {field_statement, 1, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [203] =
    {field_statement, 2, .inherited = true},
    {field_statement, 4, .inherited = true},
    {field_until, 3},
  [206] =
    {field_statement, 4, .inherited = true},
    {field_until, 2},
  [208] =
    {field_statement, 2, .inherited = true},
    {field_statement, 5, .inherited = true},
    {field_until, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [60] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
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
  [56] = 43,
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
  [72] = 57,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 69,
  [78] = 78,
  [79] = 61,
  [80] = 75,
  [81] = 78,
  [82] = 73,
  [83] = 83,
  [84] = 63,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 76,
  [95] = 95,
  [96] = 74,
  [97] = 97,
  [98] = 64,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 66,
  [104] = 67,
  [105] = 71,
  [106] = 106,
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
  [117] = 117,
  [118] = 85,
  [119] = 119,
  [120] = 120,
  [121] = 117,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 59,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 107,
  [131] = 107,
  [132] = 107,
  [133] = 107,
  [134] = 107,
  [135] = 107,
  [136] = 107,
  [137] = 107,
  [138] = 102,
  [139] = 107,
  [140] = 114,
  [141] = 87,
  [142] = 91,
  [143] = 143,
  [144] = 86,
  [145] = 145,
  [146] = 83,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 148,
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
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 172,
  [178] = 178,
  [179] = 179,
  [180] = 170,
  [181] = 173,
  [182] = 182,
  [183] = 178,
  [184] = 184,
  [185] = 184,
  [186] = 99,
  [187] = 187,
  [188] = 171,
  [189] = 149,
  [190] = 150,
  [191] = 191,
  [192] = 155,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 187,
  [200] = 101,
  [201] = 198,
  [202] = 202,
  [203] = 95,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
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
  [234] = 164,
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
  [297] = 95,
  [298] = 291,
  [299] = 292,
  [300] = 293,
  [301] = 294,
  [302] = 295,
  [303] = 204,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 95,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 291,
  [314] = 292,
  [315] = 293,
  [316] = 294,
  [317] = 295,
  [318] = 204,
  [319] = 95,
  [320] = 320,
  [321] = 321,
  [322] = 304,
  [323] = 306,
  [324] = 291,
  [325] = 292,
  [326] = 293,
  [327] = 294,
  [328] = 295,
  [329] = 204,
  [330] = 304,
  [331] = 306,
  [332] = 304,
  [333] = 306,
  [334] = 334,
  [335] = 211,
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
  [347] = 274,
  [348] = 312,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 341,
  [354] = 354,
  [355] = 355,
  [356] = 345,
  [357] = 357,
  [358] = 351,
  [359] = 352,
  [360] = 355,
  [361] = 361,
  [362] = 197,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 163,
  [368] = 169,
  [369] = 166,
  [370] = 334,
  [371] = 357,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 266,
  [377] = 95,
  [378] = 339,
  [379] = 340,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 354,
  [384] = 336,
  [385] = 385,
  [386] = 211,
  [387] = 336,
  [388] = 388,
  [389] = 211,
  [390] = 336,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 363,
  [396] = 364,
  [397] = 381,
  [398] = 398,
  [399] = 365,
  [400] = 232,
  [401] = 366,
  [402] = 210,
  [403] = 403,
  [404] = 167,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 373,
  [411] = 321,
  [412] = 391,
  [413] = 413,
  [414] = 14,
  [415] = 282,
  [416] = 416,
  [417] = 217,
  [418] = 218,
  [419] = 219,
  [420] = 420,
  [421] = 220,
  [422] = 221,
  [423] = 423,
  [424] = 424,
  [425] = 222,
  [426] = 223,
  [427] = 224,
  [428] = 225,
  [429] = 226,
  [430] = 227,
  [431] = 228,
  [432] = 229,
  [433] = 230,
  [434] = 231,
  [435] = 435,
  [436] = 235,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 236,
  [445] = 237,
  [446] = 238,
  [447] = 239,
  [448] = 240,
  [449] = 241,
  [450] = 450,
  [451] = 242,
  [452] = 243,
  [453] = 244,
  [454] = 245,
  [455] = 246,
  [456] = 247,
  [457] = 248,
  [458] = 249,
  [459] = 250,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 251,
  [465] = 252,
  [466] = 253,
  [467] = 467,
  [468] = 254,
  [469] = 469,
  [470] = 470,
  [471] = 255,
  [472] = 472,
  [473] = 473,
  [474] = 256,
  [475] = 475,
  [476] = 257,
  [477] = 258,
  [478] = 260,
  [479] = 261,
  [480] = 480,
  [481] = 262,
  [482] = 263,
  [483] = 264,
  [484] = 265,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 267,
  [489] = 489,
  [490] = 268,
  [491] = 269,
  [492] = 270,
  [493] = 271,
  [494] = 272,
  [495] = 495,
  [496] = 496,
  [497] = 273,
  [498] = 498,
  [499] = 275,
  [500] = 276,
  [501] = 277,
  [502] = 502,
  [503] = 278,
  [504] = 279,
  [505] = 280,
  [506] = 281,
  [507] = 283,
  [508] = 284,
  [509] = 285,
  [510] = 286,
  [511] = 287,
  [512] = 288,
  [513] = 289,
  [514] = 290,
  [515] = 305,
  [516] = 307,
  [517] = 308,
  [518] = 518,
  [519] = 519,
  [520] = 310,
  [521] = 521,
  [522] = 311,
  [523] = 523,
  [524] = 524,
  [525] = 294,
  [526] = 295,
  [527] = 310,
  [528] = 204,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 409,
  [543] = 413,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 305,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 375,
  [557] = 380,
  [558] = 382,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 296,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 311,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 14,
  [579] = 579,
  [580] = 304,
  [581] = 306,
  [582] = 582,
  [583] = 583,
  [584] = 584,
  [585] = 291,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 590,
  [591] = 398,
  [592] = 403,
  [593] = 405,
  [594] = 291,
  [595] = 292,
  [596] = 293,
  [597] = 294,
  [598] = 295,
  [599] = 204,
  [600] = 304,
  [601] = 306,
  [602] = 291,
  [603] = 292,
  [604] = 293,
  [605] = 294,
  [606] = 295,
  [607] = 204,
  [608] = 216,
  [609] = 304,
  [610] = 306,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 547,
  [616] = 307,
  [617] = 406,
  [618] = 618,
  [619] = 308,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 407,
  [624] = 624,
  [625] = 408,
  [626] = 626,
  [627] = 205,
  [628] = 628,
  [629] = 292,
  [630] = 206,
  [631] = 207,
  [632] = 624,
  [633] = 208,
  [634] = 559,
  [635] = 416,
  [636] = 636,
  [637] = 293,
  [638] = 467,
  [639] = 469,
  [640] = 212,
  [641] = 470,
  [642] = 642,
  [643] = 643,
  [644] = 486,
  [645] = 645,
  [646] = 646,
  [647] = 647,
  [648] = 547,
  [649] = 649,
  [650] = 547,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 618,
  [655] = 460,
  [656] = 656,
  [657] = 551,
  [658] = 552,
  [659] = 579,
  [660] = 582,
  [661] = 661,
  [662] = 662,
  [663] = 618,
  [664] = 460,
  [665] = 618,
  [666] = 460,
  [667] = 535,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 213,
  [672] = 214,
  [673] = 215,
  [674] = 622,
  [675] = 291,
  [676] = 676,
  [677] = 677,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 684,
  [685] = 685,
  [686] = 686,
  [687] = 687,
  [688] = 688,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 692,
  [693] = 693,
  [694] = 676,
  [695] = 695,
  [696] = 696,
  [697] = 697,
  [698] = 698,
  [699] = 699,
  [700] = 700,
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
  [712] = 305,
  [713] = 307,
  [714] = 308,
  [715] = 310,
  [716] = 311,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 567,
  [722] = 722,
  [723] = 723,
  [724] = 304,
  [725] = 306,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 571,
  [731] = 572,
  [732] = 732,
  [733] = 304,
  [734] = 306,
  [735] = 735,
  [736] = 292,
  [737] = 293,
  [738] = 294,
  [739] = 295,
  [740] = 204,
  [741] = 291,
  [742] = 292,
  [743] = 293,
  [744] = 294,
  [745] = 295,
  [746] = 204,
  [747] = 747,
  [748] = 748,
  [749] = 749,
  [750] = 750,
  [751] = 684,
  [752] = 752,
  [753] = 753,
  [754] = 754,
  [755] = 755,
  [756] = 291,
  [757] = 757,
  [758] = 723,
  [759] = 726,
  [760] = 727,
  [761] = 292,
  [762] = 762,
  [763] = 293,
  [764] = 420,
  [765] = 294,
  [766] = 295,
  [767] = 204,
  [768] = 304,
  [769] = 555,
  [770] = 762,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 771,
  [775] = 772,
  [776] = 776,
  [777] = 776,
  [778] = 778,
  [779] = 779,
  [780] = 780,
  [781] = 561,
  [782] = 562,
  [783] = 728,
  [784] = 690,
  [785] = 785,
  [786] = 681,
  [787] = 682,
  [788] = 718,
  [789] = 789,
  [790] = 688,
  [791] = 692,
  [792] = 792,
  [793] = 699,
  [794] = 306,
  [795] = 749,
  [796] = 752,
  [797] = 778,
  [798] = 798,
  [799] = 626,
  [800] = 628,
  [801] = 683,
  [802] = 802,
  [803] = 691,
  [804] = 693,
  [805] = 695,
  [806] = 696,
  [807] = 807,
  [808] = 808,
  [809] = 709,
  [810] = 785,
  [811] = 811,
  [812] = 722,
  [813] = 813,
  [814] = 814,
  [815] = 684,
  [816] = 530,
  [817] = 684,
  [818] = 818,
  [819] = 819,
  [820] = 14,
  [821] = 821,
  [822] = 779,
  [823] = 750,
  [824] = 789,
  [825] = 729,
  [826] = 732,
  [827] = 780,
  [828] = 798,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 832,
  [833] = 754,
  [834] = 834,
  [835] = 835,
  [836] = 792,
  [837] = 837,
  [838] = 754,
  [839] = 754,
  [840] = 814,
  [841] = 841,
  [842] = 842,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 393,
  [847] = 847,
  [848] = 848,
  [849] = 209,
  [850] = 850,
  [851] = 851,
  [852] = 852,
  [853] = 853,
  [854] = 854,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 858,
  [859] = 859,
  [860] = 860,
  [861] = 861,
  [862] = 862,
  [863] = 863,
  [864] = 864,
  [865] = 856,
  [866] = 866,
  [867] = 867,
  [868] = 868,
  [869] = 869,
  [870] = 870,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 873,
  [875] = 844,
  [876] = 876,
  [877] = 877,
  [878] = 878,
  [879] = 879,
  [880] = 880,
  [881] = 881,
  [882] = 843,
  [883] = 844,
  [884] = 884,
  [885] = 843,
  [886] = 844,
  [887] = 887,
  [888] = 843,
  [889] = 844,
  [890] = 890,
  [891] = 843,
  [892] = 844,
  [893] = 306,
  [894] = 894,
  [895] = 844,
  [896] = 896,
  [897] = 843,
  [898] = 844,
  [899] = 843,
  [900] = 844,
  [901] = 901,
  [902] = 843,
  [903] = 844,
  [904] = 879,
  [905] = 905,
  [906] = 906,
  [907] = 304,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 854,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 845,
  [916] = 851,
  [917] = 917,
  [918] = 870,
  [919] = 919,
  [920] = 920,
  [921] = 910,
  [922] = 922,
  [923] = 879,
  [924] = 924,
  [925] = 879,
  [926] = 926,
  [927] = 879,
  [928] = 879,
  [929] = 879,
  [930] = 879,
  [931] = 879,
  [932] = 879,
  [933] = 881,
  [934] = 926,
  [935] = 894,
  [936] = 843,
  [937] = 850,
  [938] = 938,
  [939] = 939,
  [940] = 914,
  [941] = 843,
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
  [953] = 942,
  [954] = 947,
  [955] = 951,
  [956] = 956,
  [957] = 957,
  [958] = 841,
  [959] = 14,
  [960] = 960,
  [961] = 961,
  [962] = 962,
  [963] = 963,
  [964] = 942,
  [965] = 947,
  [966] = 951,
  [967] = 956,
  [968] = 968,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 949,
  [974] = 974,
  [975] = 942,
  [976] = 947,
  [977] = 951,
  [978] = 956,
  [979] = 979,
  [980] = 980,
  [981] = 956,
  [982] = 982,
  [983] = 947,
  [984] = 951,
  [985] = 956,
  [986] = 951,
  [987] = 987,
  [988] = 988,
  [989] = 942,
  [990] = 947,
  [991] = 951,
  [992] = 956,
  [993] = 942,
  [994] = 994,
  [995] = 995,
  [996] = 942,
  [997] = 947,
  [998] = 951,
  [999] = 956,
  [1000] = 1000,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 942,
  [1004] = 947,
  [1005] = 951,
  [1006] = 956,
  [1007] = 1007,
  [1008] = 1008,
  [1009] = 1009,
  [1010] = 942,
  [1011] = 947,
  [1012] = 951,
  [1013] = 956,
  [1014] = 956,
  [1015] = 1015,
  [1016] = 1016,
  [1017] = 948,
  [1018] = 1018,
  [1019] = 1019,
  [1020] = 1020,
  [1021] = 1021,
  [1022] = 1022,
  [1023] = 564,
  [1024] = 1024,
  [1025] = 963,
  [1026] = 1026,
  [1027] = 1027,
  [1028] = 1028,
  [1029] = 1029,
  [1030] = 1030,
  [1031] = 1031,
  [1032] = 1027,
  [1033] = 1033,
  [1034] = 942,
  [1035] = 1028,
  [1036] = 1036,
  [1037] = 979,
  [1038] = 956,
  [1039] = 1039,
  [1040] = 1024,
  [1041] = 1041,
  [1042] = 1042,
  [1043] = 1041,
  [1044] = 995,
  [1045] = 957,
  [1046] = 1046,
  [1047] = 947,
  [1048] = 1048,
  [1049] = 1049,
  [1050] = 1050,
  [1051] = 1051,
  [1052] = 1052,
  [1053] = 1053,
  [1054] = 1054,
  [1055] = 1055,
  [1056] = 945,
  [1057] = 1057,
  [1058] = 943,
  [1059] = 1059,
  [1060] = 1060,
  [1061] = 1061,
  [1062] = 1062,
  [1063] = 988,
  [1064] = 1064,
  [1065] = 1065,
  [1066] = 1066,
  [1067] = 1067,
  [1068] = 1068,
  [1069] = 1069,
  [1070] = 1048,
  [1071] = 1071,
  [1072] = 1072,
  [1073] = 1073,
  [1074] = 1074,
  [1075] = 1054,
  [1076] = 1072,
  [1077] = 1036,
  [1078] = 1078,
  [1079] = 1030,
  [1080] = 1031,
  [1081] = 946,
  [1082] = 1033,
  [1083] = 1083,
  [1084] = 1074,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(290);
      ADVANCE_MAP(
        '#', 291,
        '(', 615,
        ')', 616,
        '*', 541,
        '+', 319,
        ',', 617,
        '-', 320,
        '0', 302,
        '1', 303,
        ':', 614,
        '=', 316,
        '?', 612,
        '@', 468,
        'B', 631,
        'J', 634,
        'N', 637,
        'P', 619,
        'T', 622,
        '[', 321,
        '_', 301,
        'a', 396,
        'b', 456,
        'c', 322,
        'd', 363,
        'e', 323,
        'f', 324,
        'g', 329,
        'h', 332,
        'i', 387,
        'k', 376,
        'l', 328,
        'm', 327,
        'n', 383,
        'p', 325,
        'r', 333,
        's', 346,
        't', 326,
        'u', 437,
        'w', 401,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(521);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 291,
        '(', 615,
        ')', 616,
        '*', 541,
        '+', 19,
        ',', 617,
        '-', 20,
        '0', 305,
        '1', 304,
        ':', 614,
        '=', 316,
        '?', 612,
        '@', 216,
        'B', 631,
        'J', 634,
        'N', 637,
        'P', 619,
        'T', 622,
        '[', 22,
        '_', 301,
        'a', 119,
        'b', 199,
        'c', 23,
        'd', 85,
        'e', 24,
        'f', 25,
        'g', 32,
        'h', 35,
        'i', 108,
        'k', 93,
        'l', 31,
        'm', 30,
        'n', 102,
        'p', 26,
        'r', 36,
        's', 53,
        't', 27,
        'u', 180,
        'w', 127,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(639);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(653);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 291,
        '-', 21,
        ':', 614,
        'b', 281,
        'f', 129,
        'i', 107,
        'l', 49,
        'p', 234,
        's', 106,
        'u', 245,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'w') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(654);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 291,
        'a', 725,
        'd', 721,
        'g', 678,
        'k', 682,
        'm', 664,
        'r', 679,
        's', 685,
        '\t', 656,
        ' ', 656,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 291,
        'a', 725,
        'd', 721,
        'k', 682,
        'r', 687,
        's', 686,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(615);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(541);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == 'n') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(613);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(300);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'h') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'f') ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        'a', 118,
        'c', 122,
        'd', 94,
        'f', 160,
        'i', 198,
        'l', 47,
        'p', 233,
        's', 101,
        't', 40,
        'w', 139,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(639);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(557);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'k') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'k') ADVANCE(567);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(255);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(610);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(641);
      if (lookahead == 'n') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(583);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(592);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(128);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(608);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(545);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(578);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(566);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(558);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(601);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(603);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(605);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(611);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(550);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(569);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(600);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(562);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(585);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(599);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(575);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 218:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(598);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(553);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(554);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 274:
      if (lookahead == 'v') ADVANCE(140);
      END_STATE();
    case 275:
      if (lookahead == 'v') ADVANCE(142);
      END_STATE();
    case 276:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 277:
      if (lookahead == 'w') ADVANCE(560);
      END_STATE();
    case 278:
      if (lookahead == 'w') ADVANCE(179);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 280:
      if (lookahead == 'x') ADVANCE(253);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(585);
      END_STATE();
    case 282:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 283:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 284:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 285:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 287:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(287);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 288:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 289:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__doc_space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(303);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '1') ADVANCE(304);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'h') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == 'x') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(403);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'k') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'k') ADVANCE(567);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'd') ADVANCE(513);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(390);
      if (lookahead == 'o') ADVANCE(606);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(418);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 't') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(365);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(388);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == 's') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_spawn_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(595);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'a') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'f') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'l') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'o') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 't') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'i') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '-') ADVANCE(663);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(653);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '0') ADVANCE(305);
      if (lookahead == '1') ADVANCE(304);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == 'w') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(654);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == ':') ADVANCE(614);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 291,
        'a', 725,
        'd', 721,
        'g', 678,
        'k', 682,
        'm', 664,
        'r', 679,
        's', 685,
        '\t', 656,
        ' ', 656,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 291,
        'a', 725,
        'd', 721,
        'k', 682,
        'r', 687,
        's', 686,
        '\t', 657,
        ' ', 657,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'a') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(696);
      if (lookahead == 'i') ADVANCE(691);
      if (lookahead == 'l') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(661);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(740);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead == 'p') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead == 'u') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead == 'p') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead == 'o') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'u') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(740);
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
  [5] = {.lex_state = 8, .external_lex_state = 4},
  [6] = {.lex_state = 8, .external_lex_state = 4},
  [7] = {.lex_state = 1, .external_lex_state = 5},
  [8] = {.lex_state = 1, .external_lex_state = 5},
  [9] = {.lex_state = 9, .external_lex_state = 6},
  [10] = {.lex_state = 9, .external_lex_state = 6},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 9, .external_lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 11, .external_lex_state = 7},
  [18] = {.lex_state = 11, .external_lex_state = 7},
  [19] = {.lex_state = 11, .external_lex_state = 7},
  [20] = {.lex_state = 11, .external_lex_state = 7},
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
  [43] = {.lex_state = 6, .external_lex_state = 7},
  [44] = {.lex_state = 0, .external_lex_state = 8},
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
  [84] = {.lex_state = 4, .external_lex_state = 7},
  [85] = {.lex_state = 0, .external_lex_state = 10},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 13},
  [89] = {.lex_state = 0, .external_lex_state = 9},
  [90] = {.lex_state = 0, .external_lex_state = 9},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 9},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 14},
  [95] = {.lex_state = 0, .external_lex_state = 15},
  [96] = {.lex_state = 0, .external_lex_state = 14},
  [97] = {.lex_state = 0, .external_lex_state = 15},
  [98] = {.lex_state = 0, .external_lex_state = 14},
  [99] = {.lex_state = 0, .external_lex_state = 10},
  [100] = {.lex_state = 0, .external_lex_state = 16},
  [101] = {.lex_state = 0, .external_lex_state = 10},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 9},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 13},
  [107] = {.lex_state = 0, .external_lex_state = 17},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 16},
  [110] = {.lex_state = 12, .external_lex_state = 7},
  [111] = {.lex_state = 12, .external_lex_state = 7},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 15},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 15},
  [117] = {.lex_state = 0, .external_lex_state = 18},
  [118] = {.lex_state = 0, .external_lex_state = 19},
  [119] = {.lex_state = 0, .external_lex_state = 9},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 0, .external_lex_state = 18},
  [122] = {.lex_state = 0, .external_lex_state = 9},
  [123] = {.lex_state = 0, .external_lex_state = 9},
  [124] = {.lex_state = 0, .external_lex_state = 16},
  [125] = {.lex_state = 0, .external_lex_state = 13},
  [126] = {.lex_state = 0, .external_lex_state = 19},
  [127] = {.lex_state = 0, .external_lex_state = 13},
  [128] = {.lex_state = 12, .external_lex_state = 7},
  [129] = {.lex_state = 0, .external_lex_state = 15},
  [130] = {.lex_state = 0, .external_lex_state = 17},
  [131] = {.lex_state = 0, .external_lex_state = 17},
  [132] = {.lex_state = 0, .external_lex_state = 17},
  [133] = {.lex_state = 0, .external_lex_state = 17},
  [134] = {.lex_state = 0, .external_lex_state = 17},
  [135] = {.lex_state = 0, .external_lex_state = 17},
  [136] = {.lex_state = 0, .external_lex_state = 17},
  [137] = {.lex_state = 0, .external_lex_state = 17},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 17},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 12, .external_lex_state = 7},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 9},
  [146] = {.lex_state = 0, .external_lex_state = 19},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 12, .external_lex_state = 7},
  [149] = {.lex_state = 0, .external_lex_state = 20},
  [150] = {.lex_state = 0, .external_lex_state = 20},
  [151] = {.lex_state = 0, .external_lex_state = 20},
  [152] = {.lex_state = 12, .external_lex_state = 7},
  [153] = {.lex_state = 0, .external_lex_state = 20},
  [154] = {.lex_state = 0, .external_lex_state = 20},
  [155] = {.lex_state = 0, .external_lex_state = 20},
  [156] = {.lex_state = 0, .external_lex_state = 20},
  [157] = {.lex_state = 0, .external_lex_state = 20},
  [158] = {.lex_state = 0, .external_lex_state = 20},
  [159] = {.lex_state = 12, .external_lex_state = 7},
  [160] = {.lex_state = 0, .external_lex_state = 16},
  [161] = {.lex_state = 0, .external_lex_state = 20},
  [162] = {.lex_state = 12, .external_lex_state = 7},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 10},
  [165] = {.lex_state = 0, .external_lex_state = 20},
  [166] = {.lex_state = 0, .external_lex_state = 10},
  [167] = {.lex_state = 0, .external_lex_state = 10},
  [168] = {.lex_state = 0, .external_lex_state = 20},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 12, .external_lex_state = 7},
  [171] = {.lex_state = 12, .external_lex_state = 7},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 20},
  [175] = {.lex_state = 0, .external_lex_state = 20},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 12, .external_lex_state = 7},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 12, .external_lex_state = 7},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 20},
  [183] = {.lex_state = 12, .external_lex_state = 7},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0, .external_lex_state = 19},
  [187] = {.lex_state = 0, .external_lex_state = 20},
  [188] = {.lex_state = 12, .external_lex_state = 7},
  [189] = {.lex_state = 0, .external_lex_state = 20},
  [190] = {.lex_state = 0, .external_lex_state = 20},
  [191] = {.lex_state = 0, .external_lex_state = 20},
  [192] = {.lex_state = 0, .external_lex_state = 20},
  [193] = {.lex_state = 0, .external_lex_state = 20},
  [194] = {.lex_state = 0, .external_lex_state = 20},
  [195] = {.lex_state = 0, .external_lex_state = 20},
  [196] = {.lex_state = 0, .external_lex_state = 16},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 10, .external_lex_state = 7},
  [199] = {.lex_state = 0, .external_lex_state = 20},
  [200] = {.lex_state = 0, .external_lex_state = 19},
  [201] = {.lex_state = 10, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 20},
  [203] = {.lex_state = 0, .external_lex_state = 9},
  [204] = {.lex_state = 0, .external_lex_state = 15},
  [205] = {.lex_state = 0, .external_lex_state = 12},
  [206] = {.lex_state = 0, .external_lex_state = 12},
  [207] = {.lex_state = 0, .external_lex_state = 12},
  [208] = {.lex_state = 0, .external_lex_state = 12},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 0, .external_lex_state = 21},
  [211] = {.lex_state = 0, .external_lex_state = 22},
  [212] = {.lex_state = 0, .external_lex_state = 12},
  [213] = {.lex_state = 0, .external_lex_state = 12},
  [214] = {.lex_state = 0, .external_lex_state = 12},
  [215] = {.lex_state = 0, .external_lex_state = 12},
  [216] = {.lex_state = 0, .external_lex_state = 12},
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
  [232] = {.lex_state = 0, .external_lex_state = 21},
  [233] = {.lex_state = 0, .external_lex_state = 23},
  [234] = {.lex_state = 0, .external_lex_state = 19},
  [235] = {.lex_state = 0, .external_lex_state = 12},
  [236] = {.lex_state = 0, .external_lex_state = 12},
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
  [257] = {.lex_state = 0, .external_lex_state = 12},
  [258] = {.lex_state = 0, .external_lex_state = 12},
  [259] = {.lex_state = 0, .external_lex_state = 22},
  [260] = {.lex_state = 0, .external_lex_state = 12},
  [261] = {.lex_state = 0, .external_lex_state = 12},
  [262] = {.lex_state = 0, .external_lex_state = 12},
  [263] = {.lex_state = 0, .external_lex_state = 12},
  [264] = {.lex_state = 0, .external_lex_state = 12},
  [265] = {.lex_state = 0, .external_lex_state = 12},
  [266] = {.lex_state = 0, .external_lex_state = 24},
  [267] = {.lex_state = 0, .external_lex_state = 12},
  [268] = {.lex_state = 0, .external_lex_state = 12},
  [269] = {.lex_state = 0, .external_lex_state = 12},
  [270] = {.lex_state = 0, .external_lex_state = 12},
  [271] = {.lex_state = 0, .external_lex_state = 12},
  [272] = {.lex_state = 0, .external_lex_state = 12},
  [273] = {.lex_state = 0, .external_lex_state = 12},
  [274] = {.lex_state = 15},
  [275] = {.lex_state = 0, .external_lex_state = 12},
  [276] = {.lex_state = 0, .external_lex_state = 12},
  [277] = {.lex_state = 0, .external_lex_state = 12},
  [278] = {.lex_state = 0, .external_lex_state = 12},
  [279] = {.lex_state = 0, .external_lex_state = 12},
  [280] = {.lex_state = 0, .external_lex_state = 12},
  [281] = {.lex_state = 0, .external_lex_state = 12},
  [282] = {.lex_state = 0, .external_lex_state = 12},
  [283] = {.lex_state = 0, .external_lex_state = 12},
  [284] = {.lex_state = 0, .external_lex_state = 12},
  [285] = {.lex_state = 0, .external_lex_state = 12},
  [286] = {.lex_state = 0, .external_lex_state = 12},
  [287] = {.lex_state = 0, .external_lex_state = 12},
  [288] = {.lex_state = 0, .external_lex_state = 12},
  [289] = {.lex_state = 0, .external_lex_state = 12},
  [290] = {.lex_state = 0, .external_lex_state = 12},
  [291] = {.lex_state = 0, .external_lex_state = 15},
  [292] = {.lex_state = 0, .external_lex_state = 15},
  [293] = {.lex_state = 0, .external_lex_state = 15},
  [294] = {.lex_state = 0, .external_lex_state = 15},
  [295] = {.lex_state = 0, .external_lex_state = 15},
  [296] = {.lex_state = 0, .external_lex_state = 12},
  [297] = {.lex_state = 0, .external_lex_state = 24},
  [298] = {.lex_state = 0, .external_lex_state = 8},
  [299] = {.lex_state = 0, .external_lex_state = 8},
  [300] = {.lex_state = 0, .external_lex_state = 8},
  [301] = {.lex_state = 0, .external_lex_state = 8},
  [302] = {.lex_state = 0, .external_lex_state = 8},
  [303] = {.lex_state = 0, .external_lex_state = 8},
  [304] = {.lex_state = 0, .external_lex_state = 15},
  [305] = {.lex_state = 0, .external_lex_state = 12},
  [306] = {.lex_state = 0, .external_lex_state = 15},
  [307] = {.lex_state = 0, .external_lex_state = 12},
  [308] = {.lex_state = 0, .external_lex_state = 12},
  [309] = {.lex_state = 0, .external_lex_state = 23},
  [310] = {.lex_state = 0, .external_lex_state = 12},
  [311] = {.lex_state = 0, .external_lex_state = 12},
  [312] = {.lex_state = 15},
  [313] = {.lex_state = 0, .external_lex_state = 11},
  [314] = {.lex_state = 0, .external_lex_state = 11},
  [315] = {.lex_state = 0, .external_lex_state = 11},
  [316] = {.lex_state = 0, .external_lex_state = 11},
  [317] = {.lex_state = 0, .external_lex_state = 11},
  [318] = {.lex_state = 0, .external_lex_state = 11},
  [319] = {.lex_state = 0, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 20},
  [321] = {.lex_state = 0, .external_lex_state = 20},
  [322] = {.lex_state = 0, .external_lex_state = 11},
  [323] = {.lex_state = 0, .external_lex_state = 11},
  [324] = {.lex_state = 0, .external_lex_state = 12},
  [325] = {.lex_state = 0, .external_lex_state = 12},
  [326] = {.lex_state = 0, .external_lex_state = 12},
  [327] = {.lex_state = 0, .external_lex_state = 12},
  [328] = {.lex_state = 0, .external_lex_state = 12},
  [329] = {.lex_state = 0, .external_lex_state = 12},
  [330] = {.lex_state = 0, .external_lex_state = 8},
  [331] = {.lex_state = 0, .external_lex_state = 8},
  [332] = {.lex_state = 0, .external_lex_state = 12},
  [333] = {.lex_state = 0, .external_lex_state = 12},
  [334] = {.lex_state = 12, .external_lex_state = 7},
  [335] = {.lex_state = 0, .external_lex_state = 22},
  [336] = {.lex_state = 0, .external_lex_state = 22},
  [337] = {.lex_state = 0, .external_lex_state = 23},
  [338] = {.lex_state = 0, .external_lex_state = 22},
  [339] = {.lex_state = 0, .external_lex_state = 24},
  [340] = {.lex_state = 0, .external_lex_state = 24},
  [341] = {.lex_state = 15},
  [342] = {.lex_state = 0, .external_lex_state = 8},
  [343] = {.lex_state = 0, .external_lex_state = 20},
  [344] = {.lex_state = 0, .external_lex_state = 8},
  [345] = {.lex_state = 12, .external_lex_state = 7},
  [346] = {.lex_state = 0, .external_lex_state = 20},
  [347] = {.lex_state = 15},
  [348] = {.lex_state = 15},
  [349] = {.lex_state = 0, .external_lex_state = 16},
  [350] = {.lex_state = 0, .external_lex_state = 24},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 15},
  [353] = {.lex_state = 15},
  [354] = {.lex_state = 0, .external_lex_state = 24},
  [355] = {.lex_state = 5, .external_lex_state = 7},
  [356] = {.lex_state = 12, .external_lex_state = 7},
  [357] = {.lex_state = 0, .external_lex_state = 24},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 15},
  [360] = {.lex_state = 5, .external_lex_state = 7},
  [361] = {.lex_state = 0, .external_lex_state = 16},
  [362] = {.lex_state = 1, .external_lex_state = 7},
  [363] = {.lex_state = 0, .external_lex_state = 24},
  [364] = {.lex_state = 0, .external_lex_state = 24},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 5, .external_lex_state = 7},
  [367] = {.lex_state = 1, .external_lex_state = 7},
  [368] = {.lex_state = 1, .external_lex_state = 7},
  [369] = {.lex_state = 0, .external_lex_state = 19},
  [370] = {.lex_state = 12, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 24},
  [372] = {.lex_state = 0, .external_lex_state = 23},
  [373] = {.lex_state = 0, .external_lex_state = 20},
  [374] = {.lex_state = 0, .external_lex_state = 22},
  [375] = {.lex_state = 0, .external_lex_state = 12},
  [376] = {.lex_state = 0, .external_lex_state = 24},
  [377] = {.lex_state = 0, .external_lex_state = 20},
  [378] = {.lex_state = 0, .external_lex_state = 24},
  [379] = {.lex_state = 0, .external_lex_state = 24},
  [380] = {.lex_state = 0, .external_lex_state = 12},
  [381] = {.lex_state = 13, .external_lex_state = 7},
  [382] = {.lex_state = 0, .external_lex_state = 12},
  [383] = {.lex_state = 0, .external_lex_state = 24},
  [384] = {.lex_state = 0, .external_lex_state = 22},
  [385] = {.lex_state = 0, .external_lex_state = 24},
  [386] = {.lex_state = 0, .external_lex_state = 22},
  [387] = {.lex_state = 0, .external_lex_state = 22},
  [388] = {.lex_state = 0, .external_lex_state = 16},
  [389] = {.lex_state = 0, .external_lex_state = 22},
  [390] = {.lex_state = 0, .external_lex_state = 22},
  [391] = {.lex_state = 0, .external_lex_state = 20},
  [392] = {.lex_state = 1, .external_lex_state = 25},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0, .external_lex_state = 23},
  [395] = {.lex_state = 0, .external_lex_state = 24},
  [396] = {.lex_state = 0, .external_lex_state = 24},
  [397] = {.lex_state = 13, .external_lex_state = 7},
  [398] = {.lex_state = 0, .external_lex_state = 12},
  [399] = {.lex_state = 15},
  [400] = {.lex_state = 0, .external_lex_state = 21},
  [401] = {.lex_state = 5, .external_lex_state = 7},
  [402] = {.lex_state = 0, .external_lex_state = 21},
  [403] = {.lex_state = 0, .external_lex_state = 12},
  [404] = {.lex_state = 0, .external_lex_state = 19},
  [405] = {.lex_state = 0, .external_lex_state = 12},
  [406] = {.lex_state = 0, .external_lex_state = 12},
  [407] = {.lex_state = 0, .external_lex_state = 12},
  [408] = {.lex_state = 0, .external_lex_state = 12},
  [409] = {.lex_state = 0, .external_lex_state = 11},
  [410] = {.lex_state = 0, .external_lex_state = 20},
  [411] = {.lex_state = 0, .external_lex_state = 20},
  [412] = {.lex_state = 0, .external_lex_state = 20},
  [413] = {.lex_state = 0, .external_lex_state = 11},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 9},
  [416] = {.lex_state = 12, .external_lex_state = 7},
  [417] = {.lex_state = 0, .external_lex_state = 9},
  [418] = {.lex_state = 0, .external_lex_state = 9},
  [419] = {.lex_state = 0, .external_lex_state = 9},
  [420] = {.lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 9},
  [422] = {.lex_state = 0, .external_lex_state = 9},
  [423] = {.lex_state = 0, .external_lex_state = 2},
  [424] = {.lex_state = 0, .external_lex_state = 2},
  [425] = {.lex_state = 0, .external_lex_state = 9},
  [426] = {.lex_state = 0, .external_lex_state = 9},
  [427] = {.lex_state = 0, .external_lex_state = 9},
  [428] = {.lex_state = 0, .external_lex_state = 9},
  [429] = {.lex_state = 0, .external_lex_state = 9},
  [430] = {.lex_state = 0, .external_lex_state = 9},
  [431] = {.lex_state = 0, .external_lex_state = 9},
  [432] = {.lex_state = 0, .external_lex_state = 9},
  [433] = {.lex_state = 0, .external_lex_state = 9},
  [434] = {.lex_state = 0, .external_lex_state = 9},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 9},
  [437] = {.lex_state = 0, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 1, .external_lex_state = 7},
  [442] = {.lex_state = 1, .external_lex_state = 7},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 9},
  [445] = {.lex_state = 0, .external_lex_state = 9},
  [446] = {.lex_state = 0, .external_lex_state = 9},
  [447] = {.lex_state = 0, .external_lex_state = 9},
  [448] = {.lex_state = 0, .external_lex_state = 9},
  [449] = {.lex_state = 0, .external_lex_state = 9},
  [450] = {.lex_state = 0, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 9},
  [452] = {.lex_state = 0, .external_lex_state = 9},
  [453] = {.lex_state = 0, .external_lex_state = 9},
  [454] = {.lex_state = 0, .external_lex_state = 9},
  [455] = {.lex_state = 0, .external_lex_state = 9},
  [456] = {.lex_state = 0, .external_lex_state = 9},
  [457] = {.lex_state = 0, .external_lex_state = 9},
  [458] = {.lex_state = 0, .external_lex_state = 9},
  [459] = {.lex_state = 0, .external_lex_state = 9},
  [460] = {.lex_state = 0, .external_lex_state = 26},
  [461] = {.lex_state = 0, .external_lex_state = 9},
  [462] = {.lex_state = 1, .external_lex_state = 7},
  [463] = {.lex_state = 1, .external_lex_state = 7},
  [464] = {.lex_state = 0, .external_lex_state = 9},
  [465] = {.lex_state = 0, .external_lex_state = 9},
  [466] = {.lex_state = 0, .external_lex_state = 9},
  [467] = {.lex_state = 12, .external_lex_state = 7},
  [468] = {.lex_state = 0, .external_lex_state = 9},
  [469] = {.lex_state = 12, .external_lex_state = 7},
  [470] = {.lex_state = 12, .external_lex_state = 7},
  [471] = {.lex_state = 0, .external_lex_state = 9},
  [472] = {.lex_state = 0, .external_lex_state = 26},
  [473] = {.lex_state = 0, .external_lex_state = 18},
  [474] = {.lex_state = 0, .external_lex_state = 9},
  [475] = {.lex_state = 0, .external_lex_state = 27},
  [476] = {.lex_state = 0, .external_lex_state = 9},
  [477] = {.lex_state = 0, .external_lex_state = 9},
  [478] = {.lex_state = 0, .external_lex_state = 9},
  [479] = {.lex_state = 0, .external_lex_state = 9},
  [480] = {.lex_state = 0, .external_lex_state = 9},
  [481] = {.lex_state = 0, .external_lex_state = 9},
  [482] = {.lex_state = 0, .external_lex_state = 9},
  [483] = {.lex_state = 0, .external_lex_state = 9},
  [484] = {.lex_state = 0, .external_lex_state = 9},
  [485] = {.lex_state = 0, .external_lex_state = 18},
  [486] = {.lex_state = 15},
  [487] = {.lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 9},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 9},
  [491] = {.lex_state = 0, .external_lex_state = 9},
  [492] = {.lex_state = 0, .external_lex_state = 9},
  [493] = {.lex_state = 0, .external_lex_state = 9},
  [494] = {.lex_state = 0, .external_lex_state = 9},
  [495] = {.lex_state = 0, .external_lex_state = 18},
  [496] = {.lex_state = 0, .external_lex_state = 18},
  [497] = {.lex_state = 0, .external_lex_state = 9},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 9},
  [500] = {.lex_state = 0, .external_lex_state = 9},
  [501] = {.lex_state = 0, .external_lex_state = 9},
  [502] = {.lex_state = 0, .external_lex_state = 18},
  [503] = {.lex_state = 0, .external_lex_state = 9},
  [504] = {.lex_state = 0, .external_lex_state = 9},
  [505] = {.lex_state = 0, .external_lex_state = 9},
  [506] = {.lex_state = 0, .external_lex_state = 9},
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
  [518] = {.lex_state = 0, .external_lex_state = 2},
  [519] = {.lex_state = 0, .external_lex_state = 2},
  [520] = {.lex_state = 0, .external_lex_state = 9},
  [521] = {.lex_state = 1},
  [522] = {.lex_state = 0, .external_lex_state = 9},
  [523] = {.lex_state = 0, .external_lex_state = 2},
  [524] = {.lex_state = 0, .external_lex_state = 26},
  [525] = {.lex_state = 0, .external_lex_state = 2},
  [526] = {.lex_state = 0, .external_lex_state = 2},
  [527] = {.lex_state = 0, .external_lex_state = 2},
  [528] = {.lex_state = 0, .external_lex_state = 2},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 7, .external_lex_state = 7},
  [531] = {.lex_state = 12, .external_lex_state = 7},
  [532] = {.lex_state = 0, .external_lex_state = 9},
  [533] = {.lex_state = 7, .external_lex_state = 7},
  [534] = {.lex_state = 12, .external_lex_state = 7},
  [535] = {.lex_state = 1},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 7},
  [538] = {.lex_state = 0, .external_lex_state = 7},
  [539] = {.lex_state = 0, .external_lex_state = 27},
  [540] = {.lex_state = 0, .external_lex_state = 7},
  [541] = {.lex_state = 0, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 14},
  [543] = {.lex_state = 0, .external_lex_state = 14},
  [544] = {.lex_state = 0, .external_lex_state = 7},
  [545] = {.lex_state = 0, .external_lex_state = 2},
  [546] = {.lex_state = 0, .external_lex_state = 2},
  [547] = {.lex_state = 0, .external_lex_state = 28},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 0, .external_lex_state = 2},
  [550] = {.lex_state = 0, .external_lex_state = 2},
  [551] = {.lex_state = 7, .external_lex_state = 7},
  [552] = {.lex_state = 14, .external_lex_state = 7},
  [553] = {.lex_state = 0, .external_lex_state = 2},
  [554] = {.lex_state = 0, .external_lex_state = 2},
  [555] = {.lex_state = 1},
  [556] = {.lex_state = 0, .external_lex_state = 9},
  [557] = {.lex_state = 0, .external_lex_state = 9},
  [558] = {.lex_state = 0, .external_lex_state = 9},
  [559] = {.lex_state = 12, .external_lex_state = 7},
  [560] = {.lex_state = 0, .external_lex_state = 2},
  [561] = {.lex_state = 1},
  [562] = {.lex_state = 1},
  [563] = {.lex_state = 0, .external_lex_state = 9},
  [564] = {.lex_state = 1},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 0, .external_lex_state = 9},
  [568] = {.lex_state = 1},
  [569] = {.lex_state = 0, .external_lex_state = 2},
  [570] = {.lex_state = 0, .external_lex_state = 2},
  [571] = {.lex_state = 0, .external_lex_state = 9},
  [572] = {.lex_state = 0, .external_lex_state = 9},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 0, .external_lex_state = 2},
  [575] = {.lex_state = 0, .external_lex_state = 7},
  [576] = {.lex_state = 0, .external_lex_state = 7},
  [577] = {.lex_state = 0, .external_lex_state = 9},
  [578] = {.lex_state = 70},
  [579] = {.lex_state = 70},
  [580] = {.lex_state = 0, .external_lex_state = 2},
  [581] = {.lex_state = 0, .external_lex_state = 2},
  [582] = {.lex_state = 16},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 5, .external_lex_state = 7},
  [591] = {.lex_state = 0, .external_lex_state = 9},
  [592] = {.lex_state = 0, .external_lex_state = 9},
  [593] = {.lex_state = 0, .external_lex_state = 9},
  [594] = {.lex_state = 0, .external_lex_state = 9},
  [595] = {.lex_state = 0, .external_lex_state = 9},
  [596] = {.lex_state = 0, .external_lex_state = 9},
  [597] = {.lex_state = 0, .external_lex_state = 9},
  [598] = {.lex_state = 0, .external_lex_state = 9},
  [599] = {.lex_state = 0, .external_lex_state = 9},
  [600] = {.lex_state = 0, .external_lex_state = 9},
  [601] = {.lex_state = 0, .external_lex_state = 9},
  [602] = {.lex_state = 0, .external_lex_state = 14},
  [603] = {.lex_state = 0, .external_lex_state = 14},
  [604] = {.lex_state = 0, .external_lex_state = 14},
  [605] = {.lex_state = 0, .external_lex_state = 14},
  [606] = {.lex_state = 0, .external_lex_state = 14},
  [607] = {.lex_state = 0, .external_lex_state = 14},
  [608] = {.lex_state = 0, .external_lex_state = 9},
  [609] = {.lex_state = 0, .external_lex_state = 14},
  [610] = {.lex_state = 0, .external_lex_state = 14},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 0, .external_lex_state = 2},
  [615] = {.lex_state = 0, .external_lex_state = 28},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 0, .external_lex_state = 9},
  [618] = {.lex_state = 0, .external_lex_state = 26},
  [619] = {.lex_state = 0, .external_lex_state = 2},
  [620] = {.lex_state = 0, .external_lex_state = 2},
  [621] = {.lex_state = 0, .external_lex_state = 2},
  [622] = {.lex_state = 12, .external_lex_state = 7},
  [623] = {.lex_state = 0, .external_lex_state = 9},
  [624] = {.lex_state = 1, .external_lex_state = 7},
  [625] = {.lex_state = 0, .external_lex_state = 9},
  [626] = {.lex_state = 1},
  [627] = {.lex_state = 0, .external_lex_state = 9},
  [628] = {.lex_state = 1},
  [629] = {.lex_state = 0, .external_lex_state = 2},
  [630] = {.lex_state = 0, .external_lex_state = 9},
  [631] = {.lex_state = 0, .external_lex_state = 9},
  [632] = {.lex_state = 1, .external_lex_state = 7},
  [633] = {.lex_state = 0, .external_lex_state = 9},
  [634] = {.lex_state = 12, .external_lex_state = 7},
  [635] = {.lex_state = 12, .external_lex_state = 7},
  [636] = {.lex_state = 0, .external_lex_state = 2},
  [637] = {.lex_state = 0, .external_lex_state = 2},
  [638] = {.lex_state = 12, .external_lex_state = 7},
  [639] = {.lex_state = 12, .external_lex_state = 7},
  [640] = {.lex_state = 0, .external_lex_state = 9},
  [641] = {.lex_state = 12, .external_lex_state = 7},
  [642] = {.lex_state = 1, .external_lex_state = 25},
  [643] = {.lex_state = 0, .external_lex_state = 2},
  [644] = {.lex_state = 15},
  [645] = {.lex_state = 0, .external_lex_state = 2},
  [646] = {.lex_state = 0, .external_lex_state = 2},
  [647] = {.lex_state = 0, .external_lex_state = 2},
  [648] = {.lex_state = 0, .external_lex_state = 28},
  [649] = {.lex_state = 0, .external_lex_state = 2},
  [650] = {.lex_state = 0, .external_lex_state = 28},
  [651] = {.lex_state = 0, .external_lex_state = 2},
  [652] = {.lex_state = 0, .external_lex_state = 2},
  [653] = {.lex_state = 0, .external_lex_state = 9},
  [654] = {.lex_state = 0, .external_lex_state = 26},
  [655] = {.lex_state = 0, .external_lex_state = 26},
  [656] = {.lex_state = 0, .external_lex_state = 9},
  [657] = {.lex_state = 7, .external_lex_state = 7},
  [658] = {.lex_state = 14, .external_lex_state = 7},
  [659] = {.lex_state = 70},
  [660] = {.lex_state = 16},
  [661] = {.lex_state = 1, .external_lex_state = 7},
  [662] = {.lex_state = 1, .external_lex_state = 7},
  [663] = {.lex_state = 0, .external_lex_state = 26},
  [664] = {.lex_state = 0, .external_lex_state = 26},
  [665] = {.lex_state = 0, .external_lex_state = 26},
  [666] = {.lex_state = 0, .external_lex_state = 26},
  [667] = {.lex_state = 1},
  [668] = {.lex_state = 0, .external_lex_state = 2},
  [669] = {.lex_state = 0, .external_lex_state = 2},
  [670] = {.lex_state = 0, .external_lex_state = 2},
  [671] = {.lex_state = 0, .external_lex_state = 9},
  [672] = {.lex_state = 0, .external_lex_state = 9},
  [673] = {.lex_state = 0, .external_lex_state = 9},
  [674] = {.lex_state = 12, .external_lex_state = 7},
  [675] = {.lex_state = 0, .external_lex_state = 24},
  [676] = {.lex_state = 0, .external_lex_state = 7},
  [677] = {.lex_state = 0, .external_lex_state = 7},
  [678] = {.lex_state = 0, .external_lex_state = 7},
  [679] = {.lex_state = 1},
  [680] = {.lex_state = 0, .external_lex_state = 7},
  [681] = {.lex_state = 0, .external_lex_state = 7},
  [682] = {.lex_state = 0, .external_lex_state = 7},
  [683] = {.lex_state = 0, .external_lex_state = 29},
  [684] = {.lex_state = 0, .external_lex_state = 7},
  [685] = {.lex_state = 0, .external_lex_state = 7},
  [686] = {.lex_state = 41},
  [687] = {.lex_state = 0, .external_lex_state = 7},
  [688] = {.lex_state = 0, .external_lex_state = 7},
  [689] = {.lex_state = 1},
  [690] = {.lex_state = 0, .external_lex_state = 7},
  [691] = {.lex_state = 0, .external_lex_state = 7},
  [692] = {.lex_state = 0, .external_lex_state = 7},
  [693] = {.lex_state = 0, .external_lex_state = 7},
  [694] = {.lex_state = 0, .external_lex_state = 7},
  [695] = {.lex_state = 0, .external_lex_state = 7},
  [696] = {.lex_state = 0, .external_lex_state = 7},
  [697] = {.lex_state = 0, .external_lex_state = 30},
  [698] = {.lex_state = 15},
  [699] = {.lex_state = 1},
  [700] = {.lex_state = 0, .external_lex_state = 7},
  [701] = {.lex_state = 0, .external_lex_state = 24},
  [702] = {.lex_state = 1},
  [703] = {.lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 7},
  [705] = {.lex_state = 0, .external_lex_state = 7},
  [706] = {.lex_state = 15},
  [707] = {.lex_state = 0, .external_lex_state = 7},
  [708] = {.lex_state = 0, .external_lex_state = 7},
  [709] = {.lex_state = 0, .external_lex_state = 29},
  [710] = {.lex_state = 0, .external_lex_state = 7},
  [711] = {.lex_state = 1, .external_lex_state = 7},
  [712] = {.lex_state = 0, .external_lex_state = 24},
  [713] = {.lex_state = 0, .external_lex_state = 24},
  [714] = {.lex_state = 0, .external_lex_state = 24},
  [715] = {.lex_state = 0, .external_lex_state = 24},
  [716] = {.lex_state = 0, .external_lex_state = 24},
  [717] = {.lex_state = 0, .external_lex_state = 7},
  [718] = {.lex_state = 1},
  [719] = {.lex_state = 0, .external_lex_state = 7},
  [720] = {.lex_state = 0, .external_lex_state = 7},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 0, .external_lex_state = 7},
  [723] = {.lex_state = 0, .external_lex_state = 7},
  [724] = {.lex_state = 0, .external_lex_state = 24},
  [725] = {.lex_state = 0, .external_lex_state = 24},
  [726] = {.lex_state = 0, .external_lex_state = 7},
  [727] = {.lex_state = 0, .external_lex_state = 7},
  [728] = {.lex_state = 0, .external_lex_state = 7},
  [729] = {.lex_state = 0, .external_lex_state = 7},
  [730] = {.lex_state = 0, .external_lex_state = 2},
  [731] = {.lex_state = 0, .external_lex_state = 2},
  [732] = {.lex_state = 0, .external_lex_state = 7},
  [733] = {.lex_state = 0, .external_lex_state = 23},
  [734] = {.lex_state = 0, .external_lex_state = 23},
  [735] = {.lex_state = 5, .external_lex_state = 7},
  [736] = {.lex_state = 0, .external_lex_state = 24},
  [737] = {.lex_state = 0, .external_lex_state = 24},
  [738] = {.lex_state = 0, .external_lex_state = 24},
  [739] = {.lex_state = 0, .external_lex_state = 24},
  [740] = {.lex_state = 0, .external_lex_state = 24},
  [741] = {.lex_state = 0, .external_lex_state = 23},
  [742] = {.lex_state = 0, .external_lex_state = 23},
  [743] = {.lex_state = 0, .external_lex_state = 23},
  [744] = {.lex_state = 0, .external_lex_state = 23},
  [745] = {.lex_state = 0, .external_lex_state = 23},
  [746] = {.lex_state = 0, .external_lex_state = 23},
  [747] = {.lex_state = 0, .external_lex_state = 7},
  [748] = {.lex_state = 0, .external_lex_state = 30},
  [749] = {.lex_state = 0, .external_lex_state = 7},
  [750] = {.lex_state = 1},
  [751] = {.lex_state = 0, .external_lex_state = 7},
  [752] = {.lex_state = 0, .external_lex_state = 7},
  [753] = {.lex_state = 15},
  [754] = {.lex_state = 0, .external_lex_state = 28},
  [755] = {.lex_state = 0, .external_lex_state = 28},
  [756] = {.lex_state = 0, .external_lex_state = 20},
  [757] = {.lex_state = 0, .external_lex_state = 7},
  [758] = {.lex_state = 0, .external_lex_state = 7},
  [759] = {.lex_state = 0, .external_lex_state = 7},
  [760] = {.lex_state = 0, .external_lex_state = 7},
  [761] = {.lex_state = 0, .external_lex_state = 20},
  [762] = {.lex_state = 0, .external_lex_state = 7},
  [763] = {.lex_state = 0, .external_lex_state = 20},
  [764] = {.lex_state = 1, .external_lex_state = 7},
  [765] = {.lex_state = 0, .external_lex_state = 20},
  [766] = {.lex_state = 0, .external_lex_state = 20},
  [767] = {.lex_state = 0, .external_lex_state = 20},
  [768] = {.lex_state = 0, .external_lex_state = 20},
  [769] = {.lex_state = 1, .external_lex_state = 7},
  [770] = {.lex_state = 0, .external_lex_state = 7},
  [771] = {.lex_state = 1},
  [772] = {.lex_state = 0, .external_lex_state = 7},
  [773] = {.lex_state = 1},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 0, .external_lex_state = 7},
  [776] = {.lex_state = 0, .external_lex_state = 7},
  [777] = {.lex_state = 0, .external_lex_state = 7},
  [778] = {.lex_state = 0, .external_lex_state = 7},
  [779] = {.lex_state = 0, .external_lex_state = 7},
  [780] = {.lex_state = 0, .external_lex_state = 7},
  [781] = {.lex_state = 1, .external_lex_state = 7},
  [782] = {.lex_state = 1, .external_lex_state = 7},
  [783] = {.lex_state = 0, .external_lex_state = 7},
  [784] = {.lex_state = 0, .external_lex_state = 7},
  [785] = {.lex_state = 0, .external_lex_state = 7},
  [786] = {.lex_state = 0, .external_lex_state = 7},
  [787] = {.lex_state = 0, .external_lex_state = 7},
  [788] = {.lex_state = 1},
  [789] = {.lex_state = 0, .external_lex_state = 7},
  [790] = {.lex_state = 0, .external_lex_state = 7},
  [791] = {.lex_state = 0, .external_lex_state = 7},
  [792] = {.lex_state = 1},
  [793] = {.lex_state = 1},
  [794] = {.lex_state = 0, .external_lex_state = 20},
  [795] = {.lex_state = 0, .external_lex_state = 7},
  [796] = {.lex_state = 0, .external_lex_state = 7},
  [797] = {.lex_state = 0, .external_lex_state = 7},
  [798] = {.lex_state = 0, .external_lex_state = 7},
  [799] = {.lex_state = 1, .external_lex_state = 7},
  [800] = {.lex_state = 1, .external_lex_state = 7},
  [801] = {.lex_state = 0, .external_lex_state = 29},
  [802] = {.lex_state = 0, .external_lex_state = 7},
  [803] = {.lex_state = 0, .external_lex_state = 7},
  [804] = {.lex_state = 0, .external_lex_state = 7},
  [805] = {.lex_state = 0, .external_lex_state = 7},
  [806] = {.lex_state = 0, .external_lex_state = 7},
  [807] = {.lex_state = 0, .external_lex_state = 7},
  [808] = {.lex_state = 0, .external_lex_state = 7},
  [809] = {.lex_state = 0, .external_lex_state = 29},
  [810] = {.lex_state = 0, .external_lex_state = 7},
  [811] = {.lex_state = 1},
  [812] = {.lex_state = 0, .external_lex_state = 7},
  [813] = {.lex_state = 1},
  [814] = {.lex_state = 1},
  [815] = {.lex_state = 0, .external_lex_state = 7},
  [816] = {.lex_state = 12, .external_lex_state = 7},
  [817] = {.lex_state = 0, .external_lex_state = 7},
  [818] = {.lex_state = 0, .external_lex_state = 7},
  [819] = {.lex_state = 1, .external_lex_state = 7},
  [820] = {.lex_state = 16},
  [821] = {.lex_state = 1, .external_lex_state = 7},
  [822] = {.lex_state = 0, .external_lex_state = 7},
  [823] = {.lex_state = 1},
  [824] = {.lex_state = 0, .external_lex_state = 7},
  [825] = {.lex_state = 0, .external_lex_state = 7},
  [826] = {.lex_state = 0, .external_lex_state = 7},
  [827] = {.lex_state = 0, .external_lex_state = 7},
  [828] = {.lex_state = 0, .external_lex_state = 7},
  [829] = {.lex_state = 1, .external_lex_state = 7},
  [830] = {.lex_state = 0, .external_lex_state = 7},
  [831] = {.lex_state = 1, .external_lex_state = 25},
  [832] = {.lex_state = 0, .external_lex_state = 22},
  [833] = {.lex_state = 0, .external_lex_state = 28},
  [834] = {.lex_state = 5, .external_lex_state = 7},
  [835] = {.lex_state = 0, .external_lex_state = 7},
  [836] = {.lex_state = 1},
  [837] = {.lex_state = 12, .external_lex_state = 7},
  [838] = {.lex_state = 0, .external_lex_state = 28},
  [839] = {.lex_state = 0, .external_lex_state = 28},
  [840] = {.lex_state = 12, .external_lex_state = 7},
  [841] = {.lex_state = 12, .external_lex_state = 7},
  [842] = {.lex_state = 0, .external_lex_state = 7},
  [843] = {.lex_state = 285, .external_lex_state = 31},
  [844] = {.lex_state = 285, .external_lex_state = 31},
  [845] = {.lex_state = 1},
  [846] = {.lex_state = 0, .external_lex_state = 7},
  [847] = {.lex_state = 286},
  [848] = {.lex_state = 1},
  [849] = {.lex_state = 0, .external_lex_state = 7},
  [850] = {.lex_state = 1},
  [851] = {.lex_state = 1},
  [852] = {.lex_state = 0, .external_lex_state = 5},
  [853] = {.lex_state = 0, .external_lex_state = 30},
  [854] = {.lex_state = 41},
  [855] = {.lex_state = 0, .external_lex_state = 32},
  [856] = {.lex_state = 1},
  [857] = {.lex_state = 0, .external_lex_state = 32},
  [858] = {.lex_state = 287},
  [859] = {.lex_state = 287},
  [860] = {.lex_state = 287},
  [861] = {.lex_state = 0, .external_lex_state = 32},
  [862] = {.lex_state = 287},
  [863] = {.lex_state = 5},
  [864] = {.lex_state = 1},
  [865] = {.lex_state = 1},
  [866] = {.lex_state = 1},
  [867] = {.lex_state = 1},
  [868] = {.lex_state = 286},
  [869] = {.lex_state = 1},
  [870] = {.lex_state = 0, .external_lex_state = 33},
  [871] = {.lex_state = 287},
  [872] = {.lex_state = 1},
  [873] = {.lex_state = 0, .external_lex_state = 3},
  [874] = {.lex_state = 0, .external_lex_state = 3},
  [875] = {.lex_state = 285, .external_lex_state = 31},
  [876] = {.lex_state = 287},
  [877] = {.lex_state = 0, .external_lex_state = 32},
  [878] = {.lex_state = 1},
  [879] = {.lex_state = 1},
  [880] = {.lex_state = 1},
  [881] = {.lex_state = 1},
  [882] = {.lex_state = 285, .external_lex_state = 31},
  [883] = {.lex_state = 285, .external_lex_state = 31},
  [884] = {.lex_state = 288},
  [885] = {.lex_state = 285, .external_lex_state = 31},
  [886] = {.lex_state = 285, .external_lex_state = 31},
  [887] = {.lex_state = 1},
  [888] = {.lex_state = 285, .external_lex_state = 31},
  [889] = {.lex_state = 285, .external_lex_state = 31},
  [890] = {.lex_state = 286},
  [891] = {.lex_state = 285, .external_lex_state = 31},
  [892] = {.lex_state = 285, .external_lex_state = 31},
  [893] = {.lex_state = 0, .external_lex_state = 28},
  [894] = {.lex_state = 1},
  [895] = {.lex_state = 285, .external_lex_state = 31},
  [896] = {.lex_state = 1},
  [897] = {.lex_state = 285, .external_lex_state = 31},
  [898] = {.lex_state = 285, .external_lex_state = 31},
  [899] = {.lex_state = 285, .external_lex_state = 31},
  [900] = {.lex_state = 285, .external_lex_state = 31},
  [901] = {.lex_state = 15},
  [902] = {.lex_state = 285, .external_lex_state = 31},
  [903] = {.lex_state = 285, .external_lex_state = 31},
  [904] = {.lex_state = 1},
  [905] = {.lex_state = 1},
  [906] = {.lex_state = 15},
  [907] = {.lex_state = 0, .external_lex_state = 28},
  [908] = {.lex_state = 0, .external_lex_state = 30},
  [909] = {.lex_state = 1},
  [910] = {.lex_state = 0, .external_lex_state = 33},
  [911] = {.lex_state = 41},
  [912] = {.lex_state = 15},
  [913] = {.lex_state = 0, .external_lex_state = 7},
  [914] = {.lex_state = 15},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 1},
  [917] = {.lex_state = 1},
  [918] = {.lex_state = 0, .external_lex_state = 33},
  [919] = {.lex_state = 288},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 33},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 1},
  [924] = {.lex_state = 1},
  [925] = {.lex_state = 1},
  [926] = {.lex_state = 1},
  [927] = {.lex_state = 1},
  [928] = {.lex_state = 1},
  [929] = {.lex_state = 1},
  [930] = {.lex_state = 1},
  [931] = {.lex_state = 1},
  [932] = {.lex_state = 1},
  [933] = {.lex_state = 1},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 1},
  [936] = {.lex_state = 285, .external_lex_state = 31},
  [937] = {.lex_state = 1},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 15},
  [941] = {.lex_state = 285, .external_lex_state = 31},
  [942] = {.lex_state = 0, .external_lex_state = 31},
  [943] = {.lex_state = 0, .external_lex_state = 34},
  [944] = {.lex_state = 1},
  [945] = {.lex_state = 0, .external_lex_state = 34},
  [946] = {.lex_state = 0, .external_lex_state = 34},
  [947] = {.lex_state = 0, .external_lex_state = 31},
  [948] = {.lex_state = 0, .external_lex_state = 34},
  [949] = {.lex_state = 0, .external_lex_state = 34},
  [950] = {.lex_state = 1},
  [951] = {.lex_state = 0, .external_lex_state = 31},
  [952] = {.lex_state = 5},
  [953] = {.lex_state = 0, .external_lex_state = 31},
  [954] = {.lex_state = 0, .external_lex_state = 31},
  [955] = {.lex_state = 0, .external_lex_state = 31},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 1},
  [958] = {.lex_state = 1},
  [959] = {.lex_state = 288},
  [960] = {.lex_state = 0, .external_lex_state = 34},
  [961] = {.lex_state = 0, .external_lex_state = 34},
  [962] = {.lex_state = 289},
  [963] = {.lex_state = 289},
  [964] = {.lex_state = 0, .external_lex_state = 31},
  [965] = {.lex_state = 0, .external_lex_state = 31},
  [966] = {.lex_state = 0, .external_lex_state = 31},
  [967] = {.lex_state = 0, .external_lex_state = 7},
  [968] = {.lex_state = 0, .external_lex_state = 34},
  [969] = {.lex_state = 1},
  [970] = {.lex_state = 1},
  [971] = {.lex_state = 0, .external_lex_state = 31},
  [972] = {.lex_state = 0, .external_lex_state = 34},
  [973] = {.lex_state = 0, .external_lex_state = 34},
  [974] = {.lex_state = 1},
  [975] = {.lex_state = 0, .external_lex_state = 31},
  [976] = {.lex_state = 0, .external_lex_state = 31},
  [977] = {.lex_state = 0, .external_lex_state = 31},
  [978] = {.lex_state = 0, .external_lex_state = 7},
  [979] = {.lex_state = 1},
  [980] = {.lex_state = 0, .external_lex_state = 34},
  [981] = {.lex_state = 0, .external_lex_state = 7},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0, .external_lex_state = 31},
  [984] = {.lex_state = 0, .external_lex_state = 31},
  [985] = {.lex_state = 0, .external_lex_state = 7},
  [986] = {.lex_state = 0, .external_lex_state = 31},
  [987] = {.lex_state = 1},
  [988] = {.lex_state = 0, .external_lex_state = 34},
  [989] = {.lex_state = 0, .external_lex_state = 31},
  [990] = {.lex_state = 0, .external_lex_state = 31},
  [991] = {.lex_state = 0, .external_lex_state = 31},
  [992] = {.lex_state = 0, .external_lex_state = 7},
  [993] = {.lex_state = 0, .external_lex_state = 31},
  [994] = {.lex_state = 41},
  [995] = {.lex_state = 41},
  [996] = {.lex_state = 0, .external_lex_state = 31},
  [997] = {.lex_state = 0, .external_lex_state = 31},
  [998] = {.lex_state = 0, .external_lex_state = 31},
  [999] = {.lex_state = 0, .external_lex_state = 7},
  [1000] = {.lex_state = 1},
  [1001] = {.lex_state = 1},
  [1002] = {.lex_state = 1},
  [1003] = {.lex_state = 0, .external_lex_state = 31},
  [1004] = {.lex_state = 0, .external_lex_state = 31},
  [1005] = {.lex_state = 0, .external_lex_state = 31},
  [1006] = {.lex_state = 0, .external_lex_state = 7},
  [1007] = {.lex_state = 0, .external_lex_state = 34},
  [1008] = {.lex_state = 1},
  [1009] = {.lex_state = 1},
  [1010] = {.lex_state = 0, .external_lex_state = 31},
  [1011] = {.lex_state = 0, .external_lex_state = 31},
  [1012] = {.lex_state = 0, .external_lex_state = 31},
  [1013] = {.lex_state = 0, .external_lex_state = 7},
  [1014] = {.lex_state = 0, .external_lex_state = 7},
  [1015] = {.lex_state = 41},
  [1016] = {.lex_state = 1},
  [1017] = {.lex_state = 0, .external_lex_state = 34},
  [1018] = {.lex_state = 0, .external_lex_state = 34},
  [1019] = {.lex_state = 0, .external_lex_state = 34},
  [1020] = {.lex_state = 1},
  [1021] = {.lex_state = 1},
  [1022] = {.lex_state = 1},
  [1023] = {.lex_state = 286},
  [1024] = {.lex_state = 1},
  [1025] = {.lex_state = 289},
  [1026] = {.lex_state = 1},
  [1027] = {.lex_state = 1},
  [1028] = {.lex_state = 1},
  [1029] = {.lex_state = 1},
  [1030] = {.lex_state = 1},
  [1031] = {.lex_state = 41},
  [1032] = {.lex_state = 1},
  [1033] = {.lex_state = 0, .external_lex_state = 7},
  [1034] = {.lex_state = 0, .external_lex_state = 31},
  [1035] = {.lex_state = 1},
  [1036] = {.lex_state = 1},
  [1037] = {.lex_state = 1},
  [1038] = {.lex_state = 0, .external_lex_state = 7},
  [1039] = {.lex_state = 1},
  [1040] = {.lex_state = 1},
  [1041] = {.lex_state = 1},
  [1042] = {.lex_state = 28},
  [1043] = {.lex_state = 1},
  [1044] = {.lex_state = 41},
  [1045] = {.lex_state = 1},
  [1046] = {.lex_state = 285},
  [1047] = {.lex_state = 0, .external_lex_state = 31},
  [1048] = {.lex_state = 0, .external_lex_state = 34},
  [1049] = {.lex_state = 0, .external_lex_state = 34},
  [1050] = {.lex_state = 0, .external_lex_state = 34},
  [1051] = {.lex_state = 1},
  [1052] = {.lex_state = 41},
  [1053] = {.lex_state = 1},
  [1054] = {.lex_state = 0, .external_lex_state = 34},
  [1055] = {.lex_state = 0, .external_lex_state = 7},
  [1056] = {.lex_state = 0, .external_lex_state = 34},
  [1057] = {.lex_state = 1},
  [1058] = {.lex_state = 0, .external_lex_state = 34},
  [1059] = {.lex_state = 1},
  [1060] = {.lex_state = 1},
  [1061] = {.lex_state = 1},
  [1062] = {.lex_state = 0, .external_lex_state = 34},
  [1063] = {.lex_state = 0, .external_lex_state = 34},
  [1064] = {.lex_state = 1},
  [1065] = {.lex_state = 1},
  [1066] = {.lex_state = 0, .external_lex_state = 34},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 0, .external_lex_state = 34},
  [1069] = {.lex_state = 1},
  [1070] = {.lex_state = 0, .external_lex_state = 34},
  [1071] = {.lex_state = 1},
  [1072] = {.lex_state = 1},
  [1073] = {.lex_state = 0, .external_lex_state = 34},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 0, .external_lex_state = 34},
  [1076] = {.lex_state = 1},
  [1077] = {.lex_state = 1},
  [1078] = {.lex_state = 0, .external_lex_state = 7},
  [1079] = {.lex_state = 1},
  [1080] = {.lex_state = 41},
  [1081] = {.lex_state = 0, .external_lex_state = 34},
  [1082] = {.lex_state = 0, .external_lex_state = 7},
  [1083] = {.lex_state = 0, .external_lex_state = 34},
  [1084] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(982),
    [sym_item] = STATE(147),
    [sym__trivia] = STATE(147),
    [aux_sym_source_file_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(556),
    [sym__collection_operation] = STATE(556),
    [sym_let_statement] = STATE(556),
    [sym_exec_statement] = STATE(556),
    [sym_spawn_statement] = STATE(556),
    [sym__invalid_exec_binding] = STATE(557),
    [sym__invalid_until_binding] = STATE(558),
    [sym_run_statement] = STATE(556),
    [sym_implicit_run_statement] = STATE(556),
    [sym__implicit_run_line] = STATE(146),
    [sym_seek_statement] = STATE(556),
    [sym_ask_statement] = STATE(556),
    [sym_generate_statement] = STATE(556),
    [sym_reduce_statement] = STATE(556),
    [sym_map_statement] = STATE(556),
    [sym_keep_statement] = STATE(556),
    [sym_drop_statement] = STATE(556),
    [sym_sort_statement] = STATE(556),
    [sym_repeat_statement] = STATE(556),
    [sym_invalid_flow_reserved_statement] = STATE(556),
    [sym__query_directive_key] = STATE(837),
    [sym__route_directive_key] = STATE(837),
    [sym_directive_key] = STATE(674),
    [sym_role] = STATE(674),
    [sym__flow_reserved_word] = STATE(674),
    [sym__collection_binding_word] = STATE(674),
    [sym__agic_reserved_word] = STATE(674),
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
    [sym_flow_exec_keyword] = ACTIONS(29),
    [sym_flow_spawn_keyword] = ACTIONS(31),
    [sym_flow_let_keyword] = ACTIONS(33),
    [sym_flow_seek_keyword] = ACTIONS(35),
    [sym_flow_ask_keyword] = ACTIONS(37),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(39),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(41),
    [sym_flow_map_keyword] = ACTIONS(43),
    [sym_flow_keep_keyword] = ACTIONS(45),
    [sym_flow_drop_keyword] = ACTIONS(47),
    [sym_flow_sort_keyword] = ACTIONS(49),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(51),
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
    [sym__flow_raw_text] = ACTIONS(53),
  },
  [3] = {
    [sym__flow_operation] = STATE(556),
    [sym__collection_operation] = STATE(556),
    [sym_let_statement] = STATE(556),
    [sym_exec_statement] = STATE(556),
    [sym_spawn_statement] = STATE(556),
    [sym__invalid_exec_binding] = STATE(557),
    [sym__invalid_until_binding] = STATE(558),
    [sym_run_statement] = STATE(556),
    [sym_implicit_run_statement] = STATE(556),
    [sym__implicit_run_line] = STATE(146),
    [sym_seek_statement] = STATE(556),
    [sym_ask_statement] = STATE(556),
    [sym_generate_statement] = STATE(556),
    [sym_reduce_statement] = STATE(556),
    [sym_map_statement] = STATE(556),
    [sym_keep_statement] = STATE(556),
    [sym_drop_statement] = STATE(556),
    [sym_sort_statement] = STATE(556),
    [sym_repeat_statement] = STATE(556),
    [sym_invalid_flow_reserved_statement] = STATE(556),
    [sym__query_directive_key] = STATE(837),
    [sym__route_directive_key] = STATE(837),
    [sym_directive_key] = STATE(674),
    [sym_role] = STATE(674),
    [sym__flow_reserved_word] = STATE(674),
    [sym__collection_binding_word] = STATE(674),
    [sym__agic_reserved_word] = STATE(674),
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
    [sym_flow_exec_keyword] = ACTIONS(29),
    [sym_flow_spawn_keyword] = ACTIONS(31),
    [sym_flow_let_keyword] = ACTIONS(33),
    [sym_flow_seek_keyword] = ACTIONS(35),
    [sym_flow_ask_keyword] = ACTIONS(37),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(39),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(41),
    [sym_flow_map_keyword] = ACTIONS(43),
    [sym_flow_keep_keyword] = ACTIONS(45),
    [sym_flow_drop_keyword] = ACTIONS(47),
    [sym_flow_sort_keyword] = ACTIONS(49),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(51),
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
    [sym__flow_raw_text] = ACTIONS(53),
  },
  [4] = {
    [sym__flow_operation] = STATE(375),
    [sym__collection_operation] = STATE(375),
    [sym_let_statement] = STATE(375),
    [sym_exec_statement] = STATE(375),
    [sym_spawn_statement] = STATE(375),
    [sym__invalid_exec_binding] = STATE(380),
    [sym__invalid_until_binding] = STATE(382),
    [sym_run_statement] = STATE(375),
    [sym_implicit_run_statement] = STATE(375),
    [sym__implicit_run_line] = STATE(83),
    [sym_seek_statement] = STATE(375),
    [sym_ask_statement] = STATE(375),
    [sym_generate_statement] = STATE(375),
    [sym_reduce_statement] = STATE(375),
    [sym_map_statement] = STATE(375),
    [sym_keep_statement] = STATE(375),
    [sym_drop_statement] = STATE(375),
    [sym_sort_statement] = STATE(375),
    [sym_repeat_statement] = STATE(375),
    [sym_invalid_flow_reserved_statement] = STATE(375),
    [sym__query_directive_key] = STATE(837),
    [sym__route_directive_key] = STATE(837),
    [sym_directive_key] = STATE(622),
    [sym_role] = STATE(622),
    [sym__flow_reserved_word] = STATE(622),
    [sym__collection_binding_word] = STATE(622),
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
    [sym_with_keyword] = ACTIONS(55),
    [sym_struct_keyword] = ACTIONS(55),
    [sym_psyche_keyword] = ACTIONS(57),
    [sym_skill_keyword] = ACTIONS(57),
    [sym_service_keyword] = ACTIONS(57),
    [sym_prompt_keyword] = ACTIONS(57),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(55),
    [sym_task_keyword] = ACTIONS(55),
    [sym_chore_keyword] = ACTIONS(55),
    [sym_flow_keyword] = ACTIONS(55),
    [sym_pass_keyword] = ACTIONS(55),
    [sym_flow_run_keyword] = ACTIONS(59),
    [sym_flow_exec_keyword] = ACTIONS(61),
    [sym_flow_spawn_keyword] = ACTIONS(63),
    [sym_flow_let_keyword] = ACTIONS(65),
    [sym_flow_seek_keyword] = ACTIONS(67),
    [sym_flow_ask_keyword] = ACTIONS(69),
    [sym_flow_scatter_keyword] = ACTIONS(55),
    [sym_flow_storm_keyword] = ACTIONS(55),
    [sym_flow_generate_keyword] = ACTIONS(71),
    [sym_flow_gather_keyword] = ACTIONS(55),
    [sym_flow_settle_keyword] = ACTIONS(55),
    [sym_flow_reduce_keyword] = ACTIONS(73),
    [sym_flow_map_keyword] = ACTIONS(75),
    [sym_flow_keep_keyword] = ACTIONS(77),
    [sym_flow_drop_keyword] = ACTIONS(79),
    [sym_flow_sort_keyword] = ACTIONS(81),
    [sym_flow_rank_keyword] = ACTIONS(55),
    [sym_flow_repeat_keyword] = ACTIONS(83),
    [sym_flow_until_keyword] = ACTIONS(55),
    [sym_flow_from_keyword] = ACTIONS(55),
    [sym_flow_windowing_keyword] = ACTIONS(55),
    [sym_flow_using_keyword] = ACTIONS(55),
    [sym_flow_if_keyword] = ACTIONS(55),
    [sym_flow_by_keyword] = ACTIONS(55),
    [sym_flow_in_keyword] = ACTIONS(57),
    [sym_flow_lane_keyword] = ACTIONS(57),
    [sym_flow_ascending_keyword] = ACTIONS(55),
    [sym_flow_descending_keyword] = ACTIONS(55),
    [sym_flow_time_keyword] = ACTIONS(57),
    [sym_flow_times_keyword] = ACTIONS(55),
    [sym_flow_par_keyword] = ACTIONS(55),
    [sym_flow_first_keyword] = ACTIONS(55),
    [sym_flow_last_keyword] = ACTIONS(55),
    [sym_flow_top_keyword] = ACTIONS(55),
    [sym_flow_bottom_keyword] = ACTIONS(55),
    [sym_flow_think_keyword] = ACTIONS(55),
    [sym_flow_use_keyword] = ACTIONS(57),
    [sym_thunk_keyword] = ACTIONS(55),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(55),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_unfold] = ACTIONS(55),
    [anon_sym_each] = ACTIONS(55),
    [anon_sym_fold] = ACTIONS(55),
    [anon_sym_head] = ACTIONS(55),
    [anon_sym_tail] = ACTIONS(55),
    [sym__flow_raw_text] = ACTIONS(85),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(89), 1,
      sym_flow_run_keyword,
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
      sym__until_binding_start,
    ACTIONS(117), 1,
      sym__variable_name,
    STATE(845), 1,
      sym_local_name,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(617), 13,
      sym__flow_operation,
      sym__collection_operation,
      sym_spawn_statement,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [68] = 18,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(117), 1,
      sym__variable_name,
    ACTIONS(119), 1,
      sym_flow_run_keyword,
    ACTIONS(121), 1,
      sym_flow_spawn_keyword,
    ACTIONS(123), 1,
      sym_flow_seek_keyword,
    ACTIONS(125), 1,
      sym_flow_ask_keyword,
    ACTIONS(127), 1,
      sym_flow_generate_keyword,
    ACTIONS(129), 1,
      sym_flow_reduce_keyword,
    ACTIONS(131), 1,
      sym_flow_map_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_sort_keyword,
    ACTIONS(139), 1,
      sym_flow_repeat_keyword,
    ACTIONS(141), 1,
      sym__exec_binding_start,
    ACTIONS(143), 1,
      sym__until_binding_start,
    STATE(915), 1,
      sym_local_name,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(406), 13,
      sym__flow_operation,
      sym__collection_operation,
      sym_spawn_statement,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [136] = 12,
    ACTIONS(147), 1,
      anon_sym_tool,
    ACTIONS(149), 1,
      sym_pass_keyword,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    STATE(109), 1,
      sym__unroled_message_line,
    STATE(533), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(145), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(532), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(534), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(837), 2,
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
  [186] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(147), 1,
      anon_sym_tool,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    STATE(109), 1,
      sym__unroled_message_line,
    STATE(533), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(145), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(532), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(534), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(837), 2,
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
  [236] = 18,
    ACTIONS(119), 1,
      sym_flow_run_keyword,
    ACTIONS(123), 1,
      sym_flow_seek_keyword,
    ACTIONS(125), 1,
      sym_flow_ask_keyword,
    ACTIONS(133), 1,
      sym_flow_keep_keyword,
    ACTIONS(135), 1,
      sym_flow_drop_keyword,
    ACTIONS(137), 1,
      sym_flow_sort_keyword,
    ACTIONS(139), 1,
      sym_flow_repeat_keyword,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(155), 1,
      sym_text_line,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(159), 1,
      sym__exec_binding_start,
    ACTIONS(161), 1,
      sym__collection_binding_start,
    ACTIONS(163), 1,
      sym__spawn_binding_start,
    ACTIONS(165), 1,
      sym__until_binding_start,
    STATE(238), 1,
      sym_text_inline,
    STATE(305), 1,
      sym_text_block,
    STATE(650), 1,
      sym_line_end,
    STATE(239), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [298] = 18,
    ACTIONS(89), 1,
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
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    ACTIONS(169), 1,
      sym__exec_binding_start,
    ACTIONS(171), 1,
      sym__collection_binding_start,
    ACTIONS(173), 1,
      sym__spawn_binding_start,
    ACTIONS(175), 1,
      sym__until_binding_start,
    STATE(446), 1,
      sym_text_inline,
    STATE(515), 1,
      sym_text_block,
    STATE(615), 1,
      sym_line_end,
    STATE(447), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [360] = 13,
    ACTIONS(177), 1,
      sym_with_keyword,
    ACTIONS(179), 1,
      sym_struct_keyword,
    ACTIONS(181), 1,
      sym_psyche_keyword,
    ACTIONS(183), 1,
      sym_skill_keyword,
    ACTIONS(185), 1,
      sym_service_keyword,
    ACTIONS(187), 1,
      sym_prompt_keyword,
    ACTIONS(189), 1,
      sym_context_keyword,
    ACTIONS(191), 1,
      sym_instruct_keyword,
    ACTIONS(193), 1,
      sym_agic_keyword,
    ACTIONS(195), 1,
      sym_task_keyword,
    ACTIONS(197), 1,
      sym_chore_keyword,
    ACTIONS(199), 1,
      sym_flow_keyword,
    STATE(589), 12,
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
  [411] = 7,
    ACTIONS(201), 1,
      anon_sym_lanes,
    ACTIONS(209), 1,
      sym_recall_keyword,
    STATE(667), 1,
      sym__query_directive_key,
    STATE(937), 1,
      sym__route_directive_key,
    ACTIONS(205), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(207), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(203), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [440] = 7,
    ACTIONS(211), 1,
      anon_sym_lanes,
    ACTIONS(215), 1,
      sym_recall_keyword,
    STATE(535), 1,
      sym__query_directive_key,
    STATE(850), 1,
      sym__route_directive_key,
    ACTIONS(205), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(213), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(203), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [469] = 2,
    ACTIONS(219), 5,
      sym_newline,
      sym__exec_binding_start,
      sym__collection_binding_start,
      sym__spawn_binding_start,
      sym__until_binding_start,
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
  [488] = 6,
    ACTIONS(39), 1,
      sym_flow_generate_keyword,
    ACTIONS(41), 1,
      sym_flow_reduce_keyword,
    ACTIONS(43), 1,
      sym_flow_map_keyword,
    STATE(469), 1,
      sym__collection_binding_word,
    ACTIONS(221), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(468), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [514] = 6,
    ACTIONS(71), 1,
      sym_flow_generate_keyword,
    ACTIONS(73), 1,
      sym_flow_reduce_keyword,
    ACTIONS(75), 1,
      sym_flow_map_keyword,
    STATE(639), 1,
      sym__collection_binding_word,
    ACTIONS(223), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(254), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [540] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(225), 1,
      sym_flow_if_keyword,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    STATE(355), 1,
      sym__named_if_complement,
    STATE(630), 1,
      sym__inline_if_complement,
    STATE(631), 1,
      sym__if_complements,
    STATE(771), 1,
      sym__lanes_complement,
    STATE(772), 1,
      sym_position,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(229), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [573] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(225), 1,
      sym_flow_if_keyword,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    STATE(355), 1,
      sym__named_if_complement,
    STATE(630), 1,
      sym__inline_if_complement,
    STATE(633), 1,
      sym__if_complements,
    STATE(771), 1,
      sym__lanes_complement,
    STATE(777), 1,
      sym_position,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(229), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [606] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    ACTIONS(231), 1,
      sym_flow_if_keyword,
    STATE(206), 1,
      sym__inline_if_complement,
    STATE(207), 1,
      sym__if_complements,
    STATE(360), 1,
      sym__named_if_complement,
    STATE(774), 1,
      sym__lanes_complement,
    STATE(775), 1,
      sym_position,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(229), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [639] = 10,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    ACTIONS(231), 1,
      sym_flow_if_keyword,
    STATE(206), 1,
      sym__inline_if_complement,
    STATE(208), 1,
      sym__if_complements,
    STATE(360), 1,
      sym__named_if_complement,
    STATE(774), 1,
      sym__lanes_complement,
    STATE(776), 1,
      sym_position,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(229), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [672] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(924), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [696] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1037), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [720] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1016), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [744] = 10,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    ACTIONS(239), 1,
      sym_flow_using_keyword,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(245), 1,
      sym_newline,
    STATE(351), 1,
      sym__lanes_complement,
    STATE(625), 1,
      sym__runnable_complements,
    STATE(627), 1,
      sym_inline_agic,
    STATE(762), 1,
      sym__named_using_complement,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [776] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1002), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [800] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(969), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [824] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1077), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [848] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(979), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [872] = 6,
    ACTIONS(249), 1,
      sym_pascal_name,
    STATE(362), 1,
      sym_base_type,
    STATE(782), 1,
      sym_type_name,
    STATE(830), 1,
      sym_type,
    STATE(781), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(247), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [896] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(950), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [920] = 6,
    ACTIONS(249), 1,
      sym_pascal_name,
    STATE(362), 1,
      sym_base_type,
    STATE(782), 1,
      sym_type_name,
    STATE(807), 1,
      sym_type,
    STATE(781), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(247), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [944] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1000), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [968] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(866), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [992] = 10,
    ACTIONS(227), 1,
      sym_flow_in_keyword,
    ACTIONS(239), 1,
      sym_flow_using_keyword,
    ACTIONS(245), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    STATE(205), 1,
      sym_inline_agic,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(408), 1,
      sym__runnable_complements,
    STATE(770), 1,
      sym__named_using_complement,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [1024] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1067), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1048] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1053), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1072] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1008), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1096] = 6,
    ACTIONS(235), 1,
      sym_pascal_name,
    STATE(197), 1,
      sym_base_type,
    STATE(562), 1,
      sym_type_name,
    STATE(1036), 1,
      sym_type,
    STATE(561), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(233), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1120] = 9,
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
    STATE(344), 1,
      sym_property,
    STATE(1049), 1,
      sym_cap_body,
    STATE(1050), 1,
      sym__cap_text_body,
    STATE(41), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1149] = 9,
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
    STATE(344), 1,
      sym_property,
    STATE(972), 1,
      sym_cap_body,
    STATE(1050), 1,
      sym__cap_text_body,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1178] = 9,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(265), 1,
      sym_blank_line,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(344), 1,
      sym_property,
    STATE(1050), 1,
      sym__cap_text_body,
    STATE(1083), 1,
      sym_cap_body,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1207] = 9,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(271), 1,
      sym_blank_line,
    ACTIONS(273), 1,
      sym__dedent,
    STATE(344), 1,
      sym_property,
    STATE(1019), 1,
      sym_cap_body,
    STATE(1050), 1,
      sym__cap_text_body,
    STATE(40), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1236] = 8,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(275), 1,
      sym__one_integer_literal,
    ACTIONS(277), 1,
      sym__other_integer_literal,
    ACTIONS(279), 1,
      sym_flow_windowing_keyword,
    ACTIONS(281), 1,
      sym_colon,
    STATE(836), 1,
      sym__repeat_count_complement,
    STATE(1074), 1,
      sym__window_complement,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1262] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(283), 1,
      sym_blank_line,
    ACTIONS(285), 1,
      sym__dedent,
    STATE(1007), 1,
      sym__cap_text_body,
    STATE(48), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1286] = 9,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(289), 1,
      sym_snake_name,
    ACTIONS(291), 1,
      sym_text_line,
    ACTIONS(293), 1,
      sym_newline,
    STATE(483), 1,
      sym_line_end,
    STATE(593), 1,
      sym_inline_agic,
    STATE(727), 1,
      sym_runnable,
  [1314] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(295), 1,
      sym_blank_line,
    ACTIONS(297), 1,
      sym__dedent,
    STATE(968), 1,
      sym__cap_text_body,
    STATE(55), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1338] = 8,
    ACTIONS(239), 1,
      sym_flow_using_keyword,
    ACTIONS(245), 1,
      sym_newline,
    ACTIONS(299), 1,
      sym_arrow,
    ACTIONS(301), 1,
      sym_colon,
    STATE(121), 1,
      sym__reduce_inline_block,
    STATE(407), 1,
      sym__reduce_inline_line,
    STATE(632), 1,
      sym__named_using_complement,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [1364] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(303), 1,
      sym_blank_line,
    ACTIONS(305), 1,
      sym__dedent,
    STATE(1073), 1,
      sym__cap_text_body,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1388] = 8,
    ACTIONS(239), 1,
      sym_flow_using_keyword,
    ACTIONS(245), 1,
      sym_newline,
    ACTIONS(307), 1,
      sym_arrow,
    ACTIONS(309), 1,
      sym_colon,
    STATE(117), 1,
      sym__reduce_inline_block,
    STATE(623), 1,
      sym__reduce_inline_line,
    STATE(624), 1,
      sym__named_using_complement,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [1414] = 8,
    ACTIONS(311), 1,
      sym_flow_if_keyword,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    STATE(355), 1,
      sym__named_if_complement,
    STATE(630), 1,
      sym__inline_if_complement,
    STATE(631), 1,
      sym__if_complements,
    STATE(771), 1,
      sym__lanes_complement,
    STATE(772), 1,
      sym_position,
    ACTIONS(315), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1440] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(317), 1,
      sym_flow_if_keyword,
    STATE(206), 1,
      sym__inline_if_complement,
    STATE(207), 1,
      sym__if_complements,
    STATE(360), 1,
      sym__named_if_complement,
    STATE(774), 1,
      sym__lanes_complement,
    STATE(775), 1,
      sym_position,
    ACTIONS(315), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1466] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(317), 1,
      sym_flow_if_keyword,
    STATE(206), 1,
      sym__inline_if_complement,
    STATE(208), 1,
      sym__if_complements,
    STATE(360), 1,
      sym__named_if_complement,
    STATE(774), 1,
      sym__lanes_complement,
    STATE(776), 1,
      sym_position,
    ACTIONS(315), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1492] = 8,
    ACTIONS(311), 1,
      sym_flow_if_keyword,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    STATE(355), 1,
      sym__named_if_complement,
    STATE(630), 1,
      sym__inline_if_complement,
    STATE(633), 1,
      sym__if_complements,
    STATE(771), 1,
      sym__lanes_complement,
    STATE(777), 1,
      sym_position,
    ACTIONS(315), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1518] = 9,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(321), 1,
      sym_text_line,
    ACTIONS(323), 1,
      sym_newline,
    STATE(264), 1,
      sym_line_end,
    STATE(405), 1,
      sym_inline_agic,
    STATE(760), 1,
      sym_runnable,
  [1546] = 7,
    ACTIONS(257), 1,
      sym__comment_start,
    ACTIONS(261), 1,
      sym__line_start,
    ACTIONS(263), 1,
      sym__cap_text_start,
    ACTIONS(285), 1,
      sym__dedent,
    ACTIONS(303), 1,
      sym_blank_line,
    STATE(1007), 1,
      sym__cap_text_body,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1570] = 8,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(275), 1,
      sym__one_integer_literal,
    ACTIONS(277), 1,
      sym__other_integer_literal,
    ACTIONS(279), 1,
      sym_flow_windowing_keyword,
    ACTIONS(325), 1,
      sym_colon,
    STATE(792), 1,
      sym__repeat_count_complement,
    STATE(1084), 1,
      sym__window_complement,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1596] = 7,
    ACTIONS(327), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(331), 1,
      sym__dedent,
    ACTIONS(333), 1,
      sym__line_start,
    STATE(103), 1,
      sym__flow_statement,
    STATE(945), 1,
      sym__repeat_statements,
    STATE(203), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1619] = 6,
    ACTIONS(335), 1,
      sym_blank_line,
    ACTIONS(338), 1,
      sym__comment_start,
    ACTIONS(343), 1,
      sym__line_start,
    STATE(344), 1,
      sym_property,
    ACTIONS(341), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(58), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1640] = 5,
    ACTIONS(346), 1,
      sym_blank_line,
    ACTIONS(351), 1,
      sym__flow_raw_text,
    STATE(59), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(166), 1,
      sym__implicit_run_line,
    ACTIONS(349), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [1659] = 5,
    ACTIONS(354), 1,
      sym_blank_line,
    ACTIONS(357), 1,
      sym__comment_start,
    ACTIONS(362), 1,
      sym__line_start,
    ACTIONS(360), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(60), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1678] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(398), 1,
      sym_inline_agic,
    STATE(758), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1701] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(403), 1,
      sym_inline_agic,
    STATE(759), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1724] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(251), 1,
      sym_arrow,
    ACTIONS(253), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(405), 1,
      sym_inline_agic,
    STATE(760), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1747] = 5,
    ACTIONS(365), 1,
      sym_blank_line,
    ACTIONS(368), 1,
      sym__comment_start,
    ACTIONS(373), 1,
      sym__directive_start,
    ACTIONS(371), 2,
      sym__dedent,
      sym__line_start,
    STATE(64), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1766] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(592), 1,
      sym_inline_agic,
    STATE(726), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [1789] = 6,
    ACTIONS(376), 1,
      sym_blank_line,
    ACTIONS(378), 1,
      sym__comment_start,
    ACTIONS(382), 1,
      sym__line_start,
    STATE(296), 1,
      sym__flow_statement,
    ACTIONS(380), 2,
      sym__dedent,
      sym__until_start,
    STATE(67), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1810] = 6,
    ACTIONS(378), 1,
      sym__comment_start,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(384), 1,
      sym_blank_line,
    STATE(296), 1,
      sym__flow_statement,
    ACTIONS(386), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1831] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    STATE(351), 1,
      sym__lanes_complement,
    STATE(625), 1,
      sym__runnable_complements,
    STATE(627), 1,
      sym_inline_agic,
    STATE(762), 1,
      sym__named_using_complement,
  [1856] = 7,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(394), 1,
      sym_blank_line,
    ACTIONS(396), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1048), 1,
      sym__repeat_statements,
    STATE(72), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1879] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    STATE(205), 1,
      sym_inline_agic,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(408), 1,
      sym__runnable_complements,
    STATE(770), 1,
      sym__named_using_complement,
  [1904] = 6,
    ACTIONS(402), 1,
      sym_blank_line,
    ACTIONS(405), 1,
      sym__comment_start,
    ACTIONS(410), 1,
      sym__line_start,
    STATE(296), 1,
      sym__flow_statement,
    ACTIONS(408), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [1925] = 7,
    ACTIONS(327), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(413), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1056), 1,
      sym__repeat_statements,
    STATE(203), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [1948] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    STATE(205), 1,
      sym_inline_agic,
    STATE(219), 1,
      sym__runnable_complements,
    STATE(358), 1,
      sym__lanes_complement,
    STATE(770), 1,
      sym__named_using_complement,
  [1973] = 5,
    ACTIONS(415), 1,
      sym_blank_line,
    ACTIONS(417), 1,
      sym__comment_start,
    ACTIONS(421), 1,
      sym__directive_start,
    ACTIONS(419), 2,
      sym__dedent,
      sym__line_start,
    STATE(64), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [1992] = 7,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(423), 1,
      sym_blank_line,
    ACTIONS(425), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1081), 1,
      sym__repeat_statements,
    STATE(78), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2015] = 5,
    ACTIONS(417), 1,
      sym__comment_start,
    ACTIONS(421), 1,
      sym__directive_start,
    ACTIONS(427), 1,
      sym_blank_line,
    ACTIONS(429), 2,
      sym__dedent,
      sym__line_start,
    STATE(74), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2034] = 7,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(431), 1,
      sym_blank_line,
    ACTIONS(433), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1070), 1,
      sym__repeat_statements,
    STATE(57), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2057] = 7,
    ACTIONS(327), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(435), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(973), 1,
      sym__repeat_statements,
    STATE(203), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2080] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(591), 1,
      sym_inline_agic,
    STATE(723), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [2103] = 7,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(437), 1,
      sym_blank_line,
    ACTIONS(439), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(946), 1,
      sym__repeat_statements,
    STATE(81), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2126] = 7,
    ACTIONS(327), 1,
      sym_blank_line,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(441), 1,
      sym__dedent,
    STATE(103), 1,
      sym__flow_statement,
    STATE(949), 1,
      sym__repeat_statements,
    STATE(203), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2149] = 8,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    STATE(351), 1,
      sym__lanes_complement,
    STATE(419), 1,
      sym__runnable_complements,
    STATE(627), 1,
      sym_inline_agic,
    STATE(762), 1,
      sym__named_using_complement,
  [2174] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(443), 1,
      sym_blank_line,
    STATE(85), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(166), 1,
      sym__implicit_run_line,
    ACTIONS(445), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2193] = 7,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(241), 1,
      sym_arrow,
    ACTIONS(243), 1,
      sym_colon,
    ACTIONS(289), 1,
      sym_snake_name,
    STATE(593), 1,
      sym_inline_agic,
    STATE(727), 1,
      sym_runnable,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [2216] = 5,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    ACTIONS(447), 1,
      sym_blank_line,
    STATE(59), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(166), 1,
      sym__implicit_run_line,
    ACTIONS(449), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2235] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(451), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1063), 1,
      sym__repeat_statements,
    STATE(140), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2255] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(453), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1058), 1,
      sym__repeat_statements,
    STATE(91), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2275] = 6,
    ACTIONS(455), 1,
      sym__line_start,
    ACTIONS(457), 1,
      sym__directive_start,
    STATE(94), 1,
      sym_directive,
    STATE(145), 1,
      sym__flow_statement,
    STATE(697), 1,
      sym__directives,
    STATE(1066), 2,
      sym_statements,
      sym__pass_statement,
  [2295] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(459), 1,
      sym_blank_line,
    ACTIONS(461), 1,
      sym__dedent,
    STATE(119), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2313] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym_blank_line,
    ACTIONS(465), 1,
      sym__dedent,
    ACTIONS(467), 1,
      sym__line_start,
    STATE(122), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2331] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(469), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1017), 1,
      sym__repeat_statements,
    STATE(319), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2351] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(465), 1,
      sym__dedent,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(471), 1,
      sym_blank_line,
    STATE(123), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2369] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(473), 1,
      sym_blank_line,
    ACTIONS(475), 1,
      sym__dedent,
    STATE(90), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2387] = 5,
    ACTIONS(429), 1,
      sym__line_start,
    ACTIONS(457), 1,
      sym__directive_start,
    ACTIONS(477), 1,
      sym_blank_line,
    ACTIONS(479), 1,
      sym__comment_start,
    STATE(96), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2405] = 4,
    ACTIONS(483), 1,
      sym_blank_line,
    ACTIONS(486), 1,
      sym__comment_start,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(481), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2421] = 5,
    ACTIONS(419), 1,
      sym__line_start,
    ACTIONS(457), 1,
      sym__directive_start,
    ACTIONS(479), 1,
      sym__comment_start,
    ACTIONS(489), 1,
      sym_blank_line,
    STATE(98), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2439] = 5,
    ACTIONS(493), 1,
      sym_blank_line,
    ACTIONS(495), 1,
      sym__comment_start,
    ACTIONS(497), 1,
      sym__indent,
    ACTIONS(491), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(129), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2457] = 5,
    ACTIONS(371), 1,
      sym__line_start,
    ACTIONS(499), 1,
      sym_blank_line,
    ACTIONS(502), 1,
      sym__comment_start,
    ACTIONS(505), 1,
      sym__directive_start,
    STATE(98), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2475] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(167), 1,
      sym__implicit_run_line,
    ACTIONS(449), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2489] = 5,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    ACTIONS(508), 1,
      sym_blank_line,
    STATE(124), 1,
      aux_sym_unroled_message_repeat1,
    STATE(361), 1,
      sym__unroled_message_line,
    ACTIONS(510), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2507] = 3,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(167), 1,
      sym__implicit_run_line,
    ACTIONS(512), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2521] = 4,
    STATE(661), 1,
      sym_recall_source,
    STATE(827), 1,
      sym_recall_value,
    ACTIONS(514), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(516), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [2537] = 6,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(380), 1,
      sym__dedent,
    ACTIONS(518), 1,
      sym_blank_line,
    STATE(563), 1,
      sym__flow_statement,
    STATE(104), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2557] = 6,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(386), 1,
      sym__dedent,
    ACTIONS(520), 1,
      sym_blank_line,
    STATE(563), 1,
      sym__flow_statement,
    STATE(105), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2577] = 6,
    ACTIONS(408), 1,
      sym__dedent,
    ACTIONS(522), 1,
      sym_blank_line,
    ACTIONS(525), 1,
      sym__comment_start,
    ACTIONS(528), 1,
      sym__line_start,
    STATE(563), 1,
      sym__flow_statement,
    STATE(105), 2,
      sym__trivia,
      aux_sym__repeat_statements_repeat1,
  [2597] = 6,
    ACTIONS(455), 1,
      sym__line_start,
    ACTIONS(457), 1,
      sym__directive_start,
    STATE(94), 1,
      sym_directive,
    STATE(145), 1,
      sym__flow_statement,
    STATE(748), 1,
      sym__directives,
    STATE(1068), 2,
      sym_statements,
      sym__pass_statement,
  [2617] = 5,
    ACTIONS(533), 1,
      sym__module_doc_start,
    ACTIONS(535), 1,
      sym__item_doc_start,
    ACTIONS(537), 1,
      sym__param_item_doc_start,
    ACTIONS(531), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(756), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2635] = 5,
    ACTIONS(539), 1,
      sym_blank_line,
    ACTIONS(542), 1,
      sym__comment_start,
    ACTIONS(545), 1,
      sym__dedent,
    ACTIONS(547), 1,
      sym__line_start,
    STATE(108), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2653] = 5,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    ACTIONS(550), 1,
      sym_blank_line,
    STATE(100), 1,
      aux_sym_unroled_message_repeat1,
    STATE(361), 1,
      sym__unroled_message_line,
    ACTIONS(552), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2671] = 7,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(554), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
    STATE(548), 1,
      sym_context_body,
    STATE(549), 1,
      sym_text_inline,
    STATE(550), 1,
      sym_text_block,
  [2693] = 7,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(554), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
    STATE(550), 1,
      sym_text_block,
    STATE(553), 1,
      sym_instruct_body,
    STATE(554), 1,
      sym_text_inline,
  [2715] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(556), 1,
      sym_blank_line,
    ACTIONS(558), 1,
      sym__dedent,
    ACTIONS(560), 1,
      sym__line_start,
    STATE(108), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2733] = 5,
    ACTIONS(495), 1,
      sym__comment_start,
    ACTIONS(564), 1,
      sym_blank_line,
    ACTIONS(566), 1,
      sym__indent,
    ACTIONS(562), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2751] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(469), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1054), 1,
      sym__repeat_statements,
    STATE(319), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2771] = 5,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 1,
      sym_blank_line,
    ACTIONS(573), 1,
      sym__comment_start,
    ACTIONS(576), 1,
      sym__line_start,
    STATE(115), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [2789] = 5,
    ACTIONS(495), 1,
      sym__comment_start,
    ACTIONS(581), 1,
      sym_blank_line,
    ACTIONS(583), 1,
      sym__indent,
    ACTIONS(579), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(113), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2807] = 6,
    ACTIONS(585), 1,
      sym_blank_line,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(589), 1,
      sym__dedent,
    ACTIONS(591), 1,
      sym__from_start,
    STATE(395), 1,
      sym__from_complement,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2827] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(593), 1,
      sym_blank_line,
    STATE(126), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(369), 1,
      sym__implicit_run_line,
    ACTIONS(449), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2845] = 5,
    ACTIONS(595), 1,
      sym_blank_line,
    ACTIONS(598), 1,
      sym__comment_start,
    ACTIONS(601), 1,
      sym__dedent,
    ACTIONS(603), 1,
      sym__line_start,
    STATE(119), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2863] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(560), 1,
      sym__line_start,
    ACTIONS(606), 1,
      sym_blank_line,
    ACTIONS(608), 1,
      sym__dedent,
    STATE(112), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [2881] = 6,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(591), 1,
      sym__from_start,
    ACTIONS(610), 1,
      sym_blank_line,
    ACTIONS(612), 1,
      sym__dedent,
    STATE(363), 1,
      sym__from_complement,
    STATE(364), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2901] = 5,
    ACTIONS(614), 1,
      sym_blank_line,
    ACTIONS(617), 1,
      sym__comment_start,
    ACTIONS(620), 1,
      sym__dedent,
    ACTIONS(622), 1,
      sym__line_start,
    STATE(122), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2919] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(463), 1,
      sym_blank_line,
    ACTIONS(467), 1,
      sym__line_start,
    ACTIONS(625), 1,
      sym__dedent,
    STATE(122), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2937] = 5,
    ACTIONS(627), 1,
      sym_blank_line,
    ACTIONS(632), 1,
      sym__agic_raw_text,
    STATE(124), 1,
      aux_sym_unroled_message_repeat1,
    STATE(361), 1,
      sym__unroled_message_line,
    ACTIONS(630), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2955] = 6,
    ACTIONS(421), 1,
      sym__directive_start,
    ACTIONS(635), 1,
      sym__line_start,
    STATE(76), 1,
      sym_directive,
    STATE(120), 1,
      sym_message,
    STATE(539), 1,
      sym__directives,
    STATE(1018), 2,
      sym_messages,
      sym__pass_statement,
  [2975] = 5,
    ACTIONS(637), 1,
      sym_blank_line,
    ACTIONS(640), 1,
      sym__flow_raw_text,
    STATE(126), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(369), 1,
      sym__implicit_run_line,
    ACTIONS(349), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2993] = 6,
    ACTIONS(421), 1,
      sym__directive_start,
    ACTIONS(635), 1,
      sym__line_start,
    STATE(76), 1,
      sym_directive,
    STATE(120), 1,
      sym_message,
    STATE(475), 1,
      sym__directives,
    STATE(961), 2,
      sym_messages,
      sym__pass_statement,
  [3013] = 7,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(554), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
    STATE(549), 1,
      sym_text_inline,
    STATE(550), 1,
      sym_text_block,
    STATE(620), 1,
      sym_context_body,
  [3035] = 5,
    ACTIONS(495), 1,
      sym__comment_start,
    ACTIONS(564), 1,
      sym_blank_line,
    ACTIONS(645), 1,
      sym__indent,
    ACTIONS(643), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3053] = 5,
    ACTIONS(649), 1,
      sym__module_doc_start,
    ACTIONS(651), 1,
      sym__item_doc_start,
    ACTIONS(653), 1,
      sym__param_item_doc_start,
    ACTIONS(647), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(291), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3071] = 5,
    ACTIONS(657), 1,
      sym__module_doc_start,
    ACTIONS(659), 1,
      sym__item_doc_start,
    ACTIONS(661), 1,
      sym__param_item_doc_start,
    ACTIONS(655), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(298), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3089] = 5,
    ACTIONS(665), 1,
      sym__module_doc_start,
    ACTIONS(667), 1,
      sym__item_doc_start,
    ACTIONS(669), 1,
      sym__param_item_doc_start,
    ACTIONS(663), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(313), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3107] = 5,
    ACTIONS(673), 1,
      sym__module_doc_start,
    ACTIONS(675), 1,
      sym__item_doc_start,
    ACTIONS(677), 1,
      sym__param_item_doc_start,
    ACTIONS(671), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(594), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3125] = 5,
    ACTIONS(681), 1,
      sym__module_doc_start,
    ACTIONS(683), 1,
      sym__item_doc_start,
    ACTIONS(685), 1,
      sym__param_item_doc_start,
    ACTIONS(679), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(602), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3143] = 5,
    ACTIONS(689), 1,
      sym__module_doc_start,
    ACTIONS(691), 1,
      sym__item_doc_start,
    ACTIONS(693), 1,
      sym__param_item_doc_start,
    ACTIONS(687), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(675), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3161] = 5,
    ACTIONS(697), 1,
      sym__module_doc_start,
    ACTIONS(699), 1,
      sym__item_doc_start,
    ACTIONS(701), 1,
      sym__param_item_doc_start,
    ACTIONS(695), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(741), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3179] = 5,
    ACTIONS(705), 1,
      sym__module_doc_start,
    ACTIONS(707), 1,
      sym__item_doc_start,
    ACTIONS(709), 1,
      sym__param_item_doc_start,
    ACTIONS(703), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(324), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3197] = 4,
    STATE(661), 1,
      sym_recall_source,
    STATE(780), 1,
      sym_recall_value,
    ACTIONS(514), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(516), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3213] = 5,
    ACTIONS(713), 1,
      sym__module_doc_start,
    ACTIONS(715), 1,
      sym__item_doc_start,
    ACTIONS(717), 1,
      sym__param_item_doc_start,
    ACTIONS(711), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(585), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3231] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(469), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(1075), 1,
      sym__repeat_statements,
    STATE(319), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3251] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(719), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(943), 1,
      sym__repeat_statements,
    STATE(142), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3271] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(469), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(948), 1,
      sym__repeat_statements,
    STATE(319), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3291] = 7,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(554), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
    STATE(550), 1,
      sym_text_block,
    STATE(554), 1,
      sym_text_inline,
    STATE(621), 1,
      sym_instruct_body,
  [3313] = 6,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(721), 1,
      sym_blank_line,
    STATE(103), 1,
      sym__flow_statement,
    STATE(988), 1,
      sym__repeat_statements,
    STATE(114), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3333] = 5,
    ACTIONS(329), 1,
      sym__comment_start,
    ACTIONS(333), 1,
      sym__line_start,
    ACTIONS(723), 1,
      sym_blank_line,
    ACTIONS(725), 1,
      sym__dedent,
    STATE(89), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3351] = 5,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    ACTIONS(727), 1,
      sym_blank_line,
    STATE(118), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(369), 1,
      sym__implicit_run_line,
    ACTIONS(445), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3369] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    ACTIONS(731), 1,
      sym_blank_line,
    STATE(115), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3387] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    STATE(515), 1,
      sym_text_block,
    STATE(571), 1,
      sym_text_inline,
    STATE(615), 1,
      sym_line_end,
  [3406] = 5,
    ACTIONS(733), 1,
      sym_blank_line,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(737), 1,
      sym__indent,
    STATE(478), 1,
      sym_repeat_body,
    STATE(321), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3423] = 5,
    ACTIONS(733), 1,
      sym_blank_line,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(737), 1,
      sym__indent,
    STATE(479), 1,
      sym_repeat_body,
    STATE(321), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3440] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(518), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3457] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(743), 1,
      sym_text_line,
    STATE(648), 1,
      sym_line_end,
    STATE(701), 1,
      sym_text_inline,
    STATE(712), 1,
      sym_text_block,
  [3476] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(519), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3493] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(645), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3510] = 5,
    ACTIONS(733), 1,
      sym_blank_line,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(737), 1,
      sym__indent,
    STATE(490), 1,
      sym_repeat_body,
    STATE(321), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3527] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(646), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3544] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(565), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3561] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(745), 1,
      sym_blank_line,
    ACTIONS(747), 1,
      sym__indent,
    STATE(450), 1,
      sym_struct_body,
    STATE(346), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3578] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(554), 1,
      sym_text_line,
    STATE(547), 1,
      sym_line_end,
    STATE(550), 1,
      sym_text_block,
    STATE(730), 1,
      sym_text_inline,
  [3597] = 3,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    STATE(388), 1,
      sym__unroled_message_line,
    ACTIONS(510), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3610] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(636), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3627] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    STATE(515), 1,
      sym_text_block,
    STATE(615), 1,
      sym_line_end,
    STATE(653), 1,
      sym_text_inline,
  [3646] = 4,
    ACTIONS(753), 1,
      sym_array_suffix,
    STATE(169), 1,
      aux_sym_type_repeat1,
    STATE(628), 1,
      sym_type_suffix,
    ACTIONS(755), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3661] = 1,
    ACTIONS(757), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3670] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(669), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3687] = 1,
    ACTIONS(759), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3696] = 1,
    ACTIONS(761), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3705] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(529), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3722] = 4,
    ACTIONS(763), 1,
      sym_array_suffix,
    STATE(169), 1,
      aux_sym_type_repeat1,
    STATE(628), 1,
      sym_type_suffix,
    ACTIONS(766), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [3737] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    STATE(515), 1,
      sym_text_block,
    STATE(615), 1,
      sym_line_end,
    STATE(671), 1,
      sym_text_inline,
  [3756] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    STATE(464), 1,
      sym_text_inline,
    STATE(515), 1,
      sym_text_block,
    STATE(615), 1,
      sym_line_end,
  [3775] = 6,
    ACTIONS(275), 1,
      sym__one_integer_literal,
    ACTIONS(768), 1,
      sym__other_integer_literal,
    ACTIONS(770), 1,
      sym_flow_windowing_keyword,
    ACTIONS(772), 1,
      sym_colon,
    STATE(836), 1,
      sym__repeat_count_complement,
    STATE(1074), 1,
      sym__window_complement,
  [3794] = 6,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(774), 1,
      sym_arrow,
    ACTIONS(776), 1,
      sym_colon,
    STATE(117), 1,
      sym__reduce_inline_block,
    STATE(623), 1,
      sym__reduce_inline_line,
    STATE(624), 1,
      sym__named_using_complement,
  [3813] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(584), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3830] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(586), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3847] = 6,
    ACTIONS(778), 1,
      sym_arrow,
    ACTIONS(780), 1,
      sym_colon,
    ACTIONS(782), 1,
      sym_lparen,
    ACTIONS(784), 1,
      sym_snake_name,
    STATE(487), 1,
      sym_agic_name,
    STATE(864), 1,
      sym_params,
  [3866] = 6,
    ACTIONS(275), 1,
      sym__one_integer_literal,
    ACTIONS(768), 1,
      sym__other_integer_literal,
    ACTIONS(770), 1,
      sym_flow_windowing_keyword,
    ACTIONS(786), 1,
      sym_colon,
    STATE(792), 1,
      sym__repeat_count_complement,
    STATE(1084), 1,
      sym__window_complement,
  [3885] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(157), 1,
      sym_newline,
    ACTIONS(167), 1,
      sym_text_line,
    STATE(418), 1,
      sym_text_inline,
    STATE(515), 1,
      sym_text_block,
    STATE(615), 1,
      sym_line_end,
  [3904] = 6,
    ACTIONS(782), 1,
      sym_lparen,
    ACTIONS(788), 1,
      sym_arrow,
    ACTIONS(790), 1,
      sym_colon,
    ACTIONS(792), 1,
      sym_snake_name,
    STATE(521), 1,
      sym_flow_name,
    STATE(887), 1,
      sym_params,
  [3923] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(155), 1,
      sym_text_line,
    ACTIONS(157), 1,
      sym_newline,
    STATE(213), 1,
      sym_text_inline,
    STATE(305), 1,
      sym_text_block,
    STATE(650), 1,
      sym_line_end,
  [3942] = 6,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(794), 1,
      sym_arrow,
    ACTIONS(796), 1,
      sym_colon,
    STATE(121), 1,
      sym__reduce_inline_block,
    STATE(407), 1,
      sym__reduce_inline_line,
    STATE(632), 1,
      sym__named_using_complement,
  [3961] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(489), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3978] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(155), 1,
      sym_text_line,
    ACTIONS(157), 1,
      sym_newline,
    STATE(218), 1,
      sym_text_inline,
    STATE(305), 1,
      sym_text_block,
    STATE(650), 1,
      sym_line_end,
  [3997] = 6,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(798), 1,
      sym_flow_by_keyword,
    STATE(401), 1,
      sym__named_by_complement,
    STATE(433), 1,
      sym__inline_by_complement,
    STATE(434), 1,
      sym__by_complements,
    STATE(718), 1,
      sym__lanes_complement,
  [4016] = 6,
    ACTIONS(313), 1,
      sym_flow_in_keyword,
    ACTIONS(800), 1,
      sym_flow_by_keyword,
    STATE(230), 1,
      sym__inline_by_complement,
    STATE(231), 1,
      sym__by_complements,
    STATE(366), 1,
      sym__named_by_complement,
    STATE(788), 1,
      sym__lanes_complement,
  [4035] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(404), 1,
      sym__implicit_run_line,
    ACTIONS(449), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4048] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(802), 1,
      sym_blank_line,
    ACTIONS(804), 1,
      sym__indent,
    STATE(250), 1,
      sym_repeat_body,
    STATE(411), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4065] = 6,
    ACTIONS(153), 1,
      sym__inline_comment,
    ACTIONS(155), 1,
      sym_text_line,
    ACTIONS(157), 1,
      sym_newline,
    STATE(251), 1,
      sym_text_inline,
    STATE(305), 1,
      sym_text_block,
    STATE(650), 1,
      sym_line_end,
  [4084] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(802), 1,
      sym_blank_line,
    ACTIONS(804), 1,
      sym__indent,
    STATE(260), 1,
      sym_repeat_body,
    STATE(411), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4101] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(802), 1,
      sym_blank_line,
    ACTIONS(804), 1,
      sym__indent,
    STATE(261), 1,
      sym_repeat_body,
    STATE(411), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4118] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(435), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4135] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(802), 1,
      sym_blank_line,
    ACTIONS(804), 1,
      sym__indent,
    STATE(268), 1,
      sym_repeat_body,
    STATE(411), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4152] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(438), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4169] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(498), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4186] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(749), 1,
      sym_blank_line,
    ACTIONS(751), 1,
      sym__indent,
    STATE(541), 1,
      sym_agic_body,
    STATE(343), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4203] = 3,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    STATE(388), 1,
      sym__unroled_message_line,
    ACTIONS(806), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4216] = 4,
    ACTIONS(753), 1,
      sym_array_suffix,
    STATE(163), 1,
      aux_sym_type_repeat1,
    STATE(628), 1,
      sym_type_suffix,
    ACTIONS(808), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4231] = 4,
    ACTIONS(111), 1,
      sym_newline,
    STATE(185), 1,
      sym__order_complement,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(810), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4246] = 5,
    ACTIONS(733), 1,
      sym_blank_line,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(737), 1,
      sym__indent,
    STATE(459), 1,
      sym_repeat_body,
    STATE(321), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4263] = 3,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(404), 1,
      sym__implicit_run_line,
    ACTIONS(512), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4276] = 4,
    ACTIONS(111), 1,
      sym_newline,
    STATE(184), 1,
      sym__order_complement,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(810), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4291] = 5,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(739), 1,
      sym_blank_line,
    ACTIONS(741), 1,
      sym__indent,
    STATE(546), 1,
      sym_flow_body,
    STATE(320), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4308] = 4,
    ACTIONS(812), 1,
      sym_blank_line,
    ACTIONS(815), 1,
      sym__comment_start,
    ACTIONS(481), 2,
      sym__dedent,
      sym__line_start,
    STATE(203), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4323] = 1,
    ACTIONS(818), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4331] = 1,
    ACTIONS(820), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4339] = 1,
    ACTIONS(822), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4347] = 1,
    ACTIONS(824), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4355] = 1,
    ACTIONS(826), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4363] = 1,
    ACTIONS(828), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [4371] = 5,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(830), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(87), 1,
      sym_until_clause,
    STATE(709), 1,
      sym__repeat_statements,
  [4387] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(834), 1,
      sym__dedent,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4401] = 1,
    ACTIONS(838), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4409] = 1,
    ACTIONS(840), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4417] = 1,
    ACTIONS(842), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4425] = 1,
    ACTIONS(844), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4433] = 1,
    ACTIONS(846), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4441] = 1,
    ACTIONS(848), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4449] = 1,
    ACTIONS(850), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4457] = 1,
    ACTIONS(852), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4465] = 1,
    ACTIONS(854), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4473] = 1,
    ACTIONS(856), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4481] = 1,
    ACTIONS(858), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4489] = 1,
    ACTIONS(860), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4497] = 1,
    ACTIONS(862), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4505] = 1,
    ACTIONS(864), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4513] = 1,
    ACTIONS(866), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4521] = 1,
    ACTIONS(868), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4529] = 1,
    ACTIONS(870), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4537] = 1,
    ACTIONS(872), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4545] = 1,
    ACTIONS(874), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4553] = 1,
    ACTIONS(876), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4561] = 5,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(830), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(144), 1,
      sym_until_clause,
    STATE(683), 1,
      sym__repeat_statements,
  [4577] = 4,
    ACTIONS(878), 1,
      sym_blank_line,
    ACTIONS(880), 1,
      sym__comment_start,
    ACTIONS(882), 1,
      sym__reduce_indent,
    STATE(309), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4591] = 1,
    ACTIONS(757), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [4599] = 1,
    ACTIONS(884), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4607] = 1,
    ACTIONS(886), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4615] = 1,
    ACTIONS(888), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4623] = 1,
    ACTIONS(890), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4631] = 1,
    ACTIONS(892), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4639] = 1,
    ACTIONS(894), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4647] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4655] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4663] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4671] = 1,
    ACTIONS(902), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4679] = 1,
    ACTIONS(904), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4687] = 1,
    ACTIONS(906), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4695] = 1,
    ACTIONS(908), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4703] = 1,
    ACTIONS(910), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4711] = 1,
    ACTIONS(912), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4719] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4727] = 1,
    ACTIONS(916), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4735] = 1,
    ACTIONS(918), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4743] = 1,
    ACTIONS(920), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4751] = 1,
    ACTIONS(922), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4759] = 1,
    ACTIONS(924), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4767] = 1,
    ACTIONS(926), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4775] = 1,
    ACTIONS(928), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4783] = 1,
    ACTIONS(930), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4791] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(932), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4805] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4813] = 1,
    ACTIONS(936), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4821] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4829] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4837] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4845] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4853] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(946), 1,
      sym_blank_line,
    ACTIONS(948), 1,
      sym__dedent,
    STATE(339), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4867] = 1,
    ACTIONS(950), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4875] = 1,
    ACTIONS(952), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4883] = 1,
    ACTIONS(954), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4891] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4899] = 1,
    ACTIONS(958), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4907] = 1,
    ACTIONS(960), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4915] = 1,
    ACTIONS(962), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4923] = 5,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(591), 1,
      sym_inline_agic,
    STATE(723), 1,
      sym_runnable,
  [4939] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4947] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4955] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4963] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4971] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4979] = 1,
    ACTIONS(976), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4987] = 1,
    ACTIONS(978), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4995] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5003] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5011] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5019] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5027] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5035] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5043] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5051] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5059] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5067] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5075] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5083] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5091] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5099] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5107] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5115] = 4,
    ACTIONS(481), 1,
      sym__dedent,
    ACTIONS(1010), 1,
      sym_blank_line,
    ACTIONS(1013), 1,
      sym__comment_start,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5129] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5137] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5145] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5153] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5161] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5169] = 1,
    ACTIONS(818), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5177] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5185] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5193] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5201] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5209] = 1,
    ACTIONS(1024), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5217] = 4,
    ACTIONS(481), 1,
      sym__reduce_indent,
    ACTIONS(1026), 1,
      sym_blank_line,
    ACTIONS(1029), 1,
      sym__comment_start,
    STATE(309), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5231] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5239] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5247] = 5,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(593), 1,
      sym_inline_agic,
    STATE(727), 1,
      sym_runnable,
  [5263] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5271] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5279] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5287] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5295] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5303] = 1,
    ACTIONS(818), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5311] = 4,
    ACTIONS(481), 1,
      sym__line_start,
    ACTIONS(1036), 1,
      sym_blank_line,
    ACTIONS(1039), 1,
      sym__comment_start,
    STATE(319), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5325] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1044), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5339] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1046), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5353] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5361] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5369] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5377] = 1,
    ACTIONS(1000), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5385] = 1,
    ACTIONS(1002), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5393] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5401] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5409] = 1,
    ACTIONS(818), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5417] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5425] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5433] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5441] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5449] = 5,
    ACTIONS(1048), 1,
      sym__inline_comment,
    ACTIONS(1050), 1,
      sym_text_line,
    ACTIONS(1052), 1,
      sym_newline,
    STATE(372), 1,
      sym_line_end,
    STATE(471), 1,
      sym__reduce_line,
  [5465] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1054), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5479] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1056), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5493] = 4,
    ACTIONS(878), 1,
      sym_blank_line,
    ACTIONS(880), 1,
      sym__comment_start,
    ACTIONS(1058), 1,
      sym__reduce_indent,
    STATE(309), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5507] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1060), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5521] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1064), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5535] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1066), 1,
      sym_blank_line,
    ACTIONS(1068), 1,
      sym__dedent,
    STATE(354), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5549] = 5,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(417), 1,
      sym_inline_agic,
    STATE(728), 1,
      sym_runnable,
  [5565] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5573] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1072), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5587] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5595] = 5,
    ACTIONS(1048), 1,
      sym__inline_comment,
    ACTIONS(1050), 1,
      sym_text_line,
    ACTIONS(1052), 1,
      sym_newline,
    STATE(394), 1,
      sym_line_end,
    STATE(421), 1,
      sym__reduce_line,
  [5611] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1076), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5625] = 5,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(398), 1,
      sym_inline_agic,
    STATE(758), 1,
      sym_runnable,
  [5641] = 5,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(405), 1,
      sym_inline_agic,
    STATE(760), 1,
      sym_runnable,
  [5657] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5665] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1080), 1,
      sym_blank_line,
    ACTIONS(1082), 1,
      sym__dedent,
    STATE(385), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5679] = 5,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    STATE(427), 1,
      sym_inline_agic,
    STATE(810), 1,
      sym__named_using_complement,
  [5695] = 5,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(428), 1,
      sym_inline_agic,
    STATE(834), 1,
      sym_runnable,
  [5711] = 5,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(217), 1,
      sym_inline_agic,
    STATE(783), 1,
      sym_runnable,
  [5727] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1084), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5741] = 5,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1088), 1,
      sym_flow_in_keyword,
    STATE(429), 1,
      sym_line_end,
    STATE(681), 1,
      sym__lanes_complement,
  [5757] = 5,
    ACTIONS(1048), 1,
      sym__inline_comment,
    ACTIONS(1052), 1,
      sym_newline,
    ACTIONS(1090), 1,
      sym_text_line,
    STATE(220), 1,
      sym__reduce_line,
    STATE(394), 1,
      sym_line_end,
  [5773] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1092), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5787] = 5,
    ACTIONS(388), 1,
      sym_flow_using_keyword,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    STATE(224), 1,
      sym_inline_agic,
    STATE(785), 1,
      sym__named_using_complement,
  [5803] = 5,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(225), 1,
      sym_inline_agic,
    STATE(834), 1,
      sym_runnable,
  [5819] = 5,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1088), 1,
      sym_flow_in_keyword,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(226), 1,
      sym_line_end,
    STATE(786), 1,
      sym__lanes_complement,
  [5835] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [5843] = 4,
    ACTIONS(1098), 1,
      sym_array_suffix,
    STATE(367), 1,
      aux_sym_type_repeat1,
    STATE(800), 1,
      sym_type_suffix,
    ACTIONS(808), 2,
      sym_newline,
      sym__inline_comment,
  [5857] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1100), 1,
      sym_blank_line,
    ACTIONS(1102), 1,
      sym__dedent,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5871] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1104), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5885] = 5,
    ACTIONS(398), 1,
      sym_arrow,
    ACTIONS(400), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(247), 1,
      sym_inline_agic,
    STATE(735), 1,
      sym_runnable,
  [5901] = 5,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1088), 1,
      sym_flow_in_keyword,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(248), 1,
      sym_line_end,
    STATE(795), 1,
      sym__lanes_complement,
  [5917] = 4,
    ACTIONS(1098), 1,
      sym_array_suffix,
    STATE(368), 1,
      aux_sym_type_repeat1,
    STATE(800), 1,
      sym_type_suffix,
    ACTIONS(755), 2,
      sym_newline,
      sym__inline_comment,
  [5931] = 4,
    ACTIONS(1106), 1,
      sym_array_suffix,
    STATE(368), 1,
      aux_sym_type_repeat1,
    STATE(800), 1,
      sym_type_suffix,
    ACTIONS(766), 2,
      sym_newline,
      sym__inline_comment,
  [5945] = 1,
    ACTIONS(759), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [5953] = 5,
    ACTIONS(1048), 1,
      sym__inline_comment,
    ACTIONS(1052), 1,
      sym_newline,
    ACTIONS(1090), 1,
      sym_text_line,
    STATE(255), 1,
      sym__reduce_line,
    STATE(372), 1,
      sym_line_end,
  [5969] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1109), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5983] = 4,
    ACTIONS(880), 1,
      sym__comment_start,
    ACTIONS(1111), 1,
      sym_blank_line,
    ACTIONS(1113), 1,
      sym__reduce_indent,
    STATE(233), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5997] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1115), 1,
      sym_blank_line,
    ACTIONS(1117), 1,
      sym__indent,
    STATE(391), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6011] = 4,
    ACTIONS(1119), 1,
      sym_blank_line,
    ACTIONS(1122), 1,
      sym__dedent,
    ACTIONS(1124), 1,
      sym_indented_raw_text,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6025] = 1,
    ACTIONS(1127), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6033] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1129), 1,
      sym_blank_line,
    ACTIONS(1131), 1,
      sym__dedent,
    STATE(378), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6047] = 4,
    ACTIONS(481), 1,
      sym__indent,
    ACTIONS(1133), 1,
      sym_blank_line,
    ACTIONS(1136), 1,
      sym__comment_start,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6061] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1139), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6075] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1141), 1,
      sym_blank_line,
    ACTIONS(1143), 1,
      sym__dedent,
    STATE(383), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6089] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6097] = 4,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1147), 1,
      sym_snake_name,
    STATE(341), 1,
      sym_agent,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [6111] = 1,
    ACTIONS(1145), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6119] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1149), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6133] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1151), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6147] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1153), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6161] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1155), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6175] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1157), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6189] = 1,
    ACTIONS(1159), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [6197] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1161), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6211] = 4,
    ACTIONS(832), 1,
      sym_blank_line,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1163), 1,
      sym__dedent,
    STATE(374), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6225] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1165), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6239] = 4,
    ACTIONS(1169), 1,
      sym_rparen,
    STATE(568), 1,
      sym_param_name,
    STATE(703), 1,
      sym_param,
    ACTIONS(1167), 2,
      sym__variable_name,
      anon_sym__,
  [6253] = 1,
    ACTIONS(1171), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [6261] = 4,
    ACTIONS(880), 1,
      sym__comment_start,
    ACTIONS(1173), 1,
      sym_blank_line,
    ACTIONS(1175), 1,
      sym__reduce_indent,
    STATE(337), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6275] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1177), 1,
      sym_blank_line,
    ACTIONS(1179), 1,
      sym__dedent,
    STATE(357), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6289] = 4,
    ACTIONS(587), 1,
      sym__comment_start,
    ACTIONS(1062), 1,
      sym_blank_line,
    ACTIONS(1181), 1,
      sym__dedent,
    STATE(297), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6303] = 4,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1147), 1,
      sym_snake_name,
    STATE(353), 1,
      sym_agent,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [6317] = 1,
    ACTIONS(1183), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6325] = 5,
    ACTIONS(390), 1,
      sym_arrow,
    ACTIONS(392), 1,
      sym_colon,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(456), 1,
      sym_inline_agic,
    STATE(735), 1,
      sym_runnable,
  [6341] = 5,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(830), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(86), 1,
      sym_until_clause,
    STATE(801), 1,
      sym__repeat_statements,
  [6357] = 5,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1088), 1,
      sym_flow_in_keyword,
    STATE(457), 1,
      sym_line_end,
    STATE(749), 1,
      sym__lanes_complement,
  [6373] = 5,
    ACTIONS(382), 1,
      sym__line_start,
    ACTIONS(830), 1,
      sym__until_start,
    STATE(66), 1,
      sym__flow_statement,
    STATE(141), 1,
      sym_until_clause,
    STATE(809), 1,
      sym__repeat_statements,
  [6389] = 1,
    ACTIONS(1185), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6397] = 1,
    ACTIONS(761), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [6405] = 1,
    ACTIONS(1187), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6413] = 1,
    ACTIONS(1189), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6421] = 1,
    ACTIONS(1191), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6429] = 1,
    ACTIONS(1193), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [6437] = 1,
    ACTIONS(1195), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6445] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1197), 1,
      sym_blank_line,
    ACTIONS(1199), 1,
      sym__indent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6459] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1201), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6473] = 4,
    ACTIONS(735), 1,
      sym__comment_start,
    ACTIONS(1042), 1,
      sym_blank_line,
    ACTIONS(1203), 1,
      sym__indent,
    STATE(377), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6487] = 1,
    ACTIONS(1205), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [6495] = 1,
    ACTIONS(219), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [6503] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6510] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1207), 1,
      sym_text_line,
    STATE(445), 1,
      sym_line_end,
  [6523] = 1,
    ACTIONS(848), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6530] = 1,
    ACTIONS(850), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6537] = 1,
    ACTIONS(852), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6544] = 1,
    ACTIONS(1209), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [6551] = 1,
    ACTIONS(854), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6558] = 1,
    ACTIONS(856), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6565] = 1,
    ACTIONS(1211), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6572] = 1,
    ACTIONS(1213), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6579] = 1,
    ACTIONS(858), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6586] = 1,
    ACTIONS(860), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6593] = 1,
    ACTIONS(862), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6600] = 1,
    ACTIONS(864), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6607] = 1,
    ACTIONS(866), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6614] = 1,
    ACTIONS(868), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6621] = 1,
    ACTIONS(870), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6628] = 1,
    ACTIONS(872), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6635] = 1,
    ACTIONS(874), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6642] = 1,
    ACTIONS(876), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6649] = 1,
    ACTIONS(1215), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6656] = 1,
    ACTIONS(884), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6663] = 1,
    ACTIONS(1217), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6670] = 1,
    ACTIONS(1219), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6677] = 1,
    ACTIONS(1221), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6684] = 1,
    ACTIONS(1223), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6691] = 3,
    ACTIONS(1227), 1,
      sym_comma,
    STATE(462), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1225), 2,
      sym_newline,
      sym__inline_comment,
  [6702] = 3,
    ACTIONS(1231), 1,
      sym_comma,
    STATE(463), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1229), 2,
      sym_newline,
      sym__inline_comment,
  [6713] = 1,
    ACTIONS(1233), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6720] = 1,
    ACTIONS(886), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6727] = 1,
    ACTIONS(888), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6734] = 1,
    ACTIONS(890), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6741] = 1,
    ACTIONS(892), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6748] = 1,
    ACTIONS(894), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6755] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6762] = 1,
    ACTIONS(1235), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [6769] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6776] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6783] = 1,
    ACTIONS(902), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6790] = 1,
    ACTIONS(904), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6797] = 1,
    ACTIONS(906), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6804] = 1,
    ACTIONS(908), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6811] = 1,
    ACTIONS(910), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6818] = 1,
    ACTIONS(912), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6825] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6832] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1237), 1,
      sym_blank_line,
    STATE(384), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6843] = 1,
    ACTIONS(1239), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6850] = 3,
    ACTIONS(1243), 1,
      sym_comma,
    STATE(462), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1241), 2,
      sym_newline,
      sym__inline_comment,
  [6861] = 3,
    ACTIONS(1248), 1,
      sym_comma,
    STATE(463), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1246), 2,
      sym_newline,
      sym__inline_comment,
  [6872] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6879] = 1,
    ACTIONS(918), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6886] = 1,
    ACTIONS(920), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6893] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1251), 1,
      sym_text_line,
    STATE(481), 1,
      sym_line_end,
  [6906] = 1,
    ACTIONS(922), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6913] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1253), 1,
      sym_text_line,
    STATE(482), 1,
      sym_line_end,
  [6926] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1255), 1,
      sym_text_line,
    STATE(484), 1,
      sym_line_end,
  [6939] = 1,
    ACTIONS(924), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6946] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1257), 1,
      sym_blank_line,
    STATE(259), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6957] = 1,
    ACTIONS(1259), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [6964] = 1,
    ACTIONS(926), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6971] = 4,
    ACTIONS(560), 1,
      sym__line_start,
    ACTIONS(1261), 1,
      sym__dedent,
    STATE(120), 1,
      sym_message,
    STATE(1018), 1,
      sym_messages,
  [6984] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6991] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [6998] = 1,
    ACTIONS(934), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7005] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7012] = 1,
    ACTIONS(1263), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7019] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7026] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7033] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7040] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7047] = 1,
    ACTIONS(1265), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7054] = 4,
    ACTIONS(964), 1,
      sym_snake_name,
    ACTIONS(1267), 1,
      sym_colon,
    STATE(721), 1,
      sym_inline_agic_body,
    STATE(722), 1,
      sym_runnable,
  [7067] = 4,
    ACTIONS(782), 1,
      sym_lparen,
    ACTIONS(1269), 1,
      sym_arrow,
    ACTIONS(1271), 1,
      sym_colon,
    STATE(848), 1,
      sym_params,
  [7080] = 1,
    ACTIONS(950), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7087] = 1,
    ACTIONS(1273), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7094] = 1,
    ACTIONS(952), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7101] = 1,
    ACTIONS(954), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7108] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7115] = 1,
    ACTIONS(958), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7122] = 1,
    ACTIONS(960), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7129] = 1,
    ACTIONS(1275), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7136] = 1,
    ACTIONS(1277), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7143] = 1,
    ACTIONS(962), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7150] = 1,
    ACTIONS(1279), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7157] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7164] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7171] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7178] = 1,
    ACTIONS(1281), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [7185] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7192] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7199] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7206] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7213] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7220] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7227] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7234] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7241] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7248] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7255] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7262] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7269] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7276] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7283] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7290] = 1,
    ACTIONS(1283), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7297] = 1,
    ACTIONS(1285), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7304] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7311] = 4,
    ACTIONS(782), 1,
      sym_lparen,
    ACTIONS(1287), 1,
      sym_arrow,
    ACTIONS(1289), 1,
      sym_colon,
    STATE(867), 1,
      sym_params,
  [7324] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7331] = 1,
    ACTIONS(1291), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7338] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1293), 1,
      sym_blank_line,
    STATE(338), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7349] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7356] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7363] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7370] = 1,
    ACTIONS(818), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7377] = 1,
    ACTIONS(1295), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7384] = 2,
    ACTIONS(1299), 1,
      sym_newline,
    ACTIONS(1297), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [7393] = 4,
    ACTIONS(1301), 1,
      sym__inline_comment,
    ACTIONS(1303), 1,
      sym_text_line,
    ACTIONS(1305), 1,
      sym_newline,
    STATE(350), 1,
      sym_line_end,
  [7406] = 1,
    ACTIONS(1307), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7413] = 3,
    ACTIONS(1309), 1,
      sym_colon,
    ACTIONS(1311), 1,
      sym_newline,
    ACTIONS(1303), 2,
      sym__inline_comment,
      sym_text_line,
  [7424] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1313), 1,
      sym_text_line,
    STATE(577), 1,
      sym_line_end,
  [7437] = 2,
    STATE(963), 1,
      sym_directive_op,
    ACTIONS(1315), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [7446] = 1,
    ACTIONS(1317), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7453] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(116), 1,
      sym_line_end,
    STATE(611), 1,
      sym__cap_definition,
  [7466] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(116), 1,
      sym_line_end,
    STATE(612), 1,
      sym__cap_definition,
  [7479] = 4,
    ACTIONS(560), 1,
      sym__line_start,
    ACTIONS(1323), 1,
      sym__dedent,
    STATE(120), 1,
      sym_message,
    STATE(980), 1,
      sym_messages,
  [7492] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(116), 1,
      sym_line_end,
    STATE(613), 1,
      sym__cap_definition,
  [7505] = 1,
    ACTIONS(1325), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7512] = 1,
    ACTIONS(1195), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7519] = 1,
    ACTIONS(1205), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7526] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(116), 1,
      sym_line_end,
    STATE(614), 1,
      sym__cap_definition,
  [7539] = 1,
    ACTIONS(1327), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7546] = 1,
    ACTIONS(1329), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7553] = 4,
    ACTIONS(1331), 1,
      sym_blank_line,
    ACTIONS(1333), 1,
      sym__text_indent,
    STATE(619), 1,
      sym_text_body,
    STATE(754), 1,
      aux_sym_text_body_repeat1,
  [7566] = 1,
    ACTIONS(1335), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7573] = 1,
    ACTIONS(1337), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7580] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7587] = 3,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1339), 1,
      sym_colon,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [7598] = 3,
    ACTIONS(245), 1,
      sym_newline,
    ACTIONS(1341), 1,
      sym_integer_literal,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [7609] = 1,
    ACTIONS(1343), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7616] = 1,
    ACTIONS(1345), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7623] = 1,
    ACTIONS(1347), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7630] = 1,
    ACTIONS(1127), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7637] = 1,
    ACTIONS(1145), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7644] = 1,
    ACTIONS(1145), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7651] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1349), 1,
      sym_text_line,
    STATE(444), 1,
      sym_line_end,
  [7664] = 1,
    ACTIONS(1351), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7671] = 1,
    ACTIONS(1353), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7678] = 1,
    ACTIONS(1355), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7685] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7692] = 1,
    ACTIONS(1357), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [7699] = 1,
    ACTIONS(1359), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7706] = 1,
    ACTIONS(1361), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7713] = 1,
    ACTIONS(1363), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7720] = 3,
    ACTIONS(1365), 1,
      sym_optional_marker,
    ACTIONS(1367), 1,
      sym_colon,
    ACTIONS(1369), 2,
      sym_rparen,
      sym_comma,
  [7731] = 1,
    ACTIONS(1371), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7738] = 1,
    ACTIONS(1373), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7745] = 1,
    ACTIONS(1375), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7752] = 1,
    ACTIONS(1377), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7759] = 1,
    ACTIONS(1379), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7766] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7773] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(97), 1,
      sym_line_end,
    STATE(423), 1,
      sym_job_body,
  [7786] = 4,
    ACTIONS(1319), 1,
      sym__inline_comment,
    ACTIONS(1321), 1,
      sym_newline,
    STATE(97), 1,
      sym_line_end,
    STATE(424), 1,
      sym_job_body,
  [7799] = 1,
    ACTIONS(1381), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7806] = 2,
    ACTIONS(219), 1,
      sym_integer_literal,
    ACTIONS(217), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [7815] = 2,
    STATE(827), 1,
      sym_text_ref,
    ACTIONS(1383), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [7824] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7831] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7838] = 4,
    ACTIONS(1385), 1,
      sym_runnable_ref,
    ACTIONS(1387), 1,
      sym_none_keyword,
    ACTIONS(1389), 1,
      sym_all_keyword,
    STATE(822), 1,
      sym_route_value,
  [7851] = 1,
    ACTIONS(1391), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7858] = 1,
    ACTIONS(1393), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7865] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7872] = 1,
    ACTIONS(1395), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7879] = 1,
    ACTIONS(1397), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7886] = 1,
    ACTIONS(1399), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7893] = 1,
    ACTIONS(1401), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [7900] = 1,
    ACTIONS(1403), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [7907] = 1,
    ACTIONS(1183), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7914] = 1,
    ACTIONS(1185), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7921] = 1,
    ACTIONS(1187), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7928] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7935] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7942] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7949] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7956] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7963] = 1,
    ACTIONS(818), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7970] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7977] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [7984] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7991] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [7998] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8005] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8012] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8019] = 1,
    ACTIONS(818), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8026] = 1,
    ACTIONS(846), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8033] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8040] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8047] = 1,
    ACTIONS(1405), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8054] = 1,
    ACTIONS(1407), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8061] = 1,
    ACTIONS(1409), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8068] = 1,
    ACTIONS(1411), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8075] = 4,
    ACTIONS(1413), 1,
      sym_blank_line,
    ACTIONS(1415), 1,
      sym__text_indent,
    STATE(517), 1,
      sym_text_body,
    STATE(833), 1,
      aux_sym_text_body_repeat1,
  [8088] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8095] = 1,
    ACTIONS(1189), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8102] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1417), 1,
      sym_blank_line,
    STATE(211), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8113] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8120] = 1,
    ACTIONS(1419), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8127] = 1,
    ACTIONS(1421), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8134] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1423), 1,
      sym_text_line,
    STATE(212), 1,
      sym_line_end,
  [8147] = 1,
    ACTIONS(1191), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8154] = 4,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    ACTIONS(1425), 1,
      sym_colon,
    STATE(425), 1,
      sym_line_end,
  [8167] = 1,
    ACTIONS(1193), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8174] = 1,
    ACTIONS(1427), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8181] = 1,
    ACTIONS(820), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8188] = 1,
    ACTIONS(1429), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [8195] = 1,
    ACTIONS(1000), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8202] = 1,
    ACTIONS(822), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8209] = 1,
    ACTIONS(824), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8216] = 4,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    ACTIONS(1431), 1,
      sym_colon,
    STATE(222), 1,
      sym_line_end,
  [8229] = 1,
    ACTIONS(826), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8236] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1433), 1,
      sym_text_line,
    STATE(236), 1,
      sym_line_end,
  [8249] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1435), 1,
      sym_text_line,
    STATE(237), 1,
      sym_line_end,
  [8262] = 1,
    ACTIONS(1437), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8269] = 1,
    ACTIONS(1002), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8276] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1439), 1,
      sym_text_line,
    STATE(262), 1,
      sym_line_end,
  [8289] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1441), 1,
      sym_text_line,
    STATE(263), 1,
      sym_line_end,
  [8302] = 1,
    ACTIONS(838), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8309] = 4,
    ACTIONS(319), 1,
      sym__inline_comment,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1443), 1,
      sym_text_line,
    STATE(265), 1,
      sym_line_end,
  [8322] = 3,
    STATE(568), 1,
      sym_param_name,
    STATE(878), 1,
      sym_param,
    ACTIONS(1167), 2,
      sym__variable_name,
      anon_sym__,
  [8333] = 1,
    ACTIONS(1445), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8340] = 4,
    ACTIONS(964), 1,
      sym_snake_name,
    ACTIONS(1447), 1,
      sym_colon,
    STATE(567), 1,
      sym_inline_agic_body,
    STATE(812), 1,
      sym_runnable,
  [8353] = 1,
    ACTIONS(1449), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8360] = 1,
    ACTIONS(1451), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8367] = 1,
    ACTIONS(1453), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8374] = 4,
    ACTIONS(1455), 1,
      sym_blank_line,
    ACTIONS(1457), 1,
      sym__text_indent,
    STATE(714), 1,
      sym_text_body,
    STATE(838), 1,
      aux_sym_text_body_repeat1,
  [8387] = 1,
    ACTIONS(1459), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8394] = 4,
    ACTIONS(1461), 1,
      sym_blank_line,
    ACTIONS(1463), 1,
      sym__text_indent,
    STATE(308), 1,
      sym_text_body,
    STATE(839), 1,
      aux_sym_text_body_repeat1,
  [8407] = 1,
    ACTIONS(1465), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8414] = 1,
    ACTIONS(1467), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8421] = 1,
    ACTIONS(1469), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8428] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1471), 1,
      sym_blank_line,
    STATE(335), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8439] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1473), 1,
      sym_blank_line,
    STATE(336), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8450] = 1,
    ACTIONS(1475), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8457] = 3,
    ACTIONS(111), 1,
      sym_newline,
    ACTIONS(1477), 1,
      sym_colon,
    ACTIONS(87), 2,
      sym__inline_comment,
      sym_text_line,
  [8468] = 3,
    ACTIONS(245), 1,
      sym_newline,
    ACTIONS(1479), 1,
      sym_integer_literal,
    ACTIONS(237), 2,
      sym__inline_comment,
      sym_text_line,
  [8479] = 2,
    STATE(780), 1,
      sym_text_ref,
    ACTIONS(1383), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [8488] = 4,
    ACTIONS(1385), 1,
      sym_runnable_ref,
    ACTIONS(1387), 1,
      sym_none_keyword,
    ACTIONS(1389), 1,
      sym_all_keyword,
    STATE(779), 1,
      sym_route_value,
  [8501] = 3,
    ACTIONS(1227), 1,
      sym_comma,
    STATE(441), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1481), 2,
      sym_newline,
      sym__inline_comment,
  [8512] = 3,
    ACTIONS(1231), 1,
      sym_comma,
    STATE(442), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1483), 2,
      sym_newline,
      sym__inline_comment,
  [8523] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1485), 1,
      sym_blank_line,
    STATE(386), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8534] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1487), 1,
      sym_blank_line,
    STATE(387), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8545] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1489), 1,
      sym_blank_line,
    STATE(389), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8556] = 3,
    ACTIONS(836), 1,
      sym_indented_raw_text,
    ACTIONS(1491), 1,
      sym_blank_line,
    STATE(390), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8567] = 2,
    STATE(1025), 1,
      sym_directive_op,
    ACTIONS(1315), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [8576] = 1,
    ACTIONS(1493), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8583] = 1,
    ACTIONS(1495), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8590] = 1,
    ACTIONS(1497), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8597] = 1,
    ACTIONS(840), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8604] = 1,
    ACTIONS(842), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8611] = 1,
    ACTIONS(844), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8618] = 4,
    ACTIONS(287), 1,
      sym__inline_comment,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1499), 1,
      sym_text_line,
    STATE(640), 1,
      sym_line_end,
  [8631] = 1,
    ACTIONS(998), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [8637] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(410), 1,
      sym_line_end,
  [8647] = 3,
    ACTIONS(1505), 1,
      sym__inline_comment,
    ACTIONS(1507), 1,
      sym_newline,
    STATE(588), 1,
      sym_line_end,
  [8657] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(158), 1,
      sym_line_end,
  [8667] = 2,
    STATE(819), 1,
      sym_recall_source,
    ACTIONS(514), 2,
      anon_sym_far,
      anon_sym_near,
  [8675] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(165), 1,
      sym_line_end,
  [8685] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(454), 1,
      sym_line_end,
  [8695] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(455), 1,
      sym_line_end,
  [8705] = 3,
    ACTIONS(1509), 1,
      sym__dedent,
    ACTIONS(1511), 1,
      sym__until_start,
    STATE(69), 1,
      sym_until_clause,
  [8715] = 3,
    ACTIONS(1505), 1,
      sym__inline_comment,
    ACTIONS(1507), 1,
      sym_newline,
    STATE(616), 1,
      sym_line_end,
  [8725] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(161), 1,
      sym_line_end,
  [8735] = 3,
    ACTIONS(1513), 1,
      sym_pascal_name,
    STATE(944), 1,
      sym_struct_name,
    STATE(1020), 1,
      sym_type_name,
  [8745] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(157), 1,
      sym_line_end,
  [8755] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(465), 1,
      sym_line_end,
  [8765] = 1,
    ACTIONS(1515), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [8771] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(449), 1,
      sym_line_end,
  [8781] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(491), 1,
      sym_line_end,
  [8791] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(466), 1,
      sym_line_end,
  [8801] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(492), 1,
      sym_line_end,
  [8811] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(373), 1,
      sym_line_end,
  [8821] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(493), 1,
      sym_line_end,
  [8831] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(494), 1,
      sym_line_end,
  [8841] = 3,
    ACTIONS(333), 1,
      sym__line_start,
    STATE(145), 1,
      sym__flow_statement,
    STATE(1062), 1,
      sym_statements,
  [8851] = 3,
    ACTIONS(1517), 1,
      sym_colon,
    ACTIONS(1519), 1,
      sym_snake_name,
    STATE(1065), 1,
      sym_context_name,
  [8861] = 2,
    ACTIONS(1521), 1,
      sym_flow_spawn_keyword,
    STATE(468), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [8869] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(193), 1,
      sym_line_end,
  [8879] = 1,
    ACTIONS(1523), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [8885] = 3,
    ACTIONS(1525), 1,
      sym_rparen,
    ACTIONS(1527), 1,
      sym_comma,
    STATE(702), 1,
      aux_sym_params_repeat1,
  [8895] = 3,
    ACTIONS(1530), 1,
      sym_rparen,
    ACTIONS(1532), 1,
      sym_comma,
    STATE(811), 1,
      aux_sym_params_repeat1,
  [8905] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [8915] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [8925] = 3,
    ACTIONS(1534), 1,
      sym_colon,
    ACTIONS(1536), 1,
      sym_snake_name,
    STATE(1021), 1,
      sym_instruct_name,
  [8935] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(182), 1,
      sym_line_end,
  [8945] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(194), 1,
      sym_line_end,
  [8955] = 3,
    ACTIONS(1511), 1,
      sym__until_start,
    ACTIONS(1538), 1,
      sym__dedent,
    STATE(75), 1,
      sym_until_clause,
  [8965] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(656), 1,
      sym_line_end,
  [8975] = 1,
    ACTIONS(1540), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [8981] = 1,
    ACTIONS(1018), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [8987] = 1,
    ACTIONS(1022), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [8993] = 1,
    ACTIONS(1024), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [8999] = 1,
    ACTIONS(1032), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9005] = 1,
    ACTIONS(1034), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9011] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(151), 1,
      sym_line_end,
  [9021] = 3,
    ACTIONS(798), 1,
      sym_flow_by_keyword,
    STATE(458), 1,
      sym__inline_by_complement,
    STATE(752), 1,
      sym__named_by_complement,
  [9031] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [9041] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(153), 1,
      sym_line_end,
  [9051] = 1,
    ACTIONS(1363), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9057] = 3,
    ACTIONS(1505), 1,
      sym__inline_comment,
    ACTIONS(1507), 1,
      sym_newline,
    STATE(731), 1,
      sym_line_end,
  [9067] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(672), 1,
      sym_line_end,
  [9077] = 1,
    ACTIONS(1016), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9083] = 1,
    ACTIONS(1020), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9089] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(673), 1,
      sym_line_end,
  [9099] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(608), 1,
      sym_line_end,
  [9109] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(448), 1,
      sym_line_end,
  [9119] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(149), 1,
      sym_line_end,
  [9129] = 1,
    ACTIONS(1375), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9135] = 1,
    ACTIONS(1377), 3,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
  [9141] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(150), 1,
      sym_line_end,
  [9151] = 1,
    ACTIONS(1016), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9157] = 1,
    ACTIONS(1020), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9163] = 1,
    ACTIONS(1542), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [9169] = 1,
    ACTIONS(1000), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9175] = 1,
    ACTIONS(1002), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9181] = 1,
    ACTIONS(1004), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9187] = 1,
    ACTIONS(1006), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9193] = 1,
    ACTIONS(818), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [9199] = 1,
    ACTIONS(998), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9205] = 1,
    ACTIONS(1000), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9211] = 1,
    ACTIONS(1002), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9217] = 1,
    ACTIONS(1004), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9223] = 1,
    ACTIONS(1006), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9229] = 1,
    ACTIONS(818), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [9235] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(191), 1,
      sym_line_end,
  [9245] = 3,
    ACTIONS(333), 1,
      sym__line_start,
    STATE(145), 1,
      sym__flow_statement,
    STATE(1066), 1,
      sym_statements,
  [9255] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(476), 1,
      sym_line_end,
  [9265] = 2,
    STATE(184), 1,
      sym__order_complement,
    ACTIONS(1544), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [9273] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(516), 1,
      sym_line_end,
  [9283] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(477), 1,
      sym_line_end,
  [9293] = 1,
    ACTIONS(1546), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [9299] = 3,
    ACTIONS(1548), 1,
      sym_blank_line,
    ACTIONS(1550), 1,
      sym__text_indent,
    STATE(755), 1,
      aux_sym_text_body_repeat1,
  [9309] = 3,
    ACTIONS(1552), 1,
      sym_blank_line,
    ACTIONS(1555), 1,
      sym__text_indent,
    STATE(755), 1,
      aux_sym_text_body_repeat1,
  [9319] = 1,
    ACTIONS(998), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9325] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(168), 1,
      sym_line_end,
  [9335] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(214), 1,
      sym_line_end,
  [9345] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(215), 1,
      sym_line_end,
  [9355] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(216), 1,
      sym_line_end,
  [9365] = 1,
    ACTIONS(1000), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9371] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(426), 1,
      sym_line_end,
  [9381] = 1,
    ACTIONS(1002), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9387] = 1,
    ACTIONS(1209), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9393] = 1,
    ACTIONS(1004), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9399] = 1,
    ACTIONS(1006), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9405] = 1,
    ACTIONS(818), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9411] = 1,
    ACTIONS(1016), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9417] = 1,
    ACTIONS(1347), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9423] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(223), 1,
      sym_line_end,
  [9433] = 3,
    ACTIONS(311), 1,
      sym_flow_if_keyword,
    STATE(430), 1,
      sym__inline_if_complement,
    STATE(682), 1,
      sym__named_if_complement,
  [9443] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(431), 1,
      sym_line_end,
  [9453] = 1,
    ACTIONS(1557), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [9459] = 3,
    ACTIONS(317), 1,
      sym_flow_if_keyword,
    STATE(227), 1,
      sym__inline_if_complement,
    STATE(787), 1,
      sym__named_if_complement,
  [9469] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(228), 1,
      sym_line_end,
  [9479] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(229), 1,
      sym_line_end,
  [9489] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(432), 1,
      sym_line_end,
  [9499] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(235), 1,
      sym_line_end,
  [9509] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(542), 1,
      sym_line_end,
  [9519] = 3,
    ACTIONS(1559), 1,
      sym__inline_comment,
    ACTIONS(1561), 1,
      sym_newline,
    STATE(543), 1,
      sym_line_end,
  [9529] = 1,
    ACTIONS(1353), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9535] = 1,
    ACTIONS(1355), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9541] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(240), 1,
      sym_line_end,
  [9551] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(241), 1,
      sym_line_end,
  [9561] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(244), 1,
      sym_line_end,
  [9571] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(245), 1,
      sym_line_end,
  [9581] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(246), 1,
      sym_line_end,
  [9591] = 3,
    ACTIONS(800), 1,
      sym_flow_by_keyword,
    STATE(249), 1,
      sym__inline_by_complement,
    STATE(796), 1,
      sym__named_by_complement,
  [9601] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(199), 1,
      sym_line_end,
  [9611] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(252), 1,
      sym_line_end,
  [9621] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(253), 1,
      sym_line_end,
  [9631] = 3,
    ACTIONS(770), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1563), 1,
      sym_colon,
    STATE(1072), 1,
      sym__window_complement,
  [9641] = 2,
    ACTIONS(1565), 1,
      sym_flow_spawn_keyword,
    STATE(254), 2,
      sym__invalid_spawn_operation,
      sym_spawn_statement,
  [9649] = 1,
    ACTIONS(1020), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [9655] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(257), 1,
      sym_line_end,
  [9665] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(258), 1,
      sym_line_end,
  [9675] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(436), 1,
      sym_line_end,
  [9685] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(155), 1,
      sym_line_end,
  [9695] = 1,
    ACTIONS(1427), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9701] = 1,
    ACTIONS(1429), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [9707] = 3,
    ACTIONS(1511), 1,
      sym__until_start,
    ACTIONS(1567), 1,
      sym__dedent,
    STATE(77), 1,
      sym_until_clause,
  [9717] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(154), 1,
      sym_line_end,
  [9727] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(269), 1,
      sym_line_end,
  [9737] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(270), 1,
      sym_line_end,
  [9747] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(271), 1,
      sym_line_end,
  [9757] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(272), 1,
      sym_line_end,
  [9767] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(480), 1,
      sym_line_end,
  [9777] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(156), 1,
      sym_line_end,
  [9787] = 3,
    ACTIONS(1511), 1,
      sym__until_start,
    ACTIONS(1569), 1,
      sym__dedent,
    STATE(80), 1,
      sym_until_clause,
  [9797] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(453), 1,
      sym_line_end,
  [9807] = 3,
    ACTIONS(1532), 1,
      sym_comma,
    ACTIONS(1571), 1,
      sym_rparen,
    STATE(702), 1,
      aux_sym_params_repeat1,
  [9817] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(572), 1,
      sym_line_end,
  [9827] = 2,
    ACTIONS(1573), 1,
      sym_colon,
    ACTIONS(1575), 2,
      sym_rparen,
      sym_comma,
  [9835] = 1,
    ACTIONS(1577), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9841] = 3,
    ACTIONS(1305), 1,
      sym_newline,
    ACTIONS(1579), 1,
      sym__inline_comment,
    STATE(713), 1,
      sym_line_end,
  [9851] = 2,
    ACTIONS(1299), 1,
      sym_newline,
    ACTIONS(1297), 2,
      sym__inline_comment,
      sym_text_line,
  [9859] = 3,
    ACTIONS(323), 1,
      sym_newline,
    ACTIONS(1094), 1,
      sym__inline_comment,
    STATE(307), 1,
      sym_line_end,
  [9869] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(195), 1,
      sym_line_end,
  [9879] = 1,
    ACTIONS(1241), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9885] = 2,
    ACTIONS(219), 1,
      sym_all_keyword,
    ACTIONS(217), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [9893] = 1,
    ACTIONS(1246), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9899] = 3,
    ACTIONS(1581), 1,
      sym__inline_comment,
    ACTIONS(1583), 1,
      sym_newline,
    STATE(409), 1,
      sym_line_end,
  [9909] = 2,
    STATE(185), 1,
      sym__order_complement,
    ACTIONS(1544), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [9917] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(187), 1,
      sym_line_end,
  [9927] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(189), 1,
      sym_line_end,
  [9937] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(190), 1,
      sym_line_end,
  [9947] = 3,
    ACTIONS(1581), 1,
      sym__inline_comment,
    ACTIONS(1583), 1,
      sym_newline,
    STATE(413), 1,
      sym_line_end,
  [9957] = 3,
    ACTIONS(1501), 1,
      sym__inline_comment,
    ACTIONS(1503), 1,
      sym_newline,
    STATE(192), 1,
      sym_line_end,
  [9967] = 1,
    ACTIONS(1585), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [9973] = 3,
    ACTIONS(293), 1,
      sym_newline,
    ACTIONS(1086), 1,
      sym__inline_comment,
    STATE(461), 1,
      sym_line_end,
  [9983] = 2,
    STATE(868), 1,
      sym_param_name,
    ACTIONS(1587), 2,
      sym__variable_name,
      anon_sym__,
  [9991] = 1,
    ACTIONS(1589), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [9997] = 3,
    ACTIONS(1548), 1,
      sym_blank_line,
    ACTIONS(1591), 1,
      sym__text_indent,
    STATE(755), 1,
      aux_sym_text_body_repeat1,
  [10007] = 1,
    ACTIONS(1593), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [10013] = 3,
    ACTIONS(1595), 1,
      sym__inline_comment,
    ACTIONS(1597), 1,
      sym_newline,
    STATE(342), 1,
      sym_line_end,
  [10023] = 3,
    ACTIONS(770), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1599), 1,
      sym_colon,
    STATE(1076), 1,
      sym__window_complement,
  [10033] = 2,
    ACTIONS(1603), 1,
      sym_newline,
    ACTIONS(1601), 2,
      sym__inline_comment,
      sym_text_line,
  [10041] = 3,
    ACTIONS(1548), 1,
      sym_blank_line,
    ACTIONS(1605), 1,
      sym__text_indent,
    STATE(755), 1,
      aux_sym_text_body_repeat1,
  [10051] = 3,
    ACTIONS(1548), 1,
      sym_blank_line,
    ACTIONS(1607), 1,
      sym__text_indent,
    STATE(755), 1,
      aux_sym_text_body_repeat1,
  [10061] = 2,
    ACTIONS(1577), 1,
      sym_newline,
    ACTIONS(1609), 2,
      sym__inline_comment,
      sym_text_line,
  [10069] = 2,
    ACTIONS(1613), 1,
      sym_newline,
    ACTIONS(1611), 2,
      sym__inline_comment,
      sym_text_line,
  [10077] = 1,
    ACTIONS(1615), 2,
      sym_newline,
      sym__inline_comment,
  [10082] = 2,
    ACTIONS(1617), 1,
      sym_comment_text,
    ACTIONS(1619), 1,
      sym__comment_end,
  [10089] = 2,
    ACTIONS(1621), 1,
      sym_comment_text,
    ACTIONS(1623), 1,
      sym__comment_end,
  [10096] = 2,
    ACTIONS(1625), 1,
      anon_sym_EQ,
    STATE(10), 1,
      sym_assign_operator,
  [10103] = 1,
    ACTIONS(1171), 2,
      sym_newline,
      sym__inline_comment,
  [10108] = 2,
    ACTIONS(1627), 1,
      aux_sym__doc_space_token1,
    STATE(906), 1,
      sym__using_space,
  [10115] = 2,
    ACTIONS(1629), 1,
      sym_arrow,
    ACTIONS(1631), 1,
      sym_colon,
  [10122] = 1,
    ACTIONS(828), 2,
      sym_newline,
      sym__inline_comment,
  [10127] = 2,
    ACTIONS(1633), 1,
      anon_sym_EQ,
    STATE(582), 1,
      sym_assign_operator,
  [10134] = 2,
    ACTIONS(1635), 1,
      sym__one_integer_literal,
    ACTIONS(1637), 1,
      sym__other_integer_literal,
  [10141] = 2,
    ACTIONS(151), 1,
      sym__agic_raw_text,
    STATE(388), 1,
      sym__unroled_message_line,
  [10148] = 2,
    ACTIONS(467), 1,
      sym__line_start,
    STATE(93), 1,
      sym_field,
  [10155] = 1,
    ACTIONS(1639), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10160] = 2,
    ACTIONS(1641), 1,
      sym__reduce_text_start,
    STATE(473), 1,
      sym__reduce_text_body,
  [10167] = 2,
    ACTIONS(1643), 1,
      anon_sym_lanes,
    STATE(393), 1,
      sym_flow_lanes_keyword,
  [10174] = 2,
    ACTIONS(1641), 1,
      sym__reduce_text_start,
    STATE(485), 1,
      sym__reduce_text_body,
  [10181] = 2,
    ACTIONS(1645), 1,
      sym__snake_kebab_name,
    STATE(1051), 1,
      sym_job_name,
  [10188] = 2,
    ACTIONS(1647), 1,
      sym__snake_kebab_name,
    STATE(1001), 1,
      sym_cap_name,
  [10195] = 2,
    ACTIONS(1645), 1,
      sym__snake_kebab_name,
    STATE(1057), 1,
      sym_job_name,
  [10202] = 2,
    ACTIONS(1641), 1,
      sym__reduce_text_start,
    STATE(502), 1,
      sym__reduce_text_body,
  [10209] = 2,
    ACTIONS(1647), 1,
      sym__snake_kebab_name,
    STATE(987), 1,
      sym_cap_name,
  [10216] = 1,
    ACTIONS(1649), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [10221] = 2,
    ACTIONS(1651), 1,
      sym_arrow,
    ACTIONS(1653), 1,
      sym_colon,
  [10228] = 2,
    ACTIONS(1655), 1,
      anon_sym_lanes,
    STATE(846), 1,
      sym_flow_lanes_keyword,
  [10235] = 1,
    ACTIONS(1657), 2,
      sym_rparen,
      sym_comma,
  [10240] = 2,
    ACTIONS(1659), 1,
      sym_arrow,
    ACTIONS(1661), 1,
      sym_colon,
  [10247] = 2,
    ACTIONS(1663), 1,
      aux_sym__doc_space_token1,
    STATE(1046), 1,
      sym__doc_space,
  [10254] = 1,
    ACTIONS(1665), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [10259] = 2,
    ACTIONS(591), 1,
      sym__from_start,
    STATE(266), 1,
      sym__from_complement,
  [10266] = 2,
    ACTIONS(1647), 1,
      sym__snake_kebab_name,
    STATE(1029), 1,
      sym_cap_name,
  [10273] = 1,
    ACTIONS(1667), 2,
      sym_arrow,
      sym_colon,
  [10278] = 2,
    ACTIONS(85), 1,
      sym__flow_raw_text,
    STATE(167), 1,
      sym__implicit_run_line,
  [10285] = 2,
    ACTIONS(53), 1,
      sym__flow_raw_text,
    STATE(404), 1,
      sym__implicit_run_line,
  [10292] = 2,
    ACTIONS(1669), 1,
      sym_comment_text,
    ACTIONS(1671), 1,
      sym__comment_end,
  [10299] = 2,
    ACTIONS(1647), 1,
      sym__snake_kebab_name,
    STATE(1069), 1,
      sym_cap_name,
  [10306] = 2,
    ACTIONS(1641), 1,
      sym__reduce_text_start,
    STATE(495), 1,
      sym__reduce_text_body,
  [10313] = 1,
    ACTIONS(1673), 2,
      sym_rparen,
      sym_comma,
  [10318] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(986), 1,
      sym_param_doc_tag,
  [10325] = 1,
    ACTIONS(1677), 2,
      sym_arrow,
      sym_colon,
  [10330] = 2,
    ACTIONS(1679), 1,
      anon_sym_EQ,
    STATE(854), 1,
      sym_assign_operator,
  [10337] = 2,
    ACTIONS(1681), 1,
      sym_comment_text,
    ACTIONS(1683), 1,
      sym__comment_end,
  [10344] = 2,
    ACTIONS(1685), 1,
      sym_comment_text,
    ACTIONS(1687), 1,
      sym__comment_end,
  [10351] = 2,
    ACTIONS(1689), 1,
      sym_text_line,
    STATE(835), 1,
      sym_property_value,
  [10358] = 2,
    ACTIONS(1691), 1,
      sym_comment_text,
    ACTIONS(1693), 1,
      sym__comment_end,
  [10365] = 2,
    ACTIONS(1695), 1,
      sym_comment_text,
    ACTIONS(1697), 1,
      sym__comment_end,
  [10372] = 2,
    ACTIONS(1699), 1,
      sym_arrow,
    ACTIONS(1701), 1,
      sym_colon,
  [10379] = 2,
    ACTIONS(1703), 1,
      sym_comment_text,
    ACTIONS(1705), 1,
      sym__comment_end,
  [10386] = 2,
    ACTIONS(1707), 1,
      sym_comment_text,
    ACTIONS(1709), 1,
      sym__comment_end,
  [10393] = 2,
    ACTIONS(1711), 1,
      aux_sym__doc_space_token1,
    STATE(831), 1,
      sym__doc_space,
  [10400] = 2,
    ACTIONS(1713), 1,
      sym_comment_text,
    ACTIONS(1715), 1,
      sym__comment_end,
  [10407] = 2,
    ACTIONS(1717), 1,
      sym_comment_text,
    ACTIONS(1719), 1,
      sym__comment_end,
  [10414] = 1,
    ACTIONS(1020), 2,
      sym_blank_line,
      sym__text_indent,
  [10419] = 2,
    ACTIONS(1721), 1,
      anon_sym_EQ,
    STATE(102), 1,
      sym_assign_operator,
  [10426] = 2,
    ACTIONS(1723), 1,
      sym_comment_text,
    ACTIONS(1725), 1,
      sym__comment_end,
  [10433] = 1,
    ACTIONS(1727), 2,
      sym_optional_marker,
      sym_colon,
  [10438] = 2,
    ACTIONS(1729), 1,
      sym_comment_text,
    ACTIONS(1731), 1,
      sym__comment_end,
  [10445] = 2,
    ACTIONS(1733), 1,
      sym_comment_text,
    ACTIONS(1735), 1,
      sym__comment_end,
  [10452] = 2,
    ACTIONS(1737), 1,
      sym_comment_text,
    ACTIONS(1739), 1,
      sym__comment_end,
  [10459] = 2,
    ACTIONS(1741), 1,
      sym_comment_text,
    ACTIONS(1743), 1,
      sym__comment_end,
  [10466] = 2,
    ACTIONS(1745), 1,
      sym_snake_name,
    STATE(905), 1,
      sym_field_name,
  [10473] = 2,
    ACTIONS(1747), 1,
      sym_comment_text,
    ACTIONS(1749), 1,
      sym__comment_end,
  [10480] = 2,
    ACTIONS(1751), 1,
      sym_comment_text,
    ACTIONS(1753), 1,
      sym__comment_end,
  [10487] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(951), 1,
      sym_param_doc_tag,
  [10494] = 2,
    ACTIONS(1755), 1,
      sym_optional_marker,
    ACTIONS(1757), 1,
      sym_colon,
  [10501] = 2,
    ACTIONS(964), 1,
      sym_snake_name,
    STATE(711), 1,
      sym_runnable,
  [10508] = 1,
    ACTIONS(1016), 2,
      sym_blank_line,
      sym__text_indent,
  [10513] = 2,
    ACTIONS(467), 1,
      sym__line_start,
    STATE(92), 1,
      sym_field,
  [10520] = 1,
    ACTIONS(1759), 2,
      sym_arrow,
      sym_colon,
  [10525] = 2,
    ACTIONS(591), 1,
      sym__from_start,
    STATE(340), 1,
      sym__from_complement,
  [10532] = 1,
    ACTIONS(1761), 2,
      sym_integer_literal,
      sym_default_keyword,
  [10537] = 2,
    ACTIONS(1763), 1,
      sym_snake_name,
    STATE(917), 1,
      sym_property_key,
  [10544] = 1,
    ACTIONS(1765), 2,
      sym_newline,
      sym__inline_comment,
  [10549] = 2,
    ACTIONS(1767), 1,
      sym_snake_name,
    STATE(353), 1,
      sym_agent,
  [10556] = 2,
    ACTIONS(1625), 1,
      anon_sym_EQ,
    STATE(9), 1,
      sym_assign_operator,
  [10563] = 2,
    ACTIONS(1769), 1,
      sym__one_integer_literal,
    ACTIONS(1771), 1,
      sym__other_integer_literal,
  [10570] = 2,
    ACTIONS(1773), 1,
      anon_sym_EQ,
    STATE(884), 1,
      sym_assign_operator,
  [10577] = 2,
    ACTIONS(591), 1,
      sym__from_start,
    STATE(376), 1,
      sym__from_complement,
  [10584] = 2,
    ACTIONS(1775), 1,
      sym_text_line,
    STATE(677), 1,
      sym_cap_ref,
  [10591] = 1,
    ACTIONS(1481), 2,
      sym_newline,
      sym__inline_comment,
  [10596] = 2,
    ACTIONS(591), 1,
      sym__from_start,
    STATE(379), 1,
      sym__from_complement,
  [10603] = 1,
    ACTIONS(1483), 2,
      sym_newline,
      sym__inline_comment,
  [10608] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(955), 1,
      sym_param_doc_tag,
  [10615] = 1,
    ACTIONS(1777), 2,
      sym_rparen,
      sym_comma,
  [10620] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(966), 1,
      sym_param_doc_tag,
  [10627] = 2,
    ACTIONS(1679), 1,
      anon_sym_EQ,
    STATE(579), 1,
      sym_assign_operator,
  [10634] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(977), 1,
      sym_param_doc_tag,
  [10641] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(984), 1,
      sym_param_doc_tag,
  [10648] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(991), 1,
      sym_param_doc_tag,
  [10655] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(998), 1,
      sym_param_doc_tag,
  [10662] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(1005), 1,
      sym_param_doc_tag,
  [10669] = 2,
    ACTIONS(1675), 1,
      anon_sym_ATparam,
    STATE(1012), 1,
      sym_param_doc_tag,
  [10676] = 2,
    ACTIONS(1679), 1,
      anon_sym_EQ,
    STATE(911), 1,
      sym_assign_operator,
  [10683] = 2,
    ACTIONS(1679), 1,
      anon_sym_EQ,
    STATE(659), 1,
      sym_assign_operator,
  [10690] = 2,
    ACTIONS(1721), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_assign_operator,
  [10697] = 2,
    ACTIONS(1779), 1,
      sym_comment_text,
    ACTIONS(1781), 1,
      sym__comment_end,
  [10704] = 2,
    ACTIONS(1633), 1,
      anon_sym_EQ,
    STATE(660), 1,
      sym_assign_operator,
  [10711] = 1,
    ACTIONS(1783), 2,
      sym_newline,
      sym__inline_comment,
  [10716] = 1,
    ACTIONS(1785), 2,
      sym_newline,
      sym__inline_comment,
  [10721] = 2,
    ACTIONS(1767), 1,
      sym_snake_name,
    STATE(341), 1,
      sym_agent,
  [10728] = 2,
    ACTIONS(1787), 1,
      sym_comment_text,
    ACTIONS(1789), 1,
      sym__comment_end,
  [10735] = 1,
    ACTIONS(1791), 1,
      sym__comment_end,
  [10739] = 1,
    ACTIONS(1793), 1,
      sym__dedent,
  [10743] = 1,
    ACTIONS(1795), 1,
      sym_colon,
  [10747] = 1,
    ACTIONS(1797), 1,
      sym__dedent,
  [10751] = 1,
    ACTIONS(1799), 1,
      sym__dedent,
  [10755] = 1,
    ACTIONS(1801), 1,
      sym__comment_end,
  [10759] = 1,
    ACTIONS(1803), 1,
      sym__dedent,
  [10763] = 1,
    ACTIONS(1805), 1,
      sym__dedent,
  [10767] = 1,
    ACTIONS(1807), 1,
      sym_colon,
  [10771] = 1,
    ACTIONS(1809), 1,
      sym__comment_end,
  [10775] = 1,
    ACTIONS(1811), 1,
      sym_cap_kind,
  [10779] = 1,
    ACTIONS(1813), 1,
      sym__comment_end,
  [10783] = 1,
    ACTIONS(1815), 1,
      sym__comment_end,
  [10787] = 1,
    ACTIONS(1817), 1,
      sym__comment_end,
  [10791] = 1,
    ACTIONS(1819), 1,
      sym_newline,
  [10795] = 1,
    ACTIONS(1821), 1,
      sym_flow_until_keyword,
  [10799] = 1,
    ACTIONS(1613), 1,
      anon_sym_EQ,
  [10803] = 1,
    ACTIONS(219), 1,
      sym_text_line,
  [10807] = 1,
    ACTIONS(1823), 1,
      sym__dedent,
  [10811] = 1,
    ACTIONS(1261), 1,
      sym__dedent,
  [10815] = 1,
    ACTIONS(1825), 1,
      sym_directive_value,
  [10819] = 1,
    ACTIONS(1639), 1,
      sym_directive_value,
  [10823] = 1,
    ACTIONS(1827), 1,
      sym__comment_end,
  [10827] = 1,
    ACTIONS(1829), 1,
      sym__comment_end,
  [10831] = 1,
    ACTIONS(1831), 1,
      sym__comment_end,
  [10835] = 1,
    ACTIONS(1833), 1,
      sym_newline,
  [10839] = 1,
    ACTIONS(285), 1,
      sym__dedent,
  [10843] = 1,
    ACTIONS(1835), 1,
      sym_colon,
  [10847] = 1,
    ACTIONS(1837), 1,
      sym_colon,
  [10851] = 1,
    ACTIONS(1839), 1,
      sym__comment_end,
  [10855] = 1,
    ACTIONS(1841), 1,
      sym__dedent,
  [10859] = 1,
    ACTIONS(1843), 1,
      sym__dedent,
  [10863] = 1,
    ACTIONS(1845), 1,
      sym_colon,
  [10867] = 1,
    ACTIONS(1847), 1,
      sym__comment_end,
  [10871] = 1,
    ACTIONS(1849), 1,
      sym__comment_end,
  [10875] = 1,
    ACTIONS(1851), 1,
      sym__comment_end,
  [10879] = 1,
    ACTIONS(1853), 1,
      sym_newline,
  [10883] = 1,
    ACTIONS(1855), 1,
      sym_colon,
  [10887] = 1,
    ACTIONS(1857), 1,
      sym__dedent,
  [10891] = 1,
    ACTIONS(1859), 1,
      sym_newline,
  [10895] = 1,
    ACTIONS(1861), 1,
      ts_builtin_sym_end,
  [10899] = 1,
    ACTIONS(1863), 1,
      sym__comment_end,
  [10903] = 1,
    ACTIONS(1865), 1,
      sym__comment_end,
  [10907] = 1,
    ACTIONS(1867), 1,
      sym_newline,
  [10911] = 1,
    ACTIONS(1869), 1,
      sym__comment_end,
  [10915] = 1,
    ACTIONS(1871), 1,
      sym_colon,
  [10919] = 1,
    ACTIONS(1873), 1,
      sym__dedent,
  [10923] = 1,
    ACTIONS(1875), 1,
      sym__comment_end,
  [10927] = 1,
    ACTIONS(1877), 1,
      sym__comment_end,
  [10931] = 1,
    ACTIONS(1879), 1,
      sym__comment_end,
  [10935] = 1,
    ACTIONS(1881), 1,
      sym_newline,
  [10939] = 1,
    ACTIONS(1883), 1,
      sym__comment_end,
  [10943] = 1,
    ACTIONS(1885), 1,
      sym_flow_time_keyword,
  [10947] = 1,
    ACTIONS(1887), 1,
      sym_flow_lane_keyword,
  [10951] = 1,
    ACTIONS(1889), 1,
      sym__comment_end,
  [10955] = 1,
    ACTIONS(1891), 1,
      sym__comment_end,
  [10959] = 1,
    ACTIONS(1893), 1,
      sym__comment_end,
  [10963] = 1,
    ACTIONS(1895), 1,
      sym_newline,
  [10967] = 1,
    ACTIONS(1897), 1,
      sym_colon,
  [10971] = 1,
    ACTIONS(1899), 1,
      sym_colon,
  [10975] = 1,
    ACTIONS(1901), 1,
      sym_colon,
  [10979] = 1,
    ACTIONS(1903), 1,
      sym__comment_end,
  [10983] = 1,
    ACTIONS(1905), 1,
      sym__comment_end,
  [10987] = 1,
    ACTIONS(1907), 1,
      sym__comment_end,
  [10991] = 1,
    ACTIONS(1909), 1,
      sym_newline,
  [10995] = 1,
    ACTIONS(305), 1,
      sym__dedent,
  [10999] = 1,
    ACTIONS(1911), 1,
      sym_colon,
  [11003] = 1,
    ACTIONS(1885), 1,
      sym_flow_times_keyword,
  [11007] = 1,
    ACTIONS(1913), 1,
      sym__comment_end,
  [11011] = 1,
    ACTIONS(1915), 1,
      sym__comment_end,
  [11015] = 1,
    ACTIONS(1917), 1,
      sym__comment_end,
  [11019] = 1,
    ACTIONS(1919), 1,
      sym_newline,
  [11023] = 1,
    ACTIONS(1921), 1,
      sym_newline,
  [11027] = 1,
    ACTIONS(1923), 1,
      sym_integer_literal,
  [11031] = 1,
    ACTIONS(1925), 1,
      sym_colon,
  [11035] = 1,
    ACTIONS(1927), 1,
      sym__dedent,
  [11039] = 1,
    ACTIONS(1323), 1,
      sym__dedent,
  [11043] = 1,
    ACTIONS(1929), 1,
      sym__dedent,
  [11047] = 1,
    ACTIONS(1931), 1,
      sym_colon,
  [11051] = 1,
    ACTIONS(1933), 1,
      sym_colon,
  [11055] = 1,
    ACTIONS(1935), 1,
      sym_colon,
  [11059] = 1,
    ACTIONS(1357), 1,
      aux_sym__doc_space_token1,
  [11063] = 1,
    ACTIONS(1937), 1,
      sym_flow_exec_keyword,
  [11067] = 1,
    ACTIONS(1761), 1,
      sym_directive_value,
  [11071] = 1,
    ACTIONS(1939), 1,
      sym_flow_from_keyword,
  [11075] = 1,
    ACTIONS(1941), 1,
      sym_flow_exec_keyword,
  [11079] = 1,
    ACTIONS(1943), 1,
      sym_flow_until_keyword,
  [11083] = 1,
    ACTIONS(1945), 1,
      sym_colon,
  [11087] = 1,
    ACTIONS(1947), 1,
      sym_colon,
  [11091] = 1,
    ACTIONS(1949), 1,
      sym_integer_literal,
  [11095] = 1,
    ACTIONS(1951), 1,
      sym_flow_exec_keyword,
  [11099] = 1,
    ACTIONS(1953), 1,
      sym_newline,
  [11103] = 1,
    ACTIONS(1955), 1,
      sym__comment_end,
  [11107] = 1,
    ACTIONS(1957), 1,
      sym_flow_until_keyword,
  [11111] = 1,
    ACTIONS(1959), 1,
      sym_colon,
  [11115] = 1,
    ACTIONS(1961), 1,
      sym_colon,
  [11119] = 1,
    ACTIONS(1963), 1,
      sym_newline,
  [11123] = 1,
    ACTIONS(1965), 1,
      anon_sym_EQ,
  [11127] = 1,
    ACTIONS(1967), 1,
      sym_flow_exec_keyword,
  [11131] = 1,
    ACTIONS(1969), 1,
      sym_flow_until_keyword,
  [11135] = 1,
    ACTIONS(1971), 1,
      sym_runnable_ref,
  [11139] = 1,
    ACTIONS(1973), 1,
      sym_flow_until_keyword,
  [11143] = 1,
    ACTIONS(1975), 1,
      sym_flow_lane_keyword,
  [11147] = 1,
    ACTIONS(1977), 1,
      sym_flow_until_keyword,
  [11151] = 1,
    ACTIONS(1979), 1,
      sym_comment_text,
  [11155] = 1,
    ACTIONS(1981), 1,
      sym__comment_end,
  [11159] = 1,
    ACTIONS(1983), 1,
      sym__dedent,
  [11163] = 1,
    ACTIONS(1985), 1,
      sym__dedent,
  [11167] = 1,
    ACTIONS(1987), 1,
      sym__dedent,
  [11171] = 1,
    ACTIONS(1989), 1,
      sym_colon,
  [11175] = 1,
    ACTIONS(1991), 1,
      sym_integer_literal,
  [11179] = 1,
    ACTIONS(1993), 1,
      sym_colon,
  [11183] = 1,
    ACTIONS(1995), 1,
      sym__dedent,
  [11187] = 1,
    ACTIONS(1997), 1,
      sym_newline,
  [11191] = 1,
    ACTIONS(1999), 1,
      sym__dedent,
  [11195] = 1,
    ACTIONS(2001), 1,
      sym_colon,
  [11199] = 1,
    ACTIONS(2003), 1,
      sym__dedent,
  [11203] = 1,
    ACTIONS(2005), 1,
      sym_colon,
  [11207] = 1,
    ACTIONS(2007), 1,
      sym_colon,
  [11211] = 1,
    ACTIONS(2009), 1,
      sym_colon,
  [11215] = 1,
    ACTIONS(2011), 1,
      sym__dedent,
  [11219] = 1,
    ACTIONS(2013), 1,
      sym__dedent,
  [11223] = 1,
    ACTIONS(2015), 1,
      anon_sym_EQ,
  [11227] = 1,
    ACTIONS(2017), 1,
      sym_colon,
  [11231] = 1,
    ACTIONS(2019), 1,
      sym__dedent,
  [11235] = 1,
    ACTIONS(2021), 1,
      sym_colon,
  [11239] = 1,
    ACTIONS(2023), 1,
      sym__dedent,
  [11243] = 1,
    ACTIONS(2025), 1,
      sym_colon,
  [11247] = 1,
    ACTIONS(2027), 1,
      sym__dedent,
  [11251] = 1,
    ACTIONS(2029), 1,
      sym_colon,
  [11255] = 1,
    ACTIONS(2031), 1,
      sym_colon,
  [11259] = 1,
    ACTIONS(2033), 1,
      sym__dedent,
  [11263] = 1,
    ACTIONS(2035), 1,
      sym_colon,
  [11267] = 1,
    ACTIONS(2037), 1,
      sym__dedent,
  [11271] = 1,
    ACTIONS(2039), 1,
      sym_colon,
  [11275] = 1,
    ACTIONS(2041), 1,
      sym_colon,
  [11279] = 1,
    ACTIONS(2043), 1,
      sym_newline,
  [11283] = 1,
    ACTIONS(2045), 1,
      sym_colon,
  [11287] = 1,
    ACTIONS(2047), 1,
      sym_integer_literal,
  [11291] = 1,
    ACTIONS(2049), 1,
      sym__dedent,
  [11295] = 1,
    ACTIONS(2051), 1,
      sym_newline,
  [11299] = 1,
    ACTIONS(2053), 1,
      sym__dedent,
  [11303] = 1,
    ACTIONS(2055), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 411,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 469,
  [SMALL_STATE(15)] = 488,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 606,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 696,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 744,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 824,
  [SMALL_STATE(28)] = 848,
  [SMALL_STATE(29)] = 872,
  [SMALL_STATE(30)] = 896,
  [SMALL_STATE(31)] = 920,
  [SMALL_STATE(32)] = 944,
  [SMALL_STATE(33)] = 968,
  [SMALL_STATE(34)] = 992,
  [SMALL_STATE(35)] = 1024,
  [SMALL_STATE(36)] = 1048,
  [SMALL_STATE(37)] = 1072,
  [SMALL_STATE(38)] = 1096,
  [SMALL_STATE(39)] = 1120,
  [SMALL_STATE(40)] = 1149,
  [SMALL_STATE(41)] = 1178,
  [SMALL_STATE(42)] = 1207,
  [SMALL_STATE(43)] = 1236,
  [SMALL_STATE(44)] = 1262,
  [SMALL_STATE(45)] = 1286,
  [SMALL_STATE(46)] = 1314,
  [SMALL_STATE(47)] = 1338,
  [SMALL_STATE(48)] = 1364,
  [SMALL_STATE(49)] = 1388,
  [SMALL_STATE(50)] = 1414,
  [SMALL_STATE(51)] = 1440,
  [SMALL_STATE(52)] = 1466,
  [SMALL_STATE(53)] = 1492,
  [SMALL_STATE(54)] = 1518,
  [SMALL_STATE(55)] = 1546,
  [SMALL_STATE(56)] = 1570,
  [SMALL_STATE(57)] = 1596,
  [SMALL_STATE(58)] = 1619,
  [SMALL_STATE(59)] = 1640,
  [SMALL_STATE(60)] = 1659,
  [SMALL_STATE(61)] = 1678,
  [SMALL_STATE(62)] = 1701,
  [SMALL_STATE(63)] = 1724,
  [SMALL_STATE(64)] = 1747,
  [SMALL_STATE(65)] = 1766,
  [SMALL_STATE(66)] = 1789,
  [SMALL_STATE(67)] = 1810,
  [SMALL_STATE(68)] = 1831,
  [SMALL_STATE(69)] = 1856,
  [SMALL_STATE(70)] = 1879,
  [SMALL_STATE(71)] = 1904,
  [SMALL_STATE(72)] = 1925,
  [SMALL_STATE(73)] = 1948,
  [SMALL_STATE(74)] = 1973,
  [SMALL_STATE(75)] = 1992,
  [SMALL_STATE(76)] = 2015,
  [SMALL_STATE(77)] = 2034,
  [SMALL_STATE(78)] = 2057,
  [SMALL_STATE(79)] = 2080,
  [SMALL_STATE(80)] = 2103,
  [SMALL_STATE(81)] = 2126,
  [SMALL_STATE(82)] = 2149,
  [SMALL_STATE(83)] = 2174,
  [SMALL_STATE(84)] = 2193,
  [SMALL_STATE(85)] = 2216,
  [SMALL_STATE(86)] = 2235,
  [SMALL_STATE(87)] = 2255,
  [SMALL_STATE(88)] = 2275,
  [SMALL_STATE(89)] = 2295,
  [SMALL_STATE(90)] = 2313,
  [SMALL_STATE(91)] = 2331,
  [SMALL_STATE(92)] = 2351,
  [SMALL_STATE(93)] = 2369,
  [SMALL_STATE(94)] = 2387,
  [SMALL_STATE(95)] = 2405,
  [SMALL_STATE(96)] = 2421,
  [SMALL_STATE(97)] = 2439,
  [SMALL_STATE(98)] = 2457,
  [SMALL_STATE(99)] = 2475,
  [SMALL_STATE(100)] = 2489,
  [SMALL_STATE(101)] = 2507,
  [SMALL_STATE(102)] = 2521,
  [SMALL_STATE(103)] = 2537,
  [SMALL_STATE(104)] = 2557,
  [SMALL_STATE(105)] = 2577,
  [SMALL_STATE(106)] = 2597,
  [SMALL_STATE(107)] = 2617,
  [SMALL_STATE(108)] = 2635,
  [SMALL_STATE(109)] = 2653,
  [SMALL_STATE(110)] = 2671,
  [SMALL_STATE(111)] = 2693,
  [SMALL_STATE(112)] = 2715,
  [SMALL_STATE(113)] = 2733,
  [SMALL_STATE(114)] = 2751,
  [SMALL_STATE(115)] = 2771,
  [SMALL_STATE(116)] = 2789,
  [SMALL_STATE(117)] = 2807,
  [SMALL_STATE(118)] = 2827,
  [SMALL_STATE(119)] = 2845,
  [SMALL_STATE(120)] = 2863,
  [SMALL_STATE(121)] = 2881,
  [SMALL_STATE(122)] = 2901,
  [SMALL_STATE(123)] = 2919,
  [SMALL_STATE(124)] = 2937,
  [SMALL_STATE(125)] = 2955,
  [SMALL_STATE(126)] = 2975,
  [SMALL_STATE(127)] = 2993,
  [SMALL_STATE(128)] = 3013,
  [SMALL_STATE(129)] = 3035,
  [SMALL_STATE(130)] = 3053,
  [SMALL_STATE(131)] = 3071,
  [SMALL_STATE(132)] = 3089,
  [SMALL_STATE(133)] = 3107,
  [SMALL_STATE(134)] = 3125,
  [SMALL_STATE(135)] = 3143,
  [SMALL_STATE(136)] = 3161,
  [SMALL_STATE(137)] = 3179,
  [SMALL_STATE(138)] = 3197,
  [SMALL_STATE(139)] = 3213,
  [SMALL_STATE(140)] = 3231,
  [SMALL_STATE(141)] = 3251,
  [SMALL_STATE(142)] = 3271,
  [SMALL_STATE(143)] = 3291,
  [SMALL_STATE(144)] = 3313,
  [SMALL_STATE(145)] = 3333,
  [SMALL_STATE(146)] = 3351,
  [SMALL_STATE(147)] = 3369,
  [SMALL_STATE(148)] = 3387,
  [SMALL_STATE(149)] = 3406,
  [SMALL_STATE(150)] = 3423,
  [SMALL_STATE(151)] = 3440,
  [SMALL_STATE(152)] = 3457,
  [SMALL_STATE(153)] = 3476,
  [SMALL_STATE(154)] = 3493,
  [SMALL_STATE(155)] = 3510,
  [SMALL_STATE(156)] = 3527,
  [SMALL_STATE(157)] = 3544,
  [SMALL_STATE(158)] = 3561,
  [SMALL_STATE(159)] = 3578,
  [SMALL_STATE(160)] = 3597,
  [SMALL_STATE(161)] = 3610,
  [SMALL_STATE(162)] = 3627,
  [SMALL_STATE(163)] = 3646,
  [SMALL_STATE(164)] = 3661,
  [SMALL_STATE(165)] = 3670,
  [SMALL_STATE(166)] = 3687,
  [SMALL_STATE(167)] = 3696,
  [SMALL_STATE(168)] = 3705,
  [SMALL_STATE(169)] = 3722,
  [SMALL_STATE(170)] = 3737,
  [SMALL_STATE(171)] = 3756,
  [SMALL_STATE(172)] = 3775,
  [SMALL_STATE(173)] = 3794,
  [SMALL_STATE(174)] = 3813,
  [SMALL_STATE(175)] = 3830,
  [SMALL_STATE(176)] = 3847,
  [SMALL_STATE(177)] = 3866,
  [SMALL_STATE(178)] = 3885,
  [SMALL_STATE(179)] = 3904,
  [SMALL_STATE(180)] = 3923,
  [SMALL_STATE(181)] = 3942,
  [SMALL_STATE(182)] = 3961,
  [SMALL_STATE(183)] = 3978,
  [SMALL_STATE(184)] = 3997,
  [SMALL_STATE(185)] = 4016,
  [SMALL_STATE(186)] = 4035,
  [SMALL_STATE(187)] = 4048,
  [SMALL_STATE(188)] = 4065,
  [SMALL_STATE(189)] = 4084,
  [SMALL_STATE(190)] = 4101,
  [SMALL_STATE(191)] = 4118,
  [SMALL_STATE(192)] = 4135,
  [SMALL_STATE(193)] = 4152,
  [SMALL_STATE(194)] = 4169,
  [SMALL_STATE(195)] = 4186,
  [SMALL_STATE(196)] = 4203,
  [SMALL_STATE(197)] = 4216,
  [SMALL_STATE(198)] = 4231,
  [SMALL_STATE(199)] = 4246,
  [SMALL_STATE(200)] = 4263,
  [SMALL_STATE(201)] = 4276,
  [SMALL_STATE(202)] = 4291,
  [SMALL_STATE(203)] = 4308,
  [SMALL_STATE(204)] = 4323,
  [SMALL_STATE(205)] = 4331,
  [SMALL_STATE(206)] = 4339,
  [SMALL_STATE(207)] = 4347,
  [SMALL_STATE(208)] = 4355,
  [SMALL_STATE(209)] = 4363,
  [SMALL_STATE(210)] = 4371,
  [SMALL_STATE(211)] = 4387,
  [SMALL_STATE(212)] = 4401,
  [SMALL_STATE(213)] = 4409,
  [SMALL_STATE(214)] = 4417,
  [SMALL_STATE(215)] = 4425,
  [SMALL_STATE(216)] = 4433,
  [SMALL_STATE(217)] = 4441,
  [SMALL_STATE(218)] = 4449,
  [SMALL_STATE(219)] = 4457,
  [SMALL_STATE(220)] = 4465,
  [SMALL_STATE(221)] = 4473,
  [SMALL_STATE(222)] = 4481,
  [SMALL_STATE(223)] = 4489,
  [SMALL_STATE(224)] = 4497,
  [SMALL_STATE(225)] = 4505,
  [SMALL_STATE(226)] = 4513,
  [SMALL_STATE(227)] = 4521,
  [SMALL_STATE(228)] = 4529,
  [SMALL_STATE(229)] = 4537,
  [SMALL_STATE(230)] = 4545,
  [SMALL_STATE(231)] = 4553,
  [SMALL_STATE(232)] = 4561,
  [SMALL_STATE(233)] = 4577,
  [SMALL_STATE(234)] = 4591,
  [SMALL_STATE(235)] = 4599,
  [SMALL_STATE(236)] = 4607,
  [SMALL_STATE(237)] = 4615,
  [SMALL_STATE(238)] = 4623,
  [SMALL_STATE(239)] = 4631,
  [SMALL_STATE(240)] = 4639,
  [SMALL_STATE(241)] = 4647,
  [SMALL_STATE(242)] = 4655,
  [SMALL_STATE(243)] = 4663,
  [SMALL_STATE(244)] = 4671,
  [SMALL_STATE(245)] = 4679,
  [SMALL_STATE(246)] = 4687,
  [SMALL_STATE(247)] = 4695,
  [SMALL_STATE(248)] = 4703,
  [SMALL_STATE(249)] = 4711,
  [SMALL_STATE(250)] = 4719,
  [SMALL_STATE(251)] = 4727,
  [SMALL_STATE(252)] = 4735,
  [SMALL_STATE(253)] = 4743,
  [SMALL_STATE(254)] = 4751,
  [SMALL_STATE(255)] = 4759,
  [SMALL_STATE(256)] = 4767,
  [SMALL_STATE(257)] = 4775,
  [SMALL_STATE(258)] = 4783,
  [SMALL_STATE(259)] = 4791,
  [SMALL_STATE(260)] = 4805,
  [SMALL_STATE(261)] = 4813,
  [SMALL_STATE(262)] = 4821,
  [SMALL_STATE(263)] = 4829,
  [SMALL_STATE(264)] = 4837,
  [SMALL_STATE(265)] = 4845,
  [SMALL_STATE(266)] = 4853,
  [SMALL_STATE(267)] = 4867,
  [SMALL_STATE(268)] = 4875,
  [SMALL_STATE(269)] = 4883,
  [SMALL_STATE(270)] = 4891,
  [SMALL_STATE(271)] = 4899,
  [SMALL_STATE(272)] = 4907,
  [SMALL_STATE(273)] = 4915,
  [SMALL_STATE(274)] = 4923,
  [SMALL_STATE(275)] = 4939,
  [SMALL_STATE(276)] = 4947,
  [SMALL_STATE(277)] = 4955,
  [SMALL_STATE(278)] = 4963,
  [SMALL_STATE(279)] = 4971,
  [SMALL_STATE(280)] = 4979,
  [SMALL_STATE(281)] = 4987,
  [SMALL_STATE(282)] = 4995,
  [SMALL_STATE(283)] = 5003,
  [SMALL_STATE(284)] = 5011,
  [SMALL_STATE(285)] = 5019,
  [SMALL_STATE(286)] = 5027,
  [SMALL_STATE(287)] = 5035,
  [SMALL_STATE(288)] = 5043,
  [SMALL_STATE(289)] = 5051,
  [SMALL_STATE(290)] = 5059,
  [SMALL_STATE(291)] = 5067,
  [SMALL_STATE(292)] = 5075,
  [SMALL_STATE(293)] = 5083,
  [SMALL_STATE(294)] = 5091,
  [SMALL_STATE(295)] = 5099,
  [SMALL_STATE(296)] = 5107,
  [SMALL_STATE(297)] = 5115,
  [SMALL_STATE(298)] = 5129,
  [SMALL_STATE(299)] = 5137,
  [SMALL_STATE(300)] = 5145,
  [SMALL_STATE(301)] = 5153,
  [SMALL_STATE(302)] = 5161,
  [SMALL_STATE(303)] = 5169,
  [SMALL_STATE(304)] = 5177,
  [SMALL_STATE(305)] = 5185,
  [SMALL_STATE(306)] = 5193,
  [SMALL_STATE(307)] = 5201,
  [SMALL_STATE(308)] = 5209,
  [SMALL_STATE(309)] = 5217,
  [SMALL_STATE(310)] = 5231,
  [SMALL_STATE(311)] = 5239,
  [SMALL_STATE(312)] = 5247,
  [SMALL_STATE(313)] = 5263,
  [SMALL_STATE(314)] = 5271,
  [SMALL_STATE(315)] = 5279,
  [SMALL_STATE(316)] = 5287,
  [SMALL_STATE(317)] = 5295,
  [SMALL_STATE(318)] = 5303,
  [SMALL_STATE(319)] = 5311,
  [SMALL_STATE(320)] = 5325,
  [SMALL_STATE(321)] = 5339,
  [SMALL_STATE(322)] = 5353,
  [SMALL_STATE(323)] = 5361,
  [SMALL_STATE(324)] = 5369,
  [SMALL_STATE(325)] = 5377,
  [SMALL_STATE(326)] = 5385,
  [SMALL_STATE(327)] = 5393,
  [SMALL_STATE(328)] = 5401,
  [SMALL_STATE(329)] = 5409,
  [SMALL_STATE(330)] = 5417,
  [SMALL_STATE(331)] = 5425,
  [SMALL_STATE(332)] = 5433,
  [SMALL_STATE(333)] = 5441,
  [SMALL_STATE(334)] = 5449,
  [SMALL_STATE(335)] = 5465,
  [SMALL_STATE(336)] = 5479,
  [SMALL_STATE(337)] = 5493,
  [SMALL_STATE(338)] = 5507,
  [SMALL_STATE(339)] = 5521,
  [SMALL_STATE(340)] = 5535,
  [SMALL_STATE(341)] = 5549,
  [SMALL_STATE(342)] = 5565,
  [SMALL_STATE(343)] = 5573,
  [SMALL_STATE(344)] = 5587,
  [SMALL_STATE(345)] = 5595,
  [SMALL_STATE(346)] = 5611,
  [SMALL_STATE(347)] = 5625,
  [SMALL_STATE(348)] = 5641,
  [SMALL_STATE(349)] = 5657,
  [SMALL_STATE(350)] = 5665,
  [SMALL_STATE(351)] = 5679,
  [SMALL_STATE(352)] = 5695,
  [SMALL_STATE(353)] = 5711,
  [SMALL_STATE(354)] = 5727,
  [SMALL_STATE(355)] = 5741,
  [SMALL_STATE(356)] = 5757,
  [SMALL_STATE(357)] = 5773,
  [SMALL_STATE(358)] = 5787,
  [SMALL_STATE(359)] = 5803,
  [SMALL_STATE(360)] = 5819,
  [SMALL_STATE(361)] = 5835,
  [SMALL_STATE(362)] = 5843,
  [SMALL_STATE(363)] = 5857,
  [SMALL_STATE(364)] = 5871,
  [SMALL_STATE(365)] = 5885,
  [SMALL_STATE(366)] = 5901,
  [SMALL_STATE(367)] = 5917,
  [SMALL_STATE(368)] = 5931,
  [SMALL_STATE(369)] = 5945,
  [SMALL_STATE(370)] = 5953,
  [SMALL_STATE(371)] = 5969,
  [SMALL_STATE(372)] = 5983,
  [SMALL_STATE(373)] = 5997,
  [SMALL_STATE(374)] = 6011,
  [SMALL_STATE(375)] = 6025,
  [SMALL_STATE(376)] = 6033,
  [SMALL_STATE(377)] = 6047,
  [SMALL_STATE(378)] = 6061,
  [SMALL_STATE(379)] = 6075,
  [SMALL_STATE(380)] = 6089,
  [SMALL_STATE(381)] = 6097,
  [SMALL_STATE(382)] = 6111,
  [SMALL_STATE(383)] = 6119,
  [SMALL_STATE(384)] = 6133,
  [SMALL_STATE(385)] = 6147,
  [SMALL_STATE(386)] = 6161,
  [SMALL_STATE(387)] = 6175,
  [SMALL_STATE(388)] = 6189,
  [SMALL_STATE(389)] = 6197,
  [SMALL_STATE(390)] = 6211,
  [SMALL_STATE(391)] = 6225,
  [SMALL_STATE(392)] = 6239,
  [SMALL_STATE(393)] = 6253,
  [SMALL_STATE(394)] = 6261,
  [SMALL_STATE(395)] = 6275,
  [SMALL_STATE(396)] = 6289,
  [SMALL_STATE(397)] = 6303,
  [SMALL_STATE(398)] = 6317,
  [SMALL_STATE(399)] = 6325,
  [SMALL_STATE(400)] = 6341,
  [SMALL_STATE(401)] = 6357,
  [SMALL_STATE(402)] = 6373,
  [SMALL_STATE(403)] = 6389,
  [SMALL_STATE(404)] = 6397,
  [SMALL_STATE(405)] = 6405,
  [SMALL_STATE(406)] = 6413,
  [SMALL_STATE(407)] = 6421,
  [SMALL_STATE(408)] = 6429,
  [SMALL_STATE(409)] = 6437,
  [SMALL_STATE(410)] = 6445,
  [SMALL_STATE(411)] = 6459,
  [SMALL_STATE(412)] = 6473,
  [SMALL_STATE(413)] = 6487,
  [SMALL_STATE(414)] = 6495,
  [SMALL_STATE(415)] = 6503,
  [SMALL_STATE(416)] = 6510,
  [SMALL_STATE(417)] = 6523,
  [SMALL_STATE(418)] = 6530,
  [SMALL_STATE(419)] = 6537,
  [SMALL_STATE(420)] = 6544,
  [SMALL_STATE(421)] = 6551,
  [SMALL_STATE(422)] = 6558,
  [SMALL_STATE(423)] = 6565,
  [SMALL_STATE(424)] = 6572,
  [SMALL_STATE(425)] = 6579,
  [SMALL_STATE(426)] = 6586,
  [SMALL_STATE(427)] = 6593,
  [SMALL_STATE(428)] = 6600,
  [SMALL_STATE(429)] = 6607,
  [SMALL_STATE(430)] = 6614,
  [SMALL_STATE(431)] = 6621,
  [SMALL_STATE(432)] = 6628,
  [SMALL_STATE(433)] = 6635,
  [SMALL_STATE(434)] = 6642,
  [SMALL_STATE(435)] = 6649,
  [SMALL_STATE(436)] = 6656,
  [SMALL_STATE(437)] = 6663,
  [SMALL_STATE(438)] = 6670,
  [SMALL_STATE(439)] = 6677,
  [SMALL_STATE(440)] = 6684,
  [SMALL_STATE(441)] = 6691,
  [SMALL_STATE(442)] = 6702,
  [SMALL_STATE(443)] = 6713,
  [SMALL_STATE(444)] = 6720,
  [SMALL_STATE(445)] = 6727,
  [SMALL_STATE(446)] = 6734,
  [SMALL_STATE(447)] = 6741,
  [SMALL_STATE(448)] = 6748,
  [SMALL_STATE(449)] = 6755,
  [SMALL_STATE(450)] = 6762,
  [SMALL_STATE(451)] = 6769,
  [SMALL_STATE(452)] = 6776,
  [SMALL_STATE(453)] = 6783,
  [SMALL_STATE(454)] = 6790,
  [SMALL_STATE(455)] = 6797,
  [SMALL_STATE(456)] = 6804,
  [SMALL_STATE(457)] = 6811,
  [SMALL_STATE(458)] = 6818,
  [SMALL_STATE(459)] = 6825,
  [SMALL_STATE(460)] = 6832,
  [SMALL_STATE(461)] = 6843,
  [SMALL_STATE(462)] = 6850,
  [SMALL_STATE(463)] = 6861,
  [SMALL_STATE(464)] = 6872,
  [SMALL_STATE(465)] = 6879,
  [SMALL_STATE(466)] = 6886,
  [SMALL_STATE(467)] = 6893,
  [SMALL_STATE(468)] = 6906,
  [SMALL_STATE(469)] = 6913,
  [SMALL_STATE(470)] = 6926,
  [SMALL_STATE(471)] = 6939,
  [SMALL_STATE(472)] = 6946,
  [SMALL_STATE(473)] = 6957,
  [SMALL_STATE(474)] = 6964,
  [SMALL_STATE(475)] = 6971,
  [SMALL_STATE(476)] = 6984,
  [SMALL_STATE(477)] = 6991,
  [SMALL_STATE(478)] = 6998,
  [SMALL_STATE(479)] = 7005,
  [SMALL_STATE(480)] = 7012,
  [SMALL_STATE(481)] = 7019,
  [SMALL_STATE(482)] = 7026,
  [SMALL_STATE(483)] = 7033,
  [SMALL_STATE(484)] = 7040,
  [SMALL_STATE(485)] = 7047,
  [SMALL_STATE(486)] = 7054,
  [SMALL_STATE(487)] = 7067,
  [SMALL_STATE(488)] = 7080,
  [SMALL_STATE(489)] = 7087,
  [SMALL_STATE(490)] = 7094,
  [SMALL_STATE(491)] = 7101,
  [SMALL_STATE(492)] = 7108,
  [SMALL_STATE(493)] = 7115,
  [SMALL_STATE(494)] = 7122,
  [SMALL_STATE(495)] = 7129,
  [SMALL_STATE(496)] = 7136,
  [SMALL_STATE(497)] = 7143,
  [SMALL_STATE(498)] = 7150,
  [SMALL_STATE(499)] = 7157,
  [SMALL_STATE(500)] = 7164,
  [SMALL_STATE(501)] = 7171,
  [SMALL_STATE(502)] = 7178,
  [SMALL_STATE(503)] = 7185,
  [SMALL_STATE(504)] = 7192,
  [SMALL_STATE(505)] = 7199,
  [SMALL_STATE(506)] = 7206,
  [SMALL_STATE(507)] = 7213,
  [SMALL_STATE(508)] = 7220,
  [SMALL_STATE(509)] = 7227,
  [SMALL_STATE(510)] = 7234,
  [SMALL_STATE(511)] = 7241,
  [SMALL_STATE(512)] = 7248,
  [SMALL_STATE(513)] = 7255,
  [SMALL_STATE(514)] = 7262,
  [SMALL_STATE(515)] = 7269,
  [SMALL_STATE(516)] = 7276,
  [SMALL_STATE(517)] = 7283,
  [SMALL_STATE(518)] = 7290,
  [SMALL_STATE(519)] = 7297,
  [SMALL_STATE(520)] = 7304,
  [SMALL_STATE(521)] = 7311,
  [SMALL_STATE(522)] = 7324,
  [SMALL_STATE(523)] = 7331,
  [SMALL_STATE(524)] = 7338,
  [SMALL_STATE(525)] = 7349,
  [SMALL_STATE(526)] = 7356,
  [SMALL_STATE(527)] = 7363,
  [SMALL_STATE(528)] = 7370,
  [SMALL_STATE(529)] = 7377,
  [SMALL_STATE(530)] = 7384,
  [SMALL_STATE(531)] = 7393,
  [SMALL_STATE(532)] = 7406,
  [SMALL_STATE(533)] = 7413,
  [SMALL_STATE(534)] = 7424,
  [SMALL_STATE(535)] = 7437,
  [SMALL_STATE(536)] = 7446,
  [SMALL_STATE(537)] = 7453,
  [SMALL_STATE(538)] = 7466,
  [SMALL_STATE(539)] = 7479,
  [SMALL_STATE(540)] = 7492,
  [SMALL_STATE(541)] = 7505,
  [SMALL_STATE(542)] = 7512,
  [SMALL_STATE(543)] = 7519,
  [SMALL_STATE(544)] = 7526,
  [SMALL_STATE(545)] = 7539,
  [SMALL_STATE(546)] = 7546,
  [SMALL_STATE(547)] = 7553,
  [SMALL_STATE(548)] = 7566,
  [SMALL_STATE(549)] = 7573,
  [SMALL_STATE(550)] = 7580,
  [SMALL_STATE(551)] = 7587,
  [SMALL_STATE(552)] = 7598,
  [SMALL_STATE(553)] = 7609,
  [SMALL_STATE(554)] = 7616,
  [SMALL_STATE(555)] = 7623,
  [SMALL_STATE(556)] = 7630,
  [SMALL_STATE(557)] = 7637,
  [SMALL_STATE(558)] = 7644,
  [SMALL_STATE(559)] = 7651,
  [SMALL_STATE(560)] = 7664,
  [SMALL_STATE(561)] = 7671,
  [SMALL_STATE(562)] = 7678,
  [SMALL_STATE(563)] = 7685,
  [SMALL_STATE(564)] = 7692,
  [SMALL_STATE(565)] = 7699,
  [SMALL_STATE(566)] = 7706,
  [SMALL_STATE(567)] = 7713,
  [SMALL_STATE(568)] = 7720,
  [SMALL_STATE(569)] = 7731,
  [SMALL_STATE(570)] = 7738,
  [SMALL_STATE(571)] = 7745,
  [SMALL_STATE(572)] = 7752,
  [SMALL_STATE(573)] = 7759,
  [SMALL_STATE(574)] = 7766,
  [SMALL_STATE(575)] = 7773,
  [SMALL_STATE(576)] = 7786,
  [SMALL_STATE(577)] = 7799,
  [SMALL_STATE(578)] = 7806,
  [SMALL_STATE(579)] = 7815,
  [SMALL_STATE(580)] = 7824,
  [SMALL_STATE(581)] = 7831,
  [SMALL_STATE(582)] = 7838,
  [SMALL_STATE(583)] = 7851,
  [SMALL_STATE(584)] = 7858,
  [SMALL_STATE(585)] = 7865,
  [SMALL_STATE(586)] = 7872,
  [SMALL_STATE(587)] = 7879,
  [SMALL_STATE(588)] = 7886,
  [SMALL_STATE(589)] = 7893,
  [SMALL_STATE(590)] = 7900,
  [SMALL_STATE(591)] = 7907,
  [SMALL_STATE(592)] = 7914,
  [SMALL_STATE(593)] = 7921,
  [SMALL_STATE(594)] = 7928,
  [SMALL_STATE(595)] = 7935,
  [SMALL_STATE(596)] = 7942,
  [SMALL_STATE(597)] = 7949,
  [SMALL_STATE(598)] = 7956,
  [SMALL_STATE(599)] = 7963,
  [SMALL_STATE(600)] = 7970,
  [SMALL_STATE(601)] = 7977,
  [SMALL_STATE(602)] = 7984,
  [SMALL_STATE(603)] = 7991,
  [SMALL_STATE(604)] = 7998,
  [SMALL_STATE(605)] = 8005,
  [SMALL_STATE(606)] = 8012,
  [SMALL_STATE(607)] = 8019,
  [SMALL_STATE(608)] = 8026,
  [SMALL_STATE(609)] = 8033,
  [SMALL_STATE(610)] = 8040,
  [SMALL_STATE(611)] = 8047,
  [SMALL_STATE(612)] = 8054,
  [SMALL_STATE(613)] = 8061,
  [SMALL_STATE(614)] = 8068,
  [SMALL_STATE(615)] = 8075,
  [SMALL_STATE(616)] = 8088,
  [SMALL_STATE(617)] = 8095,
  [SMALL_STATE(618)] = 8102,
  [SMALL_STATE(619)] = 8113,
  [SMALL_STATE(620)] = 8120,
  [SMALL_STATE(621)] = 8127,
  [SMALL_STATE(622)] = 8134,
  [SMALL_STATE(623)] = 8147,
  [SMALL_STATE(624)] = 8154,
  [SMALL_STATE(625)] = 8167,
  [SMALL_STATE(626)] = 8174,
  [SMALL_STATE(627)] = 8181,
  [SMALL_STATE(628)] = 8188,
  [SMALL_STATE(629)] = 8195,
  [SMALL_STATE(630)] = 8202,
  [SMALL_STATE(631)] = 8209,
  [SMALL_STATE(632)] = 8216,
  [SMALL_STATE(633)] = 8229,
  [SMALL_STATE(634)] = 8236,
  [SMALL_STATE(635)] = 8249,
  [SMALL_STATE(636)] = 8262,
  [SMALL_STATE(637)] = 8269,
  [SMALL_STATE(638)] = 8276,
  [SMALL_STATE(639)] = 8289,
  [SMALL_STATE(640)] = 8302,
  [SMALL_STATE(641)] = 8309,
  [SMALL_STATE(642)] = 8322,
  [SMALL_STATE(643)] = 8333,
  [SMALL_STATE(644)] = 8340,
  [SMALL_STATE(645)] = 8353,
  [SMALL_STATE(646)] = 8360,
  [SMALL_STATE(647)] = 8367,
  [SMALL_STATE(648)] = 8374,
  [SMALL_STATE(649)] = 8387,
  [SMALL_STATE(650)] = 8394,
  [SMALL_STATE(651)] = 8407,
  [SMALL_STATE(652)] = 8414,
  [SMALL_STATE(653)] = 8421,
  [SMALL_STATE(654)] = 8428,
  [SMALL_STATE(655)] = 8439,
  [SMALL_STATE(656)] = 8450,
  [SMALL_STATE(657)] = 8457,
  [SMALL_STATE(658)] = 8468,
  [SMALL_STATE(659)] = 8479,
  [SMALL_STATE(660)] = 8488,
  [SMALL_STATE(661)] = 8501,
  [SMALL_STATE(662)] = 8512,
  [SMALL_STATE(663)] = 8523,
  [SMALL_STATE(664)] = 8534,
  [SMALL_STATE(665)] = 8545,
  [SMALL_STATE(666)] = 8556,
  [SMALL_STATE(667)] = 8567,
  [SMALL_STATE(668)] = 8576,
  [SMALL_STATE(669)] = 8583,
  [SMALL_STATE(670)] = 8590,
  [SMALL_STATE(671)] = 8597,
  [SMALL_STATE(672)] = 8604,
  [SMALL_STATE(673)] = 8611,
  [SMALL_STATE(674)] = 8618,
  [SMALL_STATE(675)] = 8631,
  [SMALL_STATE(676)] = 8637,
  [SMALL_STATE(677)] = 8647,
  [SMALL_STATE(678)] = 8657,
  [SMALL_STATE(679)] = 8667,
  [SMALL_STATE(680)] = 8675,
  [SMALL_STATE(681)] = 8685,
  [SMALL_STATE(682)] = 8695,
  [SMALL_STATE(683)] = 8705,
  [SMALL_STATE(684)] = 8715,
  [SMALL_STATE(685)] = 8725,
  [SMALL_STATE(686)] = 8735,
  [SMALL_STATE(687)] = 8745,
  [SMALL_STATE(688)] = 8755,
  [SMALL_STATE(689)] = 8765,
  [SMALL_STATE(690)] = 8771,
  [SMALL_STATE(691)] = 8781,
  [SMALL_STATE(692)] = 8791,
  [SMALL_STATE(693)] = 8801,
  [SMALL_STATE(694)] = 8811,
  [SMALL_STATE(695)] = 8821,
  [SMALL_STATE(696)] = 8831,
  [SMALL_STATE(697)] = 8841,
  [SMALL_STATE(698)] = 8851,
  [SMALL_STATE(699)] = 8861,
  [SMALL_STATE(700)] = 8869,
  [SMALL_STATE(701)] = 8879,
  [SMALL_STATE(702)] = 8885,
  [SMALL_STATE(703)] = 8895,
  [SMALL_STATE(704)] = 8905,
  [SMALL_STATE(705)] = 8915,
  [SMALL_STATE(706)] = 8925,
  [SMALL_STATE(707)] = 8935,
  [SMALL_STATE(708)] = 8945,
  [SMALL_STATE(709)] = 8955,
  [SMALL_STATE(710)] = 8965,
  [SMALL_STATE(711)] = 8975,
  [SMALL_STATE(712)] = 8981,
  [SMALL_STATE(713)] = 8987,
  [SMALL_STATE(714)] = 8993,
  [SMALL_STATE(715)] = 8999,
  [SMALL_STATE(716)] = 9005,
  [SMALL_STATE(717)] = 9011,
  [SMALL_STATE(718)] = 9021,
  [SMALL_STATE(719)] = 9031,
  [SMALL_STATE(720)] = 9041,
  [SMALL_STATE(721)] = 9051,
  [SMALL_STATE(722)] = 9057,
  [SMALL_STATE(723)] = 9067,
  [SMALL_STATE(724)] = 9077,
  [SMALL_STATE(725)] = 9083,
  [SMALL_STATE(726)] = 9089,
  [SMALL_STATE(727)] = 9099,
  [SMALL_STATE(728)] = 9109,
  [SMALL_STATE(729)] = 9119,
  [SMALL_STATE(730)] = 9129,
  [SMALL_STATE(731)] = 9135,
  [SMALL_STATE(732)] = 9141,
  [SMALL_STATE(733)] = 9151,
  [SMALL_STATE(734)] = 9157,
  [SMALL_STATE(735)] = 9163,
  [SMALL_STATE(736)] = 9169,
  [SMALL_STATE(737)] = 9175,
  [SMALL_STATE(738)] = 9181,
  [SMALL_STATE(739)] = 9187,
  [SMALL_STATE(740)] = 9193,
  [SMALL_STATE(741)] = 9199,
  [SMALL_STATE(742)] = 9205,
  [SMALL_STATE(743)] = 9211,
  [SMALL_STATE(744)] = 9217,
  [SMALL_STATE(745)] = 9223,
  [SMALL_STATE(746)] = 9229,
  [SMALL_STATE(747)] = 9235,
  [SMALL_STATE(748)] = 9245,
  [SMALL_STATE(749)] = 9255,
  [SMALL_STATE(750)] = 9265,
  [SMALL_STATE(751)] = 9273,
  [SMALL_STATE(752)] = 9283,
  [SMALL_STATE(753)] = 9293,
  [SMALL_STATE(754)] = 9299,
  [SMALL_STATE(755)] = 9309,
  [SMALL_STATE(756)] = 9319,
  [SMALL_STATE(757)] = 9325,
  [SMALL_STATE(758)] = 9335,
  [SMALL_STATE(759)] = 9345,
  [SMALL_STATE(760)] = 9355,
  [SMALL_STATE(761)] = 9365,
  [SMALL_STATE(762)] = 9371,
  [SMALL_STATE(763)] = 9381,
  [SMALL_STATE(764)] = 9387,
  [SMALL_STATE(765)] = 9393,
  [SMALL_STATE(766)] = 9399,
  [SMALL_STATE(767)] = 9405,
  [SMALL_STATE(768)] = 9411,
  [SMALL_STATE(769)] = 9417,
  [SMALL_STATE(770)] = 9423,
  [SMALL_STATE(771)] = 9433,
  [SMALL_STATE(772)] = 9443,
  [SMALL_STATE(773)] = 9453,
  [SMALL_STATE(774)] = 9459,
  [SMALL_STATE(775)] = 9469,
  [SMALL_STATE(776)] = 9479,
  [SMALL_STATE(777)] = 9489,
  [SMALL_STATE(778)] = 9499,
  [SMALL_STATE(779)] = 9509,
  [SMALL_STATE(780)] = 9519,
  [SMALL_STATE(781)] = 9529,
  [SMALL_STATE(782)] = 9535,
  [SMALL_STATE(783)] = 9541,
  [SMALL_STATE(784)] = 9551,
  [SMALL_STATE(785)] = 9561,
  [SMALL_STATE(786)] = 9571,
  [SMALL_STATE(787)] = 9581,
  [SMALL_STATE(788)] = 9591,
  [SMALL_STATE(789)] = 9601,
  [SMALL_STATE(790)] = 9611,
  [SMALL_STATE(791)] = 9621,
  [SMALL_STATE(792)] = 9631,
  [SMALL_STATE(793)] = 9641,
  [SMALL_STATE(794)] = 9649,
  [SMALL_STATE(795)] = 9655,
  [SMALL_STATE(796)] = 9665,
  [SMALL_STATE(797)] = 9675,
  [SMALL_STATE(798)] = 9685,
  [SMALL_STATE(799)] = 9695,
  [SMALL_STATE(800)] = 9701,
  [SMALL_STATE(801)] = 9707,
  [SMALL_STATE(802)] = 9717,
  [SMALL_STATE(803)] = 9727,
  [SMALL_STATE(804)] = 9737,
  [SMALL_STATE(805)] = 9747,
  [SMALL_STATE(806)] = 9757,
  [SMALL_STATE(807)] = 9767,
  [SMALL_STATE(808)] = 9777,
  [SMALL_STATE(809)] = 9787,
  [SMALL_STATE(810)] = 9797,
  [SMALL_STATE(811)] = 9807,
  [SMALL_STATE(812)] = 9817,
  [SMALL_STATE(813)] = 9827,
  [SMALL_STATE(814)] = 9835,
  [SMALL_STATE(815)] = 9841,
  [SMALL_STATE(816)] = 9851,
  [SMALL_STATE(817)] = 9859,
  [SMALL_STATE(818)] = 9869,
  [SMALL_STATE(819)] = 9879,
  [SMALL_STATE(820)] = 9885,
  [SMALL_STATE(821)] = 9893,
  [SMALL_STATE(822)] = 9899,
  [SMALL_STATE(823)] = 9909,
  [SMALL_STATE(824)] = 9917,
  [SMALL_STATE(825)] = 9927,
  [SMALL_STATE(826)] = 9937,
  [SMALL_STATE(827)] = 9947,
  [SMALL_STATE(828)] = 9957,
  [SMALL_STATE(829)] = 9967,
  [SMALL_STATE(830)] = 9973,
  [SMALL_STATE(831)] = 9983,
  [SMALL_STATE(832)] = 9991,
  [SMALL_STATE(833)] = 9997,
  [SMALL_STATE(834)] = 10007,
  [SMALL_STATE(835)] = 10013,
  [SMALL_STATE(836)] = 10023,
  [SMALL_STATE(837)] = 10033,
  [SMALL_STATE(838)] = 10041,
  [SMALL_STATE(839)] = 10051,
  [SMALL_STATE(840)] = 10061,
  [SMALL_STATE(841)] = 10069,
  [SMALL_STATE(842)] = 10077,
  [SMALL_STATE(843)] = 10082,
  [SMALL_STATE(844)] = 10089,
  [SMALL_STATE(845)] = 10096,
  [SMALL_STATE(846)] = 10103,
  [SMALL_STATE(847)] = 10108,
  [SMALL_STATE(848)] = 10115,
  [SMALL_STATE(849)] = 10122,
  [SMALL_STATE(850)] = 10127,
  [SMALL_STATE(851)] = 10134,
  [SMALL_STATE(852)] = 10141,
  [SMALL_STATE(853)] = 10148,
  [SMALL_STATE(854)] = 10155,
  [SMALL_STATE(855)] = 10160,
  [SMALL_STATE(856)] = 10167,
  [SMALL_STATE(857)] = 10174,
  [SMALL_STATE(858)] = 10181,
  [SMALL_STATE(859)] = 10188,
  [SMALL_STATE(860)] = 10195,
  [SMALL_STATE(861)] = 10202,
  [SMALL_STATE(862)] = 10209,
  [SMALL_STATE(863)] = 10216,
  [SMALL_STATE(864)] = 10221,
  [SMALL_STATE(865)] = 10228,
  [SMALL_STATE(866)] = 10235,
  [SMALL_STATE(867)] = 10240,
  [SMALL_STATE(868)] = 10247,
  [SMALL_STATE(869)] = 10254,
  [SMALL_STATE(870)] = 10259,
  [SMALL_STATE(871)] = 10266,
  [SMALL_STATE(872)] = 10273,
  [SMALL_STATE(873)] = 10278,
  [SMALL_STATE(874)] = 10285,
  [SMALL_STATE(875)] = 10292,
  [SMALL_STATE(876)] = 10299,
  [SMALL_STATE(877)] = 10306,
  [SMALL_STATE(878)] = 10313,
  [SMALL_STATE(879)] = 10318,
  [SMALL_STATE(880)] = 10325,
  [SMALL_STATE(881)] = 10330,
  [SMALL_STATE(882)] = 10337,
  [SMALL_STATE(883)] = 10344,
  [SMALL_STATE(884)] = 10351,
  [SMALL_STATE(885)] = 10358,
  [SMALL_STATE(886)] = 10365,
  [SMALL_STATE(887)] = 10372,
  [SMALL_STATE(888)] = 10379,
  [SMALL_STATE(889)] = 10386,
  [SMALL_STATE(890)] = 10393,
  [SMALL_STATE(891)] = 10400,
  [SMALL_STATE(892)] = 10407,
  [SMALL_STATE(893)] = 10414,
  [SMALL_STATE(894)] = 10419,
  [SMALL_STATE(895)] = 10426,
  [SMALL_STATE(896)] = 10433,
  [SMALL_STATE(897)] = 10438,
  [SMALL_STATE(898)] = 10445,
  [SMALL_STATE(899)] = 10452,
  [SMALL_STATE(900)] = 10459,
  [SMALL_STATE(901)] = 10466,
  [SMALL_STATE(902)] = 10473,
  [SMALL_STATE(903)] = 10480,
  [SMALL_STATE(904)] = 10487,
  [SMALL_STATE(905)] = 10494,
  [SMALL_STATE(906)] = 10501,
  [SMALL_STATE(907)] = 10508,
  [SMALL_STATE(908)] = 10513,
  [SMALL_STATE(909)] = 10520,
  [SMALL_STATE(910)] = 10525,
  [SMALL_STATE(911)] = 10532,
  [SMALL_STATE(912)] = 10537,
  [SMALL_STATE(913)] = 10544,
  [SMALL_STATE(914)] = 10549,
  [SMALL_STATE(915)] = 10556,
  [SMALL_STATE(916)] = 10563,
  [SMALL_STATE(917)] = 10570,
  [SMALL_STATE(918)] = 10577,
  [SMALL_STATE(919)] = 10584,
  [SMALL_STATE(920)] = 10591,
  [SMALL_STATE(921)] = 10596,
  [SMALL_STATE(922)] = 10603,
  [SMALL_STATE(923)] = 10608,
  [SMALL_STATE(924)] = 10615,
  [SMALL_STATE(925)] = 10620,
  [SMALL_STATE(926)] = 10627,
  [SMALL_STATE(927)] = 10634,
  [SMALL_STATE(928)] = 10641,
  [SMALL_STATE(929)] = 10648,
  [SMALL_STATE(930)] = 10655,
  [SMALL_STATE(931)] = 10662,
  [SMALL_STATE(932)] = 10669,
  [SMALL_STATE(933)] = 10676,
  [SMALL_STATE(934)] = 10683,
  [SMALL_STATE(935)] = 10690,
  [SMALL_STATE(936)] = 10697,
  [SMALL_STATE(937)] = 10704,
  [SMALL_STATE(938)] = 10711,
  [SMALL_STATE(939)] = 10716,
  [SMALL_STATE(940)] = 10721,
  [SMALL_STATE(941)] = 10728,
  [SMALL_STATE(942)] = 10735,
  [SMALL_STATE(943)] = 10739,
  [SMALL_STATE(944)] = 10743,
  [SMALL_STATE(945)] = 10747,
  [SMALL_STATE(946)] = 10751,
  [SMALL_STATE(947)] = 10755,
  [SMALL_STATE(948)] = 10759,
  [SMALL_STATE(949)] = 10763,
  [SMALL_STATE(950)] = 10767,
  [SMALL_STATE(951)] = 10771,
  [SMALL_STATE(952)] = 10775,
  [SMALL_STATE(953)] = 10779,
  [SMALL_STATE(954)] = 10783,
  [SMALL_STATE(955)] = 10787,
  [SMALL_STATE(956)] = 10791,
  [SMALL_STATE(957)] = 10795,
  [SMALL_STATE(958)] = 10799,
  [SMALL_STATE(959)] = 10803,
  [SMALL_STATE(960)] = 10807,
  [SMALL_STATE(961)] = 10811,
  [SMALL_STATE(962)] = 10815,
  [SMALL_STATE(963)] = 10819,
  [SMALL_STATE(964)] = 10823,
  [SMALL_STATE(965)] = 10827,
  [SMALL_STATE(966)] = 10831,
  [SMALL_STATE(967)] = 10835,
  [SMALL_STATE(968)] = 10839,
  [SMALL_STATE(969)] = 10843,
  [SMALL_STATE(970)] = 10847,
  [SMALL_STATE(971)] = 10851,
  [SMALL_STATE(972)] = 10855,
  [SMALL_STATE(973)] = 10859,
  [SMALL_STATE(974)] = 10863,
  [SMALL_STATE(975)] = 10867,
  [SMALL_STATE(976)] = 10871,
  [SMALL_STATE(977)] = 10875,
  [SMALL_STATE(978)] = 10879,
  [SMALL_STATE(979)] = 10883,
  [SMALL_STATE(980)] = 10887,
  [SMALL_STATE(981)] = 10891,
  [SMALL_STATE(982)] = 10895,
  [SMALL_STATE(983)] = 10899,
  [SMALL_STATE(984)] = 10903,
  [SMALL_STATE(985)] = 10907,
  [SMALL_STATE(986)] = 10911,
  [SMALL_STATE(987)] = 10915,
  [SMALL_STATE(988)] = 10919,
  [SMALL_STATE(989)] = 10923,
  [SMALL_STATE(990)] = 10927,
  [SMALL_STATE(991)] = 10931,
  [SMALL_STATE(992)] = 10935,
  [SMALL_STATE(993)] = 10939,
  [SMALL_STATE(994)] = 10943,
  [SMALL_STATE(995)] = 10947,
  [SMALL_STATE(996)] = 10951,
  [SMALL_STATE(997)] = 10955,
  [SMALL_STATE(998)] = 10959,
  [SMALL_STATE(999)] = 10963,
  [SMALL_STATE(1000)] = 10967,
  [SMALL_STATE(1001)] = 10971,
  [SMALL_STATE(1002)] = 10975,
  [SMALL_STATE(1003)] = 10979,
  [SMALL_STATE(1004)] = 10983,
  [SMALL_STATE(1005)] = 10987,
  [SMALL_STATE(1006)] = 10991,
  [SMALL_STATE(1007)] = 10995,
  [SMALL_STATE(1008)] = 10999,
  [SMALL_STATE(1009)] = 11003,
  [SMALL_STATE(1010)] = 11007,
  [SMALL_STATE(1011)] = 11011,
  [SMALL_STATE(1012)] = 11015,
  [SMALL_STATE(1013)] = 11019,
  [SMALL_STATE(1014)] = 11023,
  [SMALL_STATE(1015)] = 11027,
  [SMALL_STATE(1016)] = 11031,
  [SMALL_STATE(1017)] = 11035,
  [SMALL_STATE(1018)] = 11039,
  [SMALL_STATE(1019)] = 11043,
  [SMALL_STATE(1020)] = 11047,
  [SMALL_STATE(1021)] = 11051,
  [SMALL_STATE(1022)] = 11055,
  [SMALL_STATE(1023)] = 11059,
  [SMALL_STATE(1024)] = 11063,
  [SMALL_STATE(1025)] = 11067,
  [SMALL_STATE(1026)] = 11071,
  [SMALL_STATE(1027)] = 11075,
  [SMALL_STATE(1028)] = 11079,
  [SMALL_STATE(1029)] = 11083,
  [SMALL_STATE(1030)] = 11087,
  [SMALL_STATE(1031)] = 11091,
  [SMALL_STATE(1032)] = 11095,
  [SMALL_STATE(1033)] = 11099,
  [SMALL_STATE(1034)] = 11103,
  [SMALL_STATE(1035)] = 11107,
  [SMALL_STATE(1036)] = 11111,
  [SMALL_STATE(1037)] = 11115,
  [SMALL_STATE(1038)] = 11119,
  [SMALL_STATE(1039)] = 11123,
  [SMALL_STATE(1040)] = 11127,
  [SMALL_STATE(1041)] = 11131,
  [SMALL_STATE(1042)] = 11135,
  [SMALL_STATE(1043)] = 11139,
  [SMALL_STATE(1044)] = 11143,
  [SMALL_STATE(1045)] = 11147,
  [SMALL_STATE(1046)] = 11151,
  [SMALL_STATE(1047)] = 11155,
  [SMALL_STATE(1048)] = 11159,
  [SMALL_STATE(1049)] = 11163,
  [SMALL_STATE(1050)] = 11167,
  [SMALL_STATE(1051)] = 11171,
  [SMALL_STATE(1052)] = 11175,
  [SMALL_STATE(1053)] = 11179,
  [SMALL_STATE(1054)] = 11183,
  [SMALL_STATE(1055)] = 11187,
  [SMALL_STATE(1056)] = 11191,
  [SMALL_STATE(1057)] = 11195,
  [SMALL_STATE(1058)] = 11199,
  [SMALL_STATE(1059)] = 11203,
  [SMALL_STATE(1060)] = 11207,
  [SMALL_STATE(1061)] = 11211,
  [SMALL_STATE(1062)] = 11215,
  [SMALL_STATE(1063)] = 11219,
  [SMALL_STATE(1064)] = 11223,
  [SMALL_STATE(1065)] = 11227,
  [SMALL_STATE(1066)] = 11231,
  [SMALL_STATE(1067)] = 11235,
  [SMALL_STATE(1068)] = 11239,
  [SMALL_STATE(1069)] = 11243,
  [SMALL_STATE(1070)] = 11247,
  [SMALL_STATE(1071)] = 11251,
  [SMALL_STATE(1072)] = 11255,
  [SMALL_STATE(1073)] = 11259,
  [SMALL_STATE(1074)] = 11263,
  [SMALL_STATE(1075)] = 11267,
  [SMALL_STATE(1076)] = 11271,
  [SMALL_STATE(1077)] = 11275,
  [SMALL_STATE(1078)] = 11279,
  [SMALL_STATE(1079)] = 11283,
  [SMALL_STATE(1080)] = 11287,
  [SMALL_STATE(1081)] = 11291,
  [SMALL_STATE(1082)] = 11295,
  [SMALL_STATE(1083)] = 11299,
  [SMALL_STATE(1084)] = 11303,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(940),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1079),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1080),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1031),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1038),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(817),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1041),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(751),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1043),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(934),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1052),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(912),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1009),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1015),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(985),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1014),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(789),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(58),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(131),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(912),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(873),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1033),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(912),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 1, 0, 71),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_statements, 2, 0, 78),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(71),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(137),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(920),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(105),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(133),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 2, 0, 84), SHIFT_REPEAT(3),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(122),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(133),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(901),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(852),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1078),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(874),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1082),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(923),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 45),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(626),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(863),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 39),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 40),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 38),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 38),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 47),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 48),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 35),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 3, 0, 35),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 49),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 50),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 47),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 37),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 51),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 40),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 52),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 48),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 40),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 54),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 55),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 55),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 40),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 56),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 4, 0, 0),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 62),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 63),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 64),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 66),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 37),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 54),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 68),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 54),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 48),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 40),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 54),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, 0, 43),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 70),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 5, 0, 0),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 70),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 66),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 68),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 54),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 72),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, 0, 73),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 75),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 2, -2, 0),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 6, 0, 75),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 3, 0, 79),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, 0, 80),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 75),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_spawn_operation, 3, -2, 0),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_until_binding, 7, 0, 75),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 82),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 85),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 86),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 4, 0, 87),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 82),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 89),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 90),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 85),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 91),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 92),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 5, 0, 93),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 89),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 94),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 95),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 92),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 6, 0, 96),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_body, 7, 0, 97),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat_statements_repeat1, 1, 0, 71),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1026] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(319),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(992),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 61),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(799),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1055),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [1136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 28),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 45),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 67),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 34),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 35),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_statement, 2, 0, 35),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 36),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 37),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 38),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 60),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 61),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 46),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 59),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 69),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(679),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1042),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(693),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 43),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 74),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 76),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 81),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 88),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(978),
  [1303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 3, 2, 83),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 30),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 47),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_until_clause, 4, 2, 83),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(922),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 33),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(790),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 33),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 42),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 44),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 46),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 77),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(642),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 3, 0, 65),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 48),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(755),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(880),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(999),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1023),
  [1589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 48),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 53),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1022),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 41),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [1665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 57),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(953),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(965),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(975),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(983),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(990),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(996),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(995),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1861] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [1965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(971),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [2005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 58),
  [2009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [2015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
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
    [ts_external_token__agic_raw_text] = true,
  },
  [6] = {
    [ts_external_token_newline] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__collection_binding_start] = true,
    [ts_external_token__spawn_binding_start] = true,
    [ts_external_token__until_binding_start] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [14] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__agic_raw_text] = true,
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
    [ts_external_token__reduce_indent] = true,
  },
  [24] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
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
