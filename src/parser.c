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
#define STATE_COUNT 1332
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 269
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 25
#define FIELD_COUNT 35
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 91

enum ts_symbol_identifiers {
  sym__inline_comment = 1,
  anon_sym_ATparam = 2,
  sym__doc_space = 3,
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
  sym_flow_let_keyword = 52,
  sym_flow_seek_keyword = 53,
  sym_flow_ask_keyword = 54,
  sym_flow_scatter_keyword = 55,
  sym_flow_storm_keyword = 56,
  sym_flow_generate_keyword = 57,
  sym_flow_gather_keyword = 58,
  sym_flow_settle_keyword = 59,
  sym_flow_reduce_keyword = 60,
  sym_flow_map_keyword = 61,
  sym_flow_keep_keyword = 62,
  sym_flow_drop_keyword = 63,
  sym_flow_sort_keyword = 64,
  sym_flow_rank_keyword = 65,
  sym_flow_repeat_keyword = 66,
  sym_flow_until_keyword = 67,
  sym_flow_from_keyword = 68,
  sym_flow_windowing_keyword = 69,
  sym_flow_using_keyword = 70,
  sym_flow_if_keyword = 71,
  sym_flow_by_keyword = 72,
  sym_flow_in_keyword = 73,
  sym_flow_lane_keyword = 74,
  sym_flow_ascending_keyword = 75,
  sym_flow_descending_keyword = 76,
  sym_flow_time_keyword = 77,
  sym_flow_times_keyword = 78,
  sym_flow_par_keyword = 79,
  sym_flow_first_keyword = 80,
  sym_flow_last_keyword = 81,
  sym_flow_top_keyword = 82,
  sym_flow_bottom_keyword = 83,
  sym_flow_think_keyword = 84,
  sym_flow_use_keyword = 85,
  sym_thunk_keyword = 86,
  sym_recall_keyword = 87,
  anon_sym_call = 88,
  anon_sym_do = 89,
  anon_sym_unfold = 90,
  anon_sym_each = 91,
  anon_sym_fold = 92,
  anon_sym_head = 93,
  anon_sym_tail = 94,
  sym_optional_marker = 95,
  sym_arrow = 96,
  sym_colon = 97,
  sym_lparen = 98,
  sym_rparen = 99,
  sym_comma = 100,
  sym_cap_kind = 101,
  sym_pascal_name = 102,
  sym_snake_name = 103,
  sym__snake_kebab_name = 104,
  sym_text_line = 105,
  sym_newline = 106,
  sym_blank_line = 107,
  sym__comment_start = 108,
  sym_plain_comment = 109,
  sym_shebang_comment = 110,
  sym__module_doc_start = 111,
  sym__item_doc_start = 112,
  sym__param_item_doc_start = 113,
  sym__comment_end = 114,
  sym__indent = 115,
  sym__dedent = 116,
  sym__line_start = 117,
  sym__directive_start = 118,
  sym__until_start = 119,
  sym__from_start = 120,
  sym__reduce_indent = 121,
  sym__reduce_text_start = 122,
  sym__text_indent = 123,
  sym__cap_text_start = 124,
  sym_indented_raw_text = 125,
  sym__flow_raw_text = 126,
  sym__agic_raw_text = 127,
  sym__error_line = 128,
  sym__exec_binding_start = 129,
  sym__collection_binding_start = 130,
  sym_source_file = 131,
  sym_item = 132,
  sym_line_end = 133,
  sym_module_doc_comment = 134,
  sym_item_doc_comment = 135,
  sym_param_doc_tag = 136,
  sym__trivia = 137,
  sym_with = 138,
  sym_type = 139,
  sym_base_type = 140,
  sym_builtin_type = 141,
  sym_user_type = 142,
  sym_type_suffix = 143,
  sym_struct = 144,
  sym_struct_name = 145,
  sym_struct_body = 146,
  sym_field = 147,
  sym_field_name = 148,
  sym_psyche = 149,
  sym_skill = 150,
  sym_service = 151,
  sym_prompt = 152,
  sym__cap_definition = 153,
  sym_cap_body = 154,
  sym__cap_text_body = 155,
  sym_task = 156,
  sym_chore = 157,
  sym_cap_name = 158,
  sym_cap_ref = 159,
  sym_job_name = 160,
  sym_job_body = 161,
  sym_property = 162,
  sym_property_key = 163,
  sym_property_value = 164,
  sym_instruct = 165,
  sym_instruct_name = 166,
  sym_instruct_body = 167,
  sym_context = 168,
  sym_context_name = 169,
  sym_context_body = 170,
  sym_text_inline = 171,
  sym_text_block = 172,
  sym_text_body = 173,
  sym_text_body_line = 174,
  sym_agic = 175,
  sym_agic_name = 176,
  sym_agic_body = 177,
  sym_params = 178,
  sym_param = 179,
  sym_param_name = 180,
  sym_flow = 181,
  sym_flow_name = 182,
  sym_flow_body = 183,
  sym_statements = 184,
  sym__flow_statement = 185,
  sym__flow_operation = 186,
  sym__collection_operation = 187,
  sym__bound_operation = 188,
  sym__invalid_collection_operation = 189,
  sym_let_statement = 190,
  sym_exec_statement = 191,
  sym__invalid_exec_binding = 192,
  sym_run_statement = 193,
  sym_implicit_run_statement = 194,
  sym__implicit_run_line = 195,
  sym_seek_statement = 196,
  sym_ask_statement = 197,
  sym_generate_statement = 198,
  sym_reduce_statement = 199,
  sym__reduce_inline_line = 200,
  sym__reduce_line = 201,
  sym__reduce_inline_block = 202,
  sym__reduce_text_body = 203,
  sym__from_complement = 204,
  sym_map_statement = 205,
  sym_keep_statement = 206,
  sym_drop_statement = 207,
  sym_sort_statement = 208,
  sym__named_using_complement = 209,
  sym__named_if_complement = 210,
  sym__inline_if_complement = 211,
  sym__named_by_complement = 212,
  sym__inline_by_complement = 213,
  sym__runnable_complements = 214,
  sym__if_complements = 215,
  sym__by_complements = 216,
  sym__lanes_complement = 217,
  sym__order_complement = 218,
  sym_repeat_statement = 219,
  sym__window_complement = 220,
  sym__repeat_count_complement = 221,
  sym__until_complement = 222,
  sym_invalid_flow_reserved_statement = 223,
  sym_inline_agic = 224,
  sym_inline_agic_body = 225,
  sym_position = 226,
  sym_runnable = 227,
  sym_agent = 228,
  sym_local_name = 229,
  sym_directive = 230,
  sym__query_directive_key = 231,
  sym__route_directive_key = 232,
  sym_directive_key = 233,
  sym_directive_op = 234,
  sym_route_value = 235,
  sym_recall_value = 236,
  sym_recall_source = 237,
  sym__directives = 238,
  sym_text_ref = 239,
  sym_messages = 240,
  sym_message = 241,
  sym_unroled_message = 242,
  sym__unroled_message_line = 243,
  sym_invalid_agic_reserved_message = 244,
  sym_role = 245,
  sym__pass_statement = 246,
  sym_flow_lanes_keyword = 247,
  sym__flow_reserved_word = 248,
  sym__collection_binding_word = 249,
  sym__agic_reserved_word = 250,
  sym_assign_operator = 251,
  sym_type_name = 252,
  aux_sym_source_file_repeat1 = 253,
  aux_sym_type_repeat1 = 254,
  aux_sym_struct_body_repeat1 = 255,
  aux_sym_struct_body_repeat2 = 256,
  aux_sym__cap_definition_repeat1 = 257,
  aux_sym__cap_text_body_repeat1 = 258,
  aux_sym_job_body_repeat1 = 259,
  aux_sym_text_body_repeat1 = 260,
  aux_sym_params_repeat1 = 261,
  aux_sym_statements_repeat1 = 262,
  aux_sym_implicit_run_statement_repeat1 = 263,
  aux_sym_route_value_repeat1 = 264,
  aux_sym_recall_value_repeat1 = 265,
  aux_sym__directives_repeat1 = 266,
  aux_sym_messages_repeat1 = 267,
  aux_sym_unroled_message_repeat1 = 268,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__inline_comment] = "plain_comment",
  [anon_sym_ATparam] = "@param",
  [sym__doc_space] = "_doc_space",
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
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_line_end] = "line_end",
  [sym_module_doc_comment] = "module_doc_comment",
  [sym_item_doc_comment] = "item_doc_comment",
  [sym_param_doc_tag] = "param_doc_tag",
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
  [sym_let_statement] = "let_statement",
  [sym_exec_statement] = "exec_statement",
  [sym__invalid_exec_binding] = "invalid_flow_reserved_statement",
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
  [sym__window_complement] = "_window_complement",
  [sym__repeat_count_complement] = "_repeat_count_complement",
  [sym__until_complement] = "_until_complement",
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
  [sym__doc_space] = sym__doc_space,
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
  [sym_source_file] = sym_source_file,
  [sym_item] = sym_item,
  [sym_line_end] = sym_line_end,
  [sym_module_doc_comment] = sym_module_doc_comment,
  [sym_item_doc_comment] = sym_item_doc_comment,
  [sym_param_doc_tag] = sym_param_doc_tag,
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
  [sym_let_statement] = sym_let_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym__invalid_exec_binding] = sym_invalid_flow_reserved_statement,
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
  [sym__window_complement] = sym__window_complement,
  [sym__repeat_count_complement] = sym__repeat_count_complement,
  [sym__until_complement] = sym__until_complement,
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
  [sym__doc_space] = {
    .visible = false,
    .named = true,
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
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_exec_binding] = {
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
  [sym__window_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__repeat_count_complement] = {
    .visible = false,
    .named = true,
  },
  [sym__until_complement] = {
    .visible = false,
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
  [65] = {.index = 140, .length = 5},
  [66] = {.index = 145, .length = 1},
  [67] = {.index = 146, .length = 2},
  [68] = {.index = 148, .length = 3},
  [69] = {.index = 151, .length = 3},
  [70] = {.index = 154, .length = 4},
  [71] = {.index = 158, .length = 1},
  [72] = {.index = 159, .length = 1},
  [73] = {.index = 160, .length = 1},
  [74] = {.index = 161, .length = 3},
  [75] = {.index = 164, .length = 2},
  [76] = {.index = 166, .length = 2},
  [77] = {.index = 168, .length = 2},
  [78] = {.index = 170, .length = 3},
  [79] = {.index = 173, .length = 2},
  [80] = {.index = 175, .length = 1},
  [81] = {.index = 176, .length = 2},
  [82] = {.index = 178, .length = 3},
  [83] = {.index = 181, .length = 3},
  [84] = {.index = 184, .length = 2},
  [85] = {.index = 186, .length = 3},
  [86] = {.index = 189, .length = 3},
  [87] = {.index = 192, .length = 3},
  [88] = {.index = 195, .length = 4},
  [89] = {.index = 199, .length = 3},
  [90] = {.index = 202, .length = 4},
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
    {field_arrow, 1, .inherited = true},
    {field_body, 1, .inherited = true},
    {field_from, 2, .inherited = true},
    {field_return, 1, .inherited = true},
    {field_runnable, 1},
  [145] =
    {field_lanes, 1},
  [146] =
    {field_lanes, 1, .inherited = true},
    {field_runnable, 0, .inherited = true},
  [148] =
    {field_colon, 2},
    {field_name, 1},
    {field_type, 3},
  [151] =
    {field_arrow, 0},
    {field_body, 3},
    {field_return, 1},
  [154] =
    {field_colon, 3},
    {field_name, 1},
    {field_optional, 2},
    {field_type, 4},
  [158] =
    {field_name, 1},
  [159] =
    {field_body, 4},
  [160] =
    {field_from, 3},
  [161] =
    {field_arrow, 0},
    {field_body, 5},
    {field_return, 1},
  [164] =
    {field_from, 5, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [166] =
    {field_body, 4},
    {field_until, 5, .inherited = true},
  [168] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
  [170] =
    {field_arrow, 0},
    {field_body, 6},
    {field_return, 1},
  [173] =
    {field_from, 6, .inherited = true},
    {field_runnable, 1, .inherited = true},
  [175] =
    {field_until, 2},
  [176] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
  [178] =
    {field_body, 5},
    {field_until, 6, .inherited = true},
    {field_window, 1, .inherited = true},
  [181] =
    {field_body, 5},
    {field_count, 1, .inherited = true},
    {field_until, 6, .inherited = true},
  [184] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
  [186] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [189] =
    {field_body, 6},
    {field_until, 7, .inherited = true},
    {field_window, 1, .inherited = true},
  [192] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
  [195] =
    {field_body, 6},
    {field_count, 1, .inherited = true},
    {field_until, 7, .inherited = true},
    {field_window, 2, .inherited = true},
  [199] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_window, 2, .inherited = true},
  [202] =
    {field_body, 7},
    {field_count, 1, .inherited = true},
    {field_until, 8, .inherited = true},
    {field_window, 2, .inherited = true},
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
  [5] = 3,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 17,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 21,
  [24] = 20,
  [25] = 21,
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 29,
  [43] = 30,
  [44] = 29,
  [45] = 30,
  [46] = 36,
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
  [59] = 53,
  [60] = 56,
  [61] = 61,
  [62] = 55,
  [63] = 63,
  [64] = 55,
  [65] = 53,
  [66] = 52,
  [67] = 52,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 69,
  [75] = 69,
  [76] = 70,
  [77] = 70,
  [78] = 68,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 68,
  [86] = 86,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 71,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 72,
  [100] = 100,
  [101] = 84,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 83,
  [107] = 107,
  [108] = 84,
  [109] = 89,
  [110] = 86,
  [111] = 87,
  [112] = 73,
  [113] = 90,
  [114] = 71,
  [115] = 72,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 105,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 92,
  [131] = 131,
  [132] = 102,
  [133] = 103,
  [134] = 104,
  [135] = 91,
  [136] = 105,
  [137] = 86,
  [138] = 138,
  [139] = 87,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 92,
  [145] = 145,
  [146] = 102,
  [147] = 103,
  [148] = 104,
  [149] = 91,
  [150] = 105,
  [151] = 105,
  [152] = 105,
  [153] = 105,
  [154] = 105,
  [155] = 105,
  [156] = 105,
  [157] = 105,
  [158] = 145,
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
  [170] = 119,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 121,
  [178] = 178,
  [179] = 179,
  [180] = 162,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 178,
  [185] = 185,
  [186] = 165,
  [187] = 165,
  [188] = 164,
  [189] = 164,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 119,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 179,
  [199] = 199,
  [200] = 200,
  [201] = 121,
  [202] = 202,
  [203] = 163,
  [204] = 178,
  [205] = 163,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 179,
  [212] = 162,
  [213] = 213,
  [214] = 213,
  [215] = 213,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 107,
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
  [238] = 217,
  [239] = 176,
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
  [319] = 218,
  [320] = 219,
  [321] = 220,
  [322] = 322,
  [323] = 323,
  [324] = 107,
  [325] = 325,
  [326] = 316,
  [327] = 317,
  [328] = 318,
  [329] = 218,
  [330] = 219,
  [331] = 220,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 26,
  [338] = 322,
  [339] = 323,
  [340] = 322,
  [341] = 323,
  [342] = 316,
  [343] = 317,
  [344] = 318,
  [345] = 218,
  [346] = 219,
  [347] = 220,
  [348] = 322,
  [349] = 323,
  [350] = 350,
  [351] = 351,
  [352] = 241,
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
  [367] = 260,
  [368] = 368,
  [369] = 369,
  [370] = 366,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 225,
  [378] = 226,
  [379] = 227,
  [380] = 237,
  [381] = 381,
  [382] = 382,
  [383] = 354,
  [384] = 356,
  [385] = 318,
  [386] = 386,
  [387] = 386,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 351,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 388,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 389,
  [414] = 351,
  [415] = 241,
  [416] = 390,
  [417] = 391,
  [418] = 392,
  [419] = 393,
  [420] = 394,
  [421] = 372,
  [422] = 373,
  [423] = 397,
  [424] = 374,
  [425] = 362,
  [426] = 398,
  [427] = 399,
  [428] = 400,
  [429] = 401,
  [430] = 260,
  [431] = 402,
  [432] = 403,
  [433] = 366,
  [434] = 404,
  [435] = 372,
  [436] = 373,
  [437] = 374,
  [438] = 405,
  [439] = 439,
  [440] = 225,
  [441] = 226,
  [442] = 227,
  [443] = 237,
  [444] = 407,
  [445] = 408,
  [446] = 354,
  [447] = 356,
  [448] = 382,
  [449] = 386,
  [450] = 409,
  [451] = 388,
  [452] = 389,
  [453] = 390,
  [454] = 391,
  [455] = 392,
  [456] = 393,
  [457] = 394,
  [458] = 410,
  [459] = 411,
  [460] = 397,
  [461] = 398,
  [462] = 399,
  [463] = 400,
  [464] = 401,
  [465] = 402,
  [466] = 403,
  [467] = 404,
  [468] = 405,
  [469] = 412,
  [470] = 407,
  [471] = 408,
  [472] = 409,
  [473] = 410,
  [474] = 411,
  [475] = 412,
  [476] = 208,
  [477] = 351,
  [478] = 241,
  [479] = 183,
  [480] = 351,
  [481] = 241,
  [482] = 190,
  [483] = 483,
  [484] = 171,
  [485] = 485,
  [486] = 169,
  [487] = 487,
  [488] = 353,
  [489] = 107,
  [490] = 362,
  [491] = 353,
  [492] = 169,
  [493] = 493,
  [494] = 171,
  [495] = 357,
  [496] = 363,
  [497] = 368,
  [498] = 371,
  [499] = 375,
  [500] = 396,
  [501] = 501,
  [502] = 502,
  [503] = 357,
  [504] = 363,
  [505] = 368,
  [506] = 371,
  [507] = 375,
  [508] = 396,
  [509] = 176,
  [510] = 217,
  [511] = 360,
  [512] = 361,
  [513] = 369,
  [514] = 514,
  [515] = 360,
  [516] = 361,
  [517] = 369,
  [518] = 518,
  [519] = 519,
  [520] = 316,
  [521] = 317,
  [522] = 382,
  [523] = 309,
  [524] = 282,
  [525] = 283,
  [526] = 526,
  [527] = 284,
  [528] = 285,
  [529] = 529,
  [530] = 530,
  [531] = 286,
  [532] = 287,
  [533] = 533,
  [534] = 534,
  [535] = 288,
  [536] = 289,
  [537] = 537,
  [538] = 290,
  [539] = 539,
  [540] = 540,
  [541] = 291,
  [542] = 292,
  [543] = 543,
  [544] = 293,
  [545] = 294,
  [546] = 295,
  [547] = 296,
  [548] = 297,
  [549] = 298,
  [550] = 299,
  [551] = 551,
  [552] = 300,
  [553] = 301,
  [554] = 302,
  [555] = 303,
  [556] = 304,
  [557] = 305,
  [558] = 558,
  [559] = 306,
  [560] = 307,
  [561] = 308,
  [562] = 309,
  [563] = 310,
  [564] = 311,
  [565] = 312,
  [566] = 313,
  [567] = 314,
  [568] = 315,
  [569] = 332,
  [570] = 570,
  [571] = 333,
  [572] = 334,
  [573] = 573,
  [574] = 574,
  [575] = 335,
  [576] = 223,
  [577] = 224,
  [578] = 218,
  [579] = 219,
  [580] = 336,
  [581] = 228,
  [582] = 229,
  [583] = 230,
  [584] = 231,
  [585] = 232,
  [586] = 233,
  [587] = 234,
  [588] = 235,
  [589] = 236,
  [590] = 335,
  [591] = 220,
  [592] = 240,
  [593] = 593,
  [594] = 242,
  [595] = 243,
  [596] = 244,
  [597] = 245,
  [598] = 246,
  [599] = 247,
  [600] = 248,
  [601] = 249,
  [602] = 250,
  [603] = 251,
  [604] = 252,
  [605] = 253,
  [606] = 254,
  [607] = 255,
  [608] = 256,
  [609] = 257,
  [610] = 258,
  [611] = 259,
  [612] = 263,
  [613] = 262,
  [614] = 325,
  [615] = 264,
  [616] = 265,
  [617] = 266,
  [618] = 267,
  [619] = 268,
  [620] = 269,
  [621] = 270,
  [622] = 271,
  [623] = 272,
  [624] = 273,
  [625] = 274,
  [626] = 275,
  [627] = 276,
  [628] = 277,
  [629] = 278,
  [630] = 279,
  [631] = 280,
  [632] = 281,
  [633] = 282,
  [634] = 283,
  [635] = 284,
  [636] = 285,
  [637] = 286,
  [638] = 287,
  [639] = 288,
  [640] = 289,
  [641] = 290,
  [642] = 291,
  [643] = 292,
  [644] = 293,
  [645] = 294,
  [646] = 295,
  [647] = 296,
  [648] = 297,
  [649] = 298,
  [650] = 299,
  [651] = 300,
  [652] = 301,
  [653] = 302,
  [654] = 303,
  [655] = 304,
  [656] = 305,
  [657] = 306,
  [658] = 307,
  [659] = 308,
  [660] = 310,
  [661] = 311,
  [662] = 312,
  [663] = 313,
  [664] = 314,
  [665] = 315,
  [666] = 666,
  [667] = 667,
  [668] = 668,
  [669] = 669,
  [670] = 670,
  [671] = 322,
  [672] = 323,
  [673] = 673,
  [674] = 674,
  [675] = 675,
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
  [688] = 332,
  [689] = 689,
  [690] = 690,
  [691] = 691,
  [692] = 223,
  [693] = 224,
  [694] = 694,
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
  [705] = 336,
  [706] = 706,
  [707] = 707,
  [708] = 708,
  [709] = 26,
  [710] = 710,
  [711] = 711,
  [712] = 712,
  [713] = 713,
  [714] = 714,
  [715] = 715,
  [716] = 316,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 229,
  [721] = 721,
  [722] = 332,
  [723] = 333,
  [724] = 334,
  [725] = 725,
  [726] = 335,
  [727] = 336,
  [728] = 728,
  [729] = 729,
  [730] = 730,
  [731] = 230,
  [732] = 333,
  [733] = 733,
  [734] = 334,
  [735] = 316,
  [736] = 317,
  [737] = 318,
  [738] = 218,
  [739] = 219,
  [740] = 220,
  [741] = 322,
  [742] = 323,
  [743] = 316,
  [744] = 317,
  [745] = 318,
  [746] = 218,
  [747] = 219,
  [748] = 220,
  [749] = 231,
  [750] = 322,
  [751] = 323,
  [752] = 316,
  [753] = 317,
  [754] = 318,
  [755] = 218,
  [756] = 219,
  [757] = 220,
  [758] = 758,
  [759] = 759,
  [760] = 232,
  [761] = 761,
  [762] = 233,
  [763] = 322,
  [764] = 323,
  [765] = 765,
  [766] = 234,
  [767] = 683,
  [768] = 235,
  [769] = 236,
  [770] = 770,
  [771] = 694,
  [772] = 317,
  [773] = 773,
  [774] = 240,
  [775] = 318,
  [776] = 776,
  [777] = 759,
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
  [795] = 242,
  [796] = 243,
  [797] = 244,
  [798] = 780,
  [799] = 245,
  [800] = 246,
  [801] = 247,
  [802] = 683,
  [803] = 248,
  [804] = 249,
  [805] = 805,
  [806] = 694,
  [807] = 250,
  [808] = 251,
  [809] = 252,
  [810] = 253,
  [811] = 254,
  [812] = 759,
  [813] = 255,
  [814] = 256,
  [815] = 257,
  [816] = 780,
  [817] = 817,
  [818] = 818,
  [819] = 258,
  [820] = 259,
  [821] = 786,
  [822] = 787,
  [823] = 823,
  [824] = 263,
  [825] = 825,
  [826] = 826,
  [827] = 827,
  [828] = 828,
  [829] = 829,
  [830] = 830,
  [831] = 831,
  [832] = 264,
  [833] = 265,
  [834] = 266,
  [835] = 683,
  [836] = 267,
  [837] = 268,
  [838] = 683,
  [839] = 269,
  [840] = 270,
  [841] = 841,
  [842] = 733,
  [843] = 843,
  [844] = 686,
  [845] = 687,
  [846] = 271,
  [847] = 710,
  [848] = 272,
  [849] = 711,
  [850] = 733,
  [851] = 843,
  [852] = 273,
  [853] = 686,
  [854] = 687,
  [855] = 274,
  [856] = 733,
  [857] = 843,
  [858] = 733,
  [859] = 843,
  [860] = 673,
  [861] = 275,
  [862] = 276,
  [863] = 863,
  [864] = 843,
  [865] = 865,
  [866] = 866,
  [867] = 277,
  [868] = 278,
  [869] = 786,
  [870] = 279,
  [871] = 787,
  [872] = 280,
  [873] = 281,
  [874] = 874,
  [875] = 228,
  [876] = 876,
  [877] = 322,
  [878] = 878,
  [879] = 323,
  [880] = 880,
  [881] = 881,
  [882] = 26,
  [883] = 883,
  [884] = 884,
  [885] = 885,
  [886] = 886,
  [887] = 887,
  [888] = 322,
  [889] = 323,
  [890] = 316,
  [891] = 317,
  [892] = 318,
  [893] = 218,
  [894] = 219,
  [895] = 220,
  [896] = 896,
  [897] = 316,
  [898] = 317,
  [899] = 318,
  [900] = 218,
  [901] = 219,
  [902] = 220,
  [903] = 903,
  [904] = 904,
  [905] = 905,
  [906] = 906,
  [907] = 907,
  [908] = 332,
  [909] = 909,
  [910] = 333,
  [911] = 334,
  [912] = 912,
  [913] = 335,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 336,
  [919] = 919,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 876,
  [928] = 928,
  [929] = 929,
  [930] = 930,
  [931] = 931,
  [932] = 932,
  [933] = 912,
  [934] = 919,
  [935] = 920,
  [936] = 922,
  [937] = 929,
  [938] = 938,
  [939] = 939,
  [940] = 940,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 945,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 917,
  [950] = 950,
  [951] = 951,
  [952] = 952,
  [953] = 952,
  [954] = 954,
  [955] = 938,
  [956] = 939,
  [957] = 957,
  [958] = 958,
  [959] = 959,
  [960] = 960,
  [961] = 961,
  [962] = 940,
  [963] = 954,
  [964] = 917,
  [965] = 965,
  [966] = 941,
  [967] = 967,
  [968] = 968,
  [969] = 969,
  [970] = 925,
  [971] = 926,
  [972] = 972,
  [973] = 943,
  [974] = 974,
  [975] = 975,
  [976] = 944,
  [977] = 912,
  [978] = 945,
  [979] = 316,
  [980] = 919,
  [981] = 920,
  [982] = 922,
  [983] = 929,
  [984] = 984,
  [985] = 940,
  [986] = 941,
  [987] = 317,
  [988] = 988,
  [989] = 944,
  [990] = 945,
  [991] = 947,
  [992] = 947,
  [993] = 948,
  [994] = 994,
  [995] = 995,
  [996] = 950,
  [997] = 951,
  [998] = 318,
  [999] = 952,
  [1000] = 954,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 805,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 1007,
  [1008] = 1008,
  [1009] = 218,
  [1010] = 219,
  [1011] = 948,
  [1012] = 1012,
  [1013] = 220,
  [1014] = 322,
  [1015] = 917,
  [1016] = 1016,
  [1017] = 1017,
  [1018] = 917,
  [1019] = 691,
  [1020] = 696,
  [1021] = 1021,
  [1022] = 697,
  [1023] = 988,
  [1024] = 930,
  [1025] = 921,
  [1026] = 928,
  [1027] = 1027,
  [1028] = 323,
  [1029] = 1029,
  [1030] = 988,
  [1031] = 930,
  [1032] = 921,
  [1033] = 928,
  [1034] = 1027,
  [1035] = 765,
  [1036] = 925,
  [1037] = 770,
  [1038] = 926,
  [1039] = 896,
  [1040] = 1040,
  [1041] = 950,
  [1042] = 1042,
  [1043] = 951,
  [1044] = 1016,
  [1045] = 1045,
  [1046] = 1042,
  [1047] = 906,
  [1048] = 896,
  [1049] = 1049,
  [1050] = 1042,
  [1051] = 1051,
  [1052] = 1016,
  [1053] = 1045,
  [1054] = 1054,
  [1055] = 906,
  [1056] = 1056,
  [1057] = 896,
  [1058] = 896,
  [1059] = 1059,
  [1060] = 968,
  [1061] = 1001,
  [1062] = 1027,
  [1063] = 1049,
  [1064] = 968,
  [1065] = 1045,
  [1066] = 1001,
  [1067] = 960,
  [1068] = 1068,
  [1069] = 1049,
  [1070] = 924,
  [1071] = 666,
  [1072] = 995,
  [1073] = 924,
  [1074] = 876,
  [1075] = 995,
  [1076] = 943,
  [1077] = 1077,
  [1078] = 1078,
  [1079] = 1079,
  [1080] = 1080,
  [1081] = 322,
  [1082] = 358,
  [1083] = 1083,
  [1084] = 1084,
  [1085] = 1085,
  [1086] = 1086,
  [1087] = 1087,
  [1088] = 1088,
  [1089] = 1089,
  [1090] = 359,
  [1091] = 1091,
  [1092] = 1092,
  [1093] = 1089,
  [1094] = 1077,
  [1095] = 1095,
  [1096] = 1096,
  [1097] = 1097,
  [1098] = 1098,
  [1099] = 1078,
  [1100] = 1079,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 1078,
  [1105] = 1079,
  [1106] = 1106,
  [1107] = 1078,
  [1108] = 1079,
  [1109] = 1078,
  [1110] = 1079,
  [1111] = 1111,
  [1112] = 1078,
  [1113] = 1079,
  [1114] = 1078,
  [1115] = 1079,
  [1116] = 1116,
  [1117] = 1078,
  [1118] = 1079,
  [1119] = 1078,
  [1120] = 1079,
  [1121] = 1077,
  [1122] = 1122,
  [1123] = 1123,
  [1124] = 1102,
  [1125] = 1125,
  [1126] = 1126,
  [1127] = 1127,
  [1128] = 1084,
  [1129] = 1129,
  [1130] = 1130,
  [1131] = 1131,
  [1132] = 1132,
  [1133] = 1092,
  [1134] = 1134,
  [1135] = 1135,
  [1136] = 1135,
  [1137] = 1137,
  [1138] = 1077,
  [1139] = 1139,
  [1140] = 1140,
  [1141] = 1141,
  [1142] = 1126,
  [1143] = 1143,
  [1144] = 1084,
  [1145] = 1130,
  [1146] = 1131,
  [1147] = 1092,
  [1148] = 1134,
  [1149] = 1135,
  [1150] = 1150,
  [1151] = 1137,
  [1152] = 1077,
  [1153] = 1129,
  [1154] = 1131,
  [1155] = 1077,
  [1156] = 1078,
  [1157] = 1077,
  [1158] = 1077,
  [1159] = 1077,
  [1160] = 1077,
  [1161] = 1077,
  [1162] = 1130,
  [1163] = 1079,
  [1164] = 1164,
  [1165] = 1165,
  [1166] = 1166,
  [1167] = 1167,
  [1168] = 1168,
  [1169] = 1126,
  [1170] = 1170,
  [1171] = 1171,
  [1172] = 1079,
  [1173] = 1164,
  [1174] = 1089,
  [1175] = 1175,
  [1176] = 1176,
  [1177] = 1177,
  [1178] = 1178,
  [1179] = 1165,
  [1180] = 1134,
  [1181] = 1078,
  [1182] = 1182,
  [1183] = 1083,
  [1184] = 1166,
  [1185] = 1185,
  [1186] = 1186,
  [1187] = 1187,
  [1188] = 1188,
  [1189] = 323,
  [1190] = 1137,
  [1191] = 1167,
  [1192] = 1192,
  [1193] = 1193,
  [1194] = 1194,
  [1195] = 1195,
  [1196] = 1196,
  [1197] = 1197,
  [1198] = 1197,
  [1199] = 1199,
  [1200] = 1200,
  [1201] = 1201,
  [1202] = 1202,
  [1203] = 1203,
  [1204] = 1204,
  [1205] = 1205,
  [1206] = 1206,
  [1207] = 1207,
  [1208] = 700,
  [1209] = 1209,
  [1210] = 1210,
  [1211] = 1211,
  [1212] = 1212,
  [1213] = 1213,
  [1214] = 1214,
  [1215] = 1215,
  [1216] = 1216,
  [1217] = 1217,
  [1218] = 1218,
  [1219] = 1219,
  [1220] = 1220,
  [1221] = 1221,
  [1222] = 1220,
  [1223] = 1223,
  [1224] = 1196,
  [1225] = 1225,
  [1226] = 1196,
  [1227] = 1227,
  [1228] = 1228,
  [1229] = 1229,
  [1230] = 1230,
  [1231] = 1215,
  [1232] = 1218,
  [1233] = 1196,
  [1234] = 1197,
  [1235] = 1235,
  [1236] = 1236,
  [1237] = 1237,
  [1238] = 1211,
  [1239] = 1239,
  [1240] = 1213,
  [1241] = 1214,
  [1242] = 1242,
  [1243] = 1243,
  [1244] = 1218,
  [1245] = 1219,
  [1246] = 1220,
  [1247] = 1247,
  [1248] = 1248,
  [1249] = 1249,
  [1250] = 1243,
  [1251] = 1229,
  [1252] = 1215,
  [1253] = 1196,
  [1254] = 1254,
  [1255] = 1197,
  [1256] = 1256,
  [1257] = 1257,
  [1258] = 1258,
  [1259] = 1197,
  [1260] = 1260,
  [1261] = 1261,
  [1262] = 1262,
  [1263] = 1263,
  [1264] = 1264,
  [1265] = 1229,
  [1266] = 1215,
  [1267] = 1196,
  [1268] = 1197,
  [1269] = 1209,
  [1270] = 1229,
  [1271] = 1215,
  [1272] = 1229,
  [1273] = 1211,
  [1274] = 1215,
  [1275] = 1229,
  [1276] = 1196,
  [1277] = 1215,
  [1278] = 1196,
  [1279] = 1197,
  [1280] = 1197,
  [1281] = 1229,
  [1282] = 1282,
  [1283] = 1283,
  [1284] = 1229,
  [1285] = 1219,
  [1286] = 1286,
  [1287] = 1243,
  [1288] = 1288,
  [1289] = 1229,
  [1290] = 1215,
  [1291] = 1291,
  [1292] = 1196,
  [1293] = 1213,
  [1294] = 1294,
  [1295] = 1295,
  [1296] = 1214,
  [1297] = 1197,
  [1298] = 1298,
  [1299] = 1299,
  [1300] = 1215,
  [1301] = 1301,
  [1302] = 1302,
  [1303] = 1229,
  [1304] = 1215,
  [1305] = 1237,
  [1306] = 1196,
  [1307] = 1197,
  [1308] = 1197,
  [1309] = 1309,
  [1310] = 1310,
  [1311] = 1311,
  [1312] = 1312,
  [1313] = 26,
  [1314] = 1229,
  [1315] = 1215,
  [1316] = 886,
  [1317] = 1196,
  [1318] = 1197,
  [1319] = 1319,
  [1320] = 1263,
  [1321] = 1321,
  [1322] = 1322,
  [1323] = 1323,
  [1324] = 1263,
  [1325] = 1325,
  [1326] = 1326,
  [1327] = 1254,
  [1328] = 1328,
  [1329] = 1329,
  [1330] = 1254,
  [1331] = 1331,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(287);
      ADVANCE_MAP(
        '#', 288,
        '(', 618,
        ')', 619,
        '*', 535,
        '+', 316,
        ',', 620,
        '-', 317,
        '0', 299,
        '1', 300,
        ':', 617,
        '=', 313,
        '?', 615,
        '@', 463,
        'B', 634,
        'J', 637,
        'N', 640,
        'P', 622,
        'T', 625,
        '[', 318,
        '_', 298,
        'a', 392,
        'b', 451,
        'c', 319,
        'd', 359,
        'e', 320,
        'f', 321,
        'g', 326,
        'h', 328,
        'i', 383,
        'k', 372,
        'l', 325,
        'm', 324,
        'n', 379,
        'p', 322,
        'r', 329,
        's', 342,
        't', 323,
        'u', 433,
        'w', 397,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(515);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 288,
        '(', 618,
        ')', 619,
        '*', 535,
        '+', 19,
        ',', 620,
        '-', 20,
        '0', 302,
        '1', 301,
        ':', 617,
        '=', 313,
        '?', 615,
        '@', 214,
        'B', 634,
        'J', 637,
        'N', 640,
        'P', 622,
        'T', 625,
        '[', 22,
        'a', 118,
        'b', 197,
        'c', 23,
        'd', 84,
        'e', 24,
        'f', 25,
        'g', 32,
        'h', 34,
        'i', 107,
        'k', 92,
        'l', 31,
        'm', 30,
        'n', 101,
        'p', 26,
        'r', 35,
        's', 52,
        't', 27,
        'u', 178,
        'w', 126,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(642);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 288,
        '-', 21,
        ':', 617,
        'b', 278,
        'f', 128,
        'i', 106,
        'l', 48,
        'p', 232,
        's', 105,
        'u', 243,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 288,
        'a', 676,
        'd', 673,
        'g', 649,
        'k', 658,
        'm', 643,
        'r', 650,
        's', 660,
        '\t', 690,
        ' ', 690,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 288,
        'a', 744,
        'd', 741,
        'k', 707,
        'r', 705,
        's', 709,
        '\t', 691,
        ' ', 691,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(695);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(618);
      if (lookahead == ')') ADVANCE(619);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '_') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(522);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(527);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '>') ADVANCE(616);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(616);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(297);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'f') ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        'a', 117,
        'c', 121,
        'd', 93,
        'f', 159,
        'i', 196,
        'l', 46,
        'p', 231,
        's', 100,
        't', 39,
        'w', 138,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(642);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(558);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'k') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'k') ADVANCE(562);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(250);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(610);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'n') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(237);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(586);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(595);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(611);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(539);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 144:
      if (lookahead == 'k') ADVANCE(580);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(560);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(552);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(604);
      END_STATE();
    case 148:
      if (lookahead == 'k') ADVANCE(606);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(614);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(538);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(607);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(621);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(603);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 176:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(602);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(574);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(555);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(559);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(547);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(540);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(530);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 268:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 269:
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 270:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 272:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 273:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 274:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 275:
      if (lookahead == 'w') ADVANCE(554);
      END_STATE();
    case 276:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 277:
      if (lookahead == 'x') ADVANCE(251);
      END_STATE();
    case 278:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 279:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 280:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 281:
      if (lookahead == 'y') ADVANCE(63);
      END_STATE();
    case 282:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(291);
      END_STATE();
    case 283:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 284:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(284);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 285:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 286:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__doc_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Json);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Part);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_array_suffix);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(300);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__one_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(301);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__other_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_lanes);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_models);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_tools);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_skills);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_services);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_psyches);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_prompts);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_hands);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_handoffs);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '>') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == ']') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead == 'h') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'x') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(452);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == 'k') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == 'k') ADVANCE(562);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'c') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'd') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == 't') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'g') ADVANCE(398);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'h') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'k') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 's') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(361);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'y') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == 's') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(415);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'r') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'u') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'v') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'w') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'x') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_directive_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_runnable_ref);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_far);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_near);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_default_keyword);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_default_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_none_keyword);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_none_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_all_keyword);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_user);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_assistant);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_tool);
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_with_keyword);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_struct_keyword);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_psyche_keyword);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_psyche_keyword);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_skill_keyword);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_skill_keyword);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_service_keyword);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_service_keyword);
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_prompt_keyword);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_prompt_keyword);
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_context_keyword);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_instruct_keyword);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_agic_keyword);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_task_keyword);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_chore_keyword);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_flow_keyword);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_pass_keyword);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_flow_run_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_flow_exec_keyword);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_flow_let_keyword);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_flow_seek_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_flow_ask_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_flow_scatter_keyword);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_flow_storm_keyword);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_flow_generate_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_flow_gather_keyword);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_flow_settle_keyword);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_flow_reduce_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_flow_map_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_flow_keep_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_flow_drop_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_flow_sort_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_flow_rank_keyword);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_flow_repeat_keyword);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_flow_until_keyword);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_flow_from_keyword);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_flow_windowing_keyword);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_flow_using_keyword);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_flow_if_keyword);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_flow_by_keyword);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_flow_in_keyword);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_flow_lane_keyword);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_flow_ascending_keyword);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_flow_descending_keyword);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_flow_time_keyword);
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_flow_times_keyword);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_flow_par_keyword);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_flow_first_keyword);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_flow_last_keyword);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_flow_top_keyword);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_flow_bottom_keyword);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_flow_think_keyword);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_flow_use_keyword);
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_thunk_keyword);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_recall_keyword);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_unfold);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_each);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_fold);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_head);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_tail);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_optional_marker);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_lparen);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_rparen);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_cap_kind);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'a') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'b') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'l') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'm') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'o') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 's') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'u') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_pascal_name);
      if (lookahead == 'x') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_pascal_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'a') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'a') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'c') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'd') ADVANCE(681);
      if (lookahead == 'p') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == 'u') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'e') ADVANCE(656);
      if (lookahead == 'o') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'f') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'k') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'k') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'l') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'n') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'o') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'p') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 's') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 't') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 't') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 't') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 't') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'u') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (lookahead == 'u') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_snake_name);
      if (lookahead == '_') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__snake_kebab_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == 'w') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == ':') ADVANCE(617);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 288,
        'a', 676,
        'd', 673,
        'g', 649,
        'k', 658,
        'm', 643,
        'r', 650,
        's', 660,
        '\t', 690,
        ' ', 690,
      );
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_text_line);
      ADVANCE_MAP(
        '#', 288,
        'a', 744,
        'd', 741,
        'k', 707,
        'r', 705,
        's', 709,
        '\t', 691,
        ' ', 691,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == 'f') ADVANCE(719);
      if (lookahead == 'i') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(695);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(756);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '>') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(740);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(708);
      if (lookahead == 'o') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'g') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'k') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'p') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'r') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == 'w') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(756);
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
  [5] = {.lex_state = 1, .external_lex_state = 3},
  [6] = {.lex_state = 8, .external_lex_state = 4},
  [7] = {.lex_state = 8, .external_lex_state = 4},
  [8] = {.lex_state = 8, .external_lex_state = 4},
  [9] = {.lex_state = 1, .external_lex_state = 5},
  [10] = {.lex_state = 1, .external_lex_state = 5},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 9, .external_lex_state = 6},
  [13] = {.lex_state = 9, .external_lex_state = 6},
  [14] = {.lex_state = 9, .external_lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 11, .external_lex_state = 7},
  [21] = {.lex_state = 11, .external_lex_state = 7},
  [22] = {.lex_state = 11, .external_lex_state = 7},
  [23] = {.lex_state = 11, .external_lex_state = 7},
  [24] = {.lex_state = 11, .external_lex_state = 7},
  [25] = {.lex_state = 11, .external_lex_state = 7},
  [26] = {.lex_state = 9, .external_lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2, .external_lex_state = 7},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2, .external_lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2, .external_lex_state = 7},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 0, .external_lex_state = 8},
  [50] = {.lex_state = 0, .external_lex_state = 8},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 6, .external_lex_state = 7},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0, .external_lex_state = 8},
  [55] = {.lex_state = 3, .external_lex_state = 7},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 8},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 8},
  [62] = {.lex_state = 3, .external_lex_state = 7},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 3, .external_lex_state = 7},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6, .external_lex_state = 7},
  [67] = {.lex_state = 6, .external_lex_state = 7},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4, .external_lex_state = 7},
  [70] = {.lex_state = 4, .external_lex_state = 7},
  [71] = {.lex_state = 0, .external_lex_state = 9},
  [72] = {.lex_state = 0, .external_lex_state = 10},
  [73] = {.lex_state = 0, .external_lex_state = 11},
  [74] = {.lex_state = 4, .external_lex_state = 7},
  [75] = {.lex_state = 4, .external_lex_state = 7},
  [76] = {.lex_state = 4, .external_lex_state = 7},
  [77] = {.lex_state = 4, .external_lex_state = 7},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 8},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0, .external_lex_state = 8},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0, .external_lex_state = 11},
  [84] = {.lex_state = 0, .external_lex_state = 9},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0, .external_lex_state = 10},
  [87] = {.lex_state = 0, .external_lex_state = 9},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 11},
  [90] = {.lex_state = 0, .external_lex_state = 10},
  [91] = {.lex_state = 0, .external_lex_state = 12},
  [92] = {.lex_state = 0, .external_lex_state = 13},
  [93] = {.lex_state = 0, .external_lex_state = 14},
  [94] = {.lex_state = 0, .external_lex_state = 15},
  [95] = {.lex_state = 0, .external_lex_state = 16},
  [96] = {.lex_state = 0, .external_lex_state = 15},
  [97] = {.lex_state = 0, .external_lex_state = 15},
  [98] = {.lex_state = 0, .external_lex_state = 17},
  [99] = {.lex_state = 0, .external_lex_state = 14},
  [100] = {.lex_state = 12, .external_lex_state = 7},
  [101] = {.lex_state = 0, .external_lex_state = 15},
  [102] = {.lex_state = 0, .external_lex_state = 12},
  [103] = {.lex_state = 0, .external_lex_state = 12},
  [104] = {.lex_state = 0, .external_lex_state = 12},
  [105] = {.lex_state = 0, .external_lex_state = 18},
  [106] = {.lex_state = 0, .external_lex_state = 19},
  [107] = {.lex_state = 0, .external_lex_state = 16},
  [108] = {.lex_state = 0, .external_lex_state = 20},
  [109] = {.lex_state = 0, .external_lex_state = 19},
  [110] = {.lex_state = 0, .external_lex_state = 21},
  [111] = {.lex_state = 0, .external_lex_state = 20},
  [112] = {.lex_state = 0, .external_lex_state = 19},
  [113] = {.lex_state = 0, .external_lex_state = 21},
  [114] = {.lex_state = 0, .external_lex_state = 20},
  [115] = {.lex_state = 0, .external_lex_state = 21},
  [116] = {.lex_state = 0, .external_lex_state = 22},
  [117] = {.lex_state = 0, .external_lex_state = 15},
  [118] = {.lex_state = 12, .external_lex_state = 7},
  [119] = {.lex_state = 0, .external_lex_state = 10},
  [120] = {.lex_state = 0, .external_lex_state = 17},
  [121] = {.lex_state = 0, .external_lex_state = 10},
  [122] = {.lex_state = 0, .external_lex_state = 16},
  [123] = {.lex_state = 0, .external_lex_state = 18},
  [124] = {.lex_state = 0, .external_lex_state = 15},
  [125] = {.lex_state = 0, .external_lex_state = 22},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 16},
  [129] = {.lex_state = 0, .external_lex_state = 22},
  [130] = {.lex_state = 0, .external_lex_state = 13},
  [131] = {.lex_state = 12, .external_lex_state = 7},
  [132] = {.lex_state = 0, .external_lex_state = 12},
  [133] = {.lex_state = 0, .external_lex_state = 12},
  [134] = {.lex_state = 0, .external_lex_state = 12},
  [135] = {.lex_state = 0, .external_lex_state = 12},
  [136] = {.lex_state = 0, .external_lex_state = 18},
  [137] = {.lex_state = 0, .external_lex_state = 14},
  [138] = {.lex_state = 12, .external_lex_state = 7},
  [139] = {.lex_state = 0, .external_lex_state = 15},
  [140] = {.lex_state = 0, .external_lex_state = 15},
  [141] = {.lex_state = 0, .external_lex_state = 15},
  [142] = {.lex_state = 0, .external_lex_state = 16},
  [143] = {.lex_state = 0, .external_lex_state = 17},
  [144] = {.lex_state = 0, .external_lex_state = 13},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 12},
  [147] = {.lex_state = 0, .external_lex_state = 12},
  [148] = {.lex_state = 0, .external_lex_state = 12},
  [149] = {.lex_state = 0, .external_lex_state = 12},
  [150] = {.lex_state = 0, .external_lex_state = 18},
  [151] = {.lex_state = 0, .external_lex_state = 18},
  [152] = {.lex_state = 0, .external_lex_state = 18},
  [153] = {.lex_state = 0, .external_lex_state = 18},
  [154] = {.lex_state = 0, .external_lex_state = 18},
  [155] = {.lex_state = 0, .external_lex_state = 18},
  [156] = {.lex_state = 0, .external_lex_state = 18},
  [157] = {.lex_state = 0, .external_lex_state = 18},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 15},
  [160] = {.lex_state = 0, .external_lex_state = 15},
  [161] = {.lex_state = 0, .external_lex_state = 22},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 10, .external_lex_state = 7},
  [164] = {.lex_state = 12, .external_lex_state = 7},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0, .external_lex_state = 23},
  [167] = {.lex_state = 12, .external_lex_state = 7},
  [168] = {.lex_state = 0, .external_lex_state = 17},
  [169] = {.lex_state = 0, .external_lex_state = 10},
  [170] = {.lex_state = 0, .external_lex_state = 14},
  [171] = {.lex_state = 0, .external_lex_state = 10},
  [172] = {.lex_state = 0, .external_lex_state = 23},
  [173] = {.lex_state = 0, .external_lex_state = 23},
  [174] = {.lex_state = 0, .external_lex_state = 23},
  [175] = {.lex_state = 0, .external_lex_state = 23},
  [176] = {.lex_state = 0, .external_lex_state = 10},
  [177] = {.lex_state = 0, .external_lex_state = 14},
  [178] = {.lex_state = 12, .external_lex_state = 7},
  [179] = {.lex_state = 12, .external_lex_state = 7},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 23},
  [182] = {.lex_state = 0, .external_lex_state = 17},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 12, .external_lex_state = 7},
  [185] = {.lex_state = 12, .external_lex_state = 7},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 12, .external_lex_state = 7},
  [189] = {.lex_state = 12, .external_lex_state = 7},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 23},
  [192] = {.lex_state = 0, .external_lex_state = 23},
  [193] = {.lex_state = 0, .external_lex_state = 23},
  [194] = {.lex_state = 0, .external_lex_state = 21},
  [195] = {.lex_state = 0, .external_lex_state = 23},
  [196] = {.lex_state = 15},
  [197] = {.lex_state = 0, .external_lex_state = 23},
  [198] = {.lex_state = 12, .external_lex_state = 7},
  [199] = {.lex_state = 12, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 23},
  [201] = {.lex_state = 0, .external_lex_state = 21},
  [202] = {.lex_state = 0, .external_lex_state = 23},
  [203] = {.lex_state = 10, .external_lex_state = 7},
  [204] = {.lex_state = 12, .external_lex_state = 7},
  [205] = {.lex_state = 10, .external_lex_state = 7},
  [206] = {.lex_state = 0, .external_lex_state = 23},
  [207] = {.lex_state = 0, .external_lex_state = 23},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0, .external_lex_state = 23},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 12, .external_lex_state = 7},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 23},
  [217] = {.lex_state = 0, .external_lex_state = 23},
  [218] = {.lex_state = 0, .external_lex_state = 16},
  [219] = {.lex_state = 0, .external_lex_state = 16},
  [220] = {.lex_state = 0, .external_lex_state = 16},
  [221] = {.lex_state = 0, .external_lex_state = 24},
  [222] = {.lex_state = 0, .external_lex_state = 25},
  [223] = {.lex_state = 0, .external_lex_state = 9},
  [224] = {.lex_state = 0, .external_lex_state = 9},
  [225] = {.lex_state = 0, .external_lex_state = 24},
  [226] = {.lex_state = 0, .external_lex_state = 24},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 0, .external_lex_state = 9},
  [229] = {.lex_state = 0, .external_lex_state = 9},
  [230] = {.lex_state = 0, .external_lex_state = 9},
  [231] = {.lex_state = 0, .external_lex_state = 9},
  [232] = {.lex_state = 0, .external_lex_state = 9},
  [233] = {.lex_state = 0, .external_lex_state = 9},
  [234] = {.lex_state = 0, .external_lex_state = 9},
  [235] = {.lex_state = 0, .external_lex_state = 9},
  [236] = {.lex_state = 0, .external_lex_state = 9},
  [237] = {.lex_state = 5, .external_lex_state = 7},
  [238] = {.lex_state = 0, .external_lex_state = 23},
  [239] = {.lex_state = 0, .external_lex_state = 14},
  [240] = {.lex_state = 0, .external_lex_state = 9},
  [241] = {.lex_state = 0, .external_lex_state = 26},
  [242] = {.lex_state = 0, .external_lex_state = 9},
  [243] = {.lex_state = 0, .external_lex_state = 9},
  [244] = {.lex_state = 0, .external_lex_state = 9},
  [245] = {.lex_state = 0, .external_lex_state = 9},
  [246] = {.lex_state = 0, .external_lex_state = 9},
  [247] = {.lex_state = 0, .external_lex_state = 9},
  [248] = {.lex_state = 0, .external_lex_state = 9},
  [249] = {.lex_state = 0, .external_lex_state = 9},
  [250] = {.lex_state = 0, .external_lex_state = 9},
  [251] = {.lex_state = 0, .external_lex_state = 9},
  [252] = {.lex_state = 0, .external_lex_state = 9},
  [253] = {.lex_state = 0, .external_lex_state = 9},
  [254] = {.lex_state = 0, .external_lex_state = 9},
  [255] = {.lex_state = 0, .external_lex_state = 9},
  [256] = {.lex_state = 0, .external_lex_state = 9},
  [257] = {.lex_state = 0, .external_lex_state = 9},
  [258] = {.lex_state = 0, .external_lex_state = 9},
  [259] = {.lex_state = 0, .external_lex_state = 9},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 0, .external_lex_state = 11},
  [263] = {.lex_state = 0, .external_lex_state = 9},
  [264] = {.lex_state = 0, .external_lex_state = 9},
  [265] = {.lex_state = 0, .external_lex_state = 9},
  [266] = {.lex_state = 0, .external_lex_state = 9},
  [267] = {.lex_state = 0, .external_lex_state = 9},
  [268] = {.lex_state = 0, .external_lex_state = 9},
  [269] = {.lex_state = 0, .external_lex_state = 9},
  [270] = {.lex_state = 0, .external_lex_state = 9},
  [271] = {.lex_state = 0, .external_lex_state = 9},
  [272] = {.lex_state = 0, .external_lex_state = 9},
  [273] = {.lex_state = 0, .external_lex_state = 9},
  [274] = {.lex_state = 0, .external_lex_state = 9},
  [275] = {.lex_state = 0, .external_lex_state = 9},
  [276] = {.lex_state = 0, .external_lex_state = 9},
  [277] = {.lex_state = 0, .external_lex_state = 9},
  [278] = {.lex_state = 0, .external_lex_state = 9},
  [279] = {.lex_state = 0, .external_lex_state = 9},
  [280] = {.lex_state = 0, .external_lex_state = 9},
  [281] = {.lex_state = 0, .external_lex_state = 9},
  [282] = {.lex_state = 0, .external_lex_state = 9},
  [283] = {.lex_state = 0, .external_lex_state = 9},
  [284] = {.lex_state = 0, .external_lex_state = 9},
  [285] = {.lex_state = 0, .external_lex_state = 9},
  [286] = {.lex_state = 0, .external_lex_state = 9},
  [287] = {.lex_state = 0, .external_lex_state = 9},
  [288] = {.lex_state = 0, .external_lex_state = 9},
  [289] = {.lex_state = 0, .external_lex_state = 9},
  [290] = {.lex_state = 0, .external_lex_state = 9},
  [291] = {.lex_state = 0, .external_lex_state = 9},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 0, .external_lex_state = 9},
  [294] = {.lex_state = 0, .external_lex_state = 9},
  [295] = {.lex_state = 0, .external_lex_state = 9},
  [296] = {.lex_state = 0, .external_lex_state = 9},
  [297] = {.lex_state = 0, .external_lex_state = 9},
  [298] = {.lex_state = 0, .external_lex_state = 9},
  [299] = {.lex_state = 0, .external_lex_state = 9},
  [300] = {.lex_state = 0, .external_lex_state = 9},
  [301] = {.lex_state = 0, .external_lex_state = 9},
  [302] = {.lex_state = 0, .external_lex_state = 9},
  [303] = {.lex_state = 0, .external_lex_state = 9},
  [304] = {.lex_state = 0, .external_lex_state = 9},
  [305] = {.lex_state = 0, .external_lex_state = 9},
  [306] = {.lex_state = 0, .external_lex_state = 9},
  [307] = {.lex_state = 0, .external_lex_state = 9},
  [308] = {.lex_state = 0, .external_lex_state = 9},
  [309] = {.lex_state = 0, .external_lex_state = 9},
  [310] = {.lex_state = 0, .external_lex_state = 9},
  [311] = {.lex_state = 0, .external_lex_state = 9},
  [312] = {.lex_state = 0, .external_lex_state = 9},
  [313] = {.lex_state = 0, .external_lex_state = 9},
  [314] = {.lex_state = 0, .external_lex_state = 9},
  [315] = {.lex_state = 0, .external_lex_state = 9},
  [316] = {.lex_state = 0, .external_lex_state = 8},
  [317] = {.lex_state = 0, .external_lex_state = 8},
  [318] = {.lex_state = 0, .external_lex_state = 8},
  [319] = {.lex_state = 0, .external_lex_state = 8},
  [320] = {.lex_state = 0, .external_lex_state = 8},
  [321] = {.lex_state = 0, .external_lex_state = 8},
  [322] = {.lex_state = 0, .external_lex_state = 16},
  [323] = {.lex_state = 0, .external_lex_state = 16},
  [324] = {.lex_state = 0, .external_lex_state = 25},
  [325] = {.lex_state = 0, .external_lex_state = 11},
  [326] = {.lex_state = 0, .external_lex_state = 11},
  [327] = {.lex_state = 0, .external_lex_state = 11},
  [328] = {.lex_state = 0, .external_lex_state = 11},
  [329] = {.lex_state = 0, .external_lex_state = 11},
  [330] = {.lex_state = 0, .external_lex_state = 11},
  [331] = {.lex_state = 0, .external_lex_state = 11},
  [332] = {.lex_state = 0, .external_lex_state = 9},
  [333] = {.lex_state = 0, .external_lex_state = 9},
  [334] = {.lex_state = 0, .external_lex_state = 9},
  [335] = {.lex_state = 0, .external_lex_state = 9},
  [336] = {.lex_state = 0, .external_lex_state = 9},
  [337] = {.lex_state = 1},
  [338] = {.lex_state = 0, .external_lex_state = 11},
  [339] = {.lex_state = 0, .external_lex_state = 11},
  [340] = {.lex_state = 0, .external_lex_state = 8},
  [341] = {.lex_state = 0, .external_lex_state = 8},
  [342] = {.lex_state = 0, .external_lex_state = 9},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 0, .external_lex_state = 9},
  [345] = {.lex_state = 0, .external_lex_state = 9},
  [346] = {.lex_state = 0, .external_lex_state = 9},
  [347] = {.lex_state = 0, .external_lex_state = 9},
  [348] = {.lex_state = 0, .external_lex_state = 9},
  [349] = {.lex_state = 0, .external_lex_state = 9},
  [350] = {.lex_state = 0, .external_lex_state = 23},
  [351] = {.lex_state = 0, .external_lex_state = 26},
  [352] = {.lex_state = 0, .external_lex_state = 26},
  [353] = {.lex_state = 13, .external_lex_state = 7},
  [354] = {.lex_state = 12, .external_lex_state = 7},
  [355] = {.lex_state = 0, .external_lex_state = 25},
  [356] = {.lex_state = 0, .external_lex_state = 24},
  [357] = {.lex_state = 0, .external_lex_state = 23},
  [358] = {.lex_state = 1},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 0, .external_lex_state = 23},
  [361] = {.lex_state = 0, .external_lex_state = 23},
  [362] = {.lex_state = 15},
  [363] = {.lex_state = 0, .external_lex_state = 23},
  [364] = {.lex_state = 0, .external_lex_state = 8},
  [365] = {.lex_state = 0, .external_lex_state = 25},
  [366] = {.lex_state = 12, .external_lex_state = 7},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 0, .external_lex_state = 23},
  [369] = {.lex_state = 0, .external_lex_state = 23},
  [370] = {.lex_state = 12, .external_lex_state = 7},
  [371] = {.lex_state = 0, .external_lex_state = 23},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 15},
  [374] = {.lex_state = 5, .external_lex_state = 7},
  [375] = {.lex_state = 0, .external_lex_state = 23},
  [376] = {.lex_state = 0, .external_lex_state = 25},
  [377] = {.lex_state = 0, .external_lex_state = 24},
  [378] = {.lex_state = 0, .external_lex_state = 24},
  [379] = {.lex_state = 15},
  [380] = {.lex_state = 5, .external_lex_state = 7},
  [381] = {.lex_state = 0, .external_lex_state = 26},
  [382] = {.lex_state = 0, .external_lex_state = 24},
  [383] = {.lex_state = 12, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 24},
  [385] = {.lex_state = 0, .external_lex_state = 16},
  [386] = {.lex_state = 0, .external_lex_state = 24},
  [387] = {.lex_state = 0, .external_lex_state = 24},
  [388] = {.lex_state = 0, .external_lex_state = 24},
  [389] = {.lex_state = 0, .external_lex_state = 24},
  [390] = {.lex_state = 0, .external_lex_state = 24},
  [391] = {.lex_state = 0, .external_lex_state = 24},
  [392] = {.lex_state = 0, .external_lex_state = 24},
  [393] = {.lex_state = 0, .external_lex_state = 24},
  [394] = {.lex_state = 0, .external_lex_state = 24},
  [395] = {.lex_state = 0, .external_lex_state = 26},
  [396] = {.lex_state = 0, .external_lex_state = 23},
  [397] = {.lex_state = 0, .external_lex_state = 24},
  [398] = {.lex_state = 0, .external_lex_state = 24},
  [399] = {.lex_state = 0, .external_lex_state = 24},
  [400] = {.lex_state = 0, .external_lex_state = 24},
  [401] = {.lex_state = 0, .external_lex_state = 24},
  [402] = {.lex_state = 0, .external_lex_state = 24},
  [403] = {.lex_state = 0, .external_lex_state = 24},
  [404] = {.lex_state = 0, .external_lex_state = 24},
  [405] = {.lex_state = 0, .external_lex_state = 24},
  [406] = {.lex_state = 0, .external_lex_state = 24},
  [407] = {.lex_state = 0, .external_lex_state = 24},
  [408] = {.lex_state = 0, .external_lex_state = 24},
  [409] = {.lex_state = 0, .external_lex_state = 24},
  [410] = {.lex_state = 0, .external_lex_state = 24},
  [411] = {.lex_state = 0, .external_lex_state = 24},
  [412] = {.lex_state = 0, .external_lex_state = 24},
  [413] = {.lex_state = 0, .external_lex_state = 24},
  [414] = {.lex_state = 0, .external_lex_state = 26},
  [415] = {.lex_state = 0, .external_lex_state = 26},
  [416] = {.lex_state = 0, .external_lex_state = 24},
  [417] = {.lex_state = 0, .external_lex_state = 24},
  [418] = {.lex_state = 0, .external_lex_state = 24},
  [419] = {.lex_state = 0, .external_lex_state = 24},
  [420] = {.lex_state = 0, .external_lex_state = 24},
  [421] = {.lex_state = 1},
  [422] = {.lex_state = 15},
  [423] = {.lex_state = 0, .external_lex_state = 24},
  [424] = {.lex_state = 5, .external_lex_state = 7},
  [425] = {.lex_state = 15},
  [426] = {.lex_state = 0, .external_lex_state = 24},
  [427] = {.lex_state = 0, .external_lex_state = 24},
  [428] = {.lex_state = 0, .external_lex_state = 24},
  [429] = {.lex_state = 0, .external_lex_state = 24},
  [430] = {.lex_state = 15},
  [431] = {.lex_state = 0, .external_lex_state = 24},
  [432] = {.lex_state = 0, .external_lex_state = 24},
  [433] = {.lex_state = 12, .external_lex_state = 7},
  [434] = {.lex_state = 0, .external_lex_state = 24},
  [435] = {.lex_state = 1},
  [436] = {.lex_state = 15},
  [437] = {.lex_state = 5, .external_lex_state = 7},
  [438] = {.lex_state = 0, .external_lex_state = 24},
  [439] = {.lex_state = 0, .external_lex_state = 23},
  [440] = {.lex_state = 0, .external_lex_state = 24},
  [441] = {.lex_state = 0, .external_lex_state = 24},
  [442] = {.lex_state = 15},
  [443] = {.lex_state = 5, .external_lex_state = 7},
  [444] = {.lex_state = 0, .external_lex_state = 24},
  [445] = {.lex_state = 0, .external_lex_state = 24},
  [446] = {.lex_state = 12, .external_lex_state = 7},
  [447] = {.lex_state = 0, .external_lex_state = 24},
  [448] = {.lex_state = 0, .external_lex_state = 24},
  [449] = {.lex_state = 0, .external_lex_state = 24},
  [450] = {.lex_state = 0, .external_lex_state = 24},
  [451] = {.lex_state = 0, .external_lex_state = 24},
  [452] = {.lex_state = 0, .external_lex_state = 24},
  [453] = {.lex_state = 0, .external_lex_state = 24},
  [454] = {.lex_state = 0, .external_lex_state = 24},
  [455] = {.lex_state = 0, .external_lex_state = 24},
  [456] = {.lex_state = 0, .external_lex_state = 24},
  [457] = {.lex_state = 0, .external_lex_state = 24},
  [458] = {.lex_state = 0, .external_lex_state = 24},
  [459] = {.lex_state = 0, .external_lex_state = 24},
  [460] = {.lex_state = 0, .external_lex_state = 24},
  [461] = {.lex_state = 0, .external_lex_state = 24},
  [462] = {.lex_state = 0, .external_lex_state = 24},
  [463] = {.lex_state = 0, .external_lex_state = 24},
  [464] = {.lex_state = 0, .external_lex_state = 24},
  [465] = {.lex_state = 0, .external_lex_state = 24},
  [466] = {.lex_state = 0, .external_lex_state = 24},
  [467] = {.lex_state = 0, .external_lex_state = 24},
  [468] = {.lex_state = 0, .external_lex_state = 24},
  [469] = {.lex_state = 0, .external_lex_state = 24},
  [470] = {.lex_state = 0, .external_lex_state = 24},
  [471] = {.lex_state = 0, .external_lex_state = 24},
  [472] = {.lex_state = 0, .external_lex_state = 24},
  [473] = {.lex_state = 0, .external_lex_state = 24},
  [474] = {.lex_state = 0, .external_lex_state = 24},
  [475] = {.lex_state = 0, .external_lex_state = 24},
  [476] = {.lex_state = 1, .external_lex_state = 7},
  [477] = {.lex_state = 0, .external_lex_state = 26},
  [478] = {.lex_state = 0, .external_lex_state = 26},
  [479] = {.lex_state = 1, .external_lex_state = 7},
  [480] = {.lex_state = 0, .external_lex_state = 26},
  [481] = {.lex_state = 0, .external_lex_state = 26},
  [482] = {.lex_state = 1, .external_lex_state = 7},
  [483] = {.lex_state = 0, .external_lex_state = 8},
  [484] = {.lex_state = 0, .external_lex_state = 14},
  [485] = {.lex_state = 0, .external_lex_state = 26},
  [486] = {.lex_state = 0, .external_lex_state = 14},
  [487] = {.lex_state = 0, .external_lex_state = 23},
  [488] = {.lex_state = 13, .external_lex_state = 7},
  [489] = {.lex_state = 0, .external_lex_state = 23},
  [490] = {.lex_state = 15},
  [491] = {.lex_state = 13, .external_lex_state = 7},
  [492] = {.lex_state = 0, .external_lex_state = 21},
  [493] = {.lex_state = 0, .external_lex_state = 17},
  [494] = {.lex_state = 0, .external_lex_state = 21},
  [495] = {.lex_state = 0, .external_lex_state = 23},
  [496] = {.lex_state = 0, .external_lex_state = 23},
  [497] = {.lex_state = 0, .external_lex_state = 23},
  [498] = {.lex_state = 0, .external_lex_state = 23},
  [499] = {.lex_state = 0, .external_lex_state = 23},
  [500] = {.lex_state = 0, .external_lex_state = 23},
  [501] = {.lex_state = 0, .external_lex_state = 24},
  [502] = {.lex_state = 0, .external_lex_state = 17},
  [503] = {.lex_state = 0, .external_lex_state = 23},
  [504] = {.lex_state = 0, .external_lex_state = 23},
  [505] = {.lex_state = 0, .external_lex_state = 23},
  [506] = {.lex_state = 0, .external_lex_state = 23},
  [507] = {.lex_state = 0, .external_lex_state = 23},
  [508] = {.lex_state = 0, .external_lex_state = 23},
  [509] = {.lex_state = 0, .external_lex_state = 21},
  [510] = {.lex_state = 0, .external_lex_state = 23},
  [511] = {.lex_state = 0, .external_lex_state = 23},
  [512] = {.lex_state = 0, .external_lex_state = 23},
  [513] = {.lex_state = 0, .external_lex_state = 23},
  [514] = {.lex_state = 0, .external_lex_state = 24},
  [515] = {.lex_state = 0, .external_lex_state = 23},
  [516] = {.lex_state = 0, .external_lex_state = 23},
  [517] = {.lex_state = 0, .external_lex_state = 23},
  [518] = {.lex_state = 0, .external_lex_state = 26},
  [519] = {.lex_state = 0, .external_lex_state = 17},
  [520] = {.lex_state = 0, .external_lex_state = 16},
  [521] = {.lex_state = 0, .external_lex_state = 16},
  [522] = {.lex_state = 0, .external_lex_state = 24},
  [523] = {.lex_state = 0, .external_lex_state = 20},
  [524] = {.lex_state = 0, .external_lex_state = 15},
  [525] = {.lex_state = 0, .external_lex_state = 15},
  [526] = {.lex_state = 0, .external_lex_state = 15},
  [527] = {.lex_state = 0, .external_lex_state = 15},
  [528] = {.lex_state = 0, .external_lex_state = 15},
  [529] = {.lex_state = 0, .external_lex_state = 27},
  [530] = {.lex_state = 0, .external_lex_state = 13},
  [531] = {.lex_state = 0, .external_lex_state = 15},
  [532] = {.lex_state = 0, .external_lex_state = 15},
  [533] = {.lex_state = 0, .external_lex_state = 13},
  [534] = {.lex_state = 0, .external_lex_state = 13},
  [535] = {.lex_state = 0, .external_lex_state = 15},
  [536] = {.lex_state = 0, .external_lex_state = 15},
  [537] = {.lex_state = 1},
  [538] = {.lex_state = 0, .external_lex_state = 15},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 13},
  [541] = {.lex_state = 0, .external_lex_state = 15},
  [542] = {.lex_state = 0, .external_lex_state = 15},
  [543] = {.lex_state = 0, .external_lex_state = 2},
  [544] = {.lex_state = 0, .external_lex_state = 15},
  [545] = {.lex_state = 0, .external_lex_state = 15},
  [546] = {.lex_state = 0, .external_lex_state = 15},
  [547] = {.lex_state = 0, .external_lex_state = 15},
  [548] = {.lex_state = 0, .external_lex_state = 15},
  [549] = {.lex_state = 0, .external_lex_state = 15},
  [550] = {.lex_state = 0, .external_lex_state = 15},
  [551] = {.lex_state = 0, .external_lex_state = 2},
  [552] = {.lex_state = 0, .external_lex_state = 15},
  [553] = {.lex_state = 0, .external_lex_state = 15},
  [554] = {.lex_state = 0, .external_lex_state = 15},
  [555] = {.lex_state = 0, .external_lex_state = 15},
  [556] = {.lex_state = 0, .external_lex_state = 15},
  [557] = {.lex_state = 0, .external_lex_state = 15},
  [558] = {.lex_state = 0, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 15},
  [560] = {.lex_state = 0, .external_lex_state = 15},
  [561] = {.lex_state = 0, .external_lex_state = 15},
  [562] = {.lex_state = 0, .external_lex_state = 15},
  [563] = {.lex_state = 0, .external_lex_state = 15},
  [564] = {.lex_state = 0, .external_lex_state = 15},
  [565] = {.lex_state = 0, .external_lex_state = 15},
  [566] = {.lex_state = 0, .external_lex_state = 15},
  [567] = {.lex_state = 0, .external_lex_state = 15},
  [568] = {.lex_state = 0, .external_lex_state = 15},
  [569] = {.lex_state = 0, .external_lex_state = 15},
  [570] = {.lex_state = 1},
  [571] = {.lex_state = 0, .external_lex_state = 15},
  [572] = {.lex_state = 0, .external_lex_state = 15},
  [573] = {.lex_state = 0, .external_lex_state = 2},
  [574] = {.lex_state = 0, .external_lex_state = 28},
  [575] = {.lex_state = 0, .external_lex_state = 15},
  [576] = {.lex_state = 0, .external_lex_state = 20},
  [577] = {.lex_state = 0, .external_lex_state = 20},
  [578] = {.lex_state = 0, .external_lex_state = 2},
  [579] = {.lex_state = 0, .external_lex_state = 2},
  [580] = {.lex_state = 0, .external_lex_state = 15},
  [581] = {.lex_state = 0, .external_lex_state = 20},
  [582] = {.lex_state = 0, .external_lex_state = 20},
  [583] = {.lex_state = 0, .external_lex_state = 20},
  [584] = {.lex_state = 0, .external_lex_state = 20},
  [585] = {.lex_state = 0, .external_lex_state = 20},
  [586] = {.lex_state = 0, .external_lex_state = 20},
  [587] = {.lex_state = 0, .external_lex_state = 20},
  [588] = {.lex_state = 0, .external_lex_state = 20},
  [589] = {.lex_state = 0, .external_lex_state = 20},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 20},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 20},
  [595] = {.lex_state = 0, .external_lex_state = 20},
  [596] = {.lex_state = 0, .external_lex_state = 20},
  [597] = {.lex_state = 0, .external_lex_state = 20},
  [598] = {.lex_state = 0, .external_lex_state = 20},
  [599] = {.lex_state = 0, .external_lex_state = 20},
  [600] = {.lex_state = 0, .external_lex_state = 20},
  [601] = {.lex_state = 0, .external_lex_state = 20},
  [602] = {.lex_state = 0, .external_lex_state = 20},
  [603] = {.lex_state = 0, .external_lex_state = 20},
  [604] = {.lex_state = 0, .external_lex_state = 20},
  [605] = {.lex_state = 0, .external_lex_state = 20},
  [606] = {.lex_state = 0, .external_lex_state = 20},
  [607] = {.lex_state = 0, .external_lex_state = 20},
  [608] = {.lex_state = 0, .external_lex_state = 20},
  [609] = {.lex_state = 0, .external_lex_state = 20},
  [610] = {.lex_state = 0, .external_lex_state = 20},
  [611] = {.lex_state = 0, .external_lex_state = 20},
  [612] = {.lex_state = 0, .external_lex_state = 20},
  [613] = {.lex_state = 0, .external_lex_state = 19},
  [614] = {.lex_state = 0, .external_lex_state = 19},
  [615] = {.lex_state = 0, .external_lex_state = 20},
  [616] = {.lex_state = 0, .external_lex_state = 20},
  [617] = {.lex_state = 0, .external_lex_state = 20},
  [618] = {.lex_state = 0, .external_lex_state = 20},
  [619] = {.lex_state = 0, .external_lex_state = 20},
  [620] = {.lex_state = 0, .external_lex_state = 20},
  [621] = {.lex_state = 0, .external_lex_state = 20},
  [622] = {.lex_state = 0, .external_lex_state = 20},
  [623] = {.lex_state = 0, .external_lex_state = 20},
  [624] = {.lex_state = 0, .external_lex_state = 20},
  [625] = {.lex_state = 0, .external_lex_state = 20},
  [626] = {.lex_state = 0, .external_lex_state = 20},
  [627] = {.lex_state = 0, .external_lex_state = 20},
  [628] = {.lex_state = 0, .external_lex_state = 20},
  [629] = {.lex_state = 0, .external_lex_state = 20},
  [630] = {.lex_state = 0, .external_lex_state = 20},
  [631] = {.lex_state = 0, .external_lex_state = 20},
  [632] = {.lex_state = 0, .external_lex_state = 20},
  [633] = {.lex_state = 0, .external_lex_state = 20},
  [634] = {.lex_state = 0, .external_lex_state = 20},
  [635] = {.lex_state = 0, .external_lex_state = 20},
  [636] = {.lex_state = 0, .external_lex_state = 20},
  [637] = {.lex_state = 0, .external_lex_state = 20},
  [638] = {.lex_state = 0, .external_lex_state = 20},
  [639] = {.lex_state = 0, .external_lex_state = 20},
  [640] = {.lex_state = 0, .external_lex_state = 20},
  [641] = {.lex_state = 0, .external_lex_state = 20},
  [642] = {.lex_state = 0, .external_lex_state = 20},
  [643] = {.lex_state = 0, .external_lex_state = 20},
  [644] = {.lex_state = 0, .external_lex_state = 20},
  [645] = {.lex_state = 0, .external_lex_state = 20},
  [646] = {.lex_state = 0, .external_lex_state = 20},
  [647] = {.lex_state = 0, .external_lex_state = 20},
  [648] = {.lex_state = 0, .external_lex_state = 20},
  [649] = {.lex_state = 0, .external_lex_state = 20},
  [650] = {.lex_state = 0, .external_lex_state = 20},
  [651] = {.lex_state = 0, .external_lex_state = 20},
  [652] = {.lex_state = 0, .external_lex_state = 20},
  [653] = {.lex_state = 0, .external_lex_state = 20},
  [654] = {.lex_state = 0, .external_lex_state = 20},
  [655] = {.lex_state = 0, .external_lex_state = 20},
  [656] = {.lex_state = 0, .external_lex_state = 20},
  [657] = {.lex_state = 0, .external_lex_state = 20},
  [658] = {.lex_state = 0, .external_lex_state = 20},
  [659] = {.lex_state = 0, .external_lex_state = 20},
  [660] = {.lex_state = 0, .external_lex_state = 20},
  [661] = {.lex_state = 0, .external_lex_state = 20},
  [662] = {.lex_state = 0, .external_lex_state = 20},
  [663] = {.lex_state = 0, .external_lex_state = 20},
  [664] = {.lex_state = 0, .external_lex_state = 20},
  [665] = {.lex_state = 0, .external_lex_state = 20},
  [666] = {.lex_state = 7, .external_lex_state = 7},
  [667] = {.lex_state = 12, .external_lex_state = 7},
  [668] = {.lex_state = 0, .external_lex_state = 15},
  [669] = {.lex_state = 7, .external_lex_state = 7},
  [670] = {.lex_state = 12, .external_lex_state = 7},
  [671] = {.lex_state = 0, .external_lex_state = 2},
  [672] = {.lex_state = 0, .external_lex_state = 2},
  [673] = {.lex_state = 1},
  [674] = {.lex_state = 0, .external_lex_state = 2},
  [675] = {.lex_state = 0, .external_lex_state = 7},
  [676] = {.lex_state = 0, .external_lex_state = 7},
  [677] = {.lex_state = 0, .external_lex_state = 27},
  [678] = {.lex_state = 0, .external_lex_state = 7},
  [679] = {.lex_state = 0, .external_lex_state = 2},
  [680] = {.lex_state = 0, .external_lex_state = 7},
  [681] = {.lex_state = 0, .external_lex_state = 2},
  [682] = {.lex_state = 0, .external_lex_state = 2},
  [683] = {.lex_state = 0, .external_lex_state = 29},
  [684] = {.lex_state = 0, .external_lex_state = 2},
  [685] = {.lex_state = 0, .external_lex_state = 2},
  [686] = {.lex_state = 7, .external_lex_state = 7},
  [687] = {.lex_state = 14, .external_lex_state = 7},
  [688] = {.lex_state = 0, .external_lex_state = 2},
  [689] = {.lex_state = 0, .external_lex_state = 2},
  [690] = {.lex_state = 0, .external_lex_state = 2},
  [691] = {.lex_state = 1},
  [692] = {.lex_state = 0, .external_lex_state = 15},
  [693] = {.lex_state = 0, .external_lex_state = 15},
  [694] = {.lex_state = 12, .external_lex_state = 7},
  [695] = {.lex_state = 0, .external_lex_state = 2},
  [696] = {.lex_state = 1},
  [697] = {.lex_state = 1},
  [698] = {.lex_state = 0, .external_lex_state = 2},
  [699] = {.lex_state = 0, .external_lex_state = 2},
  [700] = {.lex_state = 1},
  [701] = {.lex_state = 0, .external_lex_state = 2},
  [702] = {.lex_state = 0, .external_lex_state = 2},
  [703] = {.lex_state = 1},
  [704] = {.lex_state = 0, .external_lex_state = 2},
  [705] = {.lex_state = 0, .external_lex_state = 2},
  [706] = {.lex_state = 0, .external_lex_state = 7},
  [707] = {.lex_state = 0, .external_lex_state = 7},
  [708] = {.lex_state = 0, .external_lex_state = 15},
  [709] = {.lex_state = 72},
  [710] = {.lex_state = 72},
  [711] = {.lex_state = 16},
  [712] = {.lex_state = 0, .external_lex_state = 2},
  [713] = {.lex_state = 0, .external_lex_state = 2},
  [714] = {.lex_state = 0, .external_lex_state = 2},
  [715] = {.lex_state = 0, .external_lex_state = 2},
  [716] = {.lex_state = 0, .external_lex_state = 2},
  [717] = {.lex_state = 0, .external_lex_state = 2},
  [718] = {.lex_state = 5, .external_lex_state = 7},
  [719] = {.lex_state = 0, .external_lex_state = 13},
  [720] = {.lex_state = 0, .external_lex_state = 15},
  [721] = {.lex_state = 0, .external_lex_state = 2},
  [722] = {.lex_state = 0, .external_lex_state = 20},
  [723] = {.lex_state = 0, .external_lex_state = 20},
  [724] = {.lex_state = 0, .external_lex_state = 20},
  [725] = {.lex_state = 0, .external_lex_state = 2},
  [726] = {.lex_state = 0, .external_lex_state = 20},
  [727] = {.lex_state = 0, .external_lex_state = 20},
  [728] = {.lex_state = 0, .external_lex_state = 2},
  [729] = {.lex_state = 0, .external_lex_state = 2},
  [730] = {.lex_state = 0, .external_lex_state = 2},
  [731] = {.lex_state = 0, .external_lex_state = 15},
  [732] = {.lex_state = 0, .external_lex_state = 2},
  [733] = {.lex_state = 0, .external_lex_state = 28},
  [734] = {.lex_state = 0, .external_lex_state = 2},
  [735] = {.lex_state = 0, .external_lex_state = 15},
  [736] = {.lex_state = 0, .external_lex_state = 15},
  [737] = {.lex_state = 0, .external_lex_state = 15},
  [738] = {.lex_state = 0, .external_lex_state = 15},
  [739] = {.lex_state = 0, .external_lex_state = 15},
  [740] = {.lex_state = 0, .external_lex_state = 15},
  [741] = {.lex_state = 0, .external_lex_state = 15},
  [742] = {.lex_state = 0, .external_lex_state = 15},
  [743] = {.lex_state = 0, .external_lex_state = 19},
  [744] = {.lex_state = 0, .external_lex_state = 19},
  [745] = {.lex_state = 0, .external_lex_state = 19},
  [746] = {.lex_state = 0, .external_lex_state = 19},
  [747] = {.lex_state = 0, .external_lex_state = 19},
  [748] = {.lex_state = 0, .external_lex_state = 19},
  [749] = {.lex_state = 0, .external_lex_state = 15},
  [750] = {.lex_state = 0, .external_lex_state = 19},
  [751] = {.lex_state = 0, .external_lex_state = 19},
  [752] = {.lex_state = 0, .external_lex_state = 20},
  [753] = {.lex_state = 0, .external_lex_state = 20},
  [754] = {.lex_state = 0, .external_lex_state = 20},
  [755] = {.lex_state = 0, .external_lex_state = 20},
  [756] = {.lex_state = 0, .external_lex_state = 20},
  [757] = {.lex_state = 0, .external_lex_state = 20},
  [758] = {.lex_state = 0, .external_lex_state = 2},
  [759] = {.lex_state = 1, .external_lex_state = 7},
  [760] = {.lex_state = 0, .external_lex_state = 15},
  [761] = {.lex_state = 0, .external_lex_state = 2},
  [762] = {.lex_state = 0, .external_lex_state = 15},
  [763] = {.lex_state = 0, .external_lex_state = 20},
  [764] = {.lex_state = 0, .external_lex_state = 20},
  [765] = {.lex_state = 1},
  [766] = {.lex_state = 0, .external_lex_state = 15},
  [767] = {.lex_state = 0, .external_lex_state = 29},
  [768] = {.lex_state = 0, .external_lex_state = 15},
  [769] = {.lex_state = 0, .external_lex_state = 15},
  [770] = {.lex_state = 1},
  [771] = {.lex_state = 12, .external_lex_state = 7},
  [772] = {.lex_state = 0, .external_lex_state = 2},
  [773] = {.lex_state = 0, .external_lex_state = 2},
  [774] = {.lex_state = 0, .external_lex_state = 15},
  [775] = {.lex_state = 0, .external_lex_state = 2},
  [776] = {.lex_state = 0, .external_lex_state = 2},
  [777] = {.lex_state = 1, .external_lex_state = 7},
  [778] = {.lex_state = 0, .external_lex_state = 2},
  [779] = {.lex_state = 0, .external_lex_state = 2},
  [780] = {.lex_state = 12, .external_lex_state = 7},
  [781] = {.lex_state = 15},
  [782] = {.lex_state = 0, .external_lex_state = 2},
  [783] = {.lex_state = 0, .external_lex_state = 2},
  [784] = {.lex_state = 0, .external_lex_state = 2},
  [785] = {.lex_state = 0, .external_lex_state = 2},
  [786] = {.lex_state = 12, .external_lex_state = 7},
  [787] = {.lex_state = 12, .external_lex_state = 7},
  [788] = {.lex_state = 0, .external_lex_state = 15},
  [789] = {.lex_state = 0, .external_lex_state = 15},
  [790] = {.lex_state = 1, .external_lex_state = 7},
  [791] = {.lex_state = 1, .external_lex_state = 7},
  [792] = {.lex_state = 0, .external_lex_state = 2},
  [793] = {.lex_state = 0, .external_lex_state = 2},
  [794] = {.lex_state = 0, .external_lex_state = 2},
  [795] = {.lex_state = 0, .external_lex_state = 15},
  [796] = {.lex_state = 0, .external_lex_state = 15},
  [797] = {.lex_state = 0, .external_lex_state = 15},
  [798] = {.lex_state = 12, .external_lex_state = 7},
  [799] = {.lex_state = 0, .external_lex_state = 15},
  [800] = {.lex_state = 0, .external_lex_state = 15},
  [801] = {.lex_state = 0, .external_lex_state = 15},
  [802] = {.lex_state = 0, .external_lex_state = 29},
  [803] = {.lex_state = 0, .external_lex_state = 15},
  [804] = {.lex_state = 0, .external_lex_state = 15},
  [805] = {.lex_state = 1},
  [806] = {.lex_state = 12, .external_lex_state = 7},
  [807] = {.lex_state = 0, .external_lex_state = 15},
  [808] = {.lex_state = 0, .external_lex_state = 15},
  [809] = {.lex_state = 0, .external_lex_state = 15},
  [810] = {.lex_state = 0, .external_lex_state = 15},
  [811] = {.lex_state = 0, .external_lex_state = 15},
  [812] = {.lex_state = 1, .external_lex_state = 7},
  [813] = {.lex_state = 0, .external_lex_state = 15},
  [814] = {.lex_state = 0, .external_lex_state = 15},
  [815] = {.lex_state = 0, .external_lex_state = 15},
  [816] = {.lex_state = 12, .external_lex_state = 7},
  [817] = {.lex_state = 0, .external_lex_state = 2},
  [818] = {.lex_state = 0, .external_lex_state = 2},
  [819] = {.lex_state = 0, .external_lex_state = 15},
  [820] = {.lex_state = 0, .external_lex_state = 15},
  [821] = {.lex_state = 12, .external_lex_state = 7},
  [822] = {.lex_state = 12, .external_lex_state = 7},
  [823] = {.lex_state = 0, .external_lex_state = 2},
  [824] = {.lex_state = 0, .external_lex_state = 15},
  [825] = {.lex_state = 0, .external_lex_state = 2},
  [826] = {.lex_state = 0, .external_lex_state = 2},
  [827] = {.lex_state = 0, .external_lex_state = 2},
  [828] = {.lex_state = 0, .external_lex_state = 2},
  [829] = {.lex_state = 1, .external_lex_state = 7},
  [830] = {.lex_state = 1, .external_lex_state = 7},
  [831] = {.lex_state = 0, .external_lex_state = 2},
  [832] = {.lex_state = 0, .external_lex_state = 15},
  [833] = {.lex_state = 0, .external_lex_state = 15},
  [834] = {.lex_state = 0, .external_lex_state = 15},
  [835] = {.lex_state = 0, .external_lex_state = 29},
  [836] = {.lex_state = 0, .external_lex_state = 15},
  [837] = {.lex_state = 0, .external_lex_state = 15},
  [838] = {.lex_state = 0, .external_lex_state = 29},
  [839] = {.lex_state = 0, .external_lex_state = 15},
  [840] = {.lex_state = 0, .external_lex_state = 15},
  [841] = {.lex_state = 0, .external_lex_state = 2},
  [842] = {.lex_state = 0, .external_lex_state = 28},
  [843] = {.lex_state = 0, .external_lex_state = 28},
  [844] = {.lex_state = 7, .external_lex_state = 7},
  [845] = {.lex_state = 14, .external_lex_state = 7},
  [846] = {.lex_state = 0, .external_lex_state = 15},
  [847] = {.lex_state = 72},
  [848] = {.lex_state = 0, .external_lex_state = 15},
  [849] = {.lex_state = 16},
  [850] = {.lex_state = 0, .external_lex_state = 28},
  [851] = {.lex_state = 0, .external_lex_state = 28},
  [852] = {.lex_state = 0, .external_lex_state = 15},
  [853] = {.lex_state = 7, .external_lex_state = 7},
  [854] = {.lex_state = 14, .external_lex_state = 7},
  [855] = {.lex_state = 0, .external_lex_state = 15},
  [856] = {.lex_state = 0, .external_lex_state = 28},
  [857] = {.lex_state = 0, .external_lex_state = 28},
  [858] = {.lex_state = 0, .external_lex_state = 28},
  [859] = {.lex_state = 0, .external_lex_state = 28},
  [860] = {.lex_state = 1},
  [861] = {.lex_state = 0, .external_lex_state = 15},
  [862] = {.lex_state = 0, .external_lex_state = 15},
  [863] = {.lex_state = 0, .external_lex_state = 15},
  [864] = {.lex_state = 0, .external_lex_state = 28},
  [865] = {.lex_state = 1, .external_lex_state = 7},
  [866] = {.lex_state = 1, .external_lex_state = 7},
  [867] = {.lex_state = 0, .external_lex_state = 15},
  [868] = {.lex_state = 0, .external_lex_state = 15},
  [869] = {.lex_state = 12, .external_lex_state = 7},
  [870] = {.lex_state = 0, .external_lex_state = 15},
  [871] = {.lex_state = 12, .external_lex_state = 7},
  [872] = {.lex_state = 0, .external_lex_state = 15},
  [873] = {.lex_state = 0, .external_lex_state = 15},
  [874] = {.lex_state = 0, .external_lex_state = 28},
  [875] = {.lex_state = 0, .external_lex_state = 15},
  [876] = {.lex_state = 1},
  [877] = {.lex_state = 0, .external_lex_state = 24},
  [878] = {.lex_state = 15},
  [879] = {.lex_state = 0, .external_lex_state = 24},
  [880] = {.lex_state = 0, .external_lex_state = 24},
  [881] = {.lex_state = 0, .external_lex_state = 24},
  [882] = {.lex_state = 16},
  [883] = {.lex_state = 15},
  [884] = {.lex_state = 0, .external_lex_state = 26},
  [885] = {.lex_state = 0, .external_lex_state = 7},
  [886] = {.lex_state = 12, .external_lex_state = 7},
  [887] = {.lex_state = 40},
  [888] = {.lex_state = 0, .external_lex_state = 25},
  [889] = {.lex_state = 0, .external_lex_state = 25},
  [890] = {.lex_state = 0, .external_lex_state = 24},
  [891] = {.lex_state = 0, .external_lex_state = 24},
  [892] = {.lex_state = 0, .external_lex_state = 24},
  [893] = {.lex_state = 0, .external_lex_state = 24},
  [894] = {.lex_state = 0, .external_lex_state = 24},
  [895] = {.lex_state = 0, .external_lex_state = 24},
  [896] = {.lex_state = 0, .external_lex_state = 29},
  [897] = {.lex_state = 0, .external_lex_state = 25},
  [898] = {.lex_state = 0, .external_lex_state = 25},
  [899] = {.lex_state = 0, .external_lex_state = 25},
  [900] = {.lex_state = 0, .external_lex_state = 25},
  [901] = {.lex_state = 0, .external_lex_state = 25},
  [902] = {.lex_state = 0, .external_lex_state = 25},
  [903] = {.lex_state = 0, .external_lex_state = 7},
  [904] = {.lex_state = 0, .external_lex_state = 7},
  [905] = {.lex_state = 0, .external_lex_state = 30},
  [906] = {.lex_state = 0, .external_lex_state = 30},
  [907] = {.lex_state = 1},
  [908] = {.lex_state = 0, .external_lex_state = 24},
  [909] = {.lex_state = 0, .external_lex_state = 7},
  [910] = {.lex_state = 0, .external_lex_state = 24},
  [911] = {.lex_state = 0, .external_lex_state = 24},
  [912] = {.lex_state = 0, .external_lex_state = 7},
  [913] = {.lex_state = 0, .external_lex_state = 24},
  [914] = {.lex_state = 0, .external_lex_state = 7},
  [915] = {.lex_state = 1},
  [916] = {.lex_state = 0, .external_lex_state = 7},
  [917] = {.lex_state = 0, .external_lex_state = 7},
  [918] = {.lex_state = 0, .external_lex_state = 24},
  [919] = {.lex_state = 1},
  [920] = {.lex_state = 0, .external_lex_state = 7},
  [921] = {.lex_state = 0, .external_lex_state = 30},
  [922] = {.lex_state = 0, .external_lex_state = 7},
  [923] = {.lex_state = 0, .external_lex_state = 24},
  [924] = {.lex_state = 0, .external_lex_state = 7},
  [925] = {.lex_state = 0, .external_lex_state = 7},
  [926] = {.lex_state = 0, .external_lex_state = 7},
  [927] = {.lex_state = 1},
  [928] = {.lex_state = 0, .external_lex_state = 30},
  [929] = {.lex_state = 0, .external_lex_state = 7},
  [930] = {.lex_state = 0, .external_lex_state = 30},
  [931] = {.lex_state = 0, .external_lex_state = 7},
  [932] = {.lex_state = 0, .external_lex_state = 7},
  [933] = {.lex_state = 0, .external_lex_state = 7},
  [934] = {.lex_state = 1},
  [935] = {.lex_state = 0, .external_lex_state = 7},
  [936] = {.lex_state = 0, .external_lex_state = 7},
  [937] = {.lex_state = 0, .external_lex_state = 7},
  [938] = {.lex_state = 0, .external_lex_state = 7},
  [939] = {.lex_state = 0, .external_lex_state = 7},
  [940] = {.lex_state = 0, .external_lex_state = 7},
  [941] = {.lex_state = 0, .external_lex_state = 7},
  [942] = {.lex_state = 1},
  [943] = {.lex_state = 0, .external_lex_state = 7},
  [944] = {.lex_state = 0, .external_lex_state = 7},
  [945] = {.lex_state = 0, .external_lex_state = 7},
  [946] = {.lex_state = 1},
  [947] = {.lex_state = 1},
  [948] = {.lex_state = 0, .external_lex_state = 7},
  [949] = {.lex_state = 0, .external_lex_state = 7},
  [950] = {.lex_state = 0, .external_lex_state = 7},
  [951] = {.lex_state = 0, .external_lex_state = 7},
  [952] = {.lex_state = 0, .external_lex_state = 7},
  [953] = {.lex_state = 0, .external_lex_state = 7},
  [954] = {.lex_state = 0, .external_lex_state = 7},
  [955] = {.lex_state = 0, .external_lex_state = 7},
  [956] = {.lex_state = 0, .external_lex_state = 7},
  [957] = {.lex_state = 1, .external_lex_state = 7},
  [958] = {.lex_state = 1},
  [959] = {.lex_state = 12, .external_lex_state = 7},
  [960] = {.lex_state = 12, .external_lex_state = 7},
  [961] = {.lex_state = 0, .external_lex_state = 7},
  [962] = {.lex_state = 0, .external_lex_state = 7},
  [963] = {.lex_state = 0, .external_lex_state = 7},
  [964] = {.lex_state = 0, .external_lex_state = 7},
  [965] = {.lex_state = 1, .external_lex_state = 7},
  [966] = {.lex_state = 0, .external_lex_state = 7},
  [967] = {.lex_state = 0, .external_lex_state = 30},
  [968] = {.lex_state = 0, .external_lex_state = 7},
  [969] = {.lex_state = 15},
  [970] = {.lex_state = 0, .external_lex_state = 7},
  [971] = {.lex_state = 0, .external_lex_state = 7},
  [972] = {.lex_state = 0, .external_lex_state = 7},
  [973] = {.lex_state = 0, .external_lex_state = 7},
  [974] = {.lex_state = 0, .external_lex_state = 7},
  [975] = {.lex_state = 5, .external_lex_state = 7},
  [976] = {.lex_state = 0, .external_lex_state = 7},
  [977] = {.lex_state = 0, .external_lex_state = 7},
  [978] = {.lex_state = 0, .external_lex_state = 7},
  [979] = {.lex_state = 0, .external_lex_state = 23},
  [980] = {.lex_state = 1},
  [981] = {.lex_state = 0, .external_lex_state = 7},
  [982] = {.lex_state = 0, .external_lex_state = 7},
  [983] = {.lex_state = 0, .external_lex_state = 7},
  [984] = {.lex_state = 1},
  [985] = {.lex_state = 0, .external_lex_state = 7},
  [986] = {.lex_state = 0, .external_lex_state = 7},
  [987] = {.lex_state = 0, .external_lex_state = 23},
  [988] = {.lex_state = 1},
  [989] = {.lex_state = 0, .external_lex_state = 7},
  [990] = {.lex_state = 0, .external_lex_state = 7},
  [991] = {.lex_state = 1},
  [992] = {.lex_state = 1},
  [993] = {.lex_state = 0, .external_lex_state = 7},
  [994] = {.lex_state = 0, .external_lex_state = 7},
  [995] = {.lex_state = 0, .external_lex_state = 7},
  [996] = {.lex_state = 0, .external_lex_state = 7},
  [997] = {.lex_state = 0, .external_lex_state = 7},
  [998] = {.lex_state = 0, .external_lex_state = 23},
  [999] = {.lex_state = 0, .external_lex_state = 7},
  [1000] = {.lex_state = 0, .external_lex_state = 7},
  [1001] = {.lex_state = 0, .external_lex_state = 7},
  [1002] = {.lex_state = 15},
  [1003] = {.lex_state = 1, .external_lex_state = 7},
  [1004] = {.lex_state = 0, .external_lex_state = 7},
  [1005] = {.lex_state = 0, .external_lex_state = 7},
  [1006] = {.lex_state = 0, .external_lex_state = 7},
  [1007] = {.lex_state = 1},
  [1008] = {.lex_state = 0, .external_lex_state = 7},
  [1009] = {.lex_state = 0, .external_lex_state = 23},
  [1010] = {.lex_state = 0, .external_lex_state = 23},
  [1011] = {.lex_state = 0, .external_lex_state = 7},
  [1012] = {.lex_state = 0, .external_lex_state = 7},
  [1013] = {.lex_state = 0, .external_lex_state = 23},
  [1014] = {.lex_state = 0, .external_lex_state = 23},
  [1015] = {.lex_state = 0, .external_lex_state = 7},
  [1016] = {.lex_state = 0, .external_lex_state = 30},
  [1017] = {.lex_state = 0, .external_lex_state = 7},
  [1018] = {.lex_state = 0, .external_lex_state = 7},
  [1019] = {.lex_state = 1, .external_lex_state = 7},
  [1020] = {.lex_state = 1, .external_lex_state = 7},
  [1021] = {.lex_state = 0, .external_lex_state = 7},
  [1022] = {.lex_state = 1, .external_lex_state = 7},
  [1023] = {.lex_state = 1},
  [1024] = {.lex_state = 0, .external_lex_state = 30},
  [1025] = {.lex_state = 0, .external_lex_state = 30},
  [1026] = {.lex_state = 0, .external_lex_state = 30},
  [1027] = {.lex_state = 0, .external_lex_state = 30},
  [1028] = {.lex_state = 0, .external_lex_state = 23},
  [1029] = {.lex_state = 0, .external_lex_state = 7},
  [1030] = {.lex_state = 1},
  [1031] = {.lex_state = 0, .external_lex_state = 30},
  [1032] = {.lex_state = 0, .external_lex_state = 30},
  [1033] = {.lex_state = 0, .external_lex_state = 30},
  [1034] = {.lex_state = 0, .external_lex_state = 30},
  [1035] = {.lex_state = 1, .external_lex_state = 7},
  [1036] = {.lex_state = 0, .external_lex_state = 7},
  [1037] = {.lex_state = 1, .external_lex_state = 7},
  [1038] = {.lex_state = 0, .external_lex_state = 7},
  [1039] = {.lex_state = 0, .external_lex_state = 29},
  [1040] = {.lex_state = 5, .external_lex_state = 7},
  [1041] = {.lex_state = 0, .external_lex_state = 7},
  [1042] = {.lex_state = 0, .external_lex_state = 30},
  [1043] = {.lex_state = 0, .external_lex_state = 7},
  [1044] = {.lex_state = 0, .external_lex_state = 30},
  [1045] = {.lex_state = 0, .external_lex_state = 30},
  [1046] = {.lex_state = 0, .external_lex_state = 30},
  [1047] = {.lex_state = 0, .external_lex_state = 30},
  [1048] = {.lex_state = 0, .external_lex_state = 29},
  [1049] = {.lex_state = 0, .external_lex_state = 7},
  [1050] = {.lex_state = 0, .external_lex_state = 30},
  [1051] = {.lex_state = 0, .external_lex_state = 7},
  [1052] = {.lex_state = 0, .external_lex_state = 30},
  [1053] = {.lex_state = 0, .external_lex_state = 30},
  [1054] = {.lex_state = 1, .external_lex_state = 7},
  [1055] = {.lex_state = 0, .external_lex_state = 30},
  [1056] = {.lex_state = 0, .external_lex_state = 7},
  [1057] = {.lex_state = 0, .external_lex_state = 29},
  [1058] = {.lex_state = 0, .external_lex_state = 29},
  [1059] = {.lex_state = 1, .external_lex_state = 7},
  [1060] = {.lex_state = 0, .external_lex_state = 7},
  [1061] = {.lex_state = 0, .external_lex_state = 7},
  [1062] = {.lex_state = 0, .external_lex_state = 30},
  [1063] = {.lex_state = 0, .external_lex_state = 7},
  [1064] = {.lex_state = 0, .external_lex_state = 7},
  [1065] = {.lex_state = 0, .external_lex_state = 30},
  [1066] = {.lex_state = 0, .external_lex_state = 7},
  [1067] = {.lex_state = 1},
  [1068] = {.lex_state = 0, .external_lex_state = 29},
  [1069] = {.lex_state = 0, .external_lex_state = 7},
  [1070] = {.lex_state = 0, .external_lex_state = 7},
  [1071] = {.lex_state = 12, .external_lex_state = 7},
  [1072] = {.lex_state = 0, .external_lex_state = 7},
  [1073] = {.lex_state = 0, .external_lex_state = 7},
  [1074] = {.lex_state = 1},
  [1075] = {.lex_state = 0, .external_lex_state = 7},
  [1076] = {.lex_state = 0, .external_lex_state = 7},
  [1077] = {.lex_state = 1},
  [1078] = {.lex_state = 282, .external_lex_state = 31},
  [1079] = {.lex_state = 282, .external_lex_state = 31},
  [1080] = {.lex_state = 1},
  [1081] = {.lex_state = 0, .external_lex_state = 29},
  [1082] = {.lex_state = 0, .external_lex_state = 7},
  [1083] = {.lex_state = 1},
  [1084] = {.lex_state = 1},
  [1085] = {.lex_state = 1},
  [1086] = {.lex_state = 0, .external_lex_state = 7},
  [1087] = {.lex_state = 283},
  [1088] = {.lex_state = 15},
  [1089] = {.lex_state = 0, .external_lex_state = 3},
  [1090] = {.lex_state = 0, .external_lex_state = 7},
  [1091] = {.lex_state = 0, .external_lex_state = 32},
  [1092] = {.lex_state = 0, .external_lex_state = 33},
  [1093] = {.lex_state = 0, .external_lex_state = 3},
  [1094] = {.lex_state = 1},
  [1095] = {.lex_state = 1},
  [1096] = {.lex_state = 0, .external_lex_state = 7},
  [1097] = {.lex_state = 5},
  [1098] = {.lex_state = 0, .external_lex_state = 5},
  [1099] = {.lex_state = 282, .external_lex_state = 31},
  [1100] = {.lex_state = 282, .external_lex_state = 31},
  [1101] = {.lex_state = 1},
  [1102] = {.lex_state = 40},
  [1103] = {.lex_state = 0, .external_lex_state = 7},
  [1104] = {.lex_state = 282, .external_lex_state = 31},
  [1105] = {.lex_state = 282, .external_lex_state = 31},
  [1106] = {.lex_state = 0, .external_lex_state = 32},
  [1107] = {.lex_state = 282, .external_lex_state = 31},
  [1108] = {.lex_state = 282, .external_lex_state = 31},
  [1109] = {.lex_state = 282, .external_lex_state = 31},
  [1110] = {.lex_state = 282, .external_lex_state = 31},
  [1111] = {.lex_state = 0, .external_lex_state = 30},
  [1112] = {.lex_state = 282, .external_lex_state = 31},
  [1113] = {.lex_state = 282, .external_lex_state = 31},
  [1114] = {.lex_state = 282, .external_lex_state = 31},
  [1115] = {.lex_state = 282, .external_lex_state = 31},
  [1116] = {.lex_state = 284},
  [1117] = {.lex_state = 282, .external_lex_state = 31},
  [1118] = {.lex_state = 282, .external_lex_state = 31},
  [1119] = {.lex_state = 282, .external_lex_state = 31},
  [1120] = {.lex_state = 282, .external_lex_state = 31},
  [1121] = {.lex_state = 1},
  [1122] = {.lex_state = 0, .external_lex_state = 32},
  [1123] = {.lex_state = 0, .external_lex_state = 7},
  [1124] = {.lex_state = 40},
  [1125] = {.lex_state = 1},
  [1126] = {.lex_state = 15},
  [1127] = {.lex_state = 0, .external_lex_state = 7},
  [1128] = {.lex_state = 1},
  [1129] = {.lex_state = 1},
  [1130] = {.lex_state = 0, .external_lex_state = 33},
  [1131] = {.lex_state = 0, .external_lex_state = 34},
  [1132] = {.lex_state = 284},
  [1133] = {.lex_state = 0, .external_lex_state = 33},
  [1134] = {.lex_state = 0, .external_lex_state = 34},
  [1135] = {.lex_state = 0, .external_lex_state = 34},
  [1136] = {.lex_state = 0, .external_lex_state = 34},
  [1137] = {.lex_state = 0, .external_lex_state = 34},
  [1138] = {.lex_state = 1},
  [1139] = {.lex_state = 284},
  [1140] = {.lex_state = 1},
  [1141] = {.lex_state = 1},
  [1142] = {.lex_state = 15},
  [1143] = {.lex_state = 284},
  [1144] = {.lex_state = 1},
  [1145] = {.lex_state = 0, .external_lex_state = 33},
  [1146] = {.lex_state = 0, .external_lex_state = 34},
  [1147] = {.lex_state = 0, .external_lex_state = 33},
  [1148] = {.lex_state = 0, .external_lex_state = 34},
  [1149] = {.lex_state = 0, .external_lex_state = 34},
  [1150] = {.lex_state = 1},
  [1151] = {.lex_state = 0, .external_lex_state = 34},
  [1152] = {.lex_state = 1},
  [1153] = {.lex_state = 1},
  [1154] = {.lex_state = 0, .external_lex_state = 34},
  [1155] = {.lex_state = 1},
  [1156] = {.lex_state = 282, .external_lex_state = 31},
  [1157] = {.lex_state = 1},
  [1158] = {.lex_state = 1},
  [1159] = {.lex_state = 1},
  [1160] = {.lex_state = 1},
  [1161] = {.lex_state = 1},
  [1162] = {.lex_state = 0, .external_lex_state = 33},
  [1163] = {.lex_state = 282, .external_lex_state = 31},
  [1164] = {.lex_state = 1},
  [1165] = {.lex_state = 1},
  [1166] = {.lex_state = 1},
  [1167] = {.lex_state = 1},
  [1168] = {.lex_state = 0, .external_lex_state = 30},
  [1169] = {.lex_state = 15},
  [1170] = {.lex_state = 284},
  [1171] = {.lex_state = 1},
  [1172] = {.lex_state = 282, .external_lex_state = 31},
  [1173] = {.lex_state = 1},
  [1174] = {.lex_state = 0, .external_lex_state = 3},
  [1175] = {.lex_state = 1},
  [1176] = {.lex_state = 283},
  [1177] = {.lex_state = 1},
  [1178] = {.lex_state = 15},
  [1179] = {.lex_state = 1},
  [1180] = {.lex_state = 0, .external_lex_state = 34},
  [1181] = {.lex_state = 282, .external_lex_state = 31},
  [1182] = {.lex_state = 15},
  [1183] = {.lex_state = 1},
  [1184] = {.lex_state = 1},
  [1185] = {.lex_state = 1},
  [1186] = {.lex_state = 1},
  [1187] = {.lex_state = 0, .external_lex_state = 7},
  [1188] = {.lex_state = 1},
  [1189] = {.lex_state = 0, .external_lex_state = 29},
  [1190] = {.lex_state = 0, .external_lex_state = 34},
  [1191] = {.lex_state = 1},
  [1192] = {.lex_state = 1},
  [1193] = {.lex_state = 0, .external_lex_state = 32},
  [1194] = {.lex_state = 284},
  [1195] = {.lex_state = 0, .external_lex_state = 35},
  [1196] = {.lex_state = 0, .external_lex_state = 31},
  [1197] = {.lex_state = 0, .external_lex_state = 7},
  [1198] = {.lex_state = 0, .external_lex_state = 7},
  [1199] = {.lex_state = 1},
  [1200] = {.lex_state = 1},
  [1201] = {.lex_state = 1},
  [1202] = {.lex_state = 1},
  [1203] = {.lex_state = 0, .external_lex_state = 35},
  [1204] = {.lex_state = 1},
  [1205] = {.lex_state = 1},
  [1206] = {.lex_state = 40},
  [1207] = {.lex_state = 28},
  [1208] = {.lex_state = 285},
  [1209] = {.lex_state = 286},
  [1210] = {.lex_state = 0, .external_lex_state = 35},
  [1211] = {.lex_state = 1},
  [1212] = {.lex_state = 0, .external_lex_state = 35},
  [1213] = {.lex_state = 1},
  [1214] = {.lex_state = 40},
  [1215] = {.lex_state = 0, .external_lex_state = 31},
  [1216] = {.lex_state = 1},
  [1217] = {.lex_state = 1},
  [1218] = {.lex_state = 1},
  [1219] = {.lex_state = 1},
  [1220] = {.lex_state = 1},
  [1221] = {.lex_state = 285},
  [1222] = {.lex_state = 1},
  [1223] = {.lex_state = 1},
  [1224] = {.lex_state = 0, .external_lex_state = 31},
  [1225] = {.lex_state = 1},
  [1226] = {.lex_state = 0, .external_lex_state = 31},
  [1227] = {.lex_state = 0, .external_lex_state = 7},
  [1228] = {.lex_state = 0, .external_lex_state = 35},
  [1229] = {.lex_state = 0, .external_lex_state = 31},
  [1230] = {.lex_state = 0, .external_lex_state = 35},
  [1231] = {.lex_state = 0, .external_lex_state = 31},
  [1232] = {.lex_state = 1},
  [1233] = {.lex_state = 0, .external_lex_state = 31},
  [1234] = {.lex_state = 0, .external_lex_state = 7},
  [1235] = {.lex_state = 285},
  [1236] = {.lex_state = 1},
  [1237] = {.lex_state = 40},
  [1238] = {.lex_state = 1},
  [1239] = {.lex_state = 0, .external_lex_state = 35},
  [1240] = {.lex_state = 1},
  [1241] = {.lex_state = 40},
  [1242] = {.lex_state = 1},
  [1243] = {.lex_state = 0, .external_lex_state = 7},
  [1244] = {.lex_state = 1},
  [1245] = {.lex_state = 1},
  [1246] = {.lex_state = 1},
  [1247] = {.lex_state = 1},
  [1248] = {.lex_state = 0, .external_lex_state = 35},
  [1249] = {.lex_state = 0, .external_lex_state = 31},
  [1250] = {.lex_state = 0, .external_lex_state = 7},
  [1251] = {.lex_state = 0, .external_lex_state = 31},
  [1252] = {.lex_state = 0, .external_lex_state = 31},
  [1253] = {.lex_state = 0, .external_lex_state = 31},
  [1254] = {.lex_state = 1},
  [1255] = {.lex_state = 0, .external_lex_state = 7},
  [1256] = {.lex_state = 1},
  [1257] = {.lex_state = 0, .external_lex_state = 35},
  [1258] = {.lex_state = 286},
  [1259] = {.lex_state = 0, .external_lex_state = 7},
  [1260] = {.lex_state = 282},
  [1261] = {.lex_state = 0, .external_lex_state = 35},
  [1262] = {.lex_state = 1},
  [1263] = {.lex_state = 1},
  [1264] = {.lex_state = 1},
  [1265] = {.lex_state = 0, .external_lex_state = 31},
  [1266] = {.lex_state = 0, .external_lex_state = 31},
  [1267] = {.lex_state = 0, .external_lex_state = 31},
  [1268] = {.lex_state = 0, .external_lex_state = 7},
  [1269] = {.lex_state = 286},
  [1270] = {.lex_state = 0, .external_lex_state = 31},
  [1271] = {.lex_state = 0, .external_lex_state = 31},
  [1272] = {.lex_state = 0, .external_lex_state = 31},
  [1273] = {.lex_state = 1},
  [1274] = {.lex_state = 0, .external_lex_state = 31},
  [1275] = {.lex_state = 0, .external_lex_state = 31},
  [1276] = {.lex_state = 0, .external_lex_state = 31},
  [1277] = {.lex_state = 0, .external_lex_state = 31},
  [1278] = {.lex_state = 0, .external_lex_state = 31},
  [1279] = {.lex_state = 0, .external_lex_state = 7},
  [1280] = {.lex_state = 0, .external_lex_state = 7},
  [1281] = {.lex_state = 0, .external_lex_state = 31},
  [1282] = {.lex_state = 1},
  [1283] = {.lex_state = 1},
  [1284] = {.lex_state = 0, .external_lex_state = 31},
  [1285] = {.lex_state = 1},
  [1286] = {.lex_state = 0, .external_lex_state = 7},
  [1287] = {.lex_state = 0, .external_lex_state = 7},
  [1288] = {.lex_state = 1},
  [1289] = {.lex_state = 0, .external_lex_state = 31},
  [1290] = {.lex_state = 0, .external_lex_state = 31},
  [1291] = {.lex_state = 1},
  [1292] = {.lex_state = 0, .external_lex_state = 31},
  [1293] = {.lex_state = 1},
  [1294] = {.lex_state = 0, .external_lex_state = 35},
  [1295] = {.lex_state = 1},
  [1296] = {.lex_state = 40},
  [1297] = {.lex_state = 0, .external_lex_state = 7},
  [1298] = {.lex_state = 40},
  [1299] = {.lex_state = 1},
  [1300] = {.lex_state = 0, .external_lex_state = 31},
  [1301] = {.lex_state = 0, .external_lex_state = 35},
  [1302] = {.lex_state = 0, .external_lex_state = 35},
  [1303] = {.lex_state = 0, .external_lex_state = 31},
  [1304] = {.lex_state = 0, .external_lex_state = 31},
  [1305] = {.lex_state = 40},
  [1306] = {.lex_state = 0, .external_lex_state = 31},
  [1307] = {.lex_state = 0, .external_lex_state = 7},
  [1308] = {.lex_state = 0, .external_lex_state = 7},
  [1309] = {.lex_state = 0, .external_lex_state = 35},
  [1310] = {.lex_state = 1},
  [1311] = {.lex_state = 5},
  [1312] = {.lex_state = 1},
  [1313] = {.lex_state = 283},
  [1314] = {.lex_state = 0, .external_lex_state = 31},
  [1315] = {.lex_state = 0, .external_lex_state = 31},
  [1316] = {.lex_state = 1},
  [1317] = {.lex_state = 0, .external_lex_state = 31},
  [1318] = {.lex_state = 0, .external_lex_state = 7},
  [1319] = {.lex_state = 40},
  [1320] = {.lex_state = 1},
  [1321] = {.lex_state = 1},
  [1322] = {.lex_state = 1},
  [1323] = {.lex_state = 0},
  [1324] = {.lex_state = 1},
  [1325] = {.lex_state = 1},
  [1326] = {.lex_state = 0, .external_lex_state = 35},
  [1327] = {.lex_state = 1},
  [1328] = {.lex_state = 1},
  [1329] = {.lex_state = 1},
  [1330] = {.lex_state = 1},
  [1331] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(1323),
    [sym_item] = STATE(126),
    [sym__trivia] = STATE(126),
    [aux_sym_source_file_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_blank_line] = ACTIONS(5),
    [sym__comment_start] = ACTIONS(7),
    [sym__line_start] = ACTIONS(9),
  },
  [2] = {
    [sym__flow_operation] = STATE(692),
    [sym__collection_operation] = STATE(692),
    [sym_let_statement] = STATE(692),
    [sym_exec_statement] = STATE(692),
    [sym__invalid_exec_binding] = STATE(693),
    [sym_run_statement] = STATE(692),
    [sym_implicit_run_statement] = STATE(692),
    [sym__implicit_run_line] = STATE(137),
    [sym_seek_statement] = STATE(692),
    [sym_ask_statement] = STATE(692),
    [sym_generate_statement] = STATE(692),
    [sym_reduce_statement] = STATE(692),
    [sym_map_statement] = STATE(692),
    [sym_keep_statement] = STATE(692),
    [sym_drop_statement] = STATE(692),
    [sym_sort_statement] = STATE(692),
    [sym_repeat_statement] = STATE(692),
    [sym_invalid_flow_reserved_statement] = STATE(692),
    [sym__query_directive_key] = STATE(959),
    [sym__route_directive_key] = STATE(959),
    [sym_directive_key] = STATE(694),
    [sym_role] = STATE(694),
    [sym__flow_reserved_word] = STATE(694),
    [sym__collection_binding_word] = STATE(694),
    [sym__agic_reserved_word] = STATE(694),
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
    [sym_flow_let_keyword] = ACTIONS(31),
    [sym_flow_seek_keyword] = ACTIONS(33),
    [sym_flow_ask_keyword] = ACTIONS(35),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(37),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(39),
    [sym_flow_map_keyword] = ACTIONS(41),
    [sym_flow_keep_keyword] = ACTIONS(43),
    [sym_flow_drop_keyword] = ACTIONS(45),
    [sym_flow_sort_keyword] = ACTIONS(47),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(49),
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
    [sym__flow_raw_text] = ACTIONS(51),
  },
  [3] = {
    [sym__flow_operation] = STATE(692),
    [sym__collection_operation] = STATE(692),
    [sym_let_statement] = STATE(692),
    [sym_exec_statement] = STATE(692),
    [sym__invalid_exec_binding] = STATE(693),
    [sym_run_statement] = STATE(692),
    [sym_implicit_run_statement] = STATE(692),
    [sym__implicit_run_line] = STATE(137),
    [sym_seek_statement] = STATE(692),
    [sym_ask_statement] = STATE(692),
    [sym_generate_statement] = STATE(692),
    [sym_reduce_statement] = STATE(692),
    [sym_map_statement] = STATE(692),
    [sym_keep_statement] = STATE(692),
    [sym_drop_statement] = STATE(692),
    [sym_sort_statement] = STATE(692),
    [sym_repeat_statement] = STATE(692),
    [sym_invalid_flow_reserved_statement] = STATE(692),
    [sym__query_directive_key] = STATE(959),
    [sym__route_directive_key] = STATE(959),
    [sym_directive_key] = STATE(694),
    [sym_role] = STATE(694),
    [sym__flow_reserved_word] = STATE(694),
    [sym__collection_binding_word] = STATE(694),
    [sym__agic_reserved_word] = STATE(694),
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
    [sym_flow_let_keyword] = ACTIONS(31),
    [sym_flow_seek_keyword] = ACTIONS(33),
    [sym_flow_ask_keyword] = ACTIONS(35),
    [sym_flow_scatter_keyword] = ACTIONS(21),
    [sym_flow_storm_keyword] = ACTIONS(21),
    [sym_flow_generate_keyword] = ACTIONS(37),
    [sym_flow_gather_keyword] = ACTIONS(21),
    [sym_flow_settle_keyword] = ACTIONS(21),
    [sym_flow_reduce_keyword] = ACTIONS(39),
    [sym_flow_map_keyword] = ACTIONS(41),
    [sym_flow_keep_keyword] = ACTIONS(43),
    [sym_flow_drop_keyword] = ACTIONS(45),
    [sym_flow_sort_keyword] = ACTIONS(47),
    [sym_flow_rank_keyword] = ACTIONS(21),
    [sym_flow_repeat_keyword] = ACTIONS(49),
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
    [sym__flow_raw_text] = ACTIONS(51),
  },
  [4] = {
    [sym__flow_operation] = STATE(576),
    [sym__collection_operation] = STATE(576),
    [sym_let_statement] = STATE(576),
    [sym_exec_statement] = STATE(576),
    [sym__invalid_exec_binding] = STATE(577),
    [sym_run_statement] = STATE(576),
    [sym_implicit_run_statement] = STATE(576),
    [sym__implicit_run_line] = STATE(110),
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
    [sym__query_directive_key] = STATE(959),
    [sym__route_directive_key] = STATE(959),
    [sym_directive_key] = STATE(771),
    [sym_role] = STATE(771),
    [sym__flow_reserved_word] = STATE(771),
    [sym__collection_binding_word] = STATE(771),
    [sym__agic_reserved_word] = STATE(771),
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
    [sym_with_keyword] = ACTIONS(53),
    [sym_struct_keyword] = ACTIONS(53),
    [sym_psyche_keyword] = ACTIONS(55),
    [sym_skill_keyword] = ACTIONS(55),
    [sym_service_keyword] = ACTIONS(55),
    [sym_prompt_keyword] = ACTIONS(55),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(53),
    [sym_task_keyword] = ACTIONS(53),
    [sym_chore_keyword] = ACTIONS(53),
    [sym_flow_keyword] = ACTIONS(53),
    [sym_pass_keyword] = ACTIONS(53),
    [sym_flow_run_keyword] = ACTIONS(57),
    [sym_flow_exec_keyword] = ACTIONS(59),
    [sym_flow_let_keyword] = ACTIONS(61),
    [sym_flow_seek_keyword] = ACTIONS(63),
    [sym_flow_ask_keyword] = ACTIONS(65),
    [sym_flow_scatter_keyword] = ACTIONS(53),
    [sym_flow_storm_keyword] = ACTIONS(53),
    [sym_flow_generate_keyword] = ACTIONS(67),
    [sym_flow_gather_keyword] = ACTIONS(53),
    [sym_flow_settle_keyword] = ACTIONS(53),
    [sym_flow_reduce_keyword] = ACTIONS(69),
    [sym_flow_map_keyword] = ACTIONS(71),
    [sym_flow_keep_keyword] = ACTIONS(73),
    [sym_flow_drop_keyword] = ACTIONS(75),
    [sym_flow_sort_keyword] = ACTIONS(77),
    [sym_flow_rank_keyword] = ACTIONS(53),
    [sym_flow_repeat_keyword] = ACTIONS(79),
    [sym_flow_until_keyword] = ACTIONS(53),
    [sym_flow_from_keyword] = ACTIONS(53),
    [sym_flow_windowing_keyword] = ACTIONS(53),
    [sym_flow_using_keyword] = ACTIONS(53),
    [sym_flow_if_keyword] = ACTIONS(53),
    [sym_flow_by_keyword] = ACTIONS(53),
    [sym_flow_in_keyword] = ACTIONS(55),
    [sym_flow_lane_keyword] = ACTIONS(55),
    [sym_flow_ascending_keyword] = ACTIONS(53),
    [sym_flow_descending_keyword] = ACTIONS(53),
    [sym_flow_time_keyword] = ACTIONS(55),
    [sym_flow_times_keyword] = ACTIONS(53),
    [sym_flow_par_keyword] = ACTIONS(53),
    [sym_flow_first_keyword] = ACTIONS(53),
    [sym_flow_last_keyword] = ACTIONS(53),
    [sym_flow_top_keyword] = ACTIONS(53),
    [sym_flow_bottom_keyword] = ACTIONS(53),
    [sym_flow_think_keyword] = ACTIONS(53),
    [sym_flow_use_keyword] = ACTIONS(55),
    [sym_thunk_keyword] = ACTIONS(53),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(53),
    [anon_sym_do] = ACTIONS(53),
    [anon_sym_unfold] = ACTIONS(53),
    [anon_sym_each] = ACTIONS(53),
    [anon_sym_fold] = ACTIONS(53),
    [anon_sym_head] = ACTIONS(53),
    [anon_sym_tail] = ACTIONS(53),
    [sym__flow_raw_text] = ACTIONS(81),
  },
  [5] = {
    [sym__flow_operation] = STATE(223),
    [sym__collection_operation] = STATE(223),
    [sym_let_statement] = STATE(223),
    [sym_exec_statement] = STATE(223),
    [sym__invalid_exec_binding] = STATE(224),
    [sym_run_statement] = STATE(223),
    [sym_implicit_run_statement] = STATE(223),
    [sym__implicit_run_line] = STATE(86),
    [sym_seek_statement] = STATE(223),
    [sym_ask_statement] = STATE(223),
    [sym_generate_statement] = STATE(223),
    [sym_reduce_statement] = STATE(223),
    [sym_map_statement] = STATE(223),
    [sym_keep_statement] = STATE(223),
    [sym_drop_statement] = STATE(223),
    [sym_sort_statement] = STATE(223),
    [sym_repeat_statement] = STATE(223),
    [sym_invalid_flow_reserved_statement] = STATE(223),
    [sym__query_directive_key] = STATE(959),
    [sym__route_directive_key] = STATE(959),
    [sym_directive_key] = STATE(806),
    [sym_role] = STATE(806),
    [sym__flow_reserved_word] = STATE(806),
    [sym__collection_binding_word] = STATE(806),
    [sym__agic_reserved_word] = STATE(806),
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
    [sym_with_keyword] = ACTIONS(83),
    [sym_struct_keyword] = ACTIONS(83),
    [sym_psyche_keyword] = ACTIONS(85),
    [sym_skill_keyword] = ACTIONS(85),
    [sym_service_keyword] = ACTIONS(85),
    [sym_prompt_keyword] = ACTIONS(85),
    [sym_context_keyword] = ACTIONS(11),
    [sym_instruct_keyword] = ACTIONS(11),
    [sym_agic_keyword] = ACTIONS(83),
    [sym_task_keyword] = ACTIONS(83),
    [sym_chore_keyword] = ACTIONS(83),
    [sym_flow_keyword] = ACTIONS(83),
    [sym_pass_keyword] = ACTIONS(83),
    [sym_flow_run_keyword] = ACTIONS(87),
    [sym_flow_exec_keyword] = ACTIONS(89),
    [sym_flow_let_keyword] = ACTIONS(91),
    [sym_flow_seek_keyword] = ACTIONS(93),
    [sym_flow_ask_keyword] = ACTIONS(95),
    [sym_flow_scatter_keyword] = ACTIONS(83),
    [sym_flow_storm_keyword] = ACTIONS(83),
    [sym_flow_generate_keyword] = ACTIONS(97),
    [sym_flow_gather_keyword] = ACTIONS(83),
    [sym_flow_settle_keyword] = ACTIONS(83),
    [sym_flow_reduce_keyword] = ACTIONS(99),
    [sym_flow_map_keyword] = ACTIONS(101),
    [sym_flow_keep_keyword] = ACTIONS(103),
    [sym_flow_drop_keyword] = ACTIONS(105),
    [sym_flow_sort_keyword] = ACTIONS(107),
    [sym_flow_rank_keyword] = ACTIONS(83),
    [sym_flow_repeat_keyword] = ACTIONS(109),
    [sym_flow_until_keyword] = ACTIONS(83),
    [sym_flow_from_keyword] = ACTIONS(83),
    [sym_flow_windowing_keyword] = ACTIONS(83),
    [sym_flow_using_keyword] = ACTIONS(83),
    [sym_flow_if_keyword] = ACTIONS(83),
    [sym_flow_by_keyword] = ACTIONS(83),
    [sym_flow_in_keyword] = ACTIONS(85),
    [sym_flow_lane_keyword] = ACTIONS(85),
    [sym_flow_ascending_keyword] = ACTIONS(83),
    [sym_flow_descending_keyword] = ACTIONS(83),
    [sym_flow_time_keyword] = ACTIONS(85),
    [sym_flow_times_keyword] = ACTIONS(83),
    [sym_flow_par_keyword] = ACTIONS(83),
    [sym_flow_first_keyword] = ACTIONS(83),
    [sym_flow_last_keyword] = ACTIONS(83),
    [sym_flow_top_keyword] = ACTIONS(83),
    [sym_flow_bottom_keyword] = ACTIONS(83),
    [sym_flow_think_keyword] = ACTIONS(83),
    [sym_flow_use_keyword] = ACTIONS(85),
    [sym_thunk_keyword] = ACTIONS(83),
    [sym_recall_keyword] = ACTIONS(11),
    [anon_sym_call] = ACTIONS(83),
    [anon_sym_do] = ACTIONS(83),
    [anon_sym_unfold] = ACTIONS(83),
    [anon_sym_each] = ACTIONS(83),
    [anon_sym_fold] = ACTIONS(83),
    [anon_sym_head] = ACTIONS(83),
    [anon_sym_tail] = ACTIONS(83),
    [sym__flow_raw_text] = ACTIONS(111),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(115), 1,
      sym_flow_run_keyword,
    ACTIONS(117), 1,
      sym_flow_seek_keyword,
    ACTIONS(119), 1,
      sym_flow_ask_keyword,
    ACTIONS(121), 1,
      sym_flow_generate_keyword,
    ACTIONS(123), 1,
      sym_flow_reduce_keyword,
    ACTIONS(125), 1,
      sym_flow_map_keyword,
    ACTIONS(127), 1,
      sym_flow_keep_keyword,
    ACTIONS(129), 1,
      sym_flow_drop_keyword,
    ACTIONS(131), 1,
      sym_flow_sort_keyword,
    ACTIONS(133), 1,
      sym_flow_repeat_keyword,
    ACTIONS(135), 1,
      sym_snake_name,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(139), 1,
      sym__exec_binding_start,
    STATE(1084), 1,
      sym_local_name,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(731), 12,
      sym__flow_operation,
      sym__collection_operation,
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
  [61] = 16,
    ACTIONS(135), 1,
      sym_snake_name,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(141), 1,
      sym_flow_run_keyword,
    ACTIONS(143), 1,
      sym_flow_seek_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(147), 1,
      sym_flow_generate_keyword,
    ACTIONS(149), 1,
      sym_flow_reduce_keyword,
    ACTIONS(151), 1,
      sym_flow_map_keyword,
    ACTIONS(153), 1,
      sym_flow_keep_keyword,
    ACTIONS(155), 1,
      sym_flow_drop_keyword,
    ACTIONS(157), 1,
      sym_flow_sort_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(161), 1,
      sym__exec_binding_start,
    STATE(1144), 1,
      sym_local_name,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(230), 12,
      sym__flow_operation,
      sym__collection_operation,
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
  [122] = 16,
    ACTIONS(135), 1,
      sym_snake_name,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(163), 1,
      sym_flow_run_keyword,
    ACTIONS(165), 1,
      sym_flow_seek_keyword,
    ACTIONS(167), 1,
      sym_flow_ask_keyword,
    ACTIONS(169), 1,
      sym_flow_generate_keyword,
    ACTIONS(171), 1,
      sym_flow_reduce_keyword,
    ACTIONS(173), 1,
      sym_flow_map_keyword,
    ACTIONS(175), 1,
      sym_flow_keep_keyword,
    ACTIONS(177), 1,
      sym_flow_drop_keyword,
    ACTIONS(179), 1,
      sym_flow_sort_keyword,
    ACTIONS(181), 1,
      sym_flow_repeat_keyword,
    ACTIONS(183), 1,
      sym__exec_binding_start,
    STATE(1128), 1,
      sym_local_name,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    STATE(583), 12,
      sym__flow_operation,
      sym__collection_operation,
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
  [183] = 12,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(189), 1,
      sym_pass_keyword,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(120), 1,
      sym__unroled_message_line,
    STATE(669), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(668), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(670), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(959), 2,
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
  [233] = 12,
    ACTIONS(25), 1,
      sym_pass_keyword,
    ACTIONS(187), 1,
      anon_sym_tool,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(120), 1,
      sym__unroled_message_line,
    STATE(669), 1,
      sym_role,
    ACTIONS(15), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(185), 2,
      anon_sym_user,
      anon_sym_assistant,
    STATE(668), 2,
      sym_unroled_message,
      sym_invalid_agic_reserved_message,
    STATE(670), 2,
      sym_directive_key,
      sym__agic_reserved_word,
    STATE(959), 2,
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
  [283] = 13,
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
    STATE(721), 12,
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
  [334] = 16,
    ACTIONS(115), 1,
      sym_flow_run_keyword,
    ACTIONS(117), 1,
      sym_flow_seek_keyword,
    ACTIONS(119), 1,
      sym_flow_ask_keyword,
    ACTIONS(127), 1,
      sym_flow_keep_keyword,
    ACTIONS(129), 1,
      sym_flow_drop_keyword,
    ACTIONS(131), 1,
      sym_flow_sort_keyword,
    ACTIONS(133), 1,
      sym_flow_repeat_keyword,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_text_line,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(223), 1,
      sym__exec_binding_start,
    ACTIONS(225), 1,
      sym__collection_binding_start,
    STATE(569), 1,
      sym_text_block,
    STATE(767), 1,
      sym_line_end,
    STATE(833), 1,
      sym_text_inline,
    STATE(834), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [390] = 16,
    ACTIONS(141), 1,
      sym_flow_run_keyword,
    ACTIONS(143), 1,
      sym_flow_seek_keyword,
    ACTIONS(145), 1,
      sym_flow_ask_keyword,
    ACTIONS(153), 1,
      sym_flow_keep_keyword,
    ACTIONS(155), 1,
      sym_flow_drop_keyword,
    ACTIONS(157), 1,
      sym_flow_sort_keyword,
    ACTIONS(159), 1,
      sym_flow_repeat_keyword,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_text_line,
    ACTIONS(229), 1,
      sym__exec_binding_start,
    ACTIONS(231), 1,
      sym__collection_binding_start,
    STATE(265), 1,
      sym_text_inline,
    STATE(332), 1,
      sym_text_block,
    STATE(838), 1,
      sym_line_end,
    STATE(266), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [446] = 16,
    ACTIONS(163), 1,
      sym_flow_run_keyword,
    ACTIONS(165), 1,
      sym_flow_seek_keyword,
    ACTIONS(167), 1,
      sym_flow_ask_keyword,
    ACTIONS(175), 1,
      sym_flow_keep_keyword,
    ACTIONS(177), 1,
      sym_flow_drop_keyword,
    ACTIONS(179), 1,
      sym_flow_sort_keyword,
    ACTIONS(181), 1,
      sym_flow_repeat_keyword,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(233), 1,
      sym_text_line,
    ACTIONS(235), 1,
      sym__exec_binding_start,
    ACTIONS(237), 1,
      sym__collection_binding_start,
    STATE(616), 1,
      sym_text_inline,
    STATE(722), 1,
      sym_text_block,
    STATE(835), 1,
      sym_line_end,
    STATE(617), 8,
      sym__bound_operation,
      sym_run_statement,
      sym_seek_statement,
      sym_ask_statement,
      sym_keep_statement,
      sym_drop_statement,
      sym_sort_statement,
      sym_repeat_statement,
  [502] = 7,
    ACTIONS(239), 1,
      anon_sym_lanes,
    ACTIONS(247), 1,
      sym_recall_keyword,
    STATE(673), 1,
      sym__query_directive_key,
    STATE(1191), 1,
      sym__route_directive_key,
    ACTIONS(243), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(245), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(241), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [531] = 7,
    ACTIONS(249), 1,
      anon_sym_lanes,
    ACTIONS(253), 1,
      sym_recall_keyword,
    STATE(860), 1,
      sym__query_directive_key,
    STATE(1167), 1,
      sym__route_directive_key,
    ACTIONS(243), 2,
      anon_sym_hands,
      anon_sym_handoffs,
    ACTIONS(251), 2,
      sym_context_keyword,
      sym_instruct_keyword,
    ACTIONS(241), 6,
      anon_sym_models,
      anon_sym_tools,
      anon_sym_skills,
      anon_sym_services,
      anon_sym_psyches,
      anon_sym_prompts,
  [560] = 6,
    ACTIONS(37), 1,
      sym_flow_generate_keyword,
    ACTIONS(39), 1,
      sym_flow_reduce_keyword,
    ACTIONS(41), 1,
      sym_flow_map_keyword,
    STATE(871), 1,
      sym__collection_binding_word,
    ACTIONS(255), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(870), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [586] = 6,
    ACTIONS(67), 1,
      sym_flow_generate_keyword,
    ACTIONS(69), 1,
      sym_flow_reduce_keyword,
    ACTIONS(71), 1,
      sym_flow_map_keyword,
    STATE(787), 1,
      sym__collection_binding_word,
    ACTIONS(257), 4,
      sym_flow_scatter_keyword,
      sym_flow_storm_keyword,
      sym_flow_gather_keyword,
      sym_flow_settle_keyword,
    STATE(630), 5,
      sym__collection_operation,
      sym__invalid_collection_operation,
      sym_generate_statement,
      sym_reduce_statement,
      sym_map_statement,
  [612] = 6,
    ACTIONS(97), 1,
      sym_flow_generate_keyword,
    ACTIONS(99), 1,
      sym_flow_reduce_keyword,
    ACTIONS(101), 1,
      sym_flow_map_keyword,
    STATE(822), 1,
      sym__collection_binding_word,
    ACTIONS(259), 4,
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
  [638] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_if_keyword,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    STATE(424), 1,
      sym__named_if_complement,
    STATE(766), 1,
      sym__inline_if_complement,
    STATE(768), 1,
      sym__if_complements,
    STATE(919), 1,
      sym__lanes_complement,
    STATE(920), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [671] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(261), 1,
      sym_flow_if_keyword,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    STATE(424), 1,
      sym__named_if_complement,
    STATE(766), 1,
      sym__inline_if_complement,
    STATE(769), 1,
      sym__if_complements,
    STATE(919), 1,
      sym__lanes_complement,
    STATE(922), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [704] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(267), 1,
      sym_flow_if_keyword,
    STATE(374), 1,
      sym__named_if_complement,
    STATE(587), 1,
      sym__inline_if_complement,
    STATE(588), 1,
      sym__if_complements,
    STATE(934), 1,
      sym__lanes_complement,
    STATE(935), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [737] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(269), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(236), 1,
      sym__if_complements,
    STATE(437), 1,
      sym__named_if_complement,
    STATE(980), 1,
      sym__lanes_complement,
    STATE(982), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [770] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(269), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(235), 1,
      sym__if_complements,
    STATE(437), 1,
      sym__named_if_complement,
    STATE(980), 1,
      sym__lanes_complement,
    STATE(981), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [803] = 10,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(267), 1,
      sym_flow_if_keyword,
    STATE(374), 1,
      sym__named_if_complement,
    STATE(587), 1,
      sym__inline_if_complement,
    STATE(589), 1,
      sym__if_complements,
    STATE(934), 1,
      sym__lanes_complement,
    STATE(936), 1,
      sym_position,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(265), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [836] = 2,
    ACTIONS(273), 3,
      sym_newline,
      sym__exec_binding_start,
      sym__collection_binding_start,
    ACTIONS(271), 9,
      sym__inline_comment,
      sym_flow_run_keyword,
      sym_flow_seek_keyword,
      sym_flow_ask_keyword,
      sym_flow_keep_keyword,
      sym_flow_drop_keyword,
      sym_flow_sort_keyword,
      sym_flow_repeat_keyword,
      sym_text_line,
  [853] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1175), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [877] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1236), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [901] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1232), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [925] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1285), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [949] = 6,
    ACTIONS(281), 1,
      sym_pascal_name,
    STATE(476), 1,
      sym_base_type,
    STATE(1005), 1,
      sym_type,
    STATE(1022), 1,
      sym_type_name,
    STATE(1020), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(279), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [973] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1217), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [997] = 6,
    ACTIONS(281), 1,
      sym_pascal_name,
    STATE(476), 1,
      sym_base_type,
    STATE(1022), 1,
      sym_type_name,
    STATE(1051), 1,
      sym_type,
    STATE(1020), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(279), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1021] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1291), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1045] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1177), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1069] = 10,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(291), 1,
      sym_newline,
    STATE(372), 1,
      sym__lanes_complement,
    STATE(585), 1,
      sym__runnable_complements,
    STATE(586), 1,
      sym_inline_agic,
    STATE(933), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1101] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1299), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1125] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1200), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1149] = 10,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(293), 1,
      sym_arrow,
    ACTIONS(295), 1,
      sym_colon,
    STATE(232), 1,
      sym__runnable_complements,
    STATE(233), 1,
      sym_inline_agic,
    STATE(435), 1,
      sym__lanes_complement,
    STATE(977), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1181] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1256), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1205] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1247), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1229] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1218), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1253] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1219), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1277] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1244), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1301] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1245), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1325] = 10,
    ACTIONS(263), 1,
      sym_flow_in_keyword,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(297), 1,
      sym_arrow,
    ACTIONS(299), 1,
      sym_colon,
    STATE(421), 1,
      sym__lanes_complement,
    STATE(760), 1,
      sym__runnable_complements,
    STATE(762), 1,
      sym_inline_agic,
    STATE(912), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1357] = 6,
    ACTIONS(277), 1,
      sym_pascal_name,
    STATE(208), 1,
      sym_base_type,
    STATE(697), 1,
      sym_type_name,
    STATE(1225), 1,
      sym_type,
    STATE(696), 2,
      sym_builtin_type,
      sym_user_type,
    ACTIONS(275), 5,
      anon_sym_Text,
      anon_sym_Number,
      anon_sym_Boolean,
      anon_sym_Json,
      anon_sym_Part,
  [1381] = 9,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    STATE(483), 1,
      sym_property,
    STATE(1212), 1,
      sym_cap_body,
    STATE(1326), 1,
      sym__cap_text_body,
    STATE(81), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1410] = 9,
    ACTIONS(301), 1,
      sym_blank_line,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(311), 1,
      sym__dedent,
    STATE(483), 1,
      sym_property,
    STATE(1248), 1,
      sym_cap_body,
    STATE(1326), 1,
      sym__cap_text_body,
    STATE(81), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1439] = 9,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(313), 1,
      sym_blank_line,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(483), 1,
      sym_property,
    STATE(1309), 1,
      sym_cap_body,
    STATE(1326), 1,
      sym__cap_text_body,
    STATE(49), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1468] = 9,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(317), 1,
      sym_blank_line,
    ACTIONS(319), 1,
      sym__dedent,
    STATE(483), 1,
      sym_property,
    STATE(1195), 1,
      sym_cap_body,
    STATE(1326), 1,
      sym__cap_text_body,
    STATE(48), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [1497] = 8,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(323), 1,
      sym__other_integer_literal,
    ACTIONS(325), 1,
      sym_flow_windowing_keyword,
    ACTIONS(327), 1,
      sym_colon,
    STATE(927), 1,
      sym__repeat_count_complement,
    STATE(1254), 1,
      sym__window_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [1523] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(424), 1,
      sym__named_if_complement,
    STATE(766), 1,
      sym__inline_if_complement,
    STATE(768), 1,
      sym__if_complements,
    STATE(919), 1,
      sym__lanes_complement,
    STATE(920), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1549] = 7,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(335), 1,
      sym_blank_line,
    ACTIONS(337), 1,
      sym__dedent,
    STATE(1210), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1573] = 8,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(339), 1,
      sym_arrow,
    ACTIONS(341), 1,
      sym_colon,
    STATE(144), 1,
      sym__reduce_inline_block,
    STATE(231), 1,
      sym__reduce_inline_line,
    STATE(812), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1599] = 8,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    STATE(424), 1,
      sym__named_if_complement,
    STATE(766), 1,
      sym__inline_if_complement,
    STATE(769), 1,
      sym__if_complements,
    STATE(919), 1,
      sym__lanes_complement,
    STATE(922), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1625] = 7,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(337), 1,
      sym__dedent,
    ACTIONS(343), 1,
      sym_blank_line,
    STATE(1210), 1,
      sym__cap_text_body,
    STATE(63), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1649] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(374), 1,
      sym__named_if_complement,
    STATE(587), 1,
      sym__inline_if_complement,
    STATE(589), 1,
      sym__if_complements,
    STATE(934), 1,
      sym__lanes_complement,
    STATE(936), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1675] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(347), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(235), 1,
      sym__if_complements,
    STATE(437), 1,
      sym__named_if_complement,
    STATE(980), 1,
      sym__lanes_complement,
    STATE(981), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1701] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(347), 1,
      sym_flow_if_keyword,
    STATE(234), 1,
      sym__inline_if_complement,
    STATE(236), 1,
      sym__if_complements,
    STATE(437), 1,
      sym__named_if_complement,
    STATE(980), 1,
      sym__lanes_complement,
    STATE(982), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1727] = 7,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(349), 1,
      sym_blank_line,
    ACTIONS(351), 1,
      sym__dedent,
    STATE(1239), 1,
      sym__cap_text_body,
    STATE(54), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1751] = 8,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(353), 1,
      sym_arrow,
    ACTIONS(355), 1,
      sym_colon,
    STATE(92), 1,
      sym__reduce_inline_block,
    STATE(749), 1,
      sym__reduce_inline_line,
    STATE(759), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1777] = 7,
    ACTIONS(303), 1,
      sym__comment_start,
    ACTIONS(307), 1,
      sym__line_start,
    ACTIONS(309), 1,
      sym__cap_text_start,
    ACTIONS(335), 1,
      sym_blank_line,
    ACTIONS(357), 1,
      sym__dedent,
    STATE(1230), 1,
      sym__cap_text_body,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [1801] = 8,
    ACTIONS(285), 1,
      sym_flow_using_keyword,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(359), 1,
      sym_arrow,
    ACTIONS(361), 1,
      sym_colon,
    STATE(130), 1,
      sym__reduce_inline_block,
    STATE(584), 1,
      sym__reduce_inline_line,
    STATE(777), 1,
      sym__named_using_complement,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [1827] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(374), 1,
      sym__named_if_complement,
    STATE(587), 1,
      sym__inline_if_complement,
    STATE(588), 1,
      sym__if_complements,
    STATE(934), 1,
      sym__lanes_complement,
    STATE(935), 1,
      sym_position,
    ACTIONS(333), 2,
      sym_flow_first_keyword,
      sym_flow_last_keyword,
  [1853] = 8,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(323), 1,
      sym__other_integer_literal,
    ACTIONS(325), 1,
      sym_flow_windowing_keyword,
    ACTIONS(363), 1,
      sym_colon,
    STATE(876), 1,
      sym__repeat_count_complement,
    STATE(1327), 1,
      sym__window_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [1879] = 8,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(323), 1,
      sym__other_integer_literal,
    ACTIONS(325), 1,
      sym_flow_windowing_keyword,
    ACTIONS(365), 1,
      sym_colon,
    STATE(1074), 1,
      sym__repeat_count_complement,
    STATE(1330), 1,
      sym__window_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [1905] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    STATE(232), 1,
      sym__runnable_complements,
    STATE(233), 1,
      sym_inline_agic,
    STATE(435), 1,
      sym__lanes_complement,
    STATE(977), 1,
      sym__named_using_complement,
  [1930] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(293), 1,
      sym_arrow,
    ACTIONS(295), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(228), 1,
      sym_inline_agic,
    STATE(970), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [1953] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(293), 1,
      sym_arrow,
    ACTIONS(295), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(229), 1,
      sym_inline_agic,
    STATE(971), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [1976] = 5,
    ACTIONS(375), 1,
      sym_blank_line,
    ACTIONS(378), 1,
      sym__comment_start,
    ACTIONS(383), 1,
      sym__line_start,
    ACTIONS(381), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [1995] = 5,
    ACTIONS(386), 1,
      sym_blank_line,
    ACTIONS(391), 1,
      sym__flow_raw_text,
    STATE(72), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(171), 1,
      sym__implicit_run_line,
    ACTIONS(389), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2014] = 5,
    ACTIONS(394), 1,
      sym_blank_line,
    ACTIONS(397), 1,
      sym__comment_start,
    ACTIONS(402), 1,
      sym__directive_start,
    ACTIONS(400), 2,
      sym__dedent,
      sym__line_start,
    STATE(73), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2033] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(581), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [2056] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(297), 1,
      sym_arrow,
    ACTIONS(299), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(875), 1,
      sym_inline_agic,
    STATE(1036), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [2079] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(297), 1,
      sym_arrow,
    ACTIONS(299), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(720), 1,
      sym_inline_agic,
    STATE(1038), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [2102] = 7,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(287), 1,
      sym_arrow,
    ACTIONS(289), 1,
      sym_colon,
    ACTIONS(373), 1,
      sym_snake_name,
    STATE(582), 1,
      sym_inline_agic,
    STATE(926), 1,
      sym_runnable,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [2125] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    STATE(421), 1,
      sym__lanes_complement,
    STATE(760), 1,
      sym__runnable_complements,
    STATE(762), 1,
      sym_inline_agic,
    STATE(912), 1,
      sym__named_using_complement,
  [2150] = 5,
    ACTIONS(409), 1,
      sym_blank_line,
    ACTIONS(412), 1,
      sym__comment_start,
    ACTIONS(417), 1,
      sym__line_start,
    ACTIONS(415), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(79), 3,
      sym__trivia,
      sym_property,
      aux_sym_job_body_repeat1,
  [2169] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    STATE(233), 1,
      sym_inline_agic,
    STATE(247), 1,
      sym__runnable_complements,
    STATE(435), 1,
      sym__lanes_complement,
    STATE(977), 1,
      sym__named_using_complement,
  [2194] = 6,
    ACTIONS(420), 1,
      sym_blank_line,
    ACTIONS(423), 1,
      sym__comment_start,
    ACTIONS(428), 1,
      sym__line_start,
    STATE(483), 1,
      sym_property,
    ACTIONS(426), 2,
      sym__dedent,
      sym__cap_text_start,
    STATE(81), 2,
      sym__trivia,
      aux_sym__cap_definition_repeat1,
  [2215] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    STATE(421), 1,
      sym__lanes_complement,
    STATE(762), 1,
      sym_inline_agic,
    STATE(801), 1,
      sym__runnable_complements,
    STATE(912), 1,
      sym__named_using_complement,
  [2240] = 5,
    ACTIONS(431), 1,
      sym_blank_line,
    ACTIONS(433), 1,
      sym__comment_start,
    ACTIONS(437), 1,
      sym__directive_start,
    ACTIONS(435), 2,
      sym__dedent,
      sym__line_start,
    STATE(89), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2259] = 5,
    ACTIONS(439), 1,
      sym_blank_line,
    ACTIONS(441), 1,
      sym__comment_start,
    ACTIONS(445), 1,
      sym__line_start,
    ACTIONS(443), 2,
      sym__dedent,
      sym__until_start,
    STATE(87), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2278] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(372), 1,
      sym__lanes_complement,
    STATE(585), 1,
      sym__runnable_complements,
    STATE(586), 1,
      sym_inline_agic,
    STATE(933), 1,
      sym__named_using_complement,
  [2303] = 5,
    ACTIONS(111), 1,
      sym__flow_raw_text,
    ACTIONS(451), 1,
      sym_blank_line,
    STATE(90), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(171), 1,
      sym__implicit_run_line,
    ACTIONS(453), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2322] = 5,
    ACTIONS(441), 1,
      sym__comment_start,
    ACTIONS(445), 1,
      sym__line_start,
    ACTIONS(455), 1,
      sym_blank_line,
    ACTIONS(457), 2,
      sym__dedent,
      sym__until_start,
    STATE(71), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2341] = 8,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(372), 1,
      sym__lanes_complement,
    STATE(586), 1,
      sym_inline_agic,
    STATE(599), 1,
      sym__runnable_complements,
    STATE(933), 1,
      sym__named_using_complement,
  [2366] = 5,
    ACTIONS(433), 1,
      sym__comment_start,
    ACTIONS(437), 1,
      sym__directive_start,
    ACTIONS(459), 1,
      sym_blank_line,
    ACTIONS(461), 2,
      sym__dedent,
      sym__line_start,
    STATE(73), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2385] = 5,
    ACTIONS(111), 1,
      sym__flow_raw_text,
    ACTIONS(463), 1,
      sym_blank_line,
    STATE(72), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(171), 1,
      sym__implicit_run_line,
    ACTIONS(465), 4,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2404] = 6,
    ACTIONS(467), 1,
      sym_blank_line,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(471), 1,
      sym__dedent,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(458), 1,
      sym__until_complement,
    STATE(459), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2424] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(475), 1,
      sym_blank_line,
    ACTIONS(477), 1,
      sym__dedent,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(225), 1,
      sym__from_complement,
    STATE(226), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2444] = 5,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    ACTIONS(481), 1,
      sym_blank_line,
    STATE(99), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(484), 1,
      sym__implicit_run_line,
    ACTIONS(465), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2462] = 5,
    ACTIONS(381), 1,
      sym__dedent,
    ACTIONS(483), 1,
      sym_blank_line,
    ACTIONS(486), 1,
      sym__comment_start,
    ACTIONS(489), 1,
      sym__line_start,
    STATE(94), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2480] = 5,
    ACTIONS(494), 1,
      sym_blank_line,
    ACTIONS(496), 1,
      sym__comment_start,
    ACTIONS(498), 1,
      sym__indent,
    ACTIONS(492), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(107), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2498] = 5,
    ACTIONS(500), 1,
      sym_blank_line,
    ACTIONS(503), 1,
      sym__comment_start,
    ACTIONS(506), 1,
      sym__dedent,
    ACTIONS(508), 1,
      sym__line_start,
    STATE(96), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2516] = 5,
    ACTIONS(511), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(515), 1,
      sym__dedent,
    ACTIONS(517), 1,
      sym__line_start,
    STATE(96), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2534] = 5,
    ACTIONS(519), 1,
      sym_blank_line,
    ACTIONS(524), 1,
      sym__agic_raw_text,
    STATE(98), 1,
      aux_sym_unroled_message_repeat1,
    STATE(519), 1,
      sym__unroled_message_line,
    ACTIONS(522), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2552] = 5,
    ACTIONS(527), 1,
      sym_blank_line,
    ACTIONS(530), 1,
      sym__flow_raw_text,
    STATE(99), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(484), 1,
      sym__implicit_run_line,
    ACTIONS(389), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2570] = 7,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(683), 1,
      sym_line_end,
    STATE(684), 1,
      sym_context_body,
    STATE(685), 1,
      sym_text_inline,
    STATE(688), 1,
      sym_text_block,
  [2592] = 5,
    ACTIONS(443), 1,
      sym__dedent,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(535), 1,
      sym_blank_line,
    ACTIONS(537), 1,
      sym__line_start,
    STATE(139), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2610] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(539), 1,
      sym_blank_line,
    ACTIONS(541), 1,
      sym__dedent,
    STATE(419), 1,
      sym__until_complement,
    STATE(420), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2630] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(543), 1,
      sym_blank_line,
    ACTIONS(545), 1,
      sym__dedent,
    STATE(431), 1,
      sym__until_complement,
    STATE(432), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2650] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(547), 1,
      sym_blank_line,
    ACTIONS(549), 1,
      sym__dedent,
    STATE(434), 1,
      sym__until_complement,
    STATE(438), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2670] = 5,
    ACTIONS(553), 1,
      sym__module_doc_start,
    ACTIONS(555), 1,
      sym__item_doc_start,
    ACTIONS(557), 1,
      sym__param_item_doc_start,
    ACTIONS(551), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(716), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [2688] = 5,
    ACTIONS(435), 1,
      sym__line_start,
    ACTIONS(559), 1,
      sym_blank_line,
    ACTIONS(561), 1,
      sym__comment_start,
    ACTIONS(563), 1,
      sym__directive_start,
    STATE(109), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2706] = 4,
    ACTIONS(567), 1,
      sym_blank_line,
    ACTIONS(570), 1,
      sym__comment_start,
    STATE(107), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
    ACTIONS(565), 3,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [2722] = 5,
    ACTIONS(443), 1,
      sym__until_start,
    ACTIONS(573), 1,
      sym_blank_line,
    ACTIONS(575), 1,
      sym__comment_start,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(111), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2740] = 5,
    ACTIONS(461), 1,
      sym__line_start,
    ACTIONS(561), 1,
      sym__comment_start,
    ACTIONS(563), 1,
      sym__directive_start,
    ACTIONS(579), 1,
      sym_blank_line,
    STATE(112), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2758] = 5,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    ACTIONS(581), 1,
      sym_blank_line,
    STATE(113), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(494), 1,
      sym__implicit_run_line,
    ACTIONS(453), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2776] = 5,
    ACTIONS(457), 1,
      sym__until_start,
    ACTIONS(575), 1,
      sym__comment_start,
    ACTIONS(577), 1,
      sym__line_start,
    ACTIONS(583), 1,
      sym_blank_line,
    STATE(114), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2794] = 5,
    ACTIONS(400), 1,
      sym__line_start,
    ACTIONS(585), 1,
      sym_blank_line,
    ACTIONS(588), 1,
      sym__comment_start,
    ACTIONS(591), 1,
      sym__directive_start,
    STATE(112), 3,
      sym__trivia,
      sym_directive,
      aux_sym__directives_repeat1,
  [2812] = 5,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    ACTIONS(594), 1,
      sym_blank_line,
    STATE(115), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(494), 1,
      sym__implicit_run_line,
    ACTIONS(465), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2830] = 5,
    ACTIONS(381), 1,
      sym__until_start,
    ACTIONS(596), 1,
      sym_blank_line,
    ACTIONS(599), 1,
      sym__comment_start,
    ACTIONS(602), 1,
      sym__line_start,
    STATE(114), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [2848] = 5,
    ACTIONS(605), 1,
      sym_blank_line,
    ACTIONS(608), 1,
      sym__flow_raw_text,
    STATE(115), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(494), 1,
      sym__implicit_run_line,
    ACTIONS(389), 3,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [2866] = 6,
    ACTIONS(563), 1,
      sym__directive_start,
    ACTIONS(611), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(106), 1,
      sym_directive,
    STATE(967), 1,
      sym__directives,
    STATE(1294), 2,
      sym_statements,
      sym__pass_statement,
  [2886] = 5,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(517), 1,
      sym__line_start,
    ACTIONS(613), 1,
      sym_blank_line,
    ACTIONS(615), 1,
      sym__dedent,
    STATE(140), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [2904] = 7,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(683), 1,
      sym_line_end,
    STATE(688), 1,
      sym_text_block,
    STATE(689), 1,
      sym_instruct_body,
    STATE(690), 1,
      sym_text_inline,
  [2926] = 3,
    ACTIONS(111), 1,
      sym__flow_raw_text,
    STATE(176), 1,
      sym__implicit_run_line,
    ACTIONS(465), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2940] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(617), 1,
      sym_blank_line,
    STATE(143), 1,
      aux_sym_unroled_message_repeat1,
    STATE(519), 1,
      sym__unroled_message_line,
    ACTIONS(619), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [2958] = 3,
    ACTIONS(111), 1,
      sym__flow_raw_text,
    STATE(176), 1,
      sym__implicit_run_line,
    ACTIONS(621), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [2972] = 5,
    ACTIONS(496), 1,
      sym__comment_start,
    ACTIONS(625), 1,
      sym_blank_line,
    ACTIONS(627), 1,
      sym__indent,
    ACTIONS(623), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(142), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [2990] = 5,
    ACTIONS(631), 1,
      sym__module_doc_start,
    ACTIONS(633), 1,
      sym__item_doc_start,
    ACTIONS(635), 1,
      sym__param_item_doc_start,
    ACTIONS(629), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(979), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3008] = 5,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(637), 1,
      sym_blank_line,
    ACTIONS(639), 1,
      sym__dedent,
    ACTIONS(641), 1,
      sym__line_start,
    STATE(159), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3026] = 6,
    ACTIONS(437), 1,
      sym__directive_start,
    ACTIONS(643), 1,
      sym__line_start,
    STATE(83), 1,
      sym_directive,
    STATE(160), 1,
      sym_message,
    STATE(529), 1,
      sym__directives,
    STATE(1261), 2,
      sym_messages,
      sym__pass_statement,
  [3046] = 5,
    ACTIONS(7), 1,
      sym__comment_start,
    ACTIONS(9), 1,
      sym__line_start,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    ACTIONS(647), 1,
      sym_blank_line,
    STATE(127), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3064] = 5,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
    ACTIONS(651), 1,
      sym_blank_line,
    ACTIONS(654), 1,
      sym__comment_start,
    ACTIONS(657), 1,
      sym__line_start,
    STATE(127), 3,
      sym_item,
      sym__trivia,
      aux_sym_source_file_repeat1,
  [3082] = 5,
    ACTIONS(496), 1,
      sym__comment_start,
    ACTIONS(662), 1,
      sym_blank_line,
    ACTIONS(664), 1,
      sym__indent,
    ACTIONS(660), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3100] = 6,
    ACTIONS(563), 1,
      sym__directive_start,
    ACTIONS(611), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(106), 1,
      sym_directive,
    STATE(905), 1,
      sym__directives,
    STATE(1301), 2,
      sym_statements,
      sym__pass_statement,
  [3120] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(479), 1,
      sym__from_start,
    ACTIONS(666), 1,
      sym_blank_line,
    ACTIONS(668), 1,
      sym__dedent,
    STATE(377), 1,
      sym__from_complement,
    STATE(378), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3140] = 7,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(683), 1,
      sym_line_end,
    STATE(685), 1,
      sym_text_inline,
    STATE(688), 1,
      sym_text_block,
    STATE(758), 1,
      sym_context_body,
  [3162] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(670), 1,
      sym_blank_line,
    ACTIONS(672), 1,
      sym__dedent,
    STATE(393), 1,
      sym__until_complement,
    STATE(394), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3182] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(674), 1,
      sym_blank_line,
    ACTIONS(676), 1,
      sym__dedent,
    STATE(402), 1,
      sym__until_complement,
    STATE(403), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3202] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(678), 1,
      sym_blank_line,
    ACTIONS(680), 1,
      sym__dedent,
    STATE(404), 1,
      sym__until_complement,
    STATE(405), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3222] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(682), 1,
      sym_blank_line,
    ACTIONS(684), 1,
      sym__dedent,
    STATE(410), 1,
      sym__until_complement,
    STATE(411), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3242] = 5,
    ACTIONS(688), 1,
      sym__module_doc_start,
    ACTIONS(690), 1,
      sym__item_doc_start,
    ACTIONS(692), 1,
      sym__param_item_doc_start,
    ACTIONS(686), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(520), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3260] = 5,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    ACTIONS(694), 1,
      sym_blank_line,
    STATE(93), 1,
      aux_sym_implicit_run_statement_repeat1,
    STATE(484), 1,
      sym__implicit_run_line,
    ACTIONS(453), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3278] = 7,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(533), 1,
      sym_text_line,
    STATE(683), 1,
      sym_line_end,
    STATE(688), 1,
      sym_text_block,
    STATE(690), 1,
      sym_text_inline,
    STATE(761), 1,
      sym_instruct_body,
  [3300] = 5,
    ACTIONS(457), 1,
      sym__dedent,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(537), 1,
      sym__line_start,
    ACTIONS(696), 1,
      sym_blank_line,
    STATE(94), 3,
      sym__trivia,
      sym__flow_statement,
      aux_sym_statements_repeat1,
  [3318] = 5,
    ACTIONS(511), 1,
      sym_blank_line,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(517), 1,
      sym__line_start,
    ACTIONS(698), 1,
      sym__dedent,
    STATE(96), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3336] = 5,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(517), 1,
      sym__line_start,
    ACTIONS(698), 1,
      sym__dedent,
    ACTIONS(700), 1,
      sym_blank_line,
    STATE(97), 3,
      sym__trivia,
      sym_field,
      aux_sym_struct_body_repeat2,
  [3354] = 5,
    ACTIONS(494), 1,
      sym_blank_line,
    ACTIONS(496), 1,
      sym__comment_start,
    ACTIONS(704), 1,
      sym__indent,
    ACTIONS(702), 2,
      sym__line_start,
      ts_builtin_sym_end,
    STATE(107), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3372] = 5,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    ACTIONS(706), 1,
      sym_blank_line,
    STATE(98), 1,
      aux_sym_unroled_message_repeat1,
    STATE(519), 1,
      sym__unroled_message_line,
    ACTIONS(708), 3,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3390] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(479), 1,
      sym__from_start,
    ACTIONS(710), 1,
      sym_blank_line,
    ACTIONS(712), 1,
      sym__dedent,
    STATE(440), 1,
      sym__from_complement,
    STATE(441), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3410] = 4,
    STATE(790), 1,
      sym_recall_source,
    STATE(956), 1,
      sym_recall_value,
    ACTIONS(714), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(716), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3426] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(718), 1,
      sym_blank_line,
    ACTIONS(720), 1,
      sym__dedent,
    STATE(456), 1,
      sym__until_complement,
    STATE(457), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3446] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(722), 1,
      sym_blank_line,
    ACTIONS(724), 1,
      sym__dedent,
    STATE(465), 1,
      sym__until_complement,
    STATE(466), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3466] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(726), 1,
      sym_blank_line,
    ACTIONS(728), 1,
      sym__dedent,
    STATE(467), 1,
      sym__until_complement,
    STATE(468), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3486] = 6,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(473), 1,
      sym__until_start,
    ACTIONS(730), 1,
      sym_blank_line,
    ACTIONS(732), 1,
      sym__dedent,
    STATE(473), 1,
      sym__until_complement,
    STATE(474), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3506] = 5,
    ACTIONS(736), 1,
      sym__module_doc_start,
    ACTIONS(738), 1,
      sym__item_doc_start,
    ACTIONS(740), 1,
      sym__param_item_doc_start,
    ACTIONS(734), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(316), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3524] = 5,
    ACTIONS(744), 1,
      sym__module_doc_start,
    ACTIONS(746), 1,
      sym__item_doc_start,
    ACTIONS(748), 1,
      sym__param_item_doc_start,
    ACTIONS(742), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(326), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3542] = 5,
    ACTIONS(752), 1,
      sym__module_doc_start,
    ACTIONS(754), 1,
      sym__item_doc_start,
    ACTIONS(756), 1,
      sym__param_item_doc_start,
    ACTIONS(750), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(735), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3560] = 5,
    ACTIONS(760), 1,
      sym__module_doc_start,
    ACTIONS(762), 1,
      sym__item_doc_start,
    ACTIONS(764), 1,
      sym__param_item_doc_start,
    ACTIONS(758), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(743), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3578] = 5,
    ACTIONS(768), 1,
      sym__module_doc_start,
    ACTIONS(770), 1,
      sym__item_doc_start,
    ACTIONS(772), 1,
      sym__param_item_doc_start,
    ACTIONS(766), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(890), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3596] = 5,
    ACTIONS(776), 1,
      sym__module_doc_start,
    ACTIONS(778), 1,
      sym__item_doc_start,
    ACTIONS(780), 1,
      sym__param_item_doc_start,
    ACTIONS(774), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(897), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3614] = 5,
    ACTIONS(784), 1,
      sym__module_doc_start,
    ACTIONS(786), 1,
      sym__item_doc_start,
    ACTIONS(788), 1,
      sym__param_item_doc_start,
    ACTIONS(782), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(752), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3632] = 5,
    ACTIONS(792), 1,
      sym__module_doc_start,
    ACTIONS(794), 1,
      sym__item_doc_start,
    ACTIONS(796), 1,
      sym__param_item_doc_start,
    ACTIONS(790), 2,
      sym_plain_comment,
      sym_shebang_comment,
    STATE(342), 2,
      sym_module_doc_comment,
      sym_item_doc_comment,
  [3650] = 4,
    STATE(790), 1,
      sym_recall_source,
    STATE(939), 1,
      sym_recall_value,
    ACTIONS(714), 2,
      anon_sym_far,
      anon_sym_near,
    ACTIONS(716), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [3666] = 5,
    ACTIONS(798), 1,
      sym_blank_line,
    ACTIONS(801), 1,
      sym__comment_start,
    ACTIONS(804), 1,
      sym__dedent,
    ACTIONS(806), 1,
      sym__line_start,
    STATE(159), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3684] = 5,
    ACTIONS(513), 1,
      sym__comment_start,
    ACTIONS(641), 1,
      sym__line_start,
    ACTIONS(809), 1,
      sym_blank_line,
    ACTIONS(811), 1,
      sym__dedent,
    STATE(124), 3,
      sym__trivia,
      sym_message,
      aux_sym_messages_repeat1,
  [3702] = 6,
    ACTIONS(437), 1,
      sym__directive_start,
    ACTIONS(643), 1,
      sym__line_start,
    STATE(83), 1,
      sym_directive,
    STATE(160), 1,
      sym_message,
    STATE(677), 1,
      sym__directives,
    STATE(1257), 2,
      sym_messages,
      sym__pass_statement,
  [3722] = 6,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(813), 1,
      sym_arrow,
    ACTIONS(815), 1,
      sym_colon,
    STATE(130), 1,
      sym__reduce_inline_block,
    STATE(584), 1,
      sym__reduce_inline_line,
    STATE(777), 1,
      sym__named_using_complement,
  [3741] = 4,
    ACTIONS(137), 1,
      sym_newline,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(817), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [3756] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(233), 1,
      sym_text_line,
    STATE(628), 1,
      sym_text_inline,
    STATE(722), 1,
      sym_text_block,
    STATE(835), 1,
      sym_line_end,
  [3775] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(819), 1,
      sym_flow_by_keyword,
    STATE(237), 1,
      sym__named_by_complement,
    STATE(819), 1,
      sym__inline_by_complement,
    STATE(820), 1,
      sym__by_complements,
    STATE(991), 1,
      sym__lanes_complement,
  [3794] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(698), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3811] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(827), 1,
      sym_text_line,
    STATE(802), 1,
      sym_line_end,
    STATE(908), 1,
      sym_text_block,
    STATE(923), 1,
      sym_text_inline,
  [3830] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(502), 1,
      sym__unroled_message_line,
    ACTIONS(829), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3843] = 1,
    ACTIONS(831), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3852] = 3,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(239), 1,
      sym__implicit_run_line,
    ACTIONS(465), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3865] = 1,
    ACTIONS(833), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3874] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(835), 1,
      sym_blank_line,
    ACTIONS(837), 1,
      sym__indent,
    STATE(841), 1,
      sym_struct_body,
    STATE(487), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3891] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(682), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3908] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(778), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3925] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(779), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [3942] = 1,
    ACTIONS(839), 6,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [3951] = 3,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(239), 1,
      sym__implicit_run_line,
    ACTIONS(621), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [3964] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_text_line,
    ACTIONS(221), 1,
      sym_newline,
    STATE(569), 1,
      sym_text_block,
    STATE(767), 1,
      sym_line_end,
    STATE(800), 1,
      sym_text_inline,
  [3983] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_text_line,
    STATE(242), 1,
      sym_text_inline,
    STATE(332), 1,
      sym_text_block,
    STATE(838), 1,
      sym_line_end,
  [4002] = 6,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(841), 1,
      sym_arrow,
    ACTIONS(843), 1,
      sym_colon,
    STATE(144), 1,
      sym__reduce_inline_block,
    STATE(231), 1,
      sym__reduce_inline_line,
    STATE(812), 1,
      sym__named_using_complement,
  [4021] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(593), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4038] = 3,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(502), 1,
      sym__unroled_message_line,
    ACTIONS(708), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [4051] = 4,
    ACTIONS(849), 1,
      sym_array_suffix,
    STATE(190), 1,
      aux_sym_type_repeat1,
    STATE(770), 1,
      sym_type_suffix,
    ACTIONS(851), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4066] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_text_line,
    STATE(246), 1,
      sym_text_inline,
    STATE(332), 1,
      sym_text_block,
    STATE(838), 1,
      sym_line_end,
  [4085] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_text_line,
    ACTIONS(221), 1,
      sym_newline,
    STATE(569), 1,
      sym_text_block,
    STATE(767), 1,
      sym_line_end,
    STATE(788), 1,
      sym_text_inline,
  [4104] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(853), 1,
      sym_flow_by_keyword,
    STATE(380), 1,
      sym__named_by_complement,
    STATE(610), 1,
      sym__inline_by_complement,
    STATE(611), 1,
      sym__by_complements,
    STATE(947), 1,
      sym__lanes_complement,
  [4123] = 6,
    ACTIONS(331), 1,
      sym_flow_in_keyword,
    ACTIONS(855), 1,
      sym_flow_by_keyword,
    STATE(258), 1,
      sym__inline_by_complement,
    STATE(259), 1,
      sym__by_complements,
    STATE(443), 1,
      sym__named_by_complement,
    STATE(992), 1,
      sym__lanes_complement,
  [4142] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_text_line,
    ACTIONS(221), 1,
      sym_newline,
    STATE(569), 1,
      sym_text_block,
    STATE(767), 1,
      sym_line_end,
    STATE(867), 1,
      sym_text_inline,
  [4161] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(227), 1,
      sym_text_line,
    STATE(277), 1,
      sym_text_inline,
    STATE(332), 1,
      sym_text_block,
    STATE(838), 1,
      sym_line_end,
  [4180] = 4,
    ACTIONS(857), 1,
      sym_array_suffix,
    STATE(190), 1,
      aux_sym_type_repeat1,
    STATE(770), 1,
      sym_type_suffix,
    ACTIONS(860), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4195] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(713), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4212] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(714), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4229] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(826), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4246] = 3,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(509), 1,
      sym__implicit_run_line,
    ACTIONS(465), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [4259] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(539), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4276] = 6,
    ACTIONS(862), 1,
      sym_arrow,
    ACTIONS(864), 1,
      sym_colon,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(868), 1,
      sym_snake_name,
    STATE(537), 1,
      sym_agic_name,
    STATE(1141), 1,
      sym_params,
  [4295] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(543), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4312] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(233), 1,
      sym_text_line,
    STATE(594), 1,
      sym_text_inline,
    STATE(722), 1,
      sym_text_block,
    STATE(835), 1,
      sym_line_end,
  [4331] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(827), 1,
      sym_text_line,
    STATE(802), 1,
      sym_line_end,
    STATE(880), 1,
      sym_text_inline,
    STATE(908), 1,
      sym_text_block,
  [4350] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(823), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4367] = 3,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(509), 1,
      sym__implicit_run_line,
    ACTIONS(621), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [4380] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(551), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4397] = 4,
    ACTIONS(137), 1,
      sym_newline,
    STATE(186), 1,
      sym__order_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(817), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4412] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(221), 1,
      sym_newline,
    ACTIONS(233), 1,
      sym_text_line,
    STATE(598), 1,
      sym_text_inline,
    STATE(722), 1,
      sym_text_block,
    STATE(835), 1,
      sym_line_end,
  [4431] = 4,
    ACTIONS(137), 1,
      sym_newline,
    STATE(187), 1,
      sym__order_complement,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
    ACTIONS(817), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [4446] = 5,
    ACTIONS(821), 1,
      sym_blank_line,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(825), 1,
      sym__indent,
    STATE(558), 1,
      sym_flow_body,
    STATE(439), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4463] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(793), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4480] = 4,
    ACTIONS(849), 1,
      sym_array_suffix,
    STATE(183), 1,
      aux_sym_type_repeat1,
    STATE(770), 1,
      sym_type_suffix,
    ACTIONS(870), 3,
      sym_colon,
      sym_rparen,
      sym_comma,
  [4495] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(773), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4512] = 6,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(872), 1,
      sym_arrow,
    ACTIONS(874), 1,
      sym_colon,
    ACTIONS(876), 1,
      sym_snake_name,
    STATE(570), 1,
      sym_flow_name,
    STATE(1125), 1,
      sym_params,
  [4531] = 6,
    ACTIONS(217), 1,
      sym__inline_comment,
    ACTIONS(219), 1,
      sym_text_line,
    ACTIONS(221), 1,
      sym_newline,
    STATE(569), 1,
      sym_text_block,
    STATE(767), 1,
      sym_line_end,
    STATE(795), 1,
      sym_text_inline,
  [4550] = 6,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(878), 1,
      sym_arrow,
    ACTIONS(880), 1,
      sym_colon,
    STATE(92), 1,
      sym__reduce_inline_block,
    STATE(749), 1,
      sym__reduce_inline_line,
    STATE(759), 1,
      sym__named_using_complement,
  [4569] = 6,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(882), 1,
      sym__other_integer_literal,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(886), 1,
      sym_colon,
    STATE(876), 1,
      sym__repeat_count_complement,
    STATE(1327), 1,
      sym__window_complement,
  [4588] = 6,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(882), 1,
      sym__other_integer_literal,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(888), 1,
      sym_colon,
    STATE(927), 1,
      sym__repeat_count_complement,
    STATE(1254), 1,
      sym__window_complement,
  [4607] = 6,
    ACTIONS(321), 1,
      sym__one_integer_literal,
    ACTIONS(882), 1,
      sym__other_integer_literal,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(890), 1,
      sym_colon,
    STATE(1074), 1,
      sym__repeat_count_complement,
    STATE(1330), 1,
      sym__window_complement,
  [4626] = 5,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(845), 1,
      sym_blank_line,
    ACTIONS(847), 1,
      sym__indent,
    STATE(679), 1,
      sym_agic_body,
    STATE(350), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4643] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(892), 1,
      sym_blank_line,
    ACTIONS(894), 1,
      sym__indent,
    STATE(515), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4657] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4665] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4673] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [4681] = 4,
    ACTIONS(565), 1,
      sym__dedent,
    ACTIONS(902), 1,
      sym_blank_line,
    ACTIONS(905), 1,
      sym__comment_start,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4695] = 4,
    ACTIONS(908), 1,
      sym_blank_line,
    ACTIONS(910), 1,
      sym__comment_start,
    ACTIONS(912), 1,
      sym__reduce_indent,
    STATE(355), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4709] = 1,
    ACTIONS(914), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4717] = 1,
    ACTIONS(916), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4725] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(918), 1,
      sym_blank_line,
    ACTIONS(920), 1,
      sym__dedent,
    STATE(356), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4739] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(924), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4753] = 5,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(855), 1,
      sym_inline_agic,
    STATE(1040), 1,
      sym_runnable,
  [4769] = 1,
    ACTIONS(928), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4777] = 1,
    ACTIONS(930), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4785] = 1,
    ACTIONS(932), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4793] = 1,
    ACTIONS(934), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4801] = 1,
    ACTIONS(936), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4809] = 1,
    ACTIONS(938), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4817] = 1,
    ACTIONS(940), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4825] = 1,
    ACTIONS(942), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4833] = 1,
    ACTIONS(944), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4841] = 5,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(950), 1,
      sym_newline,
    STATE(861), 1,
      sym_line_end,
    STATE(1041), 1,
      sym__lanes_complement,
  [4857] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(952), 1,
      sym_blank_line,
    ACTIONS(954), 1,
      sym__indent,
    STATE(360), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [4871] = 1,
    ACTIONS(839), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [4879] = 1,
    ACTIONS(956), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4887] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(960), 1,
      sym__dedent,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [4901] = 1,
    ACTIONS(964), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4909] = 1,
    ACTIONS(966), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4917] = 1,
    ACTIONS(968), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4925] = 1,
    ACTIONS(970), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4933] = 1,
    ACTIONS(972), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4941] = 1,
    ACTIONS(974), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4949] = 1,
    ACTIONS(976), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4957] = 1,
    ACTIONS(978), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4965] = 1,
    ACTIONS(980), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4973] = 1,
    ACTIONS(982), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4981] = 1,
    ACTIONS(984), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4989] = 1,
    ACTIONS(986), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [4997] = 1,
    ACTIONS(988), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5005] = 1,
    ACTIONS(990), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5013] = 1,
    ACTIONS(992), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5021] = 1,
    ACTIONS(994), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5029] = 1,
    ACTIONS(996), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5037] = 1,
    ACTIONS(998), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5045] = 5,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(799), 1,
      sym_inline_agic,
    STATE(962), 1,
      sym_runnable,
  [5061] = 4,
    ACTIONS(1002), 1,
      sym_rparen,
    STATE(703), 1,
      sym_param_name,
    STATE(984), 1,
      sym_param,
    ACTIONS(1000), 2,
      anon_sym__,
      sym_snake_name,
  [5075] = 1,
    ACTIONS(1004), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5083] = 1,
    ACTIONS(1006), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5091] = 1,
    ACTIONS(1008), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5099] = 1,
    ACTIONS(1010), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5107] = 1,
    ACTIONS(1012), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5115] = 1,
    ACTIONS(1014), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5123] = 1,
    ACTIONS(1016), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5131] = 1,
    ACTIONS(1018), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5139] = 1,
    ACTIONS(1020), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5147] = 1,
    ACTIONS(1022), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5155] = 1,
    ACTIONS(1024), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5163] = 1,
    ACTIONS(1026), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5171] = 1,
    ACTIONS(1028), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5179] = 1,
    ACTIONS(1030), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5187] = 1,
    ACTIONS(1032), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5195] = 1,
    ACTIONS(1034), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5203] = 1,
    ACTIONS(1036), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5211] = 1,
    ACTIONS(1038), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5219] = 1,
    ACTIONS(1040), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5227] = 1,
    ACTIONS(1042), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5235] = 1,
    ACTIONS(1044), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5243] = 1,
    ACTIONS(1046), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5251] = 1,
    ACTIONS(1048), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5259] = 1,
    ACTIONS(1050), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5267] = 1,
    ACTIONS(1052), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5275] = 1,
    ACTIONS(1054), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5283] = 1,
    ACTIONS(1056), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5291] = 1,
    ACTIONS(1058), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5299] = 1,
    ACTIONS(1060), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5307] = 1,
    ACTIONS(1062), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5315] = 1,
    ACTIONS(1064), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5323] = 1,
    ACTIONS(1066), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5331] = 1,
    ACTIONS(1068), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5339] = 1,
    ACTIONS(1070), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5347] = 1,
    ACTIONS(1072), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5355] = 1,
    ACTIONS(1074), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5363] = 1,
    ACTIONS(1076), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5371] = 1,
    ACTIONS(1078), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5379] = 1,
    ACTIONS(1080), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5387] = 1,
    ACTIONS(1082), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5395] = 1,
    ACTIONS(1084), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5403] = 1,
    ACTIONS(1086), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5411] = 1,
    ACTIONS(1088), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5419] = 1,
    ACTIONS(1090), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5427] = 1,
    ACTIONS(1092), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5435] = 1,
    ACTIONS(1094), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5443] = 1,
    ACTIONS(1096), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5451] = 1,
    ACTIONS(1098), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5459] = 1,
    ACTIONS(1100), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5467] = 1,
    ACTIONS(1102), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5475] = 1,
    ACTIONS(1104), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5483] = 1,
    ACTIONS(1106), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5491] = 1,
    ACTIONS(1108), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5499] = 1,
    ACTIONS(1110), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5507] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5515] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5523] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5531] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5539] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5547] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5555] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5563] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [5571] = 4,
    ACTIONS(565), 1,
      sym__reduce_indent,
    ACTIONS(1122), 1,
      sym_blank_line,
    ACTIONS(1125), 1,
      sym__comment_start,
    STATE(324), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5585] = 1,
    ACTIONS(1128), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5593] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5601] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5609] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5617] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5625] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5633] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5641] = 1,
    ACTIONS(1130), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5649] = 1,
    ACTIONS(1132), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5657] = 1,
    ACTIONS(1134), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5665] = 1,
    ACTIONS(1136), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5673] = 1,
    ACTIONS(1138), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5681] = 1,
    ACTIONS(273), 5,
      anon_sym_far,
      anon_sym_near,
      sym_default_keyword,
      sym_none_keyword,
      sym_all_keyword,
  [5689] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5697] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__directive_start,
  [5705] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5713] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5721] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5729] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5737] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5745] = 1,
    ACTIONS(896), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5753] = 1,
    ACTIONS(898), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5761] = 1,
    ACTIONS(900), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5769] = 1,
    ACTIONS(1118), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5777] = 1,
    ACTIONS(1120), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__until_start,
  [5785] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1142), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5799] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1144), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5813] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1146), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [5827] = 4,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1148), 1,
      sym_snake_name,
    STATE(260), 1,
      sym_agent,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [5841] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1152), 1,
      sym_text_line,
    ACTIONS(1154), 1,
      sym_newline,
    STATE(365), 1,
      sym_line_end,
    STATE(872), 1,
      sym__reduce_line,
  [5857] = 4,
    ACTIONS(910), 1,
      sym__comment_start,
    ACTIONS(1156), 1,
      sym_blank_line,
    ACTIONS(1158), 1,
      sym__reduce_indent,
    STATE(324), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5871] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1160), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5885] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1162), 1,
      sym_blank_line,
    ACTIONS(1164), 1,
      sym__indent,
    STATE(368), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5899] = 1,
    ACTIONS(1166), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5907] = 1,
    ACTIONS(1168), 5,
      sym_flow_using_keyword,
      sym_flow_if_keyword,
      sym_flow_by_keyword,
      sym_arrow,
      sym_colon,
  [5915] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1170), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5929] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1172), 1,
      sym_blank_line,
    ACTIONS(1174), 1,
      sym__indent,
    STATE(369), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5943] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(581), 1,
      sym_inline_agic,
    STATE(925), 1,
      sym_runnable,
  [5959] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1176), 1,
      sym_blank_line,
    ACTIONS(1178), 1,
      sym__indent,
    STATE(371), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5973] = 1,
    ACTIONS(1180), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [5981] = 4,
    ACTIONS(910), 1,
      sym__comment_start,
    ACTIONS(1182), 1,
      sym_blank_line,
    ACTIONS(1184), 1,
      sym__reduce_indent,
    STATE(376), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [5995] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1152), 1,
      sym_text_line,
    ACTIONS(1154), 1,
      sym_newline,
    STATE(222), 1,
      sym_line_end,
    STATE(803), 1,
      sym__reduce_line,
  [6011] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(597), 1,
      sym_inline_agic,
    STATE(940), 1,
      sym_runnable,
  [6027] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1186), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6041] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1188), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6055] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1154), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_text_line,
    STATE(222), 1,
      sym_line_end,
    STATE(600), 1,
      sym__reduce_line,
  [6071] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1192), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6085] = 5,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    STATE(604), 1,
      sym_inline_agic,
    STATE(943), 1,
      sym__named_using_complement,
  [6101] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(605), 1,
      sym_inline_agic,
    STATE(975), 1,
      sym_runnable,
  [6117] = 5,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(606), 1,
      sym_line_end,
    STATE(944), 1,
      sym__lanes_complement,
  [6133] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1198), 1,
      sym_blank_line,
    ACTIONS(1200), 1,
      sym__indent,
    STATE(396), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6147] = 4,
    ACTIONS(910), 1,
      sym__comment_start,
    ACTIONS(1156), 1,
      sym_blank_line,
    ACTIONS(1202), 1,
      sym__reduce_indent,
    STATE(324), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6161] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1204), 1,
      sym_blank_line,
    ACTIONS(1206), 1,
      sym__dedent,
    STATE(384), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6175] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1208), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6189] = 5,
    ACTIONS(447), 1,
      sym_arrow,
    ACTIONS(449), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(625), 1,
      sym_inline_agic,
    STATE(1040), 1,
      sym_runnable,
  [6205] = 5,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(626), 1,
      sym_line_end,
    STATE(950), 1,
      sym__lanes_complement,
  [6221] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1210), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6235] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1212), 1,
      sym_blank_line,
    ACTIONS(1214), 1,
      sym__dedent,
    STATE(406), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6249] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1154), 1,
      sym_newline,
    ACTIONS(1190), 1,
      sym_text_line,
    STATE(365), 1,
      sym_line_end,
    STATE(631), 1,
      sym__reduce_line,
  [6265] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1216), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6279] = 1,
    ACTIONS(1116), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [6287] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1218), 1,
      sym_blank_line,
    ACTIONS(1220), 1,
      sym__dedent,
    STATE(390), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6301] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1222), 1,
      sym_blank_line,
    ACTIONS(1224), 1,
      sym__dedent,
    STATE(416), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6315] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1226), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6329] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1228), 1,
      sym_blank_line,
    ACTIONS(1230), 1,
      sym__dedent,
    STATE(397), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6343] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1232), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6357] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1234), 1,
      sym_blank_line,
    ACTIONS(1236), 1,
      sym__dedent,
    STATE(398), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6371] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1238), 1,
      sym_blank_line,
    ACTIONS(1240), 1,
      sym__dedent,
    STATE(399), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6385] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1242), 1,
      sym_blank_line,
    ACTIONS(1244), 1,
      sym__dedent,
    STATE(401), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6399] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1246), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6413] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1248), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6427] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1250), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6441] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1252), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6455] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6469] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1256), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6483] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1258), 1,
      sym_blank_line,
    ACTIONS(1260), 1,
      sym__dedent,
    STATE(407), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6497] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1262), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6511] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1264), 1,
      sym_blank_line,
    ACTIONS(1266), 1,
      sym__dedent,
    STATE(408), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6525] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1268), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6539] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1270), 1,
      sym_blank_line,
    ACTIONS(1272), 1,
      sym__dedent,
    STATE(409), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6553] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6567] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1276), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6581] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1278), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6595] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1280), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6609] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6623] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1284), 1,
      sym_blank_line,
    ACTIONS(1286), 1,
      sym__dedent,
    STATE(412), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6637] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1288), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6651] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1290), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6665] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1292), 1,
      sym_blank_line,
    ACTIONS(1294), 1,
      sym__dedent,
    STATE(423), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6679] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1296), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6693] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1298), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [6707] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1300), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6721] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1302), 1,
      sym_blank_line,
    ACTIONS(1304), 1,
      sym__dedent,
    STATE(426), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6735] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1306), 1,
      sym_blank_line,
    ACTIONS(1308), 1,
      sym__dedent,
    STATE(427), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6749] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1310), 1,
      sym_blank_line,
    ACTIONS(1312), 1,
      sym__dedent,
    STATE(429), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6763] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1314), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6777] = 5,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    STATE(809), 1,
      sym_inline_agic,
    STATE(973), 1,
      sym__named_using_complement,
  [6793] = 5,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(810), 1,
      sym_inline_agic,
    STATE(975), 1,
      sym_runnable,
  [6809] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1316), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6823] = 5,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(950), 1,
      sym_newline,
    STATE(811), 1,
      sym_line_end,
    STATE(976), 1,
      sym__lanes_complement,
  [6839] = 5,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(228), 1,
      sym_inline_agic,
    STATE(970), 1,
      sym_runnable,
  [6855] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1318), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6869] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1320), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6883] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1322), 1,
      sym_blank_line,
    ACTIONS(1324), 1,
      sym__dedent,
    STATE(444), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6897] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1326), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6911] = 5,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(245), 1,
      sym_inline_agic,
    STATE(985), 1,
      sym_runnable,
  [6927] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1328), 1,
      sym_blank_line,
    ACTIONS(1330), 1,
      sym__dedent,
    STATE(445), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6941] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1332), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6955] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1154), 1,
      sym_newline,
    ACTIONS(1334), 1,
      sym_text_line,
    STATE(222), 1,
      sym_line_end,
    STATE(248), 1,
      sym__reduce_line,
  [6971] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1336), 1,
      sym_blank_line,
    ACTIONS(1338), 1,
      sym__dedent,
    STATE(450), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [6985] = 5,
    ACTIONS(367), 1,
      sym_flow_using_keyword,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    STATE(252), 1,
      sym_inline_agic,
    STATE(1076), 1,
      sym__named_using_complement,
  [7001] = 5,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(253), 1,
      sym_inline_agic,
    STATE(975), 1,
      sym_runnable,
  [7017] = 5,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(254), 1,
      sym_line_end,
    STATE(989), 1,
      sym__lanes_complement,
  [7033] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1344), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7047] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1346), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7061] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1348), 1,
      sym_blank_line,
    ACTIONS(1350), 1,
      sym__dedent,
    STATE(447), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7075] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1352), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7089] = 5,
    ACTIONS(369), 1,
      sym_arrow,
    ACTIONS(371), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(274), 1,
      sym_inline_agic,
    STATE(1040), 1,
      sym_runnable,
  [7105] = 5,
    ACTIONS(948), 1,
      sym_flow_in_keyword,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(275), 1,
      sym_line_end,
    STATE(996), 1,
      sym__lanes_complement,
  [7121] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1354), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7135] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1356), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7149] = 5,
    ACTIONS(1150), 1,
      sym__inline_comment,
    ACTIONS(1154), 1,
      sym_newline,
    ACTIONS(1334), 1,
      sym_text_line,
    STATE(280), 1,
      sym__reduce_line,
    STATE(365), 1,
      sym_line_end,
  [7165] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1358), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7179] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1360), 1,
      sym_blank_line,
    ACTIONS(1362), 1,
      sym__dedent,
    STATE(451), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7193] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1364), 1,
      sym_blank_line,
    ACTIONS(1366), 1,
      sym__dedent,
    STATE(453), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7207] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1368), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7221] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1370), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7235] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1372), 1,
      sym_blank_line,
    ACTIONS(1374), 1,
      sym__dedent,
    STATE(460), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7249] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1376), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7263] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1378), 1,
      sym_blank_line,
    ACTIONS(1380), 1,
      sym__dedent,
    STATE(461), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7277] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1382), 1,
      sym_blank_line,
    ACTIONS(1384), 1,
      sym__dedent,
    STATE(462), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7291] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1386), 1,
      sym_blank_line,
    ACTIONS(1388), 1,
      sym__dedent,
    STATE(464), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7305] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1390), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7319] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1392), 1,
      sym_blank_line,
    ACTIONS(1394), 1,
      sym__dedent,
    STATE(469), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7333] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1396), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7347] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1398), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7361] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1400), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7375] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1402), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7389] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1404), 1,
      sym_blank_line,
    ACTIONS(1406), 1,
      sym__dedent,
    STATE(470), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7403] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1408), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7417] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1410), 1,
      sym_blank_line,
    ACTIONS(1412), 1,
      sym__dedent,
    STATE(471), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7431] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1414), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7445] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1416), 1,
      sym_blank_line,
    ACTIONS(1418), 1,
      sym__dedent,
    STATE(472), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7459] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1420), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7473] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1422), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7487] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1424), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7501] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1426), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7515] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1428), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7529] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1430), 1,
      sym_blank_line,
    ACTIONS(1432), 1,
      sym__dedent,
    STATE(475), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7543] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1434), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7557] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1436), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7571] = 4,
    ACTIONS(1438), 1,
      sym_array_suffix,
    STATE(479), 1,
      aux_sym_type_repeat1,
    STATE(1037), 1,
      sym_type_suffix,
    ACTIONS(870), 2,
      sym_newline,
      sym__inline_comment,
  [7585] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1440), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7599] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1442), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7613] = 4,
    ACTIONS(1438), 1,
      sym_array_suffix,
    STATE(482), 1,
      aux_sym_type_repeat1,
    STATE(1037), 1,
      sym_type_suffix,
    ACTIONS(851), 2,
      sym_newline,
      sym__inline_comment,
  [7627] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1444), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7641] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1446), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7655] = 4,
    ACTIONS(1448), 1,
      sym_array_suffix,
    STATE(482), 1,
      aux_sym_type_repeat1,
    STATE(1037), 1,
      sym_type_suffix,
    ACTIONS(860), 2,
      sym_newline,
      sym__inline_comment,
  [7669] = 1,
    ACTIONS(1451), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__cap_text_start,
  [7677] = 1,
    ACTIONS(833), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7685] = 4,
    ACTIONS(958), 1,
      sym_blank_line,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1453), 1,
      sym__dedent,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [7699] = 1,
    ACTIONS(831), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__flow_raw_text,
  [7707] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1455), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7721] = 4,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1148), 1,
      sym_snake_name,
    STATE(367), 1,
      sym_agent,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [7735] = 4,
    ACTIONS(565), 1,
      sym__indent,
    ACTIONS(1457), 1,
      sym_blank_line,
    ACTIONS(1460), 1,
      sym__comment_start,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7749] = 5,
    ACTIONS(405), 1,
      sym_arrow,
    ACTIONS(407), 1,
      sym_colon,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(875), 1,
      sym_inline_agic,
    STATE(1036), 1,
      sym_runnable,
  [7765] = 4,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1148), 1,
      sym_snake_name,
    STATE(430), 1,
      sym_agent,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [7779] = 1,
    ACTIONS(831), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [7787] = 1,
    ACTIONS(1463), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7795] = 1,
    ACTIONS(833), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [7803] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1465), 1,
      sym_blank_line,
    ACTIONS(1467), 1,
      sym__indent,
    STATE(497), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7817] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1469), 1,
      sym_blank_line,
    ACTIONS(1471), 1,
      sym__indent,
    STATE(498), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7831] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1473), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7845] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1475), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7859] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1477), 1,
      sym_blank_line,
    ACTIONS(1479), 1,
      sym__indent,
    STATE(500), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7873] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1481), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7887] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(922), 1,
      sym_blank_line,
    ACTIONS(1483), 1,
      sym__dedent,
    STATE(221), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7901] = 1,
    ACTIONS(1485), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [7909] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1487), 1,
      sym_blank_line,
    ACTIONS(1489), 1,
      sym__indent,
    STATE(505), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7923] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1491), 1,
      sym_blank_line,
    ACTIONS(1493), 1,
      sym__indent,
    STATE(506), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7937] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1495), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7951] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1497), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7965] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1499), 1,
      sym_blank_line,
    ACTIONS(1501), 1,
      sym__indent,
    STATE(508), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7979] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1503), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [7993] = 1,
    ACTIONS(839), 5,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
      sym__flow_raw_text,
  [8001] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1505), 1,
      sym_blank_line,
    ACTIONS(1507), 1,
      sym__indent,
    STATE(511), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8015] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1509), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8029] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1511), 1,
      sym_blank_line,
    ACTIONS(1513), 1,
      sym__indent,
    STATE(513), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8043] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1515), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8057] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1517), 1,
      sym_blank_line,
    ACTIONS(1519), 1,
      sym__dedent,
    STATE(501), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8071] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1521), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8085] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1523), 1,
      sym_blank_line,
    ACTIONS(1525), 1,
      sym__indent,
    STATE(517), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8099] = 4,
    ACTIONS(823), 1,
      sym__comment_start,
    ACTIONS(1140), 1,
      sym_blank_line,
    ACTIONS(1527), 1,
      sym__indent,
    STATE(489), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8113] = 4,
    ACTIONS(1529), 1,
      sym_blank_line,
    ACTIONS(1532), 1,
      sym__dedent,
    ACTIONS(1534), 1,
      sym_indented_raw_text,
    STATE(518), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8127] = 1,
    ACTIONS(1537), 5,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
      sym__agic_raw_text,
  [8135] = 1,
    ACTIONS(1112), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8143] = 1,
    ACTIONS(1114), 5,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
      sym__line_start,
      ts_builtin_sym_end,
  [8151] = 4,
    ACTIONS(469), 1,
      sym__comment_start,
    ACTIONS(1539), 1,
      sym_blank_line,
    ACTIONS(1541), 1,
      sym__dedent,
    STATE(388), 2,
      sym__trivia,
      aux_sym_struct_body_repeat1,
  [8165] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8172] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8179] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8186] = 1,
    ACTIONS(1543), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8193] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8200] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8207] = 4,
    ACTIONS(641), 1,
      sym__line_start,
    ACTIONS(1545), 1,
      sym__dedent,
    STATE(160), 1,
      sym_message,
    STATE(1257), 1,
      sym_messages,
  [8220] = 1,
    ACTIONS(1547), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8227] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8234] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8241] = 1,
    ACTIONS(1549), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8248] = 1,
    ACTIONS(1551), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8255] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8262] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8269] = 4,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(1553), 1,
      sym_arrow,
    ACTIONS(1555), 1,
      sym_colon,
    STATE(1095), 1,
      sym_params,
  [8282] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8289] = 1,
    ACTIONS(1557), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8296] = 1,
    ACTIONS(1559), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [8303] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8310] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8317] = 1,
    ACTIONS(1561), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8324] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8331] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8338] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8345] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8352] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8359] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8366] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8373] = 1,
    ACTIONS(1563), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8380] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8387] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8394] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8401] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8408] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8415] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8422] = 1,
    ACTIONS(1565), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8429] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8436] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8443] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8450] = 1,
    ACTIONS(1098), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8457] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8464] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8471] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8478] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8485] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8492] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8499] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8506] = 4,
    ACTIONS(866), 1,
      sym_lparen,
    ACTIONS(1567), 1,
      sym_arrow,
    ACTIONS(1569), 1,
      sym_colon,
    STATE(1140), 1,
      sym_params,
  [8519] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8526] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8533] = 1,
    ACTIONS(1571), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8540] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1573), 1,
      sym_blank_line,
    STATE(485), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [8551] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8558] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8565] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8572] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8579] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8586] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [8593] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8600] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8607] = 1,
    ACTIONS(932), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8614] = 1,
    ACTIONS(934), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8621] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8628] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8635] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8642] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8649] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8656] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8663] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8670] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8677] = 1,
    ACTIONS(1575), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [8684] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8691] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8698] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8705] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8712] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8719] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8726] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8733] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8740] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8747] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8754] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8761] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8768] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8775] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8782] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8789] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8796] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8803] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8810] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8817] = 1,
    ACTIONS(1004), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8824] = 1,
    ACTIONS(1128), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [8831] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8838] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8845] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8852] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8859] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8866] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8873] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8880] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8887] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8894] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8901] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8908] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8915] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8922] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8929] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8936] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8943] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8950] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8957] = 1,
    ACTIONS(1044), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8964] = 1,
    ACTIONS(1046), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8971] = 1,
    ACTIONS(1048), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8978] = 1,
    ACTIONS(1050), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8985] = 1,
    ACTIONS(1052), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8992] = 1,
    ACTIONS(1054), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [8999] = 1,
    ACTIONS(1056), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9006] = 1,
    ACTIONS(1058), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9013] = 1,
    ACTIONS(1060), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9020] = 1,
    ACTIONS(1062), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9027] = 1,
    ACTIONS(1064), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9034] = 1,
    ACTIONS(1066), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9041] = 1,
    ACTIONS(1068), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9048] = 1,
    ACTIONS(1070), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9055] = 1,
    ACTIONS(1072), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9062] = 1,
    ACTIONS(1074), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9069] = 1,
    ACTIONS(1076), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9076] = 1,
    ACTIONS(1078), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9083] = 1,
    ACTIONS(1080), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9090] = 1,
    ACTIONS(1082), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9097] = 1,
    ACTIONS(1084), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9104] = 1,
    ACTIONS(1086), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9111] = 1,
    ACTIONS(1088), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9118] = 1,
    ACTIONS(1090), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9125] = 1,
    ACTIONS(1092), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9132] = 1,
    ACTIONS(1094), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9139] = 1,
    ACTIONS(1096), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9146] = 1,
    ACTIONS(1100), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9153] = 1,
    ACTIONS(1102), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9160] = 1,
    ACTIONS(1104), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9167] = 1,
    ACTIONS(1106), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9174] = 1,
    ACTIONS(1108), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9181] = 1,
    ACTIONS(1110), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9188] = 2,
    ACTIONS(1579), 1,
      sym_newline,
    ACTIONS(1577), 3,
      sym__inline_comment,
      sym_colon,
      sym_text_line,
  [9197] = 4,
    ACTIONS(1581), 1,
      sym__inline_comment,
    ACTIONS(1583), 1,
      sym_text_line,
    ACTIONS(1585), 1,
      sym_newline,
    STATE(514), 1,
      sym_line_end,
  [9210] = 1,
    ACTIONS(1587), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9217] = 3,
    ACTIONS(1589), 1,
      sym_colon,
    ACTIONS(1591), 1,
      sym_newline,
    ACTIONS(1583), 2,
      sym__inline_comment,
      sym_text_line,
  [9228] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1593), 1,
      sym__inline_comment,
    ACTIONS(1595), 1,
      sym_text_line,
    STATE(708), 1,
      sym_line_end,
  [9241] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9248] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9255] = 2,
    STATE(1269), 1,
      sym_directive_op,
    ACTIONS(1597), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [9264] = 1,
    ACTIONS(1599), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9271] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(725), 1,
      sym__cap_definition,
  [9284] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(728), 1,
      sym__cap_definition,
  [9297] = 4,
    ACTIONS(641), 1,
      sym__line_start,
    ACTIONS(1605), 1,
      sym__dedent,
    STATE(160), 1,
      sym_message,
    STATE(1203), 1,
      sym_messages,
  [9310] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(729), 1,
      sym__cap_definition,
  [9323] = 1,
    ACTIONS(1607), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9330] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(122), 1,
      sym_line_end,
    STATE(730), 1,
      sym__cap_definition,
  [9343] = 1,
    ACTIONS(1609), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9350] = 1,
    ACTIONS(1611), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9357] = 4,
    ACTIONS(1613), 1,
      sym_blank_line,
    ACTIONS(1615), 1,
      sym__text_indent,
    STATE(734), 1,
      sym_text_body,
    STATE(896), 1,
      aux_sym_text_body_repeat1,
  [9370] = 1,
    ACTIONS(1617), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9377] = 1,
    ACTIONS(1619), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9384] = 3,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1621), 1,
      sym_colon,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [9395] = 3,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(1623), 1,
      sym_integer_literal,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [9406] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9413] = 1,
    ACTIONS(1625), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9420] = 1,
    ACTIONS(1627), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9427] = 1,
    ACTIONS(1629), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9434] = 1,
    ACTIONS(914), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9441] = 1,
    ACTIONS(916), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9448] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1593), 1,
      sym__inline_comment,
    ACTIONS(1631), 1,
      sym_text_line,
    STATE(774), 1,
      sym_line_end,
  [9461] = 1,
    ACTIONS(1633), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9468] = 1,
    ACTIONS(1635), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9475] = 1,
    ACTIONS(1637), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9482] = 1,
    ACTIONS(1639), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9489] = 1,
    ACTIONS(1641), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9496] = 1,
    ACTIONS(1643), 4,
      sym_optional_marker,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9503] = 1,
    ACTIONS(1645), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9510] = 1,
    ACTIONS(1647), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9517] = 3,
    ACTIONS(1649), 1,
      sym_optional_marker,
    ACTIONS(1651), 1,
      sym_colon,
    ACTIONS(1653), 2,
      sym_rparen,
      sym_comma,
  [9528] = 1,
    ACTIONS(1655), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9535] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9542] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(128), 1,
      sym_line_end,
    STATE(817), 1,
      sym_job_body,
  [9555] = 4,
    ACTIONS(1601), 1,
      sym__inline_comment,
    ACTIONS(1603), 1,
      sym_newline,
    STATE(128), 1,
      sym_line_end,
    STATE(818), 1,
      sym_job_body,
  [9568] = 1,
    ACTIONS(1657), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9575] = 2,
    ACTIONS(273), 1,
      sym_integer_literal,
    ACTIONS(271), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9584] = 2,
    STATE(956), 1,
      sym_text_ref,
    ACTIONS(1659), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [9593] = 4,
    ACTIONS(1661), 1,
      sym_runnable_ref,
    ACTIONS(1663), 1,
      sym_none_keyword,
    ACTIONS(1665), 1,
      sym_all_keyword,
    STATE(955), 1,
      sym_route_value,
  [9606] = 1,
    ACTIONS(1667), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9613] = 1,
    ACTIONS(1669), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9620] = 1,
    ACTIONS(1671), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9627] = 1,
    ACTIONS(1673), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9634] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9641] = 1,
    ACTIONS(1675), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9648] = 1,
    ACTIONS(1677), 4,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
      sym_colon,
  [9655] = 1,
    ACTIONS(1679), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__from_start,
  [9662] = 1,
    ACTIONS(930), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9669] = 1,
    ACTIONS(1681), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9676] = 1,
    ACTIONS(1130), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9683] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9690] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9697] = 1,
    ACTIONS(1683), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9704] = 1,
    ACTIONS(1136), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9711] = 1,
    ACTIONS(1138), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9718] = 1,
    ACTIONS(1685), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9725] = 1,
    ACTIONS(1687), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9732] = 1,
    ACTIONS(1689), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9739] = 1,
    ACTIONS(932), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9746] = 1,
    ACTIONS(1132), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9753] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1691), 1,
      sym_blank_line,
    STATE(395), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [9764] = 1,
    ACTIONS(1134), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9771] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9778] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9785] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9792] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9799] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9806] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9813] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9820] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9827] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9834] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9841] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9848] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9855] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9862] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9869] = 1,
    ACTIONS(934), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9876] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9883] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__directive_start,
  [9890] = 1,
    ACTIONS(1112), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9897] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9904] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9911] = 1,
    ACTIONS(896), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9918] = 1,
    ACTIONS(898), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9925] = 1,
    ACTIONS(900), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9932] = 1,
    ACTIONS(1693), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9939] = 4,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1695), 1,
      sym_colon,
    STATE(807), 1,
      sym_line_end,
  [9952] = 1,
    ACTIONS(936), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9959] = 1,
    ACTIONS(1697), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [9966] = 1,
    ACTIONS(938), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [9973] = 1,
    ACTIONS(1118), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9980] = 1,
    ACTIONS(1120), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      sym__until_start,
  [9987] = 1,
    ACTIONS(1699), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [9994] = 1,
    ACTIONS(940), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10001] = 4,
    ACTIONS(1701), 1,
      sym_blank_line,
    ACTIONS(1703), 1,
      sym__text_indent,
    STATE(572), 1,
      sym_text_body,
    STATE(1039), 1,
      aux_sym_text_body_repeat1,
  [10014] = 1,
    ACTIONS(942), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10021] = 1,
    ACTIONS(944), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10028] = 1,
    ACTIONS(1705), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10035] = 4,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1707), 1,
      sym__inline_comment,
    ACTIONS(1709), 1,
      sym_text_line,
    STATE(592), 1,
      sym_line_end,
  [10048] = 1,
    ACTIONS(1114), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10055] = 1,
    ACTIONS(1711), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10062] = 1,
    ACTIONS(956), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10069] = 1,
    ACTIONS(1116), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10076] = 1,
    ACTIONS(1713), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10083] = 4,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1715), 1,
      sym_colon,
    STATE(602), 1,
      sym_line_end,
  [10096] = 1,
    ACTIONS(1717), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10103] = 1,
    ACTIONS(1719), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10110] = 4,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1707), 1,
      sym__inline_comment,
    ACTIONS(1721), 1,
      sym_text_line,
    STATE(615), 1,
      sym_line_end,
  [10123] = 3,
    STATE(703), 1,
      sym_param_name,
    STATE(1171), 1,
      sym_param,
    ACTIONS(1000), 2,
      anon_sym__,
      sym_snake_name,
  [10134] = 1,
    ACTIONS(1723), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10141] = 1,
    ACTIONS(1725), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10148] = 1,
    ACTIONS(1727), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10155] = 1,
    ACTIONS(1729), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10162] = 4,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1707), 1,
      sym__inline_comment,
    ACTIONS(1731), 1,
      sym_text_line,
    STATE(635), 1,
      sym_line_end,
  [10175] = 4,
    ACTIONS(1196), 1,
      sym_newline,
    ACTIONS(1707), 1,
      sym__inline_comment,
    ACTIONS(1733), 1,
      sym_text_line,
    STATE(636), 1,
      sym_line_end,
  [10188] = 1,
    ACTIONS(1735), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10195] = 1,
    ACTIONS(1737), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10202] = 3,
    ACTIONS(1741), 1,
      sym_comma,
    STATE(829), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1739), 2,
      sym_newline,
      sym__inline_comment,
  [10213] = 3,
    ACTIONS(1745), 1,
      sym_comma,
    STATE(830), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1743), 2,
      sym_newline,
      sym__inline_comment,
  [10224] = 1,
    ACTIONS(1747), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10231] = 1,
    ACTIONS(1749), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10238] = 1,
    ACTIONS(1751), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10245] = 1,
    ACTIONS(964), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10252] = 1,
    ACTIONS(966), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10259] = 1,
    ACTIONS(968), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10266] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1593), 1,
      sym__inline_comment,
    ACTIONS(1753), 1,
      sym_text_line,
    STATE(832), 1,
      sym_line_end,
  [10279] = 1,
    ACTIONS(970), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10286] = 1,
    ACTIONS(972), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10293] = 1,
    ACTIONS(974), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10300] = 4,
    ACTIONS(1755), 1,
      sym_blank_line,
    ACTIONS(1757), 1,
      sym__text_indent,
    STATE(911), 1,
      sym_text_body,
    STATE(1048), 1,
      aux_sym_text_body_repeat1,
  [10313] = 1,
    ACTIONS(976), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10320] = 1,
    ACTIONS(978), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10327] = 1,
    ACTIONS(1759), 4,
      sym_array_suffix,
      sym_colon,
      sym_rparen,
      sym_comma,
  [10334] = 4,
    ACTIONS(1342), 1,
      sym_newline,
    ACTIONS(1761), 1,
      sym__inline_comment,
    ACTIONS(1763), 1,
      sym_text_line,
    STATE(240), 1,
      sym_line_end,
  [10347] = 1,
    ACTIONS(980), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10354] = 1,
    ACTIONS(982), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10361] = 1,
    ACTIONS(984), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10368] = 1,
    ACTIONS(986), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10375] = 1,
    ACTIONS(988), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10382] = 4,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    ACTIONS(1765), 1,
      sym_colon,
    STATE(250), 1,
      sym_line_end,
  [10395] = 1,
    ACTIONS(990), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10402] = 1,
    ACTIONS(992), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10409] = 1,
    ACTIONS(994), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10416] = 4,
    ACTIONS(1342), 1,
      sym_newline,
    ACTIONS(1761), 1,
      sym__inline_comment,
    ACTIONS(1767), 1,
      sym_text_line,
    STATE(264), 1,
      sym_line_end,
  [10429] = 1,
    ACTIONS(1769), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10436] = 1,
    ACTIONS(1771), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10443] = 1,
    ACTIONS(996), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10450] = 1,
    ACTIONS(998), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10457] = 4,
    ACTIONS(1342), 1,
      sym_newline,
    ACTIONS(1761), 1,
      sym__inline_comment,
    ACTIONS(1773), 1,
      sym_text_line,
    STATE(284), 1,
      sym_line_end,
  [10470] = 4,
    ACTIONS(1342), 1,
      sym_newline,
    ACTIONS(1761), 1,
      sym__inline_comment,
    ACTIONS(1775), 1,
      sym_text_line,
    STATE(285), 1,
      sym_line_end,
  [10483] = 1,
    ACTIONS(1777), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10490] = 1,
    ACTIONS(1006), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10497] = 1,
    ACTIONS(1779), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10504] = 1,
    ACTIONS(1781), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10511] = 1,
    ACTIONS(1783), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10518] = 1,
    ACTIONS(1785), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10525] = 3,
    ACTIONS(1741), 1,
      sym_comma,
    STATE(865), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1787), 2,
      sym_newline,
      sym__inline_comment,
  [10536] = 3,
    ACTIONS(1745), 1,
      sym_comma,
    STATE(866), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1789), 2,
      sym_newline,
      sym__inline_comment,
  [10547] = 1,
    ACTIONS(1791), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10554] = 1,
    ACTIONS(1008), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10561] = 1,
    ACTIONS(1010), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10568] = 1,
    ACTIONS(1012), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10575] = 4,
    ACTIONS(1793), 1,
      sym_blank_line,
    ACTIONS(1795), 1,
      sym__text_indent,
    STATE(724), 1,
      sym_text_body,
    STATE(1057), 1,
      aux_sym_text_body_repeat1,
  [10588] = 1,
    ACTIONS(1014), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10595] = 1,
    ACTIONS(1016), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10602] = 4,
    ACTIONS(1797), 1,
      sym_blank_line,
    ACTIONS(1799), 1,
      sym__text_indent,
    STATE(334), 1,
      sym_text_body,
    STATE(1058), 1,
      aux_sym_text_body_repeat1,
  [10615] = 1,
    ACTIONS(1018), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10622] = 1,
    ACTIONS(1020), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10629] = 1,
    ACTIONS(1801), 4,
      sym_blank_line,
      sym__comment_start,
      sym__line_start,
      ts_builtin_sym_end,
  [10636] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1803), 1,
      sym_blank_line,
    STATE(351), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10647] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1805), 1,
      sym_blank_line,
    STATE(352), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10658] = 3,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1807), 1,
      sym_colon,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [10669] = 3,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(1809), 1,
      sym_integer_literal,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [10680] = 1,
    ACTIONS(1022), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10687] = 2,
    STATE(939), 1,
      sym_text_ref,
    ACTIONS(1659), 3,
      sym_default_keyword,
      sym_none_keyword,
      sym_snake_name,
  [10696] = 1,
    ACTIONS(1024), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10703] = 4,
    ACTIONS(1661), 1,
      sym_runnable_ref,
    ACTIONS(1663), 1,
      sym_none_keyword,
    ACTIONS(1665), 1,
      sym_all_keyword,
    STATE(938), 1,
      sym_route_value,
  [10716] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1811), 1,
      sym_blank_line,
    STATE(414), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10727] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1813), 1,
      sym_blank_line,
    STATE(415), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10738] = 1,
    ACTIONS(1026), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10745] = 3,
    ACTIONS(137), 1,
      sym_newline,
    ACTIONS(1815), 1,
      sym_colon,
    ACTIONS(113), 2,
      sym__inline_comment,
      sym_text_line,
  [10756] = 3,
    ACTIONS(291), 1,
      sym_newline,
    ACTIONS(1817), 1,
      sym_integer_literal,
    ACTIONS(283), 2,
      sym__inline_comment,
      sym_text_line,
  [10767] = 1,
    ACTIONS(1028), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10774] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1819), 1,
      sym_blank_line,
    STATE(477), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10785] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1821), 1,
      sym_blank_line,
    STATE(478), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10796] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1823), 1,
      sym_blank_line,
    STATE(480), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10807] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1825), 1,
      sym_blank_line,
    STATE(481), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10818] = 2,
    STATE(1209), 1,
      sym_directive_op,
    ACTIONS(1597), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [10827] = 1,
    ACTIONS(1030), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10834] = 1,
    ACTIONS(1032), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10841] = 1,
    ACTIONS(1827), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10848] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1829), 1,
      sym_blank_line,
    STATE(241), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10859] = 3,
    ACTIONS(1833), 1,
      sym_comma,
    STATE(865), 1,
      aux_sym_recall_value_repeat1,
    ACTIONS(1831), 2,
      sym_newline,
      sym__inline_comment,
  [10870] = 3,
    ACTIONS(1838), 1,
      sym_comma,
    STATE(866), 1,
      aux_sym_route_value_repeat1,
    ACTIONS(1836), 2,
      sym_newline,
      sym__inline_comment,
  [10881] = 1,
    ACTIONS(1034), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10888] = 1,
    ACTIONS(1036), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10895] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1593), 1,
      sym__inline_comment,
    ACTIONS(1841), 1,
      sym_text_line,
    STATE(527), 1,
      sym_line_end,
  [10908] = 1,
    ACTIONS(1038), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10915] = 4,
    ACTIONS(950), 1,
      sym_newline,
    ACTIONS(1593), 1,
      sym__inline_comment,
    ACTIONS(1843), 1,
      sym_text_line,
    STATE(528), 1,
      sym_line_end,
  [10928] = 1,
    ACTIONS(1040), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10935] = 1,
    ACTIONS(1042), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10942] = 3,
    ACTIONS(962), 1,
      sym_indented_raw_text,
    ACTIONS(1845), 1,
      sym_blank_line,
    STATE(381), 2,
      sym_text_body_line,
      aux_sym__cap_text_body_repeat1,
  [10953] = 1,
    ACTIONS(928), 4,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
      sym__line_start,
  [10960] = 3,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1847), 1,
      sym_colon,
    STATE(1320), 1,
      sym__window_complement,
  [10970] = 1,
    ACTIONS(1118), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10976] = 1,
    ACTIONS(1849), 3,
      sym_arrow,
      sym_colon,
      sym_snake_name,
  [10982] = 1,
    ACTIONS(1120), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10988] = 1,
    ACTIONS(1851), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [10994] = 1,
    ACTIONS(1853), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11000] = 2,
    ACTIONS(273), 1,
      sym_all_keyword,
    ACTIONS(271), 2,
      sym_runnable_ref,
      sym_none_keyword,
  [11008] = 2,
    STATE(1235), 1,
      sym_param_name,
    ACTIONS(1855), 2,
      anon_sym__,
      sym_snake_name,
  [11016] = 1,
    ACTIONS(1857), 3,
      sym_blank_line,
      sym__dedent,
      sym_indented_raw_text,
  [11022] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(209), 1,
      sym_line_end,
  [11032] = 2,
    ACTIONS(1865), 1,
      sym_newline,
    ACTIONS(1863), 2,
      sym__inline_comment,
      sym_text_line,
  [11040] = 3,
    ACTIONS(1867), 1,
      sym_pascal_name,
    STATE(1264), 1,
      sym_struct_name,
    STATE(1331), 1,
      sym_type_name,
  [11050] = 1,
    ACTIONS(1118), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11056] = 1,
    ACTIONS(1120), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11062] = 1,
    ACTIONS(1112), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11068] = 1,
    ACTIONS(1114), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11074] = 1,
    ACTIONS(1116), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11080] = 1,
    ACTIONS(896), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11086] = 1,
    ACTIONS(898), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11092] = 1,
    ACTIONS(900), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11098] = 3,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1871), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [11108] = 1,
    ACTIONS(1112), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11114] = 1,
    ACTIONS(1114), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11120] = 1,
    ACTIONS(1116), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11126] = 1,
    ACTIONS(896), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11132] = 1,
    ACTIONS(898), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11138] = 1,
    ACTIONS(900), 3,
      sym_blank_line,
      sym__comment_start,
      sym__reduce_indent,
  [11144] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(200), 1,
      sym_line_end,
  [11154] = 3,
    ACTIONS(1873), 1,
      sym__inline_comment,
    ACTIONS(1875), 1,
      sym_newline,
    STATE(717), 1,
      sym_line_end,
  [11164] = 3,
    ACTIONS(537), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1294), 1,
      sym_statements,
  [11174] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1190), 1,
      sym_statements,
  [11184] = 1,
    ACTIONS(1877), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11190] = 1,
    ACTIONS(1130), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11196] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(174), 1,
      sym_line_end,
  [11206] = 1,
    ACTIONS(1132), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11212] = 1,
    ACTIONS(1134), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11218] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(808), 1,
      sym_line_end,
  [11228] = 1,
    ACTIONS(1136), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11234] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(181), 1,
      sym_line_end,
  [11244] = 1,
    ACTIONS(1879), 3,
      sym_arrow,
      sym_colon,
      sym_lparen,
  [11250] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(172), 1,
      sym_line_end,
  [11260] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(571), 1,
      sym_line_end,
  [11270] = 1,
    ACTIONS(1138), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11276] = 3,
    ACTIONS(329), 1,
      sym_flow_if_keyword,
    STATE(813), 1,
      sym__inline_if_complement,
    STATE(978), 1,
      sym__named_if_complement,
  [11286] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(814), 1,
      sym_line_end,
  [11296] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(103), 1,
      sym_statements,
  [11306] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(815), 1,
      sym_line_end,
  [11316] = 1,
    ACTIONS(1881), 3,
      sym_blank_line,
      sym__comment_start,
      sym__dedent,
  [11322] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(238), 1,
      sym_line_end,
  [11332] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(595), 1,
      sym_line_end,
  [11342] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(596), 1,
      sym_line_end,
  [11352] = 3,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1883), 1,
      sym_colon,
    STATE(1263), 1,
      sym__window_complement,
  [11362] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(104), 1,
      sym_statements,
  [11372] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(824), 1,
      sym_line_end,
  [11382] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(102), 1,
      sym_statements,
  [11392] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(207), 1,
      sym_line_end,
  [11402] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(175), 1,
      sym_line_end,
  [11412] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(603), 1,
      sym_line_end,
  [11422] = 3,
    ACTIONS(345), 1,
      sym_flow_if_keyword,
    STATE(607), 1,
      sym__inline_if_complement,
    STATE(945), 1,
      sym__named_if_complement,
  [11432] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(608), 1,
      sym_line_end,
  [11442] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(609), 1,
      sym_line_end,
  [11452] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(612), 1,
      sym_line_end,
  [11462] = 3,
    ACTIONS(1885), 1,
      sym__inline_comment,
    ACTIONS(1887), 1,
      sym_newline,
    STATE(613), 1,
      sym_line_end,
  [11472] = 3,
    ACTIONS(1885), 1,
      sym__inline_comment,
    ACTIONS(1887), 1,
      sym_newline,
    STATE(614), 1,
      sym_line_end,
  [11482] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(618), 1,
      sym_line_end,
  [11492] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(619), 1,
      sym_line_end,
  [11502] = 3,
    ACTIONS(1889), 1,
      sym_rparen,
    ACTIONS(1891), 1,
      sym_comma,
    STATE(958), 1,
      aux_sym_params_repeat1,
  [11512] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(622), 1,
      sym_line_end,
  [11522] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(623), 1,
      sym_line_end,
  [11532] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(624), 1,
      sym_line_end,
  [11542] = 2,
    ACTIONS(1893), 1,
      sym_colon,
    ACTIONS(1895), 2,
      sym_rparen,
      sym_comma,
  [11550] = 3,
    ACTIONS(853), 1,
      sym_flow_by_keyword,
    STATE(627), 1,
      sym__inline_by_complement,
    STATE(951), 1,
      sym__named_by_complement,
  [11560] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(629), 1,
      sym_line_end,
  [11570] = 3,
    ACTIONS(1873), 1,
      sym__inline_comment,
    ACTIONS(1875), 1,
      sym_newline,
    STATE(732), 1,
      sym_line_end,
  [11580] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(633), 1,
      sym_line_end,
  [11590] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(634), 1,
      sym_line_end,
  [11600] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(531), 1,
      sym_line_end,
  [11610] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(637), 1,
      sym_line_end,
  [11620] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(638), 1,
      sym_line_end,
  [11630] = 3,
    ACTIONS(1897), 1,
      sym__inline_comment,
    ACTIONS(1899), 1,
      sym_newline,
    STATE(262), 1,
      sym_line_end,
  [11640] = 3,
    ACTIONS(1897), 1,
      sym__inline_comment,
    ACTIONS(1899), 1,
      sym_newline,
    STATE(325), 1,
      sym_line_end,
  [11650] = 1,
    ACTIONS(1901), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [11656] = 3,
    ACTIONS(1903), 1,
      sym_rparen,
    ACTIONS(1905), 1,
      sym_comma,
    STATE(958), 1,
      aux_sym_params_repeat1,
  [11666] = 2,
    ACTIONS(1910), 1,
      sym_newline,
    ACTIONS(1908), 2,
      sym__inline_comment,
      sym_text_line,
  [11674] = 2,
    ACTIONS(1914), 1,
      sym_newline,
    ACTIONS(1912), 2,
      sym__inline_comment,
      sym_text_line,
  [11682] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(216), 1,
      sym_line_end,
  [11692] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(836), 1,
      sym_line_end,
  [11702] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(532), 1,
      sym_line_end,
  [11712] = 3,
    ACTIONS(1585), 1,
      sym_newline,
    ACTIONS(1916), 1,
      sym__inline_comment,
    STATE(910), 1,
      sym_line_end,
  [11722] = 1,
    ACTIONS(1918), 3,
      sym_newline,
      sym__inline_comment,
      sym_colon,
  [11728] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(837), 1,
      sym_line_end,
  [11738] = 3,
    ACTIONS(537), 1,
      sym__line_start,
    STATE(101), 1,
      sym__flow_statement,
    STATE(1302), 1,
      sym_statements,
  [11748] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(357), 1,
      sym_line_end,
  [11758] = 3,
    ACTIONS(1920), 1,
      sym_colon,
    ACTIONS(1922), 1,
      sym_snake_name,
    STATE(1329), 1,
      sym_context_name,
  [11768] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(243), 1,
      sym_line_end,
  [11778] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(244), 1,
      sym_line_end,
  [11788] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(193), 1,
      sym_line_end,
  [11798] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(846), 1,
      sym_line_end,
  [11808] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(191), 1,
      sym_line_end,
  [11818] = 1,
    ACTIONS(1924), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [11824] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(848), 1,
      sym_line_end,
  [11834] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(251), 1,
      sym_line_end,
  [11844] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(852), 1,
      sym_line_end,
  [11854] = 1,
    ACTIONS(1112), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11860] = 3,
    ACTIONS(347), 1,
      sym_flow_if_keyword,
    STATE(255), 1,
      sym__inline_if_complement,
    STATE(990), 1,
      sym__named_if_complement,
  [11870] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(256), 1,
      sym_line_end,
  [11880] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(257), 1,
      sym_line_end,
  [11890] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(263), 1,
      sym_line_end,
  [11900] = 3,
    ACTIONS(1891), 1,
      sym_comma,
    ACTIONS(1926), 1,
      sym_rparen,
    STATE(942), 1,
      aux_sym_params_repeat1,
  [11910] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(267), 1,
      sym_line_end,
  [11920] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(268), 1,
      sym_line_end,
  [11930] = 1,
    ACTIONS(1114), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [11936] = 2,
    STATE(165), 1,
      sym__order_complement,
    ACTIONS(1928), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [11944] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(272), 1,
      sym_line_end,
  [11954] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(273), 1,
      sym_line_end,
  [11964] = 3,
    ACTIONS(819), 1,
      sym_flow_by_keyword,
    STATE(862), 1,
      sym__inline_by_complement,
    STATE(1043), 1,
      sym__named_by_complement,
  [11974] = 3,
    ACTIONS(855), 1,
      sym_flow_by_keyword,
    STATE(276), 1,
      sym__inline_by_complement,
    STATE(997), 1,
      sym__named_by_complement,
  [11984] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(278), 1,
      sym_line_end,
  [11994] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(173), 1,
      sym_line_end,
  [12004] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(361), 1,
      sym_line_end,
  [12014] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(282), 1,
      sym_line_end,
  [12024] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(283), 1,
      sym_line_end,
  [12034] = 1,
    ACTIONS(1116), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12040] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(286), 1,
      sym_line_end,
  [12050] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(287), 1,
      sym_line_end,
  [12060] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(363), 1,
      sym_line_end,
  [12070] = 3,
    ACTIONS(1930), 1,
      sym_colon,
    ACTIONS(1932), 1,
      sym_snake_name,
    STATE(1310), 1,
      sym_instruct_name,
  [12080] = 1,
    ACTIONS(1759), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12086] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(195), 1,
      sym_line_end,
  [12096] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(863), 1,
      sym_line_end,
  [12106] = 3,
    ACTIONS(1934), 1,
      sym__inline_comment,
    ACTIONS(1936), 1,
      sym_newline,
    STATE(364), 1,
      sym_line_end,
  [12116] = 2,
    STATE(1054), 1,
      sym_recall_source,
    ACTIONS(714), 2,
      anon_sym_far,
      anon_sym_near,
  [12124] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(197), 1,
      sym_line_end,
  [12134] = 1,
    ACTIONS(896), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12140] = 1,
    ACTIONS(898), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12146] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(868), 1,
      sym_line_end,
  [12156] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(789), 1,
      sym_line_end,
  [12166] = 1,
    ACTIONS(900), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12172] = 1,
    ACTIONS(1118), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12178] = 3,
    ACTIONS(1194), 1,
      sym__inline_comment,
    ACTIONS(1196), 1,
      sym_newline,
    STATE(723), 1,
      sym_line_end,
  [12188] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1180), 1,
      sym_statements,
  [12198] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(166), 1,
      sym_line_end,
  [12208] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(333), 1,
      sym_line_end,
  [12218] = 1,
    ACTIONS(1629), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12224] = 1,
    ACTIONS(1635), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12230] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(202), 1,
      sym_line_end,
  [12240] = 1,
    ACTIONS(1637), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12246] = 2,
    STATE(186), 1,
      sym__order_complement,
    ACTIONS(1928), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12254] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(132), 1,
      sym_statements,
  [12264] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(133), 1,
      sym_statements,
  [12274] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(134), 1,
      sym_statements,
  [12284] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(135), 1,
      sym_statements,
  [12294] = 1,
    ACTIONS(1120), 3,
      sym_blank_line,
      sym__comment_start,
      sym__indent,
  [12300] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(206), 1,
      sym_line_end,
  [12310] = 2,
    STATE(187), 1,
      sym__order_complement,
    ACTIONS(1928), 2,
      sym_flow_ascending_keyword,
      sym_flow_descending_keyword,
  [12318] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(146), 1,
      sym_statements,
  [12328] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(147), 1,
      sym_statements,
  [12338] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(148), 1,
      sym_statements,
  [12348] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(149), 1,
      sym_statements,
  [12358] = 1,
    ACTIONS(1699), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12364] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(796), 1,
      sym_line_end,
  [12374] = 1,
    ACTIONS(1705), 3,
      sym_newline,
      sym__inline_comment,
      sym_array_suffix,
  [12380] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(797), 1,
      sym_line_end,
  [12390] = 3,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1938), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [12400] = 1,
    ACTIONS(1940), 3,
      sym_newline,
      sym__inline_comment,
      sym_flow_in_keyword,
  [12406] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(524), 1,
      sym_line_end,
  [12416] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1131), 1,
      sym_statements,
  [12426] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(525), 1,
      sym_line_end,
  [12436] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1134), 1,
      sym_statements,
  [12446] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1135), 1,
      sym_statements,
  [12456] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1154), 1,
      sym_statements,
  [12466] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1137), 1,
      sym_statements,
  [12476] = 3,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1942), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [12486] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(375), 1,
      sym_line_end,
  [12496] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1146), 1,
      sym_statements,
  [12506] = 3,
    ACTIONS(946), 1,
      sym__inline_comment,
    ACTIONS(950), 1,
      sym_newline,
    STATE(526), 1,
      sym_line_end,
  [12516] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1148), 1,
      sym_statements,
  [12526] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1149), 1,
      sym_statements,
  [12536] = 1,
    ACTIONS(1831), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12542] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1151), 1,
      sym_statements,
  [12552] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(192), 1,
      sym_line_end,
  [12562] = 3,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1944), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [12572] = 3,
    ACTIONS(1869), 1,
      sym_blank_line,
    ACTIONS(1946), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [12582] = 1,
    ACTIONS(1836), 3,
      sym_newline,
      sym__inline_comment,
      sym_comma,
  [12588] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(495), 1,
      sym_line_end,
  [12598] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(496), 1,
      sym_line_end,
  [12608] = 3,
    ACTIONS(445), 1,
      sym__line_start,
    STATE(84), 1,
      sym__flow_statement,
    STATE(91), 1,
      sym_statements,
  [12618] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(499), 1,
      sym_line_end,
  [12628] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(503), 1,
      sym_line_end,
  [12638] = 3,
    ACTIONS(577), 1,
      sym__line_start,
    STATE(108), 1,
      sym__flow_statement,
    STATE(1136), 1,
      sym_statements,
  [12648] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(504), 1,
      sym_line_end,
  [12658] = 1,
    ACTIONS(1914), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [12664] = 3,
    ACTIONS(1948), 1,
      sym_blank_line,
    ACTIONS(1951), 1,
      sym__text_indent,
    STATE(1068), 1,
      aux_sym_text_body_repeat1,
  [12674] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(507), 1,
      sym_line_end,
  [12684] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(510), 1,
      sym_line_end,
  [12694] = 2,
    ACTIONS(1579), 1,
      sym_newline,
    ACTIONS(1577), 2,
      sym__inline_comment,
      sym_text_line,
  [12702] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(512), 1,
      sym_line_end,
  [12712] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(217), 1,
      sym_line_end,
  [12722] = 3,
    ACTIONS(884), 1,
      sym_flow_windowing_keyword,
    ACTIONS(1953), 1,
      sym_colon,
    STATE(1324), 1,
      sym__window_complement,
  [12732] = 3,
    ACTIONS(1859), 1,
      sym__inline_comment,
    ACTIONS(1861), 1,
      sym_newline,
    STATE(516), 1,
      sym_line_end,
  [12742] = 3,
    ACTIONS(1340), 1,
      sym__inline_comment,
    ACTIONS(1342), 1,
      sym_newline,
    STATE(271), 1,
      sym_line_end,
  [12752] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1196), 1,
      sym_param_doc_tag,
  [12759] = 2,
    ACTIONS(1957), 1,
      sym_comment_text,
    ACTIONS(1959), 1,
      sym__comment_end,
  [12766] = 2,
    ACTIONS(1961), 1,
      sym_comment_text,
    ACTIONS(1963), 1,
      sym__comment_end,
  [12773] = 2,
    ACTIONS(1965), 1,
      anon_sym_EQ,
    STATE(1087), 1,
      sym_assign_operator,
  [12780] = 1,
    ACTIONS(1118), 2,
      sym_blank_line,
      sym__text_indent,
  [12785] = 1,
    ACTIONS(1166), 2,
      sym_newline,
      sym__inline_comment,
  [12790] = 2,
    ACTIONS(1967), 1,
      anon_sym_lanes,
    STATE(1082), 1,
      sym_flow_lanes_keyword,
  [12797] = 2,
    ACTIONS(1969), 1,
      anon_sym_EQ,
    STATE(12), 1,
      sym_assign_operator,
  [12804] = 1,
    ACTIONS(1971), 2,
      sym_flow_windowing_keyword,
      sym_colon,
  [12809] = 1,
    ACTIONS(1973), 2,
      sym_newline,
      sym__inline_comment,
  [12814] = 2,
    ACTIONS(1975), 1,
      sym_text_line,
    STATE(1006), 1,
      sym_property_value,
  [12821] = 2,
    ACTIONS(926), 1,
      sym_snake_name,
    STATE(965), 1,
      sym_runnable,
  [12828] = 2,
    ACTIONS(111), 1,
      sym__flow_raw_text,
    STATE(176), 1,
      sym__implicit_run_line,
  [12835] = 1,
    ACTIONS(1168), 2,
      sym_newline,
      sym__inline_comment,
  [12840] = 2,
    ACTIONS(1977), 1,
      sym__reduce_text_start,
    STATE(540), 1,
      sym__reduce_text_body,
  [12847] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(413), 1,
      sym__from_complement,
  [12854] = 2,
    ACTIONS(81), 1,
      sym__flow_raw_text,
    STATE(509), 1,
      sym__implicit_run_line,
  [12861] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1224), 1,
      sym_param_doc_tag,
  [12868] = 2,
    ACTIONS(1979), 1,
      sym_arrow,
    ACTIONS(1981), 1,
      sym_colon,
  [12875] = 1,
    ACTIONS(1983), 2,
      sym_newline,
      sym__inline_comment,
  [12880] = 1,
    ACTIONS(1985), 2,
      sym_flow_by_keyword,
      sym_flow_in_keyword,
  [12885] = 2,
    ACTIONS(191), 1,
      sym__agic_raw_text,
    STATE(502), 1,
      sym__unroled_message_line,
  [12892] = 2,
    ACTIONS(1987), 1,
      sym_comment_text,
    ACTIONS(1989), 1,
      sym__comment_end,
  [12899] = 2,
    ACTIONS(1991), 1,
      sym_comment_text,
    ACTIONS(1993), 1,
      sym__comment_end,
  [12906] = 1,
    ACTIONS(1995), 2,
      sym_arrow,
      sym_colon,
  [12911] = 1,
    ACTIONS(1997), 2,
      sym_integer_literal,
      sym_default_keyword,
  [12916] = 1,
    ACTIONS(1999), 2,
      sym_newline,
      sym__inline_comment,
  [12921] = 2,
    ACTIONS(2001), 1,
      sym_comment_text,
    ACTIONS(2003), 1,
      sym__comment_end,
  [12928] = 2,
    ACTIONS(2005), 1,
      sym_comment_text,
    ACTIONS(2007), 1,
      sym__comment_end,
  [12935] = 2,
    ACTIONS(1977), 1,
      sym__reduce_text_start,
    STATE(719), 1,
      sym__reduce_text_body,
  [12942] = 2,
    ACTIONS(2009), 1,
      sym_comment_text,
    ACTIONS(2011), 1,
      sym__comment_end,
  [12949] = 2,
    ACTIONS(2013), 1,
      sym_comment_text,
    ACTIONS(2015), 1,
      sym__comment_end,
  [12956] = 2,
    ACTIONS(2017), 1,
      sym_comment_text,
    ACTIONS(2019), 1,
      sym__comment_end,
  [12963] = 2,
    ACTIONS(2021), 1,
      sym_comment_text,
    ACTIONS(2023), 1,
      sym__comment_end,
  [12970] = 2,
    ACTIONS(517), 1,
      sym__line_start,
    STATE(117), 1,
      sym_field,
  [12977] = 2,
    ACTIONS(2025), 1,
      sym_comment_text,
    ACTIONS(2027), 1,
      sym__comment_end,
  [12984] = 2,
    ACTIONS(2029), 1,
      sym_comment_text,
    ACTIONS(2031), 1,
      sym__comment_end,
  [12991] = 2,
    ACTIONS(2033), 1,
      sym_comment_text,
    ACTIONS(2035), 1,
      sym__comment_end,
  [12998] = 2,
    ACTIONS(2037), 1,
      sym_comment_text,
    ACTIONS(2039), 1,
      sym__comment_end,
  [13005] = 2,
    ACTIONS(2041), 1,
      sym__snake_kebab_name,
    STATE(1282), 1,
      sym_job_name,
  [13012] = 2,
    ACTIONS(2043), 1,
      sym_comment_text,
    ACTIONS(2045), 1,
      sym__comment_end,
  [13019] = 2,
    ACTIONS(2047), 1,
      sym_comment_text,
    ACTIONS(2049), 1,
      sym__comment_end,
  [13026] = 2,
    ACTIONS(2051), 1,
      sym_comment_text,
    ACTIONS(2053), 1,
      sym__comment_end,
  [13033] = 2,
    ACTIONS(2055), 1,
      sym_comment_text,
    ACTIONS(2057), 1,
      sym__comment_end,
  [13040] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1226), 1,
      sym_param_doc_tag,
  [13047] = 2,
    ACTIONS(1977), 1,
      sym__reduce_text_start,
    STATE(533), 1,
      sym__reduce_text_body,
  [13054] = 1,
    ACTIONS(1739), 2,
      sym_newline,
      sym__inline_comment,
  [13059] = 1,
    ACTIONS(2059), 2,
      sym_integer_literal,
      sym_default_keyword,
  [13064] = 2,
    ACTIONS(2061), 1,
      sym_arrow,
    ACTIONS(2063), 1,
      sym_colon,
  [13071] = 2,
    ACTIONS(2065), 1,
      sym_snake_name,
    STATE(367), 1,
      sym_agent,
  [13078] = 1,
    ACTIONS(1743), 2,
      sym_newline,
      sym__inline_comment,
  [13083] = 2,
    ACTIONS(1969), 1,
      anon_sym_EQ,
    STATE(14), 1,
      sym_assign_operator,
  [13090] = 2,
    ACTIONS(2067), 1,
      sym__one_integer_literal,
    ACTIONS(2069), 1,
      sym__other_integer_literal,
  [13097] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(522), 1,
      sym__from_complement,
  [13104] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(386), 1,
      sym__until_complement,
  [13111] = 2,
    ACTIONS(2071), 1,
      sym__snake_kebab_name,
    STATE(1223), 1,
      sym_cap_name,
  [13118] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(389), 1,
      sym__from_complement,
  [13125] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(391), 1,
      sym__until_complement,
  [13132] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(392), 1,
      sym__until_complement,
  [13139] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(418), 1,
      sym__until_complement,
  [13146] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(400), 1,
      sym__until_complement,
  [13153] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1278), 1,
      sym_param_doc_tag,
  [13160] = 2,
    ACTIONS(2071), 1,
      sym__snake_kebab_name,
    STATE(1321), 1,
      sym_cap_name,
  [13167] = 2,
    ACTIONS(2073), 1,
      sym_arrow,
    ACTIONS(2075), 1,
      sym_colon,
  [13174] = 2,
    ACTIONS(2077), 1,
      sym_arrow,
    ACTIONS(2079), 1,
      sym_colon,
  [13181] = 2,
    ACTIONS(2065), 1,
      sym_snake_name,
    STATE(430), 1,
      sym_agent,
  [13188] = 2,
    ACTIONS(2071), 1,
      sym__snake_kebab_name,
    STATE(1216), 1,
      sym_cap_name,
  [13195] = 2,
    ACTIONS(1969), 1,
      anon_sym_EQ,
    STATE(13), 1,
      sym_assign_operator,
  [13202] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(448), 1,
      sym__from_complement,
  [13209] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(449), 1,
      sym__until_complement,
  [13216] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(452), 1,
      sym__from_complement,
  [13223] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(454), 1,
      sym__until_complement,
  [13230] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(455), 1,
      sym__until_complement,
  [13237] = 2,
    ACTIONS(2081), 1,
      sym_colon,
    STATE(881), 1,
      sym_inline_agic_body,
  [13244] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(463), 1,
      sym__until_complement,
  [13251] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1233), 1,
      sym_param_doc_tag,
  [13258] = 2,
    ACTIONS(2083), 1,
      sym__one_integer_literal,
    ACTIONS(2085), 1,
      sym__other_integer_literal,
  [13265] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(387), 1,
      sym__until_complement,
  [13272] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1253), 1,
      sym_param_doc_tag,
  [13279] = 2,
    ACTIONS(2087), 1,
      sym_comment_text,
    ACTIONS(2089), 1,
      sym__comment_end,
  [13286] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1267), 1,
      sym_param_doc_tag,
  [13293] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1276), 1,
      sym_param_doc_tag,
  [13300] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1292), 1,
      sym_param_doc_tag,
  [13307] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1306), 1,
      sym_param_doc_tag,
  [13314] = 2,
    ACTIONS(1955), 1,
      anon_sym_ATparam,
    STATE(1317), 1,
      sym_param_doc_tag,
  [13321] = 2,
    ACTIONS(479), 1,
      sym__from_start,
    STATE(382), 1,
      sym__from_complement,
  [13328] = 2,
    ACTIONS(2091), 1,
      sym_comment_text,
    ACTIONS(2093), 1,
      sym__comment_end,
  [13335] = 2,
    ACTIONS(2095), 1,
      anon_sym_EQ,
    STATE(1124), 1,
      sym_assign_operator,
  [13342] = 2,
    ACTIONS(2095), 1,
      anon_sym_EQ,
    STATE(847), 1,
      sym_assign_operator,
  [13349] = 2,
    ACTIONS(2097), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_assign_operator,
  [13356] = 2,
    ACTIONS(2099), 1,
      anon_sym_EQ,
    STATE(849), 1,
      sym_assign_operator,
  [13363] = 2,
    ACTIONS(517), 1,
      sym__line_start,
    STATE(141), 1,
      sym_field,
  [13370] = 2,
    ACTIONS(2065), 1,
      sym_snake_name,
    STATE(260), 1,
      sym_agent,
  [13377] = 2,
    ACTIONS(2071), 1,
      sym__snake_kebab_name,
    STATE(1202), 1,
      sym_cap_name,
  [13384] = 1,
    ACTIONS(2101), 2,
      sym_rparen,
      sym_comma,
  [13389] = 2,
    ACTIONS(2103), 1,
      sym_comment_text,
    ACTIONS(2105), 1,
      sym__comment_end,
  [13396] = 2,
    ACTIONS(2095), 1,
      anon_sym_EQ,
    STATE(1102), 1,
      sym_assign_operator,
  [13403] = 2,
    ACTIONS(51), 1,
      sym__flow_raw_text,
    STATE(239), 1,
      sym__implicit_run_line,
  [13410] = 1,
    ACTIONS(2107), 2,
      sym_rparen,
      sym_comma,
  [13415] = 2,
    ACTIONS(2109), 1,
      sym_text_line,
    STATE(904), 1,
      sym_cap_ref,
  [13422] = 1,
    ACTIONS(2111), 2,
      sym_rparen,
      sym_comma,
  [13427] = 2,
    ACTIONS(2113), 1,
      sym_snake_name,
    STATE(1188), 1,
      sym_field_name,
  [13434] = 2,
    ACTIONS(2095), 1,
      anon_sym_EQ,
    STATE(710), 1,
      sym_assign_operator,
  [13441] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(417), 1,
      sym__until_complement,
  [13448] = 2,
    ACTIONS(2115), 1,
      sym_comment_text,
    ACTIONS(2117), 1,
      sym__comment_end,
  [13455] = 2,
    ACTIONS(2119), 1,
      sym_snake_name,
    STATE(1080), 1,
      sym_property_key,
  [13462] = 2,
    ACTIONS(2121), 1,
      anon_sym_lanes,
    STATE(358), 1,
      sym_flow_lanes_keyword,
  [13469] = 2,
    ACTIONS(2097), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_assign_operator,
  [13476] = 1,
    ACTIONS(2123), 2,
      sym_optional_marker,
      sym_colon,
  [13481] = 1,
    ACTIONS(2125), 2,
      sym_arrow,
      sym_colon,
  [13486] = 1,
    ACTIONS(2127), 2,
      sym_newline,
      sym__inline_comment,
  [13491] = 2,
    ACTIONS(2129), 1,
      sym_optional_marker,
    ACTIONS(2131), 1,
      sym_colon,
  [13498] = 1,
    ACTIONS(1120), 2,
      sym_blank_line,
      sym__text_indent,
  [13503] = 2,
    ACTIONS(473), 1,
      sym__until_start,
    STATE(428), 1,
      sym__until_complement,
  [13510] = 2,
    ACTIONS(2099), 1,
      anon_sym_EQ,
    STATE(711), 1,
      sym_assign_operator,
  [13517] = 1,
    ACTIONS(2133), 2,
      sym_arrow,
      sym_colon,
  [13522] = 2,
    ACTIONS(1977), 1,
      sym__reduce_text_start,
    STATE(530), 1,
      sym__reduce_text_body,
  [13529] = 2,
    ACTIONS(2041), 1,
      sym__snake_kebab_name,
    STATE(1205), 1,
      sym_job_name,
  [13536] = 1,
    ACTIONS(2135), 1,
      sym__dedent,
  [13540] = 1,
    ACTIONS(2137), 1,
      sym__comment_end,
  [13544] = 1,
    ACTIONS(2139), 1,
      sym_newline,
  [13548] = 1,
    ACTIONS(2141), 1,
      sym_newline,
  [13552] = 1,
    ACTIONS(2143), 1,
      sym_colon,
  [13556] = 1,
    ACTIONS(2145), 1,
      sym_colon,
  [13560] = 1,
    ACTIONS(2147), 1,
      anon_sym_EQ,
  [13564] = 1,
    ACTIONS(2149), 1,
      sym_colon,
  [13568] = 1,
    ACTIONS(2151), 1,
      sym__dedent,
  [13572] = 1,
    ACTIONS(2153), 1,
      sym_flow_until_keyword,
  [13576] = 1,
    ACTIONS(2155), 1,
      sym_colon,
  [13580] = 1,
    ACTIONS(2157), 1,
      sym_flow_time_keyword,
  [13584] = 1,
    ACTIONS(2159), 1,
      sym_runnable_ref,
  [13588] = 1,
    ACTIONS(1643), 1,
      sym__doc_space,
  [13592] = 1,
    ACTIONS(2059), 1,
      sym_directive_value,
  [13596] = 1,
    ACTIONS(357), 1,
      sym__dedent,
  [13600] = 1,
    ACTIONS(2161), 1,
      sym_flow_exec_keyword,
  [13604] = 1,
    ACTIONS(2163), 1,
      sym__dedent,
  [13608] = 1,
    ACTIONS(2165), 1,
      sym_colon,
  [13612] = 1,
    ACTIONS(2167), 1,
      sym_integer_literal,
  [13616] = 1,
    ACTIONS(2169), 1,
      sym__comment_end,
  [13620] = 1,
    ACTIONS(2171), 1,
      sym_colon,
  [13624] = 1,
    ACTIONS(2173), 1,
      sym_colon,
  [13628] = 1,
    ACTIONS(2175), 1,
      sym_colon,
  [13632] = 1,
    ACTIONS(2177), 1,
      sym_colon,
  [13636] = 1,
    ACTIONS(2179), 1,
      sym_flow_exec_keyword,
  [13640] = 1,
    ACTIONS(2181), 1,
      sym__doc_space,
  [13644] = 1,
    ACTIONS(2183), 1,
      sym_flow_exec_keyword,
  [13648] = 1,
    ACTIONS(2185), 1,
      sym_colon,
  [13652] = 1,
    ACTIONS(2187), 1,
      sym__comment_end,
  [13656] = 1,
    ACTIONS(2189), 1,
      sym_colon,
  [13660] = 1,
    ACTIONS(2191), 1,
      sym__comment_end,
  [13664] = 1,
    ACTIONS(2193), 1,
      sym_newline,
  [13668] = 1,
    ACTIONS(2195), 1,
      sym__dedent,
  [13672] = 1,
    ACTIONS(2197), 1,
      sym__comment_end,
  [13676] = 1,
    ACTIONS(2199), 1,
      sym__dedent,
  [13680] = 1,
    ACTIONS(2201), 1,
      sym__comment_end,
  [13684] = 1,
    ACTIONS(2203), 1,
      sym_colon,
  [13688] = 1,
    ACTIONS(2205), 1,
      sym__comment_end,
  [13692] = 1,
    ACTIONS(2207), 1,
      sym_newline,
  [13696] = 1,
    ACTIONS(2209), 1,
      sym__doc_space,
  [13700] = 1,
    ACTIONS(2211), 1,
      sym_colon,
  [13704] = 1,
    ACTIONS(2213), 1,
      sym_flow_lane_keyword,
  [13708] = 1,
    ACTIONS(2215), 1,
      sym_flow_exec_keyword,
  [13712] = 1,
    ACTIONS(337), 1,
      sym__dedent,
  [13716] = 1,
    ACTIONS(2217), 1,
      sym_colon,
  [13720] = 1,
    ACTIONS(2219), 1,
      sym_integer_literal,
  [13724] = 1,
    ACTIONS(2157), 1,
      sym_flow_times_keyword,
  [13728] = 1,
    ACTIONS(2221), 1,
      sym_newline,
  [13732] = 1,
    ACTIONS(2223), 1,
      sym_colon,
  [13736] = 1,
    ACTIONS(2225), 1,
      sym_colon,
  [13740] = 1,
    ACTIONS(2227), 1,
      sym_flow_exec_keyword,
  [13744] = 1,
    ACTIONS(2229), 1,
      sym_colon,
  [13748] = 1,
    ACTIONS(2231), 1,
      sym__dedent,
  [13752] = 1,
    ACTIONS(2233), 1,
      sym__comment_end,
  [13756] = 1,
    ACTIONS(2235), 1,
      sym_newline,
  [13760] = 1,
    ACTIONS(2237), 1,
      sym__comment_end,
  [13764] = 1,
    ACTIONS(2239), 1,
      sym__comment_end,
  [13768] = 1,
    ACTIONS(2241), 1,
      sym__comment_end,
  [13772] = 1,
    ACTIONS(2243), 1,
      sym_colon,
  [13776] = 1,
    ACTIONS(2245), 1,
      sym_newline,
  [13780] = 1,
    ACTIONS(2247), 1,
      sym_colon,
  [13784] = 1,
    ACTIONS(1605), 1,
      sym__dedent,
  [13788] = 1,
    ACTIONS(2249), 1,
      sym_directive_value,
  [13792] = 1,
    ACTIONS(2251), 1,
      sym_newline,
  [13796] = 1,
    ACTIONS(2253), 1,
      sym_comment_text,
  [13800] = 1,
    ACTIONS(1545), 1,
      sym__dedent,
  [13804] = 1,
    ACTIONS(2255), 1,
      sym_colon,
  [13808] = 1,
    ACTIONS(2257), 1,
      sym_colon,
  [13812] = 1,
    ACTIONS(2259), 1,
      sym_colon,
  [13816] = 1,
    ACTIONS(2261), 1,
      sym__comment_end,
  [13820] = 1,
    ACTIONS(2263), 1,
      sym__comment_end,
  [13824] = 1,
    ACTIONS(2265), 1,
      sym__comment_end,
  [13828] = 1,
    ACTIONS(2267), 1,
      sym_newline,
  [13832] = 1,
    ACTIONS(1997), 1,
      sym_directive_value,
  [13836] = 1,
    ACTIONS(2269), 1,
      sym__comment_end,
  [13840] = 1,
    ACTIONS(2271), 1,
      sym__comment_end,
  [13844] = 1,
    ACTIONS(2273), 1,
      sym__comment_end,
  [13848] = 1,
    ACTIONS(2275), 1,
      sym_flow_exec_keyword,
  [13852] = 1,
    ACTIONS(2277), 1,
      sym__comment_end,
  [13856] = 1,
    ACTIONS(2279), 1,
      sym__comment_end,
  [13860] = 1,
    ACTIONS(2281), 1,
      sym__comment_end,
  [13864] = 1,
    ACTIONS(2283), 1,
      sym__comment_end,
  [13868] = 1,
    ACTIONS(2285), 1,
      sym__comment_end,
  [13872] = 1,
    ACTIONS(2287), 1,
      sym_newline,
  [13876] = 1,
    ACTIONS(2289), 1,
      sym_newline,
  [13880] = 1,
    ACTIONS(2291), 1,
      sym__comment_end,
  [13884] = 1,
    ACTIONS(2293), 1,
      sym_colon,
  [13888] = 1,
    ACTIONS(2295), 1,
      sym_colon,
  [13892] = 1,
    ACTIONS(2297), 1,
      sym__comment_end,
  [13896] = 1,
    ACTIONS(2299), 1,
      sym_colon,
  [13900] = 1,
    ACTIONS(2301), 1,
      sym_newline,
  [13904] = 1,
    ACTIONS(2303), 1,
      sym_newline,
  [13908] = 1,
    ACTIONS(2305), 1,
      sym_colon,
  [13912] = 1,
    ACTIONS(2307), 1,
      sym__comment_end,
  [13916] = 1,
    ACTIONS(2309), 1,
      sym__comment_end,
  [13920] = 1,
    ACTIONS(2311), 1,
      sym_colon,
  [13924] = 1,
    ACTIONS(2313), 1,
      sym__comment_end,
  [13928] = 1,
    ACTIONS(2315), 1,
      sym_colon,
  [13932] = 1,
    ACTIONS(2317), 1,
      sym__dedent,
  [13936] = 1,
    ACTIONS(2319), 1,
      sym_flow_from_keyword,
  [13940] = 1,
    ACTIONS(2321), 1,
      sym_integer_literal,
  [13944] = 1,
    ACTIONS(2323), 1,
      sym_newline,
  [13948] = 1,
    ACTIONS(2325), 1,
      sym_integer_literal,
  [13952] = 1,
    ACTIONS(2327), 1,
      sym_colon,
  [13956] = 1,
    ACTIONS(2329), 1,
      sym__comment_end,
  [13960] = 1,
    ACTIONS(2331), 1,
      sym__dedent,
  [13964] = 1,
    ACTIONS(2333), 1,
      sym__dedent,
  [13968] = 1,
    ACTIONS(2335), 1,
      sym__comment_end,
  [13972] = 1,
    ACTIONS(2337), 1,
      sym__comment_end,
  [13976] = 1,
    ACTIONS(2339), 1,
      sym_flow_lane_keyword,
  [13980] = 1,
    ACTIONS(2341), 1,
      sym__comment_end,
  [13984] = 1,
    ACTIONS(2343), 1,
      sym_newline,
  [13988] = 1,
    ACTIONS(2345), 1,
      sym_newline,
  [13992] = 1,
    ACTIONS(2347), 1,
      sym__dedent,
  [13996] = 1,
    ACTIONS(2349), 1,
      sym_colon,
  [14000] = 1,
    ACTIONS(2351), 1,
      sym_cap_kind,
  [14004] = 1,
    ACTIONS(2353), 1,
      sym_colon,
  [14008] = 1,
    ACTIONS(273), 1,
      sym_text_line,
  [14012] = 1,
    ACTIONS(2355), 1,
      sym__comment_end,
  [14016] = 1,
    ACTIONS(2357), 1,
      sym__comment_end,
  [14020] = 1,
    ACTIONS(1865), 1,
      anon_sym_EQ,
  [14024] = 1,
    ACTIONS(2359), 1,
      sym__comment_end,
  [14028] = 1,
    ACTIONS(2361), 1,
      sym_newline,
  [14032] = 1,
    ACTIONS(2363), 1,
      sym_integer_literal,
  [14036] = 1,
    ACTIONS(2365), 1,
      sym_colon,
  [14040] = 1,
    ACTIONS(2367), 1,
      sym_colon,
  [14044] = 1,
    ACTIONS(2369), 1,
      sym_colon,
  [14048] = 1,
    ACTIONS(2371), 1,
      ts_builtin_sym_end,
  [14052] = 1,
    ACTIONS(2373), 1,
      sym_colon,
  [14056] = 1,
    ACTIONS(2375), 1,
      sym_colon,
  [14060] = 1,
    ACTIONS(2377), 1,
      sym__dedent,
  [14064] = 1,
    ACTIONS(2379), 1,
      sym_colon,
  [14068] = 1,
    ACTIONS(2381), 1,
      anon_sym_EQ,
  [14072] = 1,
    ACTIONS(2383), 1,
      sym_colon,
  [14076] = 1,
    ACTIONS(2385), 1,
      sym_colon,
  [14080] = 1,
    ACTIONS(2387), 1,
      sym_colon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 233,
  [SMALL_STATE(11)] = 283,
  [SMALL_STATE(12)] = 334,
  [SMALL_STATE(13)] = 390,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 531,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 586,
  [SMALL_STATE(19)] = 612,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 671,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 770,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 853,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 901,
  [SMALL_STATE(30)] = 925,
  [SMALL_STATE(31)] = 949,
  [SMALL_STATE(32)] = 973,
  [SMALL_STATE(33)] = 997,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1069,
  [SMALL_STATE(37)] = 1101,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1149,
  [SMALL_STATE(40)] = 1181,
  [SMALL_STATE(41)] = 1205,
  [SMALL_STATE(42)] = 1229,
  [SMALL_STATE(43)] = 1253,
  [SMALL_STATE(44)] = 1277,
  [SMALL_STATE(45)] = 1301,
  [SMALL_STATE(46)] = 1325,
  [SMALL_STATE(47)] = 1357,
  [SMALL_STATE(48)] = 1381,
  [SMALL_STATE(49)] = 1410,
  [SMALL_STATE(50)] = 1439,
  [SMALL_STATE(51)] = 1468,
  [SMALL_STATE(52)] = 1497,
  [SMALL_STATE(53)] = 1523,
  [SMALL_STATE(54)] = 1549,
  [SMALL_STATE(55)] = 1573,
  [SMALL_STATE(56)] = 1599,
  [SMALL_STATE(57)] = 1625,
  [SMALL_STATE(58)] = 1649,
  [SMALL_STATE(59)] = 1675,
  [SMALL_STATE(60)] = 1701,
  [SMALL_STATE(61)] = 1727,
  [SMALL_STATE(62)] = 1751,
  [SMALL_STATE(63)] = 1777,
  [SMALL_STATE(64)] = 1801,
  [SMALL_STATE(65)] = 1827,
  [SMALL_STATE(66)] = 1853,
  [SMALL_STATE(67)] = 1879,
  [SMALL_STATE(68)] = 1905,
  [SMALL_STATE(69)] = 1930,
  [SMALL_STATE(70)] = 1953,
  [SMALL_STATE(71)] = 1976,
  [SMALL_STATE(72)] = 1995,
  [SMALL_STATE(73)] = 2014,
  [SMALL_STATE(74)] = 2033,
  [SMALL_STATE(75)] = 2056,
  [SMALL_STATE(76)] = 2079,
  [SMALL_STATE(77)] = 2102,
  [SMALL_STATE(78)] = 2125,
  [SMALL_STATE(79)] = 2150,
  [SMALL_STATE(80)] = 2169,
  [SMALL_STATE(81)] = 2194,
  [SMALL_STATE(82)] = 2215,
  [SMALL_STATE(83)] = 2240,
  [SMALL_STATE(84)] = 2259,
  [SMALL_STATE(85)] = 2278,
  [SMALL_STATE(86)] = 2303,
  [SMALL_STATE(87)] = 2322,
  [SMALL_STATE(88)] = 2341,
  [SMALL_STATE(89)] = 2366,
  [SMALL_STATE(90)] = 2385,
  [SMALL_STATE(91)] = 2404,
  [SMALL_STATE(92)] = 2424,
  [SMALL_STATE(93)] = 2444,
  [SMALL_STATE(94)] = 2462,
  [SMALL_STATE(95)] = 2480,
  [SMALL_STATE(96)] = 2498,
  [SMALL_STATE(97)] = 2516,
  [SMALL_STATE(98)] = 2534,
  [SMALL_STATE(99)] = 2552,
  [SMALL_STATE(100)] = 2570,
  [SMALL_STATE(101)] = 2592,
  [SMALL_STATE(102)] = 2610,
  [SMALL_STATE(103)] = 2630,
  [SMALL_STATE(104)] = 2650,
  [SMALL_STATE(105)] = 2670,
  [SMALL_STATE(106)] = 2688,
  [SMALL_STATE(107)] = 2706,
  [SMALL_STATE(108)] = 2722,
  [SMALL_STATE(109)] = 2740,
  [SMALL_STATE(110)] = 2758,
  [SMALL_STATE(111)] = 2776,
  [SMALL_STATE(112)] = 2794,
  [SMALL_STATE(113)] = 2812,
  [SMALL_STATE(114)] = 2830,
  [SMALL_STATE(115)] = 2848,
  [SMALL_STATE(116)] = 2866,
  [SMALL_STATE(117)] = 2886,
  [SMALL_STATE(118)] = 2904,
  [SMALL_STATE(119)] = 2926,
  [SMALL_STATE(120)] = 2940,
  [SMALL_STATE(121)] = 2958,
  [SMALL_STATE(122)] = 2972,
  [SMALL_STATE(123)] = 2990,
  [SMALL_STATE(124)] = 3008,
  [SMALL_STATE(125)] = 3026,
  [SMALL_STATE(126)] = 3046,
  [SMALL_STATE(127)] = 3064,
  [SMALL_STATE(128)] = 3082,
  [SMALL_STATE(129)] = 3100,
  [SMALL_STATE(130)] = 3120,
  [SMALL_STATE(131)] = 3140,
  [SMALL_STATE(132)] = 3162,
  [SMALL_STATE(133)] = 3182,
  [SMALL_STATE(134)] = 3202,
  [SMALL_STATE(135)] = 3222,
  [SMALL_STATE(136)] = 3242,
  [SMALL_STATE(137)] = 3260,
  [SMALL_STATE(138)] = 3278,
  [SMALL_STATE(139)] = 3300,
  [SMALL_STATE(140)] = 3318,
  [SMALL_STATE(141)] = 3336,
  [SMALL_STATE(142)] = 3354,
  [SMALL_STATE(143)] = 3372,
  [SMALL_STATE(144)] = 3390,
  [SMALL_STATE(145)] = 3410,
  [SMALL_STATE(146)] = 3426,
  [SMALL_STATE(147)] = 3446,
  [SMALL_STATE(148)] = 3466,
  [SMALL_STATE(149)] = 3486,
  [SMALL_STATE(150)] = 3506,
  [SMALL_STATE(151)] = 3524,
  [SMALL_STATE(152)] = 3542,
  [SMALL_STATE(153)] = 3560,
  [SMALL_STATE(154)] = 3578,
  [SMALL_STATE(155)] = 3596,
  [SMALL_STATE(156)] = 3614,
  [SMALL_STATE(157)] = 3632,
  [SMALL_STATE(158)] = 3650,
  [SMALL_STATE(159)] = 3666,
  [SMALL_STATE(160)] = 3684,
  [SMALL_STATE(161)] = 3702,
  [SMALL_STATE(162)] = 3722,
  [SMALL_STATE(163)] = 3741,
  [SMALL_STATE(164)] = 3756,
  [SMALL_STATE(165)] = 3775,
  [SMALL_STATE(166)] = 3794,
  [SMALL_STATE(167)] = 3811,
  [SMALL_STATE(168)] = 3830,
  [SMALL_STATE(169)] = 3843,
  [SMALL_STATE(170)] = 3852,
  [SMALL_STATE(171)] = 3865,
  [SMALL_STATE(172)] = 3874,
  [SMALL_STATE(173)] = 3891,
  [SMALL_STATE(174)] = 3908,
  [SMALL_STATE(175)] = 3925,
  [SMALL_STATE(176)] = 3942,
  [SMALL_STATE(177)] = 3951,
  [SMALL_STATE(178)] = 3964,
  [SMALL_STATE(179)] = 3983,
  [SMALL_STATE(180)] = 4002,
  [SMALL_STATE(181)] = 4021,
  [SMALL_STATE(182)] = 4038,
  [SMALL_STATE(183)] = 4051,
  [SMALL_STATE(184)] = 4066,
  [SMALL_STATE(185)] = 4085,
  [SMALL_STATE(186)] = 4104,
  [SMALL_STATE(187)] = 4123,
  [SMALL_STATE(188)] = 4142,
  [SMALL_STATE(189)] = 4161,
  [SMALL_STATE(190)] = 4180,
  [SMALL_STATE(191)] = 4195,
  [SMALL_STATE(192)] = 4212,
  [SMALL_STATE(193)] = 4229,
  [SMALL_STATE(194)] = 4246,
  [SMALL_STATE(195)] = 4259,
  [SMALL_STATE(196)] = 4276,
  [SMALL_STATE(197)] = 4295,
  [SMALL_STATE(198)] = 4312,
  [SMALL_STATE(199)] = 4331,
  [SMALL_STATE(200)] = 4350,
  [SMALL_STATE(201)] = 4367,
  [SMALL_STATE(202)] = 4380,
  [SMALL_STATE(203)] = 4397,
  [SMALL_STATE(204)] = 4412,
  [SMALL_STATE(205)] = 4431,
  [SMALL_STATE(206)] = 4446,
  [SMALL_STATE(207)] = 4463,
  [SMALL_STATE(208)] = 4480,
  [SMALL_STATE(209)] = 4495,
  [SMALL_STATE(210)] = 4512,
  [SMALL_STATE(211)] = 4531,
  [SMALL_STATE(212)] = 4550,
  [SMALL_STATE(213)] = 4569,
  [SMALL_STATE(214)] = 4588,
  [SMALL_STATE(215)] = 4607,
  [SMALL_STATE(216)] = 4626,
  [SMALL_STATE(217)] = 4643,
  [SMALL_STATE(218)] = 4657,
  [SMALL_STATE(219)] = 4665,
  [SMALL_STATE(220)] = 4673,
  [SMALL_STATE(221)] = 4681,
  [SMALL_STATE(222)] = 4695,
  [SMALL_STATE(223)] = 4709,
  [SMALL_STATE(224)] = 4717,
  [SMALL_STATE(225)] = 4725,
  [SMALL_STATE(226)] = 4739,
  [SMALL_STATE(227)] = 4753,
  [SMALL_STATE(228)] = 4769,
  [SMALL_STATE(229)] = 4777,
  [SMALL_STATE(230)] = 4785,
  [SMALL_STATE(231)] = 4793,
  [SMALL_STATE(232)] = 4801,
  [SMALL_STATE(233)] = 4809,
  [SMALL_STATE(234)] = 4817,
  [SMALL_STATE(235)] = 4825,
  [SMALL_STATE(236)] = 4833,
  [SMALL_STATE(237)] = 4841,
  [SMALL_STATE(238)] = 4857,
  [SMALL_STATE(239)] = 4871,
  [SMALL_STATE(240)] = 4879,
  [SMALL_STATE(241)] = 4887,
  [SMALL_STATE(242)] = 4901,
  [SMALL_STATE(243)] = 4909,
  [SMALL_STATE(244)] = 4917,
  [SMALL_STATE(245)] = 4925,
  [SMALL_STATE(246)] = 4933,
  [SMALL_STATE(247)] = 4941,
  [SMALL_STATE(248)] = 4949,
  [SMALL_STATE(249)] = 4957,
  [SMALL_STATE(250)] = 4965,
  [SMALL_STATE(251)] = 4973,
  [SMALL_STATE(252)] = 4981,
  [SMALL_STATE(253)] = 4989,
  [SMALL_STATE(254)] = 4997,
  [SMALL_STATE(255)] = 5005,
  [SMALL_STATE(256)] = 5013,
  [SMALL_STATE(257)] = 5021,
  [SMALL_STATE(258)] = 5029,
  [SMALL_STATE(259)] = 5037,
  [SMALL_STATE(260)] = 5045,
  [SMALL_STATE(261)] = 5061,
  [SMALL_STATE(262)] = 5075,
  [SMALL_STATE(263)] = 5083,
  [SMALL_STATE(264)] = 5091,
  [SMALL_STATE(265)] = 5099,
  [SMALL_STATE(266)] = 5107,
  [SMALL_STATE(267)] = 5115,
  [SMALL_STATE(268)] = 5123,
  [SMALL_STATE(269)] = 5131,
  [SMALL_STATE(270)] = 5139,
  [SMALL_STATE(271)] = 5147,
  [SMALL_STATE(272)] = 5155,
  [SMALL_STATE(273)] = 5163,
  [SMALL_STATE(274)] = 5171,
  [SMALL_STATE(275)] = 5179,
  [SMALL_STATE(276)] = 5187,
  [SMALL_STATE(277)] = 5195,
  [SMALL_STATE(278)] = 5203,
  [SMALL_STATE(279)] = 5211,
  [SMALL_STATE(280)] = 5219,
  [SMALL_STATE(281)] = 5227,
  [SMALL_STATE(282)] = 5235,
  [SMALL_STATE(283)] = 5243,
  [SMALL_STATE(284)] = 5251,
  [SMALL_STATE(285)] = 5259,
  [SMALL_STATE(286)] = 5267,
  [SMALL_STATE(287)] = 5275,
  [SMALL_STATE(288)] = 5283,
  [SMALL_STATE(289)] = 5291,
  [SMALL_STATE(290)] = 5299,
  [SMALL_STATE(291)] = 5307,
  [SMALL_STATE(292)] = 5315,
  [SMALL_STATE(293)] = 5323,
  [SMALL_STATE(294)] = 5331,
  [SMALL_STATE(295)] = 5339,
  [SMALL_STATE(296)] = 5347,
  [SMALL_STATE(297)] = 5355,
  [SMALL_STATE(298)] = 5363,
  [SMALL_STATE(299)] = 5371,
  [SMALL_STATE(300)] = 5379,
  [SMALL_STATE(301)] = 5387,
  [SMALL_STATE(302)] = 5395,
  [SMALL_STATE(303)] = 5403,
  [SMALL_STATE(304)] = 5411,
  [SMALL_STATE(305)] = 5419,
  [SMALL_STATE(306)] = 5427,
  [SMALL_STATE(307)] = 5435,
  [SMALL_STATE(308)] = 5443,
  [SMALL_STATE(309)] = 5451,
  [SMALL_STATE(310)] = 5459,
  [SMALL_STATE(311)] = 5467,
  [SMALL_STATE(312)] = 5475,
  [SMALL_STATE(313)] = 5483,
  [SMALL_STATE(314)] = 5491,
  [SMALL_STATE(315)] = 5499,
  [SMALL_STATE(316)] = 5507,
  [SMALL_STATE(317)] = 5515,
  [SMALL_STATE(318)] = 5523,
  [SMALL_STATE(319)] = 5531,
  [SMALL_STATE(320)] = 5539,
  [SMALL_STATE(321)] = 5547,
  [SMALL_STATE(322)] = 5555,
  [SMALL_STATE(323)] = 5563,
  [SMALL_STATE(324)] = 5571,
  [SMALL_STATE(325)] = 5585,
  [SMALL_STATE(326)] = 5593,
  [SMALL_STATE(327)] = 5601,
  [SMALL_STATE(328)] = 5609,
  [SMALL_STATE(329)] = 5617,
  [SMALL_STATE(330)] = 5625,
  [SMALL_STATE(331)] = 5633,
  [SMALL_STATE(332)] = 5641,
  [SMALL_STATE(333)] = 5649,
  [SMALL_STATE(334)] = 5657,
  [SMALL_STATE(335)] = 5665,
  [SMALL_STATE(336)] = 5673,
  [SMALL_STATE(337)] = 5681,
  [SMALL_STATE(338)] = 5689,
  [SMALL_STATE(339)] = 5697,
  [SMALL_STATE(340)] = 5705,
  [SMALL_STATE(341)] = 5713,
  [SMALL_STATE(342)] = 5721,
  [SMALL_STATE(343)] = 5729,
  [SMALL_STATE(344)] = 5737,
  [SMALL_STATE(345)] = 5745,
  [SMALL_STATE(346)] = 5753,
  [SMALL_STATE(347)] = 5761,
  [SMALL_STATE(348)] = 5769,
  [SMALL_STATE(349)] = 5777,
  [SMALL_STATE(350)] = 5785,
  [SMALL_STATE(351)] = 5799,
  [SMALL_STATE(352)] = 5813,
  [SMALL_STATE(353)] = 5827,
  [SMALL_STATE(354)] = 5841,
  [SMALL_STATE(355)] = 5857,
  [SMALL_STATE(356)] = 5871,
  [SMALL_STATE(357)] = 5885,
  [SMALL_STATE(358)] = 5899,
  [SMALL_STATE(359)] = 5907,
  [SMALL_STATE(360)] = 5915,
  [SMALL_STATE(361)] = 5929,
  [SMALL_STATE(362)] = 5943,
  [SMALL_STATE(363)] = 5959,
  [SMALL_STATE(364)] = 5973,
  [SMALL_STATE(365)] = 5981,
  [SMALL_STATE(366)] = 5995,
  [SMALL_STATE(367)] = 6011,
  [SMALL_STATE(368)] = 6027,
  [SMALL_STATE(369)] = 6041,
  [SMALL_STATE(370)] = 6055,
  [SMALL_STATE(371)] = 6071,
  [SMALL_STATE(372)] = 6085,
  [SMALL_STATE(373)] = 6101,
  [SMALL_STATE(374)] = 6117,
  [SMALL_STATE(375)] = 6133,
  [SMALL_STATE(376)] = 6147,
  [SMALL_STATE(377)] = 6161,
  [SMALL_STATE(378)] = 6175,
  [SMALL_STATE(379)] = 6189,
  [SMALL_STATE(380)] = 6205,
  [SMALL_STATE(381)] = 6221,
  [SMALL_STATE(382)] = 6235,
  [SMALL_STATE(383)] = 6249,
  [SMALL_STATE(384)] = 6265,
  [SMALL_STATE(385)] = 6279,
  [SMALL_STATE(386)] = 6287,
  [SMALL_STATE(387)] = 6301,
  [SMALL_STATE(388)] = 6315,
  [SMALL_STATE(389)] = 6329,
  [SMALL_STATE(390)] = 6343,
  [SMALL_STATE(391)] = 6357,
  [SMALL_STATE(392)] = 6371,
  [SMALL_STATE(393)] = 6385,
  [SMALL_STATE(394)] = 6399,
  [SMALL_STATE(395)] = 6413,
  [SMALL_STATE(396)] = 6427,
  [SMALL_STATE(397)] = 6441,
  [SMALL_STATE(398)] = 6455,
  [SMALL_STATE(399)] = 6469,
  [SMALL_STATE(400)] = 6483,
  [SMALL_STATE(401)] = 6497,
  [SMALL_STATE(402)] = 6511,
  [SMALL_STATE(403)] = 6525,
  [SMALL_STATE(404)] = 6539,
  [SMALL_STATE(405)] = 6553,
  [SMALL_STATE(406)] = 6567,
  [SMALL_STATE(407)] = 6581,
  [SMALL_STATE(408)] = 6595,
  [SMALL_STATE(409)] = 6609,
  [SMALL_STATE(410)] = 6623,
  [SMALL_STATE(411)] = 6637,
  [SMALL_STATE(412)] = 6651,
  [SMALL_STATE(413)] = 6665,
  [SMALL_STATE(414)] = 6679,
  [SMALL_STATE(415)] = 6693,
  [SMALL_STATE(416)] = 6707,
  [SMALL_STATE(417)] = 6721,
  [SMALL_STATE(418)] = 6735,
  [SMALL_STATE(419)] = 6749,
  [SMALL_STATE(420)] = 6763,
  [SMALL_STATE(421)] = 6777,
  [SMALL_STATE(422)] = 6793,
  [SMALL_STATE(423)] = 6809,
  [SMALL_STATE(424)] = 6823,
  [SMALL_STATE(425)] = 6839,
  [SMALL_STATE(426)] = 6855,
  [SMALL_STATE(427)] = 6869,
  [SMALL_STATE(428)] = 6883,
  [SMALL_STATE(429)] = 6897,
  [SMALL_STATE(430)] = 6911,
  [SMALL_STATE(431)] = 6927,
  [SMALL_STATE(432)] = 6941,
  [SMALL_STATE(433)] = 6955,
  [SMALL_STATE(434)] = 6971,
  [SMALL_STATE(435)] = 6985,
  [SMALL_STATE(436)] = 7001,
  [SMALL_STATE(437)] = 7017,
  [SMALL_STATE(438)] = 7033,
  [SMALL_STATE(439)] = 7047,
  [SMALL_STATE(440)] = 7061,
  [SMALL_STATE(441)] = 7075,
  [SMALL_STATE(442)] = 7089,
  [SMALL_STATE(443)] = 7105,
  [SMALL_STATE(444)] = 7121,
  [SMALL_STATE(445)] = 7135,
  [SMALL_STATE(446)] = 7149,
  [SMALL_STATE(447)] = 7165,
  [SMALL_STATE(448)] = 7179,
  [SMALL_STATE(449)] = 7193,
  [SMALL_STATE(450)] = 7207,
  [SMALL_STATE(451)] = 7221,
  [SMALL_STATE(452)] = 7235,
  [SMALL_STATE(453)] = 7249,
  [SMALL_STATE(454)] = 7263,
  [SMALL_STATE(455)] = 7277,
  [SMALL_STATE(456)] = 7291,
  [SMALL_STATE(457)] = 7305,
  [SMALL_STATE(458)] = 7319,
  [SMALL_STATE(459)] = 7333,
  [SMALL_STATE(460)] = 7347,
  [SMALL_STATE(461)] = 7361,
  [SMALL_STATE(462)] = 7375,
  [SMALL_STATE(463)] = 7389,
  [SMALL_STATE(464)] = 7403,
  [SMALL_STATE(465)] = 7417,
  [SMALL_STATE(466)] = 7431,
  [SMALL_STATE(467)] = 7445,
  [SMALL_STATE(468)] = 7459,
  [SMALL_STATE(469)] = 7473,
  [SMALL_STATE(470)] = 7487,
  [SMALL_STATE(471)] = 7501,
  [SMALL_STATE(472)] = 7515,
  [SMALL_STATE(473)] = 7529,
  [SMALL_STATE(474)] = 7543,
  [SMALL_STATE(475)] = 7557,
  [SMALL_STATE(476)] = 7571,
  [SMALL_STATE(477)] = 7585,
  [SMALL_STATE(478)] = 7599,
  [SMALL_STATE(479)] = 7613,
  [SMALL_STATE(480)] = 7627,
  [SMALL_STATE(481)] = 7641,
  [SMALL_STATE(482)] = 7655,
  [SMALL_STATE(483)] = 7669,
  [SMALL_STATE(484)] = 7677,
  [SMALL_STATE(485)] = 7685,
  [SMALL_STATE(486)] = 7699,
  [SMALL_STATE(487)] = 7707,
  [SMALL_STATE(488)] = 7721,
  [SMALL_STATE(489)] = 7735,
  [SMALL_STATE(490)] = 7749,
  [SMALL_STATE(491)] = 7765,
  [SMALL_STATE(492)] = 7779,
  [SMALL_STATE(493)] = 7787,
  [SMALL_STATE(494)] = 7795,
  [SMALL_STATE(495)] = 7803,
  [SMALL_STATE(496)] = 7817,
  [SMALL_STATE(497)] = 7831,
  [SMALL_STATE(498)] = 7845,
  [SMALL_STATE(499)] = 7859,
  [SMALL_STATE(500)] = 7873,
  [SMALL_STATE(501)] = 7887,
  [SMALL_STATE(502)] = 7901,
  [SMALL_STATE(503)] = 7909,
  [SMALL_STATE(504)] = 7923,
  [SMALL_STATE(505)] = 7937,
  [SMALL_STATE(506)] = 7951,
  [SMALL_STATE(507)] = 7965,
  [SMALL_STATE(508)] = 7979,
  [SMALL_STATE(509)] = 7993,
  [SMALL_STATE(510)] = 8001,
  [SMALL_STATE(511)] = 8015,
  [SMALL_STATE(512)] = 8029,
  [SMALL_STATE(513)] = 8043,
  [SMALL_STATE(514)] = 8057,
  [SMALL_STATE(515)] = 8071,
  [SMALL_STATE(516)] = 8085,
  [SMALL_STATE(517)] = 8099,
  [SMALL_STATE(518)] = 8113,
  [SMALL_STATE(519)] = 8127,
  [SMALL_STATE(520)] = 8135,
  [SMALL_STATE(521)] = 8143,
  [SMALL_STATE(522)] = 8151,
  [SMALL_STATE(523)] = 8165,
  [SMALL_STATE(524)] = 8172,
  [SMALL_STATE(525)] = 8179,
  [SMALL_STATE(526)] = 8186,
  [SMALL_STATE(527)] = 8193,
  [SMALL_STATE(528)] = 8200,
  [SMALL_STATE(529)] = 8207,
  [SMALL_STATE(530)] = 8220,
  [SMALL_STATE(531)] = 8227,
  [SMALL_STATE(532)] = 8234,
  [SMALL_STATE(533)] = 8241,
  [SMALL_STATE(534)] = 8248,
  [SMALL_STATE(535)] = 8255,
  [SMALL_STATE(536)] = 8262,
  [SMALL_STATE(537)] = 8269,
  [SMALL_STATE(538)] = 8282,
  [SMALL_STATE(539)] = 8289,
  [SMALL_STATE(540)] = 8296,
  [SMALL_STATE(541)] = 8303,
  [SMALL_STATE(542)] = 8310,
  [SMALL_STATE(543)] = 8317,
  [SMALL_STATE(544)] = 8324,
  [SMALL_STATE(545)] = 8331,
  [SMALL_STATE(546)] = 8338,
  [SMALL_STATE(547)] = 8345,
  [SMALL_STATE(548)] = 8352,
  [SMALL_STATE(549)] = 8359,
  [SMALL_STATE(550)] = 8366,
  [SMALL_STATE(551)] = 8373,
  [SMALL_STATE(552)] = 8380,
  [SMALL_STATE(553)] = 8387,
  [SMALL_STATE(554)] = 8394,
  [SMALL_STATE(555)] = 8401,
  [SMALL_STATE(556)] = 8408,
  [SMALL_STATE(557)] = 8415,
  [SMALL_STATE(558)] = 8422,
  [SMALL_STATE(559)] = 8429,
  [SMALL_STATE(560)] = 8436,
  [SMALL_STATE(561)] = 8443,
  [SMALL_STATE(562)] = 8450,
  [SMALL_STATE(563)] = 8457,
  [SMALL_STATE(564)] = 8464,
  [SMALL_STATE(565)] = 8471,
  [SMALL_STATE(566)] = 8478,
  [SMALL_STATE(567)] = 8485,
  [SMALL_STATE(568)] = 8492,
  [SMALL_STATE(569)] = 8499,
  [SMALL_STATE(570)] = 8506,
  [SMALL_STATE(571)] = 8519,
  [SMALL_STATE(572)] = 8526,
  [SMALL_STATE(573)] = 8533,
  [SMALL_STATE(574)] = 8540,
  [SMALL_STATE(575)] = 8551,
  [SMALL_STATE(576)] = 8558,
  [SMALL_STATE(577)] = 8565,
  [SMALL_STATE(578)] = 8572,
  [SMALL_STATE(579)] = 8579,
  [SMALL_STATE(580)] = 8586,
  [SMALL_STATE(581)] = 8593,
  [SMALL_STATE(582)] = 8600,
  [SMALL_STATE(583)] = 8607,
  [SMALL_STATE(584)] = 8614,
  [SMALL_STATE(585)] = 8621,
  [SMALL_STATE(586)] = 8628,
  [SMALL_STATE(587)] = 8635,
  [SMALL_STATE(588)] = 8642,
  [SMALL_STATE(589)] = 8649,
  [SMALL_STATE(590)] = 8656,
  [SMALL_STATE(591)] = 8663,
  [SMALL_STATE(592)] = 8670,
  [SMALL_STATE(593)] = 8677,
  [SMALL_STATE(594)] = 8684,
  [SMALL_STATE(595)] = 8691,
  [SMALL_STATE(596)] = 8698,
  [SMALL_STATE(597)] = 8705,
  [SMALL_STATE(598)] = 8712,
  [SMALL_STATE(599)] = 8719,
  [SMALL_STATE(600)] = 8726,
  [SMALL_STATE(601)] = 8733,
  [SMALL_STATE(602)] = 8740,
  [SMALL_STATE(603)] = 8747,
  [SMALL_STATE(604)] = 8754,
  [SMALL_STATE(605)] = 8761,
  [SMALL_STATE(606)] = 8768,
  [SMALL_STATE(607)] = 8775,
  [SMALL_STATE(608)] = 8782,
  [SMALL_STATE(609)] = 8789,
  [SMALL_STATE(610)] = 8796,
  [SMALL_STATE(611)] = 8803,
  [SMALL_STATE(612)] = 8810,
  [SMALL_STATE(613)] = 8817,
  [SMALL_STATE(614)] = 8824,
  [SMALL_STATE(615)] = 8831,
  [SMALL_STATE(616)] = 8838,
  [SMALL_STATE(617)] = 8845,
  [SMALL_STATE(618)] = 8852,
  [SMALL_STATE(619)] = 8859,
  [SMALL_STATE(620)] = 8866,
  [SMALL_STATE(621)] = 8873,
  [SMALL_STATE(622)] = 8880,
  [SMALL_STATE(623)] = 8887,
  [SMALL_STATE(624)] = 8894,
  [SMALL_STATE(625)] = 8901,
  [SMALL_STATE(626)] = 8908,
  [SMALL_STATE(627)] = 8915,
  [SMALL_STATE(628)] = 8922,
  [SMALL_STATE(629)] = 8929,
  [SMALL_STATE(630)] = 8936,
  [SMALL_STATE(631)] = 8943,
  [SMALL_STATE(632)] = 8950,
  [SMALL_STATE(633)] = 8957,
  [SMALL_STATE(634)] = 8964,
  [SMALL_STATE(635)] = 8971,
  [SMALL_STATE(636)] = 8978,
  [SMALL_STATE(637)] = 8985,
  [SMALL_STATE(638)] = 8992,
  [SMALL_STATE(639)] = 8999,
  [SMALL_STATE(640)] = 9006,
  [SMALL_STATE(641)] = 9013,
  [SMALL_STATE(642)] = 9020,
  [SMALL_STATE(643)] = 9027,
  [SMALL_STATE(644)] = 9034,
  [SMALL_STATE(645)] = 9041,
  [SMALL_STATE(646)] = 9048,
  [SMALL_STATE(647)] = 9055,
  [SMALL_STATE(648)] = 9062,
  [SMALL_STATE(649)] = 9069,
  [SMALL_STATE(650)] = 9076,
  [SMALL_STATE(651)] = 9083,
  [SMALL_STATE(652)] = 9090,
  [SMALL_STATE(653)] = 9097,
  [SMALL_STATE(654)] = 9104,
  [SMALL_STATE(655)] = 9111,
  [SMALL_STATE(656)] = 9118,
  [SMALL_STATE(657)] = 9125,
  [SMALL_STATE(658)] = 9132,
  [SMALL_STATE(659)] = 9139,
  [SMALL_STATE(660)] = 9146,
  [SMALL_STATE(661)] = 9153,
  [SMALL_STATE(662)] = 9160,
  [SMALL_STATE(663)] = 9167,
  [SMALL_STATE(664)] = 9174,
  [SMALL_STATE(665)] = 9181,
  [SMALL_STATE(666)] = 9188,
  [SMALL_STATE(667)] = 9197,
  [SMALL_STATE(668)] = 9210,
  [SMALL_STATE(669)] = 9217,
  [SMALL_STATE(670)] = 9228,
  [SMALL_STATE(671)] = 9241,
  [SMALL_STATE(672)] = 9248,
  [SMALL_STATE(673)] = 9255,
  [SMALL_STATE(674)] = 9264,
  [SMALL_STATE(675)] = 9271,
  [SMALL_STATE(676)] = 9284,
  [SMALL_STATE(677)] = 9297,
  [SMALL_STATE(678)] = 9310,
  [SMALL_STATE(679)] = 9323,
  [SMALL_STATE(680)] = 9330,
  [SMALL_STATE(681)] = 9343,
  [SMALL_STATE(682)] = 9350,
  [SMALL_STATE(683)] = 9357,
  [SMALL_STATE(684)] = 9370,
  [SMALL_STATE(685)] = 9377,
  [SMALL_STATE(686)] = 9384,
  [SMALL_STATE(687)] = 9395,
  [SMALL_STATE(688)] = 9406,
  [SMALL_STATE(689)] = 9413,
  [SMALL_STATE(690)] = 9420,
  [SMALL_STATE(691)] = 9427,
  [SMALL_STATE(692)] = 9434,
  [SMALL_STATE(693)] = 9441,
  [SMALL_STATE(694)] = 9448,
  [SMALL_STATE(695)] = 9461,
  [SMALL_STATE(696)] = 9468,
  [SMALL_STATE(697)] = 9475,
  [SMALL_STATE(698)] = 9482,
  [SMALL_STATE(699)] = 9489,
  [SMALL_STATE(700)] = 9496,
  [SMALL_STATE(701)] = 9503,
  [SMALL_STATE(702)] = 9510,
  [SMALL_STATE(703)] = 9517,
  [SMALL_STATE(704)] = 9528,
  [SMALL_STATE(705)] = 9535,
  [SMALL_STATE(706)] = 9542,
  [SMALL_STATE(707)] = 9555,
  [SMALL_STATE(708)] = 9568,
  [SMALL_STATE(709)] = 9575,
  [SMALL_STATE(710)] = 9584,
  [SMALL_STATE(711)] = 9593,
  [SMALL_STATE(712)] = 9606,
  [SMALL_STATE(713)] = 9613,
  [SMALL_STATE(714)] = 9620,
  [SMALL_STATE(715)] = 9627,
  [SMALL_STATE(716)] = 9634,
  [SMALL_STATE(717)] = 9641,
  [SMALL_STATE(718)] = 9648,
  [SMALL_STATE(719)] = 9655,
  [SMALL_STATE(720)] = 9662,
  [SMALL_STATE(721)] = 9669,
  [SMALL_STATE(722)] = 9676,
  [SMALL_STATE(723)] = 9683,
  [SMALL_STATE(724)] = 9690,
  [SMALL_STATE(725)] = 9697,
  [SMALL_STATE(726)] = 9704,
  [SMALL_STATE(727)] = 9711,
  [SMALL_STATE(728)] = 9718,
  [SMALL_STATE(729)] = 9725,
  [SMALL_STATE(730)] = 9732,
  [SMALL_STATE(731)] = 9739,
  [SMALL_STATE(732)] = 9746,
  [SMALL_STATE(733)] = 9753,
  [SMALL_STATE(734)] = 9764,
  [SMALL_STATE(735)] = 9771,
  [SMALL_STATE(736)] = 9778,
  [SMALL_STATE(737)] = 9785,
  [SMALL_STATE(738)] = 9792,
  [SMALL_STATE(739)] = 9799,
  [SMALL_STATE(740)] = 9806,
  [SMALL_STATE(741)] = 9813,
  [SMALL_STATE(742)] = 9820,
  [SMALL_STATE(743)] = 9827,
  [SMALL_STATE(744)] = 9834,
  [SMALL_STATE(745)] = 9841,
  [SMALL_STATE(746)] = 9848,
  [SMALL_STATE(747)] = 9855,
  [SMALL_STATE(748)] = 9862,
  [SMALL_STATE(749)] = 9869,
  [SMALL_STATE(750)] = 9876,
  [SMALL_STATE(751)] = 9883,
  [SMALL_STATE(752)] = 9890,
  [SMALL_STATE(753)] = 9897,
  [SMALL_STATE(754)] = 9904,
  [SMALL_STATE(755)] = 9911,
  [SMALL_STATE(756)] = 9918,
  [SMALL_STATE(757)] = 9925,
  [SMALL_STATE(758)] = 9932,
  [SMALL_STATE(759)] = 9939,
  [SMALL_STATE(760)] = 9952,
  [SMALL_STATE(761)] = 9959,
  [SMALL_STATE(762)] = 9966,
  [SMALL_STATE(763)] = 9973,
  [SMALL_STATE(764)] = 9980,
  [SMALL_STATE(765)] = 9987,
  [SMALL_STATE(766)] = 9994,
  [SMALL_STATE(767)] = 10001,
  [SMALL_STATE(768)] = 10014,
  [SMALL_STATE(769)] = 10021,
  [SMALL_STATE(770)] = 10028,
  [SMALL_STATE(771)] = 10035,
  [SMALL_STATE(772)] = 10048,
  [SMALL_STATE(773)] = 10055,
  [SMALL_STATE(774)] = 10062,
  [SMALL_STATE(775)] = 10069,
  [SMALL_STATE(776)] = 10076,
  [SMALL_STATE(777)] = 10083,
  [SMALL_STATE(778)] = 10096,
  [SMALL_STATE(779)] = 10103,
  [SMALL_STATE(780)] = 10110,
  [SMALL_STATE(781)] = 10123,
  [SMALL_STATE(782)] = 10134,
  [SMALL_STATE(783)] = 10141,
  [SMALL_STATE(784)] = 10148,
  [SMALL_STATE(785)] = 10155,
  [SMALL_STATE(786)] = 10162,
  [SMALL_STATE(787)] = 10175,
  [SMALL_STATE(788)] = 10188,
  [SMALL_STATE(789)] = 10195,
  [SMALL_STATE(790)] = 10202,
  [SMALL_STATE(791)] = 10213,
  [SMALL_STATE(792)] = 10224,
  [SMALL_STATE(793)] = 10231,
  [SMALL_STATE(794)] = 10238,
  [SMALL_STATE(795)] = 10245,
  [SMALL_STATE(796)] = 10252,
  [SMALL_STATE(797)] = 10259,
  [SMALL_STATE(798)] = 10266,
  [SMALL_STATE(799)] = 10279,
  [SMALL_STATE(800)] = 10286,
  [SMALL_STATE(801)] = 10293,
  [SMALL_STATE(802)] = 10300,
  [SMALL_STATE(803)] = 10313,
  [SMALL_STATE(804)] = 10320,
  [SMALL_STATE(805)] = 10327,
  [SMALL_STATE(806)] = 10334,
  [SMALL_STATE(807)] = 10347,
  [SMALL_STATE(808)] = 10354,
  [SMALL_STATE(809)] = 10361,
  [SMALL_STATE(810)] = 10368,
  [SMALL_STATE(811)] = 10375,
  [SMALL_STATE(812)] = 10382,
  [SMALL_STATE(813)] = 10395,
  [SMALL_STATE(814)] = 10402,
  [SMALL_STATE(815)] = 10409,
  [SMALL_STATE(816)] = 10416,
  [SMALL_STATE(817)] = 10429,
  [SMALL_STATE(818)] = 10436,
  [SMALL_STATE(819)] = 10443,
  [SMALL_STATE(820)] = 10450,
  [SMALL_STATE(821)] = 10457,
  [SMALL_STATE(822)] = 10470,
  [SMALL_STATE(823)] = 10483,
  [SMALL_STATE(824)] = 10490,
  [SMALL_STATE(825)] = 10497,
  [SMALL_STATE(826)] = 10504,
  [SMALL_STATE(827)] = 10511,
  [SMALL_STATE(828)] = 10518,
  [SMALL_STATE(829)] = 10525,
  [SMALL_STATE(830)] = 10536,
  [SMALL_STATE(831)] = 10547,
  [SMALL_STATE(832)] = 10554,
  [SMALL_STATE(833)] = 10561,
  [SMALL_STATE(834)] = 10568,
  [SMALL_STATE(835)] = 10575,
  [SMALL_STATE(836)] = 10588,
  [SMALL_STATE(837)] = 10595,
  [SMALL_STATE(838)] = 10602,
  [SMALL_STATE(839)] = 10615,
  [SMALL_STATE(840)] = 10622,
  [SMALL_STATE(841)] = 10629,
  [SMALL_STATE(842)] = 10636,
  [SMALL_STATE(843)] = 10647,
  [SMALL_STATE(844)] = 10658,
  [SMALL_STATE(845)] = 10669,
  [SMALL_STATE(846)] = 10680,
  [SMALL_STATE(847)] = 10687,
  [SMALL_STATE(848)] = 10696,
  [SMALL_STATE(849)] = 10703,
  [SMALL_STATE(850)] = 10716,
  [SMALL_STATE(851)] = 10727,
  [SMALL_STATE(852)] = 10738,
  [SMALL_STATE(853)] = 10745,
  [SMALL_STATE(854)] = 10756,
  [SMALL_STATE(855)] = 10767,
  [SMALL_STATE(856)] = 10774,
  [SMALL_STATE(857)] = 10785,
  [SMALL_STATE(858)] = 10796,
  [SMALL_STATE(859)] = 10807,
  [SMALL_STATE(860)] = 10818,
  [SMALL_STATE(861)] = 10827,
  [SMALL_STATE(862)] = 10834,
  [SMALL_STATE(863)] = 10841,
  [SMALL_STATE(864)] = 10848,
  [SMALL_STATE(865)] = 10859,
  [SMALL_STATE(866)] = 10870,
  [SMALL_STATE(867)] = 10881,
  [SMALL_STATE(868)] = 10888,
  [SMALL_STATE(869)] = 10895,
  [SMALL_STATE(870)] = 10908,
  [SMALL_STATE(871)] = 10915,
  [SMALL_STATE(872)] = 10928,
  [SMALL_STATE(873)] = 10935,
  [SMALL_STATE(874)] = 10942,
  [SMALL_STATE(875)] = 10953,
  [SMALL_STATE(876)] = 10960,
  [SMALL_STATE(877)] = 10970,
  [SMALL_STATE(878)] = 10976,
  [SMALL_STATE(879)] = 10982,
  [SMALL_STATE(880)] = 10988,
  [SMALL_STATE(881)] = 10994,
  [SMALL_STATE(882)] = 11000,
  [SMALL_STATE(883)] = 11008,
  [SMALL_STATE(884)] = 11016,
  [SMALL_STATE(885)] = 11022,
  [SMALL_STATE(886)] = 11032,
  [SMALL_STATE(887)] = 11040,
  [SMALL_STATE(888)] = 11050,
  [SMALL_STATE(889)] = 11056,
  [SMALL_STATE(890)] = 11062,
  [SMALL_STATE(891)] = 11068,
  [SMALL_STATE(892)] = 11074,
  [SMALL_STATE(893)] = 11080,
  [SMALL_STATE(894)] = 11086,
  [SMALL_STATE(895)] = 11092,
  [SMALL_STATE(896)] = 11098,
  [SMALL_STATE(897)] = 11108,
  [SMALL_STATE(898)] = 11114,
  [SMALL_STATE(899)] = 11120,
  [SMALL_STATE(900)] = 11126,
  [SMALL_STATE(901)] = 11132,
  [SMALL_STATE(902)] = 11138,
  [SMALL_STATE(903)] = 11144,
  [SMALL_STATE(904)] = 11154,
  [SMALL_STATE(905)] = 11164,
  [SMALL_STATE(906)] = 11174,
  [SMALL_STATE(907)] = 11184,
  [SMALL_STATE(908)] = 11190,
  [SMALL_STATE(909)] = 11196,
  [SMALL_STATE(910)] = 11206,
  [SMALL_STATE(911)] = 11212,
  [SMALL_STATE(912)] = 11218,
  [SMALL_STATE(913)] = 11228,
  [SMALL_STATE(914)] = 11234,
  [SMALL_STATE(915)] = 11244,
  [SMALL_STATE(916)] = 11250,
  [SMALL_STATE(917)] = 11260,
  [SMALL_STATE(918)] = 11270,
  [SMALL_STATE(919)] = 11276,
  [SMALL_STATE(920)] = 11286,
  [SMALL_STATE(921)] = 11296,
  [SMALL_STATE(922)] = 11306,
  [SMALL_STATE(923)] = 11316,
  [SMALL_STATE(924)] = 11322,
  [SMALL_STATE(925)] = 11332,
  [SMALL_STATE(926)] = 11342,
  [SMALL_STATE(927)] = 11352,
  [SMALL_STATE(928)] = 11362,
  [SMALL_STATE(929)] = 11372,
  [SMALL_STATE(930)] = 11382,
  [SMALL_STATE(931)] = 11392,
  [SMALL_STATE(932)] = 11402,
  [SMALL_STATE(933)] = 11412,
  [SMALL_STATE(934)] = 11422,
  [SMALL_STATE(935)] = 11432,
  [SMALL_STATE(936)] = 11442,
  [SMALL_STATE(937)] = 11452,
  [SMALL_STATE(938)] = 11462,
  [SMALL_STATE(939)] = 11472,
  [SMALL_STATE(940)] = 11482,
  [SMALL_STATE(941)] = 11492,
  [SMALL_STATE(942)] = 11502,
  [SMALL_STATE(943)] = 11512,
  [SMALL_STATE(944)] = 11522,
  [SMALL_STATE(945)] = 11532,
  [SMALL_STATE(946)] = 11542,
  [SMALL_STATE(947)] = 11550,
  [SMALL_STATE(948)] = 11560,
  [SMALL_STATE(949)] = 11570,
  [SMALL_STATE(950)] = 11580,
  [SMALL_STATE(951)] = 11590,
  [SMALL_STATE(952)] = 11600,
  [SMALL_STATE(953)] = 11610,
  [SMALL_STATE(954)] = 11620,
  [SMALL_STATE(955)] = 11630,
  [SMALL_STATE(956)] = 11640,
  [SMALL_STATE(957)] = 11650,
  [SMALL_STATE(958)] = 11656,
  [SMALL_STATE(959)] = 11666,
  [SMALL_STATE(960)] = 11674,
  [SMALL_STATE(961)] = 11682,
  [SMALL_STATE(962)] = 11692,
  [SMALL_STATE(963)] = 11702,
  [SMALL_STATE(964)] = 11712,
  [SMALL_STATE(965)] = 11722,
  [SMALL_STATE(966)] = 11728,
  [SMALL_STATE(967)] = 11738,
  [SMALL_STATE(968)] = 11748,
  [SMALL_STATE(969)] = 11758,
  [SMALL_STATE(970)] = 11768,
  [SMALL_STATE(971)] = 11778,
  [SMALL_STATE(972)] = 11788,
  [SMALL_STATE(973)] = 11798,
  [SMALL_STATE(974)] = 11808,
  [SMALL_STATE(975)] = 11818,
  [SMALL_STATE(976)] = 11824,
  [SMALL_STATE(977)] = 11834,
  [SMALL_STATE(978)] = 11844,
  [SMALL_STATE(979)] = 11854,
  [SMALL_STATE(980)] = 11860,
  [SMALL_STATE(981)] = 11870,
  [SMALL_STATE(982)] = 11880,
  [SMALL_STATE(983)] = 11890,
  [SMALL_STATE(984)] = 11900,
  [SMALL_STATE(985)] = 11910,
  [SMALL_STATE(986)] = 11920,
  [SMALL_STATE(987)] = 11930,
  [SMALL_STATE(988)] = 11936,
  [SMALL_STATE(989)] = 11944,
  [SMALL_STATE(990)] = 11954,
  [SMALL_STATE(991)] = 11964,
  [SMALL_STATE(992)] = 11974,
  [SMALL_STATE(993)] = 11984,
  [SMALL_STATE(994)] = 11994,
  [SMALL_STATE(995)] = 12004,
  [SMALL_STATE(996)] = 12014,
  [SMALL_STATE(997)] = 12024,
  [SMALL_STATE(998)] = 12034,
  [SMALL_STATE(999)] = 12040,
  [SMALL_STATE(1000)] = 12050,
  [SMALL_STATE(1001)] = 12060,
  [SMALL_STATE(1002)] = 12070,
  [SMALL_STATE(1003)] = 12080,
  [SMALL_STATE(1004)] = 12086,
  [SMALL_STATE(1005)] = 12096,
  [SMALL_STATE(1006)] = 12106,
  [SMALL_STATE(1007)] = 12116,
  [SMALL_STATE(1008)] = 12124,
  [SMALL_STATE(1009)] = 12134,
  [SMALL_STATE(1010)] = 12140,
  [SMALL_STATE(1011)] = 12146,
  [SMALL_STATE(1012)] = 12156,
  [SMALL_STATE(1013)] = 12166,
  [SMALL_STATE(1014)] = 12172,
  [SMALL_STATE(1015)] = 12178,
  [SMALL_STATE(1016)] = 12188,
  [SMALL_STATE(1017)] = 12198,
  [SMALL_STATE(1018)] = 12208,
  [SMALL_STATE(1019)] = 12218,
  [SMALL_STATE(1020)] = 12224,
  [SMALL_STATE(1021)] = 12230,
  [SMALL_STATE(1022)] = 12240,
  [SMALL_STATE(1023)] = 12246,
  [SMALL_STATE(1024)] = 12254,
  [SMALL_STATE(1025)] = 12264,
  [SMALL_STATE(1026)] = 12274,
  [SMALL_STATE(1027)] = 12284,
  [SMALL_STATE(1028)] = 12294,
  [SMALL_STATE(1029)] = 12300,
  [SMALL_STATE(1030)] = 12310,
  [SMALL_STATE(1031)] = 12318,
  [SMALL_STATE(1032)] = 12328,
  [SMALL_STATE(1033)] = 12338,
  [SMALL_STATE(1034)] = 12348,
  [SMALL_STATE(1035)] = 12358,
  [SMALL_STATE(1036)] = 12364,
  [SMALL_STATE(1037)] = 12374,
  [SMALL_STATE(1038)] = 12380,
  [SMALL_STATE(1039)] = 12390,
  [SMALL_STATE(1040)] = 12400,
  [SMALL_STATE(1041)] = 12406,
  [SMALL_STATE(1042)] = 12416,
  [SMALL_STATE(1043)] = 12426,
  [SMALL_STATE(1044)] = 12436,
  [SMALL_STATE(1045)] = 12446,
  [SMALL_STATE(1046)] = 12456,
  [SMALL_STATE(1047)] = 12466,
  [SMALL_STATE(1048)] = 12476,
  [SMALL_STATE(1049)] = 12486,
  [SMALL_STATE(1050)] = 12496,
  [SMALL_STATE(1051)] = 12506,
  [SMALL_STATE(1052)] = 12516,
  [SMALL_STATE(1053)] = 12526,
  [SMALL_STATE(1054)] = 12536,
  [SMALL_STATE(1055)] = 12542,
  [SMALL_STATE(1056)] = 12552,
  [SMALL_STATE(1057)] = 12562,
  [SMALL_STATE(1058)] = 12572,
  [SMALL_STATE(1059)] = 12582,
  [SMALL_STATE(1060)] = 12588,
  [SMALL_STATE(1061)] = 12598,
  [SMALL_STATE(1062)] = 12608,
  [SMALL_STATE(1063)] = 12618,
  [SMALL_STATE(1064)] = 12628,
  [SMALL_STATE(1065)] = 12638,
  [SMALL_STATE(1066)] = 12648,
  [SMALL_STATE(1067)] = 12658,
  [SMALL_STATE(1068)] = 12664,
  [SMALL_STATE(1069)] = 12674,
  [SMALL_STATE(1070)] = 12684,
  [SMALL_STATE(1071)] = 12694,
  [SMALL_STATE(1072)] = 12702,
  [SMALL_STATE(1073)] = 12712,
  [SMALL_STATE(1074)] = 12722,
  [SMALL_STATE(1075)] = 12732,
  [SMALL_STATE(1076)] = 12742,
  [SMALL_STATE(1077)] = 12752,
  [SMALL_STATE(1078)] = 12759,
  [SMALL_STATE(1079)] = 12766,
  [SMALL_STATE(1080)] = 12773,
  [SMALL_STATE(1081)] = 12780,
  [SMALL_STATE(1082)] = 12785,
  [SMALL_STATE(1083)] = 12790,
  [SMALL_STATE(1084)] = 12797,
  [SMALL_STATE(1085)] = 12804,
  [SMALL_STATE(1086)] = 12809,
  [SMALL_STATE(1087)] = 12814,
  [SMALL_STATE(1088)] = 12821,
  [SMALL_STATE(1089)] = 12828,
  [SMALL_STATE(1090)] = 12835,
  [SMALL_STATE(1091)] = 12840,
  [SMALL_STATE(1092)] = 12847,
  [SMALL_STATE(1093)] = 12854,
  [SMALL_STATE(1094)] = 12861,
  [SMALL_STATE(1095)] = 12868,
  [SMALL_STATE(1096)] = 12875,
  [SMALL_STATE(1097)] = 12880,
  [SMALL_STATE(1098)] = 12885,
  [SMALL_STATE(1099)] = 12892,
  [SMALL_STATE(1100)] = 12899,
  [SMALL_STATE(1101)] = 12906,
  [SMALL_STATE(1102)] = 12911,
  [SMALL_STATE(1103)] = 12916,
  [SMALL_STATE(1104)] = 12921,
  [SMALL_STATE(1105)] = 12928,
  [SMALL_STATE(1106)] = 12935,
  [SMALL_STATE(1107)] = 12942,
  [SMALL_STATE(1108)] = 12949,
  [SMALL_STATE(1109)] = 12956,
  [SMALL_STATE(1110)] = 12963,
  [SMALL_STATE(1111)] = 12970,
  [SMALL_STATE(1112)] = 12977,
  [SMALL_STATE(1113)] = 12984,
  [SMALL_STATE(1114)] = 12991,
  [SMALL_STATE(1115)] = 12998,
  [SMALL_STATE(1116)] = 13005,
  [SMALL_STATE(1117)] = 13012,
  [SMALL_STATE(1118)] = 13019,
  [SMALL_STATE(1119)] = 13026,
  [SMALL_STATE(1120)] = 13033,
  [SMALL_STATE(1121)] = 13040,
  [SMALL_STATE(1122)] = 13047,
  [SMALL_STATE(1123)] = 13054,
  [SMALL_STATE(1124)] = 13059,
  [SMALL_STATE(1125)] = 13064,
  [SMALL_STATE(1126)] = 13071,
  [SMALL_STATE(1127)] = 13078,
  [SMALL_STATE(1128)] = 13083,
  [SMALL_STATE(1129)] = 13090,
  [SMALL_STATE(1130)] = 13097,
  [SMALL_STATE(1131)] = 13104,
  [SMALL_STATE(1132)] = 13111,
  [SMALL_STATE(1133)] = 13118,
  [SMALL_STATE(1134)] = 13125,
  [SMALL_STATE(1135)] = 13132,
  [SMALL_STATE(1136)] = 13139,
  [SMALL_STATE(1137)] = 13146,
  [SMALL_STATE(1138)] = 13153,
  [SMALL_STATE(1139)] = 13160,
  [SMALL_STATE(1140)] = 13167,
  [SMALL_STATE(1141)] = 13174,
  [SMALL_STATE(1142)] = 13181,
  [SMALL_STATE(1143)] = 13188,
  [SMALL_STATE(1144)] = 13195,
  [SMALL_STATE(1145)] = 13202,
  [SMALL_STATE(1146)] = 13209,
  [SMALL_STATE(1147)] = 13216,
  [SMALL_STATE(1148)] = 13223,
  [SMALL_STATE(1149)] = 13230,
  [SMALL_STATE(1150)] = 13237,
  [SMALL_STATE(1151)] = 13244,
  [SMALL_STATE(1152)] = 13251,
  [SMALL_STATE(1153)] = 13258,
  [SMALL_STATE(1154)] = 13265,
  [SMALL_STATE(1155)] = 13272,
  [SMALL_STATE(1156)] = 13279,
  [SMALL_STATE(1157)] = 13286,
  [SMALL_STATE(1158)] = 13293,
  [SMALL_STATE(1159)] = 13300,
  [SMALL_STATE(1160)] = 13307,
  [SMALL_STATE(1161)] = 13314,
  [SMALL_STATE(1162)] = 13321,
  [SMALL_STATE(1163)] = 13328,
  [SMALL_STATE(1164)] = 13335,
  [SMALL_STATE(1165)] = 13342,
  [SMALL_STATE(1166)] = 13349,
  [SMALL_STATE(1167)] = 13356,
  [SMALL_STATE(1168)] = 13363,
  [SMALL_STATE(1169)] = 13370,
  [SMALL_STATE(1170)] = 13377,
  [SMALL_STATE(1171)] = 13384,
  [SMALL_STATE(1172)] = 13389,
  [SMALL_STATE(1173)] = 13396,
  [SMALL_STATE(1174)] = 13403,
  [SMALL_STATE(1175)] = 13410,
  [SMALL_STATE(1176)] = 13415,
  [SMALL_STATE(1177)] = 13422,
  [SMALL_STATE(1178)] = 13427,
  [SMALL_STATE(1179)] = 13434,
  [SMALL_STATE(1180)] = 13441,
  [SMALL_STATE(1181)] = 13448,
  [SMALL_STATE(1182)] = 13455,
  [SMALL_STATE(1183)] = 13462,
  [SMALL_STATE(1184)] = 13469,
  [SMALL_STATE(1185)] = 13476,
  [SMALL_STATE(1186)] = 13481,
  [SMALL_STATE(1187)] = 13486,
  [SMALL_STATE(1188)] = 13491,
  [SMALL_STATE(1189)] = 13498,
  [SMALL_STATE(1190)] = 13503,
  [SMALL_STATE(1191)] = 13510,
  [SMALL_STATE(1192)] = 13517,
  [SMALL_STATE(1193)] = 13522,
  [SMALL_STATE(1194)] = 13529,
  [SMALL_STATE(1195)] = 13536,
  [SMALL_STATE(1196)] = 13540,
  [SMALL_STATE(1197)] = 13544,
  [SMALL_STATE(1198)] = 13548,
  [SMALL_STATE(1199)] = 13552,
  [SMALL_STATE(1200)] = 13556,
  [SMALL_STATE(1201)] = 13560,
  [SMALL_STATE(1202)] = 13564,
  [SMALL_STATE(1203)] = 13568,
  [SMALL_STATE(1204)] = 13572,
  [SMALL_STATE(1205)] = 13576,
  [SMALL_STATE(1206)] = 13580,
  [SMALL_STATE(1207)] = 13584,
  [SMALL_STATE(1208)] = 13588,
  [SMALL_STATE(1209)] = 13592,
  [SMALL_STATE(1210)] = 13596,
  [SMALL_STATE(1211)] = 13600,
  [SMALL_STATE(1212)] = 13604,
  [SMALL_STATE(1213)] = 13608,
  [SMALL_STATE(1214)] = 13612,
  [SMALL_STATE(1215)] = 13616,
  [SMALL_STATE(1216)] = 13620,
  [SMALL_STATE(1217)] = 13624,
  [SMALL_STATE(1218)] = 13628,
  [SMALL_STATE(1219)] = 13632,
  [SMALL_STATE(1220)] = 13636,
  [SMALL_STATE(1221)] = 13640,
  [SMALL_STATE(1222)] = 13644,
  [SMALL_STATE(1223)] = 13648,
  [SMALL_STATE(1224)] = 13652,
  [SMALL_STATE(1225)] = 13656,
  [SMALL_STATE(1226)] = 13660,
  [SMALL_STATE(1227)] = 13664,
  [SMALL_STATE(1228)] = 13668,
  [SMALL_STATE(1229)] = 13672,
  [SMALL_STATE(1230)] = 13676,
  [SMALL_STATE(1231)] = 13680,
  [SMALL_STATE(1232)] = 13684,
  [SMALL_STATE(1233)] = 13688,
  [SMALL_STATE(1234)] = 13692,
  [SMALL_STATE(1235)] = 13696,
  [SMALL_STATE(1236)] = 13700,
  [SMALL_STATE(1237)] = 13704,
  [SMALL_STATE(1238)] = 13708,
  [SMALL_STATE(1239)] = 13712,
  [SMALL_STATE(1240)] = 13716,
  [SMALL_STATE(1241)] = 13720,
  [SMALL_STATE(1242)] = 13724,
  [SMALL_STATE(1243)] = 13728,
  [SMALL_STATE(1244)] = 13732,
  [SMALL_STATE(1245)] = 13736,
  [SMALL_STATE(1246)] = 13740,
  [SMALL_STATE(1247)] = 13744,
  [SMALL_STATE(1248)] = 13748,
  [SMALL_STATE(1249)] = 13752,
  [SMALL_STATE(1250)] = 13756,
  [SMALL_STATE(1251)] = 13760,
  [SMALL_STATE(1252)] = 13764,
  [SMALL_STATE(1253)] = 13768,
  [SMALL_STATE(1254)] = 13772,
  [SMALL_STATE(1255)] = 13776,
  [SMALL_STATE(1256)] = 13780,
  [SMALL_STATE(1257)] = 13784,
  [SMALL_STATE(1258)] = 13788,
  [SMALL_STATE(1259)] = 13792,
  [SMALL_STATE(1260)] = 13796,
  [SMALL_STATE(1261)] = 13800,
  [SMALL_STATE(1262)] = 13804,
  [SMALL_STATE(1263)] = 13808,
  [SMALL_STATE(1264)] = 13812,
  [SMALL_STATE(1265)] = 13816,
  [SMALL_STATE(1266)] = 13820,
  [SMALL_STATE(1267)] = 13824,
  [SMALL_STATE(1268)] = 13828,
  [SMALL_STATE(1269)] = 13832,
  [SMALL_STATE(1270)] = 13836,
  [SMALL_STATE(1271)] = 13840,
  [SMALL_STATE(1272)] = 13844,
  [SMALL_STATE(1273)] = 13848,
  [SMALL_STATE(1274)] = 13852,
  [SMALL_STATE(1275)] = 13856,
  [SMALL_STATE(1276)] = 13860,
  [SMALL_STATE(1277)] = 13864,
  [SMALL_STATE(1278)] = 13868,
  [SMALL_STATE(1279)] = 13872,
  [SMALL_STATE(1280)] = 13876,
  [SMALL_STATE(1281)] = 13880,
  [SMALL_STATE(1282)] = 13884,
  [SMALL_STATE(1283)] = 13888,
  [SMALL_STATE(1284)] = 13892,
  [SMALL_STATE(1285)] = 13896,
  [SMALL_STATE(1286)] = 13900,
  [SMALL_STATE(1287)] = 13904,
  [SMALL_STATE(1288)] = 13908,
  [SMALL_STATE(1289)] = 13912,
  [SMALL_STATE(1290)] = 13916,
  [SMALL_STATE(1291)] = 13920,
  [SMALL_STATE(1292)] = 13924,
  [SMALL_STATE(1293)] = 13928,
  [SMALL_STATE(1294)] = 13932,
  [SMALL_STATE(1295)] = 13936,
  [SMALL_STATE(1296)] = 13940,
  [SMALL_STATE(1297)] = 13944,
  [SMALL_STATE(1298)] = 13948,
  [SMALL_STATE(1299)] = 13952,
  [SMALL_STATE(1300)] = 13956,
  [SMALL_STATE(1301)] = 13960,
  [SMALL_STATE(1302)] = 13964,
  [SMALL_STATE(1303)] = 13968,
  [SMALL_STATE(1304)] = 13972,
  [SMALL_STATE(1305)] = 13976,
  [SMALL_STATE(1306)] = 13980,
  [SMALL_STATE(1307)] = 13984,
  [SMALL_STATE(1308)] = 13988,
  [SMALL_STATE(1309)] = 13992,
  [SMALL_STATE(1310)] = 13996,
  [SMALL_STATE(1311)] = 14000,
  [SMALL_STATE(1312)] = 14004,
  [SMALL_STATE(1313)] = 14008,
  [SMALL_STATE(1314)] = 14012,
  [SMALL_STATE(1315)] = 14016,
  [SMALL_STATE(1316)] = 14020,
  [SMALL_STATE(1317)] = 14024,
  [SMALL_STATE(1318)] = 14028,
  [SMALL_STATE(1319)] = 14032,
  [SMALL_STATE(1320)] = 14036,
  [SMALL_STATE(1321)] = 14040,
  [SMALL_STATE(1322)] = 14044,
  [SMALL_STATE(1323)] = 14048,
  [SMALL_STATE(1324)] = 14052,
  [SMALL_STATE(1325)] = 14056,
  [SMALL_STATE(1326)] = 14060,
  [SMALL_STATE(1327)] = 14064,
  [SMALL_STATE(1328)] = 14068,
  [SMALL_STATE(1329)] = 14072,
  [SMALL_STATE(1330)] = 14076,
  [SMALL_STATE(1331)] = 14080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(960),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1071),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(694),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1250),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1243),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1287),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1169),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1293),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1296),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(988),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1201),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_reserved_word, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1273),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1142),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1240),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1241),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1238),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1126),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1213),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1214),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1211),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1227),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1311),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1143),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1132),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1139),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1170),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(969),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1116),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1194),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1308),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1081),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1222),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1246),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1015),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1220),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1173),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1316),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1179),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1184),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1164),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1165),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1166),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1153),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1319),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1003),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1088),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_binding_word, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1182),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1206),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1242),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1298),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(924),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1153),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1319),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1070),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1073),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1088),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1089),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1287),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_job_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1182),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(81),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 2, 0, 31), SHIFT_REPEAT(1182),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 1, 0, 25),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directives, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 2, 0, 25),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1204),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1295),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(96),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(152),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat2, 2, 0, 0), SHIFT_REPEAT(1178),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1178),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1098),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 0), SHIFT_REPEAT(1227),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1174),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1250),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1181),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1172),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__directives_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1093),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(1243),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 1, 0, 25),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_run_statement, 3, 0, 25),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1121),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1156),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1163),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1138),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 2, 0, 25),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1123),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1152),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1105),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1155),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1108),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1157),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1158),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1159),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1114),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1115),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1160),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1117),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1118),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1161),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1119),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1120),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_messages_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_messages, 1, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1097),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unroled_message, 3, 0, 25),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__implicit_run_line, 2, 0, 23),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 1, 0, 25),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1111),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implicit_run_statement_repeat1, 2, 0, 45),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 10),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(765),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1242),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1298),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 3, 0, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 3, 0, 2),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1106),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__flow_statement, 2, 0, 28),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 2, 0, 34),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2, 0, 35),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 2, 0, 36),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 2, 0, 37),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_statement, 2, 0, 38),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 1, 0, 39),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 1, 0, 40),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 2, 0, 38),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 2, 0, 38),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1268),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1129),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1046),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 2, -2, 0),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1286),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 2, 0, 47),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_statement, 3, 0, 48),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 3, 0, 35),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 3, 0, 49),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_statement, 3, 0, 29),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generate_statement, 3, 0, 50),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 2, 0, 47),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 37),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 3, 0, 51),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 40),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 2, 0, 52),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_if_complement, 2, 0, 48),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 40),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 2, 0, 54),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keep_statement, 3, 0, 55),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_statement, 3, 0, 55),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 1, 0, 40),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_statement, 3, 0, 56),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1192),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 60),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_flow_reserved_statement, 3, -2, 0),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 4, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 62),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4, 0, 63),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seek_statement, 4, 0, 64),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_line, 2, 0, 0),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 65),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 4, 0, 37),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__runnable_complements, 3, 0, 54),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 67),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_complements, 3, 0, 54),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_by_complement, 2, 0, 48),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 40),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 2, 0, 54),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic, 4, 0, 69),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 5, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bound_operation, 2, 0, 0),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_line, 4, 0, 69),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 5, 0, 65),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 67),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__by_complements, 3, 0, 54),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 6, 0, 71),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 2, -2, 0),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_exec_binding, 7, 0, 71),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__invalid_collection_operation, 3, -2, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 7, 0, 75),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 76),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 7, 0, 77),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 75),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 8, 0, 79),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 76),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 81),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 82),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 83),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 77),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 84),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 8, 0, 85),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduce_statement, 9, 0, 79),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 81),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 82),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 86),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 83),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 87),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 84),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 88),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 85),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 9, 0, 89),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 86),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 87),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 88),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 90),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 10, 0, 89),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 11, 0, 90),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trivia, 2, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_doc_comment, 2, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_doc_comment, 2, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 1, 0, 0),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_end, 2, 0, 0),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [1125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, 0, 61),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 1, 0, 0),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_inline, 2, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 2, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 4, 0, 0),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1280),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(888),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1193),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1162),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lanes_complement, 3, 0, 66),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_lanes_keyword, 1, 0, 0),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1065),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 61),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1122),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1092),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(941),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(921),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1197),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(913),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(986),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1198),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1035),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 16), SHIFT_REPEAT(1035),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_definition_repeat1, 1, 0, 22),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1228),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1168),
  [1457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [1460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unroled_message_line, 2, 0, 23),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1130),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1133),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1026),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 4, 0, 0),
  [1485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 2, 0, 45),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1145),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1031),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1147),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1032),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1033),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pass_statement, 3, 0, 0),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1055),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [1532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0),
  [1534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cap_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1286),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unroled_message_repeat1, 1, 0, 25),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 70),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 5, 0, 72),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 6, 0, 74),
  [1551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_text_body, 3, 0, 0),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1004),
  [1557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 15),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 7, 0, 78),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 5, 0, 20),
  [1563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 20),
  [1565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 5, 0, 15),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1029),
  [1571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 3, 0, 0),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 24),
  [1577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [1581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1255),
  [1583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2, 0, 0),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agic_reserved_word, 1, 0, 0),
  [1593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1268),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1258),
  [1599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 3, 0, 0),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1234),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 6, 0, 27),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 3, 0, 0),
  [1611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 24),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 3, 0, 3),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_body, 1, 0, 0),
  [1621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 3, 0, 3),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_body, 1, 0, 0),
  [1629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(929),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 3, 0, 0),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, 0, 0),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_type, 1, 0, 0),
  [1639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 6, 0, 27),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [1643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1, 0, 0),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 29),
  [1647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 30),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1, 0, 5),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 4, 0, 0),
  [1657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 2, -2, 0),
  [1659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1103),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [1663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1127),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1127),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 4, 0, 0),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 32),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 7, 0, 33),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 4, 0, 0),
  [1675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with, 4, 0, 6),
  [1677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_runnable, 1, 0, 0),
  [1679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reduce_inline_block, 4, 0, 43),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 2, 0, 0),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_psyche, 4, 0, 7),
  [1685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skill, 4, 0, 7),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 7),
  [1689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prompt, 4, 0, 7),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context, 4, 0, 8),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct, 4, 0, 8),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_suffix, 1, 0, 0),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1, 0, 9),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1197),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(937),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 4, 0, 11),
  [1713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 4, 0, 0),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1060),
  [1717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 33),
  [1719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 7, 0, 32),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(948),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [1725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 42),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 43),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 5, 0, 44),
  [1731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [1733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_agic_reserved_message, 3, -2, 0),
  [1739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 1, 0, 0),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [1743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 1, 0, 0),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1207),
  [1747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_body, 5, 0, 0),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic, 8, 0, 46),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 5, 0, 0),
  [1753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1011),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [1761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1198),
  [1763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [1767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 14),
  [1771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chore, 4, 0, 14),
  [1773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [1775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1000),
  [1777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 4, 0, 11),
  [1779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_body, 5, 0, 0),
  [1781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 8, 0, 46),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 5, 0, 0),
  [1785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_definition, 6, 0, 59),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_value, 2, 0, 0),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_route_value, 2, 0, 0),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_body, 6, 0, 0),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1057),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 15),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 68),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0),
  [1833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recall_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1007),
  [1836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0),
  [1838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_route_value_repeat1, 2, 0, 0), SHIFT_REPEAT(1207),
  [1841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(952),
  [1843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(963),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1061),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent, 1, 0, 0),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__from_complement, 4, 0, 73),
  [1853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__until_complement, 3, 2, 80),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1208),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body_line, 2, 0, 23),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1259),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [1863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__route_directive_key, 1, 0, 0),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1279),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow_name, 1, 0, 0),
  [1879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agic_name, 1, 0, 0),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_agic_body, 2, 0, 47),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1307),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1101),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, 0, 13),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1297),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recall_source, 1, 0, 0),
  [1903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18),
  [1905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 18), SHIFT_REPEAT(781),
  [1908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_key, 1, 0, 0),
  [1912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query_directive_key, 1, 0, 0),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1255),
  [1918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_using_complement, 2, 0, 48),
  [1920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1288),
  [1924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_if_complement, 2, 0, 48),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1186),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1325),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1318),
  [1936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_by_complement, 2, 0, 48),
  [1942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(1068),
  [1951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1221),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1284),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1300),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1313),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__repeat_count_complement, 2, 0, 57),
  [1973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_ref, 1, 0, 0),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [1983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_value, 1, 0, 0),
  [1985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__order_complement, 1, 0, 41),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1229),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1231),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4, 0, 17),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_ref, 1, 0, 0),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1251),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1252),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1265),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1266),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1272),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1274),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1289),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1290),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1303),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1304),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1283),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1314),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1315),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1270),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1271),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [2067] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1237),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1199),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1017),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [2083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1305),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1183),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1275),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1277),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [2101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, 0, 12),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1215),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [2107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3, 0, 19),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4, 0, 26),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1185),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1281),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1328),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [2123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [2125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3, 0, 12),
  [2127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_position, 2, 0, 53),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1322),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [2133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, 0, 0),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [2143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_name, 1, 0, 0),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [2147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_name, 1, 0, 0),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1150),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [2157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1085),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [2167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1013),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [2195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cap_text_body, 3, 0, 0),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [2205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [2207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1260),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(931),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1082),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [2233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_doc_tag, 5, 0, 21),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [2243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [2247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [2249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_op, 1, 0, 0),
  [2251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [2253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1249),
  [2255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [2257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1049),
  [2259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [2261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [2263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [2265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [2267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [2269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [2271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [2273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [2275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [2277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [2279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [2283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [2285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [2287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [2289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [2291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [2293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [2295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_job_name, 1, 0, 0),
  [2297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [2301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [2303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [2305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_context_name, 1, 0, 0),
  [2307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [2309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [2311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [2313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [2315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [2317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [2319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1262),
  [2321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [2323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [2325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1312),
  [2327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(909),
  [2329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [2331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [2333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [2335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [2337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(901),
  [2339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [2341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [2343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [2345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1189),
  [2347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [2349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [2351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1176),
  [2353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_complement, 2, 0, 58),
  [2355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [2357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [2359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [2361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [2363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1187),
  [2365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1063),
  [2367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [2369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [2371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1069),
  [2375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruct_name, 1, 0, 0),
  [2377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cap_body, 1, 0, 0),
  [2379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1072),
  [2381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1, 0, 0),
  [2383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [2385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1075),
  [2387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_name, 1, 0, 0),
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
};

static const bool ts_external_scanner_states[36][EXTERNAL_TOKEN_COUNT] = {
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
  },
  [5] = {
    [ts_external_token__agic_raw_text] = true,
  },
  [6] = {
    [ts_external_token_newline] = true,
    [ts_external_token__exec_binding_start] = true,
    [ts_external_token__collection_binding_start] = true,
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
    [ts_external_token__until_start] = true,
  },
  [13] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__from_start] = true,
  },
  [14] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [15] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
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
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [20] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
  },
  [21] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__line_start] = true,
    [ts_external_token__until_start] = true,
    [ts_external_token__flow_raw_text] = true,
  },
  [22] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__directive_start] = true,
  },
  [23] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__comment_start] = true,
    [ts_external_token__indent] = true,
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
    [ts_external_token__dedent] = true,
    [ts_external_token__line_start] = true,
  },
  [28] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token_indented_raw_text] = true,
  },
  [29] = {
    [ts_external_token_blank_line] = true,
    [ts_external_token__text_indent] = true,
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
    [ts_external_token__until_start] = true,
  },
  [35] = {
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
